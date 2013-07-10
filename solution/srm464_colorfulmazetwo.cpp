/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10742
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

class ColorfulMazeTwo {
public:
    double getProbability(vector<string> maze, vector<int> trap);
};

double ColorfulMazeTwo::getProbability(vector<string> maze, vector<int> trap) {
    double ret;
    return ret;
}


int test0() {
    vector<string> maze = {".$.", "A#B", "A#B", ".!."};
    vector<int> trap = {50, 50, 0, 0, 0, 0, 0};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> maze = {".$.", "A#B", "A#B", ".!."};
    vector<int> trap = {50, 40, 0, 0, 0, 0, 0};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> maze = {".$.", "A#B", "A#C", ".!."};
    vector<int> trap = {20, 70, 40, 0, 0, 0, 0};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> maze = {"$A#", ".#.", "#B!"};
    vector<int> trap = {10, 10, 10, 10, 10, 10, 10};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> maze = {"$A..", "##.A", "..B!"};
    vector<int> trap = {50, 50, 0, 0, 0, 0, 0};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> maze = {"$C..", "##.A", "..B!"};
    vector<int> trap = {50, 50, 100, 0, 0, 0, 0};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> maze = {".$.D.E.F.G.!."};
    vector<int> trap = {10, 20, 30, 40, 50, 60, 70};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.036000000000000004;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> maze = {"CC...AA", "C##.##A", "!.E.E.$", "D##.##B", "DD...BB"};
    vector<int> trap = {90, 90, 25, 50, 75, 0, 0};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> maze = {"...##...##...", ".$.AE...DE...", "...##...##...", "#A####A####B#", "#E####C####D#", "...##...##...", "...GB...BD...", "...##...##...", "#C####F####G#", "#G####A####A#", "...##...##...", "...BE...GB.!.", "...##...##..."};
    vector<int> trap = {28, 45, 71, 28, 7, 62, 97};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.007954848000000006;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> maze = {"!$"};
    vector<int> trap = {70, 35, 24, 74, 76, 13, 90};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> maze = {"!", "$"};
    vector<int> trap = {21, 93, 24, 40, 56, 63, 59};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> maze = {"ABCDEFG!ABCDEFGABCEFGABFGACEGBCFG$ABCDEFG"};
    vector<int> trap = {3, 57, 95, 7, 73, 43, 41};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0017610990151500023;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> maze = {"$F", "G!"};
    vector<int> trap = {15, 61, 49, 25, 14, 7, 58};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9299999999999999;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> maze = {".$", "!E"};
    vector<int> trap = {85, 84, 79, 43, 91, 63, 99};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> maze = {"$#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#!"};
    vector<int> trap = {83, 51, 63, 30, 89, 31, 71};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> maze = {"$#C#F#E#E#E#A#A#B#G#F#E#E#F#A#F#D#E#A#E#A#C#F#B#A#", "#B#F#B#C#F#D#C#G#E#G#B#D#A#A#E#F#C#E#F#A#D#C#C#G#E", "D#A#E#A#A#E#F#C#A#E#G#A#C#G#F#B#B#A#A#C#B#B#C#G#A#", "#C#C#B#E#C#F#C#A#F#F#E#D#D#E#G#D#A#A#C#C#F#D#F#E#C", "A#B#E#B#B#F#C#A#C#D#B#B#D#C#D#A#A#E#A#G#D#B#G#C#A#", "#C#F#F#D#G#F#A#G#B#E#E#C#A#F#C#D#B#A#F#G#D#A#D#F#B", "C#C#D#F#B#B#E#G#E#C#F#C#A#B#A#G#E#A#E#D#E#B#C#D#E#", "#F#C#G#A#G#C#C#G#C#E#G#A#A#G#E#E#A#A#G#G#C#E#E#D#A", "D#E#D#A#G#A#F#B#C#A#E#C#E#A#B#C#B#F#A#G#B#C#D#C#E#", "#A#G#C#G#F#C#A#D#D#E#D#B#D#E#A#G#G#A#F#B#C#E#B#D#E", "D#A#E#D#F#G#G#A#D#C#F#F#A#F#G#B#B#F#F#E#D#F#E#B#E#", "#B#D#B#F#C#E#D#F#E#E#A#F#G#B#B#G#B#F#C#B#E#C#A#E#E", "G#A#D#D#G#A#B#E#B#F#G#D#E#F#B#D#E#E#C#G#G#A#A#E#E#", "#E#F#C#G#E#C#D#C#B#G#G#D#G#D#C#C#F#C#C#G#G#E#E#C#B", "C#C#C#A#B#D#D#C#A#F#E#D#E#G#B#G#E#G#A#F#A#F#B#C#B#", "#F#D#E#F#B#E#E#C#A#F#C#D#F#C#F#B#A#A#G#A#G#A#G#A#C", "B#C#C#F#A#F#A#C#G#G#E#F#F#E#D#G#B#G#D#F#E#G#E#B#B#", "#A#G#A#A#D#C#G#A#A#E#E#C#D#F#F#E#G#G#F#A#F#G#D#D#G", "C#E#A#A#F#A#C#C#A#F#D#B#E#F#B#C#G#A#E#A#E#G#C#B#F#", "#E#F#C#E#C#G#A#D#G#D#E#A#E#F#A#C#D#F#B#C#A#F#D#E#B", "A#D#E#B#G#D#A#B#B#E#C#F#E#C#G#C#E#C#B#D#F#A#A#D#E#", "#F#G#F#E#D#B#G#A#C#C#A#D#C#B#D#C#C#E#F#A#C#F#D#D#G", "B#G#B#D#C#E#E#B#D#F#F#C#D#C#B#D#E#A#C#B#C#A#B#B#D#", "#C#G#E#A#D#B#G#A#C#D#A#E#F#C#D#B#A#F#C#A#F#B#C#D#E", "B#G#A#B#E#E#B#G#B#C#D#E#B#G#F#G#C#B#A#F#F#B#D#C#E#", "#E#D#C#B#G#G#C#A#G#D#G#C#C#B#A#D#G#D#G#G#B#C#D#E#F", "C#F#D#C#D#F#G#A#B#B#D#D#G#B#E#D#E#G#F#D#C#E#D#E#C#", "#A#E#A#D#E#B#F#F#A#G#A#G#F#A#F#G#B#F#F#G#D#B#F#C#F", "F#A#G#A#C#D#B#D#D#D#B#A#B#A#G#D#C#F#D#A#D#D#D#D#B#", "#D#G#F#E#B#C#C#F#D#E#F#D#A#B#D#G#E#B#B#G#D#F#E#F#C", "E#F#G#A#C#D#A#C#A#F#A#A#A#B#B#B#F#C#A#A#E#D#C#C#A#", "#E#F#A#G#C#A#G#A#G#E#F#C#A#D#C#F#E#A#A#F#B#B#C#C#F", "B#D#F#D#E#A#A#E#D#F#E#G#F#B#C#D#E#D#G#G#D#B#B#G#G#", "#E#B#C#F#B#G#F#G#F#E#B#F#E#F#A#B#B#B#F#F#F#C#C#B#E", "A#F#E#A#G#B#F#A#D#D#G#F#C#C#C#E#G#B#E#B#G#A#B#G#B#", "#B#B#C#B#A#A#G#C#D#G#C#C#A#D#A#G#A#D#E#A#D#B#F#A#G", "E#A#F#F#F#B#A#D#G#A#D#B#G#C#C#G#B#B#A#C#A#F#G#B#G#", "#B#G#G#B#B#E#F#F#E#B#C#B#D#D#B#D#C#E#A#D#D#C#E#E#D", "D#B#A#F#A#F#B#C#F#D#C#D#A#A#A#A#F#A#F#G#B#B#G#B#G#", "#B#C#F#C#B#A#D#B#B#C#G#F#G#D#B#A#B#C#G#E#A#D#D#A#D", "C#B#B#A#A#E#C#B#B#B#B#G#C#C#B#B#D#G#B#E#D#F#F#C#B#", "#D#D#C#A#C#F#G#G#E#F#C#C#E#B#F#D#E#A#C#E#D#D#G#F#D", "E#C#F#B#G#A#F#E#F#F#C#D#A#G#C#B#F#D#F#G#A#C#F#E#A#", "#F#F#E#G#G#E#B#G#B#E#D#C#F#B#E#C#E#F#F#D#C#C#E#C#E", "G#E#G#C#C#G#E#D#A#B#D#C#F#F#F#A#A#D#C#G#D#G#C#C#E#", "#G#G#F#A#F#F#C#D#D#A#C#D#C#F#F#A#G#E#E#F#C#E#B#A#E", "F#A#B#G#E#G#G#B#F#G#F#D#B#C#C#C#D#G#F#D#A#C#C#D#F#", "#D#G#G#G#C#E#B#C#C#A#D#B#C#D#C#A#B#B#A#A#B#G#A#F#A", "G#A#C#C#E#D#C#E#D#D#D#A#D#B#D#A#G#D#D#A#B#F#A#C#C#", "#F#D#A#E#F#E#B#E#A#E#A#A#G#G#A#F#E#E#F#B#F#G#G#F#!"};
    vector<int> trap = {2, 99, 86, 70, 23, 33, 59};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> maze = {"$.................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#", "..................................................", ".#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.!"};
    vector<int> trap = {23, 25, 83, 58, 96, 77, 66};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> maze = {"$AECAEGECECCDEDCFBDGEBDDGGAAEBCGGBABDBACDDBEEGAGAD", "F#C#A#G#A#E#D#A#C#E#E#A#E#A#A#A#G#C#D#B#F#G#B#A#E#", "DBECGCGBEABADFCBEEGCGDCEAGFGEAEDGGAEBAEEBEGCGDDFDG", "A#A#G#D#B#F#D#C#B#C#A#B#F#D#G#C#B#E#B#C#G#E#E#A#F#", "FGECGBDGCEBFFBGBFGFEGADCEBGGCABDDBFEAEEDCAGFDCFDGF", "B#D#B#A#F#E#G#A#F#A#F#E#F#E#G#C#B#D#A#E#E#B#G#E#B#", "DFCCFAFGADGGBBFEBGGBEBCCAFCBFBBACCDBCAFBFAFGCBAADE", "D#A#G#E#D#C#B#C#F#B#F#C#A#E#E#C#C#D#F#A#A#E#F#C#A#", "BBBAEGBADFGEBAEGEAFGGBBECEAGEDFCFFDECGDCEFACEEAGGC", "F#D#G#E#D#F#D#F#C#D#F#B#C#C#B#A#G#F#G#B#C#E#D#C#F#", "CABABBBCBACDBBBBEBAGBCFACCDDAGGDDGCFFABGFBCBAEEAFD", "C#B#A#A#G#E#F#C#D#F#C#A#D#E#C#E#C#C#F#E#G#E#F#B#F#", "BGGAECDAGEFCAGGGCGGDFCBCGEBCDEFFCEBEEFFFCBDAGABDCE", "G#A#A#D#D#B#A#B#C#C#C#E#D#D#F#A#C#F#B#G#C#C#C#F#A#", "DFDGDCGDBFCBEFCEACDBDGAFADGEDBEACGABAACEBGAECFGCBG", "D#G#D#E#G#E#E#E#E#E#D#D#C#F#F#C#C#D#D#A#B#D#G#B#C#", "BDADAEBFCBGGDABBACFGDGCBCGCACCGGAGEBBGDBFEDCACEDGC", "F#B#E#C#D#F#B#G#D#E#D#A#F#E#B#A#D#B#G#D#F#E#G#B#A#", "ABCECGAGCDFGCEBFAGDCBFBCEBGEEDDBFFDBDAAFFCDCABGGFD", "A#B#D#F#B#F#A#A#G#A#B#E#E#F#B#G#E#A#D#F#C#C#F#F#B#", "EDECFFDCDBAEEFBGDFFCADGDABDAAGFABDFBGBFACCAGDDFFDE", "C#C#B#G#C#C#F#F#B#B#A#D#C#B#C#D#G#C#G#B#D#B#F#E#E#", "DEBEBEBFCEBGEBGEFDCDABFCGBDDDGFBEDGEBDAEDBBACFBGBC", "D#F#E#D#D#C#E#C#G#C#C#C#B#B#D#E#C#A#E#G#D#G#E#D#D#", "DAAAGABDGBBABFDGCADEABFFDECGCGDECFCBCDEBDBCDCBCBDG", "E#B#F#B#C#F#C#C#B#A#D#F#D#F#G#F#D#C#C#B#C#E#B#F#B#", "DEDGAAADAFBEBEGEBABCDGBCDAADBAEBAAFBBGFDDACBBBCBFF", "E#F#B#B#A#B#D#B#A#D#A#D#F#F#B#G#E#B#A#A#A#D#E#C#F#", "CABEDCEDFADAFCFCABEGFEAACCAECAGDGDEAEFAECGDABDBGDD", "G#F#F#F#C#D#C#A#D#G#A#E#A#C#D#D#G#E#F#F#C#E#C#C#F#", "CAAAFGGDCAEFDBBFBEEDADEBBAGEEDGFDGFBECGFGFCECBBFEA", "A#G#C#G#G#B#G#B#G#F#D#C#A#B#C#E#C#C#F#B#B#B#A#B#B#", "BCGCBEBGFEECDGCGDEFGDDCBGCDBABFFADEFAEFDGAEFBBECCE", "D#E#G#F#F#B#B#C#C#E#C#A#G#F#G#A#F#C#C#C#G#C#F#E#F#", "BEACEADDADDGFFFCAGBDDACFAFDFCEBEGDEEAEEBFFADCCEEGD", "B#D#A#E#E#A#G#E#G#E#D#F#D#A#B#A#F#A#A#B#C#B#E#B#D#", "AEACFAFGACDEBAFFEEGFEGDDGACBEEDGEFAAEAFEFDFBBGGAFD", "F#F#E#E#C#F#C#C#A#B#G#C#B#C#G#F#A#C#B#C#B#D#F#C#E#", "AACGEGAGDGEBGDEBBGCFBCFECCGCBEBFCCADEACBDCDGBAFGCB", "B#D#C#D#E#B#A#F#F#A#E#D#E#E#C#D#G#F#C#F#F#F#D#B#A#", "AGFGCBGBCFAEECDDDGGACCBBAAGFGCFEAEGDDGGGBCFFEDCCEC", "D#B#A#A#A#D#D#A#A#G#E#F#C#E#B#B#D#B#D#D#A#E#E#G#C#", "AEGAAAGCCCEBGFBEBCCCAFAFCAAGGDEBFBGCBDFECBAEFBAGBG", "E#D#B#D#A#F#A#C#F#C#E#F#C#G#F#E#B#C#A#D#E#C#E#F#C#", "AAFCFCABAEFEFFDFECEBEABFFEFAFDBCAEFACCBAGEAECDBAGE", "B#A#F#B#C#F#E#F#F#B#A#C#F#C#B#B#D#D#E#B#D#C#F#A#B#", "CFDCDBACDBEDBBACFBEBFDFGBEBFEDGBGDBDCGFDGFBFEEFGCE", "C#A#C#E#C#E#E#E#B#D#C#A#B#B#E#G#G#B#G#G#D#G#E#C#D#", "DEGGEADGEEFGBDGGDGCAAADABGAACFEEEBCAAGBBEFGGDAEBDG", "G#E#A#E#A#B#C#G#D#A#B#F#E#F#F#A#C#B#D#A#E#D#E#C#E!"};
    vector<int> trap = {84, 74, 64, 29, 13, 89, 17};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.007678060416000001;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> maze = {"DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDD$DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDD!DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD", "DDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD"};
    vector<int> trap = {53, 12, 40, 75, 61, 64, 91};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> maze = {"FFCCCEEEEEEEEEEEEEEEEEEEFGGGGGGCGGGGGGGGEEEFFFFFFA", "BBAAAAAAAEDDDBBBDDDDDDDDDFFFFFGGGGGGBBBBBBGGFFFBBB", "BBBBBBBBBBBBCCCCCCCGGFEAFFFFGGGBBDDDDDDDDGGGGBBEEG", "GGGGGGGEFFFFAAAAAAAAAAEEEEAFFFFBBBBBBBBBBBBBBCGGGA", "EEEDDDDCCDEEEEEEEEEEEEEEEEEEEEEBAACCCCBBBBBBCCAAAA", "AAAAAAAAAAAAAAAAABBBBAAAAAAAEEEEEEEEFFFFFBDDDDDGGG", "GGGGFFFFFCCCCCFDDFGGGGGGGGGGGGEEGGGGDDDDDDDDDDDEBB", "BBAAAAAAAAAAFFFBBBBBBBBBBBBBBBBBCDDDDDDDDDFFFFFFGG", "GGGGGGGGGGGGGGGGFFFFGGGCCCCFFFAAAAAAAACDDDDDDDDDAA", "AAAAAAAAEACCCCFFFFFDDDDDGGGAAAAAAAAAABBBFFFFFFFFFF", "FFFFFFGGGGGGGGGGGGBBBBBBBBBDDDBEEEEEEEECCCFFFFFFFF", "GGGGGAAAAAADCCCCCCCDDDEEEEEEGDDDDCCBBBBBBBBBGGGGGG", "GGEEAAAAAFFFCCCCDDDDDFFFFFGGGGBFBCCCCAAAAACCCCCCAA", "AAAAAAAAAAAGGGGEGAAAAAADDDDDGGGGGGGGGGGGADDFFBFDCC", "AAGDDDCCCCCCCCFFFFFFFFBAADFFCCCCCCCDDDCCCCCCCCCDBB", "BBBGGGGGGGGGFFFFFFAAAEEEBBBAEFFFFFFFFFFFFAAAAFFFFF", "FFFFGFGGGDAAAAAAAGDDDACCCCCCCCAEEDDDGGGGGGGGGGGGGG", "GGGGGGGGGAAACFFFFFEEAFFFFFFFFBBBBBBBBBBBBECCCEEDDC", "CDDGGGFFFFAAACCCCCCCCAEEEEEEEEEDDDDDAAAAACCCCCCCAA", "CCCGGGCCEEEEECCCCCAEEEEGGCEEEEEEEEEEDEEEEEBBBBBBBB", "BBBEEDDEAFFFFFFBCCCAAAAAAAACCCCCCCCCAAACCCCFBGEEGG", "GGGGGGGGGGGGGGGGGGBAAAAACCCCCCBBBBBBBBBDDDDDDDDDDD", "DDDGGGG!GFFDDDDDDDDGCCCCCFFFFFFFFFGAAAGGGGGGGGGGGG", "GFFDFFFGGGGGGAAAAACEEGGAAEEEEEEEEDDEEEEFFFFEEEGGGG", "GGGEEEEEEEEEEEEEDEDDDDDDBBBDDDDDDBBBBBBCCCCDDDDDGG", "GGGGGGGGGGGGGGGBBBBBBBBDDDDDDDCEEEEEBBEEEEEFFFAAAA", "AGGGGG$GGGAADDDDDDDDDDDCCEEEEEEEEEDDDDDDDDDDDDDDDD", "EEEAAAAAAAAAAGCCCCCCCCBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BFFAAAAAAAAAAAAAGCCCCCCEEEEEEAAAAAAAAAAAAAAAAAAAFF", "FFFFFCBBBBBBBBBBBBAAAGGGGGGGEEEEEEEEEEEECDDDDDDDCC", "CCCCCCCAAAAAAAAAAAAAEEEGGGGBBBBCCFFFFFFFFFFFEEEEEE", "EAAAAACCCCCCCCBBBBBBBBDGGGGGGGGAAGDDDDDDDDDDDDAAAA", "AAFFFFFFFFFDDDCDDDDDBBBBBBBEEEEEEEEFAAEEEDDDDDDDDC", "CBBBBBBBBBAAACBBBBBBAAAAAAAAAAAAAAAAAFFFFFFFFFFFFF", "FFFBGGGGGGGGGGGGGGGGGGGGGGGGGGGGAAAAGGGGGGGGGGGGGG", "GGGGGAFFFFFFFFFFFFCCCCCCCCCCCCCEEEEEEEEEAFFFFFFFFF", "CDDDDDDCEEEEEEEEECCCCCCCCCCFFFFFFEEEEEAAAAGGGGFFFF", "FFFFFFFFFFFFFDDDDDDCCCCCCCBBEEEEEEEECCCEDDDDDDDDDD", "DBEEEEEBBBBBBBBBBBBBBBBFFBBBBBBBBFFFFFFFFFFBBBBBAA", "AAACCCCCCDGBFCCCFFFFCEEAAAFFFFFFFFFCCCCCCCCCCCCCBB", "BBBCCCCCCGGGGGDDDDDDDDDDCCCCCCCCCCBBGGGGGGGGGGGGGG", "GGGDDDDDDDDDDDDFFFFEEECCDDDEEEEEEEGGFDDDBBBBBBBBBB", "CCCCCCCGGGFFCCCCCDBBBBBBBBBBBBBBCCCCCCCCCCCCCCCCBB", "GGBBBBBBAGGGAAAAAAAAADDDDCCCCAAAAAAAAAAEEEEEEEEEEE", "EEEEBBBBBBBBGGEFFFFFFFBBBBBBBBBBBBBBBFFCCCCAAAAAAA", "AAGGGGGGCCCCCCCDDDDCADGGGGGGGGAAGGGGGGGGGGGGGGGDDD", "DDDDDAAAAAAAAAEEEEEEEEEEEEEEEEGGGGGGGDGGGGGGGGGFEE", "FFFFFFFFGAAAAAAABBBAAADAAAAADDDDDDDDFDDDEEGGGGFFGG", "DDDDDDDBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBDEEEEGGGGGGGGGEEEBBBBBBCCGGGGGGGBBAA"};
    vector<int> trap = {93, 3, 5, 62, 54, 88, 7};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.42779999999999996;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> maze = {"DDDDDCDBBEDDDAAAEEDDDDDCCACADDDDFFEEFGBGGGGGGEBBCA", "DDDDDFFFFFFFFFFBBBBBGGGGGGGGAABDGGEEDDEEGGGDDDDFCC", "CCAGAGAAADDDDABBBBBBBBDDDDCCFFFFDFAGGBGADFDFDFFFAG", "EEDDDBGGGGDADDCAFFFFDDCCFGFFBGBAAAAAAGEBBBCCFFDEEB", "BCCAADDDBBEEEFDDFBAAABFAAAAAAAADDDDCADDDDBBBGDAAAE", "EAABCCDGGGGDDDDDDDDDDCCCCFFFFAAAAEEEFFFEEEEEEEGGAA", "AGFFDEEEGEAAGEEEEECCFBFABBBBBBAAAFFBDADDDBFDGDEGCC", "CCCBBGGGDFGGBBEBBBEDCCFFFDGGDFDDDDEDDADDEEEEEGGGGA", "CGGGEEDCDDBGGGFDBBBECCBBFFAABBFFBBBBBBCCCCCBBBBEEC", "DDDAAFFFFFBBEAAAAAEDAABBBGAAAAGEGGGGAAGAADAFFFFFFA", "CEEBBBDDDDCDAAAGGDAAFFFFEDDDEEDEAAABEEEEEDDDABBEEE", "EEBGGGCDDGGGGGGCBBBBGDDFDDGBFFFDFFFFFAGGGFFFFBBBBE", "EAGFFFFFFFFFFBBBAADDDECCCCCDGGCCCFGBBCBBCCFFBBDDDD", "CFFEEABBBFGDDDDGGGGGDGGGCCCAACCCCAAFGCGGGGGGGGGGDD", "FDDDBBBBBBBBFAABDGGEEECCCAABGAECAAFFFFCGGGGDDEEGBC", "BGGGFCBBBGAAGBFFFEEDFFFFEBBDCCCAAAAAAAAFFAAAEEEEEC", "CDBBEGGCCCDDAAAAAABBCCCCADDDDDDBBBBBBBBBADGGGDDAAA", "DEEEEEGGGCCCGCECBBCCCCCCFFFDEAABGAABBBBBBBGGEDDEEE", "EEEEEEAEEEEEAECCCACBFFFCCCDDDDDFDCDDAGGABBDDCCCFBD", "CCCCCCGGGDAGGGGGFFFFDEBBBFFFFFAAAAAAAGGCCCAAAABBBB", "FFFFFFFFDGBGGGDEAAAACCCAAAAFDEEEEBBGGGAAAAAAACCCAA", "FFDDDDEBFFFFGCCBBGDDAAFBBBBBBBBCEGGFDDAEEEDGGEECCC", "CBCDEACEEEEEDGGDDGGGDDDGDCCCCGGABEDBBEEDDDDDDDGBDB", "BBGGGGGEEEEEFFFFCFGGGGGGGGGGGGGFFFCEEECFBDEGFGGGGD", "DCCFAEEEAAGGGGGGFGCCAECEEEECCCCCCGGGGGGDDDDFFFFFGF", "EEGFFEEBBBBGGGBGABBGGDDAAAAACGGGDDFBGGGGGGGGGGG!EE", "EEAAAACCCCEEBDCCCBBBACBCCFBDFFFFEEFCDDDDEFFDFFFFFF", "BBGGFCCGGDCCCFFFCCCGGGGBBBCCCCDDDGGGGGBBBCCCCCEEBD", "GGGEEAAAAAAGDDDDFFBBGGGGFFEGFFGGGFCCCCCCGGGGGGGGEF", "AFFFFFFBCGGGGDEEEECCGGDFFCFFFFFFEEEEFFFAGGADAAAAAA", "GGCBBEADDDDDDGGGCCCCCFFFFFDDDDDGGBCFBBBBFBBBAACCBB", "BBBDEBBEAEBBBBDDAAACEGGGCCCABBAAABBBAAFFGDDBBAAACB", "BBBBBEEGEEEEACCAGFFFFFGFDDCCCCCCCCBECCCCEECAAAAAAA", "BDCCGEEEECDDCCCCCCFFFFFFFFACGDCCCEBGEEGBBAAEACCBBG", "GBBAEEEDBBAABBBAFDAADDDDBBBBBBBCCACECCCAFFFBADDEEA", "AADDAEACCAACCCGDDAAAAGEEECCDCCAEBBCGGCAGGGGGBAGDCC", "GGAADEECAADDFFFAAAFBBBBFBAAFFAGGGCDDDGFDDDDDDDDFFC", "CBDDDGGGGGDDDBEAEBBFDCCFFDAAAAEEEEBCCCCABBBBBFFBBB", "BGGDDDDCCCCGFGGGAAAAECCCCAABGEFFF$AGGGGGGDDBBBCDAA", "FFBBBBBEEEFGBEAABEEEEBEEAGGGGGACDFAAECCDEAACDDDDDF", "FEEGGAAACCCBGAAAAAGFFFGCCCBBDDAAFFFFFFBDEFEFFFGGGG", "GGDDDCCBBBBBECCBBAADAAAEEEDEGGGGBBDGGCAABBBBBBBBGA", "AAAAAAFCGGFFFFFFFFFGGDDDDDAAAAFCBEBBAAAAFFFAAADBBB", "BBBAFEDDDCGGGGDDGGFFFFBFFEEEDEEADDGFFFFFBBBDGGDGGG", "GGCAADGDDDDBFFEAGEEEECDDGEEEBBBBAAEEGGFCADFDDEEECE", "DGBCEEDAAAAABFGGDFBBAAFDDDDEBBGGGDDGGGGGAAAAFFFGFF", "FFBFGFFFEBBDDDAAADDEAACCFFFGGGGBBBCEEEEDDDDDDBBBCF", "FFFFFFFDDDDAABBEDCFDDECCCFFGGFAADCFFFAAEEEEEAAACBE", "EEECCCEFDEECCCCAAAAAAAADECCCCEBAGGGBDDDDDDCBBBBAAA", "DBBBGGCCCCGDDAADAGGGGGGGGGDGGGGFCCCCCBAAGCCBGGGDDF"};
    vector<int> trap = {46, 22, 43, 46, 46, 83, 81};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04561596;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> maze = {"BGAABEBEAGABGACAEDCCCEDDCGEFEAABDADAGCAECBFDFGGFDC", "EDBB$FEFGBCABAFCGCGFAEFCEFEDBAACBBBCCFFDGGDCFAADCF", "GDDEDGAGGFCBDEBEACEAADBFDCDDGEADGACDAFFCBFBFGGBBFB", "BDCCCGDAABDFCBADBFFBFEDBCAFCBEAFCEBECGECBDABBBEGDC", "CFFGBDBGAEDEDAGFBEAAEDDBCBFDCDGGEDDGFEAGEAGBEFGECF", "ADCCDFFCDGAGEAAEAFFBCEABACAGFDBEBBGAFEDAEAEBGEEDDD", "BGDFCBABDCGAEFDGDBGDGBDCEBCDGCFAADADEDGGEBAADGBFEF", "FCDDCBFGCDCBEDFEEGEBFEDGBGAFDBAEFFFABAGGDDCDAFGBFB", "ECGFGBCEFDGEBDADCDAAEADEBCBFDFCEGCDACBGBBFFDCGDAAA", "GDGABDBDGGDAEAAAFBEEDGGCFGBBEEFBEBEEFEBBDEECEGCABA", "FDFEFAAD!DBBABEBEACCBCACFEBEAGBABGAFAECEGBDGCGCDBE", "FDACGADEABFGEGGBGDBDDAGFFBBBEFBEBCDCFFDCAAGAEAGCAC", "ACABDBEDACCEFFABEBDECFCACEACBFADFGGACBGFCDBFDBBCFD", "FABABADGDGCECDECBDBDBAFAFGBBADBEBECCGADDDAEAFABDFD", "DFDFCEFFECECFBEAFFDGBAGDCDCCCDBEGGCFEAEEBGBGEGEDCF", "DGDAEGDFEBBDDEFGFCCAAFBGCFGFCEGFFGCCGFDAEDCBEGBECC", "CGEGCABEEEAFDCCDGDAEFDBEACEEBFGCCCEFFGGDDCGEEFEFGC", "DBEGDDEGECADBABFADCDCEDCDBBAGFFCFGDEFEEACABBBACADG", "CEDGEGEDCAGBDAEABGCCCFCCGEECGABDDBGCFFAFCGDABCBFGG", "EFFGEEDGEAGGFCDGGAECCEDFCCEADDCGBCFBCFEDEFDCCGGABG", "GEBCABDABAEBFGEDGCGABBEDAAFDFAAGDEBCCFCCGGGFGEAGDD", "GGBFGEBBFEFDEAEEFCBGDCFEFCEFBAAAECGECGDGDECFBDBEGG", "FACGFAEBGCBCBFAEBGDGGECACEDCECCFFCDDFAGGDFADCEAGDE", "BDGECGBCDCEACDBECCGAEEFCFBGFDCCBBGAFEGAADDFDEFFGCF", "BGGABCBFCAGEFFCDBBBAFFEGGDFCABEBEDCAAGFDCAAECFBEAD", "GCDDDBGFGCCEGECGEFECCEECBFBDCBGABCFFACGGGDBDEGCGDE", "EDGBEDEEDFAACAAFFBBABBDCCGEFGCDDDFDCGFADACBEGABBCE", "CGBEBEEGFEAFACGFCEEDADFEGAFACGEGFBCAGABAFCACABDEDE", "BEBCCFGEACBDEFDFFGBADCEBEGDABGBCFCDDCFCDBBECCCAAEF", "DEDCFFEECFGFCGCCEGDBBFFFBEFCCFEDECEFDAFAGCFBBEGAEG", "DECDGDCBFFBFDCEEBBGABBFGGECACACBAFAAEFDGEGCGAGBFAC", "BFBAAEGDCCEBCEBCGGGADDGFGEGBDDEBAADEACFGFGGGGEGAGA", "CBCAEBBFAGCAEEDEECDEGGEECCBEAGAEGCFABDGEACCFDDEAAB", "DDGDEBACAAAFAAABGBECCEDGFGDDECCEBFCGABADGADDFCDABF", "EGGFEBCBFDCGGDAECGCAEDBGGFCDDCEECABCECDFBFEBACAFDA", "CBEBABEDFFACGGGFGDDBBDCEACGFDAGCDFEGDBGCDGBCFCFGCD", "EBFACEEEFDGBEBCEAGAEFCAACDFCAGGEFBFBCDGDAFECDBADGD", "EEGFBBCGBGECACGDGDAGGCEGCGACABFGEBDAEEDGFFBEFAFBFE", "BGBFCDAFGEBGEBCEDAFFABFDBBBEACGCEDEGBGBAGABACGBCFC", "AECGDABBCBEBBGBAFECAECAGAFCDECCFCAEDDABBCDCFEBGBDC", "EEBEBEEDBBAFGEFFDCAECDFAFBDEEEACFBBECBCDGAGDGDADGC", "CAFACGBBGDAACFEACBEECFFEGEGDGACGBCFGFAEGEDGBGABACC", "GGDDGBCBCBCBFFBCGECEFEACDCCGBGAEFCBBFBBGDDEFDDECBC", "AFADBGCFFAABACAEBDGGACDDEFDFDDDEFFECABGGGBDCGFGAEC", "GFCBFDDEDGCCABBDGGDDBEGGDDFCAGEFFECFACBDAAAACBDGCA", "FGEFFCADGEGDDFGFBBFBADBADFBBBFDCAEEADGABFGFEDEDDCF", "EBEGCBCFGCGFFBBCDEEFFEGBGFCAGBABFBAAAAEEGECFECEFEA", "FAGGEECFCGDFGAFADBGBFCFBBGDDGGBFDGDGEGBBCEGEGGACDB", "DBBEGBCGAGBBECGCCGAECGECGCABBACECCGCBGBDDEGFBFFAFA", "BDGAAFBAAGBGCEBDACGFAEBAEEGAADGGDFBBGFDGFDBFAFAFDF"};
    vector<int> trap = {84, 69, 55, 61, 20, 88, 36};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.05440500000000001;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> maze = {"GG###GGGGGGGGGG#GGG#GGGGGGGGGG#G#GGG#GG##GGGGGGGG#", "#GGGGGGGGGGGG#G#GGGGGG#G#GG#GG#GGGGGGG##GG#GGGGGG#", "#GGGG#GG#GGGG##GGGGGGGGG##GGG#GGG#GGGGG#GG#G#GG##G", "GGG##GGGG#GGGGGGG##GGGGG#GGGGG##GGGGGG#GG#GGGG#GG#", "GGGGGGG#GGGGGGG#GGG#GGGGGGGGGGGGG#GGGGGGGGGGGGG#GG", "G##GG#GG#GGGGGG##GGGG##GG#GG#GGGGGG#GG#GGGGG#GGG#G", "GGGGGGGG#GGGGGG#GGGGGGGGGGGGGGG#GGG#GGGGGGGG##GGGG", "#G#GGGGG##GGGGGG#GGGGGGGG##GGG###GGGG#G#GGGGGGG#G#", "G#GG#GGGGG#GGGGGGGG#G###GG#GGGGG#GGG##GGGG#GGG#GGG", "GGGGGGG#G##G##GGG#GGG#GGGGGGGGGGGG#G#G#GGG###GG#GG", "GG#GGG#GGG###GGGGGGGGGGGGGGG####GGGGGGGGGGGGGGGGGG", "GGGGGGGG#GGG#G#G#GGGGGGGGGG#GGGG#GGGGGGGGGGGGGGGGG", "!#GG#GGG#GGGG#G##GGGG#G#GGGG#GG##GGG##GG##G#GG##GG", "GGGGGGG#G#GGG#GG#GGGGG#GG#GGGGG#GGGG#GGG#GGGG##GGG", "#GGGG#GGGGGGGGGGG#GGGGGG##G#GG#GGGG#GG#GGGGGGGG#GG", "GG##GG#GG#GGGGGG#GGGGG#GGGG##GGGGGGG#GG#GGGGGGGGGG", "GGGGGG##G##GGGGG#GGGG#G#GGG#G#GG#G#GGGGGGGGGGGGG#G", "GGGGG#GGG#G#GGGGGGGGGGGGGG#GGGGGG#GGGGGGGGG#G#GGGG", "GGGGGGGGGGG#GGGGGGGGG#GGGGG#GGGG##GGG#GGGG#GGGG##G", "GGGGG###GGGG#GGGGGGGGGGGGGGGGGGG#G#GGGGGG##GGGGGG#", "G#G#G#GGG#GGG#GGG#GGGGGGG#G#GGGG#GGG###GGG#G#GGGGG", "GGGG#G#G###GG#G#GGGGGGGG#GG#GGGGGGGGG#GGGGG#GG##GG", "G###GGG#G#GGGGGG#G#G#GGGGGGG#GG#GG###G#GGGGGGG#GGG", "GGGGG##GGGGGG#G#GGGGGG#GGGGGGGG#G#GGGGGG#GGGGGG#GG", "##GGGG#GG##GGGGGGG#GG#GGG#GGGGG#G#GGGGGG##GG##GGGG", "GGG##GGG#GG#GGGGGGGGGGGGG#G#GGG#GGGGGGGGGGGGGGGGG#", "G##G#GGGGGGGGGGG##GG#G#GGGGG##GG#GGGGG#GGGGGGGGG#G", "GG#GGGGGGGGGGGGGGGG#G#GGGGGG##GGGGG#GGGG####GGGG#G", "GG##GGG#GGGGG#GGG#G#GGGGGGGGGGGGGGGGGGGGGGGGGGG#G#", "GG#GGGGG#GGGG##GG##GGGG##GG#GG#GGG#GGGGGG####GGGG#", "G##GGGGGG#GGGGG#GG#GGGGGGGGGGGGGGG#GGGGGGGGGGGGGG#", "GGG##GG#GGGGGGG#GGG#GGGGGGGGGGGG#GGGGGGGG#G#GGG#GG", "#GGGGGGG#G#G##GGGG#GGG#GG#G##GGG#GGGGGGGGGGGGGGGGG", "GGGGGGG#GG##GGGG#GGGGGG#GGGGG####GGGGGG##GG#GG#GGG", "GGG#GGGG#GG#GGG#G#GGG#GGG#GGG#GGGGGG#GGGG###GGG###", "GGGGGGGGGGG##GGGGGG#G###GG#GG#GGGGGGGGGGGGGGG###GG", "GGGGGGGGGGGG#G#GGG#GGG#GGGGGGGGGG#GG#GGGGGGGG#GGGG", "G#GGG#GGG##G#G##GGG#GGGGGGGG#GGGGG##GG#GGGG#GGGGGG", "GGG#GGGGGGGG#GG#GGGGGGGG#GGGGGG#GGGGGGGGG#GG#G#GGG", "GGG#GGGG#GG#GG#GGGGGGGG#GGGGGG#GGGG##GG#GGGGGGGGGG", "#G#GGG#GGGGG#GGGG##GG#GGGGGGGGGGGGGGG#G#G#GG#GGGGG", "GG#GGGGGG#G#G#GGGGG##GGGGGGGGG##G#GGGGGGG#G#GG###G", "GGGGGGGGGGGGGGGGGGG#GGG#GGGGGG#GG#GGGGGG#G#GGGGG#G", "#G#GGGGG##GGGGG###GGG#GGGG#GG#G#GGGGGGG#GGGGGGGGG#", "G#G#GGGG$G#GGGG#GGGGG#GGGGG#GGGGG#GGG###GGGG##GGG#", "#GGGGGG#GGG#GGGGGGG#GGGGGGGGG#GGGGGGGGGGGG#G#GGGGG", "GGGGG##GGGGG#GGG#GGGGGGGGG#GGGGGGGG####GGG#GG#GG#G", "G##GGGGG#G#GGGGG#GG#GGGGGG#G#GGGG#GGGGGGGGGG#GG#GG", "GGGGGGGG#GG#GGGGGGG##GGGG#GGGG#GGGGGGGG###GGG##G#G", "##GGGGGGG##G##G##GGGGGGGGGGGGGGGGGGGGGGGG##G#G#GGG"};
    vector<int> trap = {49, 40, 51, 78, 75, 0, 31};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.69;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> maze = {"AGGGEEE#EEEEEEE#EEEEEE#EEEEEE#EEFFFFEAD#DD#DDDDDD#", "#B#BBBB#EEEEEEBBBBBBA##A#ADDDD#DDD#DF##FFFFCCCC#AB", "#BBBBB#BBB#DDDDDAAFFAAAA#AA#AA#GABBBBBBBBB#BC##C#C", "CCCCEE#E##EEE#FF###FFFFFFFC#C#CCCCC#D#FFFFF###FFE#", "EE#EEE#E#EEE#E#EEEEAA#A#AFFFFFG#GGG##GGGGG#G#GGGGG", "AAAAAAA#A#A#AACCCCCCC#CC#CC#CCC#GGGG#G##BBB##BB#BB", "BBBBEE#EEEFFFFFAAAAFFF#FFF#AAAAAAA#AAAAAAA#AAAA##A", "AA#AAC#CC#CCCCCCC#E####EGGGG#GGGGGGGGGGGGGGGGGGGGG", "FFFFFFFFFFFFF#CGGG##G#GG#GGGDDDDD#G#GG#G###GGGGGGG", "GGGGG#GGGGGGAAC#CC###AAA#A##A#BBBGGGE#EAAA#AA###AA", "AFFFF##FG##GG#G#GGG#GGEEBAAAAAAAAEEEEEEEEEF#AAG#GG", "CC#C#C#CCECCC#CDA#AAAFF#F##FFF##FFFFFFFF#FF##FDEE#", "##EEEFFFFF#F#D#DEEEEE##EEC#CCC#CCC###BBBEECDDDDD#D", "DDDDDDF#FF#FB###BBBBECDDDDB#BBBBBC#CCC#CCCCCCC#C#C", "CCAAA#A##AA#AAAA#FFFGG#GGGG#GG#GGGGGG##GGG#EE#EE##", "#EEE#F##FFFBBBBBAA#FFGGAAAA##A#GGGGGGC#CGGG#FFFF#F", "DDD##DDDDDDDD#DD#DDDDDDDD#DD##D#DDDDDFFFF#GGG#GGGG", "GGEEE#ECDDDD##DDDDFFFFF#F#FFFB#BBBBBAAAAAAA#AA#AAA", "#E##EEE##A#AA#DDD#DEEEEEEEEEEAAD#DB#BBBBB#DDDDD##D", "DDDGGG###GG#GA#A#AAA#AAAACCBBBBBBBBBBBBA##AGGG#GGG", "GGGGGGGGGGG##CCCCCCCC###CCCCCCCBBB#BB#BDFFFFF#FFFF", "FFFFEFFFFFFBBFEEE##EB#BBBA##A##A#A#AC#CCCC#EEEEEEE", "E#E###EE##EEEEE##A#AA#FDDEEAAFFFFFDDDDD###DDDDDDDD", "#DD#CFFFFFF#FFFGGG##GG####GGCCBBB#BBBBB#BBBBBBBBBB", "##BEEEEA#A#AADD#D###BAEEEE#EEEGGGGFF#FF#BCEEEE#EEE", "#E#EEEEEEE#EE#E#GGFF#EEEEEBDD#CCCCFFC#FFD#D#DGCCC#", "FF#FCCAAAAA##AAAAAA#AA##G#GGGGGF#EEEEEEEEE#EE#E#A#", "AAAAA#A#AF#F##FFFFFF#FD#E#EE#E#EGGGGGGB##BBBBBBB##", "BBBB#BBBAA#AAA#A#AAAAAA##A#AA#AAAAA##ACG#GGGGGGGFF", "CCCEBBB#BB#BBB#B#FFFF#FEEEEEEE#EC#GAAFFFFFFGGGGGGG", "GGGCC##CEEEAEG#GGGGGGGGGGGGGGGEEEEEEEE##BB#BBBBBBB", "BBBB#BB#BBB#F#FFFFFEG#GBBBBB##BBB#B#BF#FF#GGGGGGGG", "G#E#EEEEEEEEE#EEBBGGG#GG#G##G#GGGGEEEEEEEC#CCCFFD#", "DDD#DDCCC#C#C#CC#GGG#GGGDDDDD#DDDDCDDD##D##D#DDDD#", "CFFFDDDDD#D#DDDD#EEEAAAAAFFFFFFA#AAAA#AAADDFFFFFFF", "F##FFFFDDBBB#BFFEAAAA#FFFFFF#F#A#AGGBFFFGGD#D#DDDD", "DDDEEEEEE#ECCCC###CG##DFFFFFFFFB#E#EEEBB#BBBBDDDDC", "C#CCCCCC#CCCCCC#DDDDDCCCCCFC#EBB##BBBB#BBG##GGGGGG", "G#G#GGG#GG#GGGGGD#DDDD##DDDDDDDB#B#BBBBB#BBG#DDDD#", "D#DDD##DDDC#BBBBB#BBB#CCCC#CC##CC#CAAA#AAAAAA#A#BB", "GG#G#G#B#BBBBBBB#B#BCC#CCCC#CCCCCCCCC#DDDEEEEEEE#E", "#GGGGGGGBBBBBBBB##BBFFF#AB#BBBBBBB#BBBBBBBBB#BBBBB", "A#ABB#B##B##BB#B#BBBBB#BBB#BF#F#A#AAGG#GGGGGG#GG#G", "#GGGGGG#G##GGGG$#GGG##GG#GEEEEEEEE#EEEEEE#E#EEEEEE", "EEEE#E#EA##A##AAAAAAAAA####A#A##A##A#ACCDD##DD#DA#", "A##AA#AA#AACCC#CCCCCCAGGGG#GGGFFFFFFDDAFFFAA##AAAG", "FFBBBBBBBBB##BBBB#BBBBBBCCCCCCCCC#E#EA#DDDDDD#DDFG", "GBEEEEEEEEEB#B#BBB##DFF#F##DAEEEA#AA#A#EEF#FFFFC##", "CCCCCEE###DDDDDDDD#DDDDBB#BBGG##G##AADD#EGGGG#####", "GGGG#GG#G#GG#GGGG##GCFFF#A!AAA#A#AAADDDDD##DDDDDD#"};
    vector<int> trap = {13, 40, 88, 69, 59, 34, 86};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.019418400000000002;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> maze = {"#BAAA##AG#GDD#B#BDDDED#FBFFBBFD#EEEF#EEE#EBBB##BAE", "EEE#EEEECCFF#DD#DD#DEEEE##FFFFFDDE#GGG#AB#BEA#A#DD", "C#CCC#CF#EE#AAAAEE#EEEEEE#EF#F#FFF#FGF#FAB#BBBBBAF", "FF#EEBG#GEA##CFFFFCFFEEEDDDAA#GGEEBCCBBB#B#DDCCC##", "GG#GC##CCGGG#G#F#FFD#AAEAFGG##F#FFF#FFEDBBBBB#BCE#", "EBB#GAAA#DG#GGACC#DCCFFFDDC##BB#EBBBFCCEEEE##CF#BB", "BBBCEE##EEEEEE#AA##A#GGB#DEDC#CG#GD#FFF#FF#FFGGADA", "AAB#B#DDGGGGGBB#FFFAEGGEEGD#DDDFF#F#E#EEE##DDCCE#B", "B##GGCCFBABBBBBCC#C#D#G#GGGGG##AAA#GGCCGGGGGG#GCEE", "#EE##EEE##CAA#B##BCC#EEEGACCC####C#E#EEEE#EEEE#BBB", "BBD#DDA##AABB#C#CCCCEE#CC#CCCECFF##F#FCCCC#CAA#AAA", "AAADFF#EEEEEE##EEE#E#BEGGAEE#GFFBACEE#EC#G#GGGGFFF", "#F##AAAE#BGGCFFAA###AAAA#A##AAACGGGGGEFG#GG#G##B#A", "AAGGGG#GA#AFDD#AGG##FFFFFFF#FF##F#FF##CCCE#EFFFBB#", "#B#B#BBGGEEEF#FFGCCCC#FFFGGG##AAEEEDGG#GGGG#FFCCF#", "GFFFF##FBBBG#G#GD###GGDEE##EAGAA#A##AA##AAA#A#ABBF", "#FFFCDE#EDACCCCCCE#DDDFC#CDAACGGCG#GAAE#GCCBA##A##", "#GEEAAABDDCE#FFFF##FAAAEEDDGG#FFF#FFACAAAGGGDFFFGB", "DDEE#ECCB##FFCCBGB#BDFFFF#E#EE#EEEEEDDDDCB##BBDDD#", "CCD##DDD##GGA#CA#AAA#FFD#DDFFF#EEE##ECCEEE#EB#BDDE", "#AAFFAA#A#A#AA#FF#F#A#A##AAA#A#AC#AAAAAAAACCDC#CCC", "E#E#DEG#FF#FFF#AAAABCF#DDDDG##GGBBB##ED#AABBBE#EC#", "#F#F##DDBAFFFFAAEEBFBBG#D#D#DEEEE#BB###EEF#GGAA#AA", "ACCCCEEDFCGDDDCCC##CBBBCGGFFFAFDEDDG#GG#G#GGD#D#F#", "C##GGDDDEEEBBFE##EGAAA###CCCEEEEBEGBCACEDEEDF#G#GG", "#GC#AAAA#AABBBB##BDBBA#A#AB#BEEEEE#EEE#EEEBBDEEEEE", "EAAAEEBAFFFFFFEEECCC#C#GG#AAA#A#AAC##DDEA##ACCAAD#", "#EFFFF##BAAAAGGEEEE#EE#EE#EAA#AAG#B#B##BBDF#FA#GGA", "#AA##BCBEBB##BBDGCFF#EEFF#F#FF#FBEE##BBCGG#C#CC##D", "D##DAGADBBCDDD#DEEDDDCC#CEDDDD#BDG#G#ACC#CCCCF##FF", "FBBBFCC##CCFFFFFFC#C#GDF#F#GC#CCAAAEEAEEFDDDBBEB#D", "D##DDD#DDDCCEEFFF##F##FEE##EBBGF#FCDDD#DD##CCDA#AA", "AB#CCC#DDDAAFFFGGGGG#GGG#GG#BDEGGC##GGGDCCC##DBB#B", "BBB#C#BBFFCCC##CCFCGDCCFEC#GGGGGEEA##D#EGAD#DDDDEE", "D##C#BBD#FF#FE#BBEEGADCCC#FCAAD#DDDC#CFFD#DEGGGABB", "BD#CCC#DCB#FBGEBG##D#D#DDCCG#GGFF#FFAC#DDGGG#F#AAA", "ACF#F#F#FFFFFDDCFFFFFFGCB#F#EEABCCCCGGG$#CC#E#AAAC", "DAAA#AEEE#GDD#FFBBDF#FADDD#EE##E#EF##FA#DBE#AACDDD", "DD#FEEBBC#CA#G#AAA#AA#AADEFFB#E#GGDBBBBAA#ACFB#BC#", "ACCFFFFFFFF#FBCCGGG#FAAAADDGG###GGGBBGGAAAAAAEE###", "E#EEAFGGFFFGCCBCB#BBGBE#FGGG#ABCC#CCBDDD#DDDDD#DAA", "A#D#D#GGG#CCCCGGCAEE#EE#GDCCC#CAAAAADGGGGGCCCGGAA#", "AGG#EC#CGFFE#E#EEEECCCDDADDDCCCCC#GGGCCCBGAEEEFBBB", "#BGGGCEECCCCC#BEBF##DBFDAAABB#FFA#A#AAAEEEEE#EEFC#", "CFFDDDBEEAAAAAAGGFDDDDD#DFDFD#FDDBBAAAACFEEEDEBFGG", "###GG#GB#GEEBDCCC#A##AAAAA#A#ABBBBDDD#DDCDDDDDEEFF", "FFFBBA##AB#DDDD#FFFFFGCC#CDEF#EGGAFFBBBEFBBDDB#EDD", "DADDADAFF#CCAAE#EE#DDGGGECEEF#FFF##FFBFFCE#EDD#DDD", "GBBBB##BBBBBCDEEEE##A#AEDDAGFGGAAA#F##BEEEB#BFBACD", "F#BBFGEEB#FCCCCFEEEBBCC#CC#C!CEEEEEDAA##CCCCEED#DC"};
    vector<int> trap = {96, 41, 23, 17, 14, 68, 42};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10201058559999998;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> maze = {"#BGGCAG#B##EFEBFCBGFD#E##FA##BBF#BCADAFGG#CD#AGFAD", "#CGEGBFF#GECDCFF#FBDDAAG#DCCBBB#CC#BGCBDD##AEDAAG#", "E##E#GEBC#CC#GGAEDECBBA#BE#ECE#FAGEBFGD#BCADGF##D#", "DB##BDCABBBADAFGEDEEFBEFFEGEAGFBEFGDA#CE#AFA#DF#DD", "GEGG##AA#GAE##DDEFGFA#CEAEG#BBFGBBADBGCEDBABCBGFEF", "DCGECEDEC#E##BBBEGGFDDF#C##DC#EFCF#EE#FCAGBGAAGFEF", "GCAFCFEGDFCCC##CGFF#A#BAFEAD#D#FC#D##DAADAF#B#DEEE", "C#G###BD#FBG#E#D###GCGG#GGFBD#EEGBE#BCE#FF##AEDEE#", "CDA##AGBDFDE#FD#ACCC#GDBABF#CC#B#AEBFCFG#GFACBA#AB", "AA#CDFCACAFEEEA#ABAFDFEGAE#FADBFAECBBAF##BGGDBEFDF", "FABGDDEBDDCADAC#ECAG##CFDEA#FFA#DAA#CABCGBFCFA###A", "!FCFG#FACC#GABA#CGBFCBC#BGGDCAFDDCFDGADEGDGAB#F#AG", "CDEAE#E#DEDDDGFEFEE#DDDBCDDFF####FAG#FB#G#GB###EFC", "#AF##B#BGD#E#GGEEEC##FBEGBG#DGDCBBFBEGAF##ADGGA#GG", "GBBEDAFDFFCG#GADACCC###EDFCE#GBFD#BBAEAFC#BEDGAFBA", "G#FFEF#EFEEGDADAC#BA#DCB#EG#GADE##ABAEFCGDD##BB##B", "BF#C##BBCCCAEDCD##FA#ACA#FCFA#EDGAGEFECCBBGFCGDEEB", "DE#FEDFFDDCBA#AD#GDAE#BGAEGEBF#GEDGCF#DACA#DDBCGA#", "GAEBFCEF##E#EFC#BFC#GCGEFAD#GDB#DG#FBDD#FAG##ABEED", "GFGDFDDEFAGEBCBB#DCA##FEEA#GABGBBD#FEBDECF##A#BD#F", "##BGADFCA##B##EBEBADADCCFBDEFAF#C#GGAADE#D##ACGF#C", "ECF##DCCDEGCG#C#CG#EGE#B##ADD#ADA#BGCADECECBD#DD#B", "GDFEAEBG##GAGBBFBECGCBEACB##GDDFGGAEFEBCCEACDAE#A#", "B#G#D#BABEDGBC#BCBFC#DGEBE#B#BCDB#CBBDBAAAF###FD#F", "EFDCFAGG#GB##BEDGFF#BBCF#BEDCABCEFCGED#EFABBBCGBCB", "#GEB#ACECDCCFGFGDGABACCG#FGAAGGD#ED##FEFBDEF#C#FDE", "#BGEFEG#CDGBFBFDEC#DGFFB#B#GBFGBEGF###CDBDEA##BE#F", "CCGBCGF#E#BBEFF###GED#DEEE##E#B#EEG#FA#GBCEGBGGCEF", "A##DA#A#BADG#DDF#EC#BABDE#CAD#DFB#GFBAEBCGACGCA#B#", "DB###BAD#FDCGCD#EBGGEEGF#DAFGDEC#FCCAEFDBCDFA###BB", "#DCEEEEABG#GFADBDFDBABEGDAEFEC#D#F#ADECBEG#CFEDD##", "#CD#DD##D#BA#AB#CBB#DDEDGBDDDDECB#DGB#GCEG#AAEFBFA", "FB#E#GDCBFF#DGDDDG#DFCCAD##CBFGGFDDGDDFCBGADAEACFE", "B#FF#BE##GCEA#CDDGECCAB#BEDFGCF#CEEFC#EDD#DEBGA###", "FE#FGBA#DAFC#D#EC#FECBED#B#GB####AB#DCGECE#BEG#AGF", "##BDCF#DBEC#FCFBGEDDAAECFGDG#EF###ACEABGEEGAG##BA#", "FF#EAGG##A#DB#BBE#BFDDCDBD#GGFAEEDBBEG#DDG##DFGGCA", "###E#BFGDBEA##EBCB#GG#CEBFGDBAGDF#CC#ABCFGAAEFABGC", "AGCGFBFBFGCE#ECCABCCBD#D##BBGACGCBFAD#DBDE#CE#EAD#", "AGGBGCEA##A#EFEF#FGAAFCB#EF#DGCFF#CBAAE#GFB#A#EFDD", "BEEDCDDGFFB#FB##FEFBFACBACA#EGDAEDGG#D###DECFEEAD#", "FDDBDDG#GGACG#F$#D#FEECF##FDCGAF#CGDEGC#GD##ABFEF#", "GBDDAB#BDDFGDBDDC#BABBGEGDAAG#FEDCAGGA#FDEC#ADGAED", "D#B#GBABD##AE#DD##A#CG#DF#AC#ABDDEBGEBA#A#FCDCAGDF", "DDD#FEFBCBFADADEBEF#FBEF#BAGFBD#GE#CFGG#CABGDGB#CF", "DGEGDDAE#F##C#DDF#DGEABCG#CFCF#FABFG#GEB#DG#EDECDE", "CCFEEB#A###AEB##GFB#FA#EDD#E#FAD#DB#ECFD#A#EFAG###", "CBEDEEG#FC##D##FBEEFEEA##ECADB#BFC#BDDDGDDGGEAEFEE", "#DB#GG#CA#AFBFGCCDGDD#BG#A#C#DA#B#CAGEADF#BEAD#E#A", "FC#GBFDEFAFCG#C#F#ECDB##ABA##AEEACAAEEAD#AAD#CFFA#"};
    vector<int> trap = {32, 65, 91, 81, 62, 45, 52};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006671279999999998;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> maze = {"A##AA###AAAAAA###A##A#AA#AAAA###AAAAAAA#A#AAAAAAAA", "AAA#A#AAA#A#A#AAAA#A#A#AA####AAA##A#A#AAA#AAAA#A#A", "#A#AAAA#A##AAA#A#AAAA##A#A####AA#AAAAAAA##AA##AA!A", "AAA#AA##AA###A##A#AA#A###A#AAAA##AAA#A#AA#AAAAAA##", "AAA#AA#A#A##A##AA###A#AAAAAA##AAA##AAA#AAAAAA##AAA", "AA##AA#AAAA#AAA#A#A###AAA#AAAAAAAAAA#AAAAAA#####A#", "#AAA##AA##AAAAAA##AAAA#AA#AAA#AAA####AAAAAA#AA####", "#A###A##AAAA#A#A#AAAAA#AA#A#A#AAA#A#A##A#A#A#AAAA#", "AAAA#AA###A#AAAAAAAA##AA###A##A####A#A#AAAAAA#A#AA", "A##AAAAAA#A#AAA#A#A#AA#AA##AAA###AA##AAAA#####AAAA", "A##AAA##AA#AAAAAAA#AAAAAAAAAA##A#AA#A##AAA##A##A#A", "AAAA##AA####AAAA####AAA##AA##AAAAA###AA##AAAAAAAAA", "#AA#A##A########AAA##A#A#A##A#A#A##AA##AA#A#AAA###", "#A#AAAAA##AA####A#A###A##AA####A#A##AAA#AA##AAAAAA", "A#A#A##AAAAAAA#AAAA#AA##AAAA#AA##AAA#AA###AA#AA#AA", "A#AA#AAA#A#A##AA######A#A##AAAAAA####AA#AAA#A#AAAA", "AA#AAAAA##A#AA##AA#AA#AA###A#A#AAAA##AA##A###AAAAA", "AA#AAA###AA#A#AA#A##A#A#AAA#AAA##A#AA##AA##AAA##AA", "A#A#A#AAAAA#AAAAA#A#AAA##AA#A#AAAA#A##A#A#AAA##A##", "####AAA#AAAA##AA####AAAA#A#A#A#A#AA#AA#####A##AAA#", "A#AA#AAAA#AAA#A##A#AAA#AAA##A###AAAAA#AAAAAA#AA###", "AA#####AA###AAA##AAAA##AAAAAA#AA#AAAAAAA##AAA#AAA#", "AA#A#A#AA#AAA#AAAAA#AA###AA#AAA##A#AAAAAAA#AA#AAA#", "#A#AAA#A###AA###AAAAAAA#AAA######AA#AA#A###AAA#A#A", "##A#A#AAAA#A#A#AAAAAA#AAAAAAA#AAA##AA#A##AAAAAAA#A", "AAA#AAAA#AAAAA#AAA#A#AAA##AAAAA#A##AAAAAAA#AAA##AA", "AAAAA#A##A#A#A##AAA#A##AA###AA#AA#AA####AAA#AAAAAA", "AA###A####AA#AAA#AAAAAAAAAAA######AAAAA#A#AAAA##AA", "AA#A#AAAA#AA#AA###AAA#AAAAA#AA###A#AA#AAAA#AAAAAAA", "AAAAAAAAAA######A##AAAA#AAAAAAA###A#A###AA##A##A#A", "###A#AAAA##AAAAA#AAA###A##A#AAAAA##A#####A##AA##A#", "#A###AAAAA##AAA#AAAA#AAA#AAAAA#AA##AAA#A###AAAAA##", "AAAAA#A##A##A###AAAA##A##AA#AAA#AAA##A##A#AAAAA#AA", "AA####AAAAAAA#A#AA###A#A#AA#AA#A##A#AAAA####A#AA#A", "AAAA#A##A##AA##AAAA#AAAA#AAAAA####A#AA#A#A#AA#AAAA", "A##AAA##A##AAAAAAA##A#A#A#A##AAAA###AA#AAAA##A##AA", "#A####AA#AA#A#AAAAAAAAAAAAAAAA#AA###A#AA#A#AAAAAAA", "AAA##A##A#AAA#AA#A##AA#A#AA#A####AA#A#A###A#AA###A", "AA###A###AA#AA##AAAA##A#AAA###A#AAAA#AAAAAAA##AAAA", "AAAA###AA#AA###AAA#AAAAAA#A#A##AAAAA#AAA##AAA##A#A", "AA#AAA###A##A#AA#AAAAA#AAA##A#AA#A##AAAA#AAAAAAA#A", "#AAAA#AA#AAAAA###AA#AAAA###AAAAAA##A##A###A###AAAA", "#A#AAAAA#AAA#AA###AAAA###AAA##AAA##AA##A##AAA#AAA#", "#A##AAAA#A#AAAAAAA#AA###AA#A###AAA#AA###AAA##AAA##", "A##AAAAAAA#AA#A##AA$AAAAAA#######AAAA##A#AAAAAAAA#", "#A##AA#A#AA###AAA#AAA#AAA###AAAA##A#A#AAAAA#AAAAAA", "AA#A###AAA####AA##A#AA##AAAA#AAA#AAAA#AA###A#AAAAA", "#AAAAAAAAA##AA##A####AAAAAA#A#A#A#AAA###AAAAAA##A#", "A#A#A###A#########A#A#AA#AAA#AA#A##A##AAAAAA###AAA", "A##AAAA#AAAAA#AA#AA###AA#AAAAA#A#AAA#AAAAAA#A#AA#A"};
    vector<int> trap = {48, 30, 25, 89, 83, 52, 3};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> maze = {"E#EE#E##E#EEDA#AACCC###C#C######CCCAA#AA##AAAED##D", "#DDDDDDGGGG##G#GGGF##F#FFF###F#FCCC##CC#####CB#B##", "BD##GG##G####GGCCCCBB#BBBB#####GGGG#DDDDDFGGGGGGGG", "G###FFF##FF##FFF#FFFF#FFAAA#EEEE#EEE#E####E#G###GG", "##GG##G#G#DDD###DD###DDD#DDDD#DDD###DDD#DDDDDDDD#D", "D#DCC#C#CC#C##C#CC###CCCCC#CC#C#C###CCC#CFFF###F##", "FBBBBB#BB#B##B#BAA##D#FF###F#EE#E#D#DDD#D#D#DDD###", "#DDD#DD#BB#BB#BB#B##B##BBB##B###B#AA#ADD#DD#DDD##B", "###BBBB##BB#B####D##DCC#A#A##AA###AA#####AAA#####A", "AAAA#AABBBB##B####BB###DDDDGGG#GGB#D##D#D##GG###GG", "#E###EE#EE##E#E#E##E##EE#EEE##E#EE##EE##EE##EEFF#F", "FFFF#FA#A###A#A#######AA#DB##BG##GG##GGGGGGGG##A##", "AGBB#B#BBGG##GGG#G#G##G##F#F###C##C##CEEE#EEE##E#E", "#EEE#E#EE##EEE#E#EEEEEE#E#EF###F#FFDDDDD#DD##DD#D#", "G##EE#E###E#EE##E##EE###EEEB#BBBBB#B#EEE#EE##EE#EE", "#C###C#CC###C###CCCC#CC###BAA#AA###AAA#GGB#B####BB", "#BB#BCCBBA#A#####AA####A#AAA#AA#A####A#CC#C##CC##C", "CCC##CC###C#C##C##C#C#C#C##C#CCCC#CCC####CCCF###FF", "#FFF##AAAAAAA##E####E##EE#EEE#E#E#EE###FEE#EE##A#A", "#A#AA#AAAAAE#EF#F#GG#CC##CC#C###CCCEEEE#!A#AAA##A#", "#D#GG#G##GGG##CCC#C#CCC###CCCGG#GCCC##CC##C#####CC", "###CCCCG##GG##GGEEE#FFFDDDDDD#D#D##CC#CC##AAA#AAAA", "###AAA##AGGFFF#BB####BBBE##EEE#EE#ECC##C#CCC#B##EE", "E##E##EEBBBBB#BBB###BBB#B#BBDGGGFF##F#F#A#AA#AAAEE", "E#E#EE#E#EBBBBBB#B#BEA#A##DDDDD##DD#D######G##GGG#", "GG#GGBB#BBBB#BBA##AAAA##A##AAA#A#####AA#A##AA###AA", "##AAAA#A####CC#CCCCCCC##C#CCC#CC##CB#B#B#E#ECCC##C", "CCCEE##E#E##E#E##EEEE#EE#E##EE#E###GG#EEEE#G##G#EE", "#GBBBD#FFFFF####F#G#GGGGGG#G#GG#GG##GGG#GGG#G###GE", "EE#A##A#A#A###A#AEEEBB#B##BBB#BBBB###BBBB#BBDDD##D", "#D#DD##DEEEA###A#AA##AAA#A#ADDD####DD####DD##AF##F", "FFF##FCC##CCCCC##CEGG####G#GGD#D#CCA##A#A#A##A#AAA", "##AAA#DDDC#CCGG##G#GG#GCDDD###DEEG###GG#GG#G#GF###", "GFFFF#F##FFF##FC##C##C##C#C#C###D#B#BEEDDD#DDDDCCC", "CCC##CCA#A#A#A#FF#FF#A#A#ACCC#CCCCA#AA#AA#AACCCGGG", "G#G##G#GDDB#BBB##B##BC#G#G#GE###E###EE#E##EE#E###E", "E##E#AAA#AA###AAAAABBFFFFFFF#F#FFFFB#EEE##CCC#CC##", "C##CC###CC###C#CC###DFFFF#FC#GG#GGDE#EE###A#AE#EEE", "#EEEEE#E##E#EEE#E####EE#B#B#BCCC##C##CD##DDD#D#DD#", "BBBBB#BBB##BBB#BBBDDDDD##FA#A#F####FA##FF###F##F#A", "A##A#AAAA#A##AA#AAB#BGGGG#G#GGG#GBB#BB##B##FF##FC#", "CDDDDDD#F#FFF##FFFEEEEEE##EEEE##EDDD#DDFFBBBBB#BG#", "AAADDDD#D#DG##GGGCCCCCCCCC##DDD#DDDDDD#DD#D###DE#E", "E#GGGGGG#GG#G#GGGG#GG#FF##DD#EEEEEEEEEAAA###A##DDD", "D#DDD##D#D##F##F#F#F###FFFFF#FAEEEE#EEA#A#A#AAA###", "#AB#BB#BBBB#BFF#FFFF#F#EEGGG#G##GGG#G#G#GGGG#GG##G", "#GG###G##G#DF#F#FF##FBB####BB#BE#EEEE#E###EEE$EE#E", "DDD##DDFFFFBBB#BB##BBB#BF#FE#E#E###EDDBBBB####B#BB", "##BBBB##BBBBE##E#EEBBB##B#BBBB#CCC#C###CCCGGGG#GG#", "G#G#G#G##G#CC#C####CC#C#CC######F#F#F#FF#F#BE#EE##"};
    vector<int> trap = {25, 72, 22, 14, 71, 6, 19};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> maze = {"C##C#C#C#C#C#GGFFGDD#DC#F#####F######FF######FFD#A", "BBBBAA####AA#C#FAAGGGGGEE##A#ACA##D##DEDCAGEEE###E", "FGG#GE##ECCB#B#BEEGG###E#EEF##F##GAAFFFBC##B#CCC#C", "C#CG#####G#GG######FDBE#EE#GDD##CEEE##E#####E#BE#A", "AADD###DDDE##B#BBB##D#GG#G####G#GGGGEBBBB#B#B##EGG", "G#F#F##F##EEEB#BBB#BB###C#CA###DG#FF##CC#AAEE#FF#E", "EEEFGG##E##D#D##D#DB#B#EEE##E####GGA###AA#AA##GCAC", "CCCB#BBA###CCCC#CCGCCC##GGG#G#E#G##A###AA#AF###F#F", "C#C#D###D####DD#D##DDAACCFBBBDDB#BB#BF###FG#GG#GA#", "EA#AC#G#B#B#B#BG#G###G#GDD#AA#CCF###FFF##EE#AAB#GB", "##A#AA###D##E#AAE####BBEEE###EE#EA#DD#D#CGGE##EE#E", "F##EEEEG##D#D#DDDEBEFFFFFA###GEE#A#FF#F#FC##$###C#", "CCG#GDD###D##EE#E#E####ECC##BCCCAA#A###FF#F#A#F###", "#FFB####E###E#E#EEE#BAAEF#BFFF###CCF#FF#FF####FFF#", "##F#F###FFDB#B##B#BBB#F#CFF#FCCG#A#DCCCCC###C##A##", "AA#C#D#D#D#DD##DDA##C##CF#EE###FDD##D##FB##BA###EE", "#F#F#F##F#D#A#AAA##G#GG##G######GG#G#C#C#C##F#AAD#", "#C#GGFDD##DD###D#D#F#B#B#BGF#AGGDF###ACCF#FF###BE#", "##EE##E##A##FBBBBBDDDGGGG####GC######C###CCE#E###E", "AA#A###G#E#E#DD#DFF#F#FF#A##GG###G####C#GA####GG#G", "GACBBBB#BD#AA##FFFFFF##EE#EE#EB##BA###A#GG##FBB##B", "B####GD#DDD#######DD#FD#D#EECC#CEFCCCCG#DEE#DC#BBD", "########FCDA#FFFF##GGBAAAAC#FE##F#GG#GFF#FFF#FF#FF", "F#AA#AFFD##D##DEFA###CCC#B###AAA#B###B##BB#EBC##AB", "B#DG##G#EDD#DAAADB#BEEAFA###C#DGGGGGG#GGGGFE#E##EE", "EG#DBD#DD##D#EGGG##D#DDDA##D####D####D#D#GAA#AAAAG", "CC##F###AFBBC##CC#####C#E#EEE##B###BBCC#F##EEEE#AG", "G#GGG#G####E###EE#EGF####F#FFCE##EEAF#FA#A#EEE#EEE", "ED#CA#AD##DD#DFD########D#G#G#BB##B##GGGGG#CCBBBDG", "GFFA#F####FD###DDA#GGE##E#EGG###GFF#E####C##EEEFCA", "##ED###E##EEAEA#F#FDDC#CCC#CE#CF#GGDD##ECB#D#DDD#D", "DDDDE##E#EF#ACC##C#GD#DD###EE#D#DD#BBBDE#EE##GGGBF", "#F#CC#C##GAAAG####C#AAAA#ADD#DGBB#B#BC##FF##E#EE##", "##AAA##AF##CCC###CCC##CBEGCC###CDC#CCCC#B##B##BFD#", "D###D###D###DD#D#D#GCD##F#A###AAA###G#GGG#GGD!G###", "##G##G#GF#FBB#C#CC#EBB#B##A##F#B###E#DD#G#G#B##BDD", "C#AA#AG#GGGBBC#CEEEDCFFGFG#BB##BFFFBBGGCC#C####C#C", "#C###C#CCD#C#D#D#DGDDDD###D#DDDD#D#DGGCAAGG##GGGDD", "#DD##DD###D##CD#DC#CEDBB#BA##AC####C#CC#BB#B#G##C#", "##EAC#CCA#C#CC#C#C#E##EB#G#GCC####A#A##CCCGG#A#AD#", "DD#D##D##DD#D######D#ABB##CGG##EG#GGF##FFF#CA#G###", "######C#CAAF##E###EEB##BB###BB##BCCEFF##ACC#CEE#E#", "#E#A#B##BF###EGGCCC##A#A###A#AA###CCFDD##DD#D#D###", "BB#B###G#GGG#E##BB#GAA#AG#G###BBG##GG#GGEE###EE#EE", "##FDG#EE#E#BB###BB#BCCBB##BBBB###F#FCB#BG#DD#D#FE#", "##EB##B##D#####D#DD##CC#G#G###G#G#GGGG###D#EED#BD#", "CC#CCC##CEEDFFGG#AA##EED#B#B##F##GGGC###CCAAD#DD#D", "##DFF##G#G###C#CC#D#CCFE##E#E#D####D##DGG#GGA##FBB", "#CCCGE#FEFB###BBBBBEE#GE#D###DDB##DBBB#B##AAA##EF#", "A#A#CAAAFFFC##CC##CADD##DBB#BBB#C###FG#G##G###G#GG"};
    vector<int> trap = {100, 77, 70, 13, 51, 98, 1};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> maze = {"GAEBA###GE###GFDB#DF#F##C#AE###F##C##G####GCDF#ADA", "##AA##FB##FF###BGEACC###ECF##E##EACCAB##DDDG#EG#CG", "##CF###GFDC##G#FGG#G#G#D#F#DEDGE#E###D#GCBC#DFD#D#", "CBGFDFD#G#AE####B#FDDGD##D#EAF#F#BCEGDE#FE##D##GG#", "DG#EGB#BG##AGDAA##FDGBEB#C##BA#A#A#C#GGGE###ABE#C#", "#CFB#DGGB#F#D##F#D#BAC#D##EDEG###DCG####DC##G#GG##", "AAE#CB#D##FDG#DC##G#AFCCFFA#G#B!A##AGFG##FBB###AC#", "#AE#AFA#E#GDFCAACA#BBA#GGC#FBF#AG#F##E#DBC#C##A#FB", "B##FG#AG#C#ED#B##B##EG##A#FEAC##EBC#A#DCDDDD##DEDD", "GFCDCA#B#D#D#A##BBC##BF##CG#A#G#BGACEFF#B##B#CC##C", "GADGEG#F###CC#F#C#E#C#C##BB#BGE#C#ED#CDCGEEC$#BG#G", "#A#FFA#CEGFEDDC#EA##BG#E#AG#D#BE#BC##G#F#F#BD###D#", "D###FBDEG#C#A#CC#ED#F####DAE#G#D###F#FGF#D#AA##ABE", "###G#F###A##DCC#CD#D#FCDEACAG##DGEGADDDGC#DFDB#B##", "B##FAB##B#EBCG#FFGA#B#CBDE#B##DC#GBE#G#CG#D##GGCBA", "####A##FG##BGB#D#A###EABAFCCCF#GGF##AB#G##A#####FC", "GFFG##FBF#E#C#A##C#A#C###GBB###D##G##G#FDDC#FAC###", "FFAA#B#BF#AD#A#DF#BGFG#GAGE##G##EGC#FA#F#BD###F##B", "#D#AC#AG####GFE##A###E##DAEDGBFB##GB##E#EFC#####E#", "#D#####DGA##AC#B#EB#EAG#AEEDAAE##F##BDFD#AE#DGD##B", "AEA#BD##F#####FF##GD#DEG##E###FEA#F#DDEBD#E##E#C##", "##BGG####A##ABG#F#F#D###CGC##BCCCG#G##D#EAB###DF#D", "GB###FE#GDB#GDFAECF#####DDCAC#F#EF##DFBC#G#F#GBF#C", "EA###GAC#ADAAAAEDCB#CBCC##D#G##F#FF##F#EFFECA#C#A#", "#F###D##DC###D#A#F#FFEBFC#BG#A##F####BGBBD#DBDG##F", "BBC###EFB#####C#B##FEFEAGC####FAGD####CAFD##C#B##E", "##DCBDF##BB#C##FEGA#DE#GDDA#A###F###CBD##FEBB##BDC", "#CFG#GC##CD##D##GDBEF#CE#GCEF#EA#A##C###AC#E#GEDDB", "##CF#GFG#EFBECEG#D##GDG#EG#GCAC##CBB##E#A#G##CED#C", "##DF##G###EAAA##BD#GFAAEGEDA#GF#AF###AG#CGCC#E#G#B", "FA#E#D#BGAFG##GBDFDG#E#####CEBAFC####BB#G###BE#C#E", "#CC#C##FEAEE###E###FG#GAEC#GFA#F##F##A#EG####C#B##", "GCCBE#BG#DAFD##B#FEBGB#CAGD#B##CDC###AGBDD#BA####B", "B###DA#GGBG#####BD###DB#GB#GD#A#G##FCFFBFGGEC#FBCF", "C####D#A#GBG#C#CD#AEDCCA#C##GF##BG#CG#AA#EGF#GCF#B", "BE####B#DC#G##BA###BFBG####D##BD#BG##C##GAECGB#GCA", "DDG#G#B#FGDFCFDGF##ACD##F######AEGGBD#BB######DG#A", "#AEEE#CGEEGGC###GB#F#B#EEFA#C#EF##DB#C###EBB#G#GEE", "#CB#BFCCB#AC#EF###DGBDD###F#B##ABCCB##CE#EADB#AAB#", "FC#E#BGFFABF#A##B###DAAFB#A#ECCE#F#B#GAF##E##GED#E", "#D#FF##EADB###E#FFED#CE#CGA##FBBCFDBE#EB#D##E#F##E", "##A######BEBBCG#DBGC##A#CB#AFB#F#ECDA#EB#AFG#GEC##", "F#A#GDB#F##E#BF#GADEFEG#C#F##FGFA#GCCED###FDGGEE#F", "C###A#ABC#FF#GD#E#GF#FGDCEFBBA#D####FFG#DE#GAEG##E", "##A##FA##DECC##CE####BEDEA##AADC#CDE#G#A###BC###EF", "#B#AA#B#A#G####FBC#B#CBCG###FGBEBBA#E#FEAEBD#G#DGD", "ADB#EE#BB###B###G#BG###BCG#BCC#A##BCDDAGGEDE##CF##", "##D#C#FD#DG#G#CAA##B#DA######B#EBF##AEBEGA#D#FCCDD", "A#BE#BB#GGCGE#ECEDC####G#D#B#D######B#AF#DB#B#C#CB", "##C#C#G#AA#BFFEC##AAACDFD###CAGGDA####CBE#F##BC#CD"};
    vector<int> trap = {57, 81, 98, 0, 46, 84, 5};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3411872000000012E-4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> maze = {".C.CCCCCCCCC.C.CCCCCCCCCCCCCCCCCC.CCCC.CC.CCCCCCCC", "CCC.CCCCCC.CC.CC.CCCCCC.C.C.CCC.CCCCCCCCC.C.CCCCCC", "CCCCCCCC.CCCCC...CCCCCCCC.CCCCCCCCCC.CCC.CCC.CC...", ".CCCC.CCCCCC.CC.CC..CCCC.CC..CC.CCCCCCCCC.CCCCCCCC", ".CCCCCCCCC.CC.C.CCCCCCCCCCCC.C.CCCCCCCCCC.C.CCCC.C", "C.C.CCC.C.CCCCC..CCCCCCCCCCCCCC.CCC...CC.CCCCCCCCC", ".C.CCCC.CC.CCCC.CCCCCCCCCCCCC..CCCCC.CCCC.CCCCCCCC", "C...C.C.CCCCCCC.CCCCC..CCCC..C.C.CCCC.C.CCCCCC..CC", "CC..C.CC...C.CCCCCCCC.CCCCCCCCCC..C.CC.CC.CC.CC.CC", "CCCC.CCCCC...CCCC.CCC.CCCCCCCCC...CCC.CCCCCCCCCC.C", "CCC..CCCCCCCC.CCCCCCCCCC..CCCCCCCCCCCCC.CCCC...C.C", "CCCC..CCCCCCCC..CCCCCCCCCC.C.CCCC.CCCCCCCCC..CCC.C", ".CCC..CCCCCC.CCCC.CCCCC.C.CCCCCCCC.C.CC.CCCCCC.CC.", ".CC..CCC.C.CCCCCCCCCCCC....C.CC.C.CCCCCCC.CC.C.CC.", "CCC.CC.CCC..CC.CCCCC.CC.CCCCC.CC.CCCCCCCC.C.C.CCCC", "CCCCC.CCCCCCCCCCC.CC.CCC.C.C.CC...CC.CCCC..C.CCCCC", "CCCC.CCC..CC.C.CCCCC.CCCCCC.CC.C.CCCCCCCCCCCC.CCCC", "CC.CCC.CC..CCCCCCCCCCCC.CCC.CCCCCCC..CCCC.CCCCCCCC", "CCCCCCC.CCCCCCCC.CC.CCCCCCCCCC.CCCC.CCC..C.CCCC.C.", "CCCCCCC.CCC.CC.C.CC..CCCCCCCC.CCCCCCCCCCCCCCCCCCCC", "CC.CC..C.CCCCCCCCCCCCCC.C.CCCCC...CCCCCCCCCCCCCCCC", "CCCCCCC.CCCC..CC.CC.CCCC.CCCC.CCC.CCCCCC.C.CCCC.CC", "CC.CC.CCCCC.CCCCCCCCCCCCCCCCCCCCCC.CCCCC.C.CCCCCC.", "CCCCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCCCCCCCCCCC.C.CCCC", "CCCCC.CCCC.CCCCC..CCCCCCCCCCCCC..CC.CCCCCCCC.CCC..", "CC.CC.CCC.CCCCCCCCC.CCCC.CCCCCC.CCCCCCCCC.CCCCCC.C", "CCCCCCC...CCCCCCCCCCC.CC.CCCCCCCCCCC.C.CCCCCCCCCCC", "CCC.CC.C.C.CC.CCCCCC.CCC.CCC.CC.C.CCCCCCCCC..CC..C", "CCCCCCCC.CCCCCCCCCCCCCCC.CC.C.CC.CCCCCCCCC.CC..C..", "CCCCCCC.CC.CCCCCC.CCCCCCCCCCCCCCCCCCCCCCCC.CCCCCCC", "CCCC.CC.CCCCCCCCC.CCCCCCC.CCC.CCC.CCCCCCCCCCCCCC.C", "C.CCCCCC.CCC.CC.CCCCCC.CCCC.CCCCCCCCCCCCCCCCC.CCC.", "CCCC.C.CCC.CCCCCCCCCCCCC.CCCCC.CCCCCCCC.C.CCCCC.CC", "C.CCCCC..CC..CC..CC.CCCCCCCC.CCCCC.CCCCCCCCCCCCCCC", "CCCCCCCCCCCC.CCCC.CCCCCC.CCCCCCCCCCCCCCC!CCCCCCCCC", "CCCCC.CC.CCCCCC.CCCCCCCCCCCCC.CCCCCCCCC.CCC.CCCCC.", "CCCC.CCCCCCCCC..CCC..CCCCC..CCCCCCCCCCCCCCCCCCCCC.", "CC.CC.CCCCCCCCCCCCCCCCCCC.C..CCC.CCCCCCCCC..CCCCCC", "CCCC..CCC.C.CCCCCCCCCCCCCCCCCCCCCCC..CC.C.CC.C..C.", ".CCC.CCCCC.CC.CCC.CCCCCCCCCCCCCCCCCC.CCCCCC..C.CCC", "CCCCC.C..CC..CCCCCCCCC.CCCCCCCCCCCCCC$C.CCCC.C..CC", "CC.C.CCCCCCCCCCCC.C.C.CCCCCCC.CC.C.CCCC.CCCCCCC.CC", "CCC..C..CCCCC.CCCCC.CCCCCCCCCCCCCCCCCCC.CC.C.CCCCC", "CCCCCCCCC.CCCCCCCC.CCCCCCCCCC.C..CCCCCC.CCCCCC.CCC", ".CC.CC..CC..CCCCCCCCCC.CC..CCC.CCCCCCCC.CCCC.CCCCC", "CC.CCCCCCCCCC.C.CCCCCCCC.CCCCCCCC.C.C.CC.C.CC..CC.", "CC.CCC.C.CCC.CCCC.CC..CCCCCCCCC..CCCCCCC..CCCCCCC.", "CC.CCCCCCC..CCCCCCCCCCC.CC.CC..CCCCC.CCCCCCCCCCCC.", "CCCCC.CC.CCCCC.CCCCCCC..CCCCC..CCCC.CCC.CCCCCCCCC.", "CC.CCCCCCCCC.C.C.CCCCCC.CCCCC.CCCCCCCCCCCCC.CC.CCC"};
    vector<int> trap = {35, 63, 94, 24, 96, 81, 35};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06000000000000005;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> maze = {"AAAAAAAAAAAA.AGGGGGGAAAAGGGG.GG.GEEEEEEEE.EEE.E.GG", "GG.GGGGGF.D.D.DD..D...DDDD.D.DAAAAAAABBBB.BBBBB.BB", "F.FFBF.FF.F..F.F.FFFFFFBBBB.BBFGG.C.CC.CGGGGCCCCCC", "DDDDDDDDDG.EEEEEF.FFFFF..F.DD.D.DDDDD.DD.D..DDDDDD", "D.DDDD..DD.DDD..DEEEEFGGGGGFFFFFGAAAAAA.AAA.AAA.AA", "AA...AEEEEFFFFFFFFF.DDDDDDCCEEEEEEE.EEEEEEEEEEEEEE", "EEEEEE.EEEE.ED.DDDD..DGEEE.EAAAAAAAA.AF.FAAA..AAAA", "A.AAA.A...AAADA..AA..A..AAA.AA.AAGGGGG.GGAG.GBBG.G", "GCCCCCCCGGGGADAAAAGG.E.EEEEEE.EAA.AC.CCCCCCCBBDDDD", "DDDB.BBBBBBBCCAAAAAAAA..AAA....A.AABG.DDDDDDDDDDDA", "AAFFFFFF.FFFFFFFFFFFFFF.BBBBBCCCGG.GGGBBDD.DDD.D..", "AAAAAAAA..AD..DDDD.DD...D.DDDDDE.E.EE.FFGGGGGGGG.G", "GG.GGGGGGGGDFFFFFFFF..CCCCCCCFFFBEEEF.FFFFFFFFFF..", "FFFFCCCCEE...EEE.E.EE.C.DFDDDDDDDDA...AACA.AAAAAAA", "CCCCCCD..DDAAAAA.CC.CCC.CCC.CC.CCC..BBBB.BBBB..BAA", "AAACC.CCCCCCCCD..DAC.CCCCCCBBBDDFF.FFFFFFFFFFAAAAA", "AACCCCC..C.CCCCFFFFFF.FECCCC.C.CE.C.CG.G.GG.GGGGGG", "DDDD.DDD.GGGGG.GGGGGC.CCC...C..CAAAFF.FFFFFFF.FFFF", "FFAAAAA.AAAFFG..GGGGG...GGBBBBB.BBB.BBBBBB.FFFAAAA", "AAAECCCCCCCCCCGCCCCE.EE..E.E.EEDCCCCCEEE.EEEEAAA.A", "AAAAAED.DEBGFGGGG.GGGGG.CC.CC..CBBB.BBBBBBBCCCFFF.", "FFEE.E.E.E.E.EDDD.DDD..DDCCC.CCCCCEEEEE.DDDD..C..C", "CCCCCCCC.CCCCCC.CC.C.FD.D..D.DDGGF.FFFF.FFFFFFFFFF", "FFFFFFEEEEEEEE.EEEEED.D...DDDG.GC..C.CBBD..D.DDD.D", "DE.EE.EE.EEEDDBBBBFFFFF..ABBBBBBBBBBBBBBBFFFFFCCFF", "FFFF.FFBBBBBGGGGGGGGGGCED.DDDDDBBBBBBBB.BBAA.ACCCC", "CF.FFFFF.FFGF$FFFFFFFF..FEEGGGG.GGGGE.EB.BAAA.AAA.", "AA.AAAA.A.AA..AAD..DDDA..AD.DDDB.GGG..GE.EE...EE..", "G.GG.G...GGGGG.GGGGGGGGCCCCCC.CCC.CGD.DDDD..DDDDD.", "..DDDDGEAAADDD.FFFFF.F.FFFFFDDDDDD.FEE..EE.FFFFFFF", "FFFFFFFFFFF..ADDDDDGGFFFFFFFFFFFC.CCFFFFFFF.BB.BBF", "FFA.A..AAAAAA.AAAACCC.CC.FD.DEAAA.A..AAAAAAB..BBBB", ".DDD..DDGGEEEEEEEEAA.A.AAE.EEE.EEEE..CCGG.AABBB.BB", ".BBBBBB.BCCCAAA..A..A..EEE..GGGG.G.AA.ACC.C.C..CCC", "CCCCCCCCCCC.CCCCCDDDDAA.AA.AAA.AAAAAAA.AE.EEE..EEE", "...E.EEAA.AAAAA.AE..EEEEEEEE.EEEDCCCCCEEEEEEEEE.EE", "EEEEEEEEEEEEEE.E.FFFFFGG.GGGEE..EEFFF...FGGGG.GGCC", "CC.C.DDDD.DDFFF..AAAAA..AAGGGDBGG...GBC..CCCAAAAAA", "AA.AABBBB.B.GGGGGG.G.GA.A..A....AAAAA.AA.A.AE..EAA", "EE.EEEEEEE.GBBB.CBBB.BC.CC.CCCCDDDDDEFGGGGG...GGGG", "GGGGDDDDC.CCCC.CCC.C.C.CCCC..C.CCE.EEE...E.E.EEEBB", ".BBD.DD.DD..AAAGGGC.CCC.CCCCBBBEEEBBBBBBB.BBBBBB.B", "BBBBBBB.A.AAAAAAAAAAA.A...AAAA.AA..AAAEEE.ECCCC.C.", "CE..ECCCBBBBBBBBB...AAF.F.!FFFBBBBBBBBBBBBBBBBD.DD", "DDD.DDA.BBB.B.BB..BBB.BB.EE..F...FFF.FFFEEEEECAAAA", "..AAG.GFAAEEEEE.EE.EEEF.F.F.FFF..FFF.FFFAAAAAA.A.A", "AA.AAAAADD.D.DDDD.FFFFF.FF..FFFFF.FF.FF.F.FEED..D.", "DDD.DDDDDDAFFFFF.FFFFFFFFF.F.FFFFFF.F..FFF.FFFEE.E", "EECCFABBBBBGAAAAA..AAAAAFFFFFFEAE.EEEFG..G.AFF.EE.", "E.EE.EEEBBBBB.BB.FF..FF.FF.FF.FCCCE..E.EEEEEE.E.E."};
    vector<int> trap = {49, 24, 80, 74, 6, 74, 3};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.18235999999999994;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> maze = {"CC.BBBBBBEEFFCDDCAAA.AA.E.EGD.DDDDF.BB.BBBAA.G..AA", "AAAAFF.F.FAA.DDACAAFFDDDDDDAA.AAECCEEDCCC...BCBBEE", ".E.EAD.DDDDBDDBB.BB.BGAAA.AAEFFDBFEAA.ACE.ECCAD.D.", "DDDDD.ABAF..CC.EAAA...GBFGGGGGGGCCEEEEB..BCC.CCEEE", "E.D.ADDDGGEEG.CCC..CFABBBBBBABCCGB.A.AFAF.AF.D..D.", "BDDDDAAAAA.AAA.AA.A.AE....GGGGGDFEFFFCD.C.DABBBBCG", "FFFDD.DFDDDD.DGG.GG.GEEG.G.EEEF.FGG..F.DBBFFFFD.DD", "DCCB..B.BCGGAA.A.BBBB.EEEGBB.BDDBBCCCCG.GD.DDCDCCC", "..DDDCDAC.CCCC.C.F.FG.GGFFFF.F.BCCCCCFFAGGGG.GGG.G", "DGGGGEGGEEEAF.FCAAC.CEEEDDE.EB.BBBG.C..FBBAAA.B.BC", "EC..CAEED.CCG.GEEDDD..AA..A.GGGFFFFFCCCF.FGGGDDDCE", "CDBEEEF.FFFGGE.EED..DC..EEEE.CBBDEE.EEF.FBBBBB.DD.", "DAB.F.BB..B....BBBB....G.FABBB.E.EEBFFFF.F.AAAAEG.", "GFFFFF.FGGGGGGFFFFFF.FC.CEEEE.GFFCCG..FF..FDDF.FFF", "..FFC.GBBBBBCFGA.AA.EEE.EEDD.DFCCCBBBDDCDDBBBBBGFA", ".FF.DDDGGCFFFFF.FFDACC.CBFBCDCCCCFA.AAEE.ECEEE.EEA", ".CCCCGBGEE.EGGGGGEGGGG.AAAAGDDDFFGAAAFA.A.AAAAFDD.", "GGEA.AAF.FFCDDDD.A.GDGBBBBBG..ABB.EEGGDDDC.CCCCE.D", "DDCCF.F...F.FF.GCCCFF.DAABBB.B.B.E.EBBGCCCE.E.EDGG", "GGFEGEDFBBBBB...BAABBBF.FFAAAAA.AADDDDDDDGAA.AGGGD", "DG.G..CBF.FFEEE.E.G..F.FFFGGFEG.GGE$CCBBB.EEAAAAAC", "CCCCCAG.GG.GC..CCC.CBBBGF..FEBFB..CC.EGCA.AABDDG.G", "CG.GGG.G.FCCGGGDD..DDE.BB.BBDF.A..GGGGGBB.BBA.AAFF", "CCEFCC.EEE.FF.FA.AAD.DGGGGGGGDG.DEBE.EED.CDFFFD.AD", ".DDDDD.CEEE..EEAEE.E.BE.GAAAAA..AAAEEFFFFA.AA.AE.E", "ECEEFFFFFC.C..CC.CC..CC.CC.EDD.DDDDDDDD.DF.F...EEE", ".EEEECC.AAAFFAG.GBFF..FBDDGDCBB.FFFFG.GGGFFF.FE.EG", "G.FFCFGCCCCCCBF.FEE..ECFF.FE.E.F.GGG.CBBBEC..F..FG", "CC.CCCC.GCC.D.AD.DDADCCBGCCC..CCCCEDDD.DDGAFFGGGGG", "CC.CAAAA.DDC.FB..BBGGEEFFFC.CEEEDA.A.CCG.G.GGGGGDB", "CE.ED!.C.CC.DCDD.DE.EE.EDDBGCA.B.C.DDD.DDBBGGGGFDD", "BB..FFCCCCCCCEFAAAA.D.GGG.G.GAAC..AFFEBBBBDDDEE.EE", "EEEAACCE.EFFCC.EFFAABB.F.GGCD.ED.DDDDDDBB.DEABFFFF", "F.CG.AADGGGEB.BB..EDA.AF.GGG.FF.DBBFFFCCFEE.EE.ADA", "AA.A..CEFBBB..BBBBEDDD.DDDDD.DDAAACFFFF.FF.FFFFDDC", "DCBB.BE.E..EEDFFFFFE.EEEEECBBBBBACB.B.BGGFFCEEEEGA", ".AGEEEEEEBB.B.BBBDDA..C.ADDAAAAAAAABB.FFFFBBDD...D", "DDDD.D.A.AAAGAADEGAGG.GCC.FFFFDCG.G..BBFDGGG.AAEGE", "EG.AAA.GGEE.DDDBB.BBE..EEECFFFFCCCBBBBBE.EEBBBFF.G", "B.BBB..BBB.BGGGG.FFFFFDDFFAFFE.BBDBDDDEACBBEE.EEE.", "EEEE.EE.CCEAAA.D.AE...DDA.ADECCEDF.FGGDDGEEFF.F.F.", "FAD.CE.EEE..CCG.BBE.EF.DAAA.DBBCCCCCCF.BEFFFFEE..D", "BEEFFF.C.CCC.CCC.G.GCBBBCC.C...BBEGBFDEEECDFBDDDFC", "CGG.GGGG...BBGG..D..DDBB.FFGBB.BGGG.CGGGEE.EE.AB..", "AFFFGDDBGGGGDDFFC...CC.EE..GAFFAGGG.DD..DDDGG.GE..", "FFAAAAEEEE.GGE.EE..EBBBFFEEEGAEAAAD.GG..G.GGBFF.F.", "DGGBDDDEBGBFF.G...GGAAACCBC.GGGE.BBACCCBCCEABBF.CB", "B.C.AB..B.CC.EBGGBFFCAABGGGGBBFFF.FAFFFFEEBCCC.CCA", "GGGGEFF.F.FDE.G.EF..DDDD.A.BBBBB.FFFFG.GDD.A.E.BFF", "EEE.E.EAAADCCCEE.EC.AADFBBB.CBBCC...CCC.E.BFEECCC."};
    vector<int> trap = {54, 61, 29, 48, 80, 18, 99};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3692;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> maze = {"BCDEA.CGB.G.FBBE..BEFDD.BFBCFED.AG.DC.BG.F.FEAGGG.", "B.AFC..FFCC.EB.E.BAFDAE.B.BFB.E.ACDGA.ADG.GEDFAAC.", "FD..DDFAFBGBECFEEG.AA.DGFAE.A.EEFAACC.E.FB..DACEGA", "GBAFG.FC.B.CAEBDDDEBEBG.ADCG.GCA.CEACGCEDFAA.GE.CA", "CFGECDEGDFFGCC..B.FD.EGGGCA..DGFBEFCEDBC.EBGC.EBAA", "BF..BFDECE.ED.FD.GBDDE.EF.EBEEG.FEF.E...B.CGDDCDCG", "BEBEAFEGEABFCAC.GA.D.EDE..D.GFB.EFFGCEDEEDAADB.BF.", ".CAGG.AEFDAAEGGGBF.GF.AG.DAACEDCDBEFBADDEABCDF.GAB", "BG.GGEAGBCDD.DE.CGDBABFECFBBCBF...GCC.DFGBF.CDEAFC", "BG.BA.GB.CACDEGGG..CFG.ABFBEADEFCCEAE.B..DCDFADBAF", "E.C.BC.F.AFEE.CCE.F.DDADGFCDBCGCGFDFC.GA..EC.CGAAD", "BDAFCG.GBEF.EE.DGF.DD..DBE.D..AAGDGBEEDFBDEBD.GDGE", "BGCFFB.CBBE.DB.EEFEGDFECEB.CDFEG..DG..AFA.AGGDDC.A", "CCGFGDAEC.DGCFC.CG.E.BBDCAG.G.AAEFDGFBE..FCD.EDDCG", "BGGEDAGAE.ACAFBGB.AGD.DEEEECDCEC.GGFEBCCA.DDGBB..G", ".ACEFBD..ACBBCGBFAEDC.GGCCEDE.EAECF..AEACF..F.E.BE", ".BGFACAGEE.DABBDF.A..CC.D...E.DCFCBF.DAB.BBAGGEEAC", "DE...DE.FFCCDECAFEB.CABCBGEBGBFFF.!GCFBFA.AFGFADE.", "EEC.BBBBBBD.AAGBAFFBG.EA.FAEEEB.AAG.GBGGAAGB.AFBAA", "FB.EG..BFFCGFG...FBD.AAAG..FAB.CFCFD..CGGCEGBGDB.A", "CCC.G..G..BEFABB.BB.GBGGA.EE.AEGBCG.AGFB.GDDB.BFA.", ".BGAAB..DCF.CAD.D.GFGGG.B.C.GBAFFCCFA.GABDC..CD.GF", "E.CBGEBE.ADGDBGAA..B.CBBGGBCABA..B.AG.BAFGD.BDB.AD", "EDEEB.FFG....D...CEA.DAFBFG.B...DG.FBBGCA..EFAAGAG", ".C.AF.DFAEBF.BFG.D.DEAFAEF.FBCBBCE.FG..CADGDAFAFD.", ".D.DBG.BGBBAAFD.FC.CE.A.BEGBDG.GG.GCCC.GF.A.BAGGFG", "F..ECEEA.BE.ABA.FFFCFBCBBGCBDCFDCE.C.BAFBAFCDEDAGB", "GFEDFACBCE..ACFEG.DGCDAG..FAG.FEAFAF..FCFBC.DCED.A", ".G.EDECDC...BBAEECBADFGEG.DF.FBA.EA.C.ADFDDGFGAGGG", ".FCDB.A..B.CFGCBEAC.CGBGDBA.CEBECGBFBEA.DBAEBGEGCA", "EGCEFC.CFFEFC.GGAGF.FBBFB.CGABCF.CEFFD.EA.DB$BDEGC", "CD.B..DFCD.CA.DEBF.EG.BCBGDBGDAF.FF.FC.DGGC.CADGDG", ".DBBEGGGFEGE.FEEC.EAADCAEEE.GBBD.GBDBCF.EABG.EEEB.", "FBBF.F.CDFGGDCCDGEBBEAGEECABCGAEGGEB.CBEE.CF.FDD.D", "..FCFCBBACDGE.BG.AACB.A.ACC..BCCEDCDAFDGFFDAFFGFEE", ".F..BBB.CFGA.FCGDECDEAFAEE.G.EDEACCBFB.FG..DAAGFGD", "BFGEBB..GFA..CGCCBC.CEB.BAACFGG..E.CECGFCE..ED.C.A", ".G..CBE.BG.AAGDB.BCFDECEAFBBCFAC.A.AEC.F.ECA.G..DE", "FEF.G.DFGDBBFAG.GF..AEDC.ABFG.GDGCEG..GB.BCFBC..CE", "FD.CCGADFAGGGDEABCECA.CBFFDBBAD.DFCAECDAEBC.CCBFBC", "FCGBCBD.FAEAAGE.GDDBCEB.F.CEDAEFEBGACBCFAD..CBBE..", ".EBDCBDEE..GD.FECAGACD.E.BGEDGDED.AAFFA.G.ADAB..AE", "GCBFGF.F.CAFBAEC.F.AAEAFDF.DB..DDFEGGBE.EFGCBGBG..", ".BCE.D.DFEED.CEFFADAFDCGFCDB.DACCDADCEB..A...GGE.E", "CGCGFAFBGGBGFCCGFGEB.A.FA.B.FEAAEGDBG.DCFADBGFB.EF", "FEEABGABFDE.CGBEACGEE.GBC.AEGAEDFC.E.CAGAFFBEA.GEF", "EGGBCFAC.GCFDDGGDDBEF.C..CADEEAGGFA.DBACC.E.GEACC.", "..GBA..GEBD.ADFDD.A...G.CAF.ADGAGGBDAE.CC..CFADAE.", "...C.ECAFDGEFC.GCCCAGDB.BCA..BCBG.FDCB.BCFF.G.FBCB", "EDFD.GF.FFGBGDB.DCA.DDGCDB.B.FDF.F.B..GACDCA.CDBA."};
    vector<int> trap = {46, 89, 83, 17, 48, 46, 99};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.047736000000000015;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> maze = {"##A.AAA.AA#AAA#A.AAA#AAA#.AA##AAA.A.AA#AAAA.##.AAA", "A##AA.AA#AAA.AA#A#AAAA.AAA#.A#...A.AAAAAAAA#AAAAAA", "#A#A.AAA#.##AA.#A##A.A##.A#A##AA##A..A#.A#.A#A#AAA", "A#AAAA.##AAAAA#.AAA#.AAAA.AA##A.#AA#A##AA#.AA#AAAA", "A#AA.A#AAAA.AAA.AAA#.AA.A#A#AAAAAAAA#A.##AAAAA.A#.", "A.A.#AA.AAA.AAA.##AA#...#.A#.AA.AAAAAAA.#A.##AAA#A", "A.#.AAA.AAAAA#.A#AAA#.AAA#A#..A.A.AAAAA.A##.AAAA.A", "#AAA.AA##.AA#A#.A.#A#A#A.AA#.A....#AA.AA.A##.#A#A.", "AA#A.AAA#A#A#AA..AAAAAAAAAA#AA.#A.AAAA#AAAAAA#.AA#", "A.#A.AA#AA#.AA.#AA#.A#A.AAAA#A#AA..AAA.A.A.AA#.AA.", "A.A#AAA#AAAA.A.AAAAAAAA#AA#.AAA#####..#AA..AAA#.AA", "AA.#AA..AAAAAA.A.A##AAA.AA.A..AAA.AA.AA#AAAA.AA#AA", "AAAA#.##.AAA##.AAAA#.AAAAA..A.A.AAAA.#A.AAA.A#A#AA", ".#AAAAA.#A#AAAA##AAA.#..AA...AAAA.A#AAAAAAA#AAA#AA", "AAA#.AAAA#AAAAAA#AAAAA..#.###AAA#AA##.AA#AAA###AA#", "A...#...A.#A.A.#A.AA.A.A.##.#AAA.##A..AAA#.AAA..AA", "A#AA#.##AA..AA.A..A...AA.AAA###.AAA##AAAA.A...AA#A", "..#.A#.#A..A#A..##AA#A##AA###AA#A#AA.#AA#A###A#AAA", "#A#A#AAA.#AA.A#.AAAA.AA.A#AAAAAAAAA#A#AAAA#AAA..A.", "#AA#A.A#AA.AAAAAAAAAAAA#AAA.##A.AAAA..#AAAA...#AAA", "#AA.AA#A#A.AAA##AA.AAA#AAA.AAAAA.A####..AA#AAAA#AA", "...####AA.AA.AAA###.A.AAAA.AA...AAAAAA#AAAA#AAA.A.", "AA##.A.AAAA#AA.##..AAA.AAAAAA##.A.A.#AA.A##A.AAAAA", "A.A###A.#AA.#..A#.#AA.AA#A..#...A.AA#AAA..AAAAAAAA", "AAAAAAA.AAAAA#AAAA#AA.A.AA###AA#AA#A#AA#AA.AAAAA##", "#AA##.#AAAAAA.A.AA#AAAAAAAAAAA..AAA####AA.#A.AAAA.", "AAA#AAA.#A.A#AAAAAA#.A.AA##A#AAA.AA.AAA#AAAA.A.A.A", "A.AA..#AA#A#A.A#AA##.A#AA.#.#A.AA#AAAAAA#AAA#A#AAA", "A.AA#AA#A.AAA.AAA#.#AA##AAAAAA#A.A.AA.A.AA..A..A..", "AAA#AA###A.#.#..AAAAAAA#.###AAAAA.#.AA.#A..AAA.AAA", "#AA#..AAAA##AAA#AA.A..A.AAA.A#AAA..A.AA.AAA#A#A.AA", "AAAAA#AAA#AA#AA#AAAAAA#A#A.##AA.AA.AAAAA##A#.A..A#", "AA.AAA.A#A#A.AAAA#A##A.##A.#A..#..A#AAA#AA.AAA.AA#", ".##.AA#.A#.AAA.#AAA#AAA##AAA.AAAAA..A..AAAA.AAA#AA", ".A.A#A.#A#A#A#.A#AAAA#AA#AAAAAAA.AAAAAAAAA#.A.AA##", ".A#AA.A#AA#A.A.A#AAA##AA..#AA#AAAA.AAAAAAA$#A#.##A", "..AA.#AA.#A.AA.#AAAAAA#A..AAA.AAA#AAA#A.#.#.A..A.A", "AAAAA.#AAAA.#AAAAA.##AA.AAA#A###AAAA.#.AA.AAAAAA#A", ".A.AAAAA#A..AA.AA..AA..A.#A#AAA.#.A..#AAAA...A.#AA", "A#AAA.AAA##.AA#A#AAAAA.AA#AA#.AA.#A.A###.##A..A.#A", "A#AA.AAA#.#A#.A.AA#A..A#AA.A#AA#AAA##A#.AAA##AAA.A", "#AA#A#A.A...A.AAA.A#AAA##AA#AAA.A#.AAAA#A..AA#..AA", "AAA....A#.#..A.AAAA#A#A#AA#A#A###.#A.#AAA.#A.#A.AA", "AAA#AAAAAAAA#AA##AAA#..A#A..A.AAAAAAAA#AA.A.AAA.AA", "##A#.AAA!.A.#A.A#A##.AAA#A###AAAAAA.#.AA.#AAAA..A.", "A#AA##A.AAAA#AAA#.A..#.AAAAAAAA.AAA##..A.AAA#AAA.#", "#AA#A#A.AA.A#AA#A#AA.AAA##AAAAAAAAAAA.AA#A.A.A..#A", "AAA#A..#.A.#AAA#.#AA...#A.AAA.AAAA#A##A#A#.AAAAAA#", "#.AA.AA.AA.A#.AAA.A##A#.A..A#A#A..A.##A#A..AAAA#AA", "A#AAAA.AAAAA.A..AAA#A#AAAAA#AAAAA.AA#AA#A.A#AAA..#"};
    vector<int> trap = {86, 2, 55, 15, 23, 45, 4};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> maze = {"CCC.CAAAAA#AGGD.DDDD##D#D##DD#DD..DDDDD.D.D.DD#.D#", "D.DDBB#BFGGG.GGGG.GGG##CCC#CCCCCBGG.BA#AAAAD..D##D", "EEEEE.EEEE##.EE.EE#EEF#.F#.CAAA.#AA.AAAD#D.D##DD.B", "BBBBBBBBB.B#B.#BBAAAAAACCDFFFF#.FF.#F#F..C#FFFFF#.", "B.BBA#AAAA.A#A...#A.#G.AAAAAAAA##A##.#A#.F#FFFFF.F", "F..FF.FFF#.F#.FFG.A.AAA.AA.#B#BB.###BBB##C#CF.F#FG", "GGG..GGGA.#AACCCCCF.#.FFFBB#B#CCC#.CC..C..#.AD#DE#", "..#.EE##E#AA#AAAAA#AAAA#A..AAAA##F..F##FCCCC.DDDDD", "DDDDD.DDB..FDD#CGG.G#G.GGE#B.BBBDDD#DD.DDDDDDD.DD.", "D.G#EG.BCC#CCE#EEE.EEE#DD#DB#BB..CCCCEE.EDD##DDD.D", ".D.D##EE#E#A...AB#B#.B.BBB#.##BB#BB##BBBB.BBB.B.BB", "FCCC#CC.C.###CC..CCFAACCCC#C..CC.#CC.C.CC.CA#AA#A#", "#.....#ADF.C##.##.C#.CC#CCC#CAAA#.A#A.A.AAEE.#EEEE", ".EEEEG.G#GBB#BBBBBBB#B#.B.B...BBBB#A.AAA#GC.CC..##", "FFEEE.ED#.FF#F.FD.DDBAA#ADDD.#D#.D.DDDDD#DD##D#DDD", ".DDD.DEEEE.E.EE.##ADDD.DD#.DD#.D#DD.D.DDD#.DD.#DD.", "#..D.DD.D#DDA#.ABB.BB.BB.BBBB.FE.EE.#E.E#EEEEE#E#.", "DBBBB#B###BB##BBBB#B#BDBBBB.#BBBBEEEEE##EEC.BBB.BB", "B.B..#BBG.#.BBEFFFFF.##..A#.A.A##AA#A##DD#.DAEE.EE", ".#EE..E#EB#B..#B#BB##B.FF#F.FFFFF.FFFC.C.CCCCC#CC#", "#..FFF.FGG#.GGDD##DD#D.##DDDDDDDDDD..AA.A#AAA.##.A", "AAAA##C#.C...CCAAAAD.DD.EEEEG.#DDDBB.BBBEEEEE##EE#", "E.E.EEEEECC.C.C.F#..F#.#CCCCCC#CC.C#CEE.#E#E##.##E", "E##EE##GGG#G#GG#G.A#DE.#.EE#EEEE#EE#DD#DA.#A.##F##", ".#DDFA#A.AAAAA.B.BBDDD#D..DDD#DDDDD.#E..EFFF.#FF#F", "#..##.GE#EE.EE.E#.D#D##D#D.FF.FF.FFFFFFFFFFFF#FF#.", "F#F.G#G#G#G.G#GGG..#G.#G#GC$CC#CCC##.C.CFCCC#.C#CC", "CCC#.CC#CCCC..CB.BACC.CC#C#EEE.E.ECCC.CC#CDDA.DD#A", "AAA##A#AA.#B#A##A#AA#AAAAA#A..AAAAAAAAA.ABBB.BBBBB", "#BBA.#AAAA##AA.#AAAAABBEEEEE..E#E..EED#.AAAAAAAA#G", "GGGC.C#.#.C.#.C##CDDDA.##AA#ACC##C....CC.#CDDDDDDD", "D#D#DDD#D.DD.#.DF.F#CC.C##CCCC#C..C.#..C#CCC#CCGG#", "G.FFD#DDD#####D#DB#B.BBBB##BBB#BBBB.B.C#CCC#CCC#C#", ".CA.AAA#A.G..AAF..FF..#GG.GGGG##GG.GG.G##BBBBB##B.", "BB#.#.#B.#BBBB.#BEE.E.EEE#EFFFF#DD.#CC#CCEE#E#ED#D", "DD.DD##DCCCC#CCCC#AAAAA#.AA.A..FF.F#FFF#F..F#FF##F", "D#.GG#GG#.GGEE.EE##GD#D#G..F..#FF.B#BB#BBBB#BBB#B.", "...#..B#.#BBBBBB..B.BBB.BBBBBA.#A..A#AAA##AAAAA#AA", "FGG.G##GA#AAAA#.AA#.B.B.BBBBEE#E#..EC#C#CCC#CCCCCC", ".FG.GGG#CDD..DDDDD#DD.#.DD#.#DDDD#D#DD...#D.##.D.D", "D#.DDDDDD##.#.DD.D.DDDG#BBB#DDF.#A.A.AA#G...GFFFF#", "FF.E#EE#EEE.G#GGCC.C.##.C#.CCC.BC#AA.E.EEE.#EEE#EF", "F#F.F..#FE##E#E#E##EE.E.E#EEEA.#GGGGG##GGGAA.#A.#A", "ACCG#G...GG#GGA##.A.A.AAAA.AA..A..AAA#AA.##.CCCC##", "#CGG#G##GGG.G.GG.G.G.G.GG.GGG##GGGGGGG.GG.!GAA#AA.", "GG#GG##AAAA.G..GF#F.FFF##E#G#GGGGGGGCBFF.FGBED#BBB", ".CCCCC.FFB#B.BB.B#B.#C#.C...C#CC.#DD#D##.DDDDD.D##", "..DF..F.FFF.FFFGG.GGGGGEEE.EEE.E#ED#DDD##D.D#D#DD#", ".#DD..D.DDDD.DD.C.#C#CC.A#AA.AA.AAA.AE.###E#EA#.AA", "#AA#.#A#.A.#CCC#CC.DDAAAA#A##AD##DD#DDD#D##D.#D#DD"};
    vector<int> trap = {67, 9, 32, 75, 15, 10, 97};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.057432374999999994;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> maze = {"#..##EC######B#B.GA#CCC#.CGGG.G#E#EEECCDDDCC..C#.C", "GG.GB.BBD#DEEE.D.DC#C##AA#.F#...FEE.#CCGGGEC#.#..C", ".#.CDD.#GG..G#..GG##GA.A.AAAA#ACG#BBEADC#.C..G..GG", ".AAAF....#FF#BB.#.B##B##A#AA#.AADBB.BB..##B..BA#AA", "E#....#FDC.#CFCC#CE.EE.EA#B#A.#AAAABBB.BBBBE.#EEGG", "G#A.A.AAAA##FF#DEC#C.C.#.E..E.B##BB.B..#BF#.#.#FFA", "#AD..D.GGDDDDEFFFF..G..DD#DBBB.BB#D.C#.C#.D###D..E", "D#.FF.#CCC#B.EE.#DA.A.#A.A#..DD.A#BBB.GG#..BCCG#AA", "GGE..CCDDDDD#.DDD#...DD##.CA#FDD.DDGG.#.G.GGBF.FFB", "BD#DDDD#DD.#DEFF#F##E.E.EEB.B.BG.G#.GGG#FCFDF#.GG.", "#G.#CC#.EF#FFDD#DA#.AAA.GB#BGGG.#AA..CC#C..CCG.GEA", "FFFGGG.GGG.###G#FB..#.DD.FFEGG#EG.EE#E.B.B.BBB#BAA", "#.F.CEEEA##A..E#GGA###AE.BBFFE#.E...EGFBEB#B.GGEE#", "ED.DGCCC.AAAGG#.GDDE.E.##CCC##C##AD..D.D#EGAD.##.C", "A#BE#.EBBB.#B.#FFF.FFA#..FF..F#D#.D.D#DD#BC#C##CGA", ".#EEEE.E#..C.EEEE.EFGGG#A#BD.#DD#.E#G.GD..DDD...##", "#DDDA#G#FFFB..#EE.CCD.#BC.CC#C#C...A.AABF#A#E#A#.G", "G.GG#CCCC#CCC.#..#.C.#CGGC.#CCCCD..#E##EE...#EA.A.", "A.CFFFFACC.FF..CCG..DCE#BB#BAFDDE..E.B#C.CC.CC.CD#", "D.GG.D#DDF.#F#F.F#BB.B.##D#D..D#AAAA#FF#.#AAA..AGG", "#GG##G.C.CEE.ECCD#DDD.D#D#A#AA#A##B#E##.EE#.E.E.DF", "F#GGGG#.G.FFE#.EC#EEEGGGG#G##G.A#AAFEB#B#BBB.CCCCC", ".EA##.EE#CBBEEG#BDE#EEE##E#E.##.BB#E..##EEEAAGG.#G", "G.GB##..ACE##.EE#E.EEECC.E.E#!.D..F#A#AAA#AABBA#C.", "CC#CDDDDDD#D.##AAGG#BC.C.CC.....CFF#.D#D..EEEEE.AA", "#.FC.CCCC#CB##G#FFF.#.FFFBG##GGCDAA#A#A##.AFEC.#CE", "E.EEE#EE.EEDE.E.EG##A.AA#.AA#AAA.AADA.#.E.EGGG.GF#", "CCE.GGEEE.FFFF.FCCCG#..B#.EEE.EG#CC#C#CC.CCE#E..E#", "EAAEECCCEBD.DD###F.F####F#.GA.A#.AEEEEE.A.#ADD..DB", "B.#BB.BBBB#BBB...B.#BBEEE.F##F#.F#F#DD##.DDDA.F.DD", "D#DD..CEEGF...#GGG.F#F...#FD.DD.AA#..##DEEEC#DG###", "GCCA#AA.AAFFF###C.#CCCD#DEEDBB.BCE#B..CCE.F#BBB#EE", "E..#.F.FFC.FFAAAF.#FB#BGG.D.DBB#BBD..##.DBBBB#D$DD", "DE#.E#EEDDD#.#F.#G##G.#G##CE.E#E#B#BDGG#G.G#GBCAEF", "..FB.AAAAD.D.D.D.#.BBEBAA##GB#BBB..#.BBEE.E#BAA.AA", "GE#BBBDDDF.#D#DE.##CEECEE..#....ECC##DE#EEGE..E#EF", ".FC#.#C.C#C.CG.#.CB#.#B.GD#CCG#BGG..##GGDGGFFFFGBB", ".B.F..FCCGGFBBGFG#.GGDDE.B.BE#.EA#AAB#AACDDD.#EBB#", "#BD.CC.CE.EEEA.#A.CA##AA.A.G.GCFF#F.#.DD#DDF#E#FFF", "FCD.D.#DDD.DE##BBBB#.BB.BB##CE#A##D#AA.##A#ABCCC..", "DDF.#.FCEEFFFC..C.EECDEF###F#.FDDFDAA#AAGGGD.D..C.", ".FFAA#.CCF#.#DGGG#C.#CC#CC#CD..C#CCC.FF#F#F#.D#.D#", "DD#D#..GGGG.#.GG##.CBABB.AA.#AC#CCGGE.EEEE##..E.FD", "#GG#DE##.EE#ECCCDDFFFA..##.AAA##.ADEADDDEEEE..BBBC", ".C.G##..GG.GFF.#..CCCCCCCAEEF.CA#C#.CCB.BB.#B##BBB", "#BEBCD.BC.C#C##.CCFF#F##.#.##CCCFFBFFF#AC.C..#CCCC", "#C##C#.CFD#GG.G.G##C.CCCAAA#AA#CCG..EEF#..CA#CCC.C", "#.#CG.#.G#GAAADB.##D#F#GGD#D.DFDCDDC.EEF#BEC##.C#.", "#.D.D.DC.#C...#A#F#.GGG#GGFBB#FDDA.AAADDCCCC..D#GG", ".G##GA##.DDC##C#C..C..#.A##A#F.F#..FEE#EB.#.BA#AAG"};
    vector<int> trap = {67, 24, 68, 80, 95, 1, 7};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04618231199999998;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> maze = {"DGD.#..CEGDA.BF.FFCAC.FG#F.F.EFF..#.CB#.DC.DBFFB##", "#.E..DGB.BB#E.BD###BE#AFBD#BGD...CG#CFFGC...D.D.F#", "CBC#GB.BB#F.BAE.EGFFFEDG..#BBG.#.BG#CA####DF#BB##E", "#E..C.D#B#DE.ACEB..CF#G.D#B#CA#E!#AAGAAE#FB#A#..FD", "AEF.DEF.#FB.C.##FDAF#D#E.#BFG#F.DB#.B#E#CB#.AA..C#", "##B.BA.E..#.DEDGF.AFF#.G#CD#A#D#DBC#.BC.##.G##.FE#", ".#.G##.D#G.GCDGD.CGEC..#AAGD#G.#DBGD.#..DB.#CCF.B.", ".D#####.BD.#DFD.#.D###E.#D.BG###..CFE.F.F.ECE.EFEG", "GB##.D#D.#D#D#AEFE.EACDCE.GEEF.#.ED##EBF#GF.AB#F##", "#EGEGCC.#CGF#.CF#FG..#D#AFGGDEC.D.G##D.A.G.ADD#.BE", ".AFCGEAEAFAA#ABGDFD#.DC#.BC#CCF##DBGFAAF#AAD#FDGFD", "CFBGEC.DEF#.FGEDAEAGF#F#GFBDC.#CDAADC#EG...#E..CC#", "CGA#D#EB#G##.#F##DE#B.GG.....BCGDD.G.#DB##..#DE.FF", "..B.A.#AC##F..E#B..AD..E#CC##AD.E#DEAF.CFCBB.DB.FD", "DDE##BGE.#.G#.B#..##AA$.#FCE#.A.F#BCBG.FC.#BC#C.AF", "#EDD.#DC#.#CA#.###FG#DBB.##.GCB#E#CBDBFCE.AG.C#CBB", "#DG#.#DC#F#ED.GF.B.AC.D#.E.CB#EG#.GEBC.AF#ADCACDC#", "#.DGDC.#AB..FE.#EGAAE#GDGFEG.BC.B.GFE#ACA#FD.CD..C", "##EEF.###E#BA.CCA#F.#B.AE..A#AB##FGB#G.#EADCD.CFEB", "EF.E.FCGDCGC##.B#.B##FCB#.#CC#A.DFCD.##DB#EEAF#F#.", "G#EGFCB##G.FGADBB.A..GFE.#A##C#D#ADG#ED.B.A#F.EBFE", "GC.#.GBB#.B.#A.ACC.E#D#B.EGAC.####FCE.BC.F####CAD#", "GEE#F#..E#.E#GCFC#DB#...EG#BGEEEGE#GD#.##C##BFAF#.", "#FDF#.AA#G##BEC#.CC#DF.#DCA.A#AG#F#FADEB#.GD#...#G", "C.A.F.B####.GA.G.EDEBA.##A#F..CDEA..#ABB..BBBCDD#G", "BCADABGEBG.BE#FG#GA##A.#EGB.DBB#BBEAAFBE..##BGDF#D", "BG#B.FAE.#B..CB#D##FB#FC.GE##.GA.EAEGF#CF..D..#G.F", "#AF#CD.GG#GBEBFFCA####GEB#.DFEDFG.BFADBA.C#CCCE#EC", "#BAGDD#DGG##BAB#DF#G#.BCC#ABGAEGAG.#BFE..EADG.D#.#", "F#E#GCF.FGAFDGE.F#.ADAED#DBFG.FCCGF#..AEE#CGGA##FF", "EC#....#GFDBE.EC#FE.EFB#C.D#BBEEDC.#AB.#DF#.GCA.#C", "#.G.#FFECGG###ABAEB.DDF#B#BGGD#.E.DF.#EABFAA.#DE.E", "D##F##A#C.DAD#CE#C.DEA.#BDFGCCF#GDBBE.AE#A.BFFA.#E", "#B##BAGCA.##D##DGG.C.#C.A##DG.#A.E.BEA.FC#...BCFA.", "E##.BF.G#CF#.BE.CCD.CFGEG#FCCE.A#.#E.EB#FA.#AFDAD#", "##G.C#BBF#CABGAF#A....FGDDBEGB#GCGF#BAE.ACBFCFF#.G", ".EF..F##GABGD.FDDEA#F#A.G..#AG#EDECD#.##E.CA#B#B#D", "ACC###.##.A#C.BEBBE#GBGAFB#C##.AA.EBE#A..DC#..FBG.", "#B#.BD.E.FFCFCF#GEADA..F##D.B.#BBAC#.ADC.AFAEBE.AF", "GF...CBB.E#E#BDFFCDCCD#FDFG.B..FD#FF###GFFFFABBBG#", "BAAEDB#GFG.B#.DGBF##DB.AFECD.F..DCDDC#E.EF#CEEDCF#", "B.F.G.GFEA.DE...A.#.DC.DGADC#EBE#.A.B.DAFCECGDFEBE", "DDE#G..BD.#B.GDGB.EFFG.A#F#..F#DC#FBBG##ACAFA..EGA", "#BFBF#D#GEF.A.G.EDBADBF#.DEDBGBCG#GAACG#GEC.E.A...", "AGDG.GB..D#E#DC.#C.ECDFEB.FBG#..CA#FAB..EAEGAA#GD.", ".GC#.A#ACAGE#DCD#BGF.##BCFDGG#.CF.AED.BG.BF....BA.", "A.D#E.B##G#C.E#BG#GGGFA.FADA##C.CE.FDB.F#B..C.E#AF", "EC#.AF..AFAE##D.EF#DGEFE#BDDCG##DF.FDB#EA##DC.EB#.", ".##A..A.#C#..CC.#BDG.GG.F#E.BA#AB#ECC.DG#F.G.##C.F", "#..B#.ED#E#ACBB#C####AG..GDB#BDB#G#FG.##F.#F#.GAEC"};
    vector<int> trap = {80, 68, 32, 52, 43, 97, 11};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16558272;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> maze = {"..AA#A.A##.A##A.#A.#.#######A#.#A###A#AA.A#A.#.AAA", "A#.#A.#A#A.##A##A#..A$#.A#A.A###AAA.##A#AAAAA#AA.A", "####A#.AAA..##AAAA.AA#.#AA##A##A##AA.#A#A#AA#A#.##", "AAAA.A..A..AAAA####AA..##A#####A#AA##AA##.#.A#A###", "###.##AA##A#.A#AA.#AA#.A.AA##.#AA######..#A.#A##A#", "#A#AAAAA.##.A##A#...A#A...#..#A####AA.#AA.#A.###.A", "..#AA#AAAAA#A.AAA#A.AA###A#AA..###A#A#AAAA#AA..A.A", "A##.###A##A#AAAAA#.AA##A####.A.AA#AAA.#..#A.A#AA.#", "A#A####.###A.#.A..A#AAAAAA..##A#####.AAA#.A##.A.A#", ".AA..AA#A#AA#####.#A#.##AAA.#AA.A#####A##AAA#.##A.", "AAA##AA#A#.#A##A#A...#A#AAA..AA##..A##AA##..#AA#AA", "##AA#AAA.A#.AAA##.#A#.A##..A.#AA#A#A.#A##A#A##A###", "#A#.AA#A.A.A#A##A#AA##AA#.AA##A.A.#.AAA.#A##A.A#A#", "#A#AA###A.AAAA###A.A#AA.A#AA.A#AAA##A#A#AAA#A#A###", "##A#.#AA....##.A.######AA#A####.#AAA#AAA.#AA#.#A##", "###A##A##.#..AA#A#A.#A#.A#..#.##.A##A.#A#AAA#A#A#A", "##A.#.#A#.#.#.A#.##A#A..A###.A#A#A##AA.A..#A#AA#A.", "#AAA###AA###AA#.A.##.##A.##AA##.AAAA.AA#A#A#AA#A#A", "####AAA######AAAA..#A.##.A.#A###.A.A.A#AA##AA.#AA#", ".AA#..#A###.#A##..##AAA#AA#.###.#AAA#######AA..##.", "##A..#.##A.#.#A#A#A#AAA###.A##AAA.#AA.A##.AA..#A##", "##A####..AA..A##A#.A##.AAA.#A###.#.AA##A#!.#AAA##A", "#.AA#AA..#.#A#.###AA##AA.##AA.#AA#####A#A#AAA#A#.A", "##A.A##A##.###A###A##.A###AA##A#.#A#AAA##.##.AAA#.", "A#A.##AAA.A##.A..A#.##A#AA##..AAA#AAAA.#A#.AAA#A##", "AA##A#.#AAA.#A##A###.AAA.#A.#A#A#AAA##.A.AA##AA.#A", "A.##.#A#A.AA#.A..AA#AA#A#.#..###AA##.A.#A#AAA..#A.", "AA..AA#.#AAAA#...AAA#A#A.A###A...A##AA##A##AA#.#A#", "A..A##AAA#.AAA#..AAA.AAA#AA.###A#A##.A##AAAA######", "A#.###A.##A.A#A.#A##AA#...########.#A#.A#A#A#.A#.#", "##.###..##...AA.#AA.AA.##.A#A##.###AA##..#A##A.AAA", "#AAA.A##A#A..AAAA.AA...#A#.AAAA#.#A####A..#AA.AA##", ".#A..##A#A#A..#A.AA##.##..#A.##.A#.##AAA.#A.#A.A##", "A.A##A#..A.##..A##.#A.#A#AA#A#AA##.A#A.#AAAAA.AAAA", "AAAAAAA.#.##AA##.A.########A.A.A#.AAAA###.A#AA.AA.", "A##.#A#.######.##A#A.A..#.#A#A##.A#.###A#A##A#A.A.", "A#AAA.###A##A.###.AAA#A#A.A#...AA##.A#AA.#A#.A##A#", "#A...A.#.##A##AA##A#.#A.A#A#A#AA#AA.A##AAAAAA#.A#A", "#AA...#AA#AA##A#A.#..AA#.A#A#..A#A###.#A#A#A.A##AA", "AAAA#.#AA..#A#A##.AAAA##.##.#A#A#AA##A.#A#.#A#.AAA", "A#...##A#A.#A#A#..A####A######AA##A.#AA#.#AAAA##A#", "A.#A#...A##AAAAAA..A.####AA####.A####AA..A.A#A##A#", "...#A.A.#.AA#.A#A##.AAA.#AAA#A.A.AAA#..#.#AA#AA#A.", "A#A##A#.A..#AAA.###A##A.AA#A###A##AA#A##A..#.#...#", "AA#.AA.AA.##.#A.##A##.A##A####A#AA###AA#.A#A#A#AA#", "#AA#AA###.##A#A##.A#AAA#...A.AAA##A#A#AA.#...#AAAA", "#A#AAAA#.###.AA###.##A#A#A##A#...#######A.A##.AA#A", "#AA####AA##A##A.##.A..##.A.#.AAAAA#AA#...AA#.AA..A", "#A#AAA.A#AAAAAA#A.#AA#A.#.##A##A###...A.A#.#A.#.A#", "A#A#A##A.AA.##A##A#AAA.A#..A#AA#AA#A#AA####A##.A.#"};
    vector<int> trap = {42, 82, 64, 64, 33, 96, 14};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> maze = {"G#E##E#EEE###AA##.#..##.##A.#.##A.AAA##.A###A##A.#", ".A.F#.D#D#.D##.D##D.DD#..#D#.####.DD#A..A.AA##AA.#", "A.#.A##AEEE##E#E#.E#.##E##.E##E.C###C#.####GG..GGG", ".G#GG#G#..##G####G##GG#G.#G.#GGGG.#GG#G####GGG.#G.", "#G.#G..#GG#G##GGGG#.#GGGGG#G#G.#GGEEF.#A##A#A#.#.A", "A#A#AA.E#E#####.##EEEE.EEE#E.#E.####.EE##E.ED##.##", "##.#D#D.D.#.DD..D..DDD.##.DD##D..##.D#D.##DC.#..#.", ".E###.#E#EE.E#E#.#E.E.EEE#EE.E#EE.E#######D##DD###", "##..DF.FF.F#.##CC.#C##B#######.B#GG#.B###BB#BG..G.", "G#GF##D#####D###D.AA#A..#######A...#F#F######F#F..", ".F##.###.F#F###E.#.####E..#EEE.E.EEE.##EEE#.EEEEE#", "EE#E#EEEEE...####...E#EEEDD#.#DDDD###..#D#D.#####A", "#A.AA.A#A.#AA.#A##.##BB###B#B.B##B..B.AA#AA.FF.FFF", ".##F#F.#F#..F.#FF.##.F#F..##.#F.F..###.#.FFF#FF.F.", ".#FF#..FF.FF.##FB#G.#.FF.FFF..CCC.C###.CCC#E#BB.GG", "G#.G##.GGG.#GG.GG#G..#GGG#GG##GGC##.CC##C#C##AA..A", ".##.##AA..#..AAAA#A#.A##.A##.AA#AAA..AAAA###.AA#AB", "#BB###.#BBB.###.B.#BB.BB#BBBFF.#####..F#..####FF.F", "#F..FFFF.F##E##FF##..#..##...FFFF.##F...F..##F....", "#F.####.##FF.##B.#EE####E.#E.E#EE..####E#E.G.##GG#", ".###GGG##G#GG#G#GGG.F##D.#.#..#DGG#G#.#.GG#G.GG#GG", "G.##G##GGGGGGGGG#GG##GG...G.FD##DF#F#F###C#..##C##", "##CCC##CC##C#C###CC#C#CC.CCCC.CC#B.#BBBB#.G#G###G#", "G#.#GG.##.G.G##GG#A#A#CCC...CC##CCCF#CC.###C##CCC.", "###CGGGG.G###.G#######.G.##GG.#G..###G#.###G#.A.#.", "#A#AA##..A##A#A#.#AA#AAD##DD#.D#D#DD.#D#DD#E.####E", "EE##D.#.DD.#D#D##D##D#D.DD#D..####DD###DDF#F.#AAA.", "AA###AA#A.##A####.#..##A#C.CCC#C#C.#.CCCCCCCCCC##.", ".CC##F#F#FFFFF.F.F##FFF##F.FFF#F##....#####F.##FF#", "C##C.C.####C#C#BCC###CC#E.E!E#.EE###EE.A.#AF..A###", "#.AA.#.AA#A.#A.#AA#A..A.#AA...######AA#A.#A.AA...E", "###D#D.D.#D###D...#DDDD.DD.###..###DD.#DAAA.A#A.##", "#A##A##A##GA.##.A#.CC##.######.#C#..#.##CCC###CCF.", ".F#F#B##BBE#.E#.CB#.#B.BBGC.#CC#.###.##.#G#.G#G.G.", "#.#.B#D#DD##D#D##G###F#FF.#F#.###F#FEE####..CCE#E#", "EEEA##.##..E#..#E#E.E#.E##.C######.C#C###CCC.#.CC#", "####CC####CC#A##..A#A#A##A#.#A#####ADD#DDDD..A#B##", ".#.B#.B#BB#B##BB#.BBB#####B#DDD#$..D.D#D.#.#GG.G#G", "..#G.###G#FF#F##F#.FF.F###FFF..F#F#B.#.#B..##B#BB#", "B#B##.D##D#D.DGGG#GG#..#####G##B#.##BB###B#B#B#.BC", "##.#.###.C#.#F##F#F#...#F##F##BBBB#.#G#####GG#AA##", ".#F#F#.F#F.###F..#.#FFF####F##.F.FFBBBB###F.F##.##", "#EE#A#D#DD.####C.##C##.#CCC#G##C#CCC#..#C#C#C##CE.", ".#E##E###.##E#.E#E#BB#####A.##AA#AA#A##.#.#AFF..#E", ".###.#E.EE#E#...#.E####.#E.G#GC.#.#.##C######G#GCC", "CC.C.C.CCCC###CC####CC#C##C#C#C##.#####E#GG###G..#", "####GGG#A.CC.#####C#.CC.CC.#.C.#.#C.#C#CCBCG.##BB#", "##BD#D..#DC#C.#.#.CCF#######F#A##AA#A####.A####AAA", "A#BB##B###..##C.C.#C#CAA###.#A#.C.#GG.G#.D#DD.##.D", "BB##B#BBB.##B#..##B#BB#B.B#B..#.C.#.#.###C#####C##"};
    vector<int> trap = {85, 33, 2, 49, 26, 4, 56};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> maze = {"#G#D.#.BD#.CEEE#E..#.E.#.E##A#AACC.#C#CCCB#DDD#DD#", "D##.BB##.B.#E##E..F..FCC####E#.E######EGGB##FA##A#", ".C#.#####.#CCC.D.DD##.DB#.#B#ABB.#B.GBAA####FG.G#G", "#...####.#.GG##GG##C#.#.####C.###CC#.C#EE#.ECCG##G", ".#.G##B#B#.D.A.AG.GCCE.#E#EE##B#AFF##FC.D#D###F.F#", "D.EE####.EE..EB##..BD..##.D#DD#.###D#C.##G#C.CC###", "DD#A####AE###E.#ADE#..E.#E###BE###E.E.###EGE##.EF#", "EBA.CD.#D#A.GG#B#B.##B#.D.F#FF#EFF###F.FCD#G##GBFF", "F###.F##FD#B.B#B.#.GG.G###FF#FC.##CC#.D..####BBC#A", "A.C#.C#AA###.AA.GGG#B#BDDD##B#GEE#.CC#AA.A..#.F#D#", "####D.#D##DF..FGGCG####AG#GAA##D.#E#.A###..#A..#.A", ".A.CC.CC#####.#C##FAA##A#.###G#.G.##G#G##G##GG#G#G", "#G.#G#B###..F#C.C.#####C#C##CC.#CC#C###CC.G#GG.GAE", "E#GF.##.E###.#CCD#B.E###A...B..B###BG#G#..BAFF####", "GG#GE.##EGA#A...#A.#.#DD###D##E###D.DDDB#.#.#.#B.B", "FF..G.GB#A#AA.#AAA.A##A#E..#.E#B#B###B.B#.##DBB##.", "E.#B##G.G#.#D##.DD.G.GD##DG##..G#.AAFG###.E.#EE.#E", "##E.E##EDD#G#G#.G#A#####E##G.G.GG#.#D#D.B###.G#.#G", "#A#AC##G##GG#.#####.D#G..#G...G##EE#.EBB###.##G.#.", "###GG...#.##.#GG#C#.F#D.B#BBBB#B#.D##CD#CC#..#C##.", "#....#CC#.F#.F#F.CC#####CB#E##EE#.E.DC#A###A.C.D##", "EEE#.EE#G####G#EEB##D#.DD#D#.D.C.###.###G.##GBD.C#", "C...C.#C##CC####CCEE#E...###.#EC#.#.CCGFG.G##.AA.G", ".#G#..##.DA###.#..#.#..##A##B#DCC#C..#F.F.AA#.A###", "...#A#D##DG.#D#.DB#.BA#.#DDDC##C#D###.DE#A.E.F#F.F", "C.CC#A#G##.#B#.#GE#D#GG#GB###.#.D.A#A###B#.#BB###.", "##DDD.#C##.###D#DDD.CCC#E.F.F.#.#F##A#F#####.##.E#", "#.GE.#FF#A#D##..###.##DD..D#C..EE#E..EC#G#G#DD.BA.", "A.##...AAB#A#.#.AFABB#B#B#####BC##CCC#B##.B.CC#.#.", "#C#C#.##C##ECB..E#EEE#.EEE.#EB####.###AA#..#.#A#A#", "AAAG#G##FF.FF###BBC.######.#D#.D.#FF.B.#CCC#CC#CC#", "C###.#.CC#.#C#AG#G###E##.E#EE#BE#EE#B##C.#..#C####", "#C.C#.####CC#CC##CC#EE#FA#C.G##..#C#ACC###.C..###C", ".C.#B#B#FF###F..G.D#F##F##FE#E#####CCB..BA#.A#CEEE", ".E.E.E.DC.##.##..##C.#.#CBD####G###B#BE..E.#.#E..A", "...A#AA.#AE.FF##G#C##CF#FFF#G.##G#AB#BG###GG!B.CCE", "E#.#E.EGGE##E##.##E#B#A..FB.#C##..##.###.#.##.C#E#", "#E.EF###FF##F..#FFF##.C#C##.#CA.##.CC#C.##CBA##...", "B.#B#G.#CG.G#B..#B#B##CC#.#.#C#CFE#E##.D#.##D.#.DF", "D#GAA#####E.E#C#C####.#G#.#.##E#.###E##GA##E...B#B", "###B#B..#B#B#BBB#B##.C##A##EE#..#E#E#FF.F.FG##GE##", "#E.##EFFB#B#.B##.BDGG..#BFF#.#FFF.D#D#DD.#.DCB.###", "C#.#.#A..###A#E#FEE#.#D###B#BF.F.#.#FF#FFF.##FFF#F", "##D##D.D##.#BB...B.#B##BB..##.DC##.BEEF##F#B.B###.", "#C#.###B#G.###.GA##CC##BFFAG##FB.C##C#.CDD#E#EE#EG", ".#.GG.GG#.$#DD.##.EEA.F.##.##F#.F.F#.E#EEE.##C#C#D", "D.#F#C.CC#.####A#.A#E#.#B##.BBBB#BA.ED.#C#####C.CC", "A#AE..##FD.DF#.GG##.##.G#####G##...###GDG.#.##.#G#", "CGBA.#..#.##AFBBC##.####FFF.DD#.DBBB...#BBB..#E#.#", "F#C##C##A#A#.DD#D##.######.BE.E###E.E#...#EE.##.FF"};
    vector<int> trap = {20, 12, 21, 96, 73, 36, 53};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> maze = {"E.#.GG#.A#A#CA.ADDB##AAF#E#E#BD#C###A#D.A##.#ACE##", "#C.CE##A.CF.#.###D#F#.EA.##BDF##A###A####B.#F#BBDG", "##AG#C.FA#..B#E#DF.##A..AB#C.G#B#.#F###BFBGE#####.", "#.ADGD##F.AE#DFF#F#.#.B..GD##CDC##E#.C#..#.#A##...", "D.EA#DA..E.E##GC###E#EAD#CCEEFF#.E#F#CFA#G.##.E#F#", "C#.D.#E###FB#.##.#B#E.A.CCAE.C#..F##CA##BFA..####.", "AEAD####FBGG.#C.GA#C#DCFD##.##.####..B#D#.#G.A#CD#", "DG#.BDF##GG.#.#E#.A#.#.BBC.#F#BC#####G.D..AC.#EFFD", "B#.###.C####A.F##.FA#..D.##BDD.####G.#ECEEEBBA.##F", "GF##FC#F.F.F##D.#BAF.#D##B#.BB##FD#.#EGC##CGC..G##", "D.##F#..#D#FGF#G#.DDA#.#..####D#G.C#G.#CDG#.F.#.#E", "#AD#####CB.###D##E#CADGG####EF####.B.#..#C#D#.#.#B", "G.E..#.##.BF.G....#CEF###F#D#B.###AFB.C#.G.#ED##B#", "##B##.##FCCD.#A.#ED.#D.##GGE..##ACFA##B#..#CBB..#.", "#A#GB#.E##G.#.F#.##E#####.#.A#F.##.#DG##B#B#DC#D..", "#..G##.#F##G#A##EGF###B###EDAC..FBFA#C#CB.##GA.CC#", "###.GG.#GA##AFB##ED.#B.##.#GC####.##AE##GA####G###", ".A#BEEA#.C#B###.GFE#A.##C###EB#.D####C#.#C.EB###A#", "#CC#.D.##.G#F#EC##D##D###D.#C#F#D.....#CEB#.#G####", "BGCA...A.##EDC#GE.CB#C.GF.D#F..DDFC.#GC#F#GGE$D#.#", "#AEA####CG##.C#.#B.D#C#DC##B###E###GFB#BD#B#.####E", "G.AD.##B#CDDDC##E#.G#EC.E.BG#.###A##.#AB#C#G.F#BFE", "#CGB#.#FGDB#D.C#F##A.GE#.#..E.B#C..F#.##.#GCD##.EG", "#A#G##.#.#C#FAC.ABD##G.CE##B.E#FC#A.##.#.AGD.G.#CG", "D#.#E#.###D##.#CB##C##F#C#.#.#.G.#GF###E.#DC##FFEE", "C#FA#F.C#GF####.#GE###..#BA.B#DBECEA#FB#GG#.FB.##C", ".#D#EC.E#A#DC#.BD.#A#B#.A##BDF.##B##EFECD#.AEA.EBA", "BE#FA#B.#...C#EG#FD#B#D#FDG#.E#D##GFC.##.#C#G.D##.", "##D.##G#.#.##GF##.####C#.BG#CG.#.#####B##F.B##..##", "#.##B#GD#B###.#B.A.##.GG..ABFF.#.#C##GF.D#FDF##A#F", "#C####CAGADC.##B#.GAA#####CF.BGA.#...#.#E#EG##E##.", "##B#F##E#..D#.##.#..##B#G#D##C.A#CDFC..#ABD##B#F#.", "#D.#D#.##DB.B###.#...###D.#F#BB##.CC..#FFD.DFF##C.", "F##C#D##.###D#.#.BB..F##F##C..#E#.#BDB.G##.!#G.#G#", "A...F.##...C###.##GD.#.C.##C#.A#B#D#B.AD#..E#.C#FE", "A.###CE..ABD#EAG#AG###C#FFD.#G###..#GB#CD#C###G##.", ".#F.D#EE.E#F.DC#.#.#.#B##...D#.##.#.D.E.#F#.#AF#E#", "##D#...ACC###..###BG.EF#..A##ACG#.##B.BD#ADEDG#A##", "#.B##AG#.###D##.E##GD##.#..BB.#EDB#.###AA##.#DEFC#", ".FG#DCF###CC##E####G#GE###CB#EF#A#.###.EAADE.AF#.#", "A##B.##A#.##.BCDE.GD#...DF.#.#.###.GD##.C#B.D#GB##", "#D#..#..#BE###B.##FB#GD..C.###B#.G.C.##D#.#.FD##F#", "GEA.#A#C.CA.DFAB#######.FBEFDD.#BBAB#B#A######.AC#", "G.G.C#DE#####G#..G#...#F###D#B##GAGFBG##.##.F#GG##", "#.E.#C#F#FGE.##.#CF#DGEC######..#.E#######AA#DG.##", "#.DCAG#F#.#.#A####B..#.C#A#.D###C.##B##F..F#C#B#..", "#D##C##BG#..C.###FE###.##B####G##.##.#C#E#..#FE###", "###C#.#FBAF#EFG##.G#CAF#C.##BGDG.E#F.DD#...#FB.AA.", "#######.F#C.D..B#####.E#D#.#A.BFD#GC#G.##GG#.#B#A.", "FC#CB#.##EGD..G#D#B#A.F#BE#.AE#F#F.#BF..####.#D##F"};
    vector<int> trap = {76, 5, 14, 65, 13, 75, 94};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0157122;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> maze = {"DDDD...D...DDD....DDDDDD.D......D..D.DD...D..DDD.D", "DDDDDDD.D...DD.DDDDDD.DD.D.D..D..DDDD.....DDDD.DDD", "D.DDDD.DDDDDDD.D.DDD..DD.DD..D.DDDD.DD.DD..DD.DDD.", "DD.D.DDDDDD..DD.DD.DDDDD.DD..DD.DDDDDDDDDDD..DD..D", "DDDDDDDDD.D...DDDD.D.DD...DD.DDDDDDDDD...DD.DDDDDD", "..DD..DD...DD..D.DDDDD.DDD.DD.D.D....DDD.DDDDDD...", ".D...DD.D.DD......DDDD.DDD.D...DDDD.DDD.D.DDD.DDDD", ".D..DD.DDDDDDDD.DDDDDD.DD..DD.DD.DDDD.D..D.DDD.D.D", "D.D.DD....DD.D.DD..D...D...D.DD..D.DD.DDDDD.DD.D.D", "...D....DD.DDDD.D.DD...DDD.DD.DDDD.DDD..D...D....D", "D..DDD.D.DDDD....DD...DDD.D..D..DD..D..DDD.DDD.D..", "DD..D..DD.D..DDD.D..D..D.D....DDDD.DD.D..D...DD.DD", ".DDD.DDDDD.D..D.D.DD.D.DDD.DDDD.DDDDD....DD.D.DDDD", "...DD..DD....D..DDD.DD...DDDDD....D.D.D.DDD...D.D.", "...DDDD.D.D.DD....DDDD.D.DDD.DD.D....DD..DDD....DD", "D.D.....DDDDD.DD.DD.DDD.DDD.DDDD..D.D.DDDDDDD.DD..", "D.DDD.DD.D.DD.DD.D..DDD.D.D..D.D.DDD..DDD.D..D.DD.", "D.$DDDDDDD.D...D.D......DD.DDDD...DDDDDDDDDD.D..DD", ".D.D..DD.D.DD.DDDD.D.DDDDD.D..DDDDD.DD.D..DDD.DDDD", ".DDDDDD....DDDDDDD..D.D..D.D.DDD.D.D.DD..D.D..DD.D", "D.DDDD....D.!D...DDD.D.DD.D....D..D...DD...DDDDDD.", "..DDD.D.D.DD.DD.D..DDDDD...D.DD.DDD.D..DDD.DDD..DD", ".DD.D.D...DD..DD.DD..D.D......DDDDD.D...DDD.DDD.DD", "D..D..DDDDDDDD....D.DD.......DDDD.DDD..D..D.D...DD", "DD.DD.DDDD.D.DD.DDDDD.DDDDDDD....DD.D..D.D.DDDDDDD", "..D....DDD.D.D.D..D.DD.D.D..D.DDD..DD...DDDD..DDDD", "D.D.D.DDD...DDDDDDD.DDDDD.D.DDD....DD..DD..DDD.DDD", ".D..DDDD..DD.DD.DDDDDDD.DD..DDD.D..D.DD...DDDD.DD.", "DD.DD.DDDD.DDD..DDD.DD....DDD.DDD..DDDDDDDDDD..DDD", "DDDDDDD..D.DDDDDD.DDDDDDD..DDD.DDDD......D.......D", "D..DDDDD.DDDD.DDDDDDD....DDD...DD.D.DD.DDDD.DD.D..", ".DDDDDDD...DD.DDDD.D...DDD...DDD...D...D.DD.D.D.DD", ".D.DDDDDD.D...DD.DD..DD...DDD.DD.D....D.DDDDDD.D..", "DD.DDDDDDDDDDDDDDD.D.DD.D.DDDDDDDD.DDD.DDDD.D...D.", "D.DDDDDD.DD......DD.DDDD.D.D....DDDD.DD...DD.DDD.D", "..DDD..DDDDDD..DDD...DDDD...D..D.D.D.D.D.DDD.DDD..", "DDDD.DD.DD.D.D.D.D.D.D.DDDDD.DDDDDD.DDDDDDD.DD.D.D", "DD.D.D....DDD.DDDDDDDD..DD.DD.DDDD...D.D.DDD..D.DD", "D.DDD..D..D..D.DDDDDDD.D.DDD.D.D.D.DD.D.DDDDD.DD..", ".....DDDD.D..DDDDD.D.DDDDDDDDDD...DD.DD..D.DDDDDDD", "D.D.DDD........DD....DDDD..D.DD.DDDDDD..DD.D.D.DD.", ".DD..DD.D..DD...DDD..DDDDDD.D.DDDDDDD.DDD.DDDD.DD.", ".DDDDD.DD.DD.D..DD.DD....D..DD.D....DD.D.D.DDD.D..", "..DDDDDDD.DD...DDD.DDDD...D..DDDDDDD.D...DD.D.DDDD", ".D.D..D...D.D.DDDD...DD....DD...DD..D.DDD..DDD..D.", "...DDDDDDD...D.DD.DDDDDDD...D..DD.DDD..DD.....DD.D", "DDDD..D.D..D.D.DDDD.DDDD..DD..DD.D..DDDD.D....DDDD", "DD.DD.DDDD....DDD.DD...DDD.D..DDD.DD.D.D.DDDDD.DD.", "DDDDDDDD..D.DDD..D.DDD.D.DDDDDDDD..DD.DDD..D.D.DD.", ".D.D.DDDD.D..DDD.D...DD....DD..DD.DD.D..DD..DD.DDD"};
    vector<int> trap = {51, 71, 64, 15, 25, 72, 28};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.85;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> maze = {"....FG.GGGG..GG..G..B....BB...BBB.B.B..B....B.E.EC", "..C...CCCC.CF.BFFF..F..F..FFFFFFF.FF.F..F.FFFFA.A.", ".AF.FA..AA..A.A..CC....C.C.B..BBBFFFF.F...F.FFFFF.", "FD..C.F.FC.C.CCCC.....CA..A..AA.B.BBB..BBBGGAAAAAA", "A.A.A.A.A.A...AAA..GGDDDEBBBF.FFF.AAA.A.A.A....A.A", ".A.EE.E.EEGG.G.G..G..GBBB..BBB.DD..DDD.AADDD.D.DDD", "...DDD..DD.D...D.D.DFF..FFDDDDDDDGEE.EEGA..AAGGGGG", "....GGAAA.A.A..A.!AAA..CC.CCCCC.C..FF....FF..F.E.E", ".EE.DDDDA.A..AAA..A.A.A......AA....BBB..B..BB.B...", "....B.ED..EE.E.EEEEC.CF.F.FFFFFF..DDD.DD...DDDDB.B", "..BB.B.B.BB..BBB..BB..BBB.BBB.BB.BB.BBBBD.D.DDF.FD", "..DDD.EEEEE.EEEEEEEEEEEEE..EE.E...EE..C...C.CC..C.", "CC.C.C..G.GGG.GDD.CC.....C....CC.GGGGG.G.G.BBBB...", "B.B$.BF.FF.A.A..AF.FFF..F...F.FF...F..CCCCC.CCCAFF", ".FF..FF..FFFEEEE.E..E.E...E..EE.A.AAA.DDD......DDD", "D.DD...DDDDF..FFE..BBB..B....BB.BB.B.B...BBBBB.B..", "D.DDFE.EEED..DD.EEEEEEE.E.EB...BBBBA...AGGGGG...G.", "GG.GFFC.CCGEEE..ECC.CC..CFFF.E...EEEE.E.EEE..EEB..", "BBG.G.A.A.AA..CCCC..CC..E..EE..EE.E.EE.EEE..EEEE.E", "EGA..AF....FFFFFFFB..BBBBBDD.D.D.C..C.C..CC.CCCC..", "GGGG.G..GGGGGGBBBB.B..BBBC.CF.FF.FFFFFFF..FF.F.F.C", "CCC.C.CC.C.CEEE..E..EE.EEE.E..EEDDD.DDD.F.F.FEEEE.", "EC..CC..C.CC.GG...C.AAA.A..AAAAA.AD.DDD.AAC.C.CCCC", "..CC.C.C..C.CCC.C.CCCGAAD..DDDDDCCCBBBBBB.BBBB...B", ".B...B.A.A.AAAAA.BB.AAFD.DD.D.D.DDD..CC...C.CC....", "CGGG.GGB..G....C.C....C.C.AAA..AA.AAA.A.A...EEE...", "EEEE.AAA.AA...AAA.AAA...AEEE..EEEEEEE.E.EEE.BD.D.D", "DD.CC.G..GGG.BBB.B.BBF...F.F.F.F...F......F.F.FFFF", "E.E.E.EAAGG.G.C....C.E..EB...B.AA.AAEEE..EEE.E.EEE", ".EE.E.EE.F.FF..FFF..C.AAA.A.F..FFF..FAAAA..AAAA...", "AAA.CCCC..EEA.AG.GGGG.CCBBBBB...BB.BB..AA.B..B....", ".B.B.BBBBB.B.A..A.AAAAA.AGG....GAEE...EEE.E.EEB..B", "..BBBA..AAAAACC...CCC..CC.C.CCBBDD.DDGGG.CDD..DDD.", "...E..E..EE.E.E.EEEE.E.EE..EEE...E.EE.....BB..B...", ".BB.BB.BB.G...G.GGG.GGGG.GGGBB....A.ABBB.B.B.B.B..", "BBBB..BBBBCC.CC.B..BBB...BB....E.CCBBB.....BBB..F.", ".FF..F.FFF...F.F...F.F.FCCC.C.CCCCC.CEEEE..BBB..BB", "..B.B.BE.EEE..EEE.EBBBBBGG.G.EEAAADD.DD.DD.DEEE.GA", ".AAA..C..CC..EEA.AFF...F.F.F..FCCCC.CC..CC.A.D.D.D", "..DEEEE..F.FFF..DBFFEEEEEEEE..E..EE.EEEEEEEE......", "EE.DDD.D.DDD.DDDDD.D.DDD.DDGF.FAA..AA..AAA..AA...A", "A.A.A..CCC.C..CEEEE.BB....BBB.B.BB..DD.D.EEEE.GG.G", "GG.GGG.GG.....GGG.......DGGGG.GGGGGG.FF..EEAA...FF", "F.FEGGGGGGGG...ABBBBB.C.CCDDDD.DDD....D..DDEE.E.EE", ".EE.E..E.E.EE.EE...E.E.DD.DD.DDDDD..C.CCCCC..CCCCC", "..CC.CF.FF..F.FF.B....B.BBB...B.B..BBB.BBB.B..B.EE", ".E..D.DD.DDDG...GGG.G..GG..G..G..G.BBB.BBD.DDD.DD.", "DE.CCGGGDF.FFF...FFFA.AA..AA.AABBAAAAA.AAGGGGGG..G", "...GG.GB...B.BBA.C..CCG.GGG..GGG.GGG.GGGGGGG.GGG..", ".G.G.GG....C.C.CCC...C..C.CCCC....CCC...CCC.CCCC.C"};
    vector<int> trap = {35, 39, 4, 58, 0, 82, 4};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.96;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> maze = {".G...D.B..BACCDEEG.GGGC.C....CC..CC.CC..FFFB.BDEC.", ".CC..EEE..E.GG.B.BE.GBGG.GA........AAAA....A.AE.EB", "AF.FF.F..ABA.ACAEDD.E.EEEEF.FFFFFFEEEEEG..BD..D..A", ".DD.D..DDDC.E.E.E.E..B....FCC.ECDE..DG.GEBBA.BBDFA", "..FGGFF.G.G..GGA.B...F.F..GGGEEE.C...CAF...F..F.F.", "F...FFAD...DD.ABBC.BGF..F...G.BC..CC.C.CCBB.G..GAD", "F.AGA.A.A.A..G.C.....E...E....EBC.AAADDDD.D..D..D.", "FGGG..G.FEEEEFF.D.DDF..F.FF..CC.BBBB.B..GGCC.AAGAE", "DF.CCCCCCE.GGECD.BGGBBBC.GE.BBAG.BB.D.DD..EAAGGG.D", "DFE..E.BCCGG.G..C.DD.DA..F.GGBAAA.FFD.DDD.DBF..C.C", "CFFE..E..E..EEEFF.FFB..BBBB.CCAAAAAGGGA.AC......C.", ".C..CC..CBEBB..EBBFF.EE.EAFFF.FFA.FFF.F..F.BBB.GGG", "BD.DB..BB...FF..CAD.EEC.CCFFEF.A.DC..C.EAD..D.D.D.", ".A..C.EAE..EE..E.D.D.DGG..ACFD.CC..F.G..GG$.BFA.A.", "A.AFBBAAACCCCC...AAC.C.FFEBB.B.GAA...AAGG..D..E.CF", "BBBBBD.DD..DDDEE...CCAD.FF....F.AA..A.AABDDD...D.D", "D....DED.D.......D.BB..C..CCCEBBCDEB.DD..DDDD.....", "E..GA.A.A.A.AFAAAAA..G..F.F.FG.G..GB.EGAE..DCCCCG.", "F.......AE.E.AAAAAAEE...E..EEEBFC..D..CCBBB.BB..GD", "EAA.AEE..EE.EE.EEE..CCEE.E..EE.B.FF.A..A..AAAG...G", "GBBBGFFGGD.DGD...D..CGE.E..E.........FF.GG.GEEE...", "EE..A.AA.AAA..AAB.B...B..BBB.E.G.GG...G.CC.BEDDD.D", ".DADC..C...E.DEA..A.DCBCFGGC..B.B.B..BBB.D.DDDG.GF", "F.E..G..C.CBBAD..BBB.BBBF...E.EEEDGGCC..GAD..DD.DD", ".DDD..DDDDEDD..D.FF.F..BBC.C..E...E.DFF..FFDDED.F.", "F..E.EEEAAAA..AA.A..AFFF.A..AA..FFF..CG.GGGCC.F.FF", ".F....GB.FF.D.B.CBBBBB..BE...E....BG.GD.B.B.AG.FFF", ".DDD..BB.C..B.....B..B.FBBB.DDB.B....C.CCDD..D.F..", "F.FFFADD.FAEDDG....G..C...CC.C.D.A.AA.B...G....GE.", "FFCC..GG..G.GGGA.D.D.DBBBB.GECC..EE.ED.D.GG..F.FDD", "..FDD..DD.EEEBBB.FFF.BGEE.EFE.EG.G...GGGG.GG..EE.D", "DDDGGDGGF...B.B.BG.BB.BBAG..GD.G..FFF.DFCDEBEEE.E.", "E.EE..EE.E.!AE..EEE.E...E.DA..A.C..C.F.G..EEC.B.B.", "BBDCBBBDAAAAG..F...FE...E.D..DDA..ABGFF.A..AD.E.F.", "DCDDDF.FF.CC.BABCA.EEEE.GGED.DD....D...DDDC..CC..C", "C.CC....BB..B.BDDD.DB......BC.CCCCC.D.BFFB.B..B.EE", ".EED.DDDA.D.EEE...AA....E.EDDDDC.CC...CD.DDD.G.G.E", ".BE.EEEB.CFF.FF...F.F..FFF...FCAA..AA.A.EC.C..AACB", "B.DDG.G...BE.FFF.GG..FFF.....FEE..EE.GFC.C..CD..BB", ".DGBB.EE.E.EEE.AA.DEEE.EEA.A.A.A.DEEBD.D..A.A...A.", "EB.BBDDD.AC.G.GEABBBBCCGBBEE.EEE.CGGG..G.G...G....", "D.A.AA...A..CCB..GG.AD.GG.GG.BB.BB..EEF.FCC.G.A...", "A.BBBCAAAA....D..DD.DDDDDD...DDDEC.FFFC...GCDE.E.G", "B.EE..EEE.CAEE..E.EE...FFA...AC...G.G..ED.CCD.AEEE", "EE.G.G.D.C.G...GGGG..GB.CFGGGD..D..DDD..DDD...GGEE", ".FF.FB.F.F.FFFB.BBB.D.DDGBDD.E....EE...EEB.DAA..F.", "FD.D.D.D.B.....BEE..GGG.GGGGC.C..EEDAAAAAAE.C...CE", ".EG...G.E.EEEF.FF..D.BF........F.FFF.DC..C.C.E...G", ".C.DD.DDDD.DDDD...DD.D.DC.CC..C.CGCDDDB.BBBB.CC..A", "AAA..A..FF..F.........DDCG...G.G..G.CCCEC.CCEEEEE."};
    vector<int> trap = {66, 78, 0, 23, 37, 81, 7};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.77;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> maze = {"GB.C..GC.FDBB..BBG..BC.DFAC.B...BFD..EC..EA..DBF..", ".E...A.D...FD..DED.EF.FABGD.BGGGCAACEABBGA...FAGF.", "G.A...GA..G.CDA.....D.DFA..BA..E...GEGDCDDA...GBEG", "D.AEE..GBE.F...C..A.E.G..FDBDA.CBCA.ABB.ABAB.AD...", ".B...EB.F..FB.GFFABG..A.A.B..A....FAB...DFE.ED.F.F", "...G.E...A.EGBG....A...D.DD.CBEDEGG.GA.G..B..GBF.G", "A.B..FCEFF..CF.FB.G.AC.BACA.EECGGF..G.CAAFCGB..FBG", ".C.F.DCFFAA.GGA...A.AB.E..CCG..G.AFGB.CF....ADB..B", "AE.DCAACAFFFF..FC...C.A.F..BECDDB..CGE....D.A.EGCF", ".C.FD.ED..EAD.....EF.F.G.DF..G..D.ECA.AGCCGFGA.EB.", "DG...BF..CCA.GGC.CCGAGFEEAD.E..C..AECBDAFFDEFAED.G", "B....ACFF..F.EDE.AFF.A.EEFAECA.D...EED..FFEAEA..G.", "......G..EGF.C.G.B...GFCFBCC.ACABBGF..GGEABF..FEFD", "D.CADDBFE...DEFEFDA.GDG.FFFBF..GC.BEAEGDB.FC..AC..", "AAE......EF.G.G..D.DCDEBAEABC.AE.G.ABB.FDAGGGFABBA", "FEAD..BBF.EECGCGB.AAF..GF...C.FE.AFD...ABB..D..G.A", ".B..DD.BD..DD.AEG.FD..D..GA..B.EEC.GBG..BBD....G.E", ".AG.EG.E.G.GD.CD...A.EAA..D..F...E.DAAAG..A.DD.FGG", "FBGABBFA..DEFD..E..G..A..EBGF.A.G.B.A.B...EGEFG...", "..BCDGDADBFDA.BCBA..C..DGFC..ACDE.D.B.....G.DG.EGG", "...G.A..EG....DACG.CC.E...C...ABA.D.DE.EB.D..GFC.E", "A.E.AGFBAAG.G...DD..B.AF....AAGFDB.EECFD.BCEGBGAF.", ".D..BGCA.GC.E...B.BGDD...AF...CA.EDECCE.C.AC.BFFBE", "CBC..B.DCEDDCEGDFA..E..GA.GDBD.G.BBDD..DF..B..DAD.", "EFDF.FDE..EG..BDD..CCAEF.ADF...CA.C.GE...D.D..F...", "GE.D.C.DB....A.DDB.EBC.FAGG.DA.FA.C..C.....B....F.", ".D...GD.B...D.DC.GDE.GE.EFFCCE..F.FF.EACGCED.BDCCB", "AFDG.B..AGE..G..A....DEFACG....F.E..DGA..A$..BA.GE", "A.C.EB.F.FBCE.A.D.C.B...DDFDE.EGACBECFCEDFGC.D..CA", ".GFE..CCAA.D......EF..ED..C....FE.FF..G...FAA..EDD", "E.GF...D.G.DE.BGEDBGDE.FAD.FGEFFA..E.F.DE.FAG.EA.G", "B..D.DB.GAC.F..E.AEGAEDB.BEFB..B..C.FBFE.AD.E..EA.", "GCEGECDD.A.A...CGD.AAGEAF.C.....E.BC.C...DGB.AFADA", "CFAFDDD....E..BAG.B.D.F.A...CE.BB.AEBEGCG.GCE.EGDD", "EGA..FDCGBAE.GC....B...CCA.B.F.G.AF...DA.E..GDD..G", "BCFGFDDE..BGABBBE...DG..BFFC.CG.....A....DGC..CEGB", "A...A.G..A.GEFFF.B...DA.E.C..CDAG.GE.B.AEGDCEGACAE", "B.BFE.BBDADEG..DE.DEFEEA..A.C.EG.BC.F.....EE.BADAE", "FC..C.D...A.GC.D.GF.BCEF..DG.FBE..CCDCE....BEG..BC", ".DADFA.B.ABBE..BB.EA...FCCFGA..!BAB.BBE.G..G.ED.GD", ".CFFE.DD..GAFDEDC.E...ADB.CF.D..FG.B.BF.F.F..BBEG.", "D..EE.GCAGA.B.DCAC.B...FCBAEF.EAFDB.E.GEC....C..C.", "..C.GDDAACCCCC.EDDC.DG..DB.ECA.C.C.DGEAC.GDEB...AB", "A..BEF.A.D...GGD....FB..CCCEFCGCB.CE.A.A.BB..B.DDF", "...DACD..GCEE.G..E.BA.B..GG.ADGF.GF..GA...AA.DGFD.", "..GEG.GC.A..EGA..E.EA.CC..A.EG.G...G.G.BFD.C...BA.", "EEFD.DEDB..B.B.CC.BDFGEEDBAA.G.FAE..CE.DFDAG..AFAC", "..DDB...AC.GA.BFGF.EDDAD..A.E.D.FA....G.AG.FEGG..E", "...EFG...BA..AF.AE.....C..DG.CCFAFFC.E.C.FGE.A...G", "EF.A..DD.E..AA.FB.GE.AA....CFCF.E.GAGF.AFA...BFEA."};
    vector<int> trap = {63, 2, 13, 31, 49, 49, 16};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8231999999999999;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> maze = {"...#CCCC.C#..#CC.C#CCC....C#.CC.C.##C.##.#C#CC.#..", "CCC#..##CC.C.##C..#...##C#C#C.C.#CC.#C.C.C#.CCC...", "C#CC#.C.CCCC##C.CC.C#.#.#..C..CCC.CC#.C.CC.CC#C.C.", "CCCCCCC#...C..CC.CCC..C#.C.C#....#C...CCCCCC#CC#..", ".CC##.C.CCCCC..#C.C.CCC....C##.CC#CCC.C..#C.#....C", "...#C.CCC....##.C#CC.#CCCCCC##C..C.CC#.....C.C#...", "C##..###CCC.#C$.C.CCCCC.C.C..CCC#C#.C.#CCCC....C#.", "#C.#C#CC....C#C.C.CC.#.#...#C.C..###C#CCC.#CCC.CCC", "C#CC##..C#.C..C.CCC#C#.C#C.#CC.C#CC#..CC.##C.#.C.#", "CC.CC##....C.#.C#..C#C.C#C.C#C##..C.#..CCC.#...CCC", "..CCC..CC#C#.##C..#CCCCC#..C.#..#C#C.#CC#CCC#CC#..", "CCC.#.C###....CC...CCCC....CC.C#.#C#.#..C.CC.CCC#.", ".##.CC.C##..C#.C#C#CCCCC#.CCCC.C.C.CC###C.#C...CCC", "CC..C....C.C#..CC..#.C##C..CC..#...C.C.CC..CC.CCC.", ".CCCCC..#..C..C..##C###C..C.#C.##CC.##..CC..C#CC..", "...CCCC.CC.CC.C...CC#..#C.C#..CCCCCCC....CCC....CC", "...C#C.##C...CCC.CCCC#.#.CC.C..CC.....#.#..#C.C#C.", ".##.C#CCC#.CC.CC#.C.C..C..CCCC#C#CC..#....C.C.#.C.", "..CCC#C#C.C.#CCCC##.#C#.CC.#.##.CCCCCC.#C#C...C.C.", ".#CCC.CC#C..##.C#.C.CC#..C#..CCCC.#C#C#C.##.##.#.#", "CC..CCCC#C#..#C...CCC.##C.##CC##...##.C##CC##CCCC#", "..CCC.C.C....CC.C####.#.#.#...C.#.CC.#CCC#C#..#..C", "..#C.#CC.C.C.CCCCC.CCC....CC.#...#C..CC###......#C", ".#.C....CC.C.#.C#..CCC...C#CCC..###CC..C..#C.CC#C.", "C.....C.#C....CC....#.#C...#.CC##.CCCC.C.C.C#CC.#.", ".C.#..CCCC#C.CC#C##...#.CC#C.#C.#..#CC##..#......#", "CCCC.CC.#CCCCCCC...#.#..##.......#C..CCC.CC...CCC.", "...#....CCC....CC..C.C#C##C.C.##.CCCCCC.##CC##C#CC", ".CC#.##CC#C...C..CCC.CCC..CC.C#CCC#.C..CCCCC..#.#.", "CCCC.#CC#...#.CC.CC#...C#.#..#C#C..CC###.C..#CCCC.", "#C#.#C#.CCC.#.C.C.###CC#.#......CC...#...CC...CCC.", "CC..CC.C.#CC...#...##CCC#..C..#.#C..CCC..CCC.#C.C.", ".C##CCCC#.C.C#.#....CC.CC..#C#CCCCCC#.C.C#CCC#.#C.", "#C#C#.C.C.#C.CCCC...C##C#.#C#C..C#.C.CCCC#C.#....#", "C.C..CC..C#.C.#C.CCC#..C.C.#.C.C.C..#..C.CCC.#CC.#", "..###.C#..C..C..C#C.#CC###.....#CCCC.#.C#....#....", "C..CCCCCC..#C#C.C.C.#CC.C.....C.#C..CCCC#.C#.#C.##", "C.........CCC...CC.#.C##.CCC.CC.CC.C.CCC.#CC.C.#CC", ".CC###.CCC.CCCC..C###.....CCC.C.C.#.CC.C....#C.CC.", ".C.CCCCC..C.C.CC...#C.CC..#.C##.#C#CC.C#..C#C...C#", "CCCCCCC..C.C.C#.#.C#.C....C.#C..C...#.C.C#.C..CC.#", "..#C#C.#.CC..C#...#C..#C..C#CC.CCCC.C###CC....C...", ".C.C#..CCCC.C#C.CCC..CC#CCC#C#....#.C.CCC##..C.C.C", "C..C.CC#.#.C...#C....C..C#C#.C#.C.CCC.#..CC.CC.C#C", "#..CCCCCC..CCCCC.#..C##.C..C.C..#.#.....C#C#CC....", "CCC..#..C..C.C#C#..C#CC.CC.##.CC.C.#.C..C..C..#..C", ".....#.C##CC.CCC.#.......C..C#...C.##CCCC#.CCCC...", "C#..#C.C..##.C.#.CC.C##.C.#CCCCC....CC#..CC..CC.##", "..#..#C.C.##CCCCC#.#C.C#C#.C.C...CC#CC..#.C.C.CCC.", ".CC.C!#.C..#CCC#C.C.C...#..#...C..#CC####..CC.C#.."};
    vector<int> trap = {75, 22, 44, 75, 32, 81, 75};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.56;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> maze = {"C.CCC#C.CCC#.#..CC#C.A#..##.#.###.A....F#.FFF.##A.", "#A.A.B#BB#..#.B.##...BB..BB##.B.B....B##.BBBB#B.#.", "B#.BB..B....B.C.#CC#CC.C...E#..EE.E.E#D...D..D##DD", "#BBADD#D#DD.#DG.G#.#.#.AE.CC#EE.#C....#.E.E.EE..E#", "..#..E..CCCC.C..#C..G#GG.G#GGG#GG##.##G#EEE.....EE", "B.B..BB..#..BB###BF.FD...#.D.DD..F....F#.F.F.FAA##", ".BB.......B#......#B.#.B.BB#.##B.B.#.#...CC#..CC..", ".CG#..G..#D..D#D..#D..#D.#.#A.AF..FF#G..#..G..G#GG", ".#G.G#GC#.C##DD...DDDA...A..#..A...##AA..#AA#A...#", "##.....#.A#.A.A.A....AA#A.A#..A.AAA...A#AA.###A..#", "EE.E#.EE.#.E#E...EEE...EEE##.#E.EEE#.E#.#.EEEE..#.", "#..#.EE#E##EEE#E.E.EFF.FFF#.#.#F#..#EE...E.###B...", ".B#BBBBB#...BB...#...E..#E#.#.E.ECC.##.#C#.#C.#C.#", "C#..CC.CCCC..C.#CCC.CC##!#CCC.CC.CC#.C#CCCC#CCC#CC", "C.C............#.#.C.C##.CCC..#C.D.DE##D#DB#B#...B", ".#BB#.BB.BB###D.D.DDDDD..#.##.A.##A.AADD..#B#BB.#.", ".#.BDDD.DD.DDD...#DDDD.D.#D..D..D.D####D##B.B..BBE", ".EEEE.###E.E#E#...EB.##B.BB..B##.BBBBB.BB..D.D.D##", "DA.A#.#.A###AA...AAA#A.#.DD#.DD##.DD..#.DD#.D##DAA", "#AC.AA....A.AA##.#..G..G##.#.#GG#.GG...GGG.B..B.BE", ".E..E.#.EEEEEDACCC#..CCCC.CCC.#FFCE.#E##...EEE#.#.", "E##.#E..EE.#.EE#.#..#....EEFFFF....F.F.F#F#F#....#", ".#F...#.F.FF..FFCCCCC#CCC...C.C.CCC.CB.B.B.BB#B#DD", "D#F.FD...D.#.DD##.#...AAA#AAA#FF.F#.FE.FF##...#.FF", "#FB..B.#.BB..##B.##B#BB.##.BBD...D#..#D..G.GG#.AAA", "AAAAAG.#G#...G.G..#..GG.G...G..GG.#EE.....EEE..GG.", "G#.CC#..CC.#.CC#.#CCCCC...###C..C.C#E.#CC.#C.#AAFF", "F#F.F#.F....##.F#F#.F.FFFFF.....#C##..C#..#...#...", "C.CBBABBF..FFF#FA.#A.AAACCCB##...B..B..B..B.##.BBB", "#..BB.B.C#.CC.##..##F#...F.#F#F.F#.#..#FF##...F..F", "..F.F#....D..#D##..#DC.CCCE..E...#E##EE....EC.D#.D", "##.#D#D#D#D...DDGGG#.#.##G...##...G##GGGGG##G.G#G#", "G##GADD#....F.####.C.C.CDD#.D.#...BB.##..BBAAAAA.#", ".A#AAAA.AA.....AA.#AA#AA.E..#.E#E.....E...###E.EEE", ".##EE.EEE...B#.BB.##B..B....E.#E#E.EE.#.###.##.EE.", ".AAAA#.#FF#.F#..#.#.F.FD.D..D.D..D#D#D#D.D.D#D..DD", ".D#.#..D...DD#D.#.DDEE.EE...EE..E##C.#CA.A..##A.A#", "..#..#.#.##AAAB#...##BBBBB#.BB#BBBBB...BB..BBD#...", ".D..DDD..#C#CC.CFFF.....B.BBDDD...DDD#..DD....DD#D", ".D###.D.#.E.....#E.E##EE..##..E.EE..E#.D.....DDD##", "..DD.DDD...#BB#AA.C..C.C.CCC.CC#..#CG.GGGGF.FC..C.", "C..C#C.C...##...E.E.#EE.G#GG.#..EE#.#EE.E#.E.D#.BC", "#CCC.C.C#.BFF.F.FFFA#A..A#AA#.B#.BBCCCG#GGG#G#G.GB", "#.B##.B.B.B...##..G..#G.#EE..E.E...#E#..E##....#.E", ".E.E.E.E..EE.#E.C.F...F.##.FFF.#.EE.E..EC#.#.G...G", "G.#G#G.G.GG.GGGG#GGG#.GG..G..#.G......G#.#.#.G.GG#", "G#.GG#E.E.#E...EEE....#E.#..E#..E.#E.E..E..E.EEE##", "....E##E..#.#.E.#E#.E...E...E.#E...#.EE.E.E.B...BB", "#.BBBB.#BBE.EEE.F#FF..$F..FF...FF..##EE..EE.#E.E..", "EEC.C..C.EE.EE...E#.F.F..BE.#.E...E.DD.DDBBB...B.."};
    vector<int> trap = {4, 55, 91, 29, 49, 61, 93};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.347616;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> maze = {"DDAAA.#A.#.##...G.GE##..#C.AAB#F#.#G#.GGG#..G#.E##", "#.E###E.##.EEE#E#B#E.E.##C.#C#.#C#..CFG##...#.....", "#...#.#GG##C...C.C..#C.C..CC.#...CCCF#F...FA.F..#.", "C.A.##.AA..FF..EE#B#E..#.#E.#A.#B.D..#....BB.$##.E", "##CC#.CAGEEG.GGBBB.A....###A.#..#A.#.#....FF...FF#", ".######.##..F.A....#.AAF#..F.BF#FF.##FF#FFF.F.##.#", "B.#GG#G.C.E##.F...A.A###.E.#E...EEB..#B#E#.#.E...A", "B#BB.F####F##.#..E.###G..C.##...CC.##CC.C.##.C.A#C", "..BB.B.##B.B#..#..BD#.D#AA.F.E..###E##.G#GDF.#F..#", ".#.##FFF.E##CCCAAAA#.#.CGG..G.EEB#...#.B#...#C#...", "CC.B##BF.D.##.D..GA##A..#.#.A.AGG..G.##G#GG##.#.G.", ".GG#G..G..ABBCCGD.D..###DDDDD.#E.EEE.C#FBF.#F.F..F", "#BBBG.F#..###.C.C#..A...B..B.G#..G....##....##.B#B", "BB..B#A.A.EE..##..#.#DEEE#.#E#A.AB.D..D..D##....D.", "#.D#D.#..C...A#A....A..#.#..#.#AEE....D.FF#FF.#..E", "...E.##B#.BB..BD....#D##D..#BB..F.FFF..F.F.##.G#..", "#.#G.###....G...FD.AF.F..FF...#...#.F.#...DF.#..F.", ".F...##C.C#CCC###...#..CD.#.G..GB.FD.DDG..#...A...", "#DF..FF.C.C#E#.#E###..G#.G.F##....F.C..A..#A...#AE", "EE.##.E#.E..#F#A#D.#D.#F.#FCB####..B.G..#.D#.#..CC", ".DD#D#..#D.DB##BDCF.FF........#D...DD#E##C.C.C.#AG", "EE##E..EFFG...G#.D#.E##B#B#..##B#BE....#F.F#......", ".F...FF.F#FF#BB#..BG..C#CC.C.CD#..D.D#F.#..E.E..EE", ".EA#B.B.#B#B#.CC..FF.A##..AA..#A..A.A##AA...F.#..D", "..#E.#.#E..#E.E#.D#D.F.FF.#C.#.C.BGG..#B#B.B#A.A.D", ".#D#.DF#F..FF.C#....##C...BBB#BF...F...C.CFFE...E.", "EG..#CD...#D..D.#.#CC.....CC#D#DE.E.#....E##E.E.G.", ".....ACCBG..G#...#GD#.DD#CEEA#GG#..G.#.G.GG.D##..A", ".E...##G#..GGB##BFF...F.F..#....#D.D.DDDD..#.DDB.B", "..#.FFE..EEE.E#.EAEEC#.D##..C.BB##D...C#.CB...#.#B", "...#G.G..G...#..#.#A#A....##.###B.DG.FC#.A.EE#..E.", "E.CCCC.#..#.#C...#..C#C..#..A.A.B...B.#....C.E#.EF", "#F.D.#C.CG.FG##.G#.#GE#.E..A#..G##.##.G#G####.G.G#", "..F#F..AA..A##...##A#.#.#AD.A..#..#.A.A!G..F.#F#DF", "BB.B..BB#B.#..#G....G#G.G###...#.D.D.FF...C.CABBB#", "BB....B#B#.#..#.#..#B.AG.#.##GGDA.G#.#G.#D.F.FG..D", "#..D.E..#.#.E.E...EE##E.G#A#.#A....G##EG##...#G.#.", "..G.#GG.C.#C.##C#...#G#.GBB..GGBB...#.B.CCF...#F.F", "..E##EEE.EDD###.....D...A##.A..E..FGG..#CCD.#..#BB", "B#B..#..##..DBEDAAE.FC.A.AEE.#BB##B##.GD.D#E##.#.E", "#........EEG##.#A..A#C.#C##....##.#.##.C..A.##AD#.", "DD.#.DC.#.C..F.FG..G..E...E##A#CC#CCA.CFDD...C..AF", "#..F.F#F#F..#..FF...EFF.F.F#D.DD...D.#D.#.DD.E..EE", "E..E.E.##E..#...G#.GG.D..#E#..EEE..E.EB....E...E##", "...E#EB...#.B.BCC.FF..#...FFF.C#.C..G..G##D.DD.#..", "D##......C..C#.B..CCC.C.CBB..#C..C#CF...F.FFFB#.BB", "B##..#.#.B.B#.#F.DG#.#....#....##E.#AAAA#.AEEE..E.", "#....D..##...#.C.C#..C..#C.CEC.###.C.#....#.EF.F.#", ".E..#E.#F#FA##..##.GG.G#G#C#F##D.A#.#..E##.B.#D#..", "..D.DBB..BF.FFGGG#CC....C.#..E#E#.D.AA#D##CC.CC#.C"};
    vector<int> trap = {73, 94, 99, 69, 88, 24, 0};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.23560000000000003;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> maze = {"..BG#.#C..CE#E..G.##C...#GB..E..##CFCCFG..FG#..G.B", ".#..##D...DCAC#E..#DB.#E..B.FG#AA#DAC.G.#B#E..#B#.", ".#A...#...#E#G..#G..#F.D.#E..AA#AE.#CG.#D....C#.D.", ".A.A#.F.A.DG.A#.#D..##C....#.#...CG#GG.EFG.A#E#D##", ".B...BC.###.A#GEBB....E#EE.B##...CDC..CA#GE.EC#.BE", ".A#ABE.B.G.#..AFDE...B#DE#B.#..GGC#...FAG#.......#", "E#.E...##E.A......E.C.##.GA.FAFB#DB.EAF..E..A#B...", "E#.CG.B#..DA.DC.A.C..##CA...GEG..A#G.AF.B....C..C.", "..ED#G#E..D#E..#.D.##B..C...G.D#GAF......#.A#.DF.B", "E.....G..F#..AC#.#B.#G#...E..#E..G.#...EFD..G.....", "F#..##...#E.#.BD.D..AAE###E#GC.C.##.BAC#..G.#DCE#.", "G.C#D...E#C#.B#B..G#.#...G.#.CD#DDD.E.#A.CG..C....", "BD.FC.A#EBD.#.FD#.ABFDE.B.FG.FDB.CF.#F....A.DEBG..", "BAFG#..EE#.G.####F#F..F..E.CB#.......FF#..DB..E###", "###.EF.G.G##BE.#B...C.CC.E.FD..G.#.FBD.#CFB#EA##..", ".#F.#DBEB#EEEB..G.F.#.C.G#.DA.#.B.EDG.#F#B#.A.GF#B", ".#A...E....#.....C......C...CCA.D.###..EFBE#F.BFA#", "B#C..###.G#BGB#DE...D.D##G..#.CE.B.D..D#CG.A#..#DC", "FCB#E.GEA.##.EC.E#GG#.AD.#C...G..A...A.A.B#.#F.#..", "#E...E#..D...#...#.##.##.B..G#.A..#B#..#.#.#.E..GE", "..GGE#ADD#.#..G#D..#D#B##.D..G#B..C#FA##AFGE....A.", ".C#G.EDGF.G#EC.#.E.C#F...D.#A#B..C..AFDAEG##..D.CG", "E.EA..AAG#G.B.D#BFF.B.D..E.AGA.BE.C....D..F..##.D#", "B##.#.EE#G.#.F#G...#G..B...AADEGDF..#EGFG#C..#C...", "..#.A#.#G.#.F.E#A..#CB..AE.BBG.AG.AA##EE.F.#BAF#.E", "G#D...D.DB.G...E.F.#..#FFB..EF.A.##...FE..C#D#D..#", "#.A..#F#GFB..GFA.G.C#G.$#.GE..#E#GD...DFF..B##.FGD", "F.#EGA.##D.#.D.##.BA..FCB..G##.A.##G...AE...GCAED#", ".BC#DED.#G.....FG#.#GC.B.#.G.A..#EDB..D...D#...EB#", ".#D#A.E.BB...C.C.....B#FA..C##FB..#.#.#BE#.GB..BFE", "..AF.#EB.F#.C#..##CFCE#..GBDG#CFE.D..CB..A.AG....D", ".FG#.##.GB#.BB.#CCA#B.FC#D.#.#B#BG...CB...BB#C.G##", "CC.#AGB..##..###.EA..E#..B#FFB#AABGB...B#.BAFB.G..", "##DB#.F.#E#GF.EC#E.E#.EF.C#C#.CD.DEA.#EGGE#.A#F..F", ".G....EDG.##.FF#.B##.EC....#.##...A#CG#.D.#..EC..F", ".#F.##A...#DA...F.EF.CA..G.B.D#.C#CG..F..GF...E#D.", "..D.....#.FE....ED.C.FC.C#..C#.##D...DCG#.E.CC..C.", "G...BB#A#FB..C..B...#G..G#FC#G#...A.G.G.G#.#D.....", "....D.E##.E.#..D##.BDEF.C.##.ED.F#G.GA..##..G.C..D", ".###.GFA#.#B..#..FF.BCG.GD......D##C#C..G!B.DBA.BC", "E..EAF....G.D.C.CDGF#.E..#..##.G.C.C.F#..#D#G#AAAB", "C.F...DCA.BFBGC.A.#.D.C..G.##.GC..DE.AB#D...B#C.##", "E.AD.EGB.AGG..#..#..#FG.F.F.#..#.#.BBEG..EDCD.E#.E", "..D..D......B.CGE##.GE.C#..#C...##.E#..CG..E.#B.D#", "...CD#.E##C.#A....#GFCD#.##..BF...GDA#A.#.#.C..D#.", "FCCF.E#B..#.FE###.G#F#D.A#.ED..G....###...CF.F#.CG", ".F#A##.AE#C#..C...F.##..#.A##..GAC#CCD#AG.A#.A#..A", "#EF...#EAG.FE..#.#....#.DG.....##BGC..#D#.F.#.FG..", ".#....DE.#.F.FA.DB.###.....DDF.EGA.A.GEA#..#...#.C", "..D.#G.#G..C#.#.GCCB.E...AA##BC.FCF.#EG#.C.....A.."};
    vector<int> trap = {63, 53, 90, 54, 8, 14, 42};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4588960000000001;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> maze = {".#B..B#.#B#.#..B.#B..#B.....#.#...#..#..#.#B#.#.#B", "#..##.B#.B.#B##B.#####...#B.#.BB#.#.#.#.#......#..", ".##.B.B#B#...#..##.#.#..#.#..#..B##B..####..#...B#", ".#BB##...#...##.#..#.#......#.B#BB.B#B#.#.B.#..#.B", "#####B####BBB#....B.#B.#B..B..BB..###..B##B.###.B#", "..##..#..##B##..BB.#B..B##...BB##B##..B#B..B#B##B.", "....#..#.B....#B.....###B#..##B.##..###B#B#.B.##BB", "..#B..#..##B#.#.###.B#B###B..#####...##.#.B##..#..", "..#.#..#B#.B.####B#.#..BB#..#.##B##.BB##BBBBB###B.", "##.B#.#.#..##.##BB#.B.....#.B.......###.B#####B...", "#.#B.#.##..B..B.##.BB#...##.####.#.B..#B.###.##.##", "##B....#..B###.###.###.#.........#..#B.####B##B..#", "...B#..B.#.#..###B#.##B#.##.BB#...#..#..##.#.#B.#.", "...#.#.B###...B#..B.#B#.#####B.##.##..##.#######B#", "#B#B.###..B......#..B#B##B#B....B.###B....######B.", "#B.B..#..###BB##.#.B##BB#..#.BBBBB....#.#.B.#B.###", ".B#..B..####B###B###.BB#.##BBB#.###.BB..B..#B#####", ".###..##..B.##B#....B..#B##B###B..#..#BB...#.##...", ".##.#..B#B##.#.$##.#B.#.##.B#..#B#B..###..B.##B##.", ".B##.!##....##.B.####.B#BB.BB.#..#.#B.###B...###..", ".B..B#B.#B#.BBB..#...###.#..B#.#.##B#..B####.B##B.", "##.#B.B..####..#B.BB.#..#.BB##..B.###.B#.B.#..###.", "B....B#.B.#####.#B###.#B#.#..##...#.B#..###BB..B##", ".B#B#.B.#B##BB###..#..B.B..#BB.#.##B.B..#..B#.B##.", "...#B#..#.#.#...B..##BB##.....##B###BBBBB###.B##B#", "B.#.BB#...####.#.#.#.BBBB#B#.BBB.#.B##.#.####.B..#", "####.##B#.#B##...BB......###B.B#.#.#B#B#BB..B###.#", "#B#...#B#.B.B.#.###...#.B.###..##B##......B#B.##B.", ".#.###..#......#.##.B.B.......###B.#.#.##.##BB..BB", "#.#..##..B##.#...#.#B##..B.####..B.B.B##.#.B.B.BB#", "##B.##.#...#.....##..B#B##..#.B.#B#B#...BB.#BB.#B#", "..#.#..##.B...#..##.#B..B#.B#B#...#.#.##.##.#..B##", "BB.B#.#B.#B..####.##B...#.#BBB..##...#.#.##.B...B#", "#B.##B#.#.B#.##B#B..#BB#BBB##...B..B#...B###.BB.B.", "B#B..##.#..###.##B..B....B#B#...#..###..####.####.", ".#.B.B#####.B##.##BBB#B.B...#..BBBB..B##..B#..B...", ".##.#.##.B..#B#B##.#.#.#.#..###.###.BB#B.#.#B###..", ".#.#..#..#####B.######..B.#...##..B.##..B#..##....", "B..B..#.#.BB#....#.#..##.#B###.BB#BB#B...BBB##B#..", "..#.B...#...##.#...##.#.######.###.B#.##....##.#.B", "##...#.#...BBB#B#B.B##...#..#..#.#.#..B#BB.B.B#B#.", "..##.B.B.BB##.#.#.##.#.#.#...B#.##.#.B.##.B#.###.#", "#B...#B..#B#.#.#B#....#B..#####BB.B#.B##..##BB.B#.", "B##.B#B#.B#.#..#.BBB#..#B#.#B##...BB###.....B#BB##", "#..#B#.#B..B####.####.#B..B..B####.BBB.BB.B#B###..", "B#.#.#B#...##.##B..#.#B.##BB#.B#B..##B#.#.#.B..###", "#B.B#B.BB#...####B..####B##BB#.BB#BB#....B.#BB#.#B", "B........#..B.#.###B##..#B.##..#.##..##B.##.#.B..B", ".####B###.BB#.#.#.####.BB###.#B.##...B.####B######", "B....#..B.###B.B.#..##..##.#.B#.#...#...#..##.BB.."};
    vector<int> trap = {53, 90, 98, 6, 32, 17, 94};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> maze = {"##....##.C#..C###.##...B...#B#...#.BBBB###.....BB.", "#.BB..#####...#.#E#.##..#EEE..C.#..#.#.C####A#.#..", ".##.A#...A.##.#...A##.AA#A#A#A#.#.A##..#AAAA.E.##.", "E.E#..##..E.#E.##E#.#E#E.E.#..#AA#A###A#...#A.#.##", "A.#..A..#.##AA#..###.####..#A.##..AA.##E..#.##..F#", "..#..DD..DDD##DD##.####D##.D..D###.#D..#D.###.D##.", "##A..A#.#A...A.#A.DG..#D..##..#D#D.DD..###.##.DD.#", "#..###D.##CC#.##CC.##..#####..#CC#.#C.###.....#.CC", ".C.#C.##CC#C##..CC.#.CCC#...#.#.C#CC#C#B..#.#.B###", "#.B.###..#B#......B..###.##B#B.D#.###D.##.D...###D", "CB###E....#E.#.#.E.E..#.###...#..#E#E...G##G.#B.##", "#..#...#####..#...B#.B.#....B#.BB#B#B..#B.#.#..#..", "####.B.B#.B.#.#..#B.##...B.B#D#.#..!.#...D#.D.#.##", "..###..D##...##G#G.#.B#.#..B.#B#..##BB#B#.#.#B##.#", "#####.#BB.####C#...#...CC..#.C.#.C##F###.#.##.FF..", ".##F.A.#.#A#.##A.##.#..A.#.A.AA###..#.#.....##A###", "#..#..##.A..#D...#BB.##.B.....B...#...#.B###.#.#DD", "##..D.##DD#.##.##.#....##DE.###.##.#.###..B#.##B.#", "B#.#.#B#..B.###.B##.C..##C##C#C##C#...GG...E##..##", "E..E####..#.E.E#.###E#.E....#A.#.A#.#A.A#A.AA##.AA", "#..##A.#.#.#.###.#A##...#A#....###AA#A.#A...##...A", ".##A.##..F.#.#.##.###....###.#.###.FA..#.##.G#E#.B", "B.#..B.##....##.B.#.B#...#.#..B.#.#.##.#.#.....#.B", "#.#.##.#..#.####GA..##AEE####EE#E.##E#E#.#.GG##C#.", "C###C#C.C#.#C...C#.....CCC##..##C.#..#C...C#.##.C.", ".#C.#.C###..###..##.#.#C.#CCC..C#.C.#C.####C#..##C", "#...###C#.#C..#E.#E.#.###.E#.#.#..#....E#.....#.##", "#...E.#...E.##.E#.#.#E..#.#EEE.#..#.###EG.GG...G#.", "#F..##.F#FF.##...#.##.#FF#.FF.####F#.#####....#.##", "##.G#..#G#G.#.###.###.#B..##..##...B.....F##.#FF..", "F.FB#BB#.B..BB####..B.##.#.####.B..#.#.####.#.##.B", "###.B#.#..#B###B##B#..#B#B#.#.###.#BB.#####.#.####", "####...##B##..##..#.BB.#.BBC###.C.##C#.C.###....CG", "....G#...G#D##D####DD##.##.##D.##GG...##..G#G.#.#G", "G.A..##.B.#.#B.#..##.##B#BBBB...###..B...#.#.B##.#", ".###...B#.#####.######B.##..#..B.###.##..#..#..#..", "..##G##G....G.#G..#D.#..###...#.D.#D.###D.####..##", ".#.#.#....D#D.C##..##C#..####..C.C#.#.C..#####...C", "##A.E##.##EE..##EE#.E##E.E#.#E..####EF..DA....A..#", "F#D#DD##DA###A#AA.#.##..F.###...##.F.#..#..#.F####", "..C###C.#.####.##E###.##...##.E.#.###E....#..F#B##", ".#..#.#B##.#$#######....A.A#A..#D.######D.B###B...", "B.....##.B.B.B.##...#B#.B.B..#.##.BBB.#..B.#.C#.#C", "...##.C#....#..A#A.###...####.A#.###A###.##.AA##..", "..AA##.#A....A.A.#...###.####A.#...##A##A##.#.###.", "..##AA#A..#A.#.A#....A....##A##.##...##A##.#E###.E", "#.#E####EEC#####C..C#CE##.#EG.#.#.GG.#FF##.#F.#FFE", "#E###E####.E#.#.##.#E###E#..#.#E#.#E.#...E.####.E.", "..##.#.E#E...#..E....#D..###.#.D#.#..#.#D.F.F.F..C", "C#...F.#.FE#C#####.....CC....CC.#..##.##C.#.##...E"};
    vector<int> trap = {100, 28, 32, 91, 55, 20, 76};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> maze = {"#A####.F...##B..#.B.A#....#.#......#B###.#.#.####.", "###F....DD###.#F..#.#...#.#.##..#F....##..#...G.#.", "#F.D##..DDD....##.D..D#DF..##...#F......#.F#E##.#.", ".#.#.E.#..#...#.##F#.#.#.###F##F##..#####.#F..#.#.", "##.#F#B..B..D###D#...#.D.##F#F####CA.#...###A##...", "C.#B#.#..##..B####.#..##.#.#.#####.#...GD#.DC##..#", "##C###CC.#C.##...##..#..##.##.E..##.#####....##...", ".###EE...##.#E##..##D#D.#D#F###..#..C###.#..C.C...", "A####.#..A...A#.#.###.#.A#A####..####.#BD...D.#.#.", ".#..E..CC.#.C#.#.#.C...C....G#..GA..##.####.#...#.", "####.A.#..AA#..###.#B#G.EE##...#..#G#CC#..#.....#.", "C....#...#.F#.C#C###.#.....F#.#..#..#F#...#####..#", "F...#C##.#D###.#C#..C...#C...CD.D...D#.#D#.F....#A", ".##AA#G##..#GB##DD#.....##.DD##..#..AA###.A..####.", ".##.A...#.A#...#..#GE###.C##.#.#.#.F.###......####", "###F.F##..#####.......##FF#F#E#E.#E.#...##B##B####", "##..#B#BA###.A..#..#A.####.GDD..####DE##.#.E.#####", "#D###.#.#.##D..##FB#.E##ED.##..D##.####.#....#D#.#", "D#..##.#####.BA.###A#B.#.#.....##..#.####.#.#.#B..", "BBB#..####..D#..#.##.#..#..#...##...#..##.#D.##.A.", "..B.BD#E#.#.E.......E##....E..#..#CC.C#.###.#.#...", "####CC....#E#.E###..##E..#EE.####.#....#.DDCC..##.", "#....#.##E.#####..####..E#F##.#..F.##A#..#..###.##", ".#..#G#G.#..#.#G.G.##.##G#G#.####.G..G#..G###..#G.", "#G###.#...D#D####.F####..#F#A##.#.G.###D##..###A#A", ".##AB####.F..#C.CF.#.F##..#.AAAA.BBB.B.##B#..##...", ".#.#F#...C#G#.F#.G##G#.##.##..####.GG.#.GBB#.###.B", "...F##.#.#.#.FA.#A##..#..B#A###..#.##..#..#.#AA.#.", "##.......AEEE#.#E..#...###B#.....#.....##.#..B#.BF", "...F..#..$C###...G..###.G##..#..G#....G.#.##EE#B#.", "FFFF.G.F.#.F#..#.#..##C#.#..A##.#A.##..#A#..A##.A.", "B#.B.#F##.A...#A#DG...G.#..E##B##...#.#.A#CC##C..#", "##D..#F.G####..G##G..##.#######GG#..#.GG#.#A#A##.#", "#B..#.#.#..##.#G#..#EEE.E.###.###EG#.##..G###E#E..", "###.#.ED#..DF###.#.#..##.####...##AE###BB##..#.B#F", ".#F#.#..#..#####CC...##.C#CBB.#...##B#..D#AA#A..#.", "...BBFB.#B..B#B####BG..#.G.#.##.###.G###...#GA..#A", ".#C.CA##E##EF#DF#E.E.###E.#G..CC.#..##..#A.#.E##EE", "..#F#.#.#....#F##F#F#..##.###F..#..#.G#####GG#.##G", ".#...DE#..#.#.#####.#.###D.#D.D.#....D#B#B#..DA..A", "#..##.#.###A.F##...#.....F#F#....F##F#.###E###ED#C", "C...C#F.#A##.#..#..#....#F#B#..F##F.D..###.A###A.A", ".###..#D..#..##C.#....##..##......###E.#..##EE.F##", "..F.#D.#...##D#..D#..#.F#.C..##..#..#....C..#B.#..", "#...##...B.###..#BF#C..##...###.##.##.GBB..#....#F", "F.#.##.##.#..C..#..E.CC#...C#G...#.G..G.A..F#F.#..", "##..F#.#....F.###D##.#G.##.###..##GG####.....##GG.", "##..#....#GG#G.G.F..F#..#....#.##..##.#CC.#.BA.#.#", "#.#..##D#.##.#.##.#.#A#.C..####.....#..#.###C.#C.#", ".#C!##...C###.E...#.#..###...E#####E#.###F#F.###.."};
    vector<int> trap = {14, 22, 100, 34, 15, 33, 42};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> maze = {".D##..F#F..B#ED#...#.#..D.F.#.#.C#G##...##.F#B.#AE", ".#.##.#F.###.C.##.C.#.A.#.B..#.#.F###E....#..##.##", "EC#.#####..#.##E.##.AG####A.G.###.##..######C##F##", ".#.#A#..##.CC#B#.##....#C#.G...B##..#..##B##.E.#C#", "..A#..#.B.####C##C..DA#.!G#.#...GB.#A.#####D.A.#.#", "C.E##.D#...##...#.#.GB####.D#G#.####G#...##..#B##.", "...F..D..##.#.##.#.##C#####....#...C#.#F#.B..##.##", ".C####.##.G..##....#E...F###E..CG#####....G.##.###", "..D#..#.F#FEB..##.###GA##...#.....#.##C.....##.#..", "...#.E###E..C..#...#.#B##.B.G#..#...#DF##..#.#BEA#", "##C.#D#C##C#.B.#BE#..CC.....F.#.#G...#.#GE###.##.#", "#..B.##..#C....#.#.##...F.###BF#...E.E.##..#.##G.#", "CC#........#..#.#.##.#D#.#DB.#..C...F#.##.#.B#..C.", ".#.#..##..G#.GA.G..A.AAB###E#C.G.##..F.C..D.#..##F", ".#E#..##..G..#.#.###.#B.##.B.#..C##...#..F##B#.BDD", ".####...##D...#..#F#.##..E#C###...BC#.#.#D#A.#DA#G", ".E######..G#.....AF#.##E..C.##CC####...G#....###E.", "#.##.###F.#G#G.#.#....##.BE.F.DC#.#...C####C....#C", "..CC#.#.#.G#A..#..G..A.C...##B#C.#.#..#..ED.#DGG##", "BB...D######DD..AE##C.##GCG.###.B.F#..##C...A#....", "...#.E#.....A..B#.#G..D.#D#E#.#.#.####D###G#F.....", "##C..###..###.##....#F#A##.F..B#ECBFD...G....G.DC#", "#.#.###E#G##DB.#C..####.##.#..#.CE.#..#.##.A####A.", "##..F#.#..G...D.###.GA#.###.##..##.##.####...#.#..", "#G.#.####.B.CA#..#D..#..#.##..#.##..#.#.##.GA###F#", "..##.##GB..###.###.##.BB###..#####.#D.....#C##.##.", "GAFCE###.##.###F##..###EAB.D....#####E###.FC##..#.", "EA#.....#..#E.#.#.###...G..#C.#A.#.##C#C#E..##B..#", ".#.###..##.#..B.EA..##.#AE#...#.D..#E.##.DG#C###..", "A.BB..#D...#..#...##.#AE##B.#A...D##.##CB#....C.##", "#FB##.#AD#.##C#.#B....##.#.F.#####CBG.###C..#.#F#E", "..#C##.C#.#F###G#B.####A.#.....#.#.B##E..#G.AC.#.#", "...#.B.B..##.##FB....E.CC#.#B##.G.###.##D...#.###G", "#.#.###.D.G..#..####.#.#..#E#.C......DE#..G#A#.#..", ".FG.D##.####.E#####.#F..#F.#.##.DB#.#E##..#..D#..#", ".CA.....CA##.#.##...#.B#.#.#..#G#..###.#.A.C....#A", "GA..#...F##..ED#EC#..##..##E.#.###...#G#####.G#.D#", "#BFC#..##G.#..####.C.#BG.E#..#..E.F..#...##.#.#.G#", ".#.D#E##E..###.##...##F#AB.#A#.##.#E#.########.#B.", "#E....C.G.C..FG....C#D#.G..FF#.##....##A#BBBDC#B##", "##.######.#.#C.#DD#A.##.B#.#CC.##A.#.#.BD.#.#..F..", "#B..#.##CA.#..#..#..#G...#..#F..E.CD#.#..#G#..EC..", "G#..EBG...#B#.G..#BC.#.#B.#..D..A.#.#.#...AF#.#GB.", "A#..B#.##.....###E#####..#...##.DFBE####DEG#F...F#", "G..F##..A#E..###E###.F##EG###DC...#.#.#G.#G#...FBC", "###B...##.C.#.#.#.##.#B.#F...#..#.#.##.C#..#..#.##", ".EGFCC#.#D##.#.#.#.A####.E..C#.#.B..D..G#.##A#....", "...A....G......#.#.#A.#.##.B.##F..#..E.##.$###.#..", "#.#..G.##G###.B#G.#C##E.#.AC#F..#..#..#.#D.##B...#", "CB.A.C##C.#EBEG.C.BD...#....##.A#D..##.AF#..B..#.#"};
    vector<int> trap = {83, 37, 65, 75, 29, 30, 29};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> maze = {"DDCEFBCDDCGE#CC#ABGBB#E", "ACGD#G#BAG#D#G##DAGGFDA", "ACBDDAFCD##AGGGGD#EAAA#", "FBCACDCBCBDC#F##EC#ECBD", "DGABGB#ACDFGACBBBGEBBGB", "CC#C#DGBCCGC#A#BCDBAFDD", "C#DAA#DFB#CEGDDGE#GDD#F", "#GCD##CAA#AFCG#FG#GDGGE", "BBC#CFG##DFG#EEE#CECGDF", "DGCEA##CGEF#DFF#B#DFCC#", "EFGFBABBFBFEA#DE#BBBFFB", "CFAF#BGF#F#CFEBEABABBG#", "E#F#GDC##FD##C#FDF#FBAB", "B$#AACBDEDECE#FEFBE#EC#", "DCGDGBF#FEBBBGGEAFFBB##", "GCBG#A#FCF#AC#ECGCEAG##", "AGABECEGEG#BFDA#AAFGA#G", "DC###C###DGGGCGD#BBCAD#", "FEDGCADE#D#B#BCDE###FAD", "CDGBE#F#D#BFB!GDF#FA#GC", "CEFACADGCDDEB#BBCBCF#GE", "E#EDD#CCG#FED#AGEEBEBEA", "DGDGBECF#DAABADCAFDBFD#", "ACCGFEBGBC#AFB#GCFA#EGF", "#EE#CAF##BCAGACA#ABDCA#", "AE#BGCGGCGFGGEFGBECBEEA", "ADEAGGG#DD#CE#FCAAGD#BE"};
    vector<int> trap = {7, 50, 41, 17, 79, 96, 83};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03871078500000001;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> maze = {"GG.GGG#GGGG.EEG#.FFFFFF.F.BB.#D#GFFBBDD..#DDE..ECC", ".#CCCGF.EEEEEE.E.#EEEBBBGAGGGGGGGAAACGGGG.FFB#BBBB", "B#CBBDBBAGG#.E..CCAAC#G#G.GGA.AAF.FFFFFFAFFF#E.BBB", "BBG.C#DCCCCCCCA#.BBBBBBBAAA.AAAEEF...FBBBBB.B.#BBB", "FFFGG.BBBFDDDDDDFFC#CCG#.BB.B.BB#BBBCBCCCG.#.GEAA#", "CD#G.GGG#E.BEEEEFA#AFEEC.C#DFFFC#EB#B#BCCCC..CC.CC", ".CCBEGGGGGFGACCCCC.BBDDD.DE#.EAEEE...GG#GDBGCC#.DA", "AA#FF.FGCCCEAAADDDDDACCCAAAGGEEEEDDDA..A..A.AAAAC.", ".CCGGG#GGGDBBD#DDD.DD.DDD#...E#CGGCC#C#CC.B#C.C.CC", "CCGAAAEE.E.EFF#FDEEEEECCC###C.CCFFFFGG.#GEGGGGGGAA", "DFFFFFFFFFFFFFFC..CEEEF..BGBBBBEEE.EE.#EA.#D.FFAEE", "E#EEEEE#DDDBBD.AC#G#AEBBD#EFFFFBBDDD.GGDDFDFCEEEEB", "GF.FF#C#.CCCA.A.DD#D.DDD##D.EABBBAGGAAE.EEBCCCG.GE", "EEECGGGGGAAAAAA.AAA.AAEAAAA..#EEDDGGAAA#G..GGGFFF.", "BBCCCCBBFF.FC.C..CCCC.CCB.BBB.BFFDDCCCGGG.EEF#..FF", "BBBBG#CCC.DD.DD.FF##.FFFFD.DDCCD#DFFFF.CEGADDE#EED", "DC.#D.D.D.CCCGG.#GG#GG..DDEEEEB#EECCGGGGGFFFBBBBB.", "BF.BDDCCFFFC#CFBCAD#DDDDDDDD.AF#.FEE...E#FFAAA.AAG", "#EEBDFD.DCCDDEEEEED#DDDDGA#B.BCE#.AAE...D#GGG...B.", ".FFF..##..CEAGG.GBFFFEGGGFFBAFFFGEDFFFFAAA.DD.GGFF", "FFFFGGGGEEE#.EEGGE.ECC#CC#CCACCG.B#ECC.CC....GGC.C", "#A#FGGGGAF#D#DDDDD.DDEC.CCCCGAAEE.EEEFFG.DDAAA.AGC", "CC.CAA.GBBB..BBAAA#.AEEE#EE.EABBFFE.E...EE.E#.EECE", "EE.AEECFAB#BBAA.AGGGGGGGG.A.FFFFFFFEBBCEED#D.FFFEA", "FCCCCCE#EEAA.DD.DDD.DBB.B.BBBBEBBBBDDGF#FFFCC#CCEB", "FBBBBGGEC.CGG#GGGGGFFFBGGG...GFFF..FEECC$DDFDDD#AC", "CCCDD#.#DFB..ADDA#AFGGGGAAAABBDDDDF..FAB.B.GAADC.#", "CGGFF#GEEEE.ECEE.GGGEEEEADAA.AAAAAAFFDF#FF.#FDDD.D", ".DDCC.CAAA.AAAA.AAAE.EFFD#GGGDDAAAABF.FFFBBB.G..#G", "GEEEEEFFFDE.FGGFFFAGGGCE.EB.BBBBEEACCCCAAA.CBF#...", "FCCBCDDAAAAA.AEEEEGGGGG.BDDD.DD.GGCC.G..GGGFG#C.CC", "CCAAAGGGGFFFFFDD.D.D#EEEEE..EE.EEE.EECGG###GGGGGGG", "GDGGE.#DDDDDDBGCCCCAFF#FA.AAAA.AAA#B.BBBBBAA.BBBBF", "FAAAEEEEEEEEEEAA.#AAGD..CBAAABBBBBB.BBCCDDDDFGGGG#", "GGBGGGFEGEFF#FFFF#F.FFEEE.#..EEEEEFFDC##EFAAAAAA.C", "FFFFFEEEEEGGGGGG.GA#AAAEEEDDDD.GGGGGGGGGG#GGAAAFD#", "CCBBDBBGGC.C#C#GGGGC.C#CCC.GG.GGGGGG..#GGGB.B.DD.D", "D#D.DGG.G.FFGGE.E.#.DB#.B..B.E..EEGFFFG#EG.FFFF.FC", "CE.EEEEEGG..GGGB..BCC.CE.EFFFAADAAAAAAFD.DBBBBCCCF", "F#BDD..DB.BDD.EE......EEDDGEEE.FF.DFFFFFFFBBBB.BBE", "EEEEEE.EEEEDDDE..CCDDEEEEECC.C.CGBBBE##GCEECFBB.DD", "DDDDDDBB#DD#DDD..A..AFF.FF.F#GEEECGGA#.GG#GGGG.CDD", ".DFF.GFGCFEEAAAFFFDDDDDC.#GBBAAGGGGDA...DD#A#BBBFG", "GGGGGGD#DGGG.G.GG..EEE.EAEEE#DCA#AGBBCCCC#CCDAA.AB", "BFE#FBG....GGGGFFBBBF.G.GG.GGGGGFFFFAAAGAAAAAABCGG", "GGC#.#CC.CEEF.AA#CCBBBDAAA.AAF.FFDDAE#EBBBBB#GFFF.", "FFGGBBBB.BA#!AE.EEG.C.G.GG#GGE.EEEAA..A.EEEEEEE.EE", "#DDDDDCCCE#EECBB.BAAAAAAB.#BBBBBGGBBF#FFFDDDDDEEEE", "EEED.DD.DGC.C.C.D..DGG#G#AAGGAAABB#BB#BA#.#AAFEEE."};
    vector<int> trap = {47, 30, 17, 3, 86, 68, 22};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.28938;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> maze = {"ABBDGCFFE#######.C#FFF##BDAAADD#DFCCD###A", "AAFF#F#F#EEACAD#.DGGF#DDF.BBFC#D#AFCD#BB#", "EE#GDAB#G#AFB#F####AB#D#DECC##.GD#E#FF#F#", "FCC#EGF#C#AG###GG##F##E##EFFAEA#FA#EEC#DD", "AFFG#AAG#D#E.EE#E#ED#B.BCEA##A#.ACG###B#D", "#E#C#C#F.FD##F##GAD.DDGA#A#ABEBBF.####E.#", "GDEFFGE#A#G#CCCF#D#DDD#GBEGAGG.G#G#BE##E#", "AC#####E#CFB#FF.###DDF#.DDDFD#DDDDB#EFEEB", "#BGE#DCE#AAED#DF.EBFABBF#BEDBD##D#DBFD.EE", ".#AA.ACBCFC##B.#.D#B#GCAAG#.#CA##GG###F##", "BDD#C#C#ACA##A##AF#F#.F#EECGDBF.AF$D#FGGE", "BE###EEEF#GCC##GAEF.##E#.##FGGBB#GCBE#A#B", "CCFED#CEEE#G#GC.E#EEDC#ADFFFDB###B###BBBB", "#ACAA#.#FAABBBBDAAFGGDDCF#F#DF#DE.E##E#EE", "E#EBBGFCCCC##CA#F#G#D###E#C.FFB###A##DB.A", "C##C#C.CC#.AG#EECDCA#EECB######GEA#E##A#C", "##BAEE###G#GCCEEF##CBB#BEB##GC##GAA#AAAA#", "AA##A#A#FB###EDG##.E##D#GE#CD#F#F#.G##EC#", "FAE##.EC.EA##CCCC#E#E#EF##!#ED##D##D#FCD.", "AGC#E#FG#A#FDDBF#F#AEEFFE##F.BBB#.#E#D#G#", "AAG#G#E###B##C###CGCEF.GB##BGFC##DF#B##AA", "ABAAA##ABBD###CCEEBA#D#.FGCFE#F#CGCGA.CCG", "E.DD###DG#AGADF#CCCD#B#ABBDCGC####F#ABB#C"};
    vector<int> trap = {94, 95, 20, 35, 78, 60, 19};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> maze = {"DDGA#AAAA#ADDBEEEFA##AAAAADFF", "FDDAA#AG#GEEDD#DEEEEGDBBB##GA", "AABBBBBFF##FGG#GG##.##.G#DFCC", "A#ECCCCEEEEE!#EEE..EE#GGGFE##", "GAD##DBAAFFGGGGGCC##C.C#.#CCC", "C##CCEB.BBCFAACEB#AGDAGGGGAE#", "EE#G##ECCCCC.CCCCC#C#.FFFFFFF", "#F#FFCC$#C#C#EEGE#EA#FF.GE.BB", "AGGF##GC#CCG###GFBBB#BBC#C.CC", "C#B#A#AA##DD#DF#F#CA##AAEA#AA"};
    vector<int> trap = {53, 98, 20, 45, 18, 70, 32};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5439999999999999;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> maze = {"#..#.G.#.DF.#...AA#..###CCAAA#.FFF.E#CCD#.", ".#.D.A..#A#...####.###.#.B#E.C#B##A..##.B.", ".A.#C##A##GAF#B#A..#.A..E.E#A###.ABFBD##.#", ".#.E#.#.B.D##E##A#D.#.FGGC#..#.#AF.D..##.#", "GD..#E#D##GC#.DB..G#.#G#G.###.######...$B.", "BB..FG...E##.E.F..#F#FF#..G####D.#D#B.AB.C", "CE#.#.D#.E.#.C.##..CC..D#.D.CE###B####..#D", "EF#FF##.#.F.CB#..###F#C###.##B#.B#.B.DC###", "FC#C.F#CB.##..EE.DA.#.##C.C####.B.F#EGAEA#", "##F.##F.##.D#!##G#G..#DDGF#BA.B###B##EDCCB", ".EEFF#.#..##B.#BAAC.CCA.#.E#.A.#.BGD##C#.C", "#D##G....CA#A##.AA.#..E#EF.#.A.##FE#...A..", "AF##E#A#AB##.F.#E#.CC##..D.DF#E.#E.##.GGB#", "D##.#.###.E.D#..###E#EE#D###.F.G...A#E.C##", "#F#BECE##.B.G..AB#A..C.CC.B.A#B.F.B.#A####", ".#D#D.#DG.GGC#E#C.###.##A.#...#F.CF..#.F.#", "#C..#C.##.###FFAB#C..#G.G#GGA##AA#FE#EA#.D", ".#.#G#.CFA.#FC..###D...##.FD.##FFD#GB.##..", "D#..EE##.G#C#####F.##F#.E##C.#.#A#.##G##GD", "GFD##..FEE##G.##AD.EC#CEDE#.F###AC.#.##CBE", "#.#GBE#.E#F...#..#.#.###.#E.D..A.#..CCB#.#", ".FC#A#G##G.B.A#FA#B.CD....D#.#.EE##.A.#FD#", "#F#.F.GD##...GG.EF..#..F..##FF#.F#A.A.A.#.", "A.#.#CFDBF#.B..##B.BF.F..G##.####.G.A##.##", "E.A.#GC..##BE####FGBB#.BC#G.GF.A.##AC.G#G#", ".#F#FF##E.F#DB.D....CF#DG##.C##DDDE#.D.AF#", "B##BA.EEEG...FFAG#G#..##.#DBEE..DD#D.G.C.#", ".ABG#...###G.#.##.#...#G.BF.####G.CG##F.B#", "#FF.#A#.AG#G#####C..#.CA#.ADF.G#.G##G#C.#C", ".###D..AA#.#.B###D.#.G..#G.GBF#..D#..#..#.", "##DFB####.AC.#F##....#.#.F..CG#.#F####F#..", ".###.#C#C.BB###BB#.##.B#B##FG#.C##EC#.G#B.", "CB#B...B###.###.E#..#..#G###..G..#G.C..###", ".###A..A.#B####.AA#F.#ED.G#GEA#F.D#D#D####"};
    vector<int> trap = {93, 49, 48, 3, 82, 6, 89};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004787825328;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> maze = {"#DDDDDD.G.##C", "....C.CC.CC..", "C#C.C##CCF#F#", "#FFFFCC.CEE..", "EEE#EEE#FFFF.", ".FA.GG.GGD..D", "F.#F...F.FF.#", "FF.#.FF.E#.#.", "EEE...#..##E#", ".E#.EEE.##E..", "EEE.EAA.AAA..", "#..AA#..AA#.A", "#.AAFF##...F#", "EEE.#!.A#.#AD", "ADDD#D#.DDDD#", "##.DBB.#GD.D#", ".DD#DDD.#D#DD", ".DDD#DD#D#D.D", "#AF#.G.##GGG#", "G#GGGG#G#..F.", "EEA#.#AA#AA..", "AA#AAAAEC.##C", ".CCC.#CC#C.CA", ".G.G.G#..##GG", "#G..#GG#GGG.G", "####.G..G#...", "G..#GG....GEB", "#BB#B#B#B#..A", "AAAA.DD#D.D#.", ".##DD#DDDD##D", "D#D.D.#DDDEE.", ".E.###EEE.E#E", ".#.E.EEE$..#.", "#...###.#.E#A", "AAA.A...A.##.", "A.A.#A.G#G.G#", "G.G.GGGDDDDDD", ".#D#.DD#.##D.", "AF.DDD.D.C#CC", "C##CCCEEEEE.#", ".EEG#.G#BAAA#", "AAAA..A#A.A##", "AAG#.GGG#GG#G", "G##G.G.GGDDD.", ".DD..#DDD.D.D", "..DD..###DD##"};
    vector<int> trap = {77, 38, 51, 56, 12, 68, 28};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04517567999999998;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> maze = {"..AA#BF#EEEGEC.D..DAADDEAAAB.EDBBDDD.E.BBBFAA.", "BB#D.DDDDDDE#CGGC.CGGGCB.BAA.ACCD#DDCEBBD#CD#A", "AAG#.GCGGCFE.A.BEE..GDGGFG#.GFFG.GC.F#DG..CB..", ".#GAAGG...GG.#AD#DDC.#C#CDDDGG..FF#.F#E.EE.EEE", "EEBBBBBB.B.#.BAAA#AAFFFAD.GG.GF#BB#E#F.#D.ACC.", "...CGG.GB.BAGCCEAAFGGE.EAA.CC.F#AAAAGAA.AA#B.D", "CCA#.BGGFBE.EEFF.FEBBBBE.EEE#EEFDGGG.AAA.AAACD", "A#AAFFEEDD.DDCAA.ADD.DDDEEBCF.F#DEFGA#CCCCFFEB", ".DAA.A#AAA..#.AAGGCBBFBBBEEEEE.CCCDDFG..#G.#GE", "CE..C.CF.#.F...FFBEEE.BBFFAGGGF.E.D.CE#F#ACAA.", "#BBBBAGAEAAAAAA.A#AACCFFAG.GGGGGGG.AF.FBCDDEEE", ".ADGG#GFFF#E#FFFFABAAA#ACC.CCC#AAEEE#AAAG.EE#E", ".C.BEEEEA.AAA.BBF##.AA.EEEAA#D.D.DDBEEEGE#C.#E", "EEF.FFB.BAE#DBCFFBC#F#.GG#C.GEEECCG#GEF#.#BA.F", "EEE.GAAAFCCBB#...CDEGG.#GGAEAA#B.GCC#C.CBEEE#F", "F#FFCCEEE..DC..CG.GD.#DDCCDDA..EE.E.#C.CFBF#FB", "C.A..DDDG.GGGGBDDEEEAE#A.#.ADDGGE#GG#.F..FCCAE", "DAEE..A#CCACCE#D.CBBBG.CCCGBEGG.GABEEB.BB#BEGG", "C#CDD..#.D#DFGE.##EEEFFFFAAAB#GCDB!#AFFFB.#DDF", "A.AF#FFFD.D#.BBAC.CAFFFBBFFFC.AAFFF.FBAEDD.GGG", ".EEBDCCCGG.EFFFGD.DGEECG#D.DA..EEB#BAA#G#BEBBE", "FF#FCABBBB.CC.FFEC#CD.GF.AEAAAAGA.EEBBAF.FBFFE", "DCD#GC.DFDE##GFFF$AAFA#CDFFFF.FFFFAF..#EEEE#DD", "CCCC.CF#EEEEEAFCCGGB#BB.B#BGGA.ACABFF.F.EBBB.F", "GDD#A#AEA.A.CEBBB#GGE#EEE#DD.A#.ADC#F#FBDADD.A", "#AE.B.#.CFGAAEAA.#B.BBB.FF..#.EE.E#CCDDGGEC#.C", "C.DD#.DDDDDEEECB..BEDGCCCE#EG#C.CC.#E.E##EC.AD", "#..DF.ABBBGGGGGA#A#.#AF.F#FFFFE.ACCCDC##FFFFFF", "F.EE#FFF.DFFDCCGGGEEDC...#BEDDC.FA..AAF#FD#.DD", ".#CF.FFD.DDDCA#EAG..DDD#A.AAB.CC#.CCC..DC#B.#B", "EEEEDF.EEAADD.DDDB#BBBAAA##.FFF.AAAEEE.#EDD.D#", "GFE.ECCDDAAAEBDDDCCE#EBBB.AAC#.CCAG.CA#.AG.ACC", "DD#.DDFDGD.GCDDBAAABBFG#BBEEEC#CE#GG#GGAA.#B.G", "DD#FECC.A.AGBBGCCC.C.C.FAA.C#C.BB.A#AGA#AAABB.", "GG..DCCCCACAF##C#BDAFF.EC#ACAAD.FF.BEDEE#F.FGA", "AA.AE#.E.EEEE.DG#ACCCCB.CGGG.CGGGCF.F.FF.FF.FF", "AA#A.AGGFFFFFFD#EFF#.F#FD.GGBEE#BBA.AAFCCC.#C."};
    vector<int> trap = {18, 24, 58, 30, 63, 42, 50};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.30856;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> maze = {"..G.GCC.D.##..A....AFF.F", "FDD.D..D.DAA...FF...FC.C", "C.C...C.#..CCCCCCCFB....", "#.EE.CGEE.....EAA.E...EE", ".#E....E....EGG.BB....BB", ".FC...CA..AA.F.DD....DD.", "..DA..G.GEFF....FF.F....", ".F.FD...D..DDDDB.F.FF.DD", "DG.G.GC.AAG..G#G.CD.D...", "D.D....C#FFFFD.A.......E", "..E...GG#.CD....AA.A.A..", ".A..AAAA....A.A....BB.BB", "C.C..C.C.CCC...FC..CC...", ".B.BB.BDD.D..F.G..GGGG..", "#GGGD..D..DD.D.B.B...B..", "F.FGG.GGG..G.G...G..GG..", "G.F..F..E.E.E.E.ED.D..FA", "BBBEE..B#.BCCCCCCCCCCDAA", "..A..AA.AA....A.CD.D..CC", "CA.DDD...DC...C...AAA.FF", "FF..GC.C.C..C.....BB.B..", "BEE..BBA....AD.D..DDCC.C", ".C...CC........C.C.CCC..", "..C.#.F.G...#D#...C.....", ".DDD.DD.DD.D...FF..FFF.D", "DDD..DD...GG.G.CCCC..CA.", ".G#.GBEB......B.B#$.EF.E", "..E.#E.G..G#GG.GGG.A..D.", "FFFGA...A..AA...!#E.B..#", "BB.......B..BB..FFF..FD.", "A..DD.D..DD..DD.#.D....D", "D.DG...G..G.ADDDD.D..D.D", "....BCC#..CC#..D.CC.....", "C...C.CBFDD..GGG.G..G.B.", "B.BBF.FFF.B.BBF.FFDG.G.A", ".AA.AA.A.A....B....B.#F#", ".FF.F.FFAAA.AG..GG...G..", ".C.CCCCC..CC.F.EE...EE.F", "..F.D..D.DDD.DDD...DB..A", "AC.CF.F#.F.C#C#D....D..."};
    vector<int> trap = {25, 60, 54, 6, 38, 7, 40};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8741999999999999;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> maze = {"EDBCCC#C..GEEEEEDBD#FBE.BAGE.EA#..AAADEF#FDGGCBBF", "..BFFA.BBD.A.#E.G.F.BD.A..DBDFCGCCD.EBF.A.AAC#CCD", "DGGG..DA.!GGAGDAEEECC.DEBBF..A.#F.DEGG.EEAA#.FFBB", "AECEEE.DFDBBDDCGGE#B.BB...EAA#D..E#EEGDEGBAAAB#DD", ".###DDD#C#CCCA.BBDEC.C#.DBF.CB#EGGG.FDF.FACCB..BB", "...$C#A.E#AFDGGE#GAE#C.CCFEEFFF.D.DCC#GEC##C.C.#.", "CAGG#DBBBBB.BB#D#DABEECCFGF.E.AAG#.CFF.##.#A.E#F.", "EDEE..A.A..C.DCFFFFGG.AAGGGFG..#..BFF.FGBBC#FFFFF", "BDG..#BEEEG#D.DDD.DDCBDEEC.EEEE.DEGFFF#F.E#EDD.DD", "AFD#DBDDDDD#FBC##C#CEGGBB.B#B...AA.AAA.G.D#D#DD.F", "E#E..B.AC.#B#FFFGDDDA#ADC..C.CAF.BFG#GD#EGGG.G#GA", "CCBBBB.EE..DFFG.GEFD.DC.G.F.G.FFAE.ECAAA.BEEE.A.A", "##FFCF.#A#AA#E.EAGGG.GDBBCCDDDFDCG.GAGG.D.#AEDGG.", "GF.FFFA.#.F.E.E.EF.FBF#FECCE.#E.E#.C#..F##CFEDCC#", ".DD.CFGAFD.D.F.EDG#GF##DD#FC.C#.GGDDCCF.F..FC.CEE", "AB.F#FFCGE.CC.C.C.CECC.CA.A#CCE..EED.#.GDB.CFDBB#", "BG.C.E.E.FAED..BBBG#GGA#..A.F#F#FCC#.DFEEEAGA.AG#", ".CC#AAD.DF.FFBA.CCDC.BAEACADFFFDD#FBAEFGGGEBGDBG#", "F#ADEGGGEFF..FDF.A.CB#A.AC#B.#CAB..##G...GGCCCEE#", "ECFEABAC#CFBFCC.#D.DD.ADDDCFF.CDAA.#A#DBDCGDD.FCB", "G.BECCC#C#EEBB.D.AEDG.BBEABCCC.CCC##GD.DACFDEEFCC", "#CGAAAADDBD.#AGB.BBBCC#DDD.DDABBBB.FBGG.F..GC.G##", "EBCCBAAEC##BFAA.E..GFF#FFF#BBBC.C#G.E.EFFFGG.#BAG", "AA..GFDGAFEEEBGGCBCAGBCFE.EEAEEBAGGAFCC#CCGGD.B.B", "AFEBACFCCFEGCE.EFF#FGGCCC.C.B#B.CAA.AC#.C.D.EEECE", "EE#GGEECC..C.C.CC#FDDFCCEEEG#GAAA#.BFF..ECCBECBA#", "FF.EEEA#AAGF.CCCDBBD.C.A.AGGGEGGC..CAGGGG#.CACFE.", "A.BDECC#C#FEBDDGG...B.D#DDDDDD##EEEEDGA...A..AED.", "EAC###G##B..#B.GECC#D#CDA.DECCCABC.FF.C.#..CCGC#.", "E#BBEBB.#.G#EBAG.FDCFC#.CB.BBBBAD.DBBCAA#EAA.CCCC", ".BFEFEEGE#.E.FEEC...EBGADCC.BDCGD.DD.EEE.FFB#DBFD", "CEBE.GG#..F.BD..BBBBGGDEEC#GEEBBD.FAGEEDA#.B.BF.E", "E.#EEEAAAAAA#EFDEF.AEEE.E.##C.CEGGGGC.GD#D.CEB#..", "B..FC..CEAB..BECC...CCA#E#E.EFFFE##GGCG.D#BBF.CDG", "DBG#EAEEEGAB.#B.#F#FFCD#DEGG.BFAG#E#EFFC.C.GD..#D", "GDA.AEEEEDBBGA#.CDA.EDAACCCFE.FDGE#E.EEEE##E..GFE", "EAAAFEEEFBB.GGFGGGEEE#EC.CCFGDB#A#GEDF.EBB.#.#.BG", "GAABG.GEEEGGB#CDD.DFFAAB.CA..GGBBGGGEAD##B.CGB#A.", "ABEFFFDB.##ABB.GGAAA.GC.AAAA.AGAGGCD##GGGAABC.AAA", "FFFBD.FF.AC#BG..BB..C#D#BAFC##C.#AB.DFF.FB.BCC#C#", "AF.#GGDA.CC.DCCEEECEGCCBBBBBC#E..EFCCCFAGGGDGA#..", "A.EE#AGCAB..FDFEE..E.E#EE.G...BBGGCAAGFFA..BA.ECA"};
    vector<int> trap = {4, 93, 74, 15, 25, 78, 93};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.21216;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> maze = {"GGGGG#GGGGGCC#D#A#AGG#G#B#BB", "BF##F#F#F#FFF#FFCC#GGAAAAFCC", "C$C###DCCCCCC#C#AA##AA!AA#AC", "#D#DD#D#D#DDG#C##CC#FF#F#FD#", "E#EEEEDDDDDBCCCAAA#AAAAG#BBB", "BBB#BBBBBBCCCAAAAAAA#GC##CCC", "#CC#C#CCC#CCCCCCCC##B#BBCCCC", "CCC#EEE#EFFFFFFFFFC#D##DD#EB", ".B#BBF#EEE####E#EECC#CEA#AAA", "AAD#AAA#AA#A#ABB#BFFFFF#EEEE", "E.##E#EEEGGGG#GGG#GG#G#G#FFF", "FEEEF#AAAAAC#CCBBAAAE#EAA###", "D#DD#BB#BE#####E#FFFCDA#AAAC", "CCCC##C#CCCCC#C#CC#F#F#####F", "FFFFF##FFF#FFFFFFFFFFF#BB#B#", "BBBB#E#ECC######CCGGG##C#FFF", "F##F#CFFFFF#FBFCCBGGGGGC#CC#", "CBBBBB##B#BE##EEEFF#FFCC#CBB", "B#BBB##BFFFFA#BBBB#B#BC###CC", "DDDD#CC#C#C#.#C#CCF#FFFFA##A"};
    vector<int> trap = {22, 0, 100, 64, 3, 46, 30};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> maze = {"F#G..BFFCD$#", "F.EEFC###GCC", "D.#ACAFF#FC#", "G##CC..G.EF#", ".G#AAEG#B#D#", ".C.CCC##C##C", "##AFD##D#A#A", "FD#DDD#G!C.G", "#FFEE...#D#D", "#DBG#D#DDD..", "D.CC#B#B#BBD", "D.DDDDF#C.CA", "A#F..#BBB#GB", ".AAFBAA.#BB#", ".BBGGG#DDB#.", "BB.D##A#B#BA", "A#.A.A.AA#E#", "ECCC.#CF...A", "#A...D.DG.FF", "CCFAEA..AA#A", "AAC###C#...C", "B..AAFBB#GB#", "####.D#EEE#E"};
    vector<int> trap = {5, 24, 27, 82, 80, 74, 80};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.024666408000000004;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> maze = {"AG$FGE#", "#AA#C.D", "G.AGFGF", "FFAGGF.", "F..FAA.", "AA#DE.E", "B#AABBB", "E##GG.G", "BA#AFDD", "DDFAAC#", "C!CGG#E", "C#..EEF", ".CEEBGD", "#DDFBAE", "#GFFEF#", "BDC#AEF", "BBFF#F#", "FGGEA#.", "FF#DDFF", "FC#GFDD", "DGECBDG"};
    vector<int> trap = {66, 52, 90, 95, 36, 2, 10};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.014994000000000014;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> maze = {".BB#....B.BB##..C.CDDDDE.E#E.E.EGGG.G.GGGG.FF.F.FE", "...EEEAAAA#.BB...BBBBBB#...B.B.BA#EEEBBBB.B#BBADD.", "DD.DDG.GGEEEEEEE.E.E.DD##D.B.FFFF.FFF.F.A.!AA.A#A.", "#AA.A.#AAAAABBA.....G#.AEEEE.FF.F.FFFF.C.C#.CEEGG.", ".G.GGG.#G.CCCC.#C...CCC.C#C.C.CAF...FF.F..FFF..CC.", ".CCDDD#D.#D#D.DDD.B.B..BBB.B.BBD.G#GFF#FFF..GGGDDF", ".GGGAA.AAFG.B.GG.GAAAAA.AA.A.A.ECC..ADGGAACC.CCB.#", ".BB.D....D.D.D#.DD..A..#..AA...A.AA#AEEE.EEEEE.CC.", "#CC.#C..CF.....FF$.EBB...G..G..GG#G.GBAA#.#.FF#F.F", ".FFF..F#.FAAA.A....#..AA.A.G...#.G.GGGG.DDEDDDD..D", "..DD..DA#E.EC.F#FF#.FEEG.#.A..AEE.E..E#E.EBBB.B.GC", "CC.CC.#EECC.C.CA.A.FFDCCGA.AAAAAC.C.CCCC.C..C...C.", "....C.CC.CA..E.A.E.E.E...EG.GGGGGGG#GGG.GGG..GGG..", "..GGG#GGG..ABBF.FF.FA.AFFF#..C.CCCC#C.#CC.C#C..D.D", "..BBBFFF....FFFF.FB.BD.DDDDDDD#.DD#.BBB..E.EEE..EC", "CC..C..C.CCE..AC.F#AC.GD##.D.DDAGG.GGE..D##DDB.B.B", ".BBEEBAA.AAC..#...DD.#...DB..DD......EEE.EEBBB.##."};
    vector<int> trap = {2, 26, 1, 18, 47, 91, 40};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.795564;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> maze = {"E#EEFFFFFDGDF##DCCFBBEAA.FA.ACFE.CBDGDE", "CCBF.FFAGA##EBA.GGC#AAFAEF.CCF#EDBDE.EG", "B.CDDDE#E.GGBEDAABEEB#BBABCCC.D###C.B#C", "CDDGAAGEFFFGAE.CFC#.A.EAA.GC#CBEEDBBFF#", "FFBAC#FAAAFDACBDAFEAAA..AA.B.#CBE.DAGAC", "EE#E#..D#FFFAA#FDDEE.FFADDDGGDGFAGEEE.B", "BFGGCADF.BDDDG.GG##AECC.CGAEEDDDBF.DACG", "##EFA#EEBD.C..#BGBBCDFFDFFAA.BAB...D#GE", "BEDGFCECBGGGAGAACCGCF#ACAAE.CD.GGG.#GCF", ".#GCCGB.CAD..B#FGD#GGCECADB.B#..DE.EGCF", "CBBBBB##.AGGDAFGG.DDB#ACEF.##GCCDDFBFDF", ".CAACCGF##E..AEBD.FDDGGF.AFFAEF.F..DDFG", "BC#..#.G.DFDBA.AB.#DD.GFDEFCC.CCCF.BA#D", "DG.BBBBBE.FEFEEDDEFFDDBCFFA#.AAEEC.DCFA", "F#.A#DCCGGGDDB.#F.BFBD#AG.DBFBFFE#GBDAD", ".#A##EFDGDAAB#BB#EBB.#DGFFFFDGECC##G.FF", "B..##EB#DDDDCFCA.GABBGEB#AD#DABB.EEFGD.", ".B#E#GDAFB.DFG.GBBGACG#ABCFBBAACCCC#GC#", "#BGCACDGCBE.B.BFFDG#DD#EE.B#BAAEE#EAEFF", "CAG#F.#AFFFGAF#BG#DAE.EDFB.CFD.CGGB##FA", "AEA#AEFCEFF##..FEEADDA#FEA.BDAACC.EDG.#", "D.F#F.F.B.EDDDB#AF#..FF...FBAFAD#E..EBB", "ABFCG..GCDCCCC#C#CEA.ADGGFE.FAGGEGGDD.F", ".EBEA#..D.CFACB#.AGEDCAECBECFG#G#B#B.A#", "AA#E.GG.AB#B.E.#.EBBF#F#EEEEBGAAG#GB#FA", "BGGA#GGBBEBDC##EE.AEEEEEE.EG.CDG.#A.G.F", "..GGE#ACFF.BAD.BA#B#BGG#CCF.#FAAFCEB..B", "FFDDGGGEGGDD.GD#BB..G#ACA.CDDDBAB#BCEAC", "##DE.GB.G#.GDEAFFG.BAAAFCBEDBCDDAGC##CC", ".DEBGDDEF.BDGGBB#.BF#DADBDBBB#G.CBGAFFE", "CCF..FCFCCEAA.DBCCBFFDBEEAA...AA..FFDDD", "F#.DDEEGFFAEEEBB##DFCDCC.E..FB#DC...EGG", "G.BBEB#BFD.C#F#BEEBC#DBFEABACCGCGCG#CGG", "CD.CB.AACDDEE.A.FFAAB.CC#CAAF#G.AAFDECG", "GGE#GD.DDDGBEE.FBE#.BAA.AGGDCEAG.GDBEC$", "E.AC#G#CCBDF.GBBB.DDFDAEA#BGBFFFDEF.#F.", "##E#.DEDCDG.GDF.FDBEEG.EDDDDC#CFEFGDEBA", "CABGG.G#CCCAFF.GEEDE#CFE..FBB..AAAACCEE", "BC#.#DE.FFDEBBCDGCFAA#A.FDEDC.BFEBBDBEE", "E##EEDG#BEBBEF.FG.BF.A#AFAFGGFEFCCGCFDD", "B.GGG#CF.CD.#DAA#CFEBE#EEDEEFAECBBFBDGA", "EDEEEA..GE.BBECEEB.C.CFCCACCCE#D.##C.CC", "GCAGCCGA.C#A#BBB.AF#BB.FCFEEGF!BDDGFF#F", "FDACCA#E.DDFF#B.GFFFDFFF.FA.AFFGD.DA.AF", "DDFD#AD.BBBBFFCBBF#BA..EFFGEBBAFFG##FF#", "#BGBB.BFGGGA.AGCAABBCC#CFB.EDFFAEBG.A#.", "DBDDFBF#E.DBEEEBGA#AEG#E.#CCE.ADFEBGBDD", ".F#FBD..G.EEGEE#CAECF##G#DDGFD.E.EC#E.B"};
    vector<int> trap = {68, 32, 58, 3, 61, 92, 59};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10804248000000001;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> maze = {"B..E#..###.C.C.B#E#.##G##D", "#..B#.G.E#..EA#B.#$DF#.EGG", "#.##DD#.E.F..EFD#B#.D.F.E.", "F.BEA.#.DBEAA.G.DD..#.BA#F", "G#.##FF.#D.CCA.DDEDBC#E#.D", "DF..#CD#CA#C#F#CD#..E...#.", "AGAD.A#CFAE.BF##C.F..#G.A#", "#..#..F...#.#FCEAEE#A.#.BB", ".FCB.D#.G..#G##BC#..C.EA.G", "E#....D#FB.F#FCB..#.G##G..", "E.DDF..E.#.C##A#..#....EA.", "G#.#.#..G#C#E.A..#.#B..DAA", "#AA.B.#D.EAFF.BE.G.##BF.AF", ".F.GG....##.F##F#C#G.EB.#.", "#BF..#F.C#FFBAG##BC..G##GC", "#..E.F.EB..F...D.B#BB.#FFA", ".#AGCCC#.E.CBA.DF#BBA.CF.C", ".#...#BDECCCB#D.E.#..C##C.", "A##..E#E.D.DB.FAE.F.G...AF", "FF##B.B.#FC#GD#.BDA.EFGCC.", "AAB...A#.F#.EA.D..#.C.#.FD", "EFAC#D.DAC..GC#EAE#..#.D##", "CEG..D#C..C..AF##D.#BGE.#C", "EE.D.G.BEBD.#B..D.A#!..E#.", "#AD.#BC..D.CCGBCE...#FE#.A", "G.G..ABA##GA.EAE#E..C.C.GA", "..AAAGB.#AA..##F....GAA.#C", "#B#.#GF..#G.D..B..A#ABF...", "A###A.E..#.DFB.##EG.GB.#..", "DB.GFF.#C.#AAFB#CG.G.GAC##", "#B#AGB#AC#C#.##..C.C..####", "CB#.C##AFE.AE.DFF.FAB..B.B", "BCGA####.DE#C.GGD..##AD.DE", ".BDAD#G##.B..#.FB#D.D.CGF.", "#.#DG..#..F.FC.#FE#BA#C#A#", "....A#F..E..CGFBGG.C#.##.C", "FE#.#G#.#GEAD#C.B.A#G.AB#.", ".EGGF..#.FABE#BD.#G.E..#.C", "GGG.#F#.#.FDE#.F...GF##G#G", "#G#FG#.#.E.ED#G.DGEEE.C...", "#.##.C.A#.AGF#..CDAB..#D#.", ".D..EACGC#BEFEB.GCG..GGGG.", "A##...CEAFA.G.FEE.G#..D..B", "FFGFE#.BDBBAGFCA#.D.GCEE..", "F...ED.F.D#CB#.EG##GDDD.F#", "..FC.B#.ABFCCEFDA##.G.G.#D"};
    vector<int> trap = {29, 56, 58, 29, 58, 57, 35};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09537571999999998;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> maze = {"A.C..D..G#G", "FA.F.FD#..A", "D.GFCCA.F#C", "CCFDCD.A.C#", "CD.$EFD..BA", "C.E..G#B.A.", ".#ACE..EB.A", "EED.GEF..BF", ".BGD#F.C.BG", ".AD..DFBAF.", "CF.EBG.E.FA", ".BCEE.F.EDA", "FAD.E.EB.EA", ".ACEEDE..GE", "E...#D.CCG#", "GB...C.AGGG", "GCF..#GE#EG", "BBBEAA.F.E.", "BDAG.GFDGA!", "B.C#.GGCFEF", "CFCEFFE...C", "....B#.DA.E", "FG...B.CE.C", ".EA..DEA..G", ".FEBFB.CCAD", "GD.G.F....C", ".E....B....", "B.CDAEE..D.", "..CGE..E#EC", "BBDFD..#GAE", "FA.D.BACDC.", "GD.DBG..C.A"};
    vector<int> trap = {75, 17, 35, 4, 24, 19, 72};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5109480000000001;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> maze = {"CEEAADEA..AE#", "DFB.A.ECGDFEC", "F!CD.E#.EDGDC", "D..EBCCCAAEEG", "B...B.GE#DBCC", "C.D.AG.EECE.E", "AGBC#DF.BGBEA", "..CEEBCD.CBFD", "GEF$GBAAEFABE", "E.CCBAEGAB..E", "C.AG#EFDDCDEB", "GEGDF.CDDABB#", "CDD.D.CFGAGE.", "GC.CFBBDCF.AD", "D#G.CGDBDC#GD", ".GFG..GB.BC.F", "##FAACCF.A#GC", "FGG.CDGD#.GB.", ".EFGG#GADFFF.", "AF.ADEEEEA#BD", ".DA#DAF.BAFA.", "ECA.ABAD#FFGC", "BGGG..BB#DA#.", "BCFAEGGB.A#B.", "AGCAC.#D.BFCA", "B.B#CAEE.CBCG", "DBBFEGA#G#FD.", "B.DDC..CEDGEB", "FBB.DC..GG.DF", "D.CBEB.FE..EF", "BFFADDFE.GC#.", "BA.EAA.#.G.CA", "BD#BBCCEC##GG", ".GA..#BE.FDFG", "AFCFGEF.BDB.A", "EG.G.GCCCBBEF", "DGEADEEFD.CCD", "GCF.E#..DFBEF", "#.FBGFFD#BEED", "FDFDECDCGD..A", "CEFCACG.GE.CE", ".GBFEFCCBB#..", "B.EEA.DDC..FB", "FFA.DD.C.F.BD", "G.GEEGABDA.CE", "FCB.FDBGDDAGB", ".ECADA.CG..FF", "AGCE..FFDGBCE", "EGFC.ADAE.B#E"};
    vector<int> trap = {74, 92, 21, 62, 95, 58, 5};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.31521000000000005;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> maze = {"G#EEFFCC.DD.C.AG.G", "GGBGEEGADCCCCCCD#D", "FFAA..CCCC#CGCCCCG", "EEDDFDFD.DDBBEEFEB", "BBBBFFFFEEEF..!CDF", ".FF##FFBECB##..BC.", "C.#AAA.GG.GBBB##FF", "FCF.FDCEBBFCCBBFFF", "DDDFFFF.DD.DDDD#DE", ".BBGGCCE.#EBB#CB.#", ".BE.##FCC#.DDDGCE.", "G..DDBA..AB.EE#..C", "CCCCEEEB..D##.DDDA", "A...A.AEEE#EE.ECFB", "BGGG..FDDDF.#.AAB.", "D...AGG#G.EDDDAA#.", "ABABF#C#.C.#FFFFDE", "AE.EGEFFFBBFFGGGAF", "DD.DBGAFEEAADDEFFF", "FBBFF$FDDBDDEEGCCC", "GDG##GEEEEDAEEDDCC", ".C.##EEEEBA.AA#F.F", "AAAAA.AAAA.C#BFD..", "DE.GGEEGDDDDFCB.EB", "FFG.FFFFFE.FG.G.DG", ".GCBCCEEE#EAA.D.DF", "FFFGFBAFE.ABB#E#E.", "#.EG..D##ABA.GBBF.", "FFFFACEDCAB.DDBDDF", "EDCA#.ABB.D.GGGG.G", "..G.GCCC.#GBAAAAAA", "AA.ABDDCC.GG.GCCFE", "FB.G..GCDDFFFCCC#C", "#B#E#B.B##EEA.#ECE", "D.DDCCA.A#..#AAA#E", "G#CAFFCEDDBFFB#DEB", "ADGGGADDFAABFFFF.F", ".#DD.FFCFFFFF.B#AA"};
    vector<int> trap = {50, 54, 12, 74, 69, 43, 85};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07152816000000002;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> maze = {"GGGCCAE.EDE.EE..#AAG.GGFCCGEEAEFA", "AAFFEBFFADC.EEFFA#BBB.ABBCABG$GED", "FFCCCFGGGGBBDDG.GAFFBEDCDEBCAD#DD", "DAAAAACCEDDEEAAA#DAAG#B#BBBCCGGE.", "E#GDAAACAAABEFEEEBCBBE.ECCCEEEGBA", "A.BBBACDE#EEEEEEECCCEBBBDGGGECEAF", "AAACCCC#CCG.GCCDBBD#DBBDGEEB#EBBG", "GAAAACDDAA.BBBCCCCGA.AAAE#CAAEEF.", "DAF.DG#EEGFCBBBCCACFF.CEFF.EED.GC", "FAGGFG.B.CCEEAEEEF.ACBBBBEEECCAAC", "GDGACGF#DGCAAAAFFFAG.BCEDDEE.FFF.", "FFDFFEEDAAGBDDDE#BB.#DDEBBEEAA.EE", "BBBBGDDDBBEGCCCGGBGGGCCCEEAAAAADB", "FFFD.E#EEEECCDBA#AAA#AB#..EECEFCC", "FGGGG.CCEAEEEEEE#EC.AABDDBBBCCA#A", "A#AAAAEAAEDFFDFCDDGEG.FEDDDDDAGEC", "CAFFFABBB#BD##FAAGDACCEEEEAAA#AAB", "AABCCCEEEED#.DDDDAAACCFFFFFFFFEEB", "BBDDD.D#FCCC!GDAAACDACCBBCGDDDAAE", "#EBDCGGGGGGEEGBGA##BGCEBGFDC.B#AE", "E#CCA..DAA.CC.BGBBAAAG.F.EEEEC##C", "CCAAAABFGAAEBBBAAAFFFBBAEAAAB.BBG", "AAADFCCCAAFG.GGGDDGBBBEEEEEEEEFCB", "B.BAADBCBGGECC#DCGCBFBFGGGEEEGGB.", "BECCFFAD.DD.DAA#ADDD#BBCDBBC.GBB.", "BGG.GCA.AEEDDA#AFBBDCCBBBAEEEECBD", "DBDDGCCCCGGDFABEB.BEG##FAGFGGE.ED", "ECEAAGGGEFEADD#FC.CCCAAAA.GGFFF.F", "CAA.EECC#CCCFDDDEEEE.CDFCAAC#CGGG"};
    vector<int> trap = {80, 97, 50, 47, 31, 3, 78};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03902018999999999;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> maze = {"AAA#CAAAAAAA#AAAA##GGGGG", "GG#G#GGCCGG#BBBBB.FF#A#A", "BB#BEE##EE#EE##EGDAAAAGG", "#B#GGGGG###GEEEEDG###GGC", "CC#E#GEAA#AAAAAAAA#F#FFB", "BBFFDFB#BBGA#CCCEE.E#AEA", "GC#FFA#ACC#CBGG####GF##F", "FFDGG#ADA#E.EF#BB.B#BAE#", "EEEE##AAD##DDDC#F#FF##FF", "#FF#FFFFGGGGG#.GGGGFFFFF", "F##FAD#DDD#DDD.DDGGAAFFE", "C#C##CCCCFCCA#A#ADG#DD#A", "EEEECCC##CEBDDCCCDDDD#GE", "EAD#GEEEEEEE.EE#C##B#BBB", "DGGG###GEE#EEC###C#.CCCC", "#C.CC.C#C#CDDDDEEEE#F#D#", "DFF#AGDDDGG#G#D#DD#G##CC", "CBEEEBBBFFFF.F#DC##CB#B#", "BD###GGGG##GGGGGGGEEA##A", "##AA#E##E##EEEE#EEE##D##", "D#G#BB#BC#E#ED.EEC##.C#C", "CCDD#DDDD#DDD#DDB#BBDDD#", "DD#DDED##DDDDDDDD#B#BBBB", "#DDDDD#DDA#AEE#E#E#EEEEE", "EE.EEEE#D#D#DE#E#E#EEF.#", "FFABB#BBB#GGBBBA#GGGGGGE", "#.E.E#A#AAAAA#CCBEFF#F#F", "##FFFCCC###F#FFFFFFF$#FF", "FD##D!##D#DD#DBBBFFFFG##", "G#GG#GGGFAGGC#GG#G#G#E.E", "E#E#EG#GGDGGGDDDDEAAA#E.", "E#EAAFFFFF#FFFC##AA.AGGG", "GD#DD#CCCCG#C##C#GGFEEE#", "E#CCCA#AAAC#DDDDDDDDDGBB", "B##BBBF#EEE#EEEE#FF#FF#.", "FC#D####DDDC#CGGEEEB#BBE", "EECDC##C.#A#AFG#GG#GG##A", "AAA#A##AA##AF#F#FF#D#DDD", "AAAAD.#DD#C#F.#CCDDDDDCC", "CC#C####C.DDGGG#E#.E##E#", "D#DAD#EEEEEEEFF.FF#FE.#E", "EDD#DD##D#DD#D##CCCCC#CC", "C#CCCC#D#DE#EEEE##E###EE"};
    vector<int> trap = {26, 94, 46, 22, 46, 25, 66};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.107406;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> maze = {".$.D.E.F.G.!."};
    vector<int> trap = {10, 20, 30, 40, 50, 60, 70};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.036000000000000004;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> maze = {".$.", "A#B", "A#B", ".!."};
    vector<int> trap = {50, 50, 0, 0, 0, 0, 0};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> maze = {".$.", "A#B", "A#B", ".!."};
    vector<int> trap = {50, 40, 0, 0, 0, 0, 0};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> maze = {"$.........", "...#...B..", "....A.....", "...B...#..", ".....#....", "#.........", "...A.C....", ".....B....", "..G....CBG", ".........!"};
    vector<int> trap = {1, 2, 3, 4, 5, 6, 7};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> maze = {"$................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", "ABCDEFG#.........................................", "ABCDEFG##########################################", "................................................!"};
    vector<int> trap = {10, 20, 30, 40, 50, 60, 70};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> maze = {".$.", "A#B", "...", "#.#", "...", "A.B", "##!"};
    vector<int> trap = {50, 90, 0, 0, 0, 0, 0};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09999999999999998;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> maze = {"ABCD", "$ABD", "AAAA", "AAAA", "BBBB", "BBBB", "BCBC", "BCBC", "CBCB", "!BBB"};
    vector<int> trap = {10, 12, 14, 15, 15, 63, 62};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6811200000000001;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> maze = {".$.D.E.F.G.!.", ".A.D.E.F.G.B.", ".A.D.E.F.G.B.", ".A.D.E.F.G.B.", ".A.D.E.F.G.B.", ".A.D.E.F.G.B.", ".A.D.E.F.G.B.", ".A.D.E.F.G.B.", ".A.D.E.F.G.B.", ".A.D.E.F.G.B.", ".A.D.E.F.G.B.", ".A.D.E.F.G.B.", ".A.D.E.F.G.B.", ".A.D.E.F.G.B.", ".A.D.E.F.G.B.", ".A.D.E.F.G.B.", ".A.D.E.F.G.B.", ".A.D.E.F.G.B.", ".A.D.E.F.G.B.", ".A.D.E.F.G.B.", ".A.D.E.F.G.B."};
    vector<int> trap = {10, 20, 30, 40, 50, 60, 70};
    ColorfulMazeTwo* pObj = new ColorfulMazeTwo();
    clock_t start = clock();
    double result = pObj->getProbability(maze, trap);
    clock_t end = clock();
    delete pObj;
    double expected = 0.036000000000000004;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22864195&rd=14149&pm=10742
********************************************************************************
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
class ColorfulMazeTwo
{
  vector<int> t_score;
  vector<string> mz;
  int szx, szy, begx, begy;
  bool visited[50][50];
  
  bool visit(int px, int py, int flg)
  {
    if(px<0||py<0||px>=szx||py>=szy) return false;
    if(visited[px][py]||mz[px][py]=='#') return false;
    if(mz[px][py]>='A'&&mz[px][py]<='G'){
      if((flg&(1<<(mz[px][py]-'A')))==0) return false;
    }
    if(mz[px][py]=='!') return true;
    visited[px][py] = true;
    return visit(px-1, py, flg) || visit(px+1, py, flg) || visit(px, py-1, flg) || visit(px, py+1, flg);
  }
  
  bool solve(int flg)
  {
    for(int i=0;i<szx;i++){
      for(int j=0;j<szy;j++) visited[i][j] = false;
    }
    return visit(begx, begy, flg);
  }
  
public:
  double getProbability(vector <string> maze, vector <int> trap)
  {
    t_score = trap;
    mz = maze;
    
    szx = maze.size();
    szy = maze[0].size();
    for(int i=0;i<szx;i++){
      for(int j=0;j<szy;j++){
        if(maze[i][j]=='$'){
          begx = i;
          begy = j;
        }
      }
    }
    double ret = 0.0;
    for(int i=0;i<128;i++){
      double prob = 1.0;
      for(int j=0;j<7;j++){
        if(i&(1<<j)) prob *= (double) (100-trap[j]) / 100;
      }
      if(solve(i)){
        ret = max(ret, prob);
      }
    }
    return ret;
  }
};

********************************************************************************
*******************************************************************************/