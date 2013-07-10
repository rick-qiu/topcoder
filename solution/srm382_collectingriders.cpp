/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8319
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

class CollectingRiders {
public:
    int minimalMoves(vector<string> board);
};

int CollectingRiders::minimalMoves(vector<string> board) {
    int ret;
    return ret;
}


int test0() {
    vector<string> board = {"...1", "....", "2..."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
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
    vector<string> board = {"........", ".1......", "........", "....3...", "........", "........", ".7......", "........"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {"..", "2.", ".."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {".1....1."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
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
    vector<string> board = {"9133632343", "5286698232", "8329333369", "5425579782", "4465864375", "8192124686", "3191624314", "5198496853", "1638163997", "6457337215"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {"1..", ".1.", "..."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
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
    vector<string> board = {"1...1", "....."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {"1111111111", "1111111111", "1111111111", "1111111111", "1111111111", "1111111111", "1111111111", "1111111111", "1111111111", "1111111111"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 266;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {"..45.....5", ".......5..", ".........2", "3.9......1", ".....2....", "..1.......", "......68..", "....1..9..", "..........", "......5..7"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {"..........", "1....4.7..", "9.2.......", "....3.9...", "......2.4.", "3......9..", "......8...", ".....7..7.", "...8....5.", ".........."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {".1.....2..", "6.8......8", "....6.7...", "..........", "9.........", "....16....", "....1.....", "..7.....2.", "..86......", "...1......"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {".........5", "3.........", ".....2.578", "..4...1...", ".....72...", ".2........", "...41....9", ".........5", "64..9..499", "...4.....9"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {".........2", ".16.1..6..", "........34", ".....6....", "..21.3....", "2......9..", "78........", "23.4......", ".....7....", "4........."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {".....31396", ".37.......", "..6.....8.", ".8........", "........3.", "......3..8", ".........2", ".......4..", "...9....7.", "...17.4..."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {"281..5....", ".99.....8.", "....26.5..", "598....1..", "....6.....", "........9.", "...9.2...6", "..2.......", "..21...8..", ".4..1.6..."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {"......7...", "...49...5.", "..........", ".7........", "..19.9....", "..........", ".43.572.9.", "....3.....", "6.........", "2....54.1."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {"..........", "..9..9....", "..........", "4.3.......", "......7...", "...1.3....", "....2.6..2", "7......9.8", "..........", "..7.4....2"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {"...7.7....", ".5........", "..6..63...", "....9.....", ".4...6....", "..8....5..", "6..6.9...7", "....91.6.6", "...6.7..28", ".........."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {"213.9.3.87", "..8.1.2..4", "..5.8.81.2", "9.3..2.2..", "...175.4..", ".1.....65.", ".5.1...221", "....4...86", ".7367.1...", "..74....8."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {"7.82.27..5", "..9.735.56", "..924..9..", "....86744.", ".94.47.6..", "13.8...145", ".7137.7431", ".3.8664...", "355247.76.", "5...538..3"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {".7546.58.8", "27.7..5.7.", "6..1....8.", "33.72.5.83", "..1..3.42.", "5978998.68", "...1..99..", ".....9.7..", "...2.635.6", ".23558.8.1"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"73...971..", "1..888....", ".6532.2..4", "...4....24", "..71.27.6.", "......3...", "..6...6333", "8377..919.", "2.99276..7", "...15.4768"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {"162....973", "659....2.1", "7....2.68.", "1.447973.4", "7.49472..7", ".26.55.8..", "31..496.3.", "3.....4539", ".8.6....65", "39.4..1.37"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 67;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"241.6.21..", ".1.8422...", ".11...47..", ".....13...", ".542.5..19", "73..86.6.1", "86.5..8.8.", "88..33...2", ".6..7...6.", "..6....89."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {"4652.1..1.", "3.6...8.16", ".1852.2..7", "3.5..73515", "467.1716..", ".7338895..", ".54458.4..", "....14..48", "4...4.7..3", "..24...7.4"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"99246.938.", "7.1574..26", "...1.2..8.", "..1..67.4.", "27..585499", "...9298...", "4518.4.6.6", "4.52...64.", "..7.1..214", ".634.85748"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {"13794654.3", ".5..8....5", ".4165.7239", "...571...2", "1..7.326..", "3.9.....23", "....556.6.", ".7.1.5.67.", "5.7.3.272.", ".....7...8"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {"4..48.1...", "2..276...5", "....5.38.5", ".4165.63..", "1.44..18.2", ".12.8.5..4", "..8.4.6752", "..........", "2.3.8....3", "56.1..75.6"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {"15547.4317", "439872379.", ".782452356", "3968.92516", "1652562..8", "3585131598", "68141..218", "7599185894", ".327957657", "3518387255"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {"3996234424", "4442382957", "2.6.1.6327", "728.679314", "1647466885", "9.5.572729", ".239875365", "3543553254", "7333413824", "97.2773..8"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {"5793558.43", "42.7259878", "33.2554566", "86569843.3", "7745263213", "2.8..45715", "177167.5.4", "5344981581", "9853.57573", "14.4613.26"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {"8237388739", "86.9123298", "9136821564", "3.2.8.4.87", "2223443815", "4336488723", "4893881933", "82.27.9363", "72236.17.1", "6.324..912"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {"6879226641", "7.2177511.", ".3387679.4", "1.4866673.", "4266184392", "..85531144", "499.436423", "1976252338", "..81216952", "864413.322"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 115;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {"1313425.8.", "127514713.", "8464478343", "61.9112319", "26.5381138", "5996564485", "6418..7597", "1467249846", "916.71.63.", "5713.12355"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {"679695.26.", "4636447929", "2685.22531", "4965253539", "2297915622", "3653426524", "633.91.385", "579.646697", "36447851.6", "549378.179"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {"27885.4823", "4273918.36", "3466117894", "9295268811", "974596897.", "3348976659", "53994662.1", "6997.53193", "6.64479139", "3.36765344"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 109;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"3775657264", "7285935211", "1237.25542", "7889337885", "65.7455494", "5.2.534946", "9216291322", "8325399592", "5633212646", "6856953597"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {"811533.1.4", "8612211243", "3828699715", "6845791.4.", "8756427734", "398..21672", "2983968918", "8518958654", "7843167.78", "1324236265"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {"..........", "......1...", "....1.....", "......1..1", "..........", "..........", ".....1....", "..........", "..........", ".....1...."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {"........11", "..........", "1.........", "..........", ".1........", "..........", "..........", "..........", "..........", "...1......"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {"..........", "..........", "..........", "..........", "..........", "..........", "..........", "..........", "........1.", ".........."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {"..........", "......1...", "..........", "..........", "....1.....", "..........", "..........", "...1....1.", "..........", ".........."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {"..........", "1.........", "..........", "..........", "..........", "..........", "......1...", "..........", "..........", "1........."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {"..........", "..........", "..........", "1.........", "..........", "..1..1....", "..........", ".....1....", "..........", ".........."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> board = {"..........", "..........", "......1...", "...1......", "..........", "..........", "..........", "..1.......", "..........", "....1....."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {"..........", "..1.......", "1.........", "....1....1", "........1.", "....1.....", ".......1..", "..........", ".....1....", ".........."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {"...1......", "......1...", "..........", "..........", "..........", "..........", ".........1", "..........", ".......1.1", "......1..."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> board = {"..........", "..........", "11........", "..........", "..........", ".........1", "..........", "..........", "..........", ".......1.."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> board = {"..........", ".2....2...", "......2...", "1.........", "...2.1....", "...1......", "..........", ".......21.", "..........", ".........."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> board = {"...3.1.3..", "....2.321.", "..2...3...", "..32......", ".......1..", "...13.....", "..........", "......2.3.", "..21..32..", "......3..."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> board = {"..1.......", "...1......", "....1.....", "3......2..", ".2........", "..........", ".....1....", ".3.....2..", "2......1..", ".1..3....."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> board = {"..2.1.1...", "2..3...1..", "..........", "........3.", "3......1..", ".....2....", "2........1", ".....1.3..", "..........", "......2.1."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> board = {"...3......", ".1..32...2", "..2.......", "...1.12...", "2..1.2.2.1", ".......321", "1.......1.", ".....1....", ".3...2....", ".1...1...."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> board = {"..........", "..3....1..", "..3.1.....", "1.3.3.....", "..........", "..........", "3......1..", "....2...3.", ".....2....", ".........."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> board = {"..........", "...2......", "........1.", ".....1..1.", "3......313", ".2...2....", ".........1", "..2...2.13", "..........", "....13...."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> board = {".......3..", ".2...2....", ".3...3...3", ".....3....", ".3.....3..", ".....1....", ".11.....3.", "..1...2.1.", "........2.", "...1......"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> board = {".....3.1.3", "...22..12.", "........22", "1..3......", "3........2", ".....3....", "1.........", "..........", "..........", "..2..2...."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> board = {"3.........", "........3.", "2.2.....2.", ".....3....", "....3....1", ".3.....33.", "...1......", ".........3", "..2....3..", "..12.2...."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> board = {"1.", "..", "..", "..", "1."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> board = {"1.", "..", "..", "..", "..", "1."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> board = {"1....1", "......"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> board = {"........", "...1.1..", "........", "........", "........", "...1.1..", "........", "........"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> board = {"9133632343", "5286698232", "8329333369", "5425579782", "4465864375", "8192124686", "3191624314", "5198496853", "1638163997", "6457337215"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> board = {"...", ".99", "..."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> board = {"232..11123", "323.323232", "23.1232323", "3232323232", "121.12121.", "3232323232", "1111653278", "21326.5487", "1914181613", "2323232323"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 139;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> board = {".73363234.", "522367.654", "8323243369", "54..576782", ".578564375", "8194364686", "3129865557", "5134754353", "1356733997", ".87654551."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 103;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> board = {"1...1", ".....", ".....", ".1.1.", "....."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> board = {".1111"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> board = {"123", "4.5", "678"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> board = {"..........", ".........1", "..........", "..........", "..........", "..........", "..........", "..........", "..........", "9........."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> board = {"1..", "...", "..1"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> board = {"1..", ".1.", "..1"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> board = {"..1..", "1...1"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> board = {"..", "29", ".."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> board = {"1111111111", "1111111111", "1111111111", "1111111111", "1111111111", "1111111111", "1111111111", "1111111111", "1111111111", "1111111111"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 266;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> board = {"1111111111", "1111111111", "1111111111", "1111111111", "1111111111", "1111111111", "2222222222", "2222222222", "2222222222", "1111111111"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 233;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> board = {"1.", ".1"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> board = {"1....1", "..1..."};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> board = {"9..9"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> board = {"1111"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> board = {"99"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> board = {"1...1", ".....", "1...1"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> board = {"1.1", "...", "..1"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> board = {".111"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> board = {"999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999989999", "999999999", "999999991", "999999999"};
    CollectingRiders* pObj = new CollectingRiders();
    clock_t start = clock();
    int result = pObj->minimalMoves(board);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10597114&rd=10805&pm=8319
********************************************************************************
#include <cassert> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <cmath> 
#include <vector> 
#include <iostream> 
#include <sstream> 
#include <algorithm> 
#include <map> 
#include <set> 
#include <list> 
#include <deque> 
#include <queue> 
using namespace std; 
 
#define FOR(i,a,b)  for(int i=(a);i<(b);++i) 
#define REP(i,a)    FOR(i,0,a) 
#define ZERO(m)     memset(m,0,sizeof(m)) 
#define ALL(x)      x.begin(),x.end() 
#define PB          push_back 
#define S           size() 
#define LL          long long 
#define LD          long double 
#define MP          make_pair 
#define X           first 
#define Y           second 
#define VC          vector 
#define VI          VC<int> 
#define VS          VC<string> 
 
 
class CollectingRiders {public:int minimalMoves(vector <string> mp) { 
  int sx = mp[0].S; 
  int sy = mp.S; 
  int mn = 1<<20; 
  int vs[50][50]; 
  REP(y,sy) REP(x,sx) { 
    ZERO(vs); 
    queue<int> q; 
    q.push(x); q.push(y); q.push(0); 
    int tt = 0; 
    int us = 0; 
    while (!q.empty()) { 
      int ax = q.front(); q.pop(); 
      int ay = q.front(); q.pop(); 
      int at = q.front(); q.pop(); 
      if (vs[ax][ay]) continue; 
      vs[ax][ay] = 1; 
      if (mp[ay][ax] != '.') tt += (at + (int)mp[ay][ax] - '0' - 1) / (int)(mp[ay][ax] - '0'), us++; 
      FOR(dx,-2,3) FOR(dy,-2,3) if (dx * dy == 2 || dx * dy == -2) { 
        int nx = dx + ax; 
        int ny = dy + ay; 
        if (nx >=0 &&ny<sy&&ny>=0&&nx<sx) q.push(nx),q.push(ny),q.push(at+1); 
      } 
    } 
    REP(yy,sy) REP(xx,sx) if (mp[yy][xx] != '.') us--; 
    if (us == 0) mn <?= tt; 
  } 
 
  return mn == (1<<20) ? -1 : mn; 
     
} 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/