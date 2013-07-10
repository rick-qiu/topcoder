/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7353
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

class EscapeTheJail {
public:
    double findExit(vector<string> jail);
};

double EscapeTheJail::findExit(vector<string> jail) {
    double ret;
    return ret;
}


int test0() {
    vector<string> jail = {"@$"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> jail = {"$.", ".@"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> jail = {"@..$"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> jail = {"@#", "#$"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> jail = {"@........$"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 81.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> jail = {"..$....", "....#..", ".#.##$.", ".....#.", "..#..#.", ".#.....", "....@..", ".###..."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 130.8334268728003;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> jail = {"..$....", "....#..", ".#.##$.", ".....#.", "..#..#.", ".#.....", "....@.."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 109.11017808318881;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> jail = {".#...#.", "....###", ".$.....", "..#.##.", "#.$@#.#", "....##."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 9.544569041717937;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> jail = {"#...#", "...#.", ".....", ".$##.", ".$..@", "...##"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 25.75234317520232;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> jail = {".....#.", "##.####", "#...#..", "####..#", ".....##", ".....#@", "#.##.$."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> jail = {".....#.", "##.####", "#...#..", "####..#", ".....##", ".....#@", "#.##.$."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> jail = {"$.#.......", "..$..##.#.", "......#@.#", "..#.$##...", ".###.###.#", "..##..##.#", "#.#...#..."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 200.0684584980229;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> jail = {"##.#...#..", "....##....", "#.#...##.#", "#.#..##.##", ".####.#.##", "...#...#..", ".#.#......", "###.#####.", "##@.##....", "##.$#..##."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> jail = {"##$#..$$..", "....###.@.", "###..###.#", "####.#####", ".####.#.##", "..##.#$##.", ".#.#.#..#.", "###.######", "##.###.###"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 10.133333333333333;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> jail = {"#..#..#..", ".##.....@", "....##...", "....#.#..", ".....$...", ".#.......", "..#......", ".#.......", ".#..##...", "..#......"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 151.03282732239734;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> jail = {"...$......", "..........", "...$.....$", "$.........", "......$...", ".....$....", ".......$..", ".........@", "..........", ".........."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 30.45012400742604;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> jail = {"@.#..#....", "##..#....#", "##.....#..", "#.##......", ".##..#.#..", "##..#....#", "..#...#..#", "#......#.#", "..$.......", "#.#......."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> jail = {"###.##..##", "$..@##..#.", ".##.##..##", "...#.....#", "..####...#", "##.#.....#", "##..##.###", "##.##.....", "#.....#...", "#.##....##"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 20.99999999999999;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> jail = {".#.###.#..", "..........", "..$#$.###.", "#.#..#...#", "..#.#.#..#", "##..###...", "#..#.#.#..", "##.#..#@..", "#..##.#..#", "#.......#."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 956.4999999999698;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> jail = {"..#.#####.", "#####..###", "#.#######.", "###.#..###", "..###$##.#", "..#######.", "#.########", "#########.", "#####.#@#."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
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
    vector<string> jail = {".##.....#", "#$...##..", "......##.", ".#.......", ".........", "....#.#..", ".....#.#.", "....#.#..", "..#.@....", "........."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 332.4079666605024;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> jail = {"..........", ".@........", ".......$..", "..........", "..........", "....$.....", "..$.......", "...$......", "$.$....$..", ".........."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 56.71594851381519;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> jail = {".#...#.###", ".###.#.##.", ".#.##....#", "..#.##...#", "#.$.#####.", ".#..####.#", "#..##..@.#", "##.#....##", "##........", ".#.#.#...#"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 387.40572937829705;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> jail = {"...#..###", ".##..#.#.", ".$.$#.#.#", "##.##...#", "$#....$@$", "#....#.#.", "...#$$#..", ".#$##.#.#", "#$....#.#", "##$##...."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 3.2618943571601977;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> jail = {"###.###...", "#......#..", "#.#..#####", "...##@..#.", "####...$#.", ".#....#.##", "#.........", "#.###..###", "#...#####.", ".#.##.#..."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 40.7842003372259;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> jail = {"##..###$.#", "..#.##.###", ".####..###", ".######..#", "#...##.#..", "###@.###.#", "##.##.#.#.", ".#..##.###", "##.###.##."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
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
    vector<string> jail = {".$..$$$.$.", "....$$..$$", "$......$..", "$...$..$$.", ".....$...$", ".$....$$.$", "$.$$.$$$$$", "$$....$...", "..$@..$$..", "$.$$.$..$."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8174232602386042;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> jail = {"$$$$$$$.$$", "..$.$$..$$", "$$$$$$.$$$", "$$$.$$$@$$", ".$..$$$$$$", "$$.$$$$$$$", "$$$$$$$.$$", "$$..$$$$$$", "$$$$$$$$$$", "$$$$$$..$$"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> jail = {"#..#..#", ".##....", ".$##.#.", "##..#.#", "###.#..", "....@..", "##.#..#"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
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
    vector<string> jail = {".##......#", "...@..#..$", "..#.....#.", "..#.#.##..", ".#.#.##.#.", "###...##..", ".##.###..."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 211.9717261904743;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> jail = {"$@$##$$###"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> jail = {"#", "#", "#", "#", "#", ".", "$", ".", ".", "@"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 9.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> jail = {"..", "..", ".@", "..", "..", "##", "..", "#$", "..", ".."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> jail = {".#...##@..", "........$#"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 17.999999999999957;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> jail = {"#.....#.#.", "..@###$...", "#.#..##...", "...###...#", "..#.#.....", "..#.#..#..", "###.####.#", "#.#..##.##", ".####.....", "#.##..##.."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> jail = {"#..##..##$", "#.#.##@.#.", "....####..", "##..#.###.", ".#.#.###..", ".###..###.", "#####.#.#.", "####......", "..##....#.", "..#.#.#.#."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> jail = {".#.###.#..", "..........", "..$#$.###.", "#.#..#...#", "..#.#.#..#", "##..###...", "#..#.#.#.@", "##.#..#$..", "#..##.#..#", "#.......#."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 50.36075268817196;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> jail = {".####.#..#", ".######..#", "#.#..#.#.#", "##.#..#..#", "#..@######", "...#.....#", "#.#.....##", ".#.$#...##", "####.###.#"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> jail = {"....##...", ".$.....$.", ".....#...", "$..$$$...", "..###.#$.", "..$.#...#", "..#.#.#..", "$.#......", "#.#....$$", "...#.@..#"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 20.951614980453304;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> jail = {"..........", ".$..$.....", ".......$$.", ".@........", "..........", "..........", "..........", ".......$..", "....$$....", ".........."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 31.509908785243812;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> jail = {"#.$#####..", ".#..#.##..", "#..#..#.#@", "..#..###..", "##.##.#..#", "......#...", ".#.#...#..", ".........#", ".#.#.##.#.", "....##...#"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> jail = {"$#####$#.", "##..#$..#", "#@$#$$$..", "$$#.#.#..", "#....##.$", "##$$...##", "..$..$.$#", "#$$#..#$.", "#.#$.$#..", "....$#..#"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> jail = {"###.###...", "#......#..", "#.#..#####", "...##@..#.", "####...$#.", ".#....#.##", "#.........", "#.###..###", "#...#####.", ".#.##.#..."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 40.7842003372259;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> jail = {"#$$#@.$$$#", "##$$.#.$#$", "##.#$.####", "$.####$.#$", "#$$#.##.#$", "##$$$###$#", "$$$#$#..$.", "##$##.####", "####..#$##"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4285714285714284;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> jail = {"..#......", "#........", "###......", "....#...#", ".#.....##", "#.###....", ".#.......", ".....#...", "@...#.#..", "#.#.#.$.."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 653.5889405620787;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> jail = {"......$.$.", "..$.......", "..$.......", "$.........", "..$...@..$", ".........$", ".....$$...", "..........", "..........", "..$......."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 16.475982592477454;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> jail = {".....#.", "##.####", "#...#..", "####..#", ".....##", ".....#@", "#.##.$."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> jail = {"@.........", "..........", "..........", "..........", "..........", "..........", "..........", "..........", "..........", ".........$"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 542.1005216813751;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> jail = {"..........", "..........", "......@...", "..........", "..........", "..........", ".$........", "..........", "..........", ".........."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 262.5270845919832;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> jail = {"..........", "..........", "..........", "..........", "..........", "..........", "..........", ".........@", ".........$", ".........."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 143.45236102932054;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> jail = {"..........", "@.........", "..........", "..........", "..........", "..........", "..........", "..........", "..........", ".........$"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 541.1005216813702;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> jail = {"..........", "..........", "..........", "..........", "..........", "..........", "..........", "....@.....", "..........", "$........."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 432.21887082128563;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> jail = {"..........", "..........", "........@.", "..........", "..........", "..$.......", "..........", "..........", "..........", ".........."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 222.71550647859513;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> jail = {"..........", "..........", ".@........", "..........", "..........", "..........", "..........", "..........", "$.........", ".........."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 377.1278552603537;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> jail = {"..........", "..........", "..........", "..........", "..........", "..........", "..........", "..........", "...@......", "........$."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 359.3032035553276;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> jail = {".....$....", "..........", "........@.", "..........", "....$.....", ".....$....", "$.........", "..........", "..........", ".........."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 56.754721096906565;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> jail = {"..$.......", "..........", ".$........", "..........", "........@.", "..........", "..........", "....$....$", "$..$......", "..$......."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 59.268487169174875;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> jail = {"#..#..#...", ".........@", "..#.......", "..#.#.....", "$........#", ".#..#.....", "#......#.#", "....##...#", "#.....$..#", ".#..#....."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 170.60521299081128;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> jail = {".....#$#..", "........$.", "#$.#......", ".....#...#", ".#....$..@", "..........", ".....#....", ".....#...#", "...#..#...", "#....#...."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 43.99864177785296;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> jail = {"....#.#.#.", ".#.....#.$", "......@.#.", ".........#", "...#......", "#$#.#....#", "#.....#..#", "......#.#.", ".........#", ".........."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 268.39920014038364;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> jail = {"..$....#..", "....$...#.", "...$#....#", "......#..#", "..........", "..#.....@$", "....#.....", "......$..#", "..#.......", "........#."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 18.659186954690377;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> jail = {".....##...", "..#.......", "..........", "..#.#...#.", "...$..#.#.", "......#...", "..........", "..........", "$....$....", ".@......#."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 19.796741148893222;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> jail = {"......#...", ".......#..", "........$.", "..........", "..$#.$...@", "#..$.#...$", "..........", "..$#......", ".#.......$", ".........."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 9.328833398505584;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> jail = {"....##....", "...$...@..", "....#..$..", ".........$", "...#......", "#......$..", "...$......", "...$......", "......$...", ".........."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 11.864333921499494;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> jail = {"@.........", "#########.", "..........", ".#########", "..........", "#########.", "..........", ".#########", "..........", "#########$"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 2915.999999999952;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> jail = {"@..............", ".##############", "...............", "##############.", "...............", ".##############", "...............", "##############.", "...............", ".##############", "...............", "##############.", "...............", ".##############", "..............$"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 15679.99999999979;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> jail = {"$..............", ".##############", "...............", "##############.", "...............", ".##############", ".......@.......", "##############.", "...............", ".##############", "...............", "##############.", "...............", ".##############", "..............$"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 2910.999999999966;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> jail = {"$..............", ".##############", "...............", "##############.", "...............", ".##############", "..@............", "##############.", "...............", ".##############", "...............", "##############.", "...............", ".##############", "..............$"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 2735.9999999999745;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> jail = {"@..............", ".##############", "...............", "##############.", "...............", ".##############", "...............", "##############.", "...............", ".##############", "...............", "##############.", "...............", ".##############", ".............#$"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> jail = {"....@..........", ".............$.", "......$........", "...............", ".$.............", ".............$.", "....$..........", ".......$$......", "...............", "...............", ".$.............", "...$...........", ".........$.....", "..........$....", "$...........$.."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 38.07037723734559;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> jail = {"...............", "...............", "........$......", "............$..", "...............", ".$.$...........", "......$........", "...............", "$..............", ".........$.....", "...............", "...............", "...............", ".............@.", "........$......"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 85.00876730515527;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> jail = {"...............", "...............", "...............", ".........@.....", "...............", "...............", "...............", "..$............", "...............", "........$..$...", "...............", "...............", "...............", "...............", "$.....$...$...."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 174.9205072427839;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> jail = {"...............", "...$...........", "...............", "....@..........", "..$...........$", "..$............", "..$$...........", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...........$..."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 54.82969652806735;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> jail = {"...............", "...............", "...............", "...............", "..............$", "...............", "...............", "..........$....", "...............", "......$.......$", ".....$..$......", "...............", "...............", "...............", "@.............$"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 127.16320625877697;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> jail = {".......$.....$.", "..............$", "..............$", "...............", "...............", "...............", "...............", "...............", "...............", "...........@...", "...............", "...$...........", "...............", "...............", "..............."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 229.87237066998227;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> jail = {"....@..........", "...............", "...............", "...............", "...............", "$..............", "...............", "...............", "...............", "...............", ".............$.", ".............$.", ".............$.", "...............", "..............."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 269.79379316926344;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> jail = {".##.....#......", "#...#.....#.#..", "...#...........", "............$##", "........@##.$..", ".$.....#...#...", ".#....##..#....", ".......#..#$.#.", "..##...#.....#.", ".............#.", ".......#..$....", ".####..#..$.#..", "$....#..#...#..", "##......#...#..", "...#....$...#.#"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 100.52759116244174;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> jail = {"##.#......#$...", "#..##.....#....", "...##.#..#.....", ".....@.$...#..#", "...#...##.#....", "....#...#.#...#", "....#..........", "..#...........#", "..##.#.......#.", ".#...$#......$#", "...#.........##", "...#....#......", ".##............", "....##.#..$..#.", "..........#..#."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 101.99560497653198;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> jail = {".......##......", ".#.#.....#....#", "......#........", "........##.@...", ".#..........#..", ".....##....$...", ".....#...$$#...", "#..#.###..#..##", "...##..#.....#.", ".$..##....##.#.", ".....$......#.#", "...$...........", "#.....#....###.", "....#..$.#.....", "#....$.$..#.#.."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 79.32213030140709;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> jail = {"......#.....##.", ".....$.........", ".#......#..#...", ".....##$..@#...", ".........#.....", "#...$.#.....###", ".#.#.##.#.....#", "#..#..#........", "......#....#..#", ".....##..#.....", "..........#..#.", "#.....$....###.", "##..#...##...#.", "......#.....###", "....#.........."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 120.3379742258571;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> jail = {"..##..#..##..##", "#....#...@.#...", "##...........#.", "....##..#.#..#.", ".#.##.#....##..", "...#......###..", ".......#.....#.", ".....#.#......#", ".#$#...........", ".....##.......#", "....#.$.#......", "#....$...##....", "#.##.$..#...#..", "#.....###....#$", "......#...$.#.."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 358.87258648867953;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> jail = {".....#........#", ".#....#......$.", "...#...#......#", "....#....$#..#.", "...#.....#.....", "#...#....#.....", "#.##.#..#......", ".#..#.#........", "...#...#...#...", ".###..##.#.@.$.", "$.#..#.........", "###......##.#..", ".....##.....#.#", "..........#.#$.", "....#....#...#."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 137.20112892428736;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> jail = {"$..#...........", "..#...####.#...", ".....#.........", ".............#.", "#.#....$....##.", "##......#....#.", "......#$.......", "#.....#........", "##...#.......#.", "..#....##......", "#..###.#.......", "......#....@...", "....$.......#..", "#.#..........#.", "$.$#.....#.#..#"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 180.31119019476847;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> jail = {"..#....#.....$.", "........#$#....", ".....#........#", ".......#...#...", ".#........##...", "..#............", "...#..#.......#", ".#...#...#.#...", ".#........#....", "$....#..#.#..##", "...###.#.#.....", "...##.......#..", "#.##...#.......", "........##.##..", "..#..#.#.@....."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 492.9132760578129;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> jail = {"$..............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "..............@"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 1481.1247777074964;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> jail = {"...............", "...............", "...............", "...............", "...............", "...............", "...............", "........$......", ".........@.....", "...............", "...............", "...............", "...............", "...............", "..............."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 261.3340054150918;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> jail = {"..............@", ".##############", "...............", "##############.", "...............", ".##############", "...............", "##############.", "...............", ".##############", "...............", "##############.", "...............", ".##############", "..............$"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 15875.999999999409;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> jail = {"$$$$$$$$$$$$$$$", "$$$$$$$$$$$$$$$", "$$@$$$$$$$$$$$$", "$$$$$$$$$$$$$$$", "$$$$$$$$$$$$$$$", "$$$$$$$$$$$$$$$", "$$$$$$$$$$$$$$$", "$$$$$$$$$$$$$$$", "$$$$$$$$$$$$$$$", "$$$$$$$$$$$$$$$", "$$$$$$$$$$$$$$$", "$$$$$$$$$$$$$$$", "$$$$$$$$$$$$$$$", "$$$$$$$$$$$$$$$", "$$$$$$$$$$$$$$$"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> jail = {"###############", "###############", "##@############", "###############", "###############", "###############", "###############", "###############", "###############", "###############", "###############", "###############", "###############", "##########$####", "###############"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> jail = {"###############", "###############", "##@$###########", "###############", "###############", "###############", "###############", "###############", "###############", "###############", "###############", "###############", "###############", "##########$####", "###############"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> jail = {"##....#....#", ".@..........", "..#.#..##...", "..........#.", "#.#.##......", "........#..#", "##.##..#...#", "...........$"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 625.3353944106268;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> jail = {"@#...#.........", ".#.#.#.#.#####.", ".#.#.#.#.#.....", ".#.#.#.#..#..##", ".#.#.#..#..#...", ".#.#..#..#.###.", ".#..#.#..#.#...", "..#.#..#.#.#.##", ".#...#.#.#.#...", "..#..#.#.#..##.", ".#..#..#..#.#..", "..#.#..#.#..#.#", ".#...#.#.#.#...", ".###.#.#.#.#.#.", ".....#...#...#$"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 9833.54271356619;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> jail = {"...............", "...............", "...@...........", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...........$...", "...............", "..............."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 756.4572038411387;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> jail = {"..............$", "...............", "..#............", "...............", "........#......", "...............", ".....#.........", ".......@.......", "...............", "...............", "...#...........", "........#......", "...............", "...............", "$.............."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 587.0693340648039;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> jail = {"@..............", "##############.", "...............", ".##############", "...............", "##############.", "...............", ".##############", "...............", "##############.", "...............", ".##############", "...............", "##############.", "$.............."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 15875.999999999409;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> jail = {"@#...#...#...#$", ".#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.", "...#...#...#..."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 15875.999999999409;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> jail = {"$..............", "############...", ".............#.", ".#.###########.", "............#..", "###########...#", "............#..", "..#############", "...............", "#########.#.##.", "...............", "....###########", "...............", "############.#.", "@............#."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 9528.610688882774;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> jail = {"@..............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "##########.####", "$.............."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 9701.451867289377;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> jail = {".$............$", "..............$", "...............", "...............", "...............", "...............", ".......@.......", "...............", "...............", "...............", "...............", "...............", "...............", "$..............", "$............$."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 215.2550427873787;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> jail = {"$..............", "##############.", "...............", ".##############", "...............", "##############.", "...............", ".##############", "...............", "##############.", "...............", ".##############", "...............", "##############.", "@.............."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 15875.999999999409;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> jail = {"@..............", "##############.", "...............", ".##############", "...............", "##############.", "...............", ".##############", "...............", "##############.", "...............", ".##############", "...............", "##############.", "..............$"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 12543.999999999749;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> jail = {"$..............", "############$#.", "...............", ".##############", "...............", "##############.", "...............", ".##############", "...............", "##############.", "...............", ".##############", "...............", "##############.", "@.............."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 11861.067961165503;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> jail = {"..............$", ".##############", "...............", "##############.", "...............", ".##.###########", "...............", "########.#####.", "...............", ".##############", "...............", "##############.", "...............", ".##############", "..............@"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 13698.399999999043;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> jail = {"..........###.$", "..####.....####", "............##.", ".......####....", "..##...........", "..##.....####..", "...............", "........@..##..", "...............", "..#############", "...............", "#####..........", ".$##...........", "..#..#########.", "..#..........$."};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 4228.933568898264;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> jail = {"@..............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "...............", "..............$"};
    EscapeTheJail* pObj = new EscapeTheJail();
    clock_t start = clock();
    double result = pObj->findExit(jail);
    clock_t end = clock();
    delete pObj;
    double expected = 1481.1247777074964;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=7488783&rd=10765&pm=7353
********************************************************************************
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cctype>
 
using namespace std;
#define iss istringstream
#define pb push_back
#define cs c_str()
#define frr(i,a,b) for(i=(a); i<(b); i++)
#define fr(i,n) frr(i,0,(n))
#define rrf(i,b,a) for(i=(b)-1; i>=(a); i--)
#define rf(i,n) rrf(i,(n),0)
#define sq(x,y,z) sqrt((x)*(x)+(y)*(y)+(z)*(z))
#define in(x,s) (s.find(x)!=s.end())
#define sv(x) sort(x.begin(),x.end())
 
#define   SWAP(X,Y)   { double __TMP__=X; X=Y; Y=__TMP__; }
int systemOfLinearEquation(double A[][256], double b[], int n)
{
   int max, i, j, k;
   
   for(k=0; k<n; k++)
   {
      for(max=j=k; j<n; j++)
         max=fabs(A[j][k])>fabs(A[max][k])?j:max;
      if(fabs(A[max][k])<1e-12)
         return 0;
      if(max!=k)
      {
         SWAP(b[k], b[max]);
         for(j=k; j<n; j++)
            SWAP(A[k][j], A[max][j]);
      }
      b[k]/=A[k][k];
      for(j=n-1; j>=k; A[k][j--]/=A[k][k]);
      
      for(j=k+1; j<n; j++)
         for(b[j]-=b[k]*A[j][k], i=n-1; i>=k; i--)
            A[j][i]-=A[k][i]*A[j][k];
   }
   
   for(k=n-1; k>=0; k--)
      for(j=0; j<k; j++)
         b[j]-=b[k]*A[j][k];
   return 1;
}
 
vector<string> wrap(vector<string> map, char wall='#')
{
   vector<string> r;
   string s=map[0]+"..";
   int m=map.size(), n=map[0].size(), i;
   fr(i,n+2) s[i]=wall;
   r.pb(s);
   fr(i,m) r.pb(wall+map[i]+wall);
   r.pb(s);
   return r;
}
 
int v[64][64], id[64][64];
vector<string> J;
 
void dfs(int y, int x)
{
   if(!v[y][x] && J[y][x]!='#')
   {
      v[y][x]=1;
      dfs(y-1, x);
      dfs(y+1, x);
      dfs(y, x-1);
      dfs(y, x+1);
   }
}
 
double A[256][256], b[256];
 
class EscapeTheJail
{
public:
   double findExit(vector<string> jail)
   {
      int m=jail.size(), n=jail[0].size(), y, x, i, j, ok=0, T=0, k;
      J=wrap(jail);
      memset(v, 0, sizeof(v));
      
      frr(j,1,m+1) frr(i,1,n+1) if(J[j][i]=='@') { y=j; x=i; }
      dfs(y, x);
      frr(j,1,m+1) frr(i,1,n+1) if(J[j][i]=='$' && v[j][i]) ok=1;
      if(!ok) return -1;
      
      fr(i,256) fr(j,256) A[i][j]=0;
      fr(i,256) b[i]=0;
      frr(j,1,m+1) frr(i,1,n+1) if(v[j][i]) id[j][i]=T++;;
      frr(j,1,m+1) frr(i,1,n+1) if(v[j][i])
      {
         if(J[j][i]=='$')
         {
            A[id[j][i]][id[j][i]]=1;
            b[id[j][i]]=0;
         }
         else
         {
            k=v[j-1][i]+v[j+1][i]+v[j][i-1]+v[j][i+1];
            A[id[j][i]][id[j][i]]=1;
            if(v[j][i-1]) A[id[j][i]][id[j][i-1]]=-1.0/k;
            if(v[j][i+1]) A[id[j][i]][id[j][i+1]]=-1.0/k;
            if(v[j-1][i]) A[id[j][i]][id[j-1][i]]=-1.0/k;
            if(v[j+1][i]) A[id[j][i]][id[j+1][i]]=-1.0/k;
            b[id[j][i]]=1;
         }
      }
      systemOfLinearEquation(A, b, T);
      
      return b[id[y][x]];
   }
};

********************************************************************************
*******************************************************************************/