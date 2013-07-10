/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12318
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

class PastingPaintingDivTwo {
public:
    long countColors(vector<string> clipboard, int T);
};

long PastingPaintingDivTwo::countColors(vector<string> clipboard, int T) {
    long ret;
    return ret;
}


int test0() {
    vector<string> clipboard = {"..B", "B..", "BB."};
    int T = 3;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> clipboard = {"B...", "....", "....", "...B"};
    int T = 2;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> clipboard = {"BBB"};
    int T = 10000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 30000;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> clipboard = {"."};
    int T = 1000000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> clipboard = {"BB.", ".B."};
    int T = 100;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 201;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> clipboard = {"..........B..........", ".........B.B.........", "........B...B........", ".......B.....B.......", "......B..B.B..B......", ".....B...B.B...B.....", "....B...........B....", "...B...B.....B...B...", "..B.....BBBBBB....B..", ".B..........BB.....B.", "BBBBBBBBBBBBBBBBBBBBB"};
    int T = 1000000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 21000000071;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> clipboard = {".............", ".B.B.B.......", ".B.B.B.B.....", ".B.B.BBBB....", ".B.B...B.....", ".............", ".BBBB.B.B....", ".B....B.B.B..", ".BBBB.B.BBBB.", "....B.B...B..", ".BBBB.B...B.."};
    int T = 114514;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 1717769;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> clipboard = {"B..BBBBBBBBBBBBB.................BBBBBBBBBBBBBB...", ".B....BBBBBBBBBB................BB....BBB..BBB....", "B.B......BBBBBBBB..............B.B...B..B...B.....", ".B.B......B..BB..................B....B....B......", "B.B.........B..B...B...........B..................", "B..BBBBBBBBBBBB.B.B...........B.BBBBBBBBBBBB......", ".BBBB.......BBBB..B..........B.B.......BBBBBB.....", ".B...BBBBBBBBBB...............BBBBBBBBBBBBB.......", "B.................................................", ".B.........................B......................", "B...........................B.....................", ".............................B....................", ".............................B....................", ".................B................................", "...............BBBB...............................", "...............BBB.B..............................", "............BBBB..BB..............................", "............BB.....B...................B..........", "...........BB................B....................", "..........BB.................B....................", ".........BBB.........BBB..BBB.....................", "........BBBB......BB.BBB....B.....................", "..........BBB...BBB....B..B.......................", "............BBBBB.BBBBBBB.........................", "........B........BB.BBBBB......B..B...............", "......B.B..BB..BBBBBB.B.B.B...B..B.B..............", ".......B..B....................B.BB...............", "......B..B.....................B..................", ".....B..B.....BBBBBBBBBBBBBBBB...B................", "........BBBBBBBBBBBBBBBBBBBBBBBB..B..............B", ".......B.......................................BB.", "........BB..BBBBB......BB.BBBBBBBB...........B.B..", "..........BBBBBBBBBBBBBBBB..BBBBBBBB........B.....", "..........................................B...B...", ".........................................B..BB....", ".......................................B.....BB...", "B.....................................BB.B.B...BBB", ".BB.BB................................B.B.........", ".......BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..........", ".................................................."};
    int T = 810;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 65878;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> clipboard = {"B.B.B..BB.B..B.B..B..BBBBB......BB", ".BBB..B.BB.BB....BB..B.B.....BBB.B", ".BB.B...BB...BB.B..B..B.BBBBBBB.BB", "B..BBB...BB...B.B.B.....BBB..BB...", "BBB.....BBB..B.B.BBB..BB.BB..B.BB.", "B.B.B..BBB.B.B.BB.BBBBB.BB.BB.BB.B", "....BB.BB.B..BB....B.B..B..BB....B", ".BB.B..B.BB..B.B.....BB.BBBB..B.B.", "..B.B.BB.BB...BB.B.BB.BB...B..B...", ".B.B.......BBB.B...B.B....B..B....", ".B.B.B.BB.BB.B..BBBBBB...BB.B..B.B", "BB.BB..BB..BBB....B...BBB....B.BBB", ".B.......B.BB.BB....BBBB.BB.B..B.B", "...B....B...BBB.....BBBB.B.BBB.BBB", "B........BBB..BB.BBB.B..B...B..B..", ".B.BBB...B...BB..BB...BB...B..BB.B", "B.B...B.BBBB.B.......BBBB....BB...", ".BBB.B..B.BBB.B..B..B.B..BB.BBBB..", "B....B..BB...B.B....B....B......B.", ".....B...B.B...BBB.....BB..BBB...B", "B.BBBBBBBBB.....B......B......BB..", "BBB...BBB.B.B.BB.BB..B....B..BB..B", ".BBB.B.B.BBB.B.BBB...B...BB.B.....", ".BB....B.BB...B.........B.....B.B.", "BBB...B.....BBB...BB.B.B.B...BB.B.", "...BB.BBB.....BB.B.B.....B........", ".B...BB..BBBBB.BBBB....BB..B.B...B", "BB....BBB.B.B........B..B.B..BB...", "...BBB.BBB.BBB...B.B...B.B.BB.B.B.", ".B...BBB..B....B..BBBB.B......BBB.", ".BB.B.B.B...B.BB..B...BBBB..B.BBB.", "BB.B.B.BB.BBB.....BB.B.BB..B......", "B..BBBBBB.BBB...BBB.B.BB...BBBBBBB", "BBB...B..BBBBBBBBB..B..BB.B....BBB", "...B.B.B.BB.B.BB.B...BBB.B.B..B..B", "B.BB.B.BB...BB..BBBB...B..B...B...", "..B..B.B...BB....BBB..B...BB..B.BB", "B.B..B..B..BB..B.B.....B.BBB.....B", "B..BB.B...B.BB..B........B.B....B.", ".B.B.BBB...B.B.B..BBB..BBB.B......", ".B.B..B..B.B.B...B.BB.B.B.B....BBB", "B..BBBBBB......B.B..B.BBBB...B.B..", ".B....B.B.BBBBB.B.B..BB.BBBBB.BBBB", "....B.BB..BB.BBB.BB.B.B.BB.B.B...."};
    int T = 270216263;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 19996004729;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> clipboard = {"...B.........BB.B..B..B....BBB.", "....BB..B.BBB...BB..B..B...BB.B", ".B.BB.....BBBBB..BB....BB.BB.B.", ".BBB.....B....B.BB.BB.B....BBB.", "BB.BB..BB.B..B...BB.B.BBB.BBBB.", ".B..B.BBB...B.BBBBBB...B.B.B...", "...B.B.B.BBBB.....BB.B.........", "...BBBB.B.B.....BBB......B.B...", "..B.B.....BB.B....BB..B...BBB.B", ".........B.....B.B...BB.B..B.BB"};
    int T = 472504414;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 16537654653;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> clipboard = {".B....B..B..B...BB.BBBB.BB....BB.......BB.BB", "B.B.BBB....B.B..BBB..B.B.B....B..B...BBB....", ".BBBBBBB...BB..BB.BBB..BB...B....BBB...BB...", "B.B.B.B.B..BB.B......B..BBBB...B.B..BBB..B.B", "..BB.BB.B...BBB...BBB.BB.B.B.B....BB.B.B....", ".BB.BB..BB.B..B.B...BB......BBB.B.BB...BBB..", ".BB..B......B.BB.BBB..B.BB.BBB..BB.B.BB.BBB.", "B..B..B...BB.BBB..B.B...B.B..B..BB.B..B.BB.B", ".B.....B.....B...B...BB..B...B....B..BB..B..", "..........B.BBB....BB..B.BBB.B.B...BB.B.....", "BBB.......BBB....B....B.B.B...BBB..B.BB..BBB", "....BB.B...B..B.B...BB..B...BBBB.B...BBBBBB.", "..B..B..B..B...B.B.....B..B.B.....BB.B.B..BB", "..B.B.BB..BBB......BBB.....BB....BB.BB.B..BB", "BB.B.B....BBBBB..BBBB..B......B..BB.....BB..", "B...BB.B..BB..B.B.....B.B.B.BBBBB...B.B.BBB.", ".B......BB.B....B.BBBBBB.BBB....BB.BBBBB.BBB", ".BBB..B...B.....BBB.BBB.BB.......BB....BB...", "BB...B.......B.....B..BB.BBBBBB..B.B.B.B...B", "B.BB.B..B..B..B.BB...BBB.BB..B.B.BB..BB.BBBB", "BB.BBBBB...BB.BB.BB...BB.B.BB.B.BB..B.......", "B.........BB.B..B....BBB.....B.BBB..BB.BBB..", ".B.......B.B...BB...B...B.....B.BBB...BB...B", ".....BB.B.B.BB.B.B..B..B..BB.BB..BB.B..B..BB", "..B....B......B...............BB..BB.BB..BB.", "BBBBB...BBB...BB..B.B.BBBBB..BBBBB.B.B.B...B", ".BB.B..BB...BBB........BB..B.....B.B..BB.BBB", "BB..........B..B........BBBBBB..B.BBB..BBB..", "BBB.BBBBB.B..BB.BB.B...BBBBB.B.BBBBB..BBB...", ".B.BBB.B..BB....BB..BBBBB.B.B.B.B...B.......", "B...B........BBB..B.BB....BB.BBBB.B....BB.BB", "B..B.B.BBBB..BBBB.B...BB...B..B.B......B....", ".B...B.B..B..B.BB.BBB.BBB.BBBBB...BB...B....", "BBBBBBB.BBBB...B.B.B..B....B...B.B.BB.......", "B..BB.....B.BBB..B..BB.BB...B..B.BB..B..BB.B", ".......B..BBB..B.B..........B...BBB....B....", "BB....BB.BB....BBB...BB..BBB...B.....B....B.", "BBB.BBB.BB.BB..BB.BB.BB...BBB..BBB..B...B...", "..B.B.B.BB.B.......B...B...BBB.BBB..........", "...BBB.BB.B.B.BB..........BB......BB..BB..B.", "....BB.........B..B....BB..B.BBBB...B.B..B..", "B.BB......B..BB......BBBB....BBBB..B....B.BB", ".BB...BB.B......B...BBBB.B..B.......B.BBBB.B", "..B.B.BB.B.B..B.B..B.....BBB...B.....BB.B.BB", "..BB.BB..B...B....B..B...BBB..B..B.BBB......", ".B..B..BB.....BB.BBB....B.B.BB..B.BBB..BBB.B", "B..BB..B......BB...B......BBB.....BB........"};
    int T = 589159523;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 51846039760;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> clipboard = {".....B....B.B.....BB..B......B", "...B..BB.BB.B.B.B.BB.BBB...B..", ".BB....B.BB...BBB..BBB...BB..B", "....BBB..BBB...BBB.BBBB.B.B...", "B.B....B....BB..BB.......BB.BB", "..BB....BB.BB.B..B....BBB.B.B.", "B.BB.BBB....BB.BB...BB....B..B", "B.BBBB.....B..BBBB.BB.BB...BB.", "B...BB.B.B....BBB.B.BB.BBB....", "BB..BBBB.BB..BB.B..BBB...B....", ".B...B.B.B..BB..B..........BBB", "BB..B.......B.BB....B...BB....", "........BBBBB.B..B.BBBB.B..B..", "B.B....BB.B...BB....BBBBB.BB..", "B........B..BBBBB.B.BB.B..B...", "B.B.....B.B.BB....BB.........B", ".BB.....B.B..BBB...B...B.BBBB.", "..BB.B...BBB......B..BBBBBBBB.", "B..BBBB....B.BBB.BBB.....BBBB.", ".B.B.B.B....BB.B.B.....B......", ".B..BBB...BBBBBBBBB.BB.BB..BB.", "BB.BBB.B..B.BBB.B..BBBB.B...B.", "BB...BBB...B..BBB.....B......B", "B..BB..B.BBBBB.B.....BBB......", "BB.....BBB......BB...B..BBB..B", "BB..BBB....B.....B..B....BB..B", ".B.....BB.BB.B..BB.BBB.....B.."};
    int T = 728463635;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 39337036906;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> clipboard = {".BB.B..BB.......B.BB.BB...B.B.BB.", "...BBB.BB.B..B.BB...BB.B...BBBB.B", "BBB.BB.BBB..BBB..B....B...BB...BB", "..BB.BB.BB.B...BBB.BB.BB.BBB.BB.B", "BB.B.B.B.....B......B..BB.BBBB.B.", ".B.B...B.BBB......BBB.BBB..BBB...", "B...B.BB.BB..BB......BB.BBBBB.BB.", ".B...B.B.BBB.BBBBB...BBBB....BB..", "B....BBB.B..BB....B.B.BBB.B...B..", ".BB.BBB....B.B..BB..B.BBBBB..B..B", "B..B.B....B.B...B...B.......BB..B", "B.B.....BBB..B.B......B....BB...B"};
    int T = 635369207;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 27320876158;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> clipboard = {"B..BB.B.B..BB...BBB...BBBBBB....B......B", "BB..B.B.BBBB.B...B..BB.....BBBB..BBBBBBB", ".B.B....B.BBBB.B...BB....B..B..B.BBB....", ".BB...B...B.B.BB.BB..B....B..BBBB.....BB", "BB.B..BB..BBB..BBBB.B.BB.B..B...B...BBBB", "BB.BBB...B.....B.BB.B.BBBBBB...B....B..B", ".....B..B...B.BB.BBB.BB..B.BB.B..BBB....", "BBBB.BB...BB.B...B........B.......B.....", "B..B..BB.B..B.....B..BBBBB..BBBBBBB.....", ".BBB....BBB.BBBB..B......BBBB.BB...B.BBB", "B.B....B......B...B.BB.B...B.B.B...B.B.B", "..BB..BBB.B...BBB.BB.BBB..B....BB.B.BB..", "BB...B.B....BBB.B.B.BBB.BB.B....B..B...B", "....B..B..B..B.B...BBB.B...B..B......BB.", "..BB..B....BBBB...BB..B....B......BB..B.", ".B..B.B..B.BBB..BBBBB.....B...BBBBBB....", "BB....B.B.....B...B.B..BB..BB.....B.B...", ".BBB...B..BB..BBB..B...BB.....B..B..BBB.", ".BB.BB.B.BB..B.B.B.BBB.B...B..B.B....B.B", "...BBBBBB.B.BB..BB...BBBBB....B........B", "..BB..BB.BBBB.....BB....BBB.BB..B..BB.B.", "BBB.B..BB....B.B.B...B.B.B..BB.B..BB.BB.", "BBB...B.B..BB.BBBB....BB..BB.BB.B...BB.B", "B...B.B.BB.B...B.BBBB...BB.B.B...BBB....", "....BBB....BB..B...B.BB.....BBB.BBBBBB..", "...BBBB..B..BB..B.BB......B.BBB.BB....BB", "...BB..BBBB.BB......B...BBBB.B.B...B...B", "B...BBB....BB.BBB.B...BB.....BB..B..BBB.", "..B...B...B.B..B..B.BBB...BB.B.BBBBB.B.B", ".B.B.BB.BBB..B...B...BBB.B.B...B.B.BBB..", ".BB...B..BB.B..BBB....B..BB.BB........B.", ".........BB.BB..B..B...B......B.BB.B..BB"};
    int T = 31179904;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 2120234503;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> clipboard = {"..BBB.BB..B.B.B", ".BB.BB..BB.B..B", "...B.BB....BBBB", "..BBBB.B.......", ".B.BB.B.BBBBB..", "..BB.BB.B....BB", ".BBB.B..B...BB.", "B...BB.BB....B.", ".B..BB..B..BBBB", "......B.....BB.", ".BBBBBB.BBB..B.", "BBB..B.BBB...B.", ".BB..B.B.B.B.BB", ".....BBBB.BB.BB", "BB.B.B.BBB..BB."};
    int T = 24814237;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 694798784;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> clipboard = {"B.B..B...B.BBB.B.B..B.B.B..B.B.B...BB.B.B.", "BB..BB.BB..B.BBB.B.B.BBB.BB..B..B.BB......", ".B..BB..B.........B...BB...B..B.B.B.B...BB", "B..BB.B....BBB.......B......B.B.B...BBBBB.", "BB.BBBBBBBB.B......BBB.B..BB.BB.B..B..B.B.", ".BB..BBB.B...BB.BBB.B..B.B..B...B..BBBBB..", ".BB.B..B..B..B..B...B..BB..BB..B.BB..BBBB.", "B......BBBB.B..B...BB.B...B.B...BB..B..B.B", ".B.BB......B.BB.....BBBB...BB.BBBB....B.B.", ".BB.....BBB...BBBB...BB..B....BB.......BBB", ".BB...B....B.B.B....B.BBBBB..B.B.B.....BBB", "B.B..BBB..BB..BBBBBBBB..B...BB.BB.B.BBB...", "BBB.......B.BB.BBB.BBB..B..BB...BB.BB..BB.", ".B..BBBBBBBBBBB.....B.B.BB.BB..BB...B.B...", ".B.B.B....B..B.BB....B.B.....B.BBB.B..B...", "....BB.B.BB...B...B.BBBBB...BBB....BB.B...", "..B...B...B.B....B...B..B....BBBBB.B.B.B.B", ".B.BB....BBBBB...........BBBBB..B..B..BB..", "B..B.....B.BBBBBB.B.B..B.B....BBB....BBB..", "BB.B....B.BBB..B.BB..BBBBB..B....B......B.", "BB..B...B.B...BB.B..BB.....B......BB....B.", "BBBB.BB.B...BB.B..BBBBB.....B......BBBB..B", "..B.B.BB..B...B..BBBB.BBBB.BB....B.BB.BB.B", ".......B.B.....B..B..BBB.BB.BB.B.B....B.BB", "....B..BBBB...BBBB.BB..B.B.BB....BB..BBB.B", "..B.B..B.B.B.B.B...........B.BB.......B..B", "...B..B.B...B.BB.B.B....B.B.B..B.BBB......", "BB.B..BB.BB.B..BB........B...BBB...B...B..", "B.B..B.B.B......BBBB....B.BB....B.B.BB.BBB", ".BB.B.B..BBBBB...B....B..BBBBB.B....B..BBB", ".B.BB.B....B.BB.BB.BB.B.B....BB...B.....B.", "...B..B.B....B...B..B.BBB.BB.....B........", "BB..B..B...B..BBB...B.B...BBBBBB.B.BBB..B.", "...B...B......BB..BB.B.BBBB.B.B...BBB..B.B", "...BB....BB..BBBB.B.B.B......BB.B...BB..B.", "BB..B..B.BB..BB........BBB.....B...B.....B", "...BB.B.BB.....B.B.B.BB.B.........BB..BB.B", ".BBBBBBB.B.B......B..B.B.B...BBBBB.....BBB", "....BB.BB......BBB.BB...B..BBB.B...BB.BB..", "......BBBB.B...BBBBB..B.B..B.B.BBBB..B....", "B.B...B.B....B.B.B.B.....B....BB....BBBB.B", ".BBB..BB.B..BBBBB..B.BB.B..B..B........BBB", "...BB...B.BB..B.......B.BBB.BB..BB..B.....", "..BB.B.BBBB.BBB.BBB..B.B.BBBB.BB.BBB.BB...", "..BB.B.B..B..BB.....B.B.B..BB.B.BBB....BBB", ".BB........B....B.....BB...BB.B.BB..B.....", "BB....B...B....BB...BBBB..BBBBB.B.B......B"};
    int T = 745640541;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 64870728724;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> clipboard = {"..B.B.BBBB...BBB.B.B.B.BB..BB.", "BB..BB.BB.BBB.BB..BB..B..B...B", "...B..B.B..B..B..BBB.B...BB.B.", "B.B.B...........B...B.B....B..", "BB...........B.BBBBB.........B", "B..BBBB.B...B...B...BBB....B..", "B.B...B.B..B....BB.B...B..B.B.", "..BBB.B..B.B.B.....B.B....BB.B", ".B.BB..BBB..BBB.BBB......B.B.B", ".......BB..BBB...B...B.B.B.B..", ".BB........B...BB.B..B.BBBBB..", ".B..B.B...BBBBB.B..B..B.B.BB..", "B...BB..BB.BBB....BB.BB..B....", ".BBB..B....B.B.B.BBBB.B.......", "B.B.B.B...B.B.BBB.B.B..B.B....", "B....BBBBBBBB..BB......B.B....", "BB...B.B.BB..B.B..B.B..BB...B.", ".B.BB.BB....B.B.B.BB.B..BBB..B", "BBB.B.BB.B.BB.B.B.BB.BB..B.BB."};
    int T = 208734934;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 9810542315;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> clipboard = {"BBB..B.B.B..B..BB.........B..B....BBB", ".BB.BBB.BBBB..BBB.BB..........BB....B", ".BB.B.BBBBB.BB.B.B.BBB........BBB.B..", ".B.B.B....B...BBB......B.B..B.BB.B...", "...BBBB.B.BBBB.BBBB........B..BBBB...", "B......BBB.B...BBB.B..B..B....B.B.B..", "B..BBB......BB..B.B.B..B...B.BBB..B.B", ".B..B.B..BB.....B.B...BB.BB.B.B..B.B.", "B.B..BB....B.......BBBB..B.B.........", ".BB..BB..B...B.B.B....B..B..BBB.B..BB", ".B....B...BB...B.B...B.B.BB...B.....B", "BB....BB.B.BB.BB.BB.BB.B.BB.BB.B..B.B", "..B.B.B.BB....B...BBBBBB.BBBBB..B....", ".BB.......B..BB.B..BBB.BBB.BBB...BBB.", ".B.....B.....B..BB..B.B...B....BBB.B.", "B...B.....B.B......BBBB...BBB.B....B.", ".B.BBBBBB...B.BBB...B..B.B..B.B...B..", ".BB.....B..B.B....BB..B....B.BB.BB..B", ".B...BB.BB.B.BBBBBB.B.B.B...BB.B.B.BB", ".....B.B...BBB..BBB.B.BB..BB...BB..B.", "..BB.B.....B.B...BB.BB.....BB.BB..B..", "....B.B..BB.BB.BBB..BB.B.BB...BB.BB.B", "B.B.B.B..B..B.......B....B.B.BB.B...B", ".B.B.BB.........BB....B..B.BBB.B.BB..", "..BBBB.BB.BB..BB..BB..BB....B..BB.BBB", "BB....B..B..BB.B.B....B.B.BB....BBB.B", "...B..BBB.BB..B..B.BB.....B..BB......", "....B.....B.B..B.....BBB...BBB.BB.B.B", "BB.B..BB..B..BB.B..B....B.BB.B.BB.B.B", "..B.BBB.BB.BB......B.BBB....B.B....BB", ".BB...BB.B.B...BB.BBBBB....B.B.BB..BB", "BB..BB..B.B.B.BB...BB.B....BB.B.B..B.", "BBBBB......B.B....B..B.B....B..B.B..B", "BBB..BBB..BB..B..B..BBBBBBBBBBBBBBB..", ".B.....B..B.B...BB.........BB.....B.B", ".B...BBBBBB.B...........B.BB..BB.B.B.", "..BB.BB.B...B..B...BB.B...BBB.B.B.B.."};
    int T = 296345729;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 20447856416;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> clipboard = {"BB...BB..B", "...BBBB.BB", "..B.....BB", ".B.....BBB", "BBB.BBBB..", ".BBB.....B", "B...B.B...", "..BB...B..", "B.BB..BB.B", "BBB...B.B.", "..B.B.BBBB", "....B..B..", "BB.B..B...", ".B........", "BB....BB..", ".BB..BB...", "B..B...B..", "..BBBBB.BB", "....B.....", ".BB..B....", "BBB.B...BB", ".BB.BB.BBB", "..B.B...BB", "BBB..BB.BB", ".BBBB.BBBB", "..B..B....", "BB.B.....B", "B......B.B", "B.B....B..", "BBBBB...B.", ".......BB.", "B.B..BBB.B", ".BB...BBB.", "B..B.....B", "...BB..BBB", "..B.BB...B", "B..BBB....", "....B.BB.B", "..BBB.....", ".B...BB.B.", "BB.BB...B.", "B....BBB.B", "...BB.BBB.", "..........", "B.....B...", ".....B..B.", ".BB.B.....", ".BBB..B.B.", "...BBBBB.B", ".B....BBBB"};
    int T = 715276935;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 40770785591;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> clipboard = {"..BBB.BB.B.B.B...B..BB", "B....B..BBBB..B.......", "...B..BB..BB..B...B.BB", ".BB.B....BB..BBBBBB...", "BB...BBB...B...B.BBB.B", ".....B..B.BBB...BBB.B.", ".BB.....BB..B.....B.BB", "BBBBB....B....BB..BBB.", "B.BB...BB.B..B...B...B", "..B.B...BB.BB...B....B"};
    int T = 348957297;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 10468719025;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> clipboard = {"B.....B..BBBBB", "B.BBB..BB..BBB", "B.B....BB.B..B", "BB.BBBB...BBBB", "..BB..B...B...", "BB....B.B....B", "B...B...BBBB.B", "....B..B......", ".B....B....BB.", ".BB.B.BBB.B...", "..BBB.BB.....B", "BB..B..BB..B.B", "BBBB.B.BB.....", ".B...B.B.B...B", "B.BB...B....BB", "........B.B...", "..B.B.BBB..B..", "B.B..BB.B.B...", "B......BBBBBBB", ".BBB..B..B..BB", ".B.B..BB..BB..", "...BB.BB......", ".B.BB......BB.", "..BB.B....BB..", "BBBB.B.B..B...", "B..B...BBB..B.", "..B.B..B.B....", ".BB.....B...BB", "B...BB...B.BB.", "B.B..B...BB.BB", "B....B....B...", "BBBB.BB.B.BBB.", "..BBBBBB...B.B", "BBB.B.BBB.B...", "B..BBBB.B.B.B.", "...B..B.B.BB.B", "....B.BBB..BBB", ".BB..B.BBB..B."};
    int T = 922480324;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 46124016574;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> clipboard = {"BB...BBBBBB", "BBB..B.B.B.", "......B.B..", "B.....B.B.B", ".B.B.B.B...", "BB..B..B..B", ".B..BB....B", "BB.B......B", "B...BBB....", "B..BB.B.BB.", ".BB...BBB..", "...BB.B...B", "..BB.BB.BBB", "..BB.B.....", "BB.BBBBB.BB", "B..BB.B.B..", ".B...B..B.B", "..BB.B..B..", "B......BB..", ".BB.BB.....", "B...B.BBBBB", ".BBBB.BBBB.", "BB..B..BB.B", "BB.........", "...B.BB.BBB", "B....B..BB.", "B..BBB.BB.B", "B....BBB...", "...B.BB...B", ".BB...B..BB", ".B......B.B", ".B.BBB.BB..", "..BB...B..B"};
    int T = 338657954;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 13884976355;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> clipboard = {".B..BB..B.B...BB....B..BB.B.BB......B.BB....", ".B...B.BBBB.BB.BB...B..B.BB...B...BBBB..B.BB", "...BB.BBB..BB.BB........B..B......BBBBB..B..", "B.B..BBBB.BBBB.BBB..BBB...B...BBBBB..B.B.B..", ".B........BB.B.BB...BBB.BB.B...B........BBBB", ".......BB.....B..B.BB.......B......B.B..BBB.", "......B..BB.BB..B..B.BBB.BBB..B.BB.B.....BBB", "BBB.B.BBBBBB...BB...B.B..BBB..BB.BBB.BB..B.B", "...B.B...B.......B.BB.......B.BB........B...", "B.....B.B......B........BBB.B.BBB....BBBB..B", "B.BB..B.B..B.BBB..B..B..B.B..B...........B.B", "BB..BB..B..B.B.BB.B....B.BB....B.B..B..B....", "..B..BBB.BB...B.B..BBB..B.BBBB..B.....B.....", "..BBB.B..BB.BB.BB.....B......B.B.B.BBBBBBB.B"};
    int T = 652579194;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 34586697708;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> clipboard = {"...B.BB.BB..B.B....BBB.B....B.B.B", "B.B.BBBB.BBB.BBB....BB..BBB...B..", "...B....BB.BB.B.BBBBBB.BBBB......", "B..B...BB..BB..B.B.B..BB......B..", "BBB.B....BB.B.B.BBB......B..BB.BB", ".BB.BBBB.BB......BB....BB...B.B..", ".B....B.BB.B.....BBB.B...BBBBBB..", "..BB...BB..BB...BBB..BBB...B..B..", "...B..BBBBBB.BB.....B..BB.B..B.BB", "BB.BB..B.BB.B.BBB..BB.B.BB...B...", "B.B.B..B...BBB...B.B.B.......BBBB", "...........BB.B..BB..BBB.........", "B.B.B..B..BBBBB....BBBBBBB.......", ".BB......B.B.B.B..BB.BBBBBB.B....", "..BBB.B....B..B.B..BB.B...B.B.B.B", "B....B..BB..BBB.BB.B...BBB..BBB..", "......B.BB...BB..BBBB..BBBBBBB.B.", "..BB..B.B.BBBB.B.BBBBB.....BBBBBB", "BB....B..BBB.B....B..B....B.B...B", "BBBB...B.BB.BBB.BB...BBBB.B...B.B", "..BB.B..B....B....B........B.BB.B", ".B.BB.......B.....BBB..BBBB..BBBB", "..BBBB.B.B...BB....B..B.B..B.....", ".B....BBB.B..BBBB.BB.B.B.B....B.B", "..B.B..BBBBBB.B.B..B...BB...B..B.", "..B.....B...B...B..B..B....B.B..B", "B.BBB..BBBB.B..B..B.B...B.BB.....", ".BB..BB..BBBBBBBBB..BBB..BBB.BB.B", ".....BB..BB......BB....B.....B...", "B..B..BB...B...B.BB...BB.B.......", "B....B..BB.......B.BBB.....BBB.B.", "....B....B.B...B.B...B.B.BB.B....", "..BBBB.BB...BB.B.BB....BB..B.B.BB", "BBB.BB..BB..BBBBBBBBB..B.......B.", "BBBBBB....B...BBB..BB.BB..BB...B.", "..B...BBB.B...B..B..B.BB.B.BB.B..", "BB.B..........BBB.....B.BBB..BB..", "B.B..BBB.B......B...B..B.BBBB.B..", "..BBBBB...BB.BB.B...B.B...B.BBB.B", "...BBBBBBBB...BB.B...B.BB..B..B.B", "..B.....B.BB..B...BB.B..BBBBB...B", "B.BBBB..B.....BBB.B.B.B.B...BB.B.", "B..BB..BB..BB..BBB.B.BB.B..B.BB..", ".BBBB.BB.B..BBB.B.B.BB...B..BB.BB", "B.B..B.BB..BB......B..B..B...B.BB", ".....BB.BB...B.BBB.BB.B.B...BB...", "B.B.....BB.....B.BBB.BB........BB"};
    int T = 1930771;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 144809079;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> clipboard = {"..B....B.B.B..BB....BB.....B.B.B"};
    int T = 885082;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 9735902;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> clipboard = {"B...B.BBBBB...BBB.BBB", ".BBBB...BBB..BBB.B...", "B...B....BB...B.B..B."};
    int T = 447530629;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 8950612591;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> clipboard = {".", "B", ".", ".", ".", ".", "B", "B", ".", ".", "B", "B", ".", "B", ".", ".", ".", "B", ".", ".", "B", "B", ".", ".", ".", ".", ".", ".", "B", "B", "B", ".", ".", ".", "B", "B", ".", ".", ".", "."};
    int T = 296719044;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 4154066616;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> clipboard = {"BBB....B..B.B", "..B.BBBB..B..", "..B.B....BBB.", "B..BB.B....B.", "BB...BB.BB...", "BB...BB.B.B.B", "B.B...B.....B", "BB..B.B...BB.", ".B.....B..BBB", "B..B.B.BB.BB.", "BBBB....BBBBB", ".......B.BBBB", "..B.....BBBB.", "B..BB.BB...B.", "B..B.B.B..B..", ".BBB..B.BB...", "..B.B..BB...B", "B.......BB..B", "B..B....BB..B", "B.BBBB.BB..BB", "..BB..B...B.B", "..B...BB.B..B", ".BB........BB", ".B..BBBB..B.B", "B.B.B.B.BB.BB", "B..B.BBB.....", ".B...BB.B...B", "...B....B.BB.", "...B..B..B.B.", "....B...B...B", ".....B..BB...", "..B.BB..B....", ".B.B.B.B..BBB", "B..B...BBBBB.", "BB..BB.BB.B.B", "........BB...", "B......B.....", "..BB...BB.B.B", "B....B.BB.B.B", ".B....B..B.B.", "B.B.B..B.B..B", "....B...BB.B.", "B..BBB..B....", "B...B.BB.B...", "B......BB..BB", "....B..B..BBB"};
    int T = 495549088;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 27750749319;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> clipboard = {"..BBBB...B.BB.B..B....B.BB.", "BBBB.B.BBB.BB....B.B...B...", "B..BB......BBB...B........B", "BBB.B....BB...BB.BBBB.BB..B", ".......BB...B.....B.B.BBB..", "....B.B...B.B..BB.BBBB...B.", "BBB..B.BB...BBB...B..B...B.", ".BB...B...B....BB.BBB.B..BB", "B.....B..BB....B....B..B..B", "...B...B.BB.......B..BB..B.", ".BB.BB.BB..B...BBB.B.BBBB.B", "...B......B.B.....BBBB..B..", "..B..B.BB..B.BB..BB.BBB...B", "B..BBBB.....B.B....B.BB.BBB", "....B.B..BB.B.B............", "B.....BB....B..BB.....B.BB.", ".B....B....B..B.B..B.....B.", "...B.B.BB..BBBBB.BB..BBB...", "..B..B..B.....B.B.BBB.BB..B", ".B...BBB....B.BB.....B.BBBB", "B......B.....BBB.B...B.....", ".B.B....B.B...B.BBBB.BB...B", "B.BBB.BBB....B...BB...BB...", ".....B.BBB..BBB.B...BBBB..B", ".....B.B.B..BB..B..BB...BBB", "BBBB....B.B.B.BB..BB.....B.", "BB..BB.BBB.B.......B.B..BBB"};
    int T = 776167839;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 39584560334;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> clipboard = {"..BBBBB.BB.B.B.BB.B..B.BBB..", "BBB.B.B......B..B..B..B...B.", ".......B....B...B..BBB.B.BB.", ".B.B.BBB........B.B....B.BB.", "B.BBBBBBBB.B.B.....B......B.", "BB....B..B.B......BBB..B..BB", "B.BBB.BB..BB..B..B.BB.BB.BB.", ".....BB.B....BB.BBB.BB.BB..B", "...BB..B.B......B.B...BBBB.B"};
    int T = 639308840;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 20457883031;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> clipboard = {"B.B.BBB.B.BB.B.BB", "BB...B.BBBB......", "..B......B...BB..", "BBBB.B...B.B..B.B", ".BB.B.B.BB...BB.B", "BBB.BBB.B.BB.....", "...B....BB.BBB.B.", "B....B...B......B", "B......B.BBB....B", "B.B.BBBBBB..BB..B", "..B.BB..B..B..B..", "B.B.BB.BB.BB.BBB.", ".BBBB.B.B.B.BB.B.", "..B.B..B...B..B..", ".BBBB...B...BBBB.", "B..BB..B.BB..BBBB", ".......B.B..B..BB", "......B....BB.BB.", "..BBB....B.......", "...B..BB....B...B", "B.B.B..B...B..BBB", "BBB...B..BBB..B..", "BB.BBBB..........", "..BBBBB.B..BBBBB.", ".BBB..BB..B.BBBB.", "..BBBBBBB.BBB.BB.", ".BB.B.BB..B...B..", "B.B.BB.B...B..BBB", ".B.B..B....BB.B..", "BBBB..B..B.B.BB..", ".B..B.B.BB..BBB.B", ".B.......B....BBB", "..B........B.B...", "BBBB..B..BB.BB...", "..B........BBB..B", "B...BB....B....BB", ".....BBB.B.B.B..B", "B..BBBB.B.B.BBBB.", "BB.B.....B......B", ".B..B..B...B...B."};
    int T = 765691629;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 40581656837;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> clipboard = {"...BB...B...BBB..B..BB", "BBB..B.B.BBBBB..B.B..B", "..BB..B..BBBB...BBB.BB", ".B...BB.B.BBB.BBBBB...", ".B..B.B.BB.BBBBB.....B", "BB..BBB...B.....BB.BB.", "BBB..B...B...B.B......", "..B.B...B.B..B.B.BBB..", ".B..B..B......B....BB.", "...BBB.BB..BB.BB..BB..", "BB...B.B...B....B.....", "...B.BBB..BB......B...", ".....B.B.......BBBB..B", ".B.B.BB...B.B.BB.....B", "..B.B..B..BBB..B.....B", ".BB..BB.......B.....BB", "..B.BB.B...B..B.BB.B..", "BB...B.....B..BBB.B.BB", ".B.B..BB..BB.BB.B.B.BB", "..B.BB.BBB.BB..B.BBBBB", "BBBBBB..BB....BB.B..B.", "......B.....B...B.B..B", "B.B..BB.B..BB......B.B", "B..B...B..B.B.B.......", ".BB.B.B...B..BB.B.BB..", ".....B..BB.BB.....B..B", ".B.B.BB..B.BBB..B.....", ".B..B..B.B..B.BB....B.", "..BB...B..B.......B...", "...B.B.....BB..B..B.B.", ".B.....B....B.B...B...", ".B.BB........B........", "B..B...B..BBBBBB..BBB.", ".BBB....BB....B..B...B"};
    int T = 424925033;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 22945952339;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> clipboard = {"...B.B...B....B...B", ".BBBB.BB.B..B.BBBBB", ".B.B.BB.B....BBBBB.", "B..B.B...B.BB..B..B", "B.B..B...B.........", ".BB...BBB...BB...B.", ".BBB..BB.B..B..BBB.", "...BB...BBBB......B", "........BB.B.......", "B..B...B.BB.BBBBBB.", "......B.B...BBB....", ".BB..BB.B.B.BB.B..B", "B.BB..BBBBBBB..B.BB", "..B.BB....BBB..B...", "....B..B........BBB", "...BBB.....BB...B..", "..B..B.B.BBB...BB.B", "B.B...B....B.B.....", "B.B.B.........B...B", "........B.BB...BB.B", "..B.BB.BBB.B......B", "B.BB...BB...B.B....", ".BB.BB.B.....BB...B", ".B..B....BB.....B.B", "B...B...B....B..B..", "..B.B.BB.B.B....BBB", "..BB.........B..B.B", "B..B..BB..B.BBB.B.B", "..B....BB....B.....", "B..BBB...B..B.BB..B", "....B..BB.B..BBB...", "..........B...B..BB"};
    int T = 271369638;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 12754373401;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> clipboard = {"..", ".B", ".B"};
    int T = 846824491;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 1693648982;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> clipboard = {"BB.BBBB.BBB....B.", "BB....BB..BB...B.", "BB.BBBB..B..B...B", ".BBB.BB..B...B...", "..BB.BB..B..B..BB", "B.B...B...BB.B.B.", "...BBB.BB.BB...B.", ".B..BB.BB.B.B..BB", "BB.B..B...BBB..B.", "B.......BB...B...", ".BB.B.B.B.......B", "....B..BB.B...B.B", "B.....B.B.....BB.", "B.B.BB....BB.B.B.", ".BB.BB...BBB..BBB", ".B..BBBBB...BBB..", ".BB..B..B.B.....B", "B...B..BBBB....B.", "..BBB..BBBBBB.BBB", "BBB.BB..B..B..B.B", "..B..BBBBBBBBB.B.", "B.....BB....BB..B", "....B.BB....B.BBB", ".BBBB.B.B.B......", ".BB..BBBBB.......", ".B.BB.B.B..B.BB..", "B..B.B.B...BBB..B", "....BB.B...B.B...", "......B.B..B.BB..", "B.BB....BBBB...B.", "BB.BBBB....BB...B", ".BBB.BBBB..B.BBBB", "...BBBB....BB..B.", ".B.B..B..B..B.B.B", ".BBB..BB.B.B..BB.", ".B...BB....B...BB", "BB..B......B.....", "BBB.B.B.B..BB..BB"};
    int T = 661825469;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 34414924870;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> clipboard = {"BB.BB.B....B..BBB.BBBB.B..B.B.B...BB.B...B", "B..BBB...B..B..B.BB.BBBB.B.B..B.B..B...B..", ".B.B..B.....B.BBB..BB..BB.BB.B.B.B....B...", ".B.B..B.B.BB.B.BB..B..B.B...B.BB..BB....B.", "B.B.B.BB..B.......BB....BB...B...B.B.BBB.B", "....BB..BBB..B.BBB....B....BB.B.B..B...BB.", "....BB..BB....BB......BB...........B..B.B.", "BBBB.BB.....BBBB........BBBBB...BB..B...B.", "B.BB.BB......B..B.BB...B..BBB....BB.BBBBB.", "..B......BB...B..BB.B.......B.B.....B.BB.B", ".B.BBBB.B.B.BB.B...B.BB.BB.BB...B...B.B...", "BBB....B..B.B.BBB.......B.BB....B.BB.....B", "B....B...B.B.BB..B....B...B..B....B..B.B.B", ".BBBB.BB.B.B..BB......B.....BB.B.BBB.BBBB.", ".BBB.BBB.B.BBBBBB..........B..B.BBBB.BB.B.", ".BBBBB.BB.B...BBBB.BBB..BBB.BBB.B..B.B.BB.", ".B...B.BB.B.B.BBBBBB..B...BBBB.B.BBBBBBBB.", "BB..BBBB.BB.......BB...B.B...BB.B...BB...B", "......B.BBB.B..B..B..B.BB.B..BB.B......B.B", ".BB.BB.BB...BB.B.B.BB.B...BB......B.....B.", "....B.B....B.BB..B..B.B.B..BBBB..B..B.BB.B", "BBBBBBB.BBB.B.....B.B.BBBBBB.BB.....BBB.B.", ".B..BBBB.BB..BBB.B.BB....BB....B.B.B.B.B..", "B.......B....BB...B.BB.B...B.B.B....B.B.B.", "B.B.....B.B.B.BBBBBBBB......BBBBB.....BBBB", "B.BB.B...BB.B......BBB.B....BB....B.BB.B..", ".........BB.BB..BBB.B..B....B.B...B..B.BB.", "..B...BB.B.B..B.B.B.B.B..B.BBBB.BB.....B.B", "B.....B..B.....BBBB.BB.........B.......B..", "B.B.BBB..B..BB......B....BBB.BBBB...B.BB.B", ".BBB.BB...BBBB...BB.....B...B..BBBBBB..BBB"};
    int T = 614640554;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 41795558756;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> clipboard = {".B..B.", "BBBB.B", "..BB..", ".BB.B.", ".BB...", "BB....", ".BB.BB", "B...B.", "..BB..", "......", "BB..B.", "B.B..B", "..B...", ".B..B.", "BB.B..", "B.BB..", ".B...B", "B.....", ".BBBBB", "BBBB..", "..BB..", "BB...B", "BBBBBB", "B....B", "B.B..B", ".BBB..", "..B.B.", ".B...B", "B.BBBB", "...B.B", "..B.BB", "......", "BB.BB.", "B...B.", "BB...B", ".BB.BB", "BBB.B.", "BB....", "BB.B..", "BBBB..", ".B..B.", "BBB.BB", ".BB..B", ".B.B..", "BBB.B.", "B.B.B.", ".B..B.", "B..B..", "B.B.B.", "......"};
    int T = 725893162;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 36294658233;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> clipboard = {"B.BBB.B.BBBB.....B.B..."};
    int T = 860358260;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 9463940860;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> clipboard = {"BBBBBBB.BBBBBBB", "BBBBBBBBB..BB.B", "BBBBBBBBBBB.B..", "BBBB.B.BBB.B.B.", "B.BBBB.BBBBBBBB", "BBB.BB.BBBB..BB", "BBBB.BBBB.B.BBB", "BBB.BB.BBBBB.B.", "BBB.B.BB.B.BBBB", "BB..BBBBBBBB.BB", "BBBBBBBBBBBBBBB", "B.BB.BBBBB.BBBB", ".B.BBBBBBBBBBBB", "BB..BBB...B..BB", "BBBBB.BBBBBBBB.", "BB.BBBBBBB.B.B.", "BB..B.BB.B.BB.B", "BBB..BB.BBBBB..", "BBBBB..BBBB.BB.", "B.B.BBB.B..B.BB", "..BB.BBBBBBBBBB", "BBBBBB.BB.BB.B.", ".BB.BBBBBBBBBBB", "BBBBBBB.BBBB...", "BB...BBBBBBBB.B", "BBB.BBBB.BBBBBB", "BB.BBBBB.BB.BB.", "BBBBBBBB.BBBB.B", "BBB..B.BBBBB.BB", "BB.BBBBBB.BB..B", "B.B.B.BBBBBBBBB"};
    int T = 190339112;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 8565260437;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> clipboard = {"..BBB.B.B.BBBB.", "BB.BBBBB.B.BBBB", "BB.B..BBBB.B.BB", "BB.BBBBBBBBB.B.", ".BBB.BB.B.BBB.B", "BBB.BBBBBB..BB.", "BBBBBB.B..BBBBB", "BB.B.BBBBBBBB.."};
    int T = 448575672;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 9420089193;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> clipboard = {"B.B.B.BBBBBBBB.BB.BBBBBBB.BBBBB.BBBB.BBB.B", "BBBBBBB..B.BB..BB.BBBBBBB.BBB.BB.BBBBB.BB."};
    int T = 430486245;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 17649936068;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> clipboard = {".BBBB.B..BB.", "B.BBB.BBB..B", "BBBBBBBBB.BB", "BBBBBBB.BB.B", "BBBBB.B.B.BB", "BBBBBBBBBB.B", "BB.B..BBB.BB", "BBB...BBBBBB", "BBBB.BBBB.B.", "BBB...BBB.BB", "BBBBBB.BBBBB", "BBBBBBB.BBBB", "BBBBB.BBB..B", "BBBBBBBBBBBB", "BB.BBBBBBB.B", "BB.BBBBBBB.B", "BBBBBBBB.B.B", "B..BB.BBBBBB", "BBBB.BBBBBBB", "BB.BBBB.BBBB", "BBBB.BBBBBBB", "BBBBBBBBBBB.", "BBB.BBBBBB.B", "..BBBBBB..B.", "..BBBBBBB...", ".BB.BBBBBBBB", ".BBB.BB....B", ".BBBBBBBBBBB", ".BBBBBBB.B.B", "BBBBBB.BBBBB"};
    int T = 870041947;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 34801678180;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> clipboard = {"BB..BBBBBBBBB..BBBBBB.B.BB.BBBB.BBBBBBB.BB", ".BBBB.BBB.B.BB.BBBB.B.BBB.BBBBB...BBBB.BBB", "B.B.BBBBB..BBBBBB.B.BBBBBBBB...BBBBBBB.BBB", "BB...B.BBBBBBB...BB..BB..BBB.BBB.BBBBB.BBB", "B.BB..BBB..BBBBBB..B.B.BBBBBBBBBBBBBBBBBBB", "BBBB.B.BBBBBBB.BBBBBBB.BBBBBBBB.BBB.B.B.B.", "BB.BB.B.B.B.BBBBBBBBBBBBBBBB.BBB.BB.B.B...", "BB..B..B.BB.B...BBBBBBBB.BBBB....BBBBBBBBB", "BBBBBB.B.B.BBBBBB.BBBBBBB.B..B..BBBBBB....", "BBBB..B.BB.BBBBBBBBBBBBBBB.B.B.BBBB..BB...", "BBBBBB..BBBBBBB.BBBBBB....B.BB.BBB.BBBBBBB", ".BBBB.BB.BBB.BBB.BBBB.BBBBB.BBBBBBBBBBBBBB", "BBB...BBBBB.BBBBBBBB..BB.BBBBBB..BBBBBBBBB", "BBBB...BBBBBBBBBB.BBB...BBBBBBB.BB.B.BBBB.", "BBBBBB.BBBBBBBBBBBB.B.BBBB.BBBB.BBBBBBBBBB", "BBBBBBBBBBBBB.BBB.BBB.BBB.BBBBBBBB.B.BBBBB", "B..BBB..BB.BBBBBBBBBB.B.BBB..BB..BBBBBBB.B", "B.BBB..B.BBBBBBBBBBBBBBBBBBBBBBBB.BBBBB..B", "BBBB.BBB.BBB...BBBB.B.BB.B..BBBBBBBBBBBBBB", "BBB.BB.BBBBBBBBBBBBBB..BBB...B..BBBB....BB"};
    int T = 796116956;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 48563135058;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> clipboard = {"BBB..B.BB..BBB...BB.BBBB.BB...", "BB..BBB.B.BBBBBBB.BBBBBB..BBBB", "BBBBBBBBBB.BBB.BB.BBBBB.BBB.BB", "BBBB...BBBB..BBB..BBB..B.BBBB.", "BB.BBBB.BBBBBBBBB.B.BB.BB.BBBB", "..B.BBB.BBBBBBBB.BBB.BB...BBBB", "BB..BBBB.BBBBBBBBBBBBBBBBBBBBB", "BBBBB.BBBBBB.BBBBB.B.BBBBBB.BB", "BB.BBBBBB.B..B.BBBB.BBBBBB...B", "BBB...BBBB...BBBBBBBBBBBB..BB.", ".BBBBBBBBB.B.BBBBBBB.BBBB.BBBB", "BB.BB.BBB..B..BB.B.BBBB.BBBBB.", "B.BBBB....B.B.BBB.B.BBBBBBB.BB", "BBB.BBB..BBB.B.BBB.B.....BBBBB", "BBB.BBBBBBB..BB.BBB..BBBBBBB.B", "BBBB.BBBBB..B...BBBB.BBBBBBBBB", "...BBBBBBBBBBB.BB.B.BBBBB.BBBB", "B.BBB.BBBBBB..BBB.BB.BBBBB.BBB", ".BBBB..B.B.BB.BBBBB.BB..BB.B.B", ".B.BBBBBBBBBBBBBB..BBBBBBB.BBB", "BBBBBB.B.BBBBBB.BB.BBBBBBBBBB.", "BB...BB..BBBBBBBBBBBBBBBB..BBB", "BBBBBBB.B.BBBBBBBBBBBBBBBBBBBB", "BBB....BBB.BBB.BBBB.BB..BBBB.B", "BBBBBB.B.BBB.BBBBBBBBB.BBB..B.", "B.BB.BBBBBBBBBBB.BBBBBBB.B.BB.", "B.BBBBBBB.BB..B.B.BBB.BBBBB..B", "BBB.BBB.BBBB.B.BBBB..B.BB.BBBB", "B.BBBBBBBBBBBB.BB.B..BBB.BB.B.", "BBBBB.B..BBBB.BB..BBB.B.BBBB.B", "BBB.BBBBB.BBBBB.BBB.BBB.BBBBBB", "BBBBBBBBBB.B.BBBBBBBBBB.BBB..B", "BB.BBBBBBBBBBBB.B.BBBBBBB.BBB.", ".BB.BBBB...BBBBBBBBBB.B.BBBBB."};
    int T = 850650392;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 51889674828;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> clipboard = {"BBB.B.B.BB.BBBBBBB....B...BBBBB.BBBBBBBBB", "BB.BB.BBB..BBBBBBBB.BBB.BBBBBBBB.BBB.BBBB", "BBBBB..BBBBB.BB..B.B.BBB.B.B.B.BB.B.BB..B", ".BBB.B.BBBBB..BBB..BBBBBB..B.BBBB.BBBBBB.", "BBBBBBBBB.B.B.BBBBBBBB.BB.B....BBB..BBBBB", "BBB.BBBB.BBBBBBBBBBBBBB.BBBB.BBBBBBBBBB.B"};
    int T = 263715982;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 12130935345;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> clipboard = {"BB.BBBBBB...B.BBBBBBBBBBBBB..B.BB", "B.BBB..BB.BBBBB..BB.BBBB.BBBBBBB.", "..B.B.BBBB.BBB.BBBBB..B.B.BBBBBB.", "BB.BBB..B..B.BBB.BBBBBBBBBB.BBBBB", "..B..BBB.BBBBBBBBBBBB.B.B.B.BBB..", "BBBBB.BB.B.BBB.BBBBB.BBBBBBBBBBBB", "BB.BB.BBB.BBBBBBBBBBBBBBBBB.BBBBB", "BBBBB..BBB...BB.BBBBBB.BBBBB.BBBB", ".BBBBBBBBBBB...BBBBBBB.B.BB.BB.B.", "BBBBB....BBBBB.BBBBB.B.B..BBBBB.B", "B.BBBBB.BBB.BBBBBBBBBB.BBB.BB.BBB", ".BB.B.BBBBBBBBBBBBBB..BBBBBBBBBB.", ".BB.BBBBBBB.BB.BBB.B.B.BBBBBBBBB.", "BBBB.B.B.BB.B..BB.BBBBBBBBBBB.BBB", "BBB.B.BBBBB.BBBB.BB..BBBBBBBBBB.B", "BBB.B.BBB.BB.BBB.B.BBBBBBBBBBBBBB", "BBBBBB.BBBB...BBBBB..BBBB..BBBBB.", "BBB.BBBBBB.BB.BBB.B.BBBBBBB..BB.B", ".BBBB.BB.BBB..B.BB..BBBB..BBBBBBB", "BB...B..B.BBBBBBBBBB..B.BBBBBBB.B", "B.B..BBBBBB.B..B.B.BBB.BBBBBBB..B", ".BBBBBBBB...BB.BB.B.BBB.BBB.BBB..", "BB..BBBBB..BBBBBBBBBBB...B.B.B.BB", "BBBBB..B.BBBBBBBBBBBBBBBBBB.BBB..", ".BBBBB.B.BBB.BBBB...BBBB.BBB.BBBB", "BBBBB.BB.BBBBB.B.BBBB.BB.BBBBBBBB", "BB.BBBBB.B.B...BBB.BBB.BBBB.BBBBB", "BBB.BBBB.BBB.BB.BBBB.BB.B..BBBBBB", ".BBB..B.....BBBBB.BB.BBB.BBBBBBBB", "BBB..BBBBB..BBBBB.B.BBBBBBB.BBBBB", ".B.B....BBBBBBBBB.BBB.BBBBBBBBB.B", "..BBBBBBBB..BBB..BBB.BBBB..BBBBBB", "B.BB.BBBBBBB.BBBBBBBBBBBB.BB.BB.B", "BB.BBBBBBBB.BBB...BBBBB..BBBBB.BB", "BBB.BB.BBBBBBB.BB.B.BBBBBBBB.BBBB", "B.B.BBB...BBBBBBBBB.BB....B.BB.BB", ".B.BBBBBBBBBBBBB..B.BB.BBBBBBBBBB", "BBBBBB.BBBBBBB.BBBBBBB..BB..BBBBB", "B.BBBB.B.BBBBB.BBBBB.BBBB.BB.BBBB", "..BBB.B.BBBBB.BBBB.BBBB.BBBBBBB..", ".BBB.BBB.BBBBBBBBBBBBB.B.B..BBBBB", "...B.B.BB.B..BBBBBBBBBBBBBBBBB..."};
    int T = 218421855;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 15726374823;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> clipboard = {"BBBBBB.BBB.B.BBBBBBB.BBB.", "..BBBBB..BB..BBBBBBB.BB.B", "BBBBBBBB.B...BBBBB.B.BB.B", "B.BBBB.BBBB.BBBB.BBBBBBBB", "BBB.BBB.BBB.BBB...BBBBBBB", "BB.BBB.BBBB.B.BB.BBB.BBBB", "BB..B.BBBBBBB.B.B..B.BB..", "BBBB.BB.BBB..BBBBBBBB.BB.", ".BBBB..BBB..BBBBBBB.BBBBB", "B...BBB.BB.BBBBB..BB.B..."};
    int T = 599256141;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 19176196703;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> clipboard = {"BB.BBBBB.BB.BB", "BBB.BBBBB.B.BB", "BB.BBBBBB..BB.", "BBBB.BBBBBBB.B"};
    int T = 521930154;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 8872812648;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> clipboard = {".B.BBBBBBBBB..B", "BBBBBBBB.BBBBBB", "..B...BBBB.B.BB", "BB.BBBBBBBB.BBB", "BBBBB.BB.B.BBBB", "BBBBBB.BBB.BB.B", "BBBBBBBBBB..BBB", "BB..BB..BB..BBB"};
    int T = 83361744;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 1833958454;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> clipboard = {"BBB...B.BBBBB.BBBBBBBBB..BBBBB.B.B.BBBBB..BBB...B", "B..BBBBBB..BB.B..BBBBBBBBBB.BBBBBB.B..BBBBBBB.BBB", "..BBBB.BBBB.BB..B..BBB.BBBBBBB.BBBBB.BBBBB.BB..BB", "BB.BBB...BBBBB.BBBBBBBB.BB.BBBBB.BB.B.B...BBB.BB.", "BBBBBB.BBB.B.BBBB.BBBBBBBBB.BBB.B.B.BBBBB..B.BBBB", "BBBB..BBB.BB.B..BBBBBBBBBBBBBB.B.BBB.BBBBBBBBBBBB", "..BBB.B.BBB.B.BBB.BBBB.B.BBB.B..BBBBBBB.BBB.BBBBB", "BBBBBB..B.BBBB.BBBBBB.B..BBB.BBBBBBBBBBBB.BBBBBBB", "BB.BB.BBBB.BBB...BBBBB.BB.BB.BBBBBBBBB.B.BBBB.BBB", "BBBB.BBBB.BBBBBBB.BBBBB..BBB.BB.BBBB..B.B.BBB.BBB", "BBBB.BBBBBBBBBB.B.BBBBBBBBB.BBBBBBBBBBB.BBBB.BB..", "BBBBB..BBBBBBBB.BB.B.BBBB.BBBBB..B..BB.BB..B.BBB.", "BBBBB.BB.BBBBBB.BBBBBBBB...BBBBBBB.BBBB.BBBBBB..B", "..BBBBB..BBB.B.BBB.BB..B..B..BBBB....BBBB.BB..BBB", "B.BBBBBBBBBBBB.BBBBBBBBBBB..B.BBBBB.BB..BBBBB.BBB", "BBBBBB.BBBB.BBBBBB.B.BBB.BB.BB.BBBBBBB.B.B.BBBBBB", "BBBBBBBBBBBBBB...BB.BBB...BB..BBBBBBBBB.BB.B.BBBB", "BBBBBBBB.BB.BB..BBBBB.B.BBBBBBBBB.BBBB.BB.B.BBBB.", "B.BBBBBBB.BB.B.BB.BBB..BBB..BBB.BBBBBBBB.BBBBB.BB", ".B..BB.BBBBBBBB.BBBBBBBB..BBB.BBB.B.BBB.BBB...BBB", "BBBBB.B.BBBBBBBBBBB...BBBBBBB...BBB.BBBBBBBBB.BBB", "BBBB.B.BBB.BBB.BBBBBB.BB...BB.BBB.BBBBB.BB..BBBBB", ".BBBBBB.BBB.B..BB.B.B.BBB..BBBB.BBBBBBBBBBB.BBBBB", "B.BBBB.B.B.BBBB..BB.BBBBB.BBBBBB.BBBBBB.BBBBB..BB", ".B..BBB...BBBBB..BB...BB.BBB...BBBBBBBBBBBBBBBBBB", ".BBBB.BBB.BBBB..BBBBBBB.BB.BBB..B.B..BB.BB.B.BB.B", "BBBBB.BBBBBB..B.BBB.BBBB.BBBBB.BBBBBBBB..B.BBBBBB", "B.B..BB.BBBB.BBBBB.BBB..B.B.BBBB.BBBBB.BBBBB.BBB.", "BBBB.BB.B...BB.BBBBB.B.BBBBBBBBB.BB.B.BBBBBB.BBB.", "BBBBBBBB.BBBBB.BBBBBBBBBBBBBBBBB.BBBB.BBBB.B.BBB.", "BBBBB.BBBB.BB.BBBBBB.BBBBBBBBBBBBB.BBBBBBBBBBBBBB", "BBBB.BBBBBBBBBBBB.B.BBBB.BBBB..B.B.BBB.B.BB.B...B", "BBBBBBB.B.BB.BBBB.BBBBB..BB.BBBBB.B...BBBBBBBBBBB", "BBBB.B....B.BBBB.BB.BBBB.BB..BB..B..BBBBB.BB.BBB.", ".....B..BBBBB.BBBBBBBBBBBBBBBBB.BBBBBBBBBB..BB..B", ".BBBB.B.B..BB.BB.BBBBBBBB.B..BBBBBBBBBBBBBBB.BBBB", "BB.BBB.B.B.BBBBBB.BBBBBBB.BBB.BBBBB.BB..BBBBB.BBB", "BB.B.BBB.BBBB..BBB.B...B.BBBBB.B..BB.BBB..BB..BBB", "BBBBBB..B.BBBBB.BB.BBB..BB..BB.B.BBBBBBBBB.BBBBB.", "BBBBB....B.B.BBBB.BBBBBBB.B.BBB.BBB..BBBBBBBBBBBB", "BBB..BBBBB.B.BBBBBB.B.BBB.BB..BBBBBB.B.BBBBBBB.B.", "BBBBB...BBBBBB.BBBBBBBBBBBB.BBBBBBBBBB.BBBB.BB.BB", ".BBBBBBBBBBBBB.BBBBBBBBB.BBB.B.BB..BBBBBBB.B.B.B.", "BB.BBBB.B.BBBBBBB..BB.BBBB...B.BBBBBBB...BBBBB.BB", "BBBBBB.B...BBBBBBBB.BBBBBBBBBBBBBBB.B.BBBBBBBBBBB", "B.BBBBB..B.BBBBB.BBB...BBBBBBBBB.BBBB..BB.BBB.BB.", "B.BBBB.BB.BBBBBBBBBBBB..B..B.BB...BBBBBB.BB.B..BB", ".BBBB.B.B.BBBB.BBBBB.BB.BBB..B..BBB..B..BBBBBBBBB", ".BBBBBB.BBB.BBBBBBB.BB.BBB.B.BBB..BBBBBBBBB.BBBB.", "B..BBBB.BBBBBB.B.BBBBBB.BBBBBBBBB.BBBBBBBBB.BBBBB"};
    int T = 243196493;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 23590062119;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> clipboard = {"BBBB...B.B", "BB.BBBBBBB", ".BBB...B.B", "BBBBB.BB..", "B..BBBB.BB", "B.BB.B..BB", "BBBB.BBB.B", ".BBB.BBBB.", "...B.BBBBB", ".BBB.BBB..", "BBBBBBBBBB", "BBBBBBBBBB", ".BBBB.B.BB", ".BBBBBBBBB", ".B.B...B.B", "BBB.B.BBBB", "BB.BBBBBBB", "BB.BBBBBB.", "BBBB.BBBB.", ".B.BBBBBB.", "BB.BBBBBBB", "BBBBB.B.BB", "B.BBB.BB..", "B.BBB.BBBB", "BB...B.BBB", "BBBBBB..B.", ".BBBBBB.B.", "BBBBB.BBBB", "BBB..BBBBB", ".BBBB..BBB", ".BBBB...BB", "BB.BBBBBB.", "BBBBBBBBBB", "B.BBBBBBBB", ".B.BBBBBB.", ".BBBB.B.BB", "BBBBBBBBBB", "...BBBB.BB", "BBBBB.BBB.", "BBBBBB.B..", "BBBBBBBB.."};
    int T = 548157903;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 27407895472;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> clipboard = {"B..BBB..B.B", ".BBB.BB.BB.", "BBB.B.B..BB", "B.B.B.BBBBB", "BBBBBBBBBBB", "...B..BBB.B", "BBBB..BBB.B", "BBB..BBB.BB", "BBB..B.BBB.", "BBBBBB...BB", "BBBBBBB.B..", "B...B.B...B", "BB..BBBBBBB", "B.BBBB.BBBB", "B.BBBBBBBBB", "BBBB.BB.BBB", "BBB..BB.BBB", "B.BBB.BB.BB", "BBBBB....BB", "B.BBBBBBBB.", "BB.B.BBB..B", "BBBBB.B.BB.", ".BBB.BBB.BB", "BBBBB..B.BB", "BBB.BB.B.BB", "B.BBBBB.BBB"};
    int T = 237625976;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 8316909390;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> clipboard = {".BBBBB.BBBB.B.BB.BBB.", ".BBBBBBBB.B..BB.BBBBB", "..BBBBBBBBBB..B.BBBBB", "B.BBBBB..BB..BBBBB.BB", "BBB.BB.....BBB.BBBBBB", "BBBBBBB.B.BBBB....BB.", "B.BBBB.BBBBBBBBBBB..B", ".BB.B.BBBBBBBBB.BBBBB", "B..BB.BBB.B.BBBBBBBBB", "BBBBB..BBB...BBB.BBBB", "BB.BBBB.B.BBBBB.B.BBB", "BBBBB.BBBBB.BB.B.....", "BB.BBBBB.BB..BBBB.BBB", ".BBBBBB.BBB.BB.BBBBBB", "BBB.BBBBB.BB.BBB.BB.B", "BBB..B.B.B.BBBBBB.BBB", "BBBBBB.BBBBBBB...B..B", "B.BBB.B.BB.BBBB.BBBBB", "BBBB.B..BBB.BBBBBBBB.", "BBB.BBBBBB.BBBBBBBBBB", "B.BBBBBB.BBBBBBB.BBBB", "BBBBBBBB.BBBB.BBBB.BB", "BBBB.BBB.BBBBBBBBBBBB", "BBBBB.BBBB.BB..BBBBB.", "BBBBBB.BBBBB.BBB.BBBB", "BBBBBBB.BBB.BBBBBB..B", "BBBBBBBBB.BBBB.BBB..B", ".BBBBB.BBBBB.BBBBBBBB", ".B...BBBBBB.BBBBBBBB.", "BBBBBB...BBB.BBBBBBBB", "B.BBBBBBBBBBBBBB.BBBB", "BBBBB.BB..BBB.B.BBBBB"};
    int T = 263153760;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 13420842354;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> clipboard = {"BBBB.B.BBBBB..BB.BBBBB", ".BBBBB..BB.BBB.BBBBBBB", "BBBBBBBBBBBBBBBBBBBB.B", "BBBBBBBBBBBBBBB.BBB.BB", "BBBBBB.BBBBB..BB.BBBB.", "BB.BBBBBB.BB.BBB.BBBBB", "BBB.BBBBB.BBB.BBB.B..B"};
    int T = 922248395;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 25822955168;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> clipboard = {"BBB.BBBB..B..BBB..B.B.", ".BBBB..BBB.B..BBBBB.B.", "BB.BBBB..BBBBBBBBBBBBB", "BBB.BB..BB..BB.BBBBBBB", "B.BBBBBBBBB.B.BBBBBBBB", "BBBBB..BBBBBBBBBBBBB.B", "BBBB.B..BB.BBBBBB..BBB", ".BBB.BB..BBBBB.BBBB.BB", "B..BB...BBB.BBBBB.B...", "BB.B.B.BBBBBB.BBBBB.B.", "BBB.B.BBBB.BBB.B.BBBBB", "BB.BBBBBBBB...BBBB..B.", "BB.B..BBB.BBB.BBBBBBBB", "BBBBBBBBBBBBBBBB.BB..B", "BBBBBBB.B.BBBBBBBBBBBB", ".BB..B...B.BBB.BBBBBB.", "BB.BBBBBBB..B.BBBBBBBB", "BB.BBBBBBB.BBBB..B.BBB", "B.BBB..BB...B.BBBBBB.B", "B.BBBBBBB.BB.B.BBBBBB.", "..BBB.BBBBBBBBBBBB..B.", "BBB..BBB.BBBBBBBBBBBBB", "B..BBBBBB.B..B.BBBBBBB", ".B.B.BB.BB..B.B.B.BBBB", "BBBBB.BBBBBBBBBBB..BB.", "B.B..BBBBBBBB..BBBBBBB", "BBB.BBBBBBBBBBBBBBB.BB", "BB..BBBBBBBBB.B..BB.BB", "BBBB..BBBB.BBBB.BB.BBB", ".B.BBBBBB...BBBB..BB.B", "BBB.BBBBBB..BBBBBB..BB", "BB.B.BBBB.BBB.B.B..B.B"};
    int T = 175602365;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 9131323588;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> clipboard = {".BBBB.BBB.BBB.BBBBBB.BBBBBB.", ".BB..BB.BBB.BB...BBBB..BB.BB", "BBB.BBBBBBB.BBBBBBB.BBBBB.B.", "BBBBBBBB.BBB.B.BB.BBBBB..B.B", "..BBBBBBB.BB.BBBBB.B.BBBBB.B", "BBB.BB.BBB...B..BBBB..B.BBBB", ".BB.BBBBBBBBB.BBBB.BBBB.B.BB", "BBB.BBBB.B.BBBB.B..BBBBBBBBB", "BBBBB..BB..BBB.BBBBB.B.BB.BB", ".B..BBBBBBBBB..BBBBBBBB.BBBB", "BBBB.B.BBBBBB.B..BB.B.BB.BBB", "BBBB...B.BBBB.BB.B.BBB.B.BBB", "BBB..B.BBBB.BBB..BBBBBB..BBB", "B.BBBBBBB..BBB.BBB.BBBBBB.BB", "BBB..BBBBB...BBBBB....B.BBBB", "BB.BBBBBBB.BBBBBB.BBB.BBB.BB", "BB.BBBB..BBBBBBBB.BBBBBBBBB.", "BBBB...BBBBBB..BB.BBBB.B..B.", "..BBBBBBBBBBBBBB.BBBBB.BB.B.", "BBBBBBB.BBB..BBB.BBBBBBB.BBB", "BB...B..BBBB.BBBBBBB.BBB...B", "BBBBBBBBBBB.BBBBBBBBBBBBB.BB"};
    int T = 105185223;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 5048891252;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> clipboard = {"BBBBBBB.BBBBBBBBBB.B..BBB.B.B.B..BBB.B.BBB", "B.BBBB.B.BB.B.B.BBB.BBBBBBBBB.BBBBB.BBBBBB", "B..B...BBB..B.BBBBBBBB.BBBBB.BBBB.B.B.BBB.", "BBB..BBB.BB.B...BBBBBBB..BBBBBB.B.B.BBBBBB", "BBB.BB.B.BB.BBBB.BB.BB.BB..BBBBB.B.BBBBBB.", "BBB.B.BBBBBB..BBBBBBB.BB.BB..B.BBBBBBBBBB.", "B.BBBBBBBBBBBBBBB.BBBBB.B.B..BBBBBB.BBB..B", "..BBB..BBBB..B....BB.BB.B..B.BBB.BBBBB.BBB", "BBBBB.BBBBBBB.BBBBBBBBB.BBBBBB.B.BB.BBBBBB", "B.BBB.BB.BBBBBBBBB..B..BBB.BBBB.B.BB...BBB", "BB.BBBBBBBB.BB..BBBBBBB.BBBBBBBBBBBBBB.B.B", "BBBBB.B.BBBB.BBBB.BB.BBBBBB....B.B.BBBBBBB", "BBBBBBBBBBB.BBBBBBBBB.BBB.BBBBB.B..BBBBB.B", "BBB.BB..B.BBBBBBBB...B.....BBBBBBBB.BBBBBB", "..BB.BB.BBB.BBBBBB.B.BBB.BBBBB.BB.BB.BB.BB", ".BB...BB..B.BBBBBBB.BBBBBBBBB.BBBBBB.BBBBB", ".BBBBBB.BBBB.BB..B.BBBBBB..B.BBBB...BBBB..", "BB.BB.BBB..B.B.BB.B..BBB.BB.B..BBBBBB..BBB", "BB..BBBB.BBBBBBBB.BB..BBBBBBBB.BBBBBBBBBBB", "BB.BB....BBB..BBBBBBBB..BBBBBB.BBB.BB.BB.B", "BBBBBBBBB.BBBBBB...BBBB.BBBBBBBBBBBB.BBB.B", "BBBBBB.BBBBBBBBBBB.BB.BBBBB.BB.BBBB..BBBBB", "BBB.BBBBBBBBBB.BB.B..BBBBBB.B.B.BBBBBBBB..", "B.BB.BB.BBBB.BB..B.BB.BBBBBBBB.B.B.BBBB.BB", "B.B.B..BBBB.BBBBBBBBBB.BB.BB..BBB.B.BBBBB.", "BBBBBBBBBBBB.BBBBBBB.BBB.BBBBB.BBB.BBBB.B.", ".BBBB.B.B.BB.B.BBB....BBBB.B..BBBB.BBBBBB.", "BBBBB.BBB.BB.BBBB.BBBBBBBB.B.BBB.BB.BBB..B", "BB..B......B.BBBBB.B.BBBBBB.B.B.BBBBBBBBB.", "B..BBBBBBBB.B.BBBB.BBBB.B.BBBBBBBBB.BBBBBB", "BBB.BBBBBBBB.BB.BB...B..BB..BBBBBBBBBB..BB", "BB.BBBB.BBBB.BBB.BBBBB.BBB.BBBBBB.BBBBBBBB", ".BBBBBBB.BBB.B..BBBBB.B.BB.BBBBB.BBBB.B.BB", "B..BBB.BBB.BB.BBBB...B..BBBBBBB.B.BBBBBBB.", "B.B.BBBBBB.....BBBBBB.BBBB.BBBBBBB.B.B.BB.", ".BBB..BBBB.BBB..B.BBBBB.BB...BBB..BBBBB..B", "..B.BBB..BB.B..B.BBBB.BBB.BBB..BBBB.B.BBBB", ".BB.BB.BBBBBBB.B...BBBBBBB.BB.BB.B.BBBB..B", "BBBB..B..BB.BB.BBBBBBB...B.B..BB.BBBBBBB.B", "BBBBBB.BBBBBBBB...BBBBBBBBBBBBBBBBBBBBBBBB", "BBB..BB.B.BB..BBBB..BBBBBB..B.BBBBBBBBB.BB", ".B.BB.BBB.BBB.BBBB.BBBBBBB.BBBB.BBBBB.B.BB", "BB.BBBBBB.BBBBB.B.BB.BBBBB.B..BBBB.BBBBBBB", "BBBBBBBB.B.BBBBB.BBBB.BBBBBBBBB.BBB.BB.BBB", "B..BBBBBB.BBBBBBB.....BBB.BBBBBBB.BB..BBBB", "BBBBBBBB.BB..BBBBBBBBBB.BBBBBBBBBBBBBBBBB.", "BBB.BBB.BBBBB.BB.BBBB.BB..BBBBBBBBBBBBB.BB"};
    int T = 14768970;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 1299671198;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> clipboard = {"B.B.BBB.BBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BB.BBB.B.BB.BBBBBBBB.B.B.BBBBBBBBB", "BB.B.BBBBB.BBB.BBBB.B.BB.B.BBB.BBBB", "BB.BB..BBBBBBBB..BB.BBBBB....BB.BBB", "BBB..BBB.BB.BBBBB.BBBBBBBB.BBBBBBBB", "B.BBBBB.BBB..BBBBBBBBBBBB.B.BBBBBBB", "BB...BB..BBBBB.B..BBBBBBBBBBB.B.BB.", "B.BBB..B.BBBBB.BBBB.BBBBBBBBBBBBBBB", "BBBBBBBBBBB.BBBBBBB.B.BBBBBBBBBBB..", "B..BBB.BBBB.B.BBBB...B.BBBB..BBBBBB", "..B.BBBBBBB.BB..BBBBBB.BBBBBBBBB.BB", "BBB.BBBB.B.B.B.BBBBB.BB.BBBBBBBBBBB", ".B.BBBB.B.....B.BBBBBBB.BBBBBBBBBBB", "BBBBBBBBB.BBBBBBBBBBBBBB.B.BBBBBBB.", ".BBBB.B..B.BBB.BBBB.BBBB..BB.B.BBBB", "BB..B.BB.B..BBBBBB..BB.BB.BBB.B.BBB", ".BBBBB.BBBBBBBBBB.BB.BBBB..BBBBBBBB", "BBBBB.BB.BBBBBB..B..B.B.B...B.BBBBB", "B.B.....BBBBBB.BBBBBBBBB.....BBBBB.", "BB.B.BBBB.BBBBBBB.BBBBBBBB.B.B.B.BB", "B.B..BB.BBB..BBB.B..B..B.B.BBBBB.BB", "BBBB....B.BBBBBBB...BB.BBBBB..BBB.B", "B..B.BBBBB.BBB.BBBB.BBBBBBBB..B.B.B", "BBBBBB.B.B..BBBBBBBBBBBBBBB.BBBBBBB", "BBBBBBBBBBBBBB.BB.BBBBBBBBB.BB.BBB.", ".BBBBBBB.B..BBBBB.BBBB.BBB.BBBB.B.B", "BB.B..B.BB.B.BB...BBBBBB.BBBBBBBB.B", "BBBBBBBBBBB.BBBB.BBBB.BBBBBBB.B.B.B"};
    int T = 339269938;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 21034737052;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> clipboard = {".BB..BBBB.B.BBB.BBBBBB", ".B.BB.B...BBBBBBBBB..B", "B.B......B.BBBBBBBB.BB", "BBBBB..BBB.BB.BB.BBBBB", "BBBBBBB.B..BBB..BBBBBB", "BBB.BBB.BBBBBBBB.BBBBB", "B.BBBBBBBBBBB.B..BBBB.", ".BB.BBB..B.B.BBBB.BBBB", "BB..BBBBBB.B.BBBBBBBBB", "BBBB.B.BBBBBB.BBBBBBBB", "BBBBBB.BB.BB.BB.BBBB.B", "BBBB..BBBB.B.B.BBB.B.B", "BBBBBB.B.BB.B.BBB.B.BB", "BB.BB.B.BBB.B.BB.BBBBB", "..BBBBB.BBB..BBBBBBB.B", ".BB.BBBBBBBBBBBBBBB...", ".BBBBBBBB.BBBBBBBB.BB.", "BB.BBBB.BBB.BBBB.BBB.B", "BBB.BBBBB.BBBB.BB..BBB", "BBBB.BBB.BBBBBBBB..B.B", "B.BBB.BBBBB.B.B.BBBB..", "BBB.B.B.BBBBBBBBBBBBBB", "BBBB.BB.BB....B....BBB", "BBBBB.BBBB..B.BBBBBBB.", "BB..BBB.B.BBB..BBBBB..", ".BBBBB.BBBBBB.B..B..BB", ".BBBBB.B..BBB.BBBBB.BB", "BBBBBBBB.BBB..B..BB..B", ".B...BBBB.BBBBBBBB.BBB", "BB..BBB.BBB.B..BB.BBBB"};
    int T = 457839992;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 23349840167;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> clipboard = {"BBB.BBBBBBBB...BBB.B.", "B.B.BBBBBBBBB.BBBBBBB", "BBB.BBB.BBBBBB.BB.BB.", "BB.BBBB.BBB...BBBBBBB", "BB.B.BBBBBBBB.BBB...B", "...BBB..B.B.BBB.BBBB.", "BB.B.B.BBBBBBBBBBB.BB", "BB.BBBBB..BBBBBBBB..B"};
    int T = 49730576;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 1342725675;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> clipboard = {"B..B.BB.BBBBBBB", "BBBB.BBBB..BBBB", "BB.B..BB.B..BB.", "BBBB.BBB.BBBBBB", "..B.B.B.BBBBB.B", ".BBBBBBBBBBB.BB", "BB.B.BBBBBBB.B.", "..BB.B.B.B.BBBB"};
    int T = 834786794;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 17530522759;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> clipboard = {".BBBBBBBBBBBB.BB.BBBBB..BBBBBB.BBBBBBB", "BBBBBBB.BBB.B.BBB.B..BBBBBBB.BBB.BB.BB", "BBBBB.BBBBB..BBB..BBBB.B.BBB.BBBB.BB.B", "BBBBBBBB..BBB.B..B.BBB.BBB.B.BBBBB.BBB", "BBBBBBBBBB.B.B.BBB..BBBBB....B.BBB.B.B", "B..BBB.BBB.BBBB.BB.BBBBBBBBBBB.BBBBBBB", ".B.BB.BBB.BBBB.BBBBBBBB.BBB.B...B.B..B", ".BBBBB.BB..BBB.BB.B.BBB..BBBBBBBBBBBBB", "B.BBBB.BBBBB.....BBBBB.BB..BBBBBBBB.BB", "BBBB.BBBBBBBBB.BB.BBBBBBBBBBB.BBBB.BBB", "BB.BBBBBBBB.BBBBBBBB.BBBBBB.BBB.BBBB..", "BBBBBBBB.BBBBBBB..BBBBBBBBBBBB.BBBB..B", "BBBBBBBB..BB.BBB.BBBBBBB.BB.B.BBBBBBBB", "BBBBBB..BBBBBBBBBBBB.B.BBB.BBBBBBB.BBB", "BBBBBBBBB.BBB.B.BBBBBB.B.BB...BBBB....", ".BBB.BBBB.BB.BBB.BB.BB...BBBB.B.BBBB.B", "BBBBBBBBB.BB.B...BBB.BB.BBBBBBBB..BBBB", ".B.BBBBBBBB.BBBBBBBBB.BBB.BBB.BBBBBBBB", "BBBBBBBBB..BBBB...BBBB..BB.BBB.B..BBBB", "..B..BBBBBBBB..BBBB.B.BBBB.B.B.BB.B.BB", "BBBBBB.BB.BBB.BBBBBBBBBBB.BB..BBBBBB.B", "BBBB.BBBBBB.BB.BB.BBBBBB.BB.BBBBB..B.B", "B..B.BBB..BBB.B..BB..BBB..BBBBBBBBBBBB", "BB.B..B.BB.B..BBB.B.BBBB.BBB..BBBBBBBB", "BBBBBBB.BBBBBB..BB.BBBB.BB.B..B.BB..BB", "BB.BBBBB.BBBBBBBBBBBBBBBB..BBBB.BBBB.B", ".BB..BBBBBB.BBB.BBBBBBBBBBBBBBBBBBBBBB", ".B.BBBBB..BBBBBBBBBBB.BBBBBBBBBBBB.BB.", ".BBBBBBBBBBB.BB...B.BBBBBBBB..BBB.BBB.", ".BBBBBBB.B.BBBB.BBBBBBBBBBBBBB...BBBBB", "B.B.BBBBBBBBBBBB..BBBBBBBBBBB.BBB..B.B", "B.BB.B.BB...B.BB.BB.BBBBBBBB.BBBBBBBBB", "BB.BB.BB....BBBB.B.BBBBBB.B.B.BB.BBBBB", ".B..B.BBBBBBBBB.B.BBBBBBBBB...BBBBBBB.", ".BBB.BBB.BB.B.B.BBB.BBB.BBB.B.BBBBB.BB", "BBB.BB.B.BBB.B.BBB.BBB.BB..BB.BBB.BBBB", ".BBB..B.BBBBBBBBBBBBBBBBBBB.BBBB.BBB..", "BB..BBB.BBB.B.BBBBBBBB.B.BB.BBBB.BB.BB", ".B.BBBBBB.BBBBBBBBBBBBBB.B.B.BBBBB.BBB", "..B.BB.BBBBBBBB..BB.BBB.BB.BB.B.BB.BBB", "BBBBB.BBBBBBBBBB..BB..BBBBB.B.BBBB.BBB", "B..BBBB.B.BBBBBBBBBBB..BBBBB..B.BBB..."};
    int T = 870024498;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 68731936811;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> clipboard = {"B.BB.BB.BBBBBBBBBBBBBBBBB.BBB.B.BBB.BB.B.BBB", "BB.BBB.BBBBBBBB.BBBBBBB.BBBBBB..B.BBB..BBB.B", ".BBB.BBB.BBB.BBBBBBB.BBBB.B..BBBBBB.BBB.BBBB", "BB..BBBBBB.BBBB.BBB.B.BBBBB.BBB.BB....BBBBBB", ".B.BBBBBBBBBBBBBBB.BBBBB..BBBB.BBBBBBB.BBBB.", "B..BBBBBB.BBB..BBBBBBBB..BBBBBBBBBBBBBB.BBBB", "BBBB.B.BBBBBB.BBB.B..B..BB..BB..BBBB..BB.B.B", "BB.B.BBBBBBBBB..BB..BBB...BBBBBBB.BBBBBBB.B.", ".BBBB.B.BBBBBBBB.BBBBBB..BBBBBBBB.BBBBB.B.BB", "...BBBBBB.BBBBBB.BBBBBBBBBBB.BBB..BBB.BBBB.B", "B.BBBB.BBB.BBBBBBB.BBBB.BBBB.B.BBBBB..BBBBBB", "BBB.B.B.BB..B.B.B......BBBBBBB.BB..B.BBBBBBB", "BBBBBBBBBBBBBBB.BBBB...BBBBB.B.BBBB.BB.BB.BB", ".B.BBB.B.B.BB.BB.BBBBBBBBBBB.BBBBBB.BBBB..B.", "BBBBBBBBBBB.BBB.B.BB..BB.B..BBBB.BBB.BBBBBBB", "B.B.BBBBB.BB..BBB.B.BBBBB.BBBB.BB..B.BBB.BBB", "B.BBB.BBBBBB.B.BBB.B.BBBBBBBBBBBBBBBBB.BBBBB", ".BBBBBBBB.BBB..BBBBB.BBB.BB.BBB.BB.BBB.BBBBB", "BBBB.BBB.BB.BBBBB.BBBBBBBBBBBB.BBBB.BBBBB.BB", "B.BB.BBBBBBBBBB.BBBBBB.BB.B.BB.BBBB.BBB.BBBB", "BB.BBB..BBBB.B..BBBBBB..BB.BB.B.BBBB....B..B", "BBBBBBBBB...BBB.BB..BBBB.BB..BB.BBBBBB..BBBB", "BBBBBB.BBBBB.BB..BBBBBBBBBBBBBBBBBB.BBBB.BBB", "BBBBBBBBB.B.BBBB.BBBBBB.B.BB.BBB.BBB..BBBB.B", "B..BBB.BBBBB..BBBBBB..BBBBBB.BB.B.BBBBBBB.BB", "BBBBBB.BBBB..BB.BBBBB..BB.BBBBBBBBBBBB.BBBB.", ".BB.BBBB.B.BBBBB.BBB.BBBBBBBBBBBBBBB.BBBB.BB", "BBBBB..BB.B.BBBBB.BBBB.BBBB.BB.BBBB.BBBBBB.B", "BBBBBBBBBBBB.B.B..BBBBBBBBB.B..BBBBBBBBB.B.B", ".B.BBB.BBB..B.....B.B.B.BB...BBBBBB.BBB.BBBB", ".BBBBBBB.BBB..BB.BBB.BB.B.BBBBB..B.BBB.BB...", "BBBB.BBB.BBB.BB...BB.BBBBBBBBBBB.BBBBB.BBBB.", "B.BBBB.B.BB.B.BBBBBB.BB.BBBBB.B..BB.B...BBB.", "BBBBBB.BB..BB.BB.BB.BBBBBBBBBBBBBBB..BBB.BB.", ".BBBBBBBBBBBB.BBBBBBB..BBBB..BBB.BBBBBBBBBBB", ".BBBBBBBB.B.BB.BBBBBB.BBBBBBBB.BBB.BB.BBBB.B", "BB.BBBBBBBB.BBBBB.BBBBBB.BB.BB..BBBB.BBBBB.B", "B.BBBBBBBBBBB..BBBBBB.B.BBBBBBBBB..BB.BB.BBB", "BBBBB.BBB..BBBBBBB..BB.BBB...B.B.B.BBBB.BBBB", "B.BBBBBB.BB.B....BBBB..B.BB.BBBBBBBB.BBBBBBB"};
    int T = 289206841;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 24004169431;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> clipboard = {"..BBBBBBB.BBBBBB", "B..B.BBBB.BB..BB", "B.BBBBBBBBBBB.B.", ".BBBBBB.BBBB..BB", "BBBBBB.BB.BB.BBB", "BB...BBBBB.BBB.B", "BBB..BBB.B.BB.BB", "BB.BB.BBBBBB.BBB", "BBB.BB.BBBBB.BBB", ".B.B.B.BBBBBBBBB", ".BBBBB.BBBB.BBBB", ".B.B.BBBBBB.BBBB", "BBB.B..BBBBBBBBB", "B....BBBB.....BB", "BBBBB.BBBB.BBBBB", "BBBBB.BBBBB...B.", "B.BB...BBBBBB..B", "BBBBBBB.B.BB.BBB", "BBBBB.BBBBB.BBB.", "B.BB..BBBBBB..BB", "B.BBBBBBBBB.BB.B", "BBBBBBB.BBBBBBBB", "BBBBB...BBBBBB.B", "BBB.BBBBBBBBB.BB", ".B.BBBB..BBBBBB.", "..BBBBBBBBBBB.B.", ".BBB.BBBBBBBBBBB", "BBBB..BB.BBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBB.BBB", ".B.BBB..BB.BB.BB", "BBBBBBBB..BB.B.B", "BB.BBBBBBBB.B.BB", "BBBBBB.BBBBBBBB.", "B.B.B.B.B....B.B", "B.BBB.BB.B.B..B.", "BB.BBBBBB.BBBBBB", "BBBB.BBBB.BBBBBB", "B.BBBBBBBBB.BBBB", "BBB.B.BBBBBB.B.B", "BB.B.BBBBB..B.BB", "BB..BB..BBBBBB..", "B.B.BBBBB.BB.BBB"};
    int T = 438602558;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 25877551539;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> clipboard = {"B..BB.BBBBBBB.B...BB.B.B..B.BBBBBBB.BBBBBBBB.", "BBBBB.B..BBBB.BB.BBBB.BBB.BB.BBBBBBBBBBBBBBBB", "BBB.B.BB..BBBBBBBBBBBBBB.BB.BBBBB.BBBB.BB.B..", "BBB.B.BB.B.B.BBBBBBB.BB.BB..BB.BB.BBBBBBBBB.B", "BBBB.BBBBBBBBB..B.BBBBBBBB.BB.BBBBBBBB.BBBBB.", "B.BB.BB.BB.B..BB.BBBBBBBBBBBB..BBBB.BBBBBB.BB", "B.BBBBB....BBBB..BB.BBBBBBBBBBBB..B.B.BBBBB..", "BBBBBBB.BBB.BBBBBBB.BBBBBBBBBBBB.B...BB..BB.B", ".B.BBBBBBBBBBBBBBB.B.B.BBBBBB.BB.B.BB.BBBBB.."};
    int T = 783370335;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 39951887402;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> clipboard = {"B.BBBB.BBBBBB.B.BBBBBBBBB.B.B.B..BBBBB.", "BBBBBBB.BBBBBBB.BBBB.BB..BBBBBBBBBB...B", "BBB..BB.BB.B..B.BB..BB.B.B..BBBBBBBBB.B", "BBB.BBBBBBBBB.BBBBBBB.BBBBBBBBBB.BBB..B", "BBBB.BBBBB..BBB....B...BBBBBBB.BBBBB.B."};
    int T = 622472535;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 26143846596;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> clipboard = {"BBB.BB.B.BBBBBBBBBBBB..BBB", "BB.BB.BB.BBBB.BBBBBBBBBBBB", "..BBBBBB.BBBBBBBBBB.BBBB.B", "BBBBBB.BBBB.B...BB.BBBBBB.", "BBBB..BBBBB.B.BBB.BBBB.BBB", ".BBBBBBBBBB.B.B.BBBBBBBB..", "B.BBBB..BBB.BBBBBB.BBB...B", "BB..BBB.BBBBBB....BBB.BB.B", "BBBBBBB.BBBB.BB..B.BBBBBBB", "BBBBBBBBB.B.BBB.B..BB.B..B", "BBBBBBB.B..BBB.BBBBBBBBBBB", ".BBB.BBBBBB.BBBBB.BB...BBB", "BB.B.BBBB.BBB..BB..BB..BBB", "BB.BBB.BBBBBBBBBB.B..BBBBB", "BBBBB.BBB.BBBBBBBBBBBBBBBB", "B..BBBBBBBBBB.BBB.BB.B.BBB", ".BB.BBBB.BBBB.B.B.BBBB.BBB", "....BB.BBBBB..B.BB..B.BBBB", "BBB..BBB.BBBBBBBBBBBBB.BBB", "BBBBBBBBB.BBB..BB..BBBB..B", "BB.BBBBB.BBBBBBB.BB.BB..BB", "BBBBBB.BBBBB..B.B.BBBBBBBB", "BBBBBB.BBBBB.BBB.B.B.BB.BB", ".BBBBBBBBBBBBBBB.BBBBBBBB.", "BBBBB.BBBBBBBBB.B...BBBBBB", "B.BB.BBB.BBB.BBBB..BB.BBB.", "BBBBBBBBB.BBBBBBBBBBBBBB.B", "BBB.BBBBBBBBB..B.BB.B.BB..", "BB.BB.BBB..BBBBBBBB.BBBBBB", "B.BB.BBBBBBBBBBBBBBBB.B.BB", "BB.BBBBBBBBBBBBBBBBBB.BBB.", "BBBBBB.BBBBBBBBBBBBB.BB.B.", "BBBBBBB..B.BBB.BBBB.BBB..B", "BBBBB..B.B...BBBBB.B.BBB.B"};
    int T = 668647266;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 39450189482;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> clipboard = {"B.BBB.BBB", "BBBBBB.BB", ".BBBBBBBB", "BBBBBB.BB", "B.BBBB..B", ".BB.BB..B", "BBBBBBBBB", "BBBBB.B..", "BBBB.BBBB", "..BBBB.BB", "BB.BB..BB", "B.BB..BBB", "BBB.BBB.B"};
    int T = 508726536;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 10683257343;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> clipboard = {"BB....B...BB..B.B.........B..B..", ".....BB.....B..BB...B..BBB......", ".....B.B....B.....B..B..B.BB.B..", "....BB..B.........BBB..B...B.B..", "....B.....B....BB..B....B.B..B.B", ".........B.B.BB.....B....B......", ".BB....B....B..B...B.B....BB....", "BBB...........B..BB.B..B.BB...B.", "...BB..........B.BBB.....B.B.B..", "...BBBB....B..B.B.....B....B.B.B", "B.....B.B.BBB.B.B......B.......B", ".B..B........B.B.BB.BB.BBB.B.B..", ".B........B.........BB......BB..", ".BBBB..B....B...B....B.BB.B.....", ".......BB...B..BB...............", "..BB..B...B............B........"};
    int T = 513998305;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 21073930761;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> clipboard = {"B..B", "B..B", "BBBB", ".BB.", "BBBB", "....", "B...", "....", "....", "BB..", "BB..", "B...", "....", "B..B", "....", "..B.", "...B", "....", "B..B", "....", ".BB.", "B...", "....", "BB..", ".BB.", "B..B", "B...", ".B..", "B...", ".B..", "....", "....", "B..B", "....", "B..B", "BB.B", "B...", ".B..", "B...", "....", "..BB", "B.B.", ".B.B", ".B.B", "....", "....", ".B.B"};
    int T = 577633371;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 21372434757;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> clipboard = {".B....", "B..B..", "..BB..", "BB..B.", "BB....", "BBBB..", "......", "......", "BBB...", "...B.B", "B....B", "....BB", "B...BB", "......", "BB...B", "......", ".....B", "...B..", ".B....", "....B.", "...B.B", "B.B...", "..BB..", "....B.", "...B..", "......", "B.....", "..B.B.", "B.BBB.", "BBB...", "...B..", "....B.", ".B.B..", ".B..B.", "..B.BB", "......", "B...B.", "B.....", "...B..", "..BB.B", ".B...B", "....BB", "....B."};
    int T = 428171886;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 16270531732;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> clipboard = {"B.BB.......BB..BB.", "..B..B.....B.B.B..", "B.................", "B...B..B.B.BB..BB.", "B......BB.B.BB.B..", "..B......B..B...B.", "..B....B.BB.....BB", ".....B..B.B....B.B", "B.......BB.B..B...", "...B....B.B.B.B...", ".....BBB.B........", ".B.......B....B...", "..BB...BBB.BB..B..", "..B..B...B........", "......B......B.B.B", "....B....B..BB....", "..BB......B..B....", "..B.B...B.B.....B.", "B.B.B...BB..B.B...", "...BB...B.....BBB.", "B..B..B......BB...", "..B..B....B.BB...B", "B.B..........B.BBB", "....B.......BB....", "B.B.B..B....B.....", "B.B....B....B.B...", "......B..B...B..B."};
    int T = 411037483;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 16852537048;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> clipboard = {"...", "B.B", "B..", "..."};
    int T = 982892280;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 2948676840;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> clipboard = {".B.B..", "B.B..B", ".B.B..", "..B..B", ".B..B.", "..B...", ".B.B.B", "B.....", "B.B.BB", "......"};
    int T = 791405227;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 9496862735;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> clipboard = {".....B....B..B", "BB...B.B.B....", "B.....B.B....B", "..B.B.BB....BB", ".B..BBB.....B.", "BBBB..........", ".........B...B"};
    int T = 342159896;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 6158878150;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> clipboard = {"B............B...B....B.", "B.B........B............", "......B.......BB........", "...B...B....B.......B.B.", "BB.B.BB........B........", ".B.B...BB.BBB..B.BB.BB.B", "BB.B.............B..BB..", "BB....B..B.........B.B.B", "BB..B.......B..B..BB.BB.", "B......B.B.BBB.B.BB.BB..", ".......B..B.B...........", "..............BBB.....BB", ".B.............BB...BB..", ".BB..BB...BB...B.....B..", "..B.....B.....B.........", ".........B..B..B........", "B..B.B..B...B......BB.B.", ".B........B....B....B...", "..B.........BBB.BB..B...", ".B.B...B..........BB....", "..B...B.BB......BB..B.B.", "BB.......B.B.....B......", "...B....B.B.B...B.B...B.", ".B...B.B.B..BB.....B..B.", "....B......B..BB...B...B", "....BBB....B..BB..B...B.", ".BBBBB.B.B...BB..B..B..B"};
    int T = 102745984;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 4623569649;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> clipboard = {".......BB.....BB", "..B......BB.....", "B.B...B...B..B..", "B.B.....B......B", "....B...........", "...B...BB......."};
    int T = 1841872;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 29469959;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> clipboard = {"..B..........B.B........BB...B.....", ".B.B.BBB...B.BB...B....BB......B...", ".BB..BBB.B..BBB...B.......BBB...BB.", "...B.BB..B...B....BB..B......B..B..", ".B.BBB....B....B.B.BBB..B.B..BB..B.", "....B...B....B....BBB..............", "..B..B.B.....BB.B.B...BB....B....B.", ".B.BBB...B.B.B...BB...BB..B.BB.....", "....BB.B..BB...B.B.B.B...B.......B.", ".....B..B...BBBB..B..B.B.B....BB...", "B..B.B.......B.B....BB.BB.....B....", ".B..BB......BB.....B........B....BB", ".B.....B.B..BB.BB..BB.BBBB...B.BB..", ".B.....B...BBBB..B...B..B..B..BBB.B", ".......B.B..........B.B.B.......B..", ".....B.B..BB.B..BBB..BB........BB..", "..B....B....B..B.B.....BB...B..B..B", ".B...B...B..B..B.........B...B.....", "...B.B..B.BB...........B...BBB.B...", ".B..B....B...BB...B....B.....BB.BB.", "..BB.....B....BBB.....BB.B.......B.", "B..B.BB....BB...BB.BBBB.B.B..B.....", "B..B...B...B...BB.B...B..B.BB.....B", ".......B.BB.B....BBB.......B.BB....", "B........BB.....B..BBB...B.BB......", "B...B.B.....B....B......B.BB.......", "B.BB.....B...B...B.B...B...B...B..B", "...B.....B.....BB.B.B.............B", "..BBB...B...BB..B........B.B....B..", "..B...B..BB..B.BB..B..BB...B..B....", ".BB.B..B.B...B.....BB...B.B..B.BB..", "...B....B.B...B..BB.....BB.......B.", ".BBB....BBB....B...........B.......", ".B....BB........B...........BB.....", ".......B..B.....B...B.B..BB........", "...B.B..B.......B..B..BB......B....", "B...B.BB....B..B.......B..BB.BB..B.", "B.BB...B.B....BB..BB......B.BB...BB", "B.................B..B....B.BB..B..", "BB.B......BBB.....B...BB...B..B.BB.", "..B...B.BBB.......B.B.....B..B.....", ".B........B.B.B.BBB.BBBBBB....B.B..", "B.B.B.......B..BB...........B..B..."};
    int T = 818769224;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 58132615987;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> clipboard = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    int T = 12620659;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 593171453;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> clipboard = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    int T = 679413087;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 44841264792;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> clipboard = {"BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    int T = 642127884;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 48801720458;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> clipboard = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    int T = 929910696;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 57654463776;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> clipboard = {"BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBB"};
    int T = 567554078;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 34053245340;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> clipboard = {"BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB", "BBBBBBBBBBBB"};
    int T = 953793258;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 24798624862;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> clipboard = {"BBBBBBBBBBBBBB", "BBBBBBBBBBBBBB", "BBBBBBBBBBBBBB", "BBBBBBBBBBBBBB", "BBBBBBBBBBBBBB", "BBBBBBBBBBBBBB", "BBBBBBBBBBBBBB", "BBBBBBBBBBBBBB", "BBBBBBBBBBBBBB", "BBBBBBBBBBBBBB", "BBBBBBBBBBBBBB"};
    int T = 472099603;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 11330390602;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> clipboard = {"BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBB"};
    int T = 342595117;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 16101970979;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> clipboard = {"BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBB"};
    int T = 523432208;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 35593391134;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> clipboard = {"BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB", "BBBBBBBBB"};
    int T = 211155339;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 12247010054;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> clipboard = {"..BB..", ".....B", "BB....", "....BB", "..B...", ".B..BB", "......", "....BB", ".....B", ".B..B.", "B.....", "B.B...", "B.....", "...BBB", "......", "B....B", "..BBB.", ".BB..B", "...BB.", ".BB...", "B.B...", "B.B...", "B.B..B", ".B..B.", ".....B", "BB....", ".B.BB.", "....B.", "B.BB.B"};
    int T = 61673903;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 1850217141;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> clipboard = {"B.BB....BB..B.B...BB............", "B.......B................BBB..B.", ".BB....B..B..B............B.....", ".B.......BBBB........BBB.BB..B..", ".BB..B...BB.......B....B...B..B.", ".....B.B.BBBB..................B", "...............B..BB......BB.BB.", "............B...BBBB..B.BB.B.B..", ".....BB..........B....B.......B.", "...B......BB.B..BB......B.BBB..B", "........B..BB...................", ".BB..BB.....B..B...........B.B..", "..BB....BB...B...BB..B.B.....B..", "..B...B.B....B.B....B......B....", ".B.BB..B......B.B..B......B.....", "BBB..BB..BB.....B............B..", ".....B.........B.....BB.....B.B.", "B...B.B.......................BB", ".................B..B..B....B.B.", "...B..B.....................B...", ".BB...B............BB.....B...BB", "..B........B.B.B.....BB....BBB..", ".BB......B.B.....B.BB.......B...", ".......BB..B.....B..........B...", "...B....B........B...B...B......", ".B.........B.B.B.BB.B.....B.....", "......BB.....B..BB..B...........", ".BB.B..........B.B...B.B.B......", "B...BBB......B..............BB..", "......B..............B........B.", ".B....BB..B..BB...B.B....B...B.B", "..B.B..B..B.......B..B.......B..", "......BB................B......B", "BB.....BBB....B.B.......B.......", "BBBB.......B.B..........B...B...", "...B...B..BB.....B...BB.B...B...", "....B..B.BBBB.....B..B.......B..", ".....B.....B..........BB....B.BB", ".B..B......B...B..BBB.B.B.B....B", "B.....B..B....B....BBB.B........", ".........B...BB..B.....B.B....B.", "B...B...BB..........BB....B...B.", ".B........BB......BB..B.BB......", "...........BB...BB.B.B...B......", "B....B.....B......BB.B.....B...."};
    int T = 298299260;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 19687752089;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> clipboard = {".......B..BBB.B..B...B.BB..", ".................B....BB...", "...BB...BBB.B...BB.B.......", "......BB.BB...B.......B.B.B", ".........BB.BB.....B....B..", "...B....B..B........BBB...B", "..B........B.B..B..........", "B.....B...B.B.B....B..B.B..", "......B.......B....B..B..B.", ".B.......B.................", ".........B....B.BBB...BB.B.", "..BB....B.........B...BB.B."};
    int T = 697071097;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 21609204123;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> clipboard = {"...B.B", "..B...", ".....B", ".BBB..", "B.B..."};
    int T = 70046735;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 490327148;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> clipboard = {".B...BB..", "...B.....", "B........", ".....B.B.", "BB.B....B", "B.B.B....", "...B....B", "B.B......", "...B.BB.B", "BB.....B.", "..B..B.B.", ".B..B.B..", ".......B.", ".B.BB.B..", "..B.B....", "B..B.BB.B", ".....B...", "...BB....", ".B...B.B.", "....B....", "...B..B.B", ".BB.....B", "...B.B...", "B..BB....", "B..B.BB..", "...B.....", "....B..BB", "..BB.B..B", ".B.B.B...", ".........", ".B.....BB", "......B..", ".B.B.B..B", ".B.BBBBB.", "......B.B", ".........", "......B..", "..BB.B...", "...B.....", "...B..B..", "......BB."};
    int T = 486955633;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 19478225446;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> clipboard = {".B...B....", "B.........", "....B..B..", "....B.B.B.", "..B..BB.BB"};
    int T = 494880709;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 3464164973;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> clipboard = {"B....BBBB..B.BB..B.B.B..B.......B.B.BBB....B.B", ".....B.......B..B...B..........BB....B.B.B..B.", ".B....B...........BB..B......BBBBB..B.....B.BB", "B.B......B...B.B....BB....BB.B..B.BB...BB.B.B.", "....B.B.B..............B.BB......B.BBB......BB", "...B.........B..B...BB....B..B.B.B........BBB.", ".BB....BBB..........B.BB.BB...B..B...BBBB..B..", "BB.B.B.....B...B.......B.....B.B.B.........B..", ".B..........BBB.BB...........B....B.B.B.......", "BB.B.......B...BB...B...B....B......B...B...B.", "..B.......B...........B..B....B...B......B....", "......B...BB..B..B....B...B..B..B......B..B...", "....B.B...B...B.B.........B...B.B..BB..B......", "B.......B..B...B..B.B....BB.B.......B..B.B....", "B.B...BBB....B.B..B.....BB......B....B..B...B.", "........BB..BB........B..BB.B....BB...........", "..............B.B..B...B........B............B", ".....B...B.B.........BBB............BB.B......", "..B......B.........B.......B.B...BB...........", ".B........B.B..BB.......B..........BBB........", "........B....BB...B...B.....B..B....B...B..BBB", "...B.BB....B..B..B....B.B..B..BB..B...........", ".......BB...B.BBB..B......B.....BB............", "...B............BB....B.......B......BBB......", "..B....B......B...B.....B.......B.B..B.B..B..B", "...B.B.B..............B.B.B..B....BB........B.", "..B.B..B..B.....B........B.B...BBB...B.......B", "B.........B...B..B....B.BB......B..B..B.....B.", ".....B......B......B.B.....BBBBBBBB....B......", ".....B....B...B..B...B..BB.BBB..B...BB.....B.B", ".............BB..B....BBB.......B..B.....B..B.", "...BB....B.........BB.B...B..B.B..B.....B.....", ".B....B...B..B........BB...B....BBB...B...B..B", "....B.....B.B.B....B.....BB.......B...........", "..BBB........B.........B......B.B..BB.......B.", "..B...B..B..B..B.....B....BBB.........B...B...", ".BBB..B.........BB..B...B..BB.B............B.B", ".BBBB............................BB.B..B......", "B..B..B..BBBB.B..B...BB...B.B..BBB..B.BBB.....", "..........B......B.B....BB...BBBB...B.BB.B....", ".B........B....B...B....B..........B....B...B.", "B...B....B.....B.B....BB....B..B..BBB...BB....", ".B..B...B...B....B.BB.BBB.BB...B.BBBB.BB......"};
    int T = 395359709;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 33605576720;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> clipboard = {"....B.B......B.B.........", "......B.BB...........B...", "B....BBB...B.B.B.B...B..B", ".B.......B........B......", "....B..........B..B.....B", ".....B.....B.B....B....B.", "...................B.BB..", "BBB..B..B.......B..B.B...", ".B...B.BB.BB.....BB......", "......B.B............B...", "...B...B.B.BBB...BBBB....", "............B......B....B", ".........B.......B.......", ".......B.B...B.BB........", ".BB...B.BB.......B.......", "......BB..B......B...BB..", "B..........B...B.BBB.B...", ".........B.B.BB.....B....", "B..B...B..B..B.B.B.......", "B....B.B.BB.BBB..........", "...BB..B..B....B.........", "B.B...B.B...BB..B....B...", "..B.BB..........B....B...", "...B..B..BB.....B.B..B..B", "B........BB....B...BB....", "BB.B.....B..B.B.BB.....B.", "B..B......B.........BB..."};
    int T = 121168022;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 5694897372;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> clipboard = {"B.........B....B.", ".B....B.B.B.BB.B.", "..B.B.BBB...B.B..", "BB...B....B.B..B.", "....BB....B....BB", "B.B.....B.....BB.", ".B...B.BB..B.....", "...B............B", ".......BBBBBB..B.", "B....BB..........", "BB...B..B..B..B.B", "...B.......BBB...", ".....B..B.B...B..", ".....B....B..BB..", "......B.B.......B", "B..B..B.B......B.", ".BBBB....B......B", ".B......B........", "..B..B.BB..BB....", "B................", "BB.BB......BB....", "........B..B..B..", "....B..B..B......", ".......BBBB..BB..", ".................", "..B........BB.B.B", "..B..B....B...B..", "..B.B...BBB.B..BB", "....B...BB.B...B.", "......B..........", ".B....B......BB..", "............B...B", "B............B...", "...BBB...B..B...B", ".....B...........", "B...B.B........BB", ".B.B......BB.B...", "B.....B.BB.B.B.B.", ".B...............", "B....B.BB........"};
    int T = 693960753;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 34698038000;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> clipboard = {"...", "B..", "...", "B..", "..B", "...", "...", ".BB", ".B.", "BB.", "BB.", "..B", "...", ".B.", "..B", "...", "...", "...", "B..", "..B", ".B.", "BB.", "...", "...", "BB.", "...", "..B", "...", "B..", "B..", "..B", "B..", "BB.", "...", "..."};
    int T = 430243975;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 9035123483;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> clipboard = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int T = 50811507;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> clipboard = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int T = 881374234;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> clipboard = {"B"};
    int T = 1000000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> clipboard = {"B", "B", ".", ".", ".", "B", "B", "B", ".", ".", "B", ".", ".", ".", "B", "B", "B", "B", ".", ".", ".", "B", "B", "."};
    int T = 1000000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 12000000000;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> clipboard = {"B", ".", "B", ".", ".", "B", "B", "B", ".", ".", ".", "B", "B", "B"};
    int T = 1000000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 8000000000;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> clipboard = {"B.BBBB.B..BB.B.BB."};
    int T = 999999997;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 10999999967;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> clipboard = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    int T = 1000000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 99000002401;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> clipboard = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    int T = 1000000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 99000002401;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> clipboard = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    int T = 1;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 2500;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> clipboard = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    int T = 1;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 2500;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> clipboard = {".BB.B.B.B.BBBBBBB.BBBB.B.BBBB.BB.BBBB..B.BB.B", "BBB.BBBBBB.BBB.BB.BBB.BB.B.BBBBBBBBB.BBBBB.BB", "BBB.BBBBBB.BBBBB.B.BBBBB.BBBBBBB.B.BBBBBBBBB.", ".BBB..BBBBB...BBBB.BB..BBBBBB..BB.BBBB..BB.BB", "B..BBBBB.BB..BBBB..BB..BB.B.....B..BBBB.B.B.B", "BBBB.BBB.B.BBBB.BB..BBBBBB.BBBBBB.BBB...BBBBB", "BB.BB.BB.B.BBBBBBBBBB..B..BB.BBB.BBBBBBB.B.BB", "BBBB.BBBBBBBB.BBBBBBB.BBBBBBBBB..BBB.....BBBB", "B.BB.B..BBBBBBBBBBBBBB.B.BB.B..BBBB.BB..BBBBB", "BBBBBBBB..B.B.BBB.BBBBBB.BBBBBBBBB.BB.BB..BBB", "BBBBB.B.B.B.BB.BB..BBBB.BBBBBB..B.BB.BB.BBB.B", "..BBB.B.BBB.BBBBBB.BBBBBBBBBBB..B..BBBBB.BBBB", "B..B.B.BBBBB.BBBBB.B.BB..B.BBB.BB.BB.B.BBBBBB", "BBB.BBBBBBBB.BBBBB.BBBBBBB.BBBBBB..BBBBBBB.BB", "BBBBB.BBB.B.BBBBBBBBBBBBB..BBB.BBBB.B.BBBBBB.", "BBBB.BBBBBBBBBBBBBBBBBBBBBBB.BBBBB.BB.BB..BBB", ".BBBB.....BBB.BBBBBBBBBBB.B.BBBBBBBBBBBBBB.BB", "BB..BBBBBBB..BBBBBBBB.BB..BBBBBB..BBBB.B..B.B", "BBBBB.BBB.BBBB...BBBBBBBBBBBBBB.BBBBBBB.BBB.B", "BBBB.BBBB.B.BB.BBBBBBBB.B.B.BBBBBB.BBBB.BB.B.", "B.B...BBB.B.B.B...BBB.BBBBBBBBB...B..B.B.B.B.", "B..BB..B.BBBBBB.B.BBBBBB.BBB.B..BBBBB.BBBBBBB", "BB..BBB.BBBB.B.B.B..BBBBBBB.BBBBBBBBBBBBB.BBB", "B.BBBB..BBBB.BBBBBBBB...BBBBBBBB.BBB...BBB.BB", "B..BBB.BBB.BBBBBB.BBBBBB..BBB.BBBB..BBBBB.BBB", "BBBB.BBBBBBBBBBBBBB.B..BBBBBBB.BBBB.BBB.B.BB.", "BBBBB.B.B.BB.BBB.BBBBBB....BBB.B.BBBBBBB..B.B", "BBB.BBBBBB.BBBBBBBB.BBBBBB.B.BBBB.BBBBBBBBBBB", "BB.BB.BBB....BBBBBBBBBBBBBBBBB.BBBBBBBBBBB..B", "BBBBBBBBBB.BBBBB.B.BBBBBBBBBBBBBBBBB.BBBBB.BB", ".BBBBBBBB.BB.BB.BBB.BB.BB.BBB.BB.BBB.BBBBBBB.", "B.BB..BBB.BB.BBBBB.BB.B..BBBBB.BBBBBBBBBBBBBB", "BBBBB.BBB.BB..BBBBBBB.BB.BBBB...BBBBBB..BB.BB"};
    int T = 22;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 3055;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> clipboard = {"B..BBBBB.BBBB.BBBB.B.B...BBBBBBB.B", "BBBB.BBB..BB.BBBBBB.BBBBBBBB.BB.BB", ".BBB.B...BBBBB...BB....BBB.BBBBBB.", "BB.BB.B.BBB.B.BB.BBBBBBBBBBBBBBBBB", "B.BBBBB.BB.BBBBBBB..BBB.BB.B.BBBB.", "B.B.BBB.BBBB.BBBBBBBBB.BBBBBB.B.BB"};
    int T = 23;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 1038;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> clipboard = {".B", "BB", "BB", "B.", "BB", "B.", "B.", "BB", "B.", "B.", "B.", ".B", "BB", "BB", "BB", "BB", "BB", "BB", ".B"};
    int T = 24;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 466;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> clipboard = {".BBB.BB.BBBBB.BBBB.BBBBBBBBBBBB.BBBB..", "BBBBBBB.BB.BB.BB.B.B...BBBBBBBBBBB.B.B", "BBBB...BBBBBBBBB.BBB.BBBB.BBB..BB...BB", ".BBB..BB.BBBBBBBBBBBBB.B.BBBBBB.BBBBBB", "B.B.BBBB..BBB.B.B..B..B....BBBBB.BB..B", "BBBBBBBBB.BBBBBB.BB.B.BBB..BBBB..BBBB.", "B.BB..BBBB.BBBBB.B.B.BBBB..BBBB.BBBBB.", "BBB.BBBB.BB.BBBBBB....B.BB.B.BB.B.B.BB", "B.BBBBBBB..BBB.B.BBBBBBB.BB..BBBBBB.BB", "B.BBB.B.B.BBBBB.B.BBBBBBB.BBBBB..BBB..", "BB..B.BBB..BBBBBBBBBBBB.BB..BB.B...BBB", "BBBBB.BBBBBBBBB..BB.B.BBB.BBBBB.BBBBBB", ".B..BB.BBBBBBB..BBBBBBBBBBBBBB...BBBBB", "B.BBBBBBBBBBBBB.BBBBB.BB...BBB.BBBBBBB", "BBB.B.B.B.BBBBBBB..B.BBB..BB.BBB.BBB.B", "B.B.BBBBBBB.BBBBBBB.B..BBBBB..B.BBBBB.", "...BBB.B..BBBB.BBBBBBBBBBBB..BBB.BBBB.", "BBBBB.BB.B..BBBBBBBBBB...BB.BB.BBBBBBB", "..B.BBBBBBBBBB.BB.BBBBBBBBB..BBBBB.BBB", "BBBBBBBBBBBBB.BBBBBBB.BBBBBB.B.BBBB.B.", "B.BBBBB.BBBBB.BBBBB.BBB.BBBB.BBBBBB.BB", "B..BBBB.BBBBBB.BB.B.BBBB..BB..BB.B.BBB", "B.BBBB.BBB..BB...BBBB.BBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBB.BBBBBBBBBBBBBB..BBBBBB", "B.B.B.B.BBBBBBBBB.BBBBBBB.BBB.BBBBBBBB", "BBBBB..BBB...B.BBBBBB..BBBBBB.BBBB.BBB", ".BBB.BB.BBBBB.B.BBBBB.BBBBBB..BBBB.B.B", "BBBBBB.BB.B.BBBB.BBB.BBBB.BBB.B..BBBBB", ".B.B.B.BBB.BBBBB.BBBB.B.BBB.BBBBBBBBBB", "B.B.BBBBB.BB..BBBBBBBBBBB.B.BBB.B.BBBB", "BBB.BBBB..BBB.BBB.BB.BBB.BBBB.B.B.BBB.", "BB.BB.BBBBBBBBBBBBB.B.BBB.BBBBBBBBBBBB", "BBBBB.B.BBBBBBBB.BBBB.BBBB.BB.BB.B..B."};
    int T = 25;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 2869;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> clipboard = {"B.BBBB..B", "B.BBBBBBB", "B.B.B.BBB", "BBBBBBBBB", "BBB.BBB.B", "BBBBBBB..", "B.BBBB.B.", "BB.BBBBB.", "BB..BBBBB", "BBBBBBBB.", "...B.BB.B", "BBBBBBBBB", "B.BBBBBBB", "BBB.B.BBB", ".BBB..BBB", "BBB..BBB.", "BBB.BB.BB", "BBBBBBBB.", "BBBBBBBBB", ".BB...BBB", "....BBB.B", ".B.BBBBBB", "BBBBBB.BB", "BB..BBB.B", "..BBB...B", "B.BBBBBB.", "B.BBBB.BB", "B..BB.B.B", "BB..BBBB.", "BBBBBBBBB", "BBBB..BBB", "BB.B.B.BB", "BB.BBBB.B", ".BBBBBBB.", ".B.BBBBBB", "BB..BB.BB", "BBBBBBBBB", ".BBBBB.BB", "BBBBBBBBB", "B.BBBB.BB", "BB.BBB.BB", "...B.B.BB", "BBBBB.B..", "BBBBBBBB.", "BBBBBBBB.", "BB.BBBBB.", ".BBB.BBBB", "BBBBBBBBB", "BBBBBB.BB", ".BB.BBBBB"};
    int T = 26;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 1833;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> clipboard = {"BBBB", "BB.B", "BBBB", "BBB.", "BB.B", "BB.B", "BBBB"};
    int T = 27;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 287;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> clipboard = {".BB.BBBBB.B.BBB..BBBBBBB...BBBBBB..BBB", ".BBB..BBBBBBBBBBB.BBBBBB.BBBBBB.B...B.", ".BBB.BBB..B.BB.BBBBBBB.BBBBB.BBBB.BB.B", "BBBBBBBB..BBBBBBB.BBBBB.B.BB.BBBBBBBBB", "BBB..BBBB.BBBBB..BBBBB..BBBBBBBBBBBBB.", ".BB.BBBB.BB..BB..B...B.B.BBB.B.BBBB..B", ".B.BB.B.BBBBBBBBBBBB.B....B.BBBBBBBBBB", ".B..BBBBBB...BBBB.BBB...BB.BBB.BBB.BB.", ".BBBBBBBBB..B..BBBBB...BB.BBB.BBBBB...", "BBB.BB.BBB.BBBB.B.BBBBBBBBBBBBBBBB.B.B", ".BBBB..BBBB..BBBBB.BBB.B.BB.B..B..BBBB", "B..B..BBBBBBB.BBB..BBBBB.B.B..BBB.B.BB", "BB.BBB.BBB.BBBBB....B..BBBBBBB.B.B.B.B", ".BBBB..BBBBBBBBBBBBB...B.BB.B.B.B..BBB", "BBB.B.BBBBBBBBBB.BBBBBBBBBB.BBBBB.....", "BBBBB...BBBB..B.BBB.BBBBBBB.BBBBBBBBBB", "BB.BBBBBBB..BBB.BBBB.BBB.BBBB..B.BB.BB", "BBBB.BBB.BBBBB..BBBBBB.BBB..B.B..BBBBB", "BBBB.BBBB.BBBB..BBB.BBBB.BB.BBBBBBBBBB", "BBBBBBBBBBBBBBBBB.B.BB.BB.BBB.BBBBBBBB", "...BBBBBB..BBB..B.BBBBBB.BBBBBBBBB..BB"};
    int T = 28;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 2295;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> clipboard = {"BBBBBBBBBBB.BBBBBBBBBBBB", "BBBBBBBBBBBB.BBBBBB.BBBB", "B.B.B.BBBBB.B..BBBBB.BBB", "BB.BBBBBBBB.B..B.BBB.BBB", "B.BBB..BB..B.BBBBBBBBBBB", "BB..BBBBBB.BBBBBB...B.B.", ".BBBB.BB.BBBBBBBBBB.BBBB", "B.B.B.B.B.B.BBBBBBBBB.BB", "..BBBBBB.BBBBBBBBB..B.BB", "BBBBBB...BBBBBB.BB.BBBBB", "BBBBBB.BB..BBBB.B.BBBB..", ".B.BB.BBBBBBB.BB.B.B..BB", ".B.BB..B.BBBB.BBBBBB.B..", "BBBBBBBBB..BBBB.BBBBB.BB", "B..BB.BBBBB.BB.BB...BBBB", "BBBBBBBBBBBBBBBB.BB.BBBB", ".B.BBBBB.BBBB.BBB.BB.B..", "BBBB.B.BB.BBBB..B.B.BBBB", "B.BBBBB.BB.BBBBBBBBB..BB", "B.BB.BBBBB.BBBBBB.BB..B.", "BB.BBB.BBBBBBBBBBB...B.B", "B.BBBBBBBBB.BBB.B.B.B..B", "..BBBBB.BBB..BB...B.BBB.", "BBB.BBBBBBB.BBBBBBBBBBBB", "BB..BBB.BBB..BBBBBB.BBBB"};
    int T = 29;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 1919;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> clipboard = {"BBBBBBB..BBBB.B..BBBB.B..BBB.BB.BBB..BBB.B..B.BBBB", "BB.B.BB..BBBBBBBB.BB..B.BBBBBB.B.BBBBBBB.BBBBBBBB.", "BB.BB.B.B..BBB.BBBBB..BB.BBB....B.BB..BB..BBBBBBB.", "BBBBBB.BB.BB..BBBBBBB.BB.BB.BBBBB.BB..B.BBBBBB.BBB", "B..BBBB..BBBBBB.BBBBBBBBBBBBBB.BB...B.BBBB..BBBBBB", ".B.BB.BBBBBBB.B.B.BBB.BB...B.BB..B.B.BBBB.BBBB.BBB"};
    int T = 30;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 1822;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> clipboard = {"BB.BB.BBBB.B.", "BB.BB.BBBBBBB", "...BB..BBBBBB", ".BBBBB..B.BBB", "BB.BBBBBBB..B", ".B..BBB.BB.BB", "BBBBBB..BBBB.", "BB.B..BB.B.BB", "BBBBB.B.B.BBB", "BBBBB.BBB..BB", "BBBB.B..BBBBB", "B.B.BBB.BBBBB", "BBB.B..BBB.BB", ".B.B.BBBBB.BB", "BBBBBBBBBBB.B", ".B...BBBB.BBB", "BB.BBBB.BBBBB", "BBBBBBBBBBBBB", "BBBBBB.BBBBBB", "B.B.BBB.BB.BB", "B.BB.BBBBBBBB", "BBBBB.BBBB.B.", ".BBBBBBBB.B.B", ".BBBBBBB....B", "BBB..BB.BBB.B", "BB.BBBBBBB..B", "BB..BB..BBBBB", "BBB.BB.BBB.BB", "BBB..BB..BB..", "BBBBBBB..BBBB", "BB.B.BB.BB.B.", "BBBBBBBBBBBB.", "BBB.B.BB.BB.B", "BBBBBBB.BBB..", "B.BB.B.BB...B", "B.BBB.B.BBBB.", "B.BB.BBBBBBBB", ".BBBBBBBBBBBB", "B.B.B..BBBBBB", ".BB.BBB.BBBBB", "BBB...B.BBBBB", "B.B.BBBBBBBB."};
    int T = 31;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 2110;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> clipboard = {".B.BB.BBB..B.BBBBBBBB", "B.BB.BBBBBBB...BBBBBB", "BBBBB.B.BBBBBBBBB.BBB", "BBBB.B.BBB.B.BBBB.BB.", "BBBB.BBBB..BBBBBBBBBB", "..BBBBBBBBB.BBBB..B.B", "BBBBB.BBB..BBB.BBBBBB", "BBBBBBBBBBBBB.BB.BBB.", ".BB.BBBBB.B..BBBBBB..", "B.B.BB.BB....BB.BBBBB", "BBBB.B.BBBBB..BBBBBBB", ".BBBBBBBBBBBBBBB.....", "BBBB..BBBBBBBBBBBBBBB", "B.B....B.BBBB.BB.BBBB", ".BBBBB.BBBB.BB.BBBBBB", "B...BBBBB.BBB.B.BBB.B", "B.BB..B.B.BB.BBB.BBBB", ".BBBBBBBBBBB....BBB.B", "BBBBB.BB.B.BBBBB.BB.B", "BBBB.BBBBBB.BBBBBBBBB", "B.BBBBBB...BB.BB.B.BB", "B.BBBBBBBBBB...BBB.BB", "BB.B.BBB.BBBBB.BBB.B.", "B.BBBBB.BBBBBBBBB.BB.", "B....BBBB.BBBB.BBBB.."};
    int T = 32;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 1890;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> clipboard = {"BB.BB.B.BBBB", "BBBBBBBBBBBB", "BB.BBBBBBB..", "BBBB.B.BBBB.", "BBBBBBBBBBBB", "....BB.BBBBB", "BBBB.BBBB..B", "BBB.BB.B.B.B", ".BBB.BBB.BBB", "BBBB.B.BB.B.", ".BBBBBBB.B.B", "BBBBBBBB.B..", "B.BB.BBBBBBB", "..B..BBB..BB", "..BBB..BBBBB", ".BBBB.BBBBBB", "BBBBB.B.B.B.", "BBBBBBB.BBB.", ".BBBBBBBBBB.", "BBBBBBB.B.BB", "BB.BB.BBBB.B", "B...BB.B.BBB", "B.BB.BBB.BBB", "BB.BBBBBB...", "BB..BBBBBB.B", "..B...BBBB.B", "B.BBBBBBB.BB", "BBBB.B.BBBB.", "..BBBBB.BB.B", "BBB.BB..BBBB", "..B.BBBBB..B", "BBB..BBBB.BB", "BBBBBB.BB.BB", "B.BB.BBB..BB", "BBBBBBBB...B", "BBB.BB.BB..B", "B.BB.BBBBB.B", ".BBBBB.BB.BB", "BBBB..B.B.B.", "BBBB..BB.BB.", ".B..BBBBBBBB", ".BBBBBBBBBB.", "BBBB.BB.BBB.", "..BBB.B.BBBB", "BBBB.BBBB.B.", "..BBBBBBBBBB"};
    int T = 33;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 2305;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> clipboard = {"B.B..BBBBBBB.BBBBBB.B.BBBB.B", "BBBBBBBBBB.BBBBBBBBBB.BB.B.B", "BBBBBB.BB..BBBB.BBB.B.BBBBBB", ".BB.BBBB.BBBBB.BBBBBBBBB.BBB", "BBBB.BBB.BB.BBB.B..BB.B..BB.", "BB.BBBBB.BBB.BB.BBBBB..BBBB.", "BB.B...BBBBB.BBB.BBBBB.BBBB.", ".B..BB.BB.BBBBBB.BBB.BBBBBBB", "..BBBBBB.BBBBBB.BBBB.BBBB.BB", "BBB...BBBBBB..B..B..BB.BB.BB", "B..B.BB.BBBB.B.BBBBBBBBB.BBB", "BB.BBBBB.BBBBBBBB...BBBBBBB.", "BB.BB.B.BBBBBB.BBBBB..B..BBB", "BB.BBBBBBBBBB.BBBBBBBBBBBBBB", "BB.BBBBB..B.B..BBBBB.BBBBBBB", "B.BB...BBB.B..BBBBBBBB..BB..", ".BBBBBBBBB.BBBBB.BB.BB.B.B.B", "..BBBBB.B.BB...BB.BBBB.BBB.B", "BB.BBBBBBBBBBBBB...B.BB.BBBB", "BBBBB.BBBBBB.BBBBBBBBBBBB.BB", "..BBB.B.BBB.B.B.BBB.BBB....B", ".BBBBB..B.BBBBB..BBBBBBBB.BB", "BBBBBBBBBBB.B..B.B.BBBB.BBBB", "BB.BBBBBBBBBBBBBB.BBBBB..BBB", "BBB.BB.BBBB.BB.BBBBBBB...BB.", "BB..BBB.BBBBBB.B...BBBBBB.BB", "B.BBBBB.BBB.B.BBBBBBB.BBBB..", "B.B..BB.BBB.BBB.BBB...BBBBBB", "BBBB.B...BBBB..BBBBBBBB..BBB"};
    int T = 34;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 2626;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> clipboard = {"BBB.BBBB.BBB.B.BB.BBBBBBBB..BBBBBBB.BB.B.B.B", "B.BB.BB.BBB.BBBBBBBB.BBBBBBBBBB.BBBBB.BBB.BB", "B.B.BBBBBBB..BBBBBBBBBB...BBBBBBB..BBBBBBB..", "BBBBBBBB.BBBB.B...BBB..BBB.B.BBBBBB.BB..B..B", ".B.BB.BBBBBBBBB.BBBBB.B.BBBBB.B.BBBB.BBBBBB.", "BBBBBB.B.BBB.BBB..BB.BBBBBBBB..B.B..B.BBBB.B", ".BBBBB..BB..BBB.BBBB.BBBBBBBBB.BBBBB.BBBBB.B", ".BBBBBBBBBBBBBBBB..BBBB.BB.BBBBB.B.BBBBBB.BB", "BB.BB..B..BBBBBBBBBBB..BBB.BB.BBBBBBBBBBB.BB", ".BBBB.BBBBBBBBBBBB.BB..BBBBBB..B.BB...BBBBBB", "BBBBB.BBBBBBBB...B..B.BBBBBB.B.BB.B..B.B.BBB", "BBBBB..B.B.BBBBBBBBB.BBBBBBBBB.B..BBBBBB.BBB", "BB.BB.BBBBBB.BBBBB.BBBB.BBBBBBBBBBBBBBBBB.B.", "BB..BBBBBBBBBBBBBB..BB.BBBBBB.BB.BBBBBBBBBBB", "BBBBBBBB.BB..BBB.BBBBB.B.BBBBB.BBBBBB.BBBB.B", ".BB.BB.B.BBB.BBBBBBBBBB.BB..BBB.BBBBBBBB.B..", "BBBB.BBBBBBBBBBB.BBBBBBBB.BBB.B..B.BBB.BBBBB", "BBBBBBBBBB.BB.BB.B.BB.B.BBBBBBBB.BB.BBBBBBBB", "BBBBBBB.BBBBBBBBB..BBB.BBB.BBBBB.BBBBB.BBBBB", ".BBBBB.BBBBBB.BB.BB...BBBBBB.BBB.BBBBB..BBBB", ".BB.BBBBBBBBB.BBBBB..B.BBBB.BB..B.BBBBB.BBB.", "BBBB.B.BBBBBBB.B.BBB..BBBBBBBBBB.BBBBBBBBB..", "BBB.BBBBBBBBBBBBBBBBBBB.B.BBBB.BBBB.BB.BB.B.", "BBB.B.BBB..B.B.BBBBB..BB..BB.BB.B.B.BB..BBBB", "BBBB.B.B.BB.B.B.BBBBB.BBB.BB.BB..BB..B.BB.B.", "BB.B.BBBBBBBBBBB.BBB.BBB.BB.BBB.BBB.B.BBBBBB", ".BBBBB.B.BB.BBB.BB.B.BBBBBBBBBBBB.BBBB.B..B.", "B.BBBBBBBBBBBBB.BBBBB.B.BB.B.BBBBBBB.BBBBBBB", ".BB.B.BBBBBBBBB.BBBBB.B.B.BBBB.BBBBBBBB.B.BB", "BBBBB.BBB.B....BBBB.BBBBBBBBBBBBBBBBB.B..B..", "BBB.BB.BB..B.BB.BBBBBB....BB.BBBBBB.BBBBBBBB", "...BBBBBBBBBB.BBB.BBBB.BBB.BBBBB.BB.BBBBBB.B", "BBBB.BBBBB.BBB..BBBBB.BBBBBBBB.BBBBB.BBBBBBB", "BBBBB.BBB.B.BBBBBBB..BBBBBBB.B.B.BBBBBBBBBB.", "B.BBBBBBBBB..BB.BB.BBBB...BBBB.BBB.BB...B..B", "BBBBB.B.BBBBBBBBBBBBBBB.BBBBBBB.BB.BBBBB.B..", "BB.BB...BB.BBBB.BBBB.BBBBB.BBBBBBB.BBBBBBBBB", "BBBB.B.BB.BB.BB.BBBBB.BB..BB.B.BBB..BBBBBB.B", "BBBBBBBBB..BBB.BBBB..B.BB.BB.BBBBB.BBBBBBBBB", "BBBBBB.BBB.BBBBBBBB.B.BBBBBB..B.BBBB..B.B.BB", "..BBBBBBBB.BBBBBBBB.BBBB.B.BBBBB.B...BBBBBBB", "B.BB.B.B..B...B.B.BBB.B.BBB.BBBBBBBBBBBBBB.B", "BBBBBBBBBBBBBB.BB..B.B.B.BBBBB.B..BBBB.B..B.", "BBB..BBBB.BBBBBBBBBB.BBB.B..BBBBBBBBBBB..BBB", "BBBBBBBB...BBB.BBBB.BB.B.BBBBBBBBB.BBB...BBB"};
    int T = 35;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 4913;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> clipboard = {"BBBBBB.BBBBBBBBB.BBB.B..BB.BBBBBBB.BBBBB", "BB.BBBB..BBB.BBBBB.BBBB.BBBBBB.B.BBBB.BB", "BBBBBB.B.BBBBBBBBBBBBBBBBBB.B.BB.BB..BBB", "BBBBBBBBBB..B.BB..BBBBBBB.BBBBBBBBB.B..B", ".B.BBBB.BB.B.....BB.B..B.BBB.BBBBBB.BB..", "BBBBBB..BBBBBBBBBB.BBBBBB.BBBB.BBBBBBBB.", "BBBBB....BBBBBBBBBB....B.BBBBBBB.B..BBBB", ".BBBBB..BB.B.B.BB.BBBBB.BBBBBBBBBBB.B..B", "BBBBBBBB.BBBBB.B.BBBBBB.B.BBBBB.B.B.B.BB", "BBBB.BBBBB.BBBBBB.BBB..B.BBB.B.B.B..BB.B", ".B..BB..BBBBBBBBBBBBBBBBBBBBBBBBBBBBB.BB", ".B.BBBBBBBBBB..B...B.BBB..BBB....BB.BBB.", "BBBBBBBBBBB.B.BB...BBBB.BBBBBBBBBBBBB.BB", "BBBBBBBBBBBB..BBBBB.B.BBBB..BB.B.BBBBBBB", "BBBBBBB.BBBBBBBBBBBBB.BBB.BBBBBBBBBBBBBB", ".BB.B.B.BBBBBBBB.B.BB...B.BB.BBBBBBBBB.B", "B.BBBBBB.BBBBBBBBBBB.BBBB.BBBB.....BBB.B", "B..BBBBBBBB.BBBBBBBBBBB..BBBBB.B.BBB..BB", "BBBBB.B..BBB.BBB.BBBBBBBBBBBBBB.BB.B..B.", ".BBBBBBBBBBBBBBB.BB...BBB.BBB.BBBBBBBB.B", "B.BBB.BB.BBBB..BBBBBBB.BBBBBBB.B.BBBBB.B", "...B.BBBBBB.BB.BBBBBBBBBBBBBBB..BBBBBBBB", "B..BBBBBBB.BBB.BBB.BBBBBBBBBB..BBB.B.BBB", "B.B..B.BB.BBB.BBBBBB.BBBBBBBB.BBBBB.BBBB", "BB.BBBB.BBBBBBBB.BBBBBBBBBBBBBB.BB.BBBBB", "BBBBBBB..BBBBB..BB.BB..B..BBBBBBBBBBB.B.", "B.BBB.BB.BBBBBBBBBBBBBBBB.BBBB.BB.BB.BBB"};
    int T = 36;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 3350;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> clipboard = {"BB.B..BBB.BBBBB..BBBBBBB.B", "BB.BB.B.BBBB..B..BBB..BBBB", ".BBBBBBBB.B..B.BBBBBBBBB..", "BBB..B.B..BBBBBB.BBBBB.BB.", "BB.BB.BB.BBBBBBB..BB.B..BB"};
    int T = 37;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 1186;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> clipboard = {".B.BBBBBBBBBBBB.BBBBB.BBB..", ".BBBBBBBBBBB.BBBBBBBB.BBBBB", "BBB..B.BB..BBBB.BBBB..B.BBB", "BB..BB.B.BBBBBB.BB.B.BBBBBB", "BB..BBBBB.B.BB.BB..B..BBBBB", "BBB.B.BBBBBBBB.BB...BBB.BB.", "BBB...BBBB.B.B.BBBBBB.BBB.B", "BBBBBB.BB.BBB.BBBBBBBBBBBBB", "BB.BBB..BBBBB.BBBB.BBBB.BBB", ".BBBB.BBBBBBBB.B.B.BBBBBBB.", "B..BBBBBBBBBBBBBBB.BBBBB.BB", ".BBBBBBB.BBBB.BBB..BBBBB..B", "B..B...BBB.BBBBBBBBB.BBB.B.", "..BBB.BB.BBBB.BBBBBB..BBBBB", "BBBB.BBBB..BBB.BBBB.BB.BBB.", ".BB.BBBBBBBBBB.B.BBBB.B.BBB", ".B.B.B.BBBBB.BBBB.BBB.BBBB.", "BBBB.BB.BBBBBB.BBBBBB..B.BB", "BB..BBBB.BB.B.BB.BBBBB..BBB", "BB.BBBBBBB.BB..BB.B.BBBBBBB", "B.BB..BBBBB..BBB.BBBBBBBB.B", "BBB.BBBBBBB.B.BBBBB.BB..BBB", "BBB.BB..BBBBBBBBBB..B..BBBB", "B.BB.BB.BBBBBB.BBB.BBBBB.BB", "BBBB..BBBB.BBBBB.BBB.BBB..B", ".B.BBBB.BB.B.BBB.BBB.BBBBBB", "BBBBBBBBBBBBBBBB.BBB.BB.BB.", "BBBBBB.BB.BBBB.BB.B..BB.B..", "B.BBBBBB.BBBBBBB.BBBBBB.BBB", "..B..B.BB.BBB...BBB.B..BBB.", "BBB.B.BBBBBBB.BBBBBBBBBBBBB", "BBB.BBBB..BBBB.BBB.B.BBBBB.", ".B.BBBBBB.B.BBBB.BBBBB.B.B.", ".BBBBBBB.BB..BBB.BBBBB.B.BB", "BBB.BBB.BBBB.BBBBBBBBBBBBBB", "BBBBB.BBBBBBBB.BBBBBBBBBBBB", "..BB.B.B..BBBBBBB.BBBB.BBBB", "B.BBBBBB.BBBB.BBBBBBBBBBBBB", "B.B.BBBB.BBBBBBBBBBBBBBBBB.", "BBBBBBB.BBBBBBB.BBBBBB.BBBB", ".BBB.BBBBBBBBBBBBBB.BBBB.BB", ".B..BBBB.BBBBBBBBB.BB.BBBBB", ".B.B..BBBBBBBB.BBBBB.B.BBBB", "BBB...BB..BBBBB.BBBB.BBB.BB", "BBB.BBB..BBBB.BBB..BBBBB.BB", "B.BBBBB.BBBBBB.BBBBBB.B..BB", "BB.BBBBB.B.BBBBBB.BBBBB.BBB", ".BB.BBBB.B.B.B.BBBB.BBBBBBB", "B..BBBBBB.BBBBBBBBBBBBB.BBB"};
    int T = 38;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 3982;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> clipboard = {"...", "BBB", "BBB", "BB.", ".BB", "..B", "BBB", "BBB", ".B.", "B.B", "B.B", "BBB", "BBB", ".BB", "BB.", "B.B"};
    int T = 39;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 681;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> clipboard = {"B.B.BBBBBBBBBBBBB.BBBBBB.", "BBBBBBB..B.BBBBBBBB..BBBB", "B.BBBBB.BBBBBBBB.BB.B.BBB", ".BBB..BBBBBBBBB.BBBBBBBBB", "BB..BBBBBBBBBBB.BBBBBB.BB", "B.B.BB.BBBB.BB...B.BBBB.B", "BB.B....BB.BBBBB.BB.BB.B.", "BBBBB.BBBB.BBBB.B..BBBB..", "BBBBBBBB.B.BBBBBBBBB.B.BB", "B.BBB.B.BBBBBBBBB.BBBBB.B", "BBBBBBB.BBB.BB...BB..BBBB", "BBB.BBBBBB.B.BB.BBBBBBBBB", "BBB.BBBBBBBBB.BBBBBB.BBBB", "BBB.BBBBBBB.BBBB.BB.BB..B", "BB.BBBBBB.BBBBBBB.BBBBBBB", "BBB..BBBBBB.BBB..BBBBB...", "BB..B.BB.BBBBBBB.BBBBBBBB", ".BB..B.BBB..BBBBBBB.B.B..", "B.BB...B..BBBB..B.BBBBBBB", "B.BB.BB.BB..BBBBBB....BBB", "B...BB.BBBB.BBB..BBBBBBB.", "BBBBBBBBBBB.B.BBB.BB.BB.B", "BB.BBB..BBB...BBB.BBBBBBB", ".BBBBBBBB..BBBBBBBBBB.BBB", "..BBBB.BBBBBB.BBBBB..BBBB", "BBB.BB.BBBB..BBBB.BBB.BBB", "BBBBB.BBBBB.BBBBBBB.BB..B", "BB.BBBB.BBBBB.BB.BBB..BB.", "BBBBBBBBBBBBB..B.BBBBBBB.", "BBBBB.BB.BB.BBBB.B..BBBBB", "BBBBB.BBBBBBBBBB.BB.BBBBB", "BBBB.B.BBBBBB.B.B.BB..BBB", "BBBBBBBBB...BBB.BBBBBBB.B", "BBBBBBB..BBBBB.BBB.BB.BBB", "..BBBBBBBB.BB..BBBBBB.B.B", "BBBBB.BBBBB.BBB.BB.BB.BBB", "BBBBB.B.BB.B.BBBBBB..BBB.", ".BBBB..B..BBBB.BBBBBBB.BB", "BBBBB.B.BBBBB.BBBBBBB.BBB", "B.B.BBBBBBBBBBB.BBBBBBBBB"};
    int T = 40;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 3431;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> clipboard = {"BBBBBBBBBBB..B..BBBB.BBBBB.BBBBBBBBBBBB..BB.BBB", "BBB.B.B.BBBBBBB..BBBBBB.BBBBBBBBBBBBB..B..BBBB.", "BB..BB.B.B.B..BBBBBBBBBBBBBB.BB.B.B.BB.B.BB.BBB", "BBBB.B..BB..BB.B..B.BBBBBB.BBBBB.BBBBB.BBB..BB.", ".BB.BBBBBBBBBBB..BBB...B.B.B.BBBBB.BB.B.BBBBBBB", ".BBBBBB.BB.BBB..BBB.BBB.BBBBB.BBBBBBBB.BBB..BBB", "BBBBBB.BBB.B.BBBBBBB..BBBBBB..B...BB.BB.B..B..B", ".BBBBBBBB.BBBBBBBBBB.BBBB.BBBB.BBBBBB.B.BB..BB.", "BBBB..B..BBBB.BBBBB.BBB.BB.BBB.BBB.BB.BBB..BBBB", "BBBBBBBBBBB.B.B..BBBBBBBBB.BB.B.BBB.B..BBB.BBBB", "B..BBB.B.BBB.BBBBBB.BBBB...B.BBBB.BBBBBBBBB.BB.", ".BBBBBB.B.BBBB.BBBB.B.BBB.B.BBBBBBBBB.BB.B.BB.B", "..B.BB.B.BBBBBBBB.BBBBBBBBB.BBBBBB.B.B.B.BBBBBB", "BB.BB.B.BBB.B.B..B..B.BB.BBB..BBB..BBB..BBBBBBB", "..B.B.BBBBBBBBBB..BB.BB.B.BB.BBB.B.BBBBB.BBBBB.", ".BBB.BBB.BBBBB..BBBBB.B.B.BBBBBBBB.B.BBB...BBBB", "BBBBB.BBBBB..BBBBBBBB....B.B.BB.BBB.B.B.BBBBBB.", "BBBB.BBB.B..BBBBBBB.BBBBBB.BBBBBBBBBBB..BBB.B..", "B.BBB.B.BBBB.B.BBBBBBBB..B..BBBBBB.B.BBBBBBBB.B", "BBBBBBBB..BBB.BBBBBBB...BBB...B..BBBB.BBBB.B.BB", "B.BBBBBBBBBBB.BBBBBBBB.BBBB.BBBBBB.BBB..BBB.BBB", "B...B..BBBBB..B.BB.BBB..BBBB.BBBB.B.B.BBBBBBBBB", "BB.BB..BBBBBB..BBBBBBB.BB.B.BBB.BBBB.BBBBBB.BB.", "BB..B.BBBBBB.BBBBBBBBBB.B.B.BB.B..BBBBBBBBBB.BB", "BBBBBBBB.B.B.BBBBBBB.B.BB..BBBB.BBBB...BBBB.BBB"};
    int T = 41;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 3967;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> clipboard = {"BB.B.", ".BBBB", "BBBBB", "..BBB", "BBBBB", "BBBBB", "BBBBB", "BB.BB", "..BBB", "BBBB.", "BBB..", "B..B.", "B.BB.", "BB.BB", "B.BBB", ".BB.B", "BBBBB", "BBBB.", "B.BBB", ".BB..", "BB..B", "B.BBB", ".BBBB", "BB.BB", "BB.B.", ".BBBB", "BBBBB", "BB...", "BB..B", "B.BBB", "BB.BB", "BBBB.", "B...B", "BBB.B", "BBBBB", "BB..B", ".BBBB", "BBBBB", "BBBBB"};
    int T = 42;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 1897;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> clipboard = {".B.BBBBBBBBBB...BBBBB.BBBB.B.B.BBB", "B.B.BBBBBB.BB.BBB.BB.BB.BBBBBBB..B", "BB..B.BBBBBB..BBBBBB.BBBBB...B.B.."};
    int T = 43;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 1505;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> clipboard = {"BBBBBBB.BB", "..BB...BBB", ".B.B.B.BB.", "BBBB.BB.B.", ".BBB.BBB.B", "B...BB.BBB", "B.BB.BBBB.", ".BBBBBBBB.", "...B.BBBBB", "BB.B.B.BBB", "BBB..BBBBB", "BBBBB.BB..", "BBBBB..B.B", "BB.BB.BBBB", "B.B.BBBBB.", "BB..B..BBB", ".BBBB..B.B", "B..BBBBBBB", "BBBBB.....", ".BBBBBBBBB", "BBBBBBB.B.", "BBBBBBB.BB", ".BBBB..BBB", "BBBBB.BB.B", "B.BBBBBBB.", "BB.BBB...B", "BBB.BBBBB.", "BB.BB..BB.", ".B..BBBBBB", "BBB..BB.BB", "B..BBB.B.B", ".B.BBBBBB.", ".BBBBBB.BB", "BB..BBBBB.", "BBBB.B.B.B", "B.BBBB.BB.", ".BB.BB.BBB", "BBBBB.BBB.", "BB.BBBB.BB", "BBB.BB.BBB", "..BBBBBBBB", "B.B.BB.BBB", "BBBB.BBB.B", ".BBBBBB..B", "BBBBB...BB", "BBBBB.BBBB", "BBBB..BB.B", "BBB..BBBBB", "B.BBBBBB.B"};
    int T = 44;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 2941;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> clipboard = {"B..BB.BBBBBBB.BB.BB.BBBBBBBB.B.B.B.BBBBBB", "BBB.B..BB.BBBB.BBBBB.BBBBB.BBBBBB.BB.BBBB", "BBBBBBBBBBBBBBBBBBBBBBBB.BBBBBBBBBBBBBB.B", "BBBB.BB.B........B.BBB.B..BBBBBBB.BBBBBB.", ".BBBBBBBBB.BBBB.BB..BB.B.BB.BBBB.BB.B.B.B", "B.B.BBBBBBBBBB.B.B.B.BBBBBBBBBBBBBBBBBB.B", "BBBBBBBBBB.B.BBBBBBBBB.B.BB..BBB.BBB.BB.B", "B.BBBBB..B.BBBBBBBB.B.BB.BBBB.BBBBB..BBB.", "..BB.BBBB.BBBBBB.BBBB.B.B.BBB.B.BBB.BBB.B", "B.BB.BBBB.BBBBBBBBBBBB.BBB..BBBBBBBBBBBB.", ".BBB.BBBBBB.BBBB.BBBB...BB..BB.BBBB.B..BB", "..BBBBBB..BBB.BBBBBBBBBBB..BB.BB.B.BBB.B.", "B.BB..BBBBBB.BBBBBBBBBBBBBB..BBB.BBBBB.BB", ".BBBBB.BB...B.B.BB.BBBBBBB.BBBBBBB..B.BBB", "B...BBBBBBBB.BBBB.BBBBBB.BBBBBBBB..BBBBBB", "B.BBBB.BBB.BBBBBBBBB.BBB..BBBB..BB.BBBBBB", "B.BBBBBBBBBBBB.B..BBBB..B.B.BBBBBBBBB.B..", "B.B.B..BBB.BB.BBBBBB.BBBB.BBBBBB.BBB.BBBB", "BBBBB.BB.BB..B.B.B.B.BBBB.B..BBBB.BBBB.BB", ".BBBBBBBBBB.BBBBBBBBBBBBBBBB.BB.B..BB.B.B", "BBB.BBB.BB.BBBBBBBBB.BB..BBBBBB.B.BBBBBB.", "BB.BBBBB...BBBB.BB..BBBB.B.BBB.BB.BBBBBBB", "...BBBBBBBBBBB.BB.BBBB.BBBBB.BBB.BBB..BBB", "...BB.BBBBB.BBBBBBBBB.BB.BBB.BB..B.BB.BBB"};
    int T = 45;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 3660;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> clipboard = {".B.BBBBBB.BBBBBB.BBBBBB.BBB.B.B.BBBBBBB.", "B.BB.B.BBB.BB.BB.B..BBBBBBBBBBBBBBBBB.BB", "BBBBB..B..BBBBBBBB...B..BBBBBBBBBBBB.B.B", "B..BBBBBBBBBB.B.BB..BB.BBBB.B..BBBBBBBBB", ".BBBBBBBB..BBBB.BBBBBBBBBBB..BBBBBBBB.BB", "BBBBB.BBBBBBB.BBBBB.B.BBBBBB.BBBB.BBBB..", "..BBBBBBBBBB..BB..B..BB.BB.BBBBBB.BBBBBB", "BB.BBBBBBBBBB..BB...BBB..BBBBB.BBBBBBBBB", "B.....BBBBB.BBBB.BBBBB.BBBBBB.BBBBBB.BBB", ".BBB.B.BBB.BBBBBBBBBBB...B.BBBBB.BBB.BB."};
    int T = 46;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 2485;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> clipboard = {"BBBB.BBB.BB.BB.B.BB.BBB.BBBBB.BBB..B.BB", "B.BB.BBBBB..BBBBBBBBB..BBBBB.BBBB.BBBBB", "BBBB.BBBBBBBB...BBB..BBBBBB.BBB.BBBBBBB", "BB.B..BBBB.BB.BBBB.BBBBB.BB.B.BBBBBBBBB", "BB..BBBB.BB.BBBBBB.BBB.BB.B.BBB..BB.BB.", "BBBBBB.BBBB.BBB.BB.BBBBBBBBB.B.BBBBB..B", "BBBBB.BB.B.BBBBB.BBB.BB.BB....B..BBB.BB", "B.BB...BBBBB.BBBBBBBB.BBB.B.BB..BBB..BB", "BBB.BB.BB..BBBBBB.BBB.BBB.BBB..B.BBBBBB", "BBBBB.BBBB.BBBBB.BBB.BBBBB.BBB.BBB.BBBB", "B....BBBB.B.B..BBB.BBBBBBBB..BB.BBBBBBB", ".B.BBB..BB..B.BB.BBBBBBBBBB.BBBBB.BB.BB", ".BBB...BBBBB.BB.B....BBBB.B.B.BB.B.BB.B", "BBBB.BB.BBBB.BB.BBBBBBB.BBBBBB.B.BBB.B."};
    int T = 47;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 2911;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> clipboard = {"B.BBBB.B.B.BBBBBBBBBBBBBBBB.B.BB.BB", "B.BBB.....B.BB..BB..B.BBBBBBBBBB...", "BBBB..BBB.BB.BBBBBBBBBBBBB.B.BB.BBB", ".BBBBB.BBBBBBB.BBB..BBBBB.BBBBBBB.B", "BBBB.B.BBBBBBB.BBBBBBBBBBBBBBBBB.BB", "BBBB.BBBB.B.B.BB.BB.B.BB.BBBBB..B.B", "BBB.BB.B.BBB.BB.BBBB.BB.BBBBBB.B.BB", "BBB.BBB.BBBBBBBB..BB...BBBB.BB.BBBB", "BBBBB.BBB..B.B.BB.BB.BB.BB.BBBB..BB", "BBBBBBBB....B.B....BBB..B.BBB.B.BB.", "BBB.B.B...BBBB.BBB.B..BB...BBB.BBBB", "BB.B.BBB..BBBBBBB..BB.BBBBBBBB.BBBB", "B..BBBB.BBBBBBBBBB..BB.B.BBB.BBB.BB"};
    int T = 48;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 2636;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> clipboard = {"BB.BBB.BBBBB.BBB.B.B.B.BBB.B.B.BB.BB.BBBBBBB", ".BBBBBBBBBBBBBBBBB.BBBB.BBB...BBB.B.BBBBBBBB", "BBBBBBBBBBBBBBBBB.B...B..B.BB.B.B.B..BB...BB", ".BBBB.BBBB.BBBBBBB.B.B..B.BBB.B.BB.B...BBBBB", "BBBBBB..BBB.BBBBBBBBBBBBBBBBBBBB.B..B.BBBBBB", ".BBBBBBBBB.BBBB.BBBBBBB...B...BBBBB.B..BBBBB", ".BBBB.BBB.BBBBBB.BBBBB.BB.BBBBB.BBB.BBBBB.BB", "BBBBBB.BBBB.BB.BBBBB.BB.BBBBB.BBBBB.BBBBB.BB", "B.BBBBBBBB..BBBBBBB.B.BBBBBBBB.BBB.BBBBBBBBB", "BB.BB.B.BB.BBBBB..BBB.BBBB.B.B.BB.BBBB.BBB.B", "BB..B.BBBBBBB.BB.BB.BBBBBB..B.BBB.BBBBB..BB.", "BBBBB..BB.BBB..BB.BBBBBBB..BBBBBB.BBBBB..BBB", "BBBBBBBBBBBB.BB.BBBB.B.BBBBB.BBB..B.BBBBBBBB", ".B.BB.B..B.BBBBBBBBBBBBBBB.BB.BBBBBBB.B..BBB", ".BBBBBBBB..BB..B.BBB.BBBB.B..BBBBBBBBBB..BBB", "B.B.B..B..BB.BBBBBBBBBBBB.BBBBBBBB.BB.BBBBB.", "B.BBBBBBBBBB......BB.BBBB.BBB.BB.BB.BBBBBBBB", "BBB...BB.B.BBBBB..BBBB.BBBBBB.BBBB.BB.B.BB.B", ".BB.BBBB..BBB.BBBBBBBB.BBBBBBB.BBBB.BB.BBBB.", "B.BBBBB.BBBBB.BBBBB.B.B.BB..BB.B..B..B.B.B.B", "BBB.BB.BB.BBB..BBBB.BB.BBBBB.BBBBBBBBBBBBB.B", ".B....B.BBBBBBBBBBBBBBBBBB.BBBBBBBB..BBB...B", "BBB.BBBBB.B.BBBB.BBBBBBBBB.BB.BB.BB.BBBB.BBB", "B.B.BBBB..B.BB..BBB...BBBBB.BBBB.BBBBBBBBBBB", "BBBB.BBBBBBBBBBBB..BBBBBBBBB.BBB.BBB.BBB.BBB", ".BBBBBBBBBBBBBBBBBBBB.BB.BBBBBBB.BBB.B.BBB..", "..BBBBBB..BBB..B.BB.BBBB.BBBBBB.BB..BBBBB.BB", "BBB.BB.BB.B.BBBBBBBBB.BBB.BBBBBBB.BBBBBB.BBB", ".BBBBBB..BBB.BB.BBBBBBBB.B..BBB..BBBBBBBBBB."};
    int T = 49;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 4633;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> clipboard = {"BBBBBBBBBB.BB..BB..B.BBBB.B.BBB..B.B.BB...BBB", "BBBBB.B.BBB.BBBBB.BB.BBB..BB.BB.BBBB.B.BBB.B.", ".B.BBB..B..BBB.BBBBBBBB.BBBBBBB.BBB.BBBBBBB..", "BBBBBBBBBBBBBB.B.B.BBBBB.BBBBB.B.BBBBBBBBB.BB", "BBBBBBBB.BBBBB..BBB.BBBBBBBBB.BBBB.BBBBBB.BBB", "B..B.BBB.B.BB.BBBBBBBBBBBBBBBBB.BBB..BBBBBB.B", "B.BB.B.B.BB.BBB.B..BBBB.B..BB.BBB..BBB.BBBBBB", "..BBBBBBBBBB.BB.BBBB.B.BBBBBBB..BBBB.B..BB.BB", "BB.B...BB.BBBBBBB..BBB.BBBBBBBBB.B...BBBB....", "BBBBBBBB.BBBBBBBBBB.BBB.BBBBB..BB.BB.BBBBBB.B", "BBBBB..BBBBBBBBBBBB.B.BB..BBB.BBBBBBBBBB.BBBB", "BBBBBBBBBBBBBBBBBBB..BBBBBBBBBBBBBBB.BBBBBBB.", "BBBBBBBBBBBBBBBBBBBB..BBBBBBBB...BBBBBBBBBBBB", "B.BBBBBB.BBBB.BBBBB.B.BBB..BBBBBBBBB.BBBBBBBB", "BB.BBBB.B.B.B.B.BB.BBBBBB.BBB.BBBB.BBBBBBBB.B", "B.BBBBBB.BBBBBBBBB.B..BBB..BBBB.BBBBBBBB..BBB", "B.BB.BBBBBBBBBB.B.B.BBBBB.BBBBB..BBBBBBBBB..B", ".B.B...BB.BBBB..BBBBBBBB.B...BBB...B..BB.BB.B", "BBBBBBBBB.BBBBB.B.BB..BBBBBBBBB...BBBBBB..BB.", "BB.BBBBB...B.BBBB.B.BBBBBBB..B.BB.BBBBB.BBBBB", "B..B...BBBBB.BB.BBBB.B.BBBB..B.BB..BBBBBBBBBB", "BBB.B.BBBBBBB.B.B.B.BB.B..B.BBBBBBB..BBBBB.B.", ".BBB.B.BB..BBBBBB..B.BBBBBB.B.BBBB.BBBB.BBB.B", "B.BBBBB.BB.B.B.B..B...BB.BBB.BBBBBBBBBB.B.BBB", ".BBBB.BBBB.BBBBBB.BB.B.BB.BBB.BBB..B..BB..BBB", "BBBBBBBB.BBBB.BB..B.BBBBBBBBBBBBBBBBB.B.BBBBB", "BBBB.BBBBB.B..BBBBBBBBB.B.BB.BB.BBB..BBBBBBBB", "B.B.B.B.BB.B.B.B.B.BBBBB.BBBBB.BB.BBBBBBBB.B.", "BBB.BBBBBBBB..BB.BBBBBBBBB.BB.BBBBB.BBBBBBBB.", "..BBBBBBB.BB.BBBBBBBB.BBBBBBBBB.BBBBBBBB.BBBB", "..B..BB.BBB..BBBBBB.BB..BBBB.BBBBBBB..BBBBBB.", "BBBBBB.B..BB..BBB.BBBBBB.BBBBB.BB..B...BBBBBB", ".BBB.BBBB.BBBBBBBBBBBB.BB.B..B.BBBBBBBBB.BBBB", ".B.B..BB.B.BB.B.B.BB..BBBBBBBBBB.BBBBBBB..BBB", "BBBB.B.BBBBB.BBBB.BB..B.BBB.BB.BBBB.BBBBBBBBB", ".BBBBB..BBB.BBBBB.BBB.B.BBB.BBBBBB..B..BB.BBB", "BBBBBBBBBBBBBB.BBBB.BBBB...BBBBBBBBBB..BBBBBB", "BBBBBBB.BB.BBBB.BBBBB.BBBBBBB.B..BBBBB.BBBB.B", "BB.BB.BB.BB..BB.B..BBBB.BBBBBBBB.BBBB.BBBBBBB", "BBBBBBBBBB.BBBB.BBB...BBBBB.BB.BBB..B.B.BBBBB", "BBBBBBB.BB.B.BBB.BBBBB.BBB.BB.BBBBBB.B.BBBBBB", "BB.BBBBBBBB.B.B..B.BBBBBB.BB.BB.BBBBBBB.B.B..", "BBBBBBBBBBBBBB.B.BBB...BBBB....BBB.BBBBB.BBBB"};
    int T = 50;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 6136;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> clipboard = {"B.B.BBBBBBB.BB.BBBBBBBB", "BBBBBB.BBBB.BBBB.B.BBB.", ".BBBBB...BBBBBBBBB.BB.B", "..BBBBBBB.BBB.BB.B.B.BB", "B.BBB.B..BBBBBBBBBBBBBB", "BBBBBBB.B.B.B.BBBBBBB.B", "BBBBBBBBBBBB.BB....B...", "BBBBBB.B..BBBBB.BBBBBBB", "BBB..BBB.BBBBBBB..BB.B.", "BB.BB.B..B...BBB..BBBBB", "BB..BBBBB.BBBBBBBBB.BB.", "BB..B.B.BBB.BBBB.BBB.BB"};
    int T = 51;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 1954;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> clipboard = {"..", "BB", "BB", "B.", "BB", "B.", "BB", "BB", "BB", "B.", "BB", "BB"};
    int T = 52;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 631;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> clipboard = {"BBBB..B.B", ".BBBB.BBB", "B.B.B..B.", "BB..B..BB", ".BBBBBBBB", ".B..BB.B.", "BBBBBBBBB", "BB.B.BBB.", ".BB.BBBBB", "B.BBBB.BB", "B.BBBBBB.", ".BBBBBBB.", "BB..BBBBB", "BB...BBBB", "BBBBBBBB.", "B..B.BBBB", ".B.BBBBBB", "BBB.BB..B", "BBBBBBBBB", "BBB.BBBB.", "BBBBBB..B", ".BBBB.BBB", ".B.BBBB.B", "BBB.BB..B", "BB.BB.BBB", "..BBB.B..", "BB..BBB..", "B.BBBBB..", "...BBBBBB", "BB.B.B.BB", "BBB...BBB", "BBBB..BBB", "BB.BBBBBB", "BBBBBBBBB", "B.BB.BBBB", "BBB.B.BB.", ".BBBBBBBB", ".BBBBB.B.", "BB.BBBBBB", "BBB..B.BB", "BBBBBBB.B", "BB.BBBBBB", ".BBB.BBBB", "BBBB.BBBB"};
    int T = 53;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 3064;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> clipboard = {".....B.BBBBBBBBBBBBBB.B.B.BBBB", "BBBBBBBBBB..B.BBBBBBBBBBBB.BBB", "B.BBBBBB.B.BBBB..BB.B.B.B.B.BB", "..B.B..BBB.BBBB.BBB.B.BBBBBB.B", "BBBBB.B.BBBBB.BB.BBBBBBBBB.BB.", "BB.B.BBBBBBBBBBBB.B.BBBBB.BBB.", "BB.BBB.BB....BBB.BBBB.BB.BBBBB", ".B.B.BBB...BBBBBB.B.B.BBB.BBBB", "B.BBB.B..BBBBBBBB..B.BBBBB..BB", "BBBBBBB...BBBBBB.BBB.B.BBBBBBB", ".BB..B.BBBBBB.BBB...BBB.B.B.BB", "BB...B..BBB.B.BBBBBBB.BB..BB..", ".B.B..B.BB..BBBBBBBBB.BBBBBBBB", "BB..B.BBBBB.BBBBB.B.BBBBBBBBBB", "BBBBBBB.BBB.BB.BBB.BBBBB.BBBBB", "B.BBBB..B.BB.BB.B.BBB.BBBBBBBB", "BBB.BBBBBB.BBB.BB.BBBBBB.BB...", "B.BBB.BBBB.BBBBBBBBB.BBBBB..BB", "B.B.BBBBBBB.B.BBB.BBB.BBBBBB..", ".BBBBBBBBBBB.BB.BBBBBBBBB.B..B", "BB.BBBBBBBBBBBBBBBBBBBB..BBB..", "B.BB.BBBBBB.B.BBBBBB.BBBBBBBBB", "B.BB...BBBBBBBBBBBBBBBBBBBBB.B", "BBBBBB.BBBBBB.B.B.BBBBBBB.BB..", "B.BBBBBB.BBB.BBBBB.BBBBBBBBBBB", "BBBB.BBBBBBB.BBBB.BB..BBBBBB.B", "BB.B..BB.BBBBBBB..BB....B..B.B", "BB.B.B...BB.BB.B.BB.B...BBBBBB", "B.B.B.BB..BBBB.BBBBBBBBBB.BBBB", ".BBBBB.BBBBB.BBBBBBBB.BB.BBBBB", "..B.B..B.BB.BBB.BB.BBBBB..B.BB", "BBBBB..BBBB.BBBBBBBB.BBB.BBBBB", "BB.BBBB.B.B.BBBBBBBB.BB.BB.BBB", "BB.BBBBBBB.B.BBBBBBB...BBB.BB.", "B..BB.BB.BBBBBB..BBBBBB.BB.B.B", "BBBBBB....BBB.B..B.BBB...BB.BB"};
    int T = 54;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 4423;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> clipboard = {"BBBBB..B.BB.B.BBB.BBBB", "BBBBBBB..BBBBBB.BBBBBB", ".BB.BBBBBBBBBBBB..BBBB", "BB.B...BBB.BB.B.BBBBBB", ".B.B..BBBBBBBBBB.B.BB.", "BBBBB.B.B.BBBBB..BBBBB", "BBB.B.B..B.B.B.BBB..BB", ".BBBBBBBBBB.BBBBB.BBBB", "BB.BBBBB..B.BBBB..BBBB", "BBBBBBBBBBBBBBBBB..BBB", ".BBBBBB.B....BBBBBBBBB", "BBBB.B......B..BBB.BBB", ".BBBBBBB..B.BBBBBBBBBB", "BB.BBBBBBBBBB.BBBBB..B", "BB.BB.B..B.B.B.BBBBBBB", "..BBBBB.BBBBBBBBBB.B.B", "..BBBB.B.B.BB.B.B.BBB.", "BBB.BB.BBBB..B....BBBB", "BBBBBB...BB.BBBB.BBBBB", ".B.BBBB.BBB.B.BB.BBBBB", "BBBBBBBBBB.B.B.BB.B.BB", "BBB.BBBBB...B.BBBBBBBB", ".BB.BBB.B.BB.BBBBBB.BB", "BB.BB..B.BBB.BBBBBB.BB", "BBBBB.BBBBBBBBB.B.BBBB", "..BBBBBB.BB..BBBBBBBBB", ".BBBBBBBBBB.BB.BB.B.BB", "B.BB.BB.BBBBBBB.BB..BB"};
    int T = 55;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 3178;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> clipboard = {"BB.BBB.B.BBBBBBBBB.BB.B.BBB", "BBBBB.B.B.BBBBBB.B.BB.BBBBB", ".B.BBBBBBB.BBB.BBB.BB.BBBBB", "BBBB.BBBB.B.BBBBB..B..BB.BB", "B.BB.BBBBB..BBB..B.BB.BB.BB", "B..BB.B.B.BB.B..BBBBBBBBBBB", "BBBBBBBBBB.BBBBBBBB..BBBBB.", "BB.BBBBB.BBB.BBBBB.BB.BBBBB", "BBBB.BBBB..B.BBB..BBB.BBBBB", ".BBBB.BB.B.BBBBBB..BBBBB.B.", ".B.BB.BBBBBBB...BB.B.B.BB..", "B.BB..B.B.BB.BBBBB...B.BBBB", "BBBBBBBBB.BB.BBBBBB.BBBBB.B", "B.BB.BBBB..BB.BBBBB..B.BB.B", ".BB.B.B.BBBB.BBB..BBBBB...B", "..BBBBBB.BBBB.BBB.BB...BBB.", "BBBBBBBB.B..BB.BBBBBBB..BBB", ".BBBBB.BBBBB.BBB.BB..BB.B.B", "BB...B.B.BBBB.BB.BB.BBBBBBB", "B.BBB.BB.B.BBBBB.BBBBBB.BBB", "BBBB.BBBBBBBBB..B.B...B.BB.", "B.BBB.B..BB.BB.BB.B.BBBBBB.", "BBBB.BBB.BBBB.BBBBBBBBBBB.B", "B..BB.BBBBBBBBBBBBBBBBBBBBB", ".BBBB.BBBBBBBBBBBBB.BBBBB..", "BBB.B.B..BB..BBBBBBBBBBBBBB", "BBBBB.BBBB.B.B.B.B.BB.B.BBB"};
    int T = 56;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 3608;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> clipboard = {"BBBB", "BB.B", "B.BB", ".BBB", ".BB.", "B.B.", "BB..", "..BB", ".BB.", ".BBB"};
    int T = 57;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 701;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> clipboard = {"BBB.BBB.BBBBBBBBBBBBBB.B.", ".BBBB.BBBB.B.BB.BB.BBBB..", "BBBBBBBBBBBB...BB.B..BB.B", "B..BBB.BBBBBBBBBB.BB.BBBB", "BBBBB.BB.BBBBBBBBBBBBBBBB", "BB.BB.BBBB.BBB.BBBB.BBB..", ".B.B.BBBB.BBBB..BBB.B.BBB", "BBBBBBB.B.BBBB..B.B..BB.B", ".B..B.BBBB..BBBBB.BBBBBBB", "B.BBBBBB.B.BBB..BBBB.B.BB", ".B.BBBBBBBBB.B.BBB.B.BBB.", "B...BBBBB.B.BBBBBBB.BBBBB", "B.BBB.BBBBBBBBB.BBBBBB.B.", "BBBBBBBB.B.BB.BBBBBBB.B..", ".BBBBBBBBB.BBBBBBBB.BBBBB", "B.B.B..BB.B.BBB.BB...B.B.", "BB.BBBB.....BBBB.BB.BBBBB", "BBBBBBB...BBBBBBBBBBBBBB.", "BB..BBBBBBB.B.B.BBBBBB...", "BBB.BBBBB.BBBB.BBB.BBBB..", "B.B..BBB.B.B.BBB.BB.BBBBB", "B.BBB..BBBBBBB...B.BBBBBB", "BBB.B.BB.BBBBBBBBB.BBB.B.", "BBBBBBBBBBB.....BBBBBBBB.", "BBBB..BBBB.BB.BB.BBB.BBBB", "B..BB.BBBBBB.BBBBBBBBBBBB", ".BBBBBBBBB.B.BBBBB.BBBBBB", "B.B...BBBBBB...B..B..B..B", "BB.BBBBB.B.BBBBBBB.BB.BBB", "..BBBBB...BBBBBBB.BBB.BB.", ".BBBBB.BB.BBBBBB.BBBBBBBB", "B....BBBB...B.BBBB.BB.BB.", "BBBBB..BB..BBBB.BB.BBBBB.", "B.BBBBB.BB.B.BBBBBBBBBB.B", ".BB.BB.BBB.BB.BBBBBBBBBBB", "B.BBBBB..B..BB.BBB.BBBBBB", "B.BBBBB.BBB.BB.BB.B.BBB.B", "BBBBB.B.B.BBBBBB.BBB.BB.B", "BB.BBBBBBBBBBBBB.B.BBB..B", "BBBB..B.B..BBB.BB.BBBB.B.", "BB.BB.BBBBBBBBB.BBBBBBBB.", "BB.BBBB.BBBBBB.BBBBBBBBBB", ".BBB.B.B..B.BB.BBB.BBB.BB", "BBB.BBB.BB.B.B..B..BB.B.B", "...BB.BBBB.BBBBB.BBBB..B.", "BBBBBBBBB.BBBB.BB.BBBB.B.", "BBBBB..BBBBBBB.B..BBBBBBB", "BB..BB...BBBBBBB.B.BBB.BB", "BBBBBBB..BBBBBB.BBBBBBBB.", "BBBBBB.BBBBB.BB.B..BBBB.."};
    int T = 58;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 5355;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> clipboard = {"BBBBBBB.BB.B.BB.BBBBBBBBBBBBBBBBB", "BBB.B.BBBB..BBB.BBBBB.BBBB.B.BBBB", ".BBB.BB.B.BBBBB..B.BBBBBBBBBBBBBB", "BBB.BBBBBBBBBB.BBBBBBBBBB.....BB.", "..BBBB.BBBBBBBB.BBBBBBBBBBBBBBBBB", "B.B..BBBBB.BBBBB.BBBBBBBBBBBB.BBB", "B.BB.B.BB..BBBBBBB.BB.BBBBBB.BB..", "BB.B.BBB.B..BBB.BBBBBBBB.B.BBBB..", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBB.BBB", "B.BB.BBBBBBB.B.BBBB.BBBB...BBBBB.", "BBBBBBB.B.BBB.BBBBB.BBB.BBB.BB.B.", "B.B.BB..BBBBBBBBB.BBBBB.B.BBBBB.B", "BBBBB.BBBBB.BBB.B.B.BBB..B.BBBBB.", ".BBBBBBBBBB.BBB..BBBBBBBBBB.BBBBB", "..BB..BBBB..B.BBBBBBB.BBBBBB.BBB.", "B.B.BBBB...BBB.B..BBBBBBB.B..BBBB", "B.BBBBB.BB.BBBBB.BBBBBBBBBB.BBBBB", ".BBB.B.BBBBBBBBBBBB.BBB.B.B.BBBBB", "BBB.BBB..B.BBBB.BBB.BBBBBBBBB.BBB", "BBB.B.B.BB.B.BBBBBBBBBBBBBBBBB.BB", "BBBBBB.B.BB.BBB.BBBB..BBBB..BBBBB", "BBBBBBBBBBB.BBBBBBBB.B.BBBBBBBBB.", "BBBBB.BBBBBBBBBBBBBBB....BBB.B.BB", "BBBBBBBBB.BBBBBB.BB...BB.B.BB.B..", "BB.BBBB.BB.B.BBBBBB.BBBBB...BBBB.", "BBBB.BB.BBBBBB.BBBBBBB.B...BB.B.B", "BBBB.BBB.BBB.BBBBBBB.B.BBBBBBBB..", "BBBBBBBBBBBBB.BBB.BBBBBBBBB.BBBBB", "BBB.BB.B.BBB..B.BBBBBBBBBBBB...BB", "B..B.BB.BBBBBBBBBBBB.BBB.BB.B..BB", "BBB.BBBBBBB.BBBBBBB.B..BB.BBBBBBB", "BBBB.BBB.BB.BB.BBBB.BBB.BBBB.BBBB", "B.B.BBBBBBBBB.BB.B.BBBBBBB.BB..BB", "B.BB.BBBBB.BBB..BBBBBB.BB..B.BB..", "B.B.BBBBBB.BBBB...B.BBBBB.B...BB.", "BB.BBBBBBBBBBB.BBBB.BBBBB..BBBB.B", "BBBBBBBBBBB.BBBBBBB.B.BBB.BB.BBB.", "BBBBBBBBBBBBBBBBBBBBB.B.BBBBBB.BB", "B..BBBB.B.B.BBBB.BBB.BB.B..BBB...", "BBBBB..BBBBB.BBBBB..BB.BBBBBBBBBB", "BB.BBBB.BB..B.BBB.B.B.BB.BBB..BBB"};
    int T = 59;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 5535;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> clipboard = {".B.B.BBBBBBB.BBB.BBBBBBB..BBBBB", "BB.B.BBBB..BB.BBBBBB.BBBBBBBBBB", "BBBBBB.BBBBB.B.BBBB.BBBB.B.B.BB", ".BBBBBBBBB..BBBBBBBBBBBBB..B.B.", "BBBBBBBB.BB..BBBB..BB.BB.BBBBB.", "BBB..BBB..BBB...BBBBBBBBBBB..B.", "BBBBB.B..BBB.BB..BBBB.BB....BB.", "BBBBBB.BBBBBBBBBBB.B.BBBB.B.B.B", "B..B.BB.B.BBB.BBBBBB.BBBBBB.BBB", "BBBBBBBBBB.BBBBBBBBB.BBBBBBB.B.", "BBB..BB.BBBB.BBB.BBBB...B.BBBBB", ".BBBBB.B..BBBBBBBBBBBBBBBBB.BBB", "..BBBBBB..BB..BBBBBBBBBBB.BBBBB", "BBBBBBBBB.BBBBBB.B.BB.B.BBB.B.B", "BB.BBBB.BBBBBB.B.BBBBBB.BB.BBBB", ".BB.BBBBBBBBBBBBBBBBBB..BBBBBBB", "BBBB..BBBBBBBBBBB.BBBBBBB..BBBB", "..BBBBB.B.B.BBBBB..BB.BBB.BBBBB", "..B...BBBBBBBBB.B.B..B.BBBBBB.B", "BBB.BBBBBB..BBB.BBBB.BBBBBB.B.B", "BBBBBB.BB.BBBBBBB.B.B.B...B.BBB", "BBB.B.B.BBBBBB.BBBBBBBB.BB.BB..", ".BBBBBB...BB..BBBBBBBBB..BB..B.", ".BBBB.BBBBBBB.BBB.BBBB.B..BB.B.", ".BBB.BBBB.BB.BB..BBBBB.BB.BB.BB", ".BBBBBBBBBBBBB.B.BBB..BBB.BB...", "BBBB.BBBBB.BBB.BB..B.BB..BBBBBB", "B.BBB.BBBBB..B.BBBBBBBB.BBBB.B.", "BBBBBBBBBBBB.BBBBBBBBBBBBBBBBBB", "BBBBB.BBB.BB.B.BB.B.B.BBB.BB.BB", "BBBB.BBBBBBB...BBBB..BBBBBBBBBB", "BBBBBBBB.BBB..BBBB..BBBBBBB.BBB", "BBBBB.BBBBBBBBBBBBB.B.BB.BBBBBB", "BB.B..BBBBBBBBBBBBBB.BBBBBBB.BB", "BBBBBBBBB.BBB.BBBBBBBB.BBB.BBBB", "BBB.BB...BBBBBBB.BBB..BB.B..BB.", "BB.BBBB.BB.BBBBBBB.BBBB.BBB..BB", "BBBB.BBB...B.BB.BBBBBBBBBB.BBBB", ".B...BBBBBBBB.BBBBB.B.BBB.BB.BB", "B...BBBB.BBBBBBBBBB.BBBBBB.BB.B", "BBBB..BBBB.B.BB.B.BBBBBBBBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBB.B.BBBB", "BBBBBB.BB..B.B.BBBBBB.B.BBBBBB.", ".BB.BB..BBBBBBBB.BBBBBB.B..BBBB", ".BBBBBBBB..B.BBBBBBB.BB.BBB.BBB", "BBBBB.B.B.BBBB.BBBBBBBBBBB..BB.", "B.B.BBBB.BBBB.B.BBB.BB.BB...B.B", ".BBBBB.B.BBBBBBBB.BBBB.BBBBBBB.", ".BBBBB..BB..B..BB.BBB...BB.BBBB", "BB..BB..B...BB..BB.BB.BB..BBBBB"};
    int T = 60;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 6207;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> clipboard = {"B.BB.B.BBBBBBBBBBBBBB.BB.", "BBBBBBB.BBBBBBBBBBB.BBBBB", ".BBBBB.BB.BB.BBB.BB.BBBBB", "BB.B.BBBBB.BBB..BBB.BB.BB", ".B.B.BBBB.B.BBBBBBBBBBBBB", ".BB.B.B..BB..B..BBBB.B.BB", "BBBBB.BBBBBBB..BBBBB.BBBB", "B...BBBBB..BBBBBB.BB.BBB.", "BBBBBBBB.BBBBBBBB..B.BBBB", "BBBBBBBBBB.BBBB...BBBB.B.", "BBB.B..B.BBBBBBB.B.BBBB.B"};
    int T = 61;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 2294;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> clipboard = {"B.BBB.BBBBBBB.BB..BB....", "BBBB.BBB..BBBBBBBBBBBBB.", "B.BBBBBBB..BBBBBBB.BBBBB", "BB.BBBB.BBB..BB.BB..BBBB", "BBBBB.B.BBBBBBBBBBB...BB", "BB.BBBBB....BB..BBBB.BBB", "B.BBB.B.BBBBB.BBBB.B.B.B", "B.B.BBBBBB.BBBBBB.BB...B", "BBBBB.BBB.BBBB.BB.BBBBBB", "BB..BBBBBBBBBBBBBBBBB..B", "BB..BB.BB.B.BBB.BBBB..BB", "BBBBBB.B.BBBB.BBBBBBBB.B", "B.BBBB.B..BBBBB.B.BBBB.B", "BBBBBBBBBBBBBBBBB.BB.BBB", "BBBBBBB.BB.BBBBBB.BBBBBB", "BBBBB.BB.B.B.BBBB.BBBB..", "BBBBBBBBBBBB..BBBBB.B.BB", ".BBBBB.....BBBBBBBBBBBBB", "B.B.BBBBBBB.BBBB..B..BBB"};
    int T = 62;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 2815;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> clipboard = {"BBBBBB.BBBBBBB.B..BB.BB.B", ".BBB....BBBB.BBBBB.BB.BBB", "B.BB.BBBBB.BBBBB..BBB.B..", ".B.BBBBBBBBB..B.BBB.BBBBB", ".BB.BBBB....BBBB.BB.BBBBB", "BB.B.B.B..BBBBBBB.B.B.B..", "BBBB..B.BBBBBBBB..B.BBB.B", "BB..B...BBB.BBBBBBB.BBB.B", "BB.BBBB.BBBB..BBB.B..B..B", "BBB.B.BBBB.BBBBBBBBBBB.B.", ".BBBB.BBBBBBBBB.BBBBBBB.B", ".BBBBBBBBBBB.B.BBB..BBB.B", "BB.BBBBBBBBBBBB.BBB.BBBB.", "BB.B.B.BB...BBB.BB.B..BBB", "B.BBBBBB.B.BB.BB.B.B..B.B", ".BBBBBBBBBBBB.BBBBBBBBBBB", "BBBB..B..BBBBBB.BB.BBBB.B", ".BB.BBBBB.BBBBBB.B.BBBBBB", "BBBB..B.BBBBBBBBBB.B.BB.B", "BBBBBBB.BB..B..BBBBB.BBBB", "BBB..B.BBB.B.BBBBBBBB.B.B", "BBBBBBBBBBBBBBBBBBBBB.BBB", "..B.BBBBBBBBBBBBBBBBBBBBB", "BB...B.BBB.BBBBBBBBBBBBBB", "BB.BB.BBB.BBBBBB.BBB.BBBB", "..BBBBBBBBBBBBBBBB.B.BBBB", "BB.BB.BB.BBBB..BBB.B.B..B", "BBBBB.BBBB.B.BB..BBBBBBB.", "BBBB.BBBB.BBBBBBBB..BB.BB", "BBBBBB.BBB..B.BBBBBBB.BBB", ".BB.BBBBBBBBB.BBB..B.BB.B", ".BBBB.B.BBBBBBB...BBBBB.B", "BBBB.BBBB...BB.BBBB.B.BBB", "BB.BBBBB.BBBBBB.BBBB.BBBB", ".B.B.BBB.BBBBBBB..BBBBBB.", "BBBB.B.B.BBB.B.BBBBBBBB..", "BBBB.B.BBBB.B.BBBBBBBBBBB", "BBB..B.B.BB.BB.BBBBBBBBBB", "B.BBBB.BBB.B.B..BBBB.B.BB", "B.BBBBBB.BB.BBBB.BBB...BB", "BB.BBBBBBBB..BBBBBB.BBB.B"};
    int T = 63;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 5008;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> clipboard = {"BBBBBBBBB.BBB.BBB.BB.BBB", ".BBBBBBBBBBB.B.B.B.BBB..", "BBBBB...BBBBBBBB.B..BBBB", "BBBBBBBBB.BBB.BBB.BBBBBB", ".BBBBBBB.BBBB..BBB...BBB", "BBBBB.BBBBBB.BB.BBBBB.BB", "B.BBB.BB..BBBBBBBBB.BBB.", "BBBBBBBB.BBBBB..BBBBB.BB", "BBBBB.BBB.BB.BBBB.B..B.B", "...BB.BBBBBBB.BBBBBBBBBB", "B.B..B..BBBBBBBBB..B.B.B", ".BBB..B..BBBBB.BBBBB.BB.", "BBBB.BB..BBBBBBB.B.BBBBB"};
    int T = 64;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 2556;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> clipboard = {"BBBBB..BBBBBBBBBBBBB.BB..B..BB..B", "B.BBBBBBBBBB.B..B...B.BBB.BBBBBB.", ".BBBBBBBBBBBB.BBBBBB..BBBBB..BBBB", "B.BBBBBBBBBBBB..BBBBBB...BBBBB.BB", ".BBBBBBBB..B.B.BB.B..BB.BBBBBBB..", "BB.BBBBBB...B..BB.BBBBBBBBBBB.BBB", "BB.B.B.B.BBBBB.BBBB.BBBB..BBBBB..", ".BBBBBBB.BBB.BBB.BB...BBBBBBBBBBB", "BBBBBBBBB.B.BBBBBBBBBB.BBB.BBB.BB", "BBBBBBB.BBBB.BBB..BBBB.BB....B.BB", "BBBBBBB.BBB.B.BBBBBBBBBB.BBB..BBB", ".B.BBBBBBB.BBBBBBBBBBBBB.B.BBBBBB", "B.BB.BB.BBBBBBBBBBB.B..B..BB.BBBB", ".BBBBBBBBB..B.BB.B.BBB.BBBBBBB..B", "BBBBBBBBBBBBBBBBBBB.B.BBBBBB..BBB", "BB.BBBBBBBB.B.B.BBB.B.B.BB..BBBBB", "BBBB.B.BBBBBBB.BBBBBB.BBBBBB.BBBB", "BBBBBBB.BBBBB.BBBBBBBBB.BB..BBBBB", "BBBBBBBBBBB.B.B.B.B.BBBBBB.B.BBBB", "B.BBBBBBBBBBBBBBBBBBBBB.BBBBB.BBB", "BBBBBBBBBB..BBBBBBBBBBBBBBBB.BB.B", ".B.BB.B.B..B..BBBBB..B.BBB.BBBBBB", "BB..B.BB.B..BBBB.BBBBBBBB.BBB.B..", "BB...BBB.B.BB.BB...B.BB.BBBB.BBBB", "BBBBB.BBBB.B..BB.BB.BBBBBBB.BB.BB", "B.BBBBBBBBBBB.BB.B.BBBBBBBBBBBBBB", "B.BBBB.B..B.BBBBB..BBBBBB.B.BB.BB", "BBBBBBBBBBBBB..BB..BBBB.B.BBB.BBB", ".BB.BBB.BBBBBB.BBBB.BBBB.BBB..BBB", "BBBBBBB.BBBB.BBB.BBBBBB.BB.BBBB..", "BBBBBB.BB.BB.....BB.BBBBB.B....BB", ".BB.B....B.BBBBB.BBBBB.BB.BBBB..B", "..B.B..B.BB.BBBBBB.BBBB.B...BB..B"};
    int T = 65;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 5008;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> clipboard = {"B.BBB..B.BBBB..BBBBB.BBB.BB.B..BB.BBBBBBBBB.BBB..B", "BBB.BBBBBBB.BBBBBBB.BBBB.BBB..B.BBBBBBBBB.BBB.BB.B", "B.BBBBBBBBBBBBBBBBBBBB.BBBB.B.BBBBBBBBBBB.B.BBBB..", "B.BBBB.BBBBBB.BBBBB.BB..B.BB...BBBBBB.BBBBBBB...BB", "B.B..B..BBB.BB.BBBBBB.BB.BBB.B.....BB.BBBB..BBBB..", "BBBB.B.BBBB.BBBBB.B.BBBBBB.B..B.B.BBBB..B.BBBBB.BB", "BBB.B.BB.BBB...BB.BBB.B.BBB.BBBBB...BBBBBB.BB..BB.", "BBB.BBB.B.BB.BBBB.BBBB.BBBBB.BBBBBBBBBBBBBB.BB.BBB", "BBBBBB.BBBBBBB.BBB..B.BBBBBBBBB.BBBBB..BB.BB.B.B.B", "BBBBBBB.BBBB.B..BB..BB.BB.BBB.BBBBB.BBBBBBBBBBBBB.", ".B.BB.BBBBBB.BBBB..BBBBB.BBBBBBB.B..B.BB.BBB...BBB", "BBBBBB.BB.BBBBB.B.B.B.BBBBBBBBB.BBBBBBB..BBBBBBBBB", "BB..BBB.B.B.BBBBBB..BB.BBBBB.BBBBB.BB..BB.BBB.BBBB", ".B.BBBBB..BBBBB.B..BBBBBB.BBBBBBBB.BB...BBBBB.BBB.", ".BBBBBBBBBBBBBBBBBB...BBB.BBBBB.B.BBBBBBBBB.BBBBB.", "BB..BBBBBBBBBBBBBBBBBBB..BBB.BBBBBBBBBBBBBBBBB.BBB", ".BB.BB.B.BBBBBB.BBBB.BBBBBB.BB...BBBBBB.BBBB.BBB.B", "BB.BBB..B.BBBB..B.B.BB.BBBBBBBB.BBBBBBBBBBBB.BBB.B", "BBBBBBBBBBBBBBBB.BB...B...BB.BB.BBBBBBB.B.BBBB.BBB", ".BBB...B.BBBB.BB.BBBB.BB.BBBBBBB.B.BBBBBBBBBBBBBB.", "BB.B.BBBBBBBBBBBBB.BB..BBBB..BBBBB.BBBBBBBBB.BBB.B", ".BBBB.BBBBB..B.B..BBB.B.BB.B...BBBBBBBB.BBB..BBBBB", "B.BBBBB.B.B..BBBBBB.BBB...BBBBB.BBB.BBBB....BBBBBB", "BB..BB.B.BBBBBB..BBBB.BBBB.BBBBB..BB.BBBB.BBBBBB.B", "BBBB..BB..B.BBBBB..BB.B.BBBBB..B.BBB..BBBBBBB.BBBB", ".B.BBBBB.BBB.BBBBBBBBBB.BB.BBBB.B.BBBBBBBB.BB.BBBB", "BBBBBBBB.BB.BBB.BBBBBBBBB.B..BBBBB..BBBBB..B.BB..B", "BBBBBBB.BBB.BBBBBBBBBBBBBB..B.BBBBBBBBBBBB..BBBBBB", "BBB.B.BBB..BBB....BB.BBB.BB.BB.BBB..BBB.BBBBBBBB.B", "..BBBBBB.BBBB..BBB....BBBBBBBBBBB.BBBBB..BBBBBBB.B", ".BB.BBBBB.BBB.B.BBBB.BBBBB..B.BBBBBBB.BB.....BBBBB", "BB.BBB..BBBB.B.B.BBBBBBBBBBBBBBBBBB.BBBBBBBBB.BBBB", "BBBBBBBBBBBB.BBBB.BB.BBB.BBBBB..BB..B.BB.BBB.B.B.B", "B.BBBB.BBBBBBB.BBB..BBBBBB..B.BBBB.B.BBB.BB.BB.B..", "BBB.BBBBB...BB.B.BBB.BBB.BBBBBBB..B..BBBBBB..BBBB.", "BB.BB.BB.BBBB..BBBB.BB.BB.BBB..B.BBBBB.B.BBBBBBBBB", ".BB.BBBBBBB....BBBBB.B.BBBBB.B.BBB.BB...B.BB..BB.B", "BBBBBBBBBBBBBBBBBBB.BB.B.BBB.BBBB.BBBB.BBBBBBB.BB.", ".BBBBBB..BBBBBBBBBB.BB.BBBBBBBB.BBBBBBBBBBBBBBBBBB", "...B.BBB..BBBBBBBBBBBB.BB.BBBBB.BB.BBB.BB.BBBBBBBB", "BBBBB..BBBBBBB..BBBBBBBBBBBB.BBBBB..BB..BB.BBBBBBB", "B.BBB.B.BB.BBBB...BB.BBBBB..BBBB.BB.BBB.BBBBBBBB.B", "BBBBB.B.BB.BBBBBBB.BB.B.B..BBBB.BBBBB.BBB.BBBB.BBB", "BB.BBBB.BBBBBBBB.BBBBBBBBBBBBBBB.BBBBB.B..BBB.BBB.", "B.BBBBBBB.BBBBB.BB.B.B.BBB.B.B.BBBBBBB.BB..BBB.BBB", "BBBBB..BBBBBBB..BBB.BBBBBBBBBBBB.BBBBBBBBBBB.B.BB.", "B.BB.BB.BBBB...BBBBBBBBBBBBBB.BB.BBBBBBBB..B.BBBB.", "BBBBBBBBB.BBBBBBB.BBBBBBBBBBBB.BBBBBBBBBBBBBBB.B.B", "BB..BBBBBB.BB..BBBBBBBBB..BBBBBB.BBBBB.B.BBBBBB.BB", "B.BBB..B.BBBBBBBB.BBBBB.B.BBB.BBBBBB.B.BBBB..B.BBB"};
    int T = 994;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 99747;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> clipboard = {"BB...BBB.BB.BBBBBB.BBB.B..B.BBBBBB.BB.BB.BBBBBBB.B", "BB.BB..BB.BBBBBBBBBBBBBBBB.BBB.BBBBBBBB.BBB.BBBBBB", "BB.B..BBBBB.B..B.BB.BB.BBB.B.BB.BBB..BBBBBBBBBB.BB", ".BBB.BB.BBB.BB.BB.BBB.B..BBBBBB..B.BBBBBB.BBBB.BBB", "BBBB..BBBBBBBBBB..B.B....BBB...BBBBB.BBBBBBBBBBBBB", ".BBBBB.BB..BBBB.BBB.B..BBBBB..B.BB.BBBBBBBBBBBB.BB", "BBB..BBBBBBBBB.B.BBBB.BBB.BBB.BB.BBBBBBB...B.BB..B", "BBBBBBBBBBBBBBBBBBBBBB.BBBBBBB..BBBBBB.BBBBBBB.B.B", "BB.BBB.BBBBBBBBBB.B..BBB.BBB.BBBBBBB.BBBBB.BBBBBB.", "BB....BBBBBBBB...B.BB.B.BB..BBBBB.BBBBBB..BBBBB.BB", "BBBBBBB.BBBB..BBBB.BB.B..BBB..BBBBBBBBBB..BBB.BBBB", "BBBBBBBBBBBBBBB.B.BBBBB.BBBBBBB.B.BBB.BBBBBBBBBBB.", "BBBBB.BBB.B.BB.BBBBBBBBBBBB..BBBBBBBB.BBB.BBB.B.BB", "BB.B..BBBBBBBBBBB.BB.B....B.BBBBB.BBBBBBBBBBBBBB.B", "BB.BBBBBBB..BBBBB.BB.BBBBBBBBBBBBBB.BBB.BB..B..BBB", "BB..BB..BBB..B.BBBB.BBB..BB.BBBBB.B.BBB.BBBB.BBBBB", "..BBBBBB.BBBBB.B.BBBBBB...BBBBBB..B.BBBBBB.BBBB.BB", ".BB.B.BB..BB.BBB..B..BBBBBBBBBBBBB...BB.BB.BB.B.BB", "B..BBB.B.BBBBBBB.BBB.BBB.BBBB.B.BBBBBBBBBBB.BBBB.B", "BBB.B...BBB.BBBBBB.BBB.BBBBBBBB.BB.BBBBBBBBBBBBB.B", "BBBB.BB.BB.BB.BBB...B.BBBBBBBBBBB..B.BB.B.BBB.BBBB", "BBBB.BB..BBBBBB.BB.BBBB.BBBBBBB.B..BBBBBBBB..BBB.B", ".B.B.BBBBBBBBBBBBBBB..BBBB.BBBBBB..BBB.B.B.BBB.BB.", "BB.BBB.BB.B..BBBBBBBBB.BBB.B.BBBBB...BBBBBBB.B.BBB", "..BB.BBBBBB..BB.BBB.BB.BB.BBBBBBBBBB.BB.BBBB.BBBBB", "..BB.BBB.BBBBBBBBBB.BBBBBBBBBBBB.BBBBBBBBBBBB.BB.B", "BBBBBB.BB.BBBB.BBBB..B.B..B.BB.B.BBB..B...BBB.B.BB", "BBBBBBBBBBB.BBB..B.B.BBB.BBBBB.BBBBBBBB.BBBBBBBB.B", "B.BBBBBBBBB.BBB.BBBBBBBBB.BB...BBB.BB.BBBB.BBBB.BB", ".B.BBBBBBBBBBB.BB.BBB.BB....BB..BBB.BB.BB.BBB.B..B", "BB.BBB.BB.B.BB...B..BB..BBBBBBB.BBBBB.BBBBBB.BBBBB", "BBBB.BBBBBB..BB..BBBBBBBBB.BBBBBB.BBB.BBB.BBB.B.BB", "B..B.B.BBBBBBBBBBBBBBBBBBBBBBBBB.B.B.BBBBB.BBBBBBB", "BBBBB.BBBBB.BB..BBBBBBB.BBBB.BB.BBBBBBBBBBBB.B..BB", "B.B.BB...BBBBBBBBB.BBBBB.BBBBBBBBBBBBBBBBBBBBBBBB.", "BB.BBBB.BB..BBBBBBB.B.BB.B.BBBBBB.BBBBBBBB..BBBBBB", "BB..BB.BBB.BBBBBBBB.BB.B.BB.BBBB.BBBBBB.BBBBBBBBB.", "B.B.BBBBBB.BB.BBBBBBBB...BBB.BBB.BB.BBBBBBBB..BB..", "BBBBBBBBB.BBBB.BB.B.BBBBBB.BBBBBBBBB.BBBBBBBBBBBBB", "BB.BB.BBBBBBB.BBBBBBBBBBBBBBB.BB.BBBBBBB...B.B.BB.", ".BBB.BBBB.B...BB.BBBBBB.BBBBBB..BBB...B..BBB.BB.B.", "BBB..BBBBBBBBB.BBBBB.BBBBBBBBB.BBB..BBB.BBBB..B..B", "BB.BBBBBBBBBBBBBBBBBBB.B.BB.BBBBBB.BBB...BBB...BB.", "BBBBBBBBBB..B.BBBBBB.BBBB.B.BB.BBBBBBBB.BBB.BBBB.B", ".B.BB.B...BB..B.BB.BBBB..BB..BBBB.BBBBBBBBBB..BBBB", "B.BBBBBBBBBB.BBBBBBBB.BBBB.BB.B..B.B.BBBBBBBB.BBBB", ".BBBBBBBBB.B..BBBB.BBB..BBBB.BBBBBBBBBBB.BBBBBBBBB", "B.BBBB.BBBBBBBBB..BBBBBBBB.BB.BBB..BB.B..B.B.BBBBB", ".BBBBBBBBBBB.BBBB.BBBB.B.BB.B.BBBBBBBBBBB.B..BB.B.", "BBBB..BBBBB..B.BBBBBBB.BBB.B.BBBBBBBBB..BB.BBB..BB"};
    int T = 993;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 100642;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> clipboard = {".B.BBB.BBBBBB.B.BB....B..BBBBBB..BBBBBBBBBBBBBBB.B", "..BBBB..B.BBBBBBBBB.BBBB......B.BBBB.BB.B.BBBBBBBB", "BBBBB.BBBB...BBB.BBBBB.BB.BBBBBBB.BBB.BBBB.BBB.BBB", ".BBBB.B..BB.B.BBB.BBBBBB.BB.BB.BBBBBBBBBBBBB.BBBBB", ".B.BBBBBBBBBBBBBBBBBBB..BBBBB.BB.BBBBBB.BBB.B.BBB.", "BBBB.BBB.BBBBBB.B..BB.BB.BB..BBBBBBB.BB.BBBBBBBB.B", "BBB.BBBBBBBBBBB.BB.B......BBB..BB.BBBBB.BBBBBB.BBB", "BBBBBBBB.BBBBBBB.B..B.BB.BBBBBBB.BBB.BB..BBBBBB.B.", "B.BBBB.B..BBBBBBBBBBBBBBB.BBBB..BBBB..B.B.B.BB.BBB", "BBBBBBBBBBBBBBB.BBBBBBBBBB.BBBBBBB.BBBBBBBBBBBB..B", "BB..BBB.BB.BBBBBBBBB.BBBBBBB..BBBBBBBBBBBBBBBBB..B", "BBB.BBBBBBBBBBBBBB.B.BBBBBBB.BB..B.BBBBB.BBBBBB.BB", ".BBBBBBB.B.B..BBBBBBBBBBBB..BBBBB.BBB.BBBBBBBBBBBB", "BBBBBBBBBBBB...B.BB..BB.BBBBBB.BB.BBBBB.BBBB.BBBBB", "BBBBBBB.BBB.BBBBBBB.BB.B.BB.BBBBBBBBB..BB....BBBBB", "B.B..BBBBB.BB..BBBB..BBBB.B.BBB.BBBBBBB..BBBBB.BBB", "BBBB.BBBBB.BBBB.BB..BBB.BB.BBBBBBB.BBBBBBBBBB.B.BB", ".BBB.B.BB.BB.BBBBBBBBBBBB.BBBBBBBBBBBB.BBBBBB.BBBB", "B...B.BBBBBBBBBBBBB.BBBBBB.BBB.B.BBBB.BB.BBBBBB.B.", "BBBB.BBBB.B.BB.BBBBBBBB.BBBBBBBBBBBB..BBBBBBBBBBBB", "B.BBB..BBB.BB.B..BBB.BBBBBBBB.B.B.BB..BBBBBB.BBB.B", "BB.BBBBB..BBBBBB.BB...B.BBBBBBBBB.BBBBBB.BBBBBBBBB", "BBBBBBBBBB.BBB.BBB.BB.BBB....BBB.B.BBB.B.BBBB.BBBB", ".BB...BBBBBB..BBBBBBB..BB.B.BBB.B.B.BBBBB.BB..BBBB", ".B.B..B..BBB.BBBBB.BB.BBBBB.BBBBB.B..BBB..BBBBBBBB", "BBBB..BBBBBBBBB.....BBB..BBBBBBBB..BBB.BB..BBBBBB.", "BBB.BBBB.BBBBBBBBBBBBBBBBBB...BBBBBBBBBBBBBBBB.BBB", "..BBBBBBBBBB...BB..BBBBBBBBBBB.BB.BB...BBBBB.BB.BB", "B..BBBBB.BBBB.B.BBBB.BB.BBBB.B.BBBBB.B..BBB.B.B.BB", "BB.BBBB...B.BBBBBBBBBBBBBBBBBBBBBBBBBBBB.BBBB.BBBB", "B.BBBBBBBBBBBB.B.BBBBB.BB.BBBBBBBBBBBBBBBBB.BBB.B.", "BBBBBBBB.BB.BB.B..BBBB.....BBBBBBB.BBBBBBBBBBB..B.", "BBBB.BBBBBBBB.BBB.BB.B.BBBBBBBB.BBB...BBBBBB.B.BBB", "BB.BBBBBBBB.BB.BB.BBB.BBBBBBB.BBBB.B.BBBBB.BB.BBB.", "BBBBBBBB..BBBBBBBBB.BBBBBBBBBBBBBBBBBBBBBBBB.BBBBB", "BBBBBB.B.BBBB...BBBBBBB.BBBBB.B..B.BB.BBBBBB.BBBBB", ".B.BBBB.B.B.BBBB.B..B..BB.B.BB..B.B..BB..BBBB.BBBB", "BB...BB.BBB.BBBBBB.BBBBBBB.BB.B..BBBBBBBBBBB.BBBBB", "B.BB.BBB.BBB.B.BBBBBBB..BB.BB.....B.BBBBBBBBBBBBBB", "...BBBB.B.BBBBBBBBBBBBBBBBBBBBB.BBBBBBB.BBB..BB.B.", "B..BBBBBBBBB.BBB..BBB.BB..BB.BBBB.BBB.BBBBBBBBBBBB", ".BBBB..BBB.BBBBB..BBBB.BBB.BBBBBBB..BBBBB.BB.BBBBB", "B..B.B.BB..BBBBBB.BBBBBBB.BB.BBBB.BBBBB.B.BBBBBBB.", "BBB.BBB.B....BBB.BBBBBB.BBBBBBBB..BBBBBB.BB.BBBBBB", "B.BBB.BBBBBBBBB.BB.B.BBBB.B.BB.BBB.BBBBBB.B.BB.BBB", "BB.B.B..BBB.BBBBBBBBBBBBB.B.BBBBBBBBB...B.B.BB.BBB", "B.BBBBBBBB...B.BBBBB.BBBBBBBBB..BB.BB.BBBBBBBBBBBB", "B.BBBBB.BBBBB.BBB...BBBBBBBBBBB.BB.BB.BBBBB.BBBBBB", "BBBBBBBB.BBBBBBB....BBBBBBBBBBBBB.BBBBB...BBBBBBBB", "BBB..B.BBB.BBBBBBBB.BB....BBBBB.BBBBB...BB...B..BB"};
    int T = 992;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 100543;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> clipboard = {"B.BBBB.BBBBBBBB.BBBBB.B.BBB.BBBBBBBBB.BB.B.BBBBB..", ".BBBB.BBB.BBB.BB.B..BBB.B.BBBB.BB.BB.B.BBBBBBB..BB", "BB.BBB.B.BBBBB.B.BBBBBB.B.BBBBBBBB..BBBB.BBBBBBBBB", "BBBBBB.BBB.BBB.BBBB.B.BBBBBBBB...B.B.BB..BBB.BBBBB", ".BBBBBB..BBBBBBB.BBBBBBBBB.B.BBBB.B.B.BBBBBBBBBBB.", "BB..BB.BBB..B.B.BB.BBB.BBBBB..B.BBB.BBBB.B..BB.B.B", "BB.B.BBBB.BBBBBBBB.BBBBBBBBBB..BBBBBB..BBBBB..BBB.", "B.BB..BBBBBB.BBBBBB.B.BB.BBBB.BBBBBB.BBBBB...BBBBB", "BBB..BB.BBBBBBBBB...B.BBBB.BB....BBBBBB.BB.BBB.BBB", ".B.B..B..B.BBBBBBBBBBBBB.B.B.B.BBB.BBBBB.BBB.BBBB.", "BBBB..BBBBBBBB..BBBBBBBBB..BBBBBBBBBBBBB..BB.B.B.B", "BBBBB..BBBB..B....BBB....BBB.BBBB.BB.BBBBBBB..BB.B", ".BBBB.BBBBBBBBB.B.BBBBBBB..B.BBBBBBBBBBBB..B.B.BBB", "BBBBBBBB....BBBBBBBBBB.BBB...BB..BBBBB.B...B.BBBBB", "..BBB..BB.BBB.BBBB.B.BBBBBB.B...BBBBBBBB.BBBBBBBBB", "BBB.BBB.BBBB...BB.BB..BB.BBB..B.BB..BBBBBBBBBB.B.B", "BBBBBB.BBBBBBB..BB..BBBBBBBBBB.BBB.BB.B.BBBBB.B.BB", "B.BBB...BBBBB.BBBB..BB.BBB...BBB..BBBBB.BB.B.BBB.B", "BBBBBBBBBBBB.BBBBB.BB.BBBBBBBBB.BBBBBBB..BB.BBBBBB", "B.BBBB.B.B.BBBBBBBBBBBB.BBBB.BBBBBBBBBBB.BBB..B..B", "BBBBBBBB..BB.BB.BB.BBB.BB...BB..BB.BBBBB.BBBBBBBBB", "BBBBBBB..BB.BBB.B..B..BBBBBBBBBB.BBBBBB.B..BBBB.BB", "B.B...BBBBB.B.BB.BB.BBBBBBBBBBBBBBBBBBBB.B.B.B.BBB", "BBB.BBBB.BB.BB.....BBBBB.BB.BBBBBBBBBBBBBBBB.B..BB", ".B.BBBBBBBBBBB.BBBBBBBBBBBBBBBB.BBBBBBBBBB..B.B.BB", "BBBBBB.B.B.BBBB.B.BB.BBBBBBBBBBBBBBBB.BBBBBBBBB..B", ".B.BBBBB.B..BB.BBBBBBBBB.BB..B.B.BB..B..BBBBBBB.BB", "BBBBB.B.BBBBBBBBBBB.B.B...BBB.BBBB.B.BB.BBBBB.BBBB", "B.BB.BBB.BBB..B.B.BBBBBBBB.BB.B..BBBBBBB.....BB.B.", "BBB.BBB...B.BBBBB..BBBB.BBBBBBB.BBBBBBBBBBB.BBBBBB", "BBBBBB.B.BB..BBBB...BBBBBBBB.BB.B.BBB.B.B.BB.BB.BB", "..B.BBBBBB.BBB.BBBBB.B.BB...B...B.B.BBB.B.BBBBBBBB", ".BBBBB..BBB.BBBBB.B.BBB..BB..BB.BB.B.BB.BB..BBBBBB", "BB..BBB.BBBBB.BBB.BB.BBBBBBBBBB.BBBBBB.BBBBBBBBB..", "BBBBBBB.B.BB..BBBBB.B..BBBBBBB.BBB...BBBBBBBBBBBBB", "BBBBBBBB.B.BBBBBB.BBB.BB.BB.BBB...B.BBBBBBBBB.B...", "BBB.B.BB.BBBB..BBB.BBBBB..BBBB.BBBBBBB.B.BB.BB..B.", "BBBBBBBBB.BB.BBBBBBBB.BBBBBBBB.BBBBBBBB.BB.BBBBBBB", "BBBBBB.BB.BBBBBBB.B..BB.B.BBBBBBBB.B.BB.B.BBBBBBBB", "BBB.BBBBBBBBBBBBBBB.B..B.BB.B..BBBBB.BBBB.B.BB.BBB", "BB.BBBBBBB.BBBB.BBBBBBBB..BBBBBBBBB.BBBBBBBBBBBBBB", ".BBB.BBB.B.BB.BBB.BBBBBBBBBBB.BBBBBB.....BBBB.B.B.", "BBBBB.BBBB..B.BB..BBBB.B..BBBB.B...BBBBBBBB.BB.BB.", "BBBB.BB.B.BBBBBBBBBB.BBBB..BBB.BBBBB..BBBBBBBBB.BB", "B.BB.BBBBBBB.B.BB.BB.BBBBB.BB.BBBB.B.BB.BBBBB.BBB.", "BBBBBBBBBB.B.B.BB..BBB.BB.BBB.BB.BBB..BB.BBB.BBBBB", ".BB...BBBB..B.BB.BB.BB...BB.BBBBBB.B.B.B..B.B....B", "BBBBBBBBBBBBBBB.BBBBBB..BB..BB....B.BB...BB.BBB.B.", "BBBBBB....BBBB.BBBBB.BB....B.BB.B.BBBBBB.B.BB..BB.", "BB.BBBB.BB.BBBB.BBBBBB.BBB.BBBB.BBBBBBB.BBBB.BBBBB"};
    int T = 991;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 99468;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> clipboard = {"BBBBB.BB.BBBB..BBBBBBBBB..BBB.BBBB.BBB.B..BBBBBBBB", "BBBBB..BB..B.BBBBBB.B.BBBBB.BBBBBBBBB.BBBBBBBBBBB.", "BB.BBBBBBBBBB.B.B.BBB..BBB.BBBB.BBB..BBBB..BBBBBBB", "BBBB.B.BB.BB.BBB.BB.BBB.BBBB..BB.B.BBBB..BBBBBB.B.", "BB..BBBBBBBBBBBBBBBBBB..B.BBBBBBBBBBB.BBBBB.B.B.B.", ".B.B.BBBB.B...BB..B.B..BBB..B.BBBBBB.BBBBB..B.BBB.", "BB..BB.B.BBBB.BBB.B..BB..BBBB.B..BB.BB.BBBBBB.BB.B", "BBB..B.B..B.BBB.BB.BBBB.BB.BBBBBBBB.B.BBBB.BBB.B..", "BBBBBBBBBBB.B...BBBB.BB.BBBBB..BB.B.BBBBBB.BBBBB.B", ".BBB.BB..BBBBBBBB..B.BBBB.BBBB.BB.B..BB.BB.BBBB..B", ".BBBBBBB.BBBB..BB.BBB..B.BBBBB.BBBBB.BBB.BBBBBB.BB", "BB.BB.BBBBBBBBBB.B.BBBBBBB.BBB..BB.BBBBBBBB.BB..BB", "BBBB.BBBBBBB.BBB.B..B...B.....BBBBBBBBBBBB.B..B...", "...B...BBB....BBBBBBBB.BB.BBBBBBBBBBBBBBBBBBBBB.BB", "B.BBBBBBB.BB.B.BBBB.BBBBBBBBB.B.BBB.BBBB.BBBBBB.BB", "BBBBBB....BBBBBBBBB.B.BBBB.B.BBBBB.BBB.BBB...B...B", ".BBBBBB.BB...BBB.BB.B...BBBBBBBBBBBB.B.....BBB.BB.", "BBB.BB..B.BBBBBB.B.BBBBBBBB.B.B.BBBB.BBBBBB.BBBB.B", "BBBBBBBB.BBB..BBB.BBBBBBB.BB..BBBBBBBB.BB.BB.B.BB.", "B.BBB.BB.BBB.BB.BB.B.BBBB.BBBBB.BB.BBBBBB..B.B.B..", "B.BBBBBB.BB.BBB.BBB.BBBBBBBB.BBBB.BBBB.BBBBBBBBBBB", "BBBBBBBBBBBB.BBBBBBBB.BB.BBBBBBBBBBB.BB.BBBBBBBBBB", "B.BB.B.B.B.BBBBBB.B.BBBB...BBBBBBBB..BB.BB.B.B.BBB", "..BBBBBB..B.BBBBBBBBBBBB.BBBBBBB.BBBBBBBBBBB.BBBBB", "BBBBBBBBB..BB.BBBB.B.BBBBBBBBB.B.BB.BBB...BB.B..B.", ".BBB.BBB...BBBBBBBBBBBBBBBBBBB.BBB..BBB.BBBBBB.B.B", "B.BBB.BBBBBBBB.B.B.BBBB..BBBBBBBBB..BBBBBBBB...B.B", "BBBBBBBBBBB..BBB.BBBBBBB.BB..BBB..BB.BBBBBBBBBBB.B", "BBBBBBB.BBBBBBBB.BB.BBBBBBBB.B.BBBBBB.BBBBB.BBBBBB", "BBBBBB.B.BB.BB.BBBBBBB.B.BBBBBBB.B.BBBBB.BB.B..BB.", "BBBB.B.BB.BBB..BB..BBB..B.BBBBBB.BBBBB.BBBBBBBBB.B", "BB..BBBBB....BB.B.BBBBB.BBBB.BBBBB.BBBBB.BBBBBBB.B", "BBBBBBB.BBBB..BB.BBBB.BB.B.BBBB.BBBB..B..BB.BBB.BB", "BB..B.BBBBBBBB.BBBB.BBBBB..BBBBB.B.BB.BB..BBBBBBBB", "B.BBB..BBBBBBB.BBBBBBBBBBBBB..BBBBB.BBB.B..B.B.BBB", "B..B.BBB.BB.BBB.BBBB..BBB..BBB.BBBBBBB.B.BBBB.BBBB", "BBBBBB..B.BBBB.BBB.B.BB.B.BBB.BBBBBBB.BBBBB..B.BB.", "B..BBBBB.BB..BB..BB.BBBBB.B.BBBBBBB.BBB.BBBBBB.BBB", "B.BBBBBBBBBBB.BB.BBBBBB.B.B.B.BB.B.BB.BBBBBBBBB.BB", "BB.BB.B.BBBBBB..BBBBBBBBBBBB.B.BB..BBBBBBBBBBBB..B", "BBBB.BBBBB.BBB.BBB.BBBBBBBB.B.BB.BBB.BBBBB.BBBBB..", "BBBBBBBBBBB.BBBB.BB.BBBBB.BBBBBBB.BB.BB..BBBBBBBBB", ".B.BBB..BB..B.BBB.BBB.BBB.B.BB..B.BB.B.B.BB.B.B.BB", "BB.BBBB..BBB.BB.B..BB.B.B.B.B...BB.BBB.BBBBBBBB..B", "B.BBBBBB.B.BBB...BBBB.B.BBB.BBB.BBB.BB.BBBBBBBB.BB", "B.BBBBBBBBBBB..BBB.BBBBBBBBBBBBBBBBBB.BB.BBBB...BB", "BBB..B.BBBBBBB.B..BB.BBBB.....BB.BBBBBBBBBB.BBBBBB", "BB.BB.BBB.BB..B.BBB..BB.BBBBBB.BBB.BBBBBBB.BB.BBBB", "BBBBBBBBBB.BBB.BB...BBBBBBBBBBBBBBBBBBBBB.BBBBB.B.", "BB..BBBBB..BBBBBBBB.BBBBBBBB..BBBBBBBB.B.BBBBBB..B"};
    int T = 990;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 100354;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> clipboard = {"B.................................................", "..................................................", "..................................................", "...B..............................................", "..................................................", ".....B............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".............B....................................", "..................................................", "...............B..................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".......................B..........................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int T = 5;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 22;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> clipboard = {"B.................................................", "..................................................", "..................................................", "...B..............................................", "..................................................", ".....B............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".............B....................................", "..................................................", "...............B..................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".......................B..........................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    int T = 10000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 10023;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> clipboard = {"B.................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".......................B..........................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................B"};
    int T = 25;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 73;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> clipboard = {"B.................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".......................B..........................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................B"};
    int T = 26;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 75;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> clipboard = {"B.................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".......................B..........................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................B"};
    int T = 27;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 76;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> clipboard = {"B.................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................B"};
    int T = 48;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 96;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> clipboard = {"B.................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................B"};
    int T = 49;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 98;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> clipboard = {"B.................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................B"};
    int T = 50;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 99;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> clipboard = {"..........B..........", ".........B.B.........", "........B...B........", ".......B.....B.......", "......B..B.B..B......", ".....B...B.B...B.....", "....B...........B....", "...B...B.....B...B...", "..B.....BBBBBB....B..", ".B..........BB.....B.", "BBBBBBBBBBBBBBBBBBBBB"};
    int T = 1000000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 21000000071;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> clipboard = {"B.................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................B"};
    int T = 4;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> clipboard = {"..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBB.........BBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B.B..BB..B.B.B.B.B"};
    int T = 1000000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 94000002131;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> clipboard = {"BBBBBBB", "BBBBBBB"};
    int T = 1000000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 8000000006;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> clipboard = {"BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......BBBBBBBBB......BBBBBBBBBBBBBBBBBBBB"};
    int T = 1000000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 98000002254;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> clipboard = {"BB.", ".B."};
    int T = 1000000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 2000000001;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> clipboard = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    int T = 1000000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 41000000076;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> clipboard = {"BBB"};
    int T = 1000000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 3000000000;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> clipboard = {"BBB"};
    int T = 2;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> clipboard = {"..........B..........", ".........B.B.........", "........B...B........", ".......B.....B.......", "......B..B.B..B......", ".....B...B.B...B.....", "....B...........B....", "...B...B.....B...B...", "..B.....BBBBBB....B..", ".B..........BB.....B.", "BBBBBBBBBBBBBBBBBBBBB"};
    int T = 807000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 16947000071;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> clipboard = {"..B", "B..", "BB."};
    int T = 1000000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 3000000001;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> clipboard = {"."};
    int T = 1000000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> clipboard = {"......", ".B....", "......", "...B..", "......", ".....B"};
    int T = 123000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 123004;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> clipboard = {"..........B.......B..", ".........B.B.........", "................B....", ".....................", ".B.......B.B..B......", ".........B.B.........", "..B........BBB....B..", "............B......B."};
    int T = 1000000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 11000000011;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> clipboard = {"B....", ".BBBB", ".BBBB", ".BBBB", ".BBBB"};
    int T = 1000000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 7000000010;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> clipboard = {"B.", ".B"};
    int T = 5;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> clipboard = {"...B...", "..B.B..", ".B...B.", "B.....B"};
    int T = 1;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> clipboard = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    int T = 1000000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 99000002401;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<string> clipboard = {"..........B....................B..........", ".........B.B..................B.B.........", "........B...B.................B.B.........", ".......B.....B................B.B.........", "......B..B.B..B...............B.B.........", ".....B...B.B...B..............B.B.........", "....B...........B.............B.B.........", "...B...B.....B...B............B.B.........", "..B.....BBBBBB....B...........B.B.........", ".B..........BB.....B..........B.B.........", "BBBBBBBBBBBBBBBBBBBBB.........B.B.........", "BBBBBBBBBBBBBBBBBBBBB.........B.B.........", "BBBBBBBBBBBBBBBBBBBBB.........B.B.........", "BBBBBBBBBBBBBBBBBBBBB.........B.B.........", "BBBBBBBBBBBBBBBBBBBBB.........B.B.........", "BBBBBBBBBBBBBBBBBBBBB.........B.B.........", "BBBBBBBBBBBBBBBBBBBBB.........B.B.........", "BBBBBBBBBBBBBBBBBBBBB.........B.B.........", "BBBBBBBBBBBBBBBBBBBBB.........B.B.........", "BBBBBBBBBBBBBBBBBBBBB.........B.B.........", "BBBBBBBBBBBBBBBBBBBBB.........B.B........."};
    int T = 1000000000;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 52000000318;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<string> clipboard = {"..........B..........", ".........B.B.........", "........B...B........", ".......B.....B.......", "......B..B.B..B......", ".....B...B.B...B.....", "....B...........B....", "...B...B.....B...B...", "..B.....BBBBBB....B..", ".B..........BB.....B.", "BBBBBBBBBBBBBBBBBBBBB", "BBBBBBB.......B.B.BB."};
    int T = 999999999;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 22000000059;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<string> clipboard = {"B..", "...", "..B"};
    int T = 2;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<string> clipboard = {"..........B..........", ".........B.B.........", "........B...B........", ".......B.....B.......", "......B..B.B..B......", ".....B...B.B...B.....", "....B...........B....", ".......B.....B...B...", "........BBBBBB....B..", ".B..........BB.....B.", "BBB.....B....BBBB...B"};
    int T = 544456036;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 7622384549;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<string> clipboard = {"..........B..........", ".........B.B.........", "........B...B........", ".......B.....B.......", "......B..B.B..B......", ".....B...B.B...B.....", "....B...........B....", ".......B.....B...B...", "........BBBBBB....B..", ".B..........BB.....B.", "BBB.....B....BBBB...B"};
    int T = 14;
    PastingPaintingDivTwo* pObj = new PastingPaintingDivTwo();
    clock_t start = clock();
    long result = pObj->countColors(clipboard, T);
    clock_t end = clock();
    delete pObj;
    long expected = 241;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22849803&rd=15184&pm=12318
********************************************************************************
#include <cstdio> 
#include <iostream> 
#include <algorithm> 
#include <functional> 
#include <map> 
#include <vector> 
#include <set> 
#include <queue> 
#include <cmath> 
#include <cstdlib> 
#include <cctype> 
#include <sstream> 
using namespace std; 
 
#define MP make_pair 
#define SS size() 
#define PB push_back 
#define ff(a, b) for (int a = 0; a < int(b); ++a) 
#define f1(a, b) for (int a = 1; a < int(b); ++a) 
#define ii(n)    ff(i, n) 
typedef long long LL; 
typedef pair<int, int> pii; 
 
#define MOD (0LL) 
 
 
set<pair<int, int> > black; 
 
class PastingPaintingDivTwo { 
public: 
 
long long countColors(vector <string> clipboard, int T) { 
    int N = min(55, T); 
    int last_updated = 0; 
    ii (N) { 
        last_updated = 0; 
        ff (y, clipboard.SS) 
        ff (x, clipboard[0].SS) { 
            if (clipboard[y][x] == 'B') { 
                int ix = x + i; 
                int iy = y + i; 
 
                if (black.count(MP(ix, iy)) == 0) { 
                    ++last_updated; 
                    black.insert(MP(ix, iy)); 
                } 
            } 
        } 
    } 
    return black.SS + LL(T - N)*last_updated; 
} 
};

********************************************************************************
*******************************************************************************/