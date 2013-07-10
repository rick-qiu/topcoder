/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10288
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

class MazeWanderingEasy {
public:
    int decisions(vector<string> maze);
};

int MazeWanderingEasy::decisions(vector<string> maze) {
    int ret;
    return ret;
}


int test0() {
    vector<string> maze = {"*.M"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> maze = {"*.M", ".X."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> maze = {"...", "XMX", "..*"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> maze = {".X.X......X", ".X*.X.XXX.X", ".XX.X.XM...", "......XXXX."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> maze = {"..........*", ".XXXXXXXXXX", "...........", "XXXXXXXXXX.", "M.........."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> maze = {"..........*", ".XXXX.XXXXX", "....X.X....", "XXX.XXXXXX.", "M.........."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> maze = {"M.", "X*"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> maze = {"M..", "X*X"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
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
    vector<string> maze = {"X*X", "M.."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
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
    vector<string> maze = {"X*X", ".M."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
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
    vector<string> maze = {"X*X", ".M.", "X.X"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
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
    vector<string> maze = {"X.*", "..X", "XMX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
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
    vector<string> maze = {"......MX.X*X.X", "X.XXXX.X.X.X.X", "..X..........."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> maze = {"MX..*X.X", ".X.XXX.X", "........"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
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
    vector<string> maze = {"M...*X.X", "XX.XXX.X", "........"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
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
    vector<string> maze = {"XXXXXXXX", "XX.XXX*X", ".....M..", ".X.XXX.X"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> maze = {"XXXXXXXX", "XX.XXX*X", "......M.", ".X.XXX.X"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
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
    vector<string> maze = {"XX.XXXXX", "X.*....X", "XX.XXXMX", "XX.XXXXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> maze = {"XXXXXXXXXXXXXXXXX", "XXX.XX.XXXXXXXXXX", "XX.*..M.XXXXXXXXX", "XXX.XX.XXXXXXXXXX", "XXXXXXXXXXXXXXXXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> maze = {"XXXXXXXXXXXXXXXXX", "XXX.XX.XX.XX.XXXX", "XX.*........M.XXX", "XXX.XX.XX.XX.XXXX", "XXXXXXXXXXXXXXXXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
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
    vector<string> maze = {"*..", ".X.", ".MX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> maze = {"*..X.X.X.X.X", ".X.X.X.X.X.X", ".MXX........", "X....XXX.X.X"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> maze = {"M..X.X.X.X.X", ".X.X.X.X.X.X", ".*XX........", "X....XXX.X.X"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> maze = {"X.X", ".M.", ".X*"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> maze = {"XMX", "...", ".X*"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> maze = {"XXXXXXXMXXXXXXX", "...............", ".XX.XX.X.XX.XX.", ".XXXXX.X.XXXX..", ".XX*XX.XXX...XX", ".....X.....X..."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> maze = {"XXX.X.X.XXXXXXX", "...............", ".XX.XX.X.XX.XX.", ".XXXXX.X.XXXX..", ".XX*XX.XXXM..XX", ".....X.....X..."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> maze = {"XXX.X.X.XXXXXXX", "...............", ".XX*XX.X.XX.XX.", ".XXXXX.X.XXXX..", ".XX.XX.XXX...XX", ".....X.....X.M."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> maze = {"XXX.X.X.XXXXXXX", "...............", ".XX*XX.X.XX.XX.", ".XXXXX.X.XXXX..", ".XX.XX.XXX...XX", ".....X.....X..M"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
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
    vector<string> maze = {".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "M.......................................*", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> maze = {".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "M........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".*......................................."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 280;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> maze = {".XMX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X*X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "........................................."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 279;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> maze = {".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "..............*..........................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".M......................................."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 273;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> maze = {"*X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".M......................................."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 280;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> maze = {"XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.XMX.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".....................*...................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "...X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X......................................."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> maze = {".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "M........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", "*X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "........................................."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 527;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> maze = {".X.X.X.X*X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".XMX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "........................................."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 463;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> maze = {".X.X.X.X*X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.XX.X.XX.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.XXX.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".X.XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.......................................", "..X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X.......................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XXM", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "........................................."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 396;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> maze = {".X.XXXXXXXXXXXXXXXXXXX.X.X.X.X.X.X.X.X.X.", "...XXXXXXXXXXXXXXXXXXX...................", ".X..X.X.X.X.X.X.X..XXXX*X.X.X.X.X.X.X.XX.", ".XXXX.X.X.X.X.X.X.XX.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".XX.X.X.X.XX.X.XX.X.X.X.X.X.X.X.X.X.X.X.X", ".X.X.X.X.X.XXX.X.X.X.X.X.X.X.X.X.X.X.X.X.", "X........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", ".X.XX.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.XX", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XMX.", ".X....................................X..", "..X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".X...................................X...", ".XX.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.XX.XXXX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", ".........................................", "X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.XX.", ".X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.X.", "........................................."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 294;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> maze = {".........M...................................X....", "XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", "XXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".................................................*"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> maze = {"..X.X..", "X.....X", "..XXXXX", ".X.M..X", ".X.XXXX", ".X...*.", "...X.XX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
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
    vector<string> maze = {"..X.X", "X..*.", "XXX.X", "X...X", "X.XXX", "X.XMX", "X...X"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> maze = {"XMX...X..", "X...XX..X", "..X....X.", ".X.X*X.X.", "...XX...."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> maze = {"*XXX", ".XXX", ".XMX", "....", "X.X."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> maze = {"X*X.XX.X", "X.....MX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> maze = {"X", "X", ".", "*", ".", "M", ".", ".", ".", "X"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> maze = {"*XXX.M", ".....X", "X.XX.X", "XXXX..", "X....X", "..XXXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> maze = {".X..XXX", "...XXXX", "X.XX.XX", "X*...M.", "XXXX.XX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> maze = {"X.X...X", "*..XX.X", "XX..X..", "XXX.XMX", "XX..X.X", "..X...X", "X...X.."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> maze = {"M*.X.XX", "X.XX...", "X...XX.", "X.X.X..", "..X...X", ".XX.X..", "XX..X.X"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> maze = {".M.....", "*X.X.XX", ".X..XX.", "..XX.X.", ".XX....", "....X.X", "X.XXX..", "..XXXX."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> maze = {".XX.XX..", "....X.X.", "X.X.....", ".X..X*XX", "..XX....", "X.X.X.XX", "....M..."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> maze = {".X.*M...", "...X.XXX", "X.XX...."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> maze = {".*....XX", "XMXXX.X.", "X..X....", "X.X..XX."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> maze = {"XXXX.....", "...X.XX.X", "XX..XXX.X", "XXX....*M"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> maze = {"..........", ".X.XXXXXX.", "XX...X.*..", "X..X.XMXX."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> maze = {".X...*X.X.", ".XX.X...X.", "..X.XXX.X.", "X.M.XX...."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> maze = {"......*.XXX", "X.XXX.X....", "..XMX.XX.X.", ".XX...XX.X."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> maze = {"XXXX.XXXXX", ".XXX.XXX.X", ".X*....X.X", "M.XXXX...X", "X......X.."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> maze = {"X..XX..*.X..", "..X.XXX.X.X.", "X....M......"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> maze = {"XX.X", ".X.X", "....", ".X.X", ".X.*", "XXMX", "X...", "X.XX", "...X", "XX.X", "...X", "XX.X", "XX.."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> maze = {"....XX", "X.X..X", ".X.X.X", "......", ".X.X.X", "X.XM..", "X...X.", ".XX.X.", "..X.*X", "X..X.X", "XX...."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> maze = {"X.XXXX", "..X.X.", "X.X.X.", "......", ".XX.X.", "..XXXX", "X..XX.", "X.X.*.", "X..MX."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> maze = {"..X.....X", ".X..X.XX.", "...XXX.X.", ".X..X....", "..X..X.XX", "X..X....*", ".XX..X.XX", "....X....", ".XMX..X.X"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> maze = {".X.X..X..X.XX..", "...X.XMX.....X.", ".X.X.X...XX.X..", "X..X..X.X..X..X", ".X.X.X...X...X.", ".X....X.X..XX..", "...X.X..X.XX..X", "X.X...X...X..X.", ".X.XX...XX.X...", "......X......X.", "XX.XX.X.XXX.X..", ".....X.....X..X", "XXXXX..XX.X*XX.", "......X........", "XXX.X..X.X.X.X.", ".....X.X.X..X..", "X.XX.XX.X..X.X.", "XX.......X....X", "XXX.X.XX.X.X.XX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> maze = {"...X..X...X.X......X......", "X.X.X...XX....X.X.XXX.X.XX", "..X..XX...XXX.XX.X.X.XX...", ".X.X..X.XX.......X...X..XX", ".X..X.....XXXX.XX.X.X..X..", ".X.X.XXX.X...X.X....X.X..X", ".X.....X..XX...X.X.X...X.X", ".XX.X.X..X..X.X..XX..XX...", ".....X.X.X.X...X..X.X...XX", ".XX.X..X....X.X..XX.X.XXX.", "X....X...X.X..X.XX..X.X...", "XX.X..X.X...X...X..X....X.", "XXX..X.X.XX...XX.X...XXX.X", "XX.X........X......X......", "X....XXX.XX.X.XXX.X.X.X.X.", "..X.X......X.....X...X...X", ".X.X.XXXXXX..XX.X.X.X.XX..", "X..X.X......X...........X.", "..X...XXX.X..X.X.X.XX.X..X", "X..XX......XXX.X.X...X.X..", ".X....X.XX.X..X..X.X.X.X.X", "...XX..XM....XXX..X.X...X.", ".X..X.XXX.X*XXXX.XX.X.X.X.", ".X.X..XX...X.XX.......XXX.", "X..X.X...X.....XX.X.X.....", "..X..X.X.X.X.X.X...X..X.X."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> maze = {"...X.....X.X...X.X..", "X.X..XXX.....X.X..X.", "...XX..X.X.XX.X.X.X.", ".X.X..X.X...........", "X...X...XX.XX.X.XX.X", ".XX..XX......X.X.X..", ".X.X..MX.X.XX..X..XX", "....X.XXX...X.X.X...", "XXX.X.XX.XX.......X.", ".........X..XXX.XX.X", "X.X.X.XX...X...XX...", "..X..X...X...XXX..X.", "X..XX.XX.X.X.....X..", "..X.......XX.X.XX.XX", "X..X.XXX.XX..X......", ".XX.X......X..X.X.X.", ".X....X.X.X.X.X..X..", "...XX..X.....XXX..XX", "XXX...X.X.X.X.X.X...", "*...X...X..X......X."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> maze = {".X..X....XX.......X.", "...X.X.X...X.X.XXX..", ".X...X..X.XXX..X..X.", ".X.X...X.XXX.X..X...", "X.X..X....X..X.X..X.", "X..XX.X.XX.X.....X.X", "..XX..X..X..X.X.X..X", "X...X..X..X..X...X..", "X.XX.X.X.X.X.XX.X.X.", "....................", ".X.X.X.X.X.X.X.X.X.X", "..X...X..X.XX.XX..X.", "XX.X.XXX.X......X...", ".....XX..X.XX.X.X.X.", ".X.XX...X....XX.X.X.", "X.XXXXX..X.X...X.X..", "...XX...X...X.X...X.", ".X....X..X.XX.X.XX..", ".X.XXX..XX.X.X..*.X.", ".MX....X.......X.X.."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> maze = {".X....XXX.", ".X.X.X.X..", "...XX...X*", "XX..XX.XX.", ".XX.......", "..X.XMX.X.", "X...X.XX..", "XX.X....X.", "X..XX.XXX.", "..X....X.."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> maze = {"X.X.X.X.X.X*...X", "..........X.XX..", "XX.XXMX.X....XXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> maze = {"XXXXXXXXX.....X.XX.X.X.X.X.X.XMXX*XX....XXXX", "XXXXXXXXXX.XX........................X.XXXXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> maze = {"XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XX.", ".X.", ".X.", ".X.", ".X.", ".X.", "...", ".X.", "..X", "X..", ".X.", "...", "X.X", "*..", "XX.", "...", ".X.", "XM.", "XX.", "X..", "..X", "X..", "XX.", "...", "XX.", "XX.", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX", "XXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> maze = {"XXX..", "XXX.X", "XX..X", "X.X..", "..X.X", ".XX..", "...X.", ".XX..", ".X.X.", ".X...", "..X.X", "X...X", "..XX.", "X..X.", "X.X..", "..X.X", "X...X", "..X..", "XX..X", "...X.", ".X.X.", "X....", ".XX.X", ".....", ".X.X.", "X...X", "..X..", ".X.X.", "....X", "X.XX.", ".....", ".X.X.", ".X.*X", ".X.X.", "X....", "..XX.", "X.X..", "...XX", "X.X..", "M...X", "X.X..", "X.X.X", "..X..", "X.X.X", "...X.", ".XX..", "....X", ".X.XX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> maze = {"XX.X.X.X", "X.......", ".XX.X.X.", "...X...X", "X.X..XX.", "....XX..", ".X.X...X", "X..XX.X.", "..X.....", ".X.X.X.X", ".X..X...", "...X.XX.", ".X.X....", "..X..X.X", "X..XX...", "..X..X.X", "X...X...", ".X.X.X.X", "*..X.X..", ".X.X...X", "X...X.X.", "..X.....", "X..X.XXX", "X.XX....", "..X..X.X", ".X.X.X..", "X....X.X", ".X.X.X..", "..X...X.", "X...X.X.", "..X.XX..", "XX....XX", "...XX...", ".X.X..X.", "X...X..X", "X.X..X..", "..XX..X.", "X...XXX.", "..X....X", "X..XMX..", "..XX..X.", ".X..X..X", ".X.X.XXX", "...X.X.X", ".X......"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> maze = {"..XXXXX.XXXX", "X..XXX....XX", "..XXX..X.XX.", ".X.X.X..X...", ".X...X.X.X.X", "..XX...X....", "X.X.X.XMX.XX", "X.......X.X.", ".X.XX.XXX...", ".X.X..X...X.", "..X.X..XX..X", ".X..X.XXX.X.", "..X.X..X....", "X.X.X.X.X.X.", "........X..X", ".X.X.X.XXX..", "..X*X...X..X", ".X....XX.X.X", "X.XX.X...X..", "......X.X..X", ".X.XX.....X.", ".X...X.XXX..", "X..X.X....X.", "X.X.X..XX...", ".X....X.XX.X", ".XX.X....X..", "....X.X.X..X", ".XXX..X..X..", "X....X..X.X.", ".X.X.XXX....", ".XX.....X.X.", "....XX.X.X..", "X.X.X.....X.", "XX...X.X.X..", "X..X.X.X..X.", "..X..X..XXX.", ".XXX.X.XX...", "XXX..X...XX.", ".X..X..X..X.", "...XXX.X.X..", "X.X.X..X..X.", ".....X..X.XX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> maze = {"XXXXXXXXX.X...XX.....X", "XXXXXXXXX..XX..XXXX.XX", "XXXXXXXXX.X.X.XXX....X", "XXXX.XXX..X.X..XXXX.X.", "XXXX..X..X..X.X.X...X.", ".XX..X.X..X...X.X.X...", ".X.X.....X..X.X..X..XX", ".....X.X..X..X..X..X..", "X.X.X..X.X..X*X..X..X.", ".X.X.XX....XX.X.XX.XX.", ".....X.XX.X...X.......", "XXX.X......X.X..XXX.X.", "X.....X.XX.....X...X.X", "..X.XX..X.X.XXX..XX...", ".XXX..XX..X....X..MX.X", ".XXXX..X.X..XX...XX...", "XXXX.X.....X.XX.X...XX", "..X...XX.X....X...XX..", "X.X.XX....XX.X..X....X", "X......X.X.XX..XXX.XX.", ".X.X.XX......X..X.....", "...X...X.X.XX..XX.X.X.", ".X..X.X..X...X...X...X", "..X.X.XXX..X.X.X..X.X.", "X.X.XXX...XX.X.X.XX.X.", "X..X...XX.X...XXX.....", "..XX.X.....XX...X.X.X."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> maze = {"..X.XX..XXXX.X....X.XXXXX.", ".X..XX.X.XX....X.X...XXX..", ".XX.........X.X.XX.X..XXX.", ".XXX.XX.XXXX.X..XXXX.X.X..", ".X...X..X.....X..XX......X", "..XXX.X..X.XX...X..X.X.X..", "X..X...X..X...XX.X.X.XX.XX", "..X.XX.XX.X.X..X.X.X.....X", "X...X...X..XM.X..X...X.XX.", ".XX.X.X...X.X..X...X..X.X.", "..X..X.XX.....X..X.XXX....", "X...X...X.XX.X.X..XX..X.X.", ".XX..XX..X.X...X.X..X..X..", "...X.X..X....XX...X...X.X.", ".X.....X.XXX...X.X.XX.....", "X.XXXX...X..XX........X.X.", "......XX.X.X.X.XX.X.X.X.X.", "XXXXX........X...X.X.X.X..", ".....X.X.X.X...XX....X.XX.", "X.XX....X.X..X.X.XX.XX..X.", "..X.XX.X....X..........X.X", "XX....X..X.X..X.XX.X.XX...", "...XX...X...XX...X.X....X.", "XXXX.X.X..X...X.XX.X.X.XX.", "........XXX.XX..X..XX....X", "X.XX.XXX....X..X.X...X.X..", "XX.XX....X.XXX...X.X..X.X.", "XX...X*X.X..X..X..X.X.X...", "...X...X.XX..X..X....X.X.X", "X.X.X.X...X.X..X.X.X...X..", "XX...X.XXXX..X....X..X..X.", "...X........XX.XXX.XX.XX..", "XX.X.X.X.X.XX.........XXX.", "...XX...X....X.X.X.XX..XX.", ".XX...X.XX.X.X..XX..XX.X..", "X...X..X....X..XX..X....X.", "XX.XXX..X.X.XX..XX..XX.XX."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> maze = {"X.XXXX.XX....X.XX...X.XXXXXXXXX", "X.XXX...XXX.X..XXX.XX..XXXXXXXX", "...X.XX..X...X..XX.X..XXXXXXXXX", "X.X..X..X.X.X..X.....XX.XXXXXXX", "...X..X.X....X.X.X.X.X..XXXXXXX", ".X..X....X.X.....XX....XXXXXXXX", "..X..XX.X.X..XX.X..XX.XXXXXXXXX", ".XXX.X.....X.X.X*.X.XX.XXXXXXXX", "X..X..X.X.X.....X....X..XXXXXXX", "..X.X....X..XXXX..XXX..XXXXXXXX", "X....XXX..X.....X...X.XXXXXXXXX", "..XX.....X.X.X.X..X.X..XXXXXXXX", "XX.X.X.X...X.XX.X..X..X..XXXXXX", ".M...XXXX.X.....X.X.X...XXXXXXX", "X.XXX..X...X.X.X..X..X.XXXXXXXX", ".XX...X.XX..X..X.X.X....XXXXXXX", "....X......X..X......XXX.XXXXXX", "X.X.XX.XXX..X.X.XX.XX.....XXXXX", "X..X..X....XX.....X...X.X..XXXX", "..X.X...XX....X.XX..X.X..XX.XXX", ".X..X.X.X.X.XX...X.X.X.XX...XXX", "XX.X...X....X..X........XX.X.XX", ".....XX..X.X.XX..XX.X.X......XX", "X.X.XX..X.XX....X..XXXXX.XXXX.X", "XX..X.XX....XXX...X.X.X........", ".XXXX...XXX.....X......XX.XX.XX", "......XX....X.X..XX.XX...XX.XXX", "X.X.X....X.X...X...X...X.....X.", "XX...X.X..X..X.XXXX.XX.X.X.X...", "XXXX..X..XXX.X......X.X...X..XX", "XXX..XXX..X..XX.X.X....XX..X..X", "X.XX..XX.X..X...X..X.X.XX.X..XX", "...XXXX..X.X..X..X..XXX...XXXXX", "XX...X..XX.XX..X..X.XX..X..XXXX", "XX.XX..XXXXX.X.X.X...X.XXXXXXXX", "X.....X.XXX..X.X..X.XXXXXXXXXXX", "..X.X......X...X.X..XXXXXXXXXXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> maze = {"XXXX......X.X...X...X.XXX..X.X..XX.XXXXXXXXXXXXX", "XXXX.X.XX.X..X.X.XX.X..X..X....X......XXXXXXXXXX", "XXXXXXX...X.X..X..X...X.X...XXX.X.XX.XXXXXXXXXXX", "X...XX.XX....X..X..X.X..X.XX........XXXXXXXXXXXX", "X.X....X.XX.XX.X..X...X.X....X.X.X.XXXXXXXXXXXXX", "XX.XX.X..XX.X....X..X.....X.X...X....XXXXXXXXXXX", "...X....X...XX.X.XXX..XX.X.X.X.X.X.XXXXXXXXXXXXX", "XX...X.X.XX...X.....X.X.X..X..X...XXX.XXXXXXXXXX", "...X.X....X.X..X.X.X.....X..X...X..X...XXXXXXXXX", "X.X.X.XX.X.X.X....X..XXXX..X.XX..X.X.X.XXXXXXXXX", ".X............XXX..X.....X......X.X..XX..XXXXXXX", "..X.X.X.XX.XX.....X.X.X.X..XX.X...X.X.X.X.XXXXXX", "X..X.X.X..X.X.X.X...X.XX.X.MXX.XXX..X.....XXXXXX", "X.X.....X.....XXXX.X.....X.X.X....X...XX.XXXXXXX", "...XX.X.XX.XXX..X...X.X.X..X..X.X.X.XX..X.XXXXXX", "X.X.XX....XX...X.XX..X..X.X.X....XX.X.X.....XXXX", ".......XX....X......X..X......XXX.......XX.XXXXX", "X.X.X.X..X.X.XX.XXX..X.X.XX.XX....X.X.X...XXXXXX", "...X...X.X.XX..X....XX.....X...X.X..X.X.X....XXX", ".X..XXX......X...XX....X.XX..X.X..XX.XX..X.XXXXX", ".X.X...X.XXX.X.X.X.X.XX...X.X.X.XX.....X.X.XXXXX", "XX.XX.X.X...X...X....X..X........X.XX.XX.XXXXXXX", "..XX.....XX...XX..X.X.XX..XX.X.X...XXX.....XXXXX", ".XX.XX.XX.XX.XX..X.XX....X..XXXXX.X.X.XXX.XXXXXX", ".X.........XX..XX....XXX.*.X.X.X.......X.XXXXXXX", "...X.X.X.X...X...XXX.....X......XX.X.X...XXXXXXX", "X.X...XXX.XX...XX....X.X..XX.XX.X.X.X.XX.XXXXXXX", ".X..X.XX...X.X....X.X...X...XX........XX...XXXXX", "...XXX..X.X...X.X..X..X.XXXX..XXX.X.X...XX.XXXXX", ".X..XXX.....XXXX..X.X.X......XX.XX.X.XX..XXXXXXX", "X..X....X.X.X.X.X.X.X.XX.X.X..........XX..XXXXXX", "..XXXX.X...X....X....X...X..X.XX.XXXXXXXXXXXXXXX", "X..XX.X.XXX.X.XX..X.X..X..X.X...X..X.XXXXXXXXXXX", "X.XXX.......X.X..XXX..XXX..XX.XX.X....XXXXXXXXXX", "XXX..X.X.XX.....X.XXX..XX.X........XXXXXXXXXXXXX", "XX.X.XX.X.XXXXX....X..X....XX.XXXX.....XXXXXXXXX", "XX..............X.X..X..X.X.......X.X.XXXXXXXXXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> maze = {"XXXXXXXXXXXXXXXXXXXX.X..X..XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX...X..XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX.X...X.XXXXX.XXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX.XX....XXX..X.X.XXXXXXXXXXX", "XXXXXXXXXXXXX.X.X..X..X..XXX.X.X.X...XXXXXXXXXXX", "XXXXXXXXXXXXX.X.XX..X..X...X.X...X.XXXXXXXXXXXXX", "XXXXXXXXXXXXX.X...X.XX...XX..X.XX...X..XXXXXXXXX", "XXXXXXXXX.X...XX.X....XX..XX....X.XX..XXXXXXXXXX", "XXXXXXXX..X.X.....X.XX...X...X.X....X...XXXXXXXX", "XXXXXX..X.X..XXX.X..X.X.X..XXX..X.XXX.XXXXXXXXXX", "XXXXXXX....XX..X.X.X....X.X..XXXX.X.....XXXXXXXX", "XXXXXXXXXX...X......X.XX...X..XX...X.X.XXXXXXXXX", "XXXXXX.X.X.X...X.XX...X.X.X..X.X.XX..X.X.XXXXXXX", "XXXX...X..X.X.X.XX.X.X..X..X...X....X.X...XXXXXX", "XXXXXX...X...X.......X.XXX.X.XX..X.X...X.X.XXXXX", "XXXXXX.X.X.X...XX.XX.X..XX.X..XX.XX..XXX...XXXXX", "XXXXX.XX..XXX.X...XX...X....X..X....X....XXXXXXX", "XXXX....X..XXX.X.X..XX..XX.X..X..XX.X.X.X.XXXXXX", "XXXXXXX...X.X..XXXX..XX.X...X.XX..XX...X....XXXX", "XXXX....X.....X..X.X....XX.X.....X.XX.X*X.XXXXXX", "XXXX.X.X.XXXX...X..XX.X......X.X..........XX.XXX", "XXXXXXX.......X.XX.....X.XX.X.X..XX.X.X.X..X.XXX", "XXXXXX..XX.X.X.....X.XX...X....X.X...X...X....XX", "XXXX...X...X.XX.XXX.XX.X.X..X.XX..XX.XXX..X.XXXX", "XXXX.X.XX.XX.X.X...M......X.X.X..XX....X.X...XXX", "XXXXXXX.XXX.XX..XX.XX.X.X.X..X..X..XX.XXXX.XXXXX", "XXXXXX.........X.X.X...X.X..X.X.X.XX...XXXXXXXXX", "XXXXXXXX.X.X.X.....X.X.X...X..X.....X.X.XXXXXXXX", "XXXXXXXX.X..X..X.X..X..X.X...X..X.X.X....XXXXXXX", "XXXXXXXXX..X..X...X..X..X..X.X.X.XX..X.XXXXXXXXX", "XXXXXXXXXXX..X.X.X..X..X..X..X.....XXXXXXXXXXXXX", "XXXXXXXXXXXXX....XX.XX..XX.X..X.XX.XXXXXXXXXXXXX", "XXXXXXXXXXXX..X.X....X.X.X...X....XXXXXXXXXXXXXX", "XXXXXXXXXXXXX..X..XX.X...XX.XXX.XXXXXXXXXXXXXXXX", "XXXXXXXXXXXX..XXX...X..X..X....XXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXX.XXXX.X..X..XXX.XXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXX.XX....X.X.X.XX.XXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XX.X...XX.XXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX..XXX.XXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> maze = {"XXXXXXXXXXX.....XX..X..X..X.XX...X.X.X.X..XXXXXX", "XXXXXXXXXX.X.XX....X.X..X....XXX...X.....XX.XXXX", "XXXXXXXXXX..X..X.X.....X..XXXX..XX.X.XX.XXX.XXXX", "XXXXXXX.X.X.X.X.XXX.XX..X.....X.X..X...X.X..XXXX", "XXXXX.....X.X.X..X.X...X..X.XXX..X...X.X...XXXXX", "XXXX..X.X.....X.X....X...X.X....X..XX.X..XX..XXX", "XXXXXX..X.X.X.X.X.X.X.XX....X.X..X.XX..X....XXXX", "XXXX.XXXXX.X.....X.X..X..XXX.X.X.X....X..X.XXXXX", "XXXX.X..X..X.XX.XX..X..X...X.X...X.XXX..XX.XXXXX", "X.....X...X.X.X...X.XX...XX..X.XX....XX..XX.XXXX", "XX.X.X.XX.X...XX.X....XX..XX....X.XXX.X.X.X.XXXX", "XXX....X..X.X.....X.XX...X...X.X....X...X....XXX", "X..XX.X.X.X..XXX.X..X.X.X..XX..XX.XXX.XX..X.XXXX", "XX.........XX..X.X.X....X.X..XX.X.X......X.XXXXX", ".X.XX.X.XX...X......X.XX...X..X....X.X.XX...X..X", "...X.X.X.X.X...X.XX...X.X.X..X.X.XX..X.X..XX..X.", ".X.X...X..X.X.X.XX.X.X..X..X...X....X.X..X...X..", "X..X.X...X...X.......X.XXX.X.XX..X.X...X.X.XX.X.", ".XX.XX.X.X.X...XX.XX.X..XX.X..XX.XX..XXX....X.X.", "....X.XX..XXX.X...XX...X....X..X....X....XX.....", ".XX..*..X..XXX.X.X..XX..XX.X..X..XX.X.X.X.X.XX.X", "..XX.XX...X.X..XXXX..XX.X...X.XX..XX...X...X..XX", ".X..X...X.....X..X.X....XX.X.....X.XX.X.X.X..X.X", "XXX..X.X.XXXX...X..XX.X......X.X..........XX....", ".X.X..X.......X.XX.....X.XX.X.X..XX.X.X.X..X.XX.", "...X.X..XX.X.X.....X.XX...X....X.X...X...X....X.", "XX.....X...X..X.XXX.XX.X.X..X.XX..XX.XXX..X.X.X.", "...X.X.XX.XX.X.X..........X.X.X..XX....X.X...X.X", ".X..XXX.XXX.XX..XX.XX.X.X.X..X..X..XX.X.X..X....", "X..XXX.........X.X.X...X.X..X.X.X.XX....X.X..X.X", "XX..X.XX.X.X.X.....X.X.X...X..X.....X.X.X..XX...", "X..X...X.X..X..X.X..X..X.X...X..X.X.XXX.X.XXXX.X", "XX.XX.XX.X.X..X...X..X..X..X.X.X.XX....XX...X...", "XXX.......X..X.X.X..X..X..X..X.....X.X...X.XXXXX", "XXX.X.XX.X..X....XX.XX..XX.XM.X.X.XX..X.XXXXXXXX", "XX..XX....XX..X.X....X.X.X...X...X...X..XXXXXXXX", "XXX.XXX.X.X.X..X..XX.X...XX.X.X.X.XX..XX.XXXXXXX", "XXXXXX..X....X..X...X..X..X...X.....X.......XXXX", "XXXXXXX..X.XXX.X.X.X..X..X.X.X.X.XX.X.XX.XXXXXXX", "XXXXXX..X..XX.XX....X.X.X..X...X..X..XXX.XXXXXXX", "XXXXXXXXX.X......X.X..X..X...X..X..XXXXXXXXXXXXX", "XXXXXXXXXXX.X.X.X...X..X.X.X.X.XXX.XXXXXXXXXXXXX", "XXXXXXXXXXXX..XXX.X.X.X.X..XX..XX.XXXXXXXXXXXXXX", "XXXXXXXXXXXXXX....X.X....X...X.....XXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX.X..X.XX..X.X.XX.X.XXXXXXXXXXXXX", "XXXXXXXXXXXXXX....X.X.X..X.....X.XXXXXXXXXXXXXXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> maze = {".X..XXXX.X.XXX...X..XX.X..X.........XXXX.XXXXXXXXX", "..X..XXX.X.XXXXX..X......X.XX.X.XXXXXXXX.XX.XXXXXX", ".X..XX.....XXXXX.X.X.XX.XX..X..XX..XXXXX..X.XXXXXX", ".X.X.XXXXX..XXX..X..X...X..X..X.XX..XXX..XX.*XXXXX", "......XXX..X.X..XXX..X.X..X.X.....X..X.X..X.X.XXXX", "X.X.X..X.X.X..X..X.X.X...X..X.XX.X..X..X.X....XXXX", ".X...X.X.....X.X......XX...X....XXX...X..X.XXXXXXX", "..X.X.X.X.XX.X...X.XX....XXXX.X.XX..XXXX.....XXXXX", "X...X.X..X....XX..X..X.X...X...X...X..X..X.X.XXXXX", "XXX....X..XX.X.X.X.X..X..XX..X..XX..X...X...X.XXXX", "X.X.X.X.X.X..X..X....X..XX..XXX....X..X..XX...XXXX", ".....X....XX..X.XX.X..X.X.X.XXX.XX..XX..X.XXXXXXXX", "X.X.XXXX.X...XX...X.X...X....X.X...X..X......X..XX", ".X...X.X..XX.X..XX...X.X.X.XX..X.X..X...X.X.XXX..X", "..XX.X..X.....X...XX..........X.X..X.X.X.XXX.X..XX", ".X.....XXXXX.X.X.XX.XX.X.X.XXX...XX.......XX...X.X", "...X.X..X..X.X.X.X....X..XX....X...X.XX.XX...X....", ".X..XXX..X........XX.X.X..X.X.X.X.XX...XX.X.X.X.XX", "..XX.X.X...X.X.XX....X...X..XX...X...X.........XX.", "XX.X...X.X.X.X.X.X.X...XX..X.XX.X.XX..X.XX.X.X....", "....XX....X...X..XX.XX...X...........X.X..XX.XXX.X", "XXX....XX.X.X.XX......X.XX.X.X.X.X.XX..X.XM.X...X.", "....X.X...X..X.XX.X.X.......X...X.X..X.X.XX.XX.XX.", "X.XX.X..X..XX...X.X.XX.XX.X.X.X....X...X..........", "XX.....X..X..X.X.X.X.XX...XX.X.XXXX.X.XX.XX.X.XX.X", "X.XX.XX..X.X.X.........XX..................X.X.XX.", "......X.X.....XX.X.X.X....X.X.X.X.X.X.X.X.XX......", "X.X.X..X.XX.X..XX..X..X.X..XX..XXX.X...XX....X.XX.", "..XX.XX....X.X...XX..X.XX.XX.XXXX..XX.XX.X.X..XX.X", ".X......XX.....X....X.....X..X.X..X......X..XX....", "XX.XXX.X.X.X.XX..XXX.XXX.X.X.....X..X.XX..X....X.X", "....X..X..X.X...X............XX.X.X..X...X..XX.X..", ".X.X..XXX.....X..XXXX.X.X.XX.X.X..X.X..X..XXX.XXX.", "X...XX.X..X.X.X.X.....X.XX...X.XX.X..X..X.....X...", "XXXX.....XX.X.XX..X.X.X..X.X.......XX..X..X.X.XXX.", "X.X.X.X.X....X..X..X...X..X.X.XX.X...XX.X..X...XXX", "X.....XXXX.XX.X...XX.XXX.XX.....X.X.X...X.X.XX.XXX", "..XX.X.....X....X...X....X.X.X.XX.XX..X.X.....XXXX", "XX.X..X.XX..XX.X.X.XX.XX...X.X.......X.XX.X.X..XXX", "XX.XXX.XX..X.X.X..XX..X..X.X..XX.X.X.....X.X..XXXX", "XX........X......X..XX.X..XXX...X...X.XX.X..X.XXXX", ".X.X.X.X.X..XX.X..X......X.X..X..X.XX..X...XX.XXXX", "....X.XX.XXX....XX.XXXX.XX...X.X.X...XXX.X..XXXXXX", "X.XX.......XX.XX..........XX....X.X.XX..X.XX.XXXXX", "X.XXX.XX.XX..XXX.XX.XX.X.X..X.XXX.XXX..XX.....XXXX", "XXXX...XXXXX..X.XX.X...X..X.XX.......X..XX.X.XXXXX", "XXXXXX.X.XX.X........X..X......XX.X.XX.X.XX...XXXX", "XXXXX.X.......X.X.X.X..XXX.XXX...X..........XXXXXX", "XXXX....XX.X.X.X..XX..X.XX....XX..XX.XX.X.X...X.XX", "XXXXXX.X...X....X...X.....X.X..X.X....X.X..XX....X"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> maze = {"MX......X.XX....X.X...X...X....XXXXX....X.X...X.XX", "...X.X.X....XXX.X...XX..XX.XXX..XXX..XX....XX...XX", "XX.X..X.X.XXX....XX..X.X...X...X.X..X..XX.X...XXXX", "..XX.X....X..XX.X.XX...X.XX.XX....X..X.X.X..X.X..X", ".X....X.X...XX..X..X.XX.....X..X.XX.X.....X.X...X.", "..X.X..X..X.X.X.X.X..X..X.XX..X.X....X.XXX...X.XX.", "X.XX.X.XX..X.......X..X.X.X..X....X.X......XX.X...", "...X.....X.X.XX.X.X.X.X..X..X..X.X.X..X.XX......X.", ".X..XX.X.X..X....XX....X...X..X.XX.XX..X..X.XXX.X.", "XXX...XX...X.X.X.X.XX.X.XX..X.......X.XX.X.XX..X.X", ".X..X...XX.X....X..X.....X.XXX.XX.X.X......X..X..X", "..XX..X....XX.X...XXX.X.X...XX.XXX.X*.X.X.XXX...X.", "X....XX.XX..XX.XX..X...X.XX.....XX.XX..X.X.X..X.X.", "..X.X...X.X......X.XX.X...X.XXX.......X....X.XXX..", "X.XX.X.X....X.XX......X.XX.....X.X.XX...X.X...XXX.", ".X.....X.XX.XX...X.XX.X.X.X.X.X...X..XX..X..XX.X..", "...X.X..X.X..X.XX.X.....X....X..X.X.X..X.XX.XX.X.X", "X.X...XX....XXXXX..XXXX.X.XX..X..X....XX..X.......", ".X.XXXX..X.XXX.X.X.X.......XXX.XX..X.X..XXX.X.XXX.", ".X......X..XX....X.XX.X.X.X......X..XX.X....X.X..X", "..XXXX.XXXX..XXX.....XXXX...X.XXX..X....X.X..X.X.X", "X.X.....X..X....XXX.X.X...X..XX.XX.X.X.X.X..X.....", "X.X.XX.X..X..XX........X.X.X..........X..XX...XXX.", "...XX.X.X...X..XXXXX.XX....X.XX.XX.XXX..X...X....X", ".X........XXX.X.......X.X.XX.X...X.....X.X.X.XXXXX", "..X.X.XX.X.....X.X.XX.XX....X.XX.X.X.X...X...X...X", ".XX.X.X..XX.XX....X.X...X.X.....X...X..X...X..X.X.", "X..X.X..X.XX.X.XXX....X....X.X.X.XXX.X..X.X.X.....", ".X....XXX.....X....X.XX.X.X.XX........XX.X..X.X.XX", "..XXX.....XX.X..X.X.X...X.....X.X.X.XX.X...X.X..X.", "X.X..X.XXX.X...XXX..X.X..X.X.X...XX......X....X...", "X.XX...X.....X.XXXX...X.XX..X.XX.X.XX.X.XX.X.X..XX", ".....X.XX.X.X...XX.X.X.X...X..X.X...X.X...X.XX.XXX", ".X.X.XX...X.XX.X....X....X...X....X.X.XX.X....XXX.", ".X..X...X..X....XX.X..X.X..X...XX.XX....X..XXX.X..", "..X.X.X.X.X.X.XX.....X..XX..X.X....XX.X..X.X.....X", ".X.X..X..X..XX.XXXXX.X.X...X..XX.X...X.X.....X.X..", "X...X..XX.X..........X.X.X..X...XX.X....X.X.X.X.X.", ".XX..XX....XXXX.XX.X.X.X..X..X.X....X.X.X..XX.X..X", "....X..XX.XX..X.X..X.X..X..X.X..XX.XX.XX.XX.X...X.", "X.X..X.X....X....X..XXX..X.X.X.X...X.X.......X.XX.", "...XX....XX...XXX..XXXX.XXX..X.X.X.....X.XXX...X..", ".X....XX.X..X.X...X.XX..XX..X..X..XX.X..XX.X.X...X", ".X.X.X...X.X.X..X.....XX...X..X..X.X..X.X.....XX..", "X...X..X.X.X..X..X.XX.X..X..X..X.X..XX...X.XXXXX.X", "..X..X..X..XX...X...X..X.X.X.X.X..X.X.X.XX....X..X", ".X..X..X.X..X.X..X.X..X.X....X.XX......X..X.X..X..", ".X.X..X....X...X.X.XXX....X.X....X.XX.X.X.X..XX..X", "X.XX.X.XX.X.X.X..X...XXXX.XX..X.XX..X......X..X.X.", ".........X.....X.X.XX.......XX..X..XXX.X.X.X.X...."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> maze = {"...X..X.X.X.....X..X.X.X.X..X..X..X.X.X..X.X.XX..X", ".XX..X..X.X.X.X..X.X...X..X..X...X.....X.......X..", "....X.X.X..X..X.XX...XX..X..X..XX..XX.X.XX.XX.XXX.", "X.XX.....X..X..XX.XX...X...X.X..X.X..X..X....X.X..", "X.X..XX.X.X..X....XXX.X..XX...X.....X.X...XX.X..X.", "...XX.......XXXXX..X....X..X.X..XXXX...XX.X.XX.X..", "XX...XX.X.X.XX....X..XXX..X..XX.....X.X...X......X", "..XX.X.X.X....X.X..X...X.X..X..X.X.XX..XX...X.XX..", ".X.X.X...X.X.XXX.X..XX...X.X.X....X...X...X.X...X.", "......XX..X...X...X.X..X.X.X...XXX.X.X..X..X.X.X.X", "X.X.X.X.X.XX.X.X.XX.X.X..X.X.X.........X.XXX..XX..", "..XX...........X.X....X.X...X.X.XX.X.XX..X...X..X.", ".X...XXXX.XXXX...X.XX..X..XX..X.X.X..X..X..X...X..", "X..XX...X.X...XX..X..X.XX...X......XXXX...X.XX...X", ".XX..XX.XXXXX...X.X.X...X.X..X.XX.X..X..X.X...XX..", ".X.X.X....X..X.XX.X.XX.X...XX..X.XX.X..XX.X.X..XX.", "......XX.X..X...........X.X...X..X..X.X..X...X...X", ".X.XX..X.XX..XX.XX.XXX.XX..X.X..XXX....X...XX.XXX.", "XX.X..X.....X..X..X.......X..X.X.X..X.X.XX.X....X.", "..X..X.XXX.X.X.XX..XX.X.X..X.X...X.XXX.......XX.X.", ".X.X.....X.X.X..XX..X..X..X..X.XX...X.X.XXX.X..X..", ".....X.X.......X..X..XX.X...X.....X.......X..X..X.", "X.X.XX..X.X.XX..X.X.X.....X...X.X.XX.XXX.X.XX.X...", ".X.X...XXX.X..X......X.X.X..X..XX...X...X...X...X.", "....X.X.X...X...X.XX..X.X..X.X...XX...XX..XX..X.XX", "X.X...X..XX..XX.X.X.X.....XX...X.X..XX.X.X.X.X.X..", ".XXXXX.X.X.X.X.X..X.XX.X.X..X.X.XXX..............X", "..X..............X.....X..X..X...X.X.X.X.X.X.XXX.X", ".XX.X.XXXX.X.X.XX.X.XX..X...XX.XXX.XX.X.XX..XX.X..", ".X.X.XX.....X...X...XX.XX.X...............X....X.X", ".X.....XX.X.XX.X..XX...X.X..X.X.X.XX.X.X.X.X.X..X.", "...X.X..X..X...X.XXXX.X..X.XX..X.XX.X.X.X..X..X...", ".XX..XX...X..X.X..XX...X.....X............X.X..X.X", "X...X.XXX..X..X..X...X.XX.XX..XX.XXX.X.X.X...XX.X.", ".X.X......XXX..X..X.X.X...X..XX....X..X.XXX.X.X...", "..X..X.XX..X..X.X..X....X..X...X.X..X....XX.....X.", "X...XXX...X.X.X.X.X..X.X.X.X.X..X..X.X.X....X.X..X", "XX.X.X.X.XX.....XX.X.X.X.X.XXXX..X....X..X.XX..X..", "X.X........XX*XX.X...X...X...XX.X.X.XX.XX....X.X.X", "....X.X.X.X..XX....X.X.X.X.XX.....X......X.X.XX.X.", ".XX..X..X..X....XX.X.X.X..X.X.X.XX..XX.X.X.X......", "XX.X..XX..X..XX.X...X..XX.M..X..X.X..X.X..X..X.X.X", ".....X.XX.XXX..X.X.X.X...X.X..XX....X...XX.XXX..X.", ".X.X.X.......X........X.XX..X.X..X.X..X.......X...", "X.XX..X.X.X.X.X.XX.X.X....XX..XX.X.XX.X.X.XX.X..X.", ".....X.X..X.X...X...X.XX.X..XX...X...X..X.X.X.X.XX", "XXXXX....X..X.X.X.X....X.XX.X..X.X.X..XX....X.....", "....XXXX..X..XX..X..X.X......XX.X...X...X.X..XXX.X", ".XX......XXX.X..X.X.X..X.X.X.....X.X..X..X.X....X.", "..X.X.XX..X..X.X....X.X...X..X.XX...X..X....X.X..."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> maze = {"XXXXXXXXXXXXXXXXXXXXXX.XX..XXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX...X.X...XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXX.X...XXX..XXX.XXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXXX..X.XXX.X...X.X.XXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXXXX....XX...XX....XXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.X..X..XX...XX....XX..XXXXXXXXXX", "XXXXXXXXXXXXXXXXXX..X..XX...X.X..XXX..X.XXXXXXXXXX", "XXXXXXXXXXX...XXX..X.X...XX..X.X..X..X.X.X...XXXXX", "XXXXXXXXXXXXX..XXX.X..XX.X..X..X.X.X...X..X.X.XXXX", "XXXXXXXX...X..X..X.XX.X..XX..X.....X.XX..XX...XXXX", "XXXXXXXX.X.XX.XX.X..X..X..X.X..X.X.X.X.X....XX.XXX", "XXX.XXX.X......X..X...XXX...X.X...X......XX..X.XXX", "XXX.XX....X.XX..X..X.X.X..X....X.X..X.X.X..X...XXX", "XXX.X.X.XX.X..X...X....X.X..XXX.X.X..XXX..X.XXXXXX", "XXX...XXXX.X.X..X..X.XX.X.X...X...XX..X..X..X.X.XX", "X..X.X..X.....X..X....X....X.X..XX...X..X.X.X.X.XX", "X.X....X.XXX.X..X..X.XX.X.X...X.XXXX...XX.X.....XX", "....X.XX.X....XXXXX..X.X..XX.X...X...X......X.XX..", "X.X..XX..X.X.X..X..X....X..X.X.X..X.X.XXXXXX.XXX.X", "...X...X..X....X.X...XX..X...XX..X..X.........X...", "X.X..X.X.X..XXX....XX..X..XX...X..X...XXX.XXXX..X.", ".X.XX..X..X....XX.X..X..X.X..X.X.X..X.X..X...X.X.X", "......X.X.X.X.X.X.X.X..X..X.X..X..X..X..X.XX......", "X.X.X........X...X..XX...X...XX.X.X.XX.XX....XXX.X", "XX.X.XXXXXX.X.X.X.X...XX..X.X.............X.X...XX", "..............X.....X.X.X.....X.X.X.XX.X.XX...X..X", ".XX.XX.XX.X.X...X.XX......X.XX.X.X.X..X..X..XX.X..", "X..X.X.X..XXX.X.XX.X.X.X.XX..........X.XX..X....X.", ".X.X..X..X...X.X......X....X.X.X.X.X.....X.X.X.X.X", ".....X..XXXX....X.XX.X..XX.X.X..X..X.XXX..XXX..X..", ".X.X..XX.X.XX.X...X.X..X..X..X.X.X.XX...XX.X.X.X.X", "X.X.X.XX......XX.XX...X.X..X.X...X....X...........", ".........XX.X..X.X.XX.....X...X.X..X.X.X.X.XX.X.X.", "X.XXX.X.X..X.X.X.X....X.X.X.X..X.X..X.....X....XX.", ".X....X..X......X..X.XX.XX...X...X.X.XXX.XX.X.X...", "...X.X..X.XX.X.X..X..X...X.X.X.XX......X.X.XX.X.X.", ".X..X..XX.X.X...XXXX.X.X..X.X...X.XXX.X......X..X.", ".X.X.XX.......X.X.X...X..X...X.X.X...X..X.X.XX.X..", ".XX.....X.X.X..X....X..X.XX.X......X..X.X.X.X.X..X", "X.X.XX.X..X.X.X..X.X.X.X.....X.XX.XX.X...XX....X.X", ".....X.XX.XX...X.X.X...XX.XX.X.X....XXX.X...X.XX..", "XXX.X.X.....X.X..X.X.XX....X.X..X.X.XXX.XXX..XXXX.", "XXXX....X.X..XXX.X..X..X.X.X.X.X...X.X..XXX.XXXXXX", "X.X..X.XX..XX.X...X...XX.X..XX.X.X...XX.XXX...XXXX", "X...XXX...XX....X.XX.XX..XXX....X..XX.XX.X..XXXXXX", "XXX.XX..X...XXX.X.X..X.X...X.X.XXX.......XX..XXXXX", "XX*.X..X..X..X...X..X....X..XX...X.X.X.XXXX.XXXXXX", "XXX.X.XXX.X.X..X.MX.X.XX.X.X...XXXXX.X.XXXXXXXXXXX", "XXXXXXX...X..X..XX.X...X.X..XX.X.XXXXXXXXXXXXXXXXX", "XXXXXXXX.XX.X..XXX...X.X.X.XXX...XXXXXXXXXXXXXXXXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> maze = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXX..XXX.XXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXX..XXX..XXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXX..X.X..XXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXX..X..X.X.X.XXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXX.XX..X.....X.XXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXX.X.XX..X.X..X.XXX.X.X.XXXXXXXXX", "XXXXXXXXXXXXX..XXXX...XXX...X.XXXXX......XXXXXXXXX", "XXXXXXXXXXXXXX..XXXX.X.X..X....XXX..X.X.XXXXXXXXXX", "XXXXXXXXXXXXXXX...X....XXX..XXX.X.X..XXXXXXXXXXXXX", "XXXXXXXXXXXXXXX.X..X.XX.X.X...X...XX..X..XXXXXXXXX", "XXXXXXXXXXXX.XX.XX....X....X.X..XX...X..X.X.XXXXXX", "XXX.XXXXXXXX.X..X..X.XX.X.X...X.XXXX...XX.X.XXXXXX", "XX..XXXXXXX...XXXXX..X.X..XX.X...X...X......XXXXXX", "XXX..XXX.XXX.XXXX..X....X..X.X.X..X.X.XXXXXX.XXXXX", "XXXX...X..X....X.X...XX..X...XX..X..X.........XXXX", "XXXX.X.X.X..XXX....XX..X..XX...X..X...XXX.XXXX..XX", "XX.XX..X..X....XX.X..X..X.X..X.X.X..X.X..X...X.XXX", "X.....X.X.X.X.X.X.X.X..X..X.X..X..X..X..X.XX......", "XXX.X........X...X..XX...X...XX.X.X.XX.XX....XXX.X", "XXXXXXXXXXX.X.X.X.X...XX..X.X.............X.X...XX", "XXX...........X.....X.X.X.....X.X.X.XX.X.XX...X..X", "XXX.XX.XX.X.X...X.XX......X.XX.X.X.X..X..X..XXXX..", "XXXX.X.X..XXX.X.XX.X.X.X.XX..........X.XX..XX...X.", "XXXX..X..XM..X.X......X....X.X.X.X.X.....XXXXX.X.X", "XX...X..XXXX....X.XX.X..XX.X.X..X..X.XXX..XXX..X..", "XXXX..XX.X.XX.X...X.X..X..X..X.X.X.XX...XX.X.X.X.X", "XXX.X.XX......XX.XX...X.X..X.X...X....X...........", "X........XX.X..X.X.XX.....X...X.X..X.X.X.X.XX.X.X.", "XXXXX.X.XX.X.X.X.X....X.X.X.X..X.X..X.....X....XX.", ".X....X..X......X..X.XX.XX...X...X.X.XXX.XX.X.X...", "...X.XX.X.XX.X.X..X..X...X.X.X.XX......X.X.XXXXXX.", ".XXXXXXXX.XXX...XXXX.X.X..X.X...X.XXX.X......XXXX.", "XXXXXXX.......X.X.X...X..X..XX.X.X...X..X.X.XXXXXX", "XXX..*..X.X.X..X....X..X.XX.X......X..X.X.XXXXXXXX", "XXXXXX.X..X.X.X..X.X.X.X.....X.XX.XX.XXXXXXXXXXXXX", "XXXXXXXXX.XX...X.X.X...XX.XX.X.X....XXXXXXXXXXXXXX", "XXXXXXX....XX.X..X.X.XX....X.X.XX.XXXXXXXXXXXXXXXX", "XXXXXX..X.XXXXXX.X..XXXX.X.X.X.X...XXXXXXXXXXXXXXX", "XXXXXXXXX..XXXX...X..XXX.X..XX.XXX..XXXXXXXXXXXXXX", "XXXXXXX...XXXX..XXXX.XX..XXX....X..XXXXXXXXXXXXXXX", "XXXXXXXXX...XXX.XXXX.X.X...XXX.XXX..XXXXXXXXXXXXXX", "XXXXXXXXX.X.XX..XXXXX....X..XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXX.X.XXXXXXXXXXXX.X.XXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> maze = {".XX.X..X....XX..X..X..XX.....X..X..X.X........X...", ".X..X.X.X.X...X.XX..X...X.X.XX.XX.XX..X.X.X.XX.X.X", "...XX...XX.X.X....X.XX.X..X....X.....X..X.X.X.....", "XX....XX.....X.XX....X.X.X..XX.X.X.X..X..X...XX.X.", "X.X.X...XXXX..X..XXX.X..X.X.X.X..X..X..X..X.X..X..", "..X..XXXX....X.X...X..X*.......XX.X..XX..X.X..X..X", "X...XX..XX.X.X.X.X...X.X.X.XXXX...X.X...X....X.X..", "..X.X..X..X....XX..X...XX......XX....XX..X.X...X.X", ".XX.XX..X..X.X..XXX.XX...XX.X.X...XX..XX....X.X...", "XX.....XXX.X.X.X..X..X.X..X..X.XX.X.XX...XX..X.X.X", "X.XXXX..X..XX...X..X..X..X.X....X.....XX...XX..X..", "X......XXX....XX.X.XX..X.....XX...XX.XX.X.XX..XXX.", ".X.X.X..X..XX.X......X..X.XX..XX.X...X..X....X.X..", "..XX..X..X.X...XX.X.X.X..X.X.X..X.X.X.X...X.X....X", "X.X..X..X.X..XX..X.....X.....X.X...X....XXX..X.X.X", "...XX.X.X..X.X..X..X.X..X.XX.X...XX..XX....XX...X.", "XX.X......X...X..XX.X..X.X.....X.X.X..XX.X.X..X...", ".....X.X.X.X.X.X.....X....XX.XX.XX..X...X.X..X.X.X", "X.X.X..X.X.X.X.X.X.XX.X.X.........X...X.X.XX....XX", ".XXX..X.....MX..X..X...XXX.X.X.X.X.X.X.X.....XX..X", "..X..X.X.X.X.X.X.X..XX..X.XX..X.X........X.X.XXX..", "X..X.X..X.X....X..X....X.....X...X.XXX.X..X...XX.X", ".X.XX..X....XX..X..X.X...X.X...XXX...X.X.XX.X...X.", ".X...X...X.X...X..XXX..XX..XX.X....XX.XX.X.X..X...", ".X.XX..XX.XX.X..X..XX.XX..X.XX..XX....X.X...X.X.X.", ".....XXX......X...X...X.X......X.XX.X...X.XX.XX.X.", ".X.X.....X.X.X.XX..X.X....X.XX.....X.XXXX......X..", "X.X.X.X.X.X.X.....X.X..X.XX...X.XX.X......XX.X..X.", "....XX.XX.....XXX.....X....X.X...X...XXXXX..X.XX..", "X.X....X.X.X.X..X.X.XX..X.X...XXX..X......X....XX.", "XX.X.X....X..XX....X...X..X.X....X..X.X.X...X.X.X.", "X....XX.X...X...XXX..X..X..X..XX.X.X...X..X.X....X", "..X.X..X..XX.XX....X.X.XXX..X..X.XX.X.X.X..XX.X.XX", "X..X.X...X....X.X.X..X.XX..XX.XX....X.X.X.X....XXX", ".XX...X.XXX.X....X..XXX...X.....X.XX.....X.XX.X.XX", "...XX....X...X.XX..XXX.X.X..X.X.X...X.XX....X....X", ".X....XXX..XX...XX.XX....X.X...X..X..X...X.X.X.XX.", "X..XX.X...XX..X...X...X.X...X.XX.X..XXX.X.XX.X....", ".X..XX..X.X.X..X.X..X..X..X..X..XXX..X........X.XX", ".X.X..X..X....X...X..XX..X..X.X.XX..X.X.X.XXXX.XX.", "....X...X.XXX.X.X..X...X..X.......X....X..........", ".X.X..X.X......XX.X..X.X.XXX.XXX.X..X.XXX.XX.X.XX.", "..X.X.X.X.XX.X...XXX..X..XX.....XX.X...X..X..X.X..", ".X.....X.X...X.X..X..XX.X...XX.X..XX.X.X.X.XX...X.", ".X.XX.X..X.X.X..X.X.XX.X..X...X.X.X..X.X.X...XX.X.", "..X...XX....XX.X.X..X....X..XXX.X..XX..X...XX.X.X.", "XXXX.X.X.XXX...X.X.XXX.XX.X.......X.X.X..X..X...X.", "XXXXX....X...X...X..X..X....X.X.X....X..XXX.X.X.X.", "XXXX..XXX.X.X..X.XXX..X..XX.X..X..XX.XX..XX..XXX..", "XXXXX.X.....X.X.....X..X.X...X..X..X...X.X..XXX..X"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> maze = {"XXXXXXXXXXXXXX..X..X.XX.X..X.X.X.XX..X.X.XXXXXXXXX", "XXXXXXXXXXXXXX.XXX......X.X..X.....X.X.X...XXXXXXX", "XXXXXXXXXXX....X..X.XXX....X..XX.X.X.....X.XXX.XXX", "XXXXXXXXXXXXXX...X..X...XX.X.XX...X..X.XXXX..X.XXX", "XXXXXXXXXXXXX..XXXX.XXX...XX...X.X..X.X..XX.XX.XXX", "XXXXXXXXX.X..X..XX.X...XX.X..XX...X.X...X...X...XX", "XXXXXXXX....X..XXX..X.X.X..X...XX.X...X...XX.*XXXX", "XXXXXXXXXX.X.X..X.X.....X.XX.XX.....XX.XXX.X.XX.XX", "XXX.XXX......X.XX.X.X.X...X...X.X.XX.X...........X", "XX..XX.X.X.X...X...X.XXXX...XX.X..XX.X.X.X.X.X.XXX", "X.X....XX.XX.XX.X.XX..X..XX..X..X.......XXX...XXXX", "X...XX............X.X..X.X.X.X.X..X.X.X..X.X.XXXXX", "X.XXXXX.X.XX.X.X.X..X.X..X.X.X...XX.X.X.X...XXXXXX", "XXXXXX.XXX.X..XX..X....X.......XXX.X.X.XX.XXXXXXXX", "XXXX........XXX..X.X.X.X.X.X.XX....X.......X.XXXXX", "XXXXXXXX.X.XX..X...X.X.X..X.....XXX.X.XX.X...XXXXX", "XXXXXX.XXX.X..XXX.XXX..X.X..XX.X..X....XXXX.XXXXXX", "XXX.X...X....X.X...X.X..X.X...X.X.X.XX..XX.X.XXXXX", "..X..X.X.XX.XX.X.XX..X.XX...XX..X.....X......X..X.", "X.XX...X.XX......XXX.....XX.X..XXX.XX.X.X.X.XX.X..", ".....X......XX.X..X.XXX.X...X.X.XX.X.X.XX..XXX...X", ".X.XX.X.XX.XX.X.X.....X..X.X.............XX.X..XXX", "XXX.......X...X..XX.X..X...X.X.XX.X.X.XX..X...XXX.", ".X.XXX.XXX..X..X....XX..X.X...XX.X.X...XX.X.X..XX.", "......X..X.X.X..X.XX..X.X...X.......XXX..X...XX.X.", "X.X.X..X..X...X..X.XX.....XXX.X.X.X...X.X.X.X.....", "...X.X...X.X.XX.X.....X.X....XX..X..X.........XXX.", ".XXX...X.........X.X.X..X.X.X..X..X..XX.X.X.X....X", ".X...X.XX.X.XXXX..X.X..X.X....XX.X..XXX.XX...X.X..", "..XX..X..XXX...X.XX.X.X....X.X....X.XX....X.X.X.X.", "XXX.XX..X.XX.X.........XXX..X.XX.X....X.XX.......X", "XXX..XX.......X.X.X.X.X..XX.....X.X.X.X...XXXX.XXX", ".X.X...X.XX.XXXX..XX....X.X.X.X...X..X.X.X...X.XXX", "...X.XX..X..X.X..X.XXX.X..X..X.XX..X...XX..XXXXXXX", "XX......X..X...X.X.....X.X.X....X.XX.X....XXXXXXXX", "X.X.X.X.XXX..X...XX.XX......XX.X....X..X.XXXXXXXXX", "X....XX....X..X.X...XX.X.XX..X..X.X.XX.X....XXXXXX", "XX.X.X..X.X..X.X..XX...X..XXX..X.X...X..X.XXXXXXXX", ".XX..X.XX.X.X....X..X.X.X....XX...X.XXX.XXXXXXXXXX", "....X..X..XX.XXX...XX.X..X.XX...XX...XX...XXXXXXXX", "XX.X..XX.X.....X.XX....X......XX.XX.X...XX.X.XXXXX", "XXXX.XX..X.XXX.....X.X.XX.X.X.....X.X.X......XXXXX", "XXX..X..X..X...X.XX..X..X.X..XX.X..XXX..X.X.XXXXXX", "XXX.XXXXXXX..X.X...XX.XX..X.X.X..X.XXXXXX.X.XXXXXX", "XXXXXXXXX...XM..X.X......X....X.XXXXXXXXXXXXXXXXXX", "XXXXXX....X.X.X..XXX.X.X..X.XXX.XXXXXXXXXXXXXXXXXX", "XXXXXXX.X.XX..XX...X.X.XX..XXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXX...XX...X.X..X...X.XXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXX.XXXXX..X..X..X.X.XXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXX...X..XX.X..XXXXXXXXXXXXXXXXXXXXXXXXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> maze = {"..XXX.X.X..X.....X....X....X.X.X.X...XX...X..XX..", ".X......X.X.X.XX...XX...X.X..X...X.XX..X.X..X...X", ".XXX.XX...X..X..XXX...X..X.X..XX.X...X.X.XX.XX.X.", "..XXX.X.XX..X..X..X.XX.X.....XX...X.X..X.....X.X.", ".X.X..X..XX..X..X.XX...X.X.X....X.X...X..X.X.....", "....X..X...X..X....X.XX.X.X..XXX...XX..X.XX.X.XX.", "X.X...X..XX.X..XXX...X....X.X....X.X..X.....XX..X", ".X..X.XX.X...X....X.X..X.X...X.X..X..X.X.XX....X.", "...X.....XX.X.XX.X...XX...XX.X.X.X.X.....X.XXX...", "X.XXX.XX.......X..XX...XX..XX.X......X.X...X.X.X.", "...X..X..X.X.X...X.X.X..X.X.X..X.X.XX.XXX.X..XX.X", "X.X..XXX.X..X.XX.X..X..X..X..X..X...X..X...X.....", "XX.XX.X...XX.....X.X.X..X..X...X..XX..X..X...X.X.", "X..X...X.X...X.X...X.X.XXX..XX..X....XXX.X.X..XXX", "..X.X.X.X.X.X.XXXX.....XXXX.X.X...X.X.X.X.X.XX.X.", "X.........XX...X..X.XX..XX..X..X.X...............", "XX.XX.X.X...X.XX.X.X...X..X..X.X.X.X.X.XX.X.X.X.X", "X.X..XXX..X.X.X......X..X..X.X.X..XXXXX.XX.X.XX..", "...X.XX.X..X..X.X.X.X.X.X.X....X.X.X.X.....X...XX", "XX........X.X....X....X.X..X.XX........X.XX..XX..", ".X.X.X.XX.....X.XXX.XX...X......X.X.XXX...X.X.XX.", ".XX.X.X..X.X.X.X.X.XX.X.XXX.XXXXX.X....X.X.......", ".......X....X..X.X.X.....X.......X..XXX.X..X.XX.X", "X.X.X.XXX.XXXX.X.....XX.X.X.X.X.X.X.......X.X...X", "..X.X..X..X.X...XX.XX........XXX..X.X.X.XXX.XX.X.", ".X.X.X..XX...X.X..X.XX.X.XXX..X..X...X........XX.", "X....X.XX.XX....X......X....X...X.X.X..X.XXX.X...", "..XX.........XX...XX.XX..X.XX.X....XX.X.....X.XX.", "X..XX.XX.X.X.X..X..X.X.X.X.X..XX.X.X.XXX.XX......", "..X..X....XX.X.X..X.X.....X.X..XX.X...X..XX.XX.XX", "X.XX..X.XX...X..XX....XX.XX..X....X.X.XX...XX....", "XX..X.....XX.X.X..X.X.X.....X.X.X....X.XXX...XX.X", "X.X...XXXX....XX.X.XX.X.X.X...X.X.XX......X.X....", "...X*X....XX.X.........X...XXX...XX..XX.X.X..X.X.", "X.XX..X.X...X.XXX.X.X.X..X.X...X...X..X.X..XX..X.", ".....X.XX.X.......XX.X.X..X.X.X..X..XX...XX.XXX..", ".XX.X......X.X.X.X.......X.....X.XX..X.X.XX...X.X", ".X..X.X.X.X..X.X..XX.X.XX.X.X.X....X.X.X....XX...", "XX.XX..X..X.X.X..X...XXX..X..X..X.X..XX..X.X..X.X", ".....X..XX.....X.X.X.....X..X.X.X.XX...X..X..X...", ".X.X..X..XX.XXXXX...X.X.XXX.X.X..X..X.X.X.XX.XX.X", ".X..X.X.X..X...X.X.X...X.X.....X...X....X......X.", ".X.X.X..XX..X.X.....X.X....X.XX..X..XX.X.X.X.X...", "..XX...X...X...XXX.X..X.X.X...XX.X.X.XX....X.X.X.", "X..XX.XX.X...X....X.X..X...X.X...X.....X.X.XX.X..", "XXXXMX..XXX.X.X.X...X.XXX.X...X.XX.XX.XX.X....XX.", "XXX....X.XXX...X..X....X...X.XXX.....X..X..XX...X", "XXXXXX....X.XX.X.XXX.XX..X.XX.XXX.X.X..XX.X...X.X", "XXXXXXXX.X........X....XX......X..X...X....X.XX..", "XXXXXX.....X.X.X.X..X.XXXX.X.X..X..X.XXX.X..X...X"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> maze = {"XXXXXXXXXXXXX.X...X.XXXXXXXXX....X..X.X.XXXXXXXXXX", "XXXXXXXXX.X.X.XXX.X..XX.XXXXXXXX...X..X.....XXXXXX", "XXXXXXXXX......X..X.X....XXX...X.XX.X.X.XX.XXXXXXX", "XXXXXXXX..XXX.X.X.X...X.X...XX....X......XXXXXXXXX", "XXXXXXXXX.X.X...X..X.X.X..XX..X.XX.X.X.X..XXX.XXXX", "XXXXXXXX.X...XX.X.X.....X...X....X.X.XX.X.XX..X.XX", "XXXXXXXX.XXX.X....X.X.XX..XX..XX.X.X..X..X..X.X..X", "XXXXXXX........X.X..X.X..X...XX.X...X..X...X....XX", "XXXXXX..XXX.XXX...X..X.X.X.X.X..X.XX..X..XX..XX.XX", "XXXXXXX.X.XX...X.X..X..X..X....X..X..X.X....XX..XX", "XXXXXXXX.....X...XX..X.X.X..XXXXX..X.....XX...X.X.", "XXXXXXXXX.X.X.XX....X..X...X...X..XX.X.X...XXX.XX.", "XXXXXXXX.X.X...X.X.X..XXXX.X.X..X.....X.XX...X....", "XXXXXXX......X..X..XX..X....XXX.X.X.X.....X.XXXX.X", "XXXXX..X.X.XX..X.X...X..X.X.XXX.X..X.X.X.X.X..X...", "XXXXXX..X.X..X...X.XX.X..X...X....X..XX.X....X.X.X", "XXXXX.X.X...X.XX.......X.X.X...XX..X..X..XX.X..X..", "XX....X.XX.X...X.XX.XX.X.X..X.X.X.X.X...X.....X..X", "XXX.X........X..X.X...X...X.X....X....X...XX.X.X.X", "XXX.XX.X.X.X..X...*.XX.X.X.X..X.X.X.X..X.X........", "XXXXXXX..X.X.XXXX.X........X.X.XX....X..X.X.XX.X.X", "XXXXXX.X.X..X.X....X.XXXXX........XX..XX..X..X.X..", "XX......X.XX....X.X.X......XXX.XX.X.XX...X.XX.XX.X", "X..XXX.X.....XX.X.X..X.XX.XX..XX.X....X.X..X...X.X", "XXX......XX.X....X.X..XX.....XX....XX...X.X..X..X.", "XX..XX.X...XXX.XX..X.X..XX.X....X.X..XX....X..X.X.", "XXX.XXX.X.X.X.XX.X.....X...X.X.X.X..X.XX.X...X.X..", "XXXXXX...X..X......X.X...X..X.X..X.X....X..X....X.", "XX.XX.XX..X..XX.XX.X.X.X.XX.X..X.....X.X.XXXXXXX..", "...X...XX..X.X..X.X..X..X.....XX.XX.X.X....X.....X", "XX...X....X....X...X.X.X..X.X.....X.....XX...X.X..", "XXX.XXX.X...X.XX.X...X..X.X..X.X.X..X.X.X.XXX.XXX.", "XX..XX...X.X.X...X.X.X.X..X.X.X..XX..X.........XX.", "XXX.XXX.X.X....XX...X...XX....XX..X.X.X.XX.XX.X..X", "XX.XXX.XX...XX.X..X..X.X...X.X..XX.....X...XX.X.XX", "X...XX.X.XX.X...X..X.X..X.X....X..X.X.XXX.X.......", "XXX.......XX..X.X.X.X..XXX..X.XXX.X.X..X.X..XX.X.X", "XXXX.XX.X....XXX..X..XXXXX.X...X..XX.X....XX...X.X", "XXXXXXXX.XXX.XXXX..X...XX.X.X.X.X..X.XX.X..X.X.X..", "XXXXXXXX......XX..XXXX....X.......XX...X..XX.XXXXX", "XXXXXX...X.XX...X..X...XX.XXXX.XX....X..X.X..XXXXX", "XXXXXX.X..X...X.X.X..X.X......M..X.X..XXXXXX.XXXXX", "XXXXXXXXXXXX.X..X..XX..X.X.X.X.X..XX.X.XXXXXXXXXXX", "XXXXXXXX.XXX.XX..XXXXXX.XX.X.X.XX.X.....XXXXXXXXXX", "XXXXXXX........XX...X.X....X.X...X.X.XXX...XXXXXXX", "XXXXXX..XX.X.X..XXX.....XX.X..XXX..X..XX.XXXXXXXXX", "XXXXXXX.XXXXXXXXXXXX.XX.X...X.....X.XX....XXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX...XXXXXX.X.X...X.XXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXX...X.....X..X...X.......XXXXXXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> maze = {"XXXXX.XXXXXXX.X..X..X....X..X.XXX..XXX.XXXXXXXXXX", "XXXXX.XX.X.X....X.X..X.X.XX....X..XXXX.XXXXXXXXXX", "XXXXX.XX.X..XXX...XX....X.X.X.X.X.XXX..XXXXXXXXXX", "X.X.X.XX..X.X.X.X..X.XX.X.X..XX.X..X..X.X.XXXXXXX", "X.......X...X.X.X.X..X.X...X....X.X.X...X..XXXXXX", ".XXX.X.X.X.X..XX..X.X..X.X.X.X.X....X.X...XXXXXXX", ".X....X.....X.X.X.X...X...XX..X..XX.X..X.XXXXXXXX", ".XX.X..X.XX.X.X....X.X.X.X..X...XX...X.XXXXXXXXXX", ".X.X.X..X.....X.X.X..X....X.X.X...XXXX..XXXXXXXXX", ".X...X.X..XX.X.X....X..X.X..X..XXXXX.X.X..XXXXXXX", "...X....XX.X.X.X.X.XX.X.XX.X..X....X.....XXXXXXXX", ".XX..XX.........X..X.........X..X.X..X.X.XXXXXXXX", "...X..XX.X.XX.XX.X...X.X.X.X.XXX...XX..XX..XXXXXX", ".XX.XX.X.X.X.....X.X.XXX..X...X.X.X..X....XXXXXXX", "X...X...X.X.XX.XX.X.....XXMXX.X....X.X.X.XX.XXXXX", "..X.XX.X....XX....X.X.X.X....XX.X.X..X..XX...XXXX", "X.X....X.XX...X.X..X...XXX.X.X.XX.X.X..X...XX.XX.", ".X..XX...X.XX..X.X..XX..X...X..X.....X...X.......", "..X..XXXXX.X.X.....X.X.X..X.X.X..X.XX..XXXX.XX.X.", "X...X..........X.X...X.XX..X...X..X.X.X..X...XX.X", "XX.X..XX.X.XX.X.X..X.X....X..X..X......X..X.X....", "X..XX...X..XXX....X..XXXX.X.X.XX..XX.XXX.X.X..X.X", "XX.X..XXXX..X.X.X..X.............X.XXX.......XX.X", "XX.XXXX.X..X...X..XX.X.XX.XX.X.X.......X.X.X...XX", "XXX...X.XXX.X.XX.X..X....X.X..X..X.X.X..XX.X.X.XX", "XXX.X...........X.X.X.XXXX...XX.X..XX..X..X..X.XX", "XXXXXX.X.XX.X.X.X.........X.XX..XX...X...X.XXXXXX", "XXXXXXXXX....X....X.X.X.XX..X.XX.X.XXXXXXX...XXXX", "XXXXXXXXX.XX..X.X..X...X.XX.......X........XXXXXX", "XXXXXXXX.XX.XX..XXXX.X....X.X.X.X..XX.X.XX.XXXXXX", "XXXXXXX.......XX.....X.XX.X.XX..XX.....XXXX.XXXXX", "XXXXXX..X.XXX....X.X.X..X.X...X..X.X.X..XXX..XXXX", "XXXX...XXX...X.XX.XX.X.XXX..X.X.X...X.XX.X.X.XXXX", "XXXXXX.XXXXX...X.....X..X.X.X..X..X...........XXX", "XXXXXXXXXX..X.XXX.XX..XXX....X.XX.X.XXX.X.X.XX...", "XXXXXXXXXXX...X...X.X.X...X.X...X.X.X....X.....XX", "XXXXXXXXXXX.X..XXX.....X.X...XXX.X..XX*X..XX.X..X", "XXXXXXXXXXXX..X....X.X.X..X.X....X.X....XX.X..X.X", "XXXXXXXXXXX..XXXXX.X.X.X.X....XX.XXXX.XXXX...XX.X", "XXXXXXXXXXXX.X.....X..X.X..X.XX.X.XXX.XXXXXX..XXX", "XXXXXXXXXXXXXXXX.X..X.X...X........X....XXXXXXXXX", "XXXXXXXXXXXXXX...X.XXX..X.XX.X.XX.XXX.XXXXXXXXXXX", "XXXXXXXXXXXXXXXX.X.XX..X...X.XX.XXXX..XXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXX.XX.X.......XXXXXXXXXXXXXXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> maze = {"XXXXX.X.XX...X....XXX.X.XX.........X.X........XX.", "XX.XX......X..XX.X.X.......XXX.XX.X...X.X.X.X..X.", "....XXX.XX.X.X.X.X..XXXX.X...XXX.X..XX...X.X.XX..", ".XX..X.X.XX..X.X..X.X..X.X.XX....XX.X..X...X.XXX.", "XXXX.......X.X...X..X.XXX...XX.X....XX.XXXX...X..", "XXX.XX.X.X.....X.XX.X..X..XX..X..XX.......X.X..X.", "XX....XXX.XXX.X.X....X..X..X.X.X...XX.XX.XX..XXX.", "X.X.XX.X......X.X.X.X..X.X.......XXX.X..XX..XX...", ".....X..XX.XX....X..XX.X...X.XX.XX....X.X.X...X.X", ".XX.X.X.XXX..X.XX..X....X.X..XXX..X.X...X.X.XX...", "X........XX.X....X..XX.XXX.X..X..X...X.X.......X.", "..X.X.XX......X.X..X.X..X..X.X..X.X.X....XX.X.X..", ".XXX.X..X.X.X.XX.X.....XXX.....X...X..X.X...XXXX.", "X.X...X.XX.X.......XX.X.X.X.XXX.XX...X...XX...X..", "X...X.......X.XXX.X..X......X......X.XX.X..X.X.XX", "..X.X.XX.XX.XX......X.X.X.X..XX.X.X.X.X..X...M.X.", ".X.X.X..X......XX.X....XXX.X.....X.....X..X.X.X..", ".X.....X..XX.XX....XXX..X...X.XX.X.X.XX.X..X.X..X", "X.XXX.X.XX..X..XX.X....XXX.X...XX...XXX.X.X...X..", "....X.X....X..X..X.X.X..X..XX.X.X.XX.X...XXX.XX.X", ".X.X....XX...XX.XX....X..X.........X...XX.X..X...", ".XX..X.XX.XX......XX.XXX.X.X.XX.XXX..X..X..X...X.", "....X.X......XXX.X.X..X.....XX.....X.XXX..X.X.XX.", "X.X.X.XXX.XXXX.X....XX..X.X...X.X.X....X.X....X..", "XX.X.....X.......XX....XXX..X..X....X.XX...X.X.X.", "XX...XX.XXX.XXXX...XX.X.X.X.X.XX.X.X.X...X.XX...X", "X..X...XXX.XX...X.X.....X.X.X...X......X..X.XX.X.", "..X..X..X.....XX.X..X.X.X....XXXXX.X.X..X........", "X.XXX..X.XX.X.X...X.X.X.XX.X....X..X.X.X..X.X.X.X", ".....X....X.X..X.X...X...X.X.X.X..X...X.XX.XX..XX", ".X.XX.XX.X.X.X.....X..XXX...X...XX..X........XX.X", "X.XX...........XX.X.X.X...X..XX.X..X..X.X.XX.....", "..X.X.XX.X.X.X..X....X.XX..XX....X.XX..X...X.XX.X", ".X...X.X..XX..XX..XX.....X...XX.XXX...X.XX.X..XX.", "...X.....XX..X..X..*X.X.XX.XX.XX.X.X.X..X.XXXX...", "XX..XXXX...XX.X...X..XX.X......X......X.X.XX.X.X.", "...X.....X.X....X..X...X..XX.X.XX.X.X...........X", ".X.X.XX.XX.X.X.X.X.X.X..X.X...X...X.X.X.X.X.X.XX.", "..X.X.X.X.XX.X...XX...X.X..XX.X.XXX..X..XX..X....", ".X......X.X..X.X...X.X...X..XXXX....XX.X..X..X.X.", "X..XX.X....XX...XX..X..X.X.X..X.X.X.X....X..X..X.", ".X...X..X.X...X...X..X.X.X.XX.X....XXX.XX..X.X..X", "...X..X.X.XXX..X.XX.X.X.X.X.....X.XXX...XXXX..X..", "X.X..X...X....X..X.........X.XX.X..X..X.....X...X"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> maze = {"X..X.X.X...X...X..X....X..X..XX..XXX", "..XM.X..XX..X.X..X.XX.X..X.X....X.XX", ".X..XXX.X..X...X.X..X...XX..XX.XX..X", "..X.XX....X..XX..X.X.X.X..X......X..", ".X.....XX...X..X...X.X..X.X.X.XX.XX.", "..XX.XX...X.X.X.X.X....X..X..XXXX...", ".X..X..XX.X...X.X.X.XX...X..X.XXXX.X", "..X..X.XXX.X.X..X..X...XX.X....XXX..", "X..X....XX.X..X.X.X..X......X.X.X..X", ".X..X.X.....X.X.X..XX..XX.XX.X...X..", "..X..XX.X.XX......X..X...X....XX.X.X", "X...X..XX...XX.XX.X.XXX.X..X.XXX.X..", "..X...X..XX.X.X.X....X..X.X.X.X....X", ".XXXX..X.X....X...XXX.X.X.*.X..X.X..", "X.X..X.X..X.X...X.X.....X.XXX.X..XX.", "X...X....XXX.XX.X.X.XXX.X.X.....X..X", ".X.X.X.X..X..XXX.......X...X.X.XX.XX", ".X....XX.X.X..X.XX.XX.X.X.X.X......X", "...XX......X.X.......X..X.....XX.X..", ".X..XX.X.X.....X.X.XX.X...X.X...X.XX", "X..X.X..X..XX.XXX......X.X.X.XX.....", "..X....X.X.X...XX.X.XX.........X.XX.", ".X.XX.X.....X.X..XX..X.XX.XX.XX.X.XX", "XX.XX.XX.X.X..XX....X...X..X........", "........X..X.X...XX..X.X..X..X.X.X.X", ".X.X.XXX.X..X..XX.X.X...X..X..X...X.", "..X..X.....X..X.X...X.X..X.XX.X.X...", "X.X.X.X.X.XX.X....X.X..X.X..X..XX.XX", ".X.X.....X..X..XX.X..X.X..XXX.X.....", "....X.X.X.X.X.X...XX..X.X....X.X.X.X", "X.XX.X..X...XX.XXX...XX..X.X.X...X..", "X.X...X.X.X.......XX....X.X...XX..X.", "....X....XXX.XXXX....X.X..X.X.X..X..", "X.X..X.X.XX.X.....XX.X..X..X.X..XXX.", "..X.X..XX.....XXX.X...XX..X...X..X..", ".X.X.X..X.X.XX....XXX....X..X.X.X..X", "X......X...X...XX...X.X.X..X.....X.."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> maze = {".X.....X.X..X..X.X...XXX", "..X.X.X....X..X...XX..XX", "X....X..XXX..X.X.X...X.X", "X.X.X.X.X...X....X.X.X..", "..X.......XX..XXX.X....X", ".XX.XX.XXX..X.X....X.X..", ".X.X.....X.X..XX.XX...XX", "X....X.X.X.X.X.....X.X..", "..XX.X.X.X...*.XX.X....X", "X.X...X..X.XX.X...X.XX..", ".X.X.X.X.X...X.X.X....X.", ".X..X......XX...XXX.X..X", "..X..XX.XX....XXXXX..X..", "X.X.X..X...X.X..XX..X.XX", "X.X...X..X.X...X..X.....", "...XX...X...X.X.X.XX.XX.", "X.X.XX.X..X..X.....X.X.X", ".......XX..X..X.X.X.....", "X.X.X.X...X..X.X....XXXX", "..X.XX.X.X.X.....XX.....", "X..X....X....X.X...X.X.X", ".XX.X.X...XX.X..X.X..X..", ".....X.XX.X...X.X..X.X.X", "XX.X...X.X.X.X.XX.X.X.X.", "..XXXX...........X..X.X.", "X.XX.XXXX.X.X.XXX..X....", "..........X.X...X.X.X.XX", ".X.X.XX.X.X.X.X.........", ".XX..X.X..X.X.X.X.XX.X.X", "...X.X...X..X..X..X.XX..", "XX.X..XX.X.X..X.X...X..X", ".XX..XX..X..X.X..XX..X..", "....X...X.X.X...XX.XX..X", "XMX.X.X...XX..X.....X.X.", ".X...X..X..XX..X.XX..XX.", ".X.X.XX.X.X..X..X..X....", "...X...XX..X.XX..X..X.XX", "X.XXX.X..XX.....X.X.X...", "...X...X....X.X.....X.X."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> maze = {"XXXX.XXXXXXXXXXXXXXXXXXXX", "XX.X.XXXXXXXXXXXXXXXXXXXX", "XX....X.X.XXXXXXXXXXXXXXX", "XXX.X.....X.XXXXXXXXXXXXX", "XXXX.X.XXX..XXXXXXXXXXXXX", "X.......X.X.XXXXXXXXXXXXX", "XX.XXX.X.....XXXXXXXXXXXX", "XXX..M...X.XXXXXXXXXXXXXX", "XX..X.XX..X..XXXXXXXXXXXX", "XXX.X.X..X..XXXXXXXXXXXXX", "XX..X..X...X.XXXXXXXXXXXX", "XXX..XXX.X.....XXXX.X.XXX", "XXXXXXXXXX.X.XXX.XX.X..XX", "XXXXXXXXXX.XXXXX....X.XXX", "XXXXXXXXX...XX..XXX....XX", "XXXXXXXXXX.XX.X..X..XXXXX", "XXXXXXXXX.......XXX..XXXX", "XXXXXXXXXXXXXX.X..X.XXXXX", "XXXXXXXXXX.X.X.X.X...XXXX", "XXXXXXXX...........XXXXXX", "XXXXXXXX.XX.X.X.XX....XXX", "XXXXXXXXXX..X.X.XXX.X.XXX", "XXXXXXXXXXX.X.X..X...XXXX", "XXXXXXXXXXXXX.*XX..X.XXXX", "XXXXXXXXXXXXXX..XX..XXXXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> maze = {".X.X....XX....X...X.X.X.X", ".X...X.X...X.X..XX..X....", ".XXX..XXX.X.X.X.X..X..X.X", ".....X.X..........XMX.X.X", ".X.X.....X.X.XX.X......XX", "X.X..X.X.X..X.X.X.XX.X...", "....X...X..XX....X...X.X.", "X.X..X.X*XX..XX.X.XX..X..", "XX..X..X...X..X...X.XXXX.", "X..X.X...X...X..X...X..X.", "..X....X.X.X..X..XX...XXX", "X.X.X.X...X.X.X.XXX.XXXXX", "XX.X...X.X..X.X.XX....XXX", "X...X.X....XX..X...X.XXXX", "XXX....X.X...X..XX..XXXXX", "XX..X.X..X.X..X...XXXXXXX", "X..X..XX.X..X.X.X..XXXXXX", "XX..X...X..X.X..XXXXXXXXX", "X..X..XXXX....X....XXXXXX", "XX.X.XX.X..XX.XXX.XXXXXXX", "XXXXXX....X...XXXXXXXXXXX", "XXXXX..X.XXXX.XXXXXXXXXXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> maze = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X................XXXXXXXXXXXXXXXXXXXXXXXX", "X.XXXXXX.X.X.X.X...........XXXXXXXXXXXXXX", "X......XXXXX.X..X.X.XX.X.X..XXXXXXXXXXXXX", "X.X.XX......XXXXXXXXXX..XXX...XXXXXXXXXXX", "X.X...X.X.X.........XXXXXXX.X.........XXX", "X.X.XXX.X..X.X.XX.X........XXXXX.X.X.XXXX", "X.X....XXX..XX.XXXXXXXXX.X......XXXXXXXXX", "X.X.XX....XXXX..........XXX.X.X..........", "X.X.XX.XX....X.X.X.XXXX....XX..XX.XX.X.X.", "X.X..X..X.X.XX.X.X.....XXX..XXXXXXXXXXXXX", "X..X.X.XX..XXX.X.X.X.X....X..............", "X.XX..XXX.XXXX.X.X..XX.XXXXXXXXXXXXXXXXX.", "X.XX.XXXX.XXXX.X.X.XXX..................X", "X..X.XXXX...XX.X.X.XXX.XX.X.X.X.XX.XX.X..", "XX.X....X.X...XX.X..XX...XXXX..XXX.XX..XX", "XX.XX.X.X.XXXXXX..X..X.X....X.XXXX...X...", "XX..X.X.X......XX.X.XX.X.XXXX.....XX.XXXX", "XX.XX..XX.X.XX...XXXXX.X.....XX.X..X.....", "XX..X.XXX.X.XX.X.....XXXX.X.XXXXX.XXX.X.X", "XX.XX.XXX.X...XX.XXX.....XX...M..XXXX.X..", "XX..X...X.XX.XXX....XXXXXXXX.XXX....XXX.X", "XX.XX.X.X..X.XXX.XX.......XX....XXX...X..", "XX.XX.XXXXXX....XXX.X.X.X...X.X....XXXXX.", "XX..X......X.X.XXXX..XX.X.XXXXXXXX.....X.", "XX.XXX.X.XXX..XXXXX.XXX.X.........XX.X..X", "XX.XXX.X...X.XXXXXX....XXX.X.XXXXXXXXXXXX", "XX...X.X.X.X.XXXXXXX.X...X.X.............", "XX.X.X.X..XX..XXXXXX..XX.X.X.X.XX.X.X.XX.", "XX..XX.X.XXXX......X.XXX.X..XX..X.XXX..X.", "XX.XXX..XXXXX.X*XX.X.XXX..X..XXXX...X.XX.", "XX....X.....X.X...XX....X.XX.....X.XX...X", "XX.XXXXX.XXXX.X.X...X.X.X..X.XXX..XXX.X..", "XX.XXXXX....X.X.XXX..XX..X.X...X.XXXX.X.X", "XX.XXXXXX.X.X.X....X...X.X.X.X.X....X.X..", "XXXXXXXXX..XX..X.X.X.X.X.X.X..XX.X.XXXXX.", "XXXXXXXXX.XXXX.X..XX..XX.X..X..X.X.....X.", "XXXXXXXXX....X.X.XXX.XXXXXX.X.XX..X.X.XX.", "XXXXXXXXX.XXXX..XXXX......X.X..XXXX..XXX.", "XXXXXXXXX....X.XXXXXX.XXX..XXX.....X.XXXX", "XXXXXXXXXX.X.X......X....XXXXX.X.X.X.....", "XXXXXXXXXX..XXX.X.X.X.XX.....X.X.XXX.XXX.", "XXXXXXXXXX.XXXX.X.X.X...XX.X.X.X...X....X", "XXXXXXXXXX....X..XX..X.XXX.X..XX.X..X.X.."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> maze = {"..X.X..X.XX..X.XXX.X..XX..X....XXXXXXXXXX", "X....X...X.X.X.XX...X*X.X.XXXX.XXXXXXXXXX", ".XXX.XXX.X.X.....XX.X.X.X.XXX..XXXXXXXXXX", ".....X.X.X.XXXXX....X......X.X.XXXXXXXXXX", "XXXX.X.....XXX..XXX.XXXXXX.X....XXXX.XXXX", ".XXX..XXXX..X.X......XXXX..XXXX.XX.X.XXXX", ".XX.X.X..XX.X.XXXXXX.XXX.X.X....XM...XXXX", ".X.....X.X..X..X.XX..XX..X.XXXX.XXXX.X.XX", ".XXXXX.X.XX..X.X.X.X.X.X.X..XX..XX.....XX", "..X.X....X.X.X.X.X...X....X.X.X.XXXXXX.XX", "X.X.XXXX.X...X.X..XX..XXX.X.X....XXXX..XX", "..X.XXX..XXX.X..X.X.X...X.X.XXXX.XXX.X.XX", "X...XX.X.....XX.X....XX...X.X.....X....XX", ".XX.X...XXXX..X..XXX.X.XX.X.XXXXX..XXX.XX", ".X..XXX.X..XX..X.XXX.X......XXXX.X.XX..XX", ".XX.X.X.XX.X.X.X.XX..XXXXXX..XX..X.X.X.XX", ".............X.X...X.XXXXXXX.X.X.X.X...XX", "XXXXXXXXXXXX.X.XXX....XXXXXX.X...X.XXX.XX", "X..X.XX.........X.XXX.XXXXX..XXX.X.XXX.XX", ".X.....XXXXXXXX.X.XX..XXXX.X.X......X..XX", ".XXXXX....X.X...X.X.X.XXX....XXXXXX.XX.XX", "..X...XXX....XX.......XX.XXX.X..X.X.XX.XX", "X.XXX....XXX.XXXXXXXX....XXX.XX.X...X..XX", "..X.XXXX......XX.....XXX.XX...X.XXX.XX.XX", "X.X.XXX.XXXXX.X.XXXX.....X.XX.X.XXX.X..XX", ".....X..X.XX.....X.XXXXX...XX.X.XX..XX.XX", "XXXX.XX.....XXXX.X.XX.X.XX......X.X.X..XX", "...X...XXXX.X....X.X..X..XXXXXX.X.X.XX.XX", "XX..XX.XXX..XXXX...XX..X.XX...X.X....X.XX", "..X.XX.XX.X.X.X.XX.XXX.X.X.XX...XXXX.X..X", "X..................XXX.X.X.XXXX.XXXX.XX.X", ".XXXXXXXXXXXXXXXXX.XX..X.X.XXXX.XXX..XX.X", "..............X....X.X.X.X.XXX..XX.X.X..X", "XXXXXXXXXXXXX..XXX.....X.X.XX.X.X..X..X.X", ".X.X.XX.XX..XX....XXXX.X.X.X....XX.XX.X.X", "..........X.X.XXX..........XXXX....XX.X.X", "XXXXXXXXX......X.XXXXXXXXX.XX..XXX....X.X", ".X.X.X.X.XXXXX........X.XX.X.X..X.XXX.X.X", "............X.XXXXXXX.........X.X.X...X.X", "XXXXXXXXXXX...XXX..XXXXXXXXXX......XX.X.X", "XXXXXXXXXXXXX..X.X.XX.X.X..X.XXXXX......X", "XXXXXXXXXXXXXX...........X.X.X.X.XXXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXX................X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> maze = {".X....X...XX.X.....XX.X.X.X.XX.X..X.X..X.XXXXX", ".XXXX.XXX.X...XXXX....X...X.X..XX...XX.X..XXXX", ".XX....X..XXX.X.X.XXX.XXX.X..X...XX.XX.XX.XXXX", ".X.XXX.XX.X...........X.X.XX.XXX.X..X.....XXXX", ".X.XX..X..XXXXXXXXXXX............XX.XXXXX.XXXX", ".X.X.X.XX.XX.XX..X.X.XXXXXXXXXXX.....XXX..XXXX", ".....X.X..X..X.X.X......X.X..X..XXXX..X.X..XXX", "XXXX.X..X.XX.X.X..XXXXX.X.XX..X...XXX.X..X.XXX", "XX.X.XX...XX.X.XX.X.XX..X.X.X..XX.XXX..X...XXX", "X......XX.X..X.X..X.X.X*X....X.X...X.X..XX.XXX", ".XXXXX.X...X.X..X.X.....XXXX....XX....X.X..XXX", "........XX.X..X.X.XXXXX.X.X.XXX.XXXXX...XX.XXX", "XXXXXXX..X.XX.X...XXX.....X..X..XXX..XX.X..XXX", "..X..X.X...X...XX.XX.XXXX.XX..X.XX.X.X..XX.XXX", "X.XX...XXX..XX.X..X...X...X.X...X..X.XX.XX.XXX", "..X.XX.XX.X.XX.XX.XXX.XXX...XXX..X.X.X.....XXX", "X..............XX.XXX....XX.X.XX.X.X.XXXXX.XXX", ".XXXXXXXXXXXXX.....X.XXX....X.X..X...XXXXX..XX", ".XX.X.......XXXXXX.X.X.XXXX.X..X..XX.XXXX.X.XX", ".X..XXXXXXX.XX.XX..X.X.XX....X..X.X..XXX.....X", "..X.XX.XX......X.X.X.M.X.XXX..X.X.XX..X.XXXX.X", "X......X.XXXXX......XX.X.X.XX.....X.X.X..X...X", ".XXXXX.X.X.X.XXXXXX.X..X.X.XXXXXX......X..XX.X", ".............X.XX.X.XX.X....X.XX.XXXXX.XX....X", "XXXXXXXXXXXX...........XXXX.X.X..XXXX..X.XXX.X", ".X.......XX.XXXXXXXXXX.XX.X.X.XX.XXX.X.X.X.X.X", ".XXXXXXX.......XX.............X..XX....X.....X", ".X...X.XXXXXXX...XXXXXXXXXXXX..X.X.XXX.XXXXX.X", "..XX.X.X.X.X.XXX.......XX.X.XX..........XXX..X", "X.X..........XX.XXXXXX.X....XXXXXXXXXXX.XX.X.X", "..XXXXXXXXXX............XXX.XXX..X..XXX.X..X.X", "X..XX.XX....XXXXXXXXXXX.....XX.X.XX.XX..XX.X.X", ".X....X.XXX.X.XXXXXX.X.XXXX.X....X..X.X.X....X", ".XXXX.X.XXX.X.XXXXX..X.X.....XXX.XX......XXX.X", "........XX.....XXX.X.X..XXXX.XX..X.XXXXX..X..X", "XXXXXXX.X.XXXX.XX.....X.XX.X.X.X.X....X.X..X.X", ".X.............X.XXXX............XXXX.X.XX...X", "..XXXXXXXXXXXX.....X.XXXXXXXXXXX..XXX...X.XX.X", "X..X.X..X.....XXXX....XX..X.X..XX.XX.XX.X.X..X", "XX....X.XXXXX.X.X.XXX.X.X.X.XX..........X.XX.X", "XXXXX.....................X.X.XXXXXXXXX......X", "XXXXXXXXXXXXXXXXXXXXXXXXX..............XXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.......X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> maze = {"*M"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> maze = {"..........*", ".XXXXXXXXXX", "...........", "XXXXXXXXXX.", "M.........."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> maze = {".X.X......X", ".X*.X.XXX.X", ".XX.X.XM...", "......XXXX."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> maze = {"...", "XMX", "..*"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
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
    vector<string> maze = {"*.M", ".X."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> maze = {"X.XX.", "X.XX.", "X....", "XX.XX", "XXMXX", "XX.XX", "XX.XX", "XX*XX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> maze = {"XXXX.......................XXXXXXXXXXXXXXXMX", "XXXX.XXXXXXXXXXXXXXX.XXXXX.XXXXXXXXXXXXXXX.X", "XXXX.XXXXXXXXXXXXXXX.XXXXX.XXXXXXXXXXXXXXX.X", "XXXX.XXXXXXXXXXXXXXX.XXXXX.XXXXXXXXXXXXXXX.X", "XXXX.XXXXXXXXXXXXXXX.XXXXX.XXXXXXXXXXXXXXX.X", "XXXX.XXXXXXXXXXXXXXX.XXXXX.XXXXXXXXXXXXXXX.X", "XXXX.XXXXXXXXXXXXXXX.XXXXX.XXXXXXXXXXXXXXX.X", "XXXX.XXXXXXXXXXXXXXX.XXXXX.XXXXXXXXXXXXXXX.X", "XXXX.XXXXXXXXXXXXXXX.XXXXX.XXXXXXXXXXXXXXX.X", "XXXX.XXXXXXXXXXXXXXX.XXXXX.XXXXXXXXXXXXXXX.X", "XXXX.XXXXXXXXXXXXXXX.XXXXX.XXXXXXXXXXXXXXX.X", "XXXX.XXXXXXXXXXXXXXX.XXXXX.XXXXXXXXXXXXXXX.X", "XXXX.XXXXXXXXXXXXXXX.XXXXX.XXXXXXXXXXXXXXX.X", "XXXX.XXXXXXXXXXXXXXX.XXXXX.XXXXXXXXXXXXXXX.X", "XXXX.XXXXXXXXXXXXXXX.XXXXX.XXXXXXXXXXXXXXX.X", "XXXX.XXXXXXXXXXXXXXX.XXXXX.XXXXXXXXXXXXXXX.X", "XXXX.XXXXXXXXXXXXXXX.XXXXX.XXXXXXXXXXXXXXX.X", "XXXX.XXXXXXXXXXXXXXX.XXXXX.XXXXXXXXXXXXXXX.X", "XXXX*XXXXXXXXXXXXXXX.XXXXX.................X"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> maze = {"XXXX*XXXXXXXXXX......M", "XXXX.XXXXXXXXXXX.XXXXX", "XXXX.XXXXXXXXXXX..XXXX", "XXXX.XXXXXXXXXXX.XXXXX", "XXXX...........X..XXXX", "XXXXXXXXXXXXXX.X.XXXXX", "XXXXXXXXXXXXXX....XXXX", "XXXXXXXXXXXXXXXXX.XXXX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> maze = {"M..*", "XX.X"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> maze = {".*.M."};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> maze = {"MX....", ".XX.XX", "......", "XXX.XX", "X....*"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> maze = {"X.X", "*.M", "X.X"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> maze = {".............M............*"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> maze = {"X*X", "..M"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> maze = {"XX.M.*"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> maze = {"XXX.", "M...", "XXX.", "X...", "X.XX", "X...", "XXX.", "XXX*"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> maze = {"*...M", "XX.XX", ".....", "XX.XX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> maze = {".X", "M*", ".X"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> maze = {".*.", "X.X", "XMX"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> maze = {"M*", ".X"};
    MazeWanderingEasy* pObj = new MazeWanderingEasy();
    clock_t start = clock();
    int result = pObj->decisions(maze);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22626886&rd=13748&pm=10288
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
#include <complex>
#include <queue>
#include <complex>
#include <ctime>
#include <ext/numeric>
 
using namespace std;
using namespace __gnu_cxx;
 
#define PB push_back
#define ALL(x) (x).begin(),(x).end()
#define rep(i,x,n) for(int i = (x) ; i < (n) ; ++i)
#define repit(it,x,n) for(__typeof(x) it = (x) ; it!=(n) ;++it)
 
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
int vis[101][101];
 
class MazeWanderingEasy {
public:
  int decisions(vector <string> maze) {
    int ei,ej,si,sj;
    int n = maze.size();
    int m = maze[0].size(),x,y,nx,ny;
    memset(vis,-1,sizeof(vis));
    rep(i,0,n)
      rep(j,0,m){
        if(maze[i][j]=='*')
          ei =i ,ej = j;
        if(maze[i][j]=='M')
          si=i,sj=j;
      }
    vis[si][sj]=0;
    cout<<si<<" "<<sj<<endl;
    queue<int> q;
    q.push(si);
    q.push(sj);
    while(!q.empty())
    {
      x = q.front();
      q.pop();
      y = q.front();
      q.pop();
      int r=0;
      if(maze[x][y]=='*')
        return vis[x][y];
      rep(i,0,4)
      {
        nx = dx[i]+x;
        ny = dy[i]+y;
        if(nx<0||ny<0||nx>=n||ny>=m||maze[nx][ny]=='X'||vis[nx][ny]!=-1)
          continue;
        r++;
      }
      if(r>1)
        r=1;
      else
        r=0;
      rep(i,0,4)
      {
        nx= x+dx[i];
        ny = y+dy[i];
        if(nx<0||ny<0||nx>=n||ny>=m||maze[nx][ny]=='X')
          continue;
        if(vis[nx][ny]!=-1)
          continue;
        vis[nx][ny] = vis[x][y]+r;
        q.push(nx);
        q.push(ny);
      }
    }
    return -1;
  }
};
 
 
 
 
 
 
//Powered by KawigiEdit 2.1.7 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/