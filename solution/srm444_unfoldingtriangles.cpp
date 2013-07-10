/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10484
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

class UnfoldingTriangles {
public:
    int solve(vector<string> grid, int unfoldLimit);
};

int UnfoldingTriangles::solve(vector<string> grid, int unfoldLimit) {
    int ret;
    return ret;
}


int test0() {
    vector<string> grid = {".../", "../#", "./#/", "/#//"};
    int unfoldLimit = 4;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> grid = {".../", "../#", "./#/", "/#//"};
    int unfoldLimit = 2;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> grid = {"////", "////", "////", "////"};
    int unfoldLimit = 5;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> grid = {".....#...", "....###.."};
    int unfoldLimit = 10;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> grid = {"./#....", "...../.", ".....#."};
    int unfoldLimit = 2;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> grid = {"...../", "..../#", ".../#/", "../#/#", "./#/#/", "/#/#/#"};
    int unfoldLimit = 6;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> grid = {"...../", "..../#", ".../#/", "../#/#", "./#/#/", "/#/#/#"};
    int unfoldLimit = 2;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> grid = {"...../", "..../#", ".../#/", "../#/#", "./#/#/", "/#/#/#"};
    int unfoldLimit = 1;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> grid = {"...../", "..../#", ".../#/", "../#/#", "./#/#/", "/#/#/#"};
    int unfoldLimit = 5;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> grid = {"#//#", "#//#", "####", "///#"};
    int unfoldLimit = 4;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
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
    vector<string> grid = {"/#./.#/..#/#..", "/...#./#.#/.//", "##/#.////.//./", "//#/#.##.#.../", "/#/..##.//##.#"};
    int unfoldLimit = 1;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
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
    vector<string> grid = {"#..#...#.../#", "///.#/#/##.##", "#####..#...#/", ".###/.//..../", "../##./..#/#.", "###/#/..//./#", ".##.#/##./#//", "###//###.##/#", "/..###//#.###", "./#//./######", "...#/..././#/", "/#./..##./#/.", "./##.#.#/....", ".//..#...///#", "#/#./#/./#../", "/#/..#/###.#.", "/#.#.###/##.#", "#/##/#/###./.", "/./#/##.///.#", "./#.###/..../", "///./.#.#..#/", "/#.//##.###/#", "#/..#.#././..", "..#.##../../#", "././/#./##/#/", "/#.#.##/###/.", ".#../#..#/../", "/.#/####.#...", "/.././#/.#//#", ".//##.//#.#..", "#/.#..#.//#/.", "/#/.#./#/#./.", "#.####.#/././", "//.#./.....##", "#/#.///.#..#/", "#..//...//#/#", "..#.#/.#/##//", "####.#./..##.", "##./#/#..#..#", "/..##.##//.#.", "./#.///#/##.#", ".///..#/.#/.#", "/#./###//./#/"};
    int unfoldLimit = 59;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> grid = {"///.//.#..//...//.#/#/.#.//.#//././.##./", ".////..#.###/##/./..#..../#.//#.#///.##/", ".//#.##/#/.//./#/.#//#/..#..##.//##.//#/", "##./.###/##/....#//./#.##/.##//##..###/.", "#/#/.#.#/#//././##.//.#../#//./#..///#/#", "/.#/#/#../.####/#.#././././#.##...##/./#", "/#//##//#/..#../#./././././.../.#/./##/#", "./.#...//#/##//.//#/##../.##.##////#./#/", "#/.#./#.//#./#/#/./..##./##//...#.//.#/#", "#.#.#//#.#/##.#/#./#/##./#.##/##/.#/.../", "#./#....#//..##.####.//.#./#..##/##///..", "#..#.#../#//.#/#/..//#//#//./../.#..#//.", "##/.###./.#...##./#../#/////.###//#.#.#.", "##...#.##.##/...#/##//#/...###.//.#.//./", "#./###.....#/###..#////#.#//.////##/.##.", "#./#./#.#/.##//.//###.//.//.///#./#/////", ".#//...././/...#../.#//./#//.#/#//##/#..", ".#./#/#./.../..#.///.#/#../##/###/##./..", "#../.#.###.../.#.//#.#####///##/##/./###", "/#.....///../#//./#.#..##.././....#.#//#", "//....//......//#../###//.../.#.//###.#/", ".##///#/#./#//.//#.####./.#/..../..///##", "..../#.#.#//#//..#.//#./####../.##/#/#/#", "/.#./...././.###/.#./../.../////.###//.#", ".##////#./#.##/..../..//.#//./.#././//.#", "#.#/./#.#//##//##/..//.#./##///#./././##", "./#.#.#/#//#./#..//#./...//#.////.#../.#", "#/#..#/...#/#////./.#.##//././//..##/.##", "#/##/../##.##././##.##.#//.#.#./../////#", "##/.#//.../#./#///###/#########/#.##.#.#"};
    int unfoldLimit = 127;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> grid = {".##..#//#.#/.///./#/#./#.#.#.##/#/.//.#//.#", "/.#.##/.#./../#/.....//../.#/.###.#/.//#../", "/.##/..//#../#/#//.#/####/###.#.//./.#####/", "/#/./###////.././//###/////#/#.//#/##///##/", "#/#/#..##/./..#.#//#/#../###/....//././/###", "#.//./#//#../.###./###/##..#.////.#./#./#//", "####.//./#...//#/.#/..///#.#.../././#/././.", ".#./...//.##/./#.#////./.#.#.#/./.#...###//", "#/#/##.#//.#//.##//..#/.#.##.//#/###//##.#.", "/.././#./##.///..##.#.###//#./.#.###..###/.", "./#.#///#./#../#/...././##././#////.#//./##", "/.##/.##.####.###//#../.#.#/#../#././////#/", "/.//##..//#./...#/.##/##//#./###/.//.././/#", ".##/../###//.#.///#./#.././...#/#.##/..#//.", "...##.#/./#..#//.//##.#/#/.#//#.#///##///#/", "###////#...././#/.//.###.///#../#/#..##/#//", "/../#...#/#/#.#/.##///#..#.######/...#.####", "/#.#./..//##/...//.#.///##./##.#/#/../#/../", ".#/.//.#//./###.#.//#/#///.##.#/#./...../#.", ".///##//##.#./.#..##..///.##///./..##...///", "///////.//.#.../.#/##//////#....#..#.#/#...", "#.##//././#..###/#/#//./..###//.//##/#../##", "###./#././/#....#.###..##..#.//###./..##...", ".#/#.//#/.##./#//././//.#../.././..#//.#/#/", "#..#..#/#//..##/../#..#//.#...##../#./.#//.", "../#/.##..##//../#..#/#.##..//#...#/###//#.", "##/###.//#//./####...#/#/#././##.#.##/#//./", "//##.//#//../....#.#.###.../#/..././/.##.//", "#.#./#.#.#.././//././..#//.#/#///.#/#..///#", ".####.///#./.#.#/##./#./.#/.#/.#/../.#.##//", "##/#.///###//#..##.....//#.#///.///#///#./#", "///./#//./.#/..#.././##..#/#./#.#/.#.#/.#//", "#..###.#.#./##/.//.#././/.#/./#......#.#.#/", "/###.#.##.#/.///.#.#./.#./#.###..////##/.#/", "/#..#/.#./.#..#/##../..../#.#/#..#/././##./", "....#./#.#////#.#//..././##/.#.#.#####././/", "##/.#/###.#//#.#../..#./#./#./.#././#/...#.", "#####.###/#.#/#..##/#/##..//....###/#.#.//."};
    int unfoldLimit = 2;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
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
    vector<string> grid = {"/#./#////#.////..##./.###.#/##./#...#..///#//.", "###////.././.####/####.///##..##////#//##/.#//", "//##..//././/#/.####../.####..#.//.#.//./.#/#.", "#/.../.#/#/./#/#./.#./####/#/#../././//////#/#", "#.##.###//../..#/###./#///...#.#//..//..../#/.", "/.#.#/./##./#./.##./#/.#/.##/##.////./.#/../#/", "./.#/##././.##../.#./..//././#/#////#../#/.###", ".////..//#./#.###..#.//.//..####.#////.//.#.#/", "#/.#//.#/./##///./#.#...././/#/..#.#.#/###//#.", "/##..##..###/##./......##//.#/#/.././//...../#", "././...///#/.//..###../////#.../.#..##/#/./#./", "#/#.#.///#///#.###../////.#...//#//./#./#./#./", "//#./..#/.#/...//./.#././.##...#/./.#.###././#", "#..../..#/#//./.#//./#././###/.#//#./##/.##/#/", "#//..#.#./###/.####////.///.#.#/////...././//#", "/#/./../././#/#/#//////#//...#../#//###.#/.###", "###/#././.#...#./#/#.##..##../.#../#.#///.#/##", "##.//.//./..#///.#/../.#/#.//#.//##/####//.#//", ".#/#/.#/#/.#/./#/..#/.//.#.#####/#/##./.#./#/#", "/.#/.##/./.#..//##//.//./#/.#..//./##//.//..//", "##/.../..##./#####...##./..#.##..##/.#/////#/.", "#./..#./#.#//#/#.../....###.#.##.##..#/./#/./.", "#/##..###.#######//..//#.#./../#./..#/.//.#.#/", ".###/..///.//.#..###./.#//###//#.//#/#./#...#.", "###/./.#./.#...#//#/../.###.././//#.../#./#//#", "././.#///./#///.///./.#.....#.##.#///#.##..#/.", "//.....#/##/#/..../####..#/.##///..#/#/...###/", "###/..//#..#..##..#.#/.##//./#.#/#/..///.#/#/#"};
    int unfoldLimit = 165;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> grid = {"///.##/#/##.//.//..//", "/..//#/##./#//../../#", "##////#.//#../#/.///.", "#/...#/###.////.//.#.", "/.#././/#.//###..../#", ".//#.../#.#.//##//..#", "#.#..#/#//./#.#./###.", "./.#/##.##/.././##.##", "#..//#...///#.//.#/##", "/.###.#././/#.../..#/", "/###.///.#/#/#///./#.", "..##/../#../##/..##.#", "##/.##.##..///#/.....", "###//./.#/../.#/#.//#", "#..//#//#..../....#/#", "##..#/.//.#/#./###///", "//##.////###..#/#.#/#", "//.#///#/#///.##..#.#", "//../#./...##././..##", "/#//././#./.#...//.#/", "//#/#/#..///#...#.#//", "//###///##//###/./#.#", "##//.../../##.#/.///#", "/##/##./#/#.#/../..//", "/#/.//...//////.#//#/", ".//..//#/...../../#/#", "..//..../#.//.//#..#/", "///##.##.#..###./#/#/", ".#.././#/././/.#...//", "#//...././/.#////#.#/", "#.././/##.#.#/./..##/", "/#/#/.##.##.#//./#.//", "/#./#/#.#//#.#.###/##", ".#///#././....//###//", "////.#./#/..././.#/#.", "##./##/#####.##/###//", "/..#.#/####/#.##//#/.", "...#.#/.#..#.#..#.#..", "#/..#/#/#//#......./#"};
    int unfoldLimit = 2;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> grid = {"#./..#../...////#/.#//../#/#.#/##..#//", ".####/#//#.#//.#/#/.#/#.#/..#..#..#../", "....///#////.#/##/.#/.###/.##//..#/.#.", "//#////./.##.###.//###..#/./##//##./#.", "/##/##.#../#/./###///.##././.#//##.#..", "#/#/.##../##.///.///./#./.#../##.#./..", "///#/#.#./#//.#//#.//##/.../#...#../..", "..##/./////#//#../..//..///////##/../#", "#.#../..#///...#./.#//#./#.../#/#./.#.", "..#../##../#./#.#///.////##.#.///##/#/", "###.././///#/.//..#././//####./.###./#", ".###/./.##//##/#..#/./....//./.#...#/.", ".#..#.../.#///#/#/./#/.//##/../#../#/#", "/.##/##/...#/./###...#/.../////#///../", "#/###.#/../.#....#//.////./#.#.##/../.", "..././../#/##.//#.//..#/##//./.##/##/."};
    int unfoldLimit = 3;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
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
    vector<string> grid = {"/##/#/.#/.//#/./#.##", "#.##./#.##../.#./#./", "/.#//#//#/.#.//#/.#/", "#//.////#/./#/#.//.#", "///#././/.//#/./#/#.", "##.../.#/../.#.##.#/", "/#/./#/./../####//#.", "///#...#/./#/././../", "..##/##../###.//..//", "##//##/#/.#//####/#.", "//./.#.###...#../##/", "//.#/.#//...//#/.../", "///.#/.#/####.##...#", "#.././.##///##.#.///", ".//.#.#/..#.##.#/.##", "./#/../..#.#/////../", "#./.#.#././/#/././##", "//#..//.#.#//.#/#../", "/./#.///##.###./.#.#"};
    int unfoldLimit = 8;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> grid = {"./#/#////..//#/.#//#..###.//..///./.#...//.", "#.//.#/.//#/.#..#//#///##./#/##//.##/###/.#", ".../.#...##//##./././../../#.//#.###../#/#/", "#/.#.###/#...///##/.###...#/.#.#.#/.#//../#", "##..////..../.##/.#////./..../#//#.#/#/#.##", "##.#/.#././#..#//#///#/.###.#.././/#./.#./#", "/#.###/##///...##/#...#/#/.##/.##.##...//.#", "#.##/#####//##//.////.#/./..##../#..//#.##/", ".##/.#/##/.////#.#/#####././.##././////#.#.", "##.././.###//#/.##././/#/#././.../##///.//.", "/#..#.///...##./#/.//.#../#../##/#/#/..../#", ".#/./.#.#/#./###/#.#/.//./#.#.../.#..///#.#", ".#./##//.#//##/##.../././###/#.../..##/./#.", "../#.#/.#..#.//#/.#../###..////.#./#.#.##..", ".#/./###.#/./##/#/..#.////#../#...#/###.//.", ".///#//###//#/##//#.#..#.###/..//##.#./#//#", "#.///##.#//#///#.#...///#./../...####.///#.", "//#//.#/#//#/.#......#../../.#/####////.//.", "#.##.#/#/##//./....//##//#/.##/.###../../.#", "###/.#./#..//.#//#/./.#///.//##/./#./.###..", "/.##.#//##/###/#././///./##/##../##///../##", "//././/.#//..#../.#//././#/...###/#.#..##/.", "#./.#..//#.#./#.../#//..##..//#...##/#./#..", "/.#../#///////.//./##/.##.../#.////#/##.///", "#####..//..###///././##.#./.##.//#..//..##/", "..////.#/.//..##/#./#./.#......#.#/.#.#.#./", "//#./././##.##/#.#/.#/./#/.##./#/#/.###..#/", ".//#.#//.#..#./##/#/#//#./#/#.##.##.../##.#"};
    int unfoldLimit = 1;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
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
    vector<string> grid = {"/.###...#..//#//./##/./##.###.///.###.//.#", ".//#/.///#/...../#.#/../##////./...//#./..", "##./#.//#..#/.#/##./#/#.##.../....##./#..#", ".#/#//.......#/#.../#../.#/.....//#/.#./##", "..//.//#./#/.//#/..#.///./#..##.##.##./#./", "/#/.#/#.#/./...##/#//.../..#/./#././.##///", "./#./##.#/#/.///#.###/...#..../#./#//.#./.", ".#..///.##..../../##/#...//.#.#///#//#../#", "..//##//././././../.../...//....#//.#..#..", "/#....##/###./##/./#./#/#.##.#....//#//#/.", "/.////#..##///.#/..##//.##/.#.././/...#../", "##/##/.##........##../../###/#/##.##./#/./", ".##.##//../..//#/../#././//././/./####.//.", ".///#./.....////./#//#//#/....##//#./.#/##", "#.///.../#.#/#/..#.##/#/###.//..#..../..#.", "...#.//..../#../#//.//.#####/./#..#./###..", ".#.//.//.#///#.#/.//#.##/./.#.//#./#//.//#", "././/#/#./..#./#/#....##..##.###..///.#/..", "//..////#//###/#..//.#./..././#/#//#..../#", "/.###/..#.###/#...#//...#/./...../#...../.", "/.../#.###./#.###///#..##/.#/##././.#/..#.", "/#..#/##.#./....###..##...///###/..//.//#.", "/////#/../#/#//.///###//.##/../.##/..../..", ".#/.#//#/.#////#/####//#....#/#/.#//#/#./.", "#/..//###.///#..#..../##./.#...///#/..#.#/", "//##./#//./.##.../###/#.#./#.#.#./#.##/#/.", "/#././#...//##/##..#.#./..##.#.##../#../..", "#/#./....##/..#/#./#/#.//.#/#./#/.....#///", ".#././..#/##.##./...//.#/.#/././#/////../#", "####./////..##//../..###/..#/#////#/.//##.", "////##.#.#/#.//..//.#./.#.//..#/#/..#/.//.", "#//#.##/#.##././/..//#//././#.....././//#."};
    int unfoldLimit = 90;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> grid = {"/##.#.##.#", "#//.###///", "..#...///.", "#//#////#.", "/#..#.//#/", ".//##//#//", "/#/##.#..#", ".#/#/###/#", "#..##..###", "/.#./#/...", "./.#/..#//", "/./##.////", ".#////#/##", "#//..#.#/#", "#.##/##/#.", "././/../.#", "./#./#/./.", "##////.##/", "./##.../..", "/....#..#.", "##/././#/#", "///##/###/", "#.#.#/#/..", "#./#/.#...", "/#.#./...#", "#/#...//##", "#/#/.#.#/#", "././../.##", "#/######.#", "//./##/...", "#.#./#.//#", "/##/#.#../", "/././#/.##", ".#/.##....", "#/...#//##", "..#/.###/#", "/.#//##//.", "/#././..#.", "../..##./#", "..#/#.#/..", "/#//.//#./", "##.##//..#", "#./#/##/..", "/#.#///###", "./##./##/#"};
    int unfoldLimit = 97;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
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
    vector<string> grid = {"./.###.///./#//.....//....##././..//./.#/./", "##/.../.#/##/#../..#/.///.//////..####.///.", ".###./##/##.//../#.##/#//#.//....#////////#", "../#/.#//.../#..///#//#.#./.#/.#/./../#.#//", "#/#////#.//../#../#...///.#.#..////./#.#./#", "//.#..#///#....#//.//.#.//.#./##.//./###.#.", "#/.//#/##//#/#/####//#./.../.#///###/##.//#", "###/#//..##../###/..#//#.#.##./../#.#/././.", "/#././#.....#/..//...#/.#..##./#.##/.#/#/##", "..///.#./##/..###.///.../...##///...##/.#/#", "/#../.#....##.##.#...#....##.//.##/...//##.", "../././##/###/.#//##..//#././//.#/.#///../.", "#.#..//../.../...#./.#////././//.///..#/./.", "/#..#.###.###/#/#.##/#..#.#..//###/.##.#///", ".##////./#.//#../.#.#///##//#//#//.#/./##//", "..//#.#/#./.#.#.##.#/..#//./#/#.##/./.####.", "//#.....////./.##../..#/###////....##/#/.#.", "##///..///##/##...#.//.///./#//..#/#/#.#../", "###//#/#.#./##..#/#/###..//./##/..//#./#./#", "..###/#//##//.##/#...#.##//#/#./....//.//#.", "/#//./#//.#/##..#.#//.../..###.//#..//.//##", "#./#.#//./...#/./##..#####..#..#/.//#/.#/./", "/##/.#/../##/#/###.///...#..../.#...#.#..#/", "..###/##/././##/#../#//#./..//#.#//./../#/#", "...###/#..#./#...#/...#//.//#/###/.##/#####", "####.#././/#/.###/#/####.#..#/##/#///#/##/#", "//#.#/#.........##././#.###...##..#/../.../", "#./#/.##.#/./#/...#.//#.#...//.##/./#/////."};
    int unfoldLimit = 1;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> grid = {"/#..#.#///...#/....#.#///..././/...#/##./..#//##", ".//.#..///#././/#.##/###.#.//////.#...//.#//#/##", ".//.#.//##.##..#/.//#./#..#//./.#.##.#.##.#///#.", "//###/./#//###.//......#//..../#././...//./..///", ".###.././#.#/.##///#/.....#//.##.././.#...##/##.", "#//......#//./#/.#/./#./##/.#.#/.##../.#//.#.//.", "..////#/..#/.#.///.#.#/....#/#/.##/..#.////..#./", "//#####./././###.##/#./#/..#/##/.//../..#..#/#./", "##./#/.#.##/../.#/.//#.#/.#/.//.###.//./../.....", ".#/#/##.##./.#/././#/###/##/./##/./##././/./.###", "#/./.##/..../#/.#/#./#./###./././#..##./#..#/#.#", "#/#/.///##.#/.#/#/.././/.#/#/.##..#/.#/.#/#.../.", "##//#...##/#/#/./.../##.#.//#/.../#/#/.#/./..#/#", "#./.#//./#.#//.###///#./#..####/././#/#.#/..#./#", "..../..##.#/../##///..//./##.#/###//.###/#.#//#/", "//.../#/..//./#.//.#.#/..#..///.##/#.///#../.#/#", "##.#../##/////./#../#///#///#/#....#./###.//../#", "#.#....#/...##/#.#/#./#../##.##/#.##./#.///.##.#", "#/../..//#//#..#.////.#...#..././.#./#./..#././.", "/##/..##///#/#/./.#.##.#.#//.//./#.#/.//..#.//.#", "###/#..#...///##..///#//#.././/..#/..///.#/...//", "/#///../##..#////##/./..##/...###//.#/#/.///##//", "#/.#/////..##/####.#.../#.#/..##///#/..#/....##.", ".#..#//#/..#.#.//##/...###/./#/.##.#/////.#../##", "..###/#####..##/../#//###//#.##/##/#.//.##.#/#/.", "/#./#/...//##///#.#//####/#...##//./.##...##../#", "//#.#.#//./....##.##//..#/...//##...//#.#.#/.##/", ".#..##.#/#/##/#/#.#////.##.#/./#..///#/##.#.//##", "../..##//..#//##/#././..#././/.#////#.//.##/#...", "..///..#/#..##.///#//./##.#..####/##//#/###.#/#/", ".#/#.#///#./.#//.///#..####/.########//.//./#//#", ".//#..#.##...#.#.###/#//.##/#.../####././.#/##/#"};
    int unfoldLimit = 175;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> grid = {"##/#/.//", "../#/./.", ".//.////", ".#//#/..", "/###.##.", "/./..##.", ".##.....", "/#/./.#.", "./##/.#.", "#/.///..", ".#./#//#", "///####.", "..#.#./.", "/#..###.", ".////#/#", "./#.#//."};
    int unfoldLimit = 2;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> grid = {"/##../.####/////#//#/.", "###.###//#.#/.###///..", "#./..#.#/...###.#.##/#", "./.#/../#...//#./#./##", "#///#/#....##////#/../", ".##.###.##//###.///./#", "/.//#.#/./#//..##.../#", "/.......//##//#././#..", "#...#//##././/.#.#././", "../..//...#/#//#/#/..#", "#/#/.#.##//##//./////#", "/##./#//#.#///./####./", "//#/##.....#.#..##.#.#", "./.#./#/##/.###.##//#."};
    int unfoldLimit = 34;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> grid = {"//#.#//#..#/#..#.#/..//./#./##########//#", "##.#/#/#.#..##./#/./.#/..//.####//#.###./", "./##//##.//.#.###/#.//./#./.../..#.##//##", "#../..#/#/#/../.#.///##./##..#///#.#/.#./", ".###./../../###//#/#.//#.##..//##.//.#/##"};
    int unfoldLimit = 1;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> grid = {"/#//#//#/###../##.../.##//.", "#.//#./#./#././#.#.../#..#/", "#..//##..../#//./...##//../", ".#....//../../###.#.#.#../#", "#///##/#/...#./#/.##//.###/", ".#.#/#/#...././/#.////#./.#"};
    int unfoldLimit = 11;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> grid = {"#././.##////#.///...#####", ".#/.#//..##/./.#/./##.##.", ".#/././#..#/.///./#./###/", "..//..#/.#/#/#/####/.#/#.", "./#//#..#.####.#####.//./", "./#..#.///#/./..#/////../", "/.#.#.#.#./#/#./#///##...", "/..###/##./#.#/#/./../.##", ".##/../##/.#///...##/./.#", "/##..##/##//.//#.#//...#/", "..#/####./#//#/.//#/...#.", "//#.//#.//#/#/.....#/##/.", "#..#././##..../##.../.#./", "..#..#.#//#/./##../.#/###", "/#####.//#.####//.##.//#/", "#.#/..#/./.##/##.//#/#/..", ".##.##/...##../..#//.#../", "#.#.//.//#//.#/././#/..##", "/##.##..././###.///.##.#.", "##//###.#..#///#/..#####/", "./#/#/#...//..#/#.##//##.", "/...#//.////.#////#./#//.", "#/#/#../#///./....//...//", "./.##//#....#/.//./##...#", "/./.././//..##././#./##.#", "##./#//.###..//#.///..//#", "/.#/..##./.#/##/.../.##//", ".#.////.#.//#///#/##/...#"};
    int unfoldLimit = 1;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> grid = {"../#####//..####/..#//###/.##.##/##//#...../", "././...#.#.../..##.#/../#/#/#....///..#//##/", ".//../.#/./##//.#/./..//#..///.##......./#./", "../.#/./../#.//...#..##.//.#/#..//##/###/../", "../##../#//.##....#####./////#.##./#.#.#/.//", ".#///./.../#//##...#.///...###/././//##///##", "/#..//././.#../../#.#.###.//#//.#/.#../#.###", ".././//./##/##.##.##..##//.../#.../..../#/.#", "###./#//#../...##/.#./#.#.///#..///####/../#", "//###..#.//#..#//#./..//#///#.//###.#/#.///#", "/.#//#.#/#.#/.#/././//#/##////..#/./#/../..#", ".##./.#.//##//./#../.#./..##.#/##../#/#./#/#", "#.../#.#..##...#.#.#//.#//#.##/#//./../#./#/", "/..#/##..#.#./....#//###/...#//.//##/###..#.", "/./..#.#../././/#/##...//###//####.#/#///../", "#.###//.#.##//##./##/#/.//#.###.#/.##././/#/", "../.###///#.##/./##.##///.#.//####.#./#./#//", "/../#/##././///#/#..#.#../##//.#/#//#.#..../", "/##.#../.#//../##/#.//#//###.######.//.##/#.", ".#./..#.#./.#/..#/.#/././/.#/.#.#.//./.#/##.", ".#/#.///.##//./.#/#.#/.#.##./#/////..#.//#.#", "#//..#....#/.#/##.#././#/../#./#/#...##/##/#", "....//#/#///#./.#//././///##.##./../####./##", ".##//###.##/#..##//#//.#/././#./#//.#././##/", ".////.//##.///#/#.##././#/.//..###.././###/.", "/#.///#./.#..###..#.#...#/.#/###.../####.//.", "/#..#/.#...#/..#####////#///###..#.##/#..//.", ".#/..###...///#...#.#/#/#///####///#...##/##", ".####/.#.///#/##.//.../#.##./..#./#/##//.#.#", "##/./#/.#.###./.####.##..#//#.#/.##.#./////#"};
    int unfoldLimit = 190;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> grid = {"..#/.....#.//#.#.#./##//#.#/./", "#/#///.#/.#../###//.#/.##.####", "..##..##.#.../#./.././#.//.##/", "/###/.//.#..#///.//##/////##/#", "/#/./..#./#/##.../././//..//##", "#./..///.##//#/#.##/../##./#.#", "#..#//./././.#.//.#./..#/##.##", "/.#./#../#/#.##//.//#...../#.#", ".//##/...//./////#/.////#..##.", "#/.//.#/..#..#/.#/././.#/./../", ".#.//..//###//./.#.//#/...#.#.", ".##///.#/#/#.#.#/##/#/.//###.#", "/.#/#//###.#////###./#.####/#/", "/./#..#/.////.##.#/#.##//.##./", "./#/..#/#.##/#../##/#/./.#.///"};
    int unfoldLimit = 34;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> grid = {"//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////"};
    int unfoldLimit = 1000;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 1035;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> grid = {"//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////"};
    int unfoldLimit = 2500;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 1275;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> grid = {"......../........./........./........./........./.", "......./#......../#......../#......../#......../#.", "....../##......./##......./##......./##......./##.", "...../###....../##......./#.#....../###....../###.", "..../####...../####...../####...../.###...../####.", ".../#####..../#####..../#####..../#####..../######", "../######.../######.../######.../######.../######.", "./#######../#######../#######../#######../#######.", "/##.#####./########./########./########./########.", "..................................................", "......../#......../........./........./........./.", "......./#......../#......../#......../#......../#.", "....../##......./##......./##......./##......./##.", "...../###....../###....../###....../###....../###.", "..../####...../####...../####...../####...../####.", ".../#####..../#####..../#####..../#####..../#####.", "../######.../######.../######.../######.../######.", "./#######../#######../#######../#######../#######.", "/########./########./########./########./#########", "..............#.....#.................#...........", "........#........./........./.....................", "......./#......../#......../#.....................", "....../##......./##......./##................../..", "...../###....../###....../###.........../...../#..", "..../####.....#####...../####...../..../#..../##..", ".../#####..../#####..../#####..../#.../##.../###..", "../######.../######.../######.../##../###../####..", "./#######../#######../#######../###./####./#####..", "/########./########.#########.....................", "..................................................", "......../............................/............", "......./#.........................../.............", "....../##.........................................", "...../###.........................................", "..../####.........................................", ".../##.##.........................................", "../######.........................................", "./#######........./................/..............", "/########......../................................", "...............././...............#...............", "..............././...............##...............", "............../././.............###...............", "............./././.............####...............", "...........././././...........#####...............", "..........././././...........######...............", "............................#######...............", "...........................########...............", "..................................................", "..................................................", ".................................................."};
    int unfoldLimit = 1;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> grid = {"......../..", "......./#/.", "....../##..", "...../###..", "..../####..", ".../#####.#", "../######..", "./#######..", "/########..", "..../..../.", "..#........"};
    int unfoldLimit = 3;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> grid = {"//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////"};
    int unfoldLimit = 1225;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 1275;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> grid = {"//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////", "//////////////////////////////////////////////////"};
    int unfoldLimit = 1225;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 1275;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> grid = {".../.../", "../#..//", "./.#.///", "/###...."};
    int unfoldLimit = 3;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> grid = {".../", "../#", "./#/", "/#//"};
    int unfoldLimit = 5;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> grid = {"."};
    int unfoldLimit = 12;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> grid = {"./#"};
    int unfoldLimit = 1;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> grid = {"..../", "...//"};
    int unfoldLimit = 2;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> grid = {"////.", "////.", "////#", "////.", "..#.."};
    int unfoldLimit = 10;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> grid = {"/", "#"};
    int unfoldLimit = 10;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> grid = {"/#"};
    int unfoldLimit = 1;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> grid = {"....####..#..///", "###.....////.///", "##..#..#..#..../", "../////#..#..///", "....////../.././", "..#########..///", ".#..#..#..#../..", "....####..#..///", ".////////.#..///"};
    int unfoldLimit = 10;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> grid = {"../", "./#", "/##", ".#."};
    int unfoldLimit = 122;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> grid = {".....#", "..../#", ".../##", "../###", "./####", "######"};
    int unfoldLimit = 10;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> grid = {"../#", "...."};
    int unfoldLimit = 1;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> grid = {"......", "......", "......", "..../.", ".../#.", "../###"};
    int unfoldLimit = 10;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> grid = {".#", "/."};
    int unfoldLimit = 1;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
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
    vector<string> grid = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "............................/.....................", ".........................../......................", "........................../.......................", ".........................//.......................", "........................///.......................", ".......................////.......................", "....................../////.......................", ".....................//////.......................", "....................///////.......................", ".................../..............................", "................../...............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int unfoldLimit = 2500;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> grid = {"/#", "##"};
    int unfoldLimit = 2500;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> grid = {".", ".", ".", "."};
    int unfoldLimit = 10;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> grid = {".....", ".../.", "../#.", "./##.", "...#.", "....."};
    int unfoldLimit = 5;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> grid = {".../.", "../#.", "./...", "/...#"};
    int unfoldLimit = 1;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> grid = {"../.", ".//#"};
    int unfoldLimit = 1;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> grid = {"..../", ".../.", "../#/", "./##.", "/././"};
    int unfoldLimit = 1;
    UnfoldingTriangles* pObj = new UnfoldingTriangles();
    clock_t start = clock();
    int result = pObj->solve(grid, unfoldLimit);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=13898&pm=10484
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
 
class UnfoldingTriangles {
public:
  int solve(vector <string>, int);
};
 
int UnfoldingTriangles::solve(vector <string> g, int up) {
  int n = g.size(), m = g[0].length(), ans = -1, i, j, d, p, mx, kr, ks, ok;
  for (i=0;i<n;i++)
    for (j=0;j<m;j++) {
      mx = up;
      for (d=0;d<=i && d<=j;d++) {
        if (i < n-1)
          if (g[i+1][j-d] == '#') break;
        if (j < m-1)
          if (g[i-d][j+1] == '#') break;
        ok = 1;
        kr = 0; ks = 0;
        for (p=i;p>=i-d;p--)
          if (g[p][i+j-p-d] == '.') {
            ok = 0;
            break;
          } else
          if (g[p][i+j-p-d] == '#') kr++;
          else ks++;
        if (!ok) break;
        if (kr == 0)
          if ((d+1)*(d+2)/2 > ans) ans = (d+1)*(d+2)/2;
        mx -= ks;
        if (mx < 0) break;
      }
    }
  return ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/