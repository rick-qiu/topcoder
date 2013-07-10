/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9857
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

class RussianCheckers {
public:
    vector<string> listMoves(vector<string> board, string turn);
};

vector<string> RussianCheckers::listMoves(vector<string> board, string turn) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> board = {".b.b.b.b", "b.b.b.b.", ".b.b.b.b", "........", "........", "w.w.w.w.", ".w.w.w.w", "w.w.w.w."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a3-b4", "c3-b4", "c3-d4", "e3-d4", "e3-f4", "g3-f4", "g3-h4"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> board = {".......B", "......w.", "........", "........", ".......W", "........", "...W.W..", "........"};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"h8:c3:e1:g3", "h8:d4:g1"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {"........", "........", "...b....", "........", "...b.b..", "..w.....", ".....w..", "........"};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c3:e5:c7", "c3:e5:g3"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {"........", "..b.....", ".w......", "......B.", "........", "........", "........", "........"};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b6:d8:h4"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {"........", "......w.", ".B.b....", "b...w...", "...W...w", "B.....w.", ".......w", "w.w.w.w."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d4:a7", "e5:c7"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {".b.b...b", "..b.b.B.", ".b.b.b.B", "b.b.B...", ".....B.b", "..b.b.B.", ".......W", "......B."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a5-b4", "b8-a7", "c3-b2", "c3-d2", "c5-b4", "c5-d4", "e3-d2", "e3-f2", "e5-d4", "f4-g5", "f6-g5", "g1-f2", "g3-e1", "g3-f2", "g7-f8", "h6-g5"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {".W.W.W..", "W.......", "........", "W.......", ".......W", "....W...", ".W.W...W", "..W...W."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a5-b4", "a5-b6", "a5-c3", "a5-c7", "a7-b6", "a7-c5", "a7-d4", "b2-a1", "b2-a3", "b2-c3", "b2-d4", "b2-e5", "b2-f6", "b2-g7", "b2-h8", "b8-c7", "b8-d6", "b8-e5", "b8-f4", "b8-g3", "d2-b4", "d2-c3", "d2-e1", "d8-b6", "d8-c7", "d8-e7", "d8-f6", "d8-g5", "e3-b6", "e3-c5", "e3-d4", "e3-f2", "e3-f4", "e3-g5", "e3-h6", "f8-a3", "f8-b4", "f8-c5", "f8-d6", "f8-e7", "f8-g7", "f8-h6", "g1-f2", "h2-c7", "h2-d6", "h2-e5", "h2-f4", "h2-g3", "h4-e1", "h4-e7", "h4-f2", "h4-f6", "h4-g3", "h4-g5"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {".B.B....", "B.b.W...", ".B.....W", "........", ".w.W.W..", "....B.b.", ".w.W.W.B", "B......."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a1:c3:a5", "a1:c3:e1", "a1:c3:e5", "a1:c3:f6", "a1:c3:g7", "a1:c3:h8", "d8:f6:c3:a5", "d8:f6:c3:e1", "e3:c1:a3:c5:e3:g1", "e3:c1:a3:c5:e3:g5", "e3:c1:a3:c5:f8", "e3:c1:a3:d6:f8", "e3:c5:a3:c1:e3:g1", "e3:c5:a3:c1:e3:g5", "e3:c5:f8", "e3:g1", "e3:g5", "g3:e1:c3:a5", "g3:e1:c3:e5:g3", "g3:e5:c3:a5", "g3:e5:c3:e1:g3", "g3:e5:c3:e1:h4"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {".b......", "....W.b.", "...b.b..", "W.......", "...b.b..", "........", ".b.b.b.W", "..W...W."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a5:e1:g3:e5:c3:a1", "a5:e1:g3:e5:c7", "c1:a3", "c1:e3:a7", "c1:e3:b6", "c1:e3:c5", "c1:e3:h6:f8", "e7:b4:e1:g3:e5:c3:a1", "e7:b4:e1:h4:d8", "e7:b4:e1:h4:e7", "e7:c5:e3:g5:d8", "e7:c5:e3:g5:e7", "e7:c5:e3:h6:f8", "e7:g5:e3:c5:f8:h6", "e7:h4:e1:b4:f8:h6:e3:a7", "e7:h4:e1:b4:f8:h6:e3:b6", "e7:h4:e1:b4:f8:h6:e3:c5", "e7:h4:e1:c3:a1", "e7:h4:e1:c3:e5:c7", "e7:h4:e1:c3:e5:g3", "g1:e3:a7", "g1:e3:b6", "g1:e3:c5", "g1:e3:h6:f8", "h2:e5:c3:a1", "h2:e5:c3:e1:g3", "h2:e5:c3:e1:h4", "h2:e5:c7"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {"...b....", "....w.w.", "...B.w..", "W...W.W.", ".W.W...W", "......w.", ".W.w...W", "W......."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d6:a3:c1:e3:c5:f8:h6:f4:b8", "d6:a3:c1:e3:c5:f8:h6:f4:c7", "d6:a3:c1:e3:c5:f8:h6:f4:d6", "d6:a3:c1:e3:h6:f8:c5:e3", "d6:a3:c1:e3:h6:f8:c5:f2", "d6:a3:c1:e3:h6:f8:c5:g1", "d6:a3:c1:e3:h6:f8:d6:f4", "d6:a3:c1:f4:d6:f8:h6:e3:a7", "d6:a3:c1:f4:d6:f8:h6:e3:b6", "d6:a3:c1:f4:d6:f8:h6:e3:c5", "d6:a3:c1:f4:h6:f8:c5:e3", "d6:a3:c1:f4:h6:f8:c5:f2", "d6:a3:c1:f4:h6:f8:c5:g1", "d6:a3:c1:f4:h6:f8:d6:f4", "d6:f4:c1:a3:c5:e3:h6:f8:c5", "d6:f4:c1:a3:c5:e3:h6:f8:d6", "d6:f4:c1:a3:c5:f8:h6:e3:a7", "d6:f4:c1:a3:c5:f8:h6:e3:b6", "d6:f4:c1:a3:c5:f8:h6:e3:c5", "d6:f4:c1:a3:d6:f8:h6:e3:a7", "d6:f4:c1:a3:d6:f8:h6:e3:b6", "d6:f4:c1:a3:d6:f8:h6:e3:c5", "d6:f4:h6:f8:c5:a3:c1:e3:a7", "d6:f4:h6:f8:c5:a3:c1:e3:b6", "d6:f4:h6:f8:c5:a3:c1:e3:c5", "d6:f4:h6:f8:c5:e3:c1:a3:c5", "d6:f4:h6:f8:c5:e3:c1:a3:d6", "d6:f4:h6:f8:d6:a3:c1:e3:a7", "d6:f4:h6:f8:d6:a3:c1:e3:b6", "d6:f4:h6:f8:d6:a3:c1:e3:c5", "d6:f8:h6:e3:c1:a3:c5:e3", "d6:f8:h6:e3:c1:a3:c5:f2", "d6:f8:h6:e3:c1:a3:c5:g1", "d6:f8:h6:e3:c1:a3:d6:f4", "d6:f8:h6:e3:c5:a3:c1:f4:b8", "d6:f8:h6:e3:c5:a3:c1:f4:c7", "d6:f8:h6:e3:c5:a3:c1:f4:d6", "d6:f8:h6:f4:c1:a3:c5:e3", "d6:f8:h6:f4:c1:a3:c5:f2", "d6:f8:h6:f4:c1:a3:c5:g1", "d6:f8:h6:f4:c1:a3:d6:f4", "d6:f8:h6:f4:d6:a3:c1:e3:a7", "d6:f8:h6:f4:d6:a3:c1:e3:b6", "d6:f8:h6:f4:d6:a3:c1:e3:c5"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {"........", "........", "...W....", "..b.b...", "........", "..b.b...", "........", "........"};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d6:b4:d2:f4:b8", "d6:b4:d2:f4:c7", "d6:b4:d2:f4:d6", "d6:f4:d2:b4:d6", "d6:f4:d2:b4:e7", "d6:f4:d2:b4:f8"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {"........", "w.W.W.w.", ".....B..", "B.w.W.W.", ".....B..", "w.W.w.W.", "........", "..W....."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a5:d8", "a5:e1:h4", "f4:d2:b4:d6:b8", "f4:d2:b4:d6:f4:h2", "f4:d2:b4:d6:f4:h6:f8:d6:b8", "f4:d2:b4:d6:f8:h6:f4:d6:b8", "f4:d2:b4:d6:f8:h6:f4:h2", "f4:d6:b4:d2:f4:h2", "f4:d6:b4:d2:f4:h6:f8:d6:b8", "f4:d6:b4:e1:h4", "f4:d6:b8", "f4:d6:f8:h6:f4:d2:b4:d6:b8", "f4:d6:f8:h6:f4:h2", "f4:h2", "f4:h6:f8:d6:b4:d2:f4:d6:b8", "f4:h6:f8:d6:b4:d2:f4:h2", "f4:h6:f8:d6:b4:e1:h4", "f4:h6:f8:d6:b8", "f4:h6:f8:d6:f4:d2:b4:d6:b8", "f4:h6:f8:d6:f4:h2", "f6:d4:a1", "f6:d4:b2", "f6:d4:b6:d8:f6:h4:e1:b4", "f6:d4:b6:d8:f6:h4:f2:d4:a1", "f6:d4:b6:d8:f6:h4:f2:d4:b2", "f6:d4:b6:d8:f6:h8", "f6:d4:f2:h4:f6:d8:b6:d4:a1", "f6:d4:f2:h4:f6:d8:b6:d4:b2", "f6:d4:f2:h4:f6:h8", "f6:d8:b6:d4:a1", "f6:d8:b6:d4:b2", "f6:d8:b6:d4:f2:h4:f6:d4:a1", "f6:d8:b6:d4:f2:h4:f6:d4:b2", "f6:d8:b6:d4:f2:h4:f6:h8", "f6:d8:b6:d4:f6:h4:e1:b4", "f6:d8:b6:d4:f6:h4:f2:d4:a1", "f6:d8:b6:d4:f6:h4:f2:d4:b2", "f6:d8:b6:d4:f6:h8", "f6:h4:e1:b4:d6:b8", "f6:h4:e1:b4:d6:f8:h6", "f6:h4:f2:d4:a1", "f6:h4:f2:d4:b2", "f6:h4:f2:d4:b6:d8:f6:d4:a1", "f6:h4:f2:d4:b6:d8:f6:d4:b2", "f6:h4:f2:d4:b6:d8:f6:h8", "f6:h4:f2:d4:f6:d8:b6:d4:a1", "f6:h4:f2:d4:f6:d8:b6:d4:b2", "f6:h4:f2:d4:f6:h8", "f6:h8"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {"........", "........", "...W....", "....b...", "...b....", "........", "...b.b..", "........"};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d6:f4:c1", "d6:g3:e1:a5", "d6:g3:e1:b4", "d6:g3:e1:c3"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {".b.W.B..", "b.W.B.W.", ".b.b.W..", "w...b...", ".W.w.B..", "b.....b.", ".w.B.b..", "........"};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b4:e1"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {".B.b.W.W", "w.b.b.w.", ".W.w...w", "w.b.w.W.", ".W.B.w..", "w.W.W.B.", ".B.b.b.w", "w.W.w.W."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"e5-f6", "g5-f6", "g5-h4"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {".b.W....", "W.w.W.W.", "...W.b.b", "w.w.W.W.", ".w.w.W.W", "W.W.w.W.", ".w.w.W.W", "w.w.W.w."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a5-b6", "a7-b6", "c5-b6", "e7-f8", "g7-f8", "g7-h8"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {".W.W.W.W", "..W.B.w.", ".W.W.w.W", "W.W.w.B.", ".b.w.w.W", "W.W.W.W.", ".W.B.w..", "B.W...W."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d2-e1"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {"...W....", "w.w...b.", ".W.W.b.w", "W...w...", ".W.W.B..", "..W.W.B.", ".B.B.w.w", "w.W.W..."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b2-a3", "f4-g5", "f6-g5", "g3-h4"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {".b.b....", "W.B.b.w.", ".b.b...w", "w.b.b.w.", "...b.b.w", "b.b.b.b.", ".....W.B", "....B.B."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a3-b2", "c3-b2", "c3-d2", "c5-b4", "e1-d2", "e3-d2", "e7-f6"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {".B.....B", "b...w.b.", ".b.b.b.B", "B.b.B.b.", ".w.b...b", "..B.B...", ".B.B.w.b", "..B.w..."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"e7-d8", "e7-f8", "f2-g3"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {"...b.W..", "W.b.b.w.", ".w.B.B.b", "B.B.W...", ".b.b.w.B", "b.B.b...", ".B.b.W.B", "W.B....."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a7-b8", "f2-e1", "f2-g1", "f2-g3", "f4-g5", "g7-h8"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {".b.b.b.b", "B.b.b.w.", ".b.b.w.W", "B.b.b.b.", ".b.b.W.B", "B.B.B.b.", ".b.b.b.b", "..B.B..."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b2-a1", "f2-g1", "h2-g1"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {".B.B.W.B", "w.W.B.B.", ".W.W.W.B", "W.W.W.B.", ".B.B.W.B", "B.B.B.B.", ".w.W...W", "B...W.B."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d2-c1", "e1-f2"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"...B.b..", "W.w.w.w.", ".b.W.w.w", "w.w.w.w.", ".w.w.W..", "W...w...", ".W.W...w", "W.B.w.w."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a7-b8", "b2-c3", "c7-b8", "d2-c3", "e1-f2", "f4-g3", "g1-f2", "g7-h8", "h2-g3"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {".b.b....", "w.w.w.w.", ".w.....b", "w.B.w.w.", ".b.B.b.b", "w.b.w.w.", ".b.w....", "B.B.w.w."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"e1-f2", "e5-d6", "e5-f6", "e7-f8", "g1-f2", "g1-h2", "g5-f6", "g7-f8", "g7-h8"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {".W.b.B.b", "b...b.b.", ".W.B.W.W", "b.B.b...", ".b.B.b.b", "B.W.b...", ".W.B.B.B", "B.B.B..."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b6-c7", "b8-c7", "f6-g5", "h6-g5"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {".B.W.b.B", "w.w.w.b.", ".W.B.B.B", "B.w.W.b.", ".B.w.b.b", "W.b.w.B.", ".w.B.B.B", "B...w..."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d2-c1", "f2-g1", "h2-g1"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {".B.b.W..", "w.w.B.w.", ".W.B.w.b", "w.B.B.w.", ".w.w.W.w", "w.B.w.B.", ".B.B.W.B", "w.W.B.W."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"g7-h8"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {"...B.B..", "W.B.B...", "...B...B", "B.b.B.B.", ".B...B.W", "......b.", "........", "..B...B."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a5-b6", "b4-a3", "b4-c3", "b4-d2", "b4-e1", "c1-a3", "c1-b2", "c1-d2", "c1-e3", "c5-d4", "c7-b6", "c7-b8", "e5-a1", "e5-b2", "e5-c3", "e5-d4", "e5-f6", "e5-g7", "e5-h8", "e7-f6", "f4-d2", "f4-e3", "f8-g7", "g1-d4", "g1-e3", "g1-f2", "g1-h2", "g3-f2", "g3-h2", "g5-f6", "h6-g7"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {"...W.b.W", "B.W.b.B.", ".w.B.W.W", "W.W.W.W.", ".W.w.w.w", "B.w.W.W.", ".w.w.b.w", "w.B.W.W."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c7-b8"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {".B.b.W.W", "w...b.b.", ".b...B.W", "w.w...W.", "...w.b.w", "b.w...w.", ".W.w.W.W", "w.w.B.w."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b8-c7", "b8-d6", "b8-e5", "d8-c7", "e7-d6", "f4-e3", "f6-e5"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {".b.b.B.B", "w.B.b.B.", ".B.b.B.B", "b.B.w.B.", ".b.b.w.w", "b...b.w.", ".b.b.B..", "B.w.B.B."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b4-c3", "d4-c3", "g1-h2"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {".B......", "....W...", ".....w..", "........", ".W......", "....w...", "........", "..w....."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b4-a3", "b4-a5", "b4-c3", "b4-c5", "b4-d2", "b4-d6", "b4-e1", "c1-b2", "c1-d2", "e3-d4", "e3-f4", "e7-c5", "e7-d6", "e7-d8", "e7-f8", "f6-g7"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {"...B.B.W", "b.B.B.w.", ".w.b.W.b", "w.w.B.B.", ".B.w.b.w", "B.B.b.w.", ".w.b.w.w", "w.B.w.W."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c7-b8"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {".....B.B", "w.W...b.", ".w.w.w.W", "w.w.b.W.", "...b.w.W", "..B.b.b.", ".b.b.B.w", "W.B.B.w."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c3-b4", "f8-e7"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {".W.W...B", "w.B.b.B.", ".B.B.w.W", "..B.B.W.", ".w.W.w.B", "W.w.b.B.", ".w.w.b..", "w.B.W.B."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b6-a5", "g1-h2", "g3-h2", "g7-f8"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {".b.b.W.B", "b.b.b.B.", ".b.b.b.W", "W.W...W.", ".b.W.B.b", "..w.W.b.", ".W.W.B..", "w.W.W.w."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b4-a3", "d6-e5", "f4-e5", "f6-e5", "g3-h2"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {"...b.W..", "..b.W.b.", "...w.W..", "W.w.B.W.", ".W.w.W.B", "w.w.W.B.", ".w.w.w.w", "W.W.B.w."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c7-b6", "g7-h6"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {".B.b.B.b", "B.W.W.B.", ".B.b.b.W", "..B.b.B.", ".B.B.B.W", "W.w.W.B.", ".w.w.w..", "W.w.B..."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b4-a5", "b6-a5", "g3-h2"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {".B...B.b", "b.b.b.B.", ".b.B.b.b", "W.B.b.B.", ".b.b.B..", "B...W.B.", "...B.B.b", "W.W.B..."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a3-b2", "b4-c3", "d2-c3", "d4-c3", "f2-g1", "g3-h4", "g5-h4", "h2-g1"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {".B.W.W.W", "B.W.W.W.", ".B.W.W.w", "B.W.W.B.", ".W...B.W", "w.W.W.W.", ".B.W.B.w", "B.W.B.W."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c3-d4", "c5-d4", "e3-d4", "e5-d4"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {".W.W...W", "w...W.w.", ".....w.w", "b.......", ".W...W.B", "B...w.w.", ".B.w.B.w", "B.B.B.W."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b4-c3", "b4-c5", "b4-d6", "b8-c7", "b8-d6", "b8-e5", "d2-c3", "d8-b6", "d8-c7", "e3-d4", "e7-c5", "e7-d6", "e7-f8", "f4-c7", "f4-d6", "f4-e5", "f4-g5", "g7-f8"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {".b.B.W.B", "W.w.w.w.", ".B.B.B..", "b.w.....", ".b.w...b", "B.W.W...", ".w.W.B.W", "..W.B..."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d6-e5", "d6-f4", "d6-g3", "f2-g1", "f2-g3", "f6-e5", "f6-g5", "h4-g3"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {".b.B.b.b", "..B.b.B.", ".b.B.w.b", "b.b.w.b.", "...B.B.B", "..B.w...", ".B.b.B.w", "B.w....."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a5-b4", "b2-a3", "b8-a7", "c3-b4", "c5-b4", "d2-e1", "f2-e1", "f2-g1", "f2-g3", "f4-g3", "h4-g3"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> board = {".b.b.B.B", "w.b.b...", ".w...b.w", "b.b...B.", "...w.b..", "..w.B.B.", ".b...b.B", "B.B.B.B."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c3-b4", "d4-e5", "h6-g7"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {".b.B...B", "w.w.b.W.", ".b.b.b.w", "B.b.b.w.", "...B.w.w", "B.b.b.b.", "...w....", "w.w.w.w."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a3-b2", "a3-b4", "a5-b4", "c3-b2", "c5-b4", "e3-f2", "g3-f2", "g3-h2"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {".b.b.B..", "W.b.W...", ".b.B.W.W", "W.w.W.b.", ".w.B.B.b", "w.w.w.W.", ".W.b.b.w", "w.w.w.W."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"f6-g7", "f6-h8", "h6-g7"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> board = {".W.W.W.W", "B.B.W.W.", ".B.W.W.W", "B.w.w.W.", ".w.W.w.W", "W.B.W...", ".w.W.w.W", "w.w...W."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d2-e1", "f2-g3", "h2-g3", "h4-g3"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> board = {"...b.W.b", "b.w.b.w.", ".w...b.B", "W.b.b.b.", "...b...b", "b.B.b.b.", ".w.B....", "W.w....."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c3-b4", "c5-b4", "d2-e1", "e3-f2", "e5-f4", "e7-d6", "g3-f2", "g3-h2", "g5-f4"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> board = {"........", "......B.", "...B....", "w.B.....", ".w.B...B", "B...B...", "........", "........"};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a3-b2", "a3-c1", "c5-a7", "c5-b6", "d4-a1", "d4-b2", "d4-c3", "d4-e5", "d4-f6", "d6-b8", "d6-c7", "d6-e5", "d6-e7", "d6-f4", "d6-f8", "d6-g3", "d6-h2", "e3-c1", "e3-d2", "e3-f2", "e3-f4", "e3-g1", "e3-g5", "e3-h6", "g7-e5", "g7-f6", "g7-f8", "g7-h6", "g7-h8", "h4-d8", "h4-e1", "h4-e7", "h4-f2", "h4-f6", "h4-g3", "h4-g5"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> board = {"...b.b.b", "b.b.W.W.", ".w.b.w.b", "b.b.b.b.", ".b.b.b.W", "B.b.W.b.", ".b.b.W.W", "..W.w.w."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b2-a1"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> board = {".W...B.W", "w.b.b.W.", ".....B.B", "B.B.b.W.", ".w.W.b.B", "w.B.B.w.", "...b.w.W", "w.B.w.B."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a5-b6", "c1-b2", "c3-b2", "c5-b6", "c5-d6", "c7-b6", "c7-d6", "e7-d6"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> board = {"........", "w.w...b.", ".w.W.W.w", "W.W.w.w.", ".B.W.w.b", "W.W.w.W.", ".w.W.b.B", "..W.W..."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"f2-g1", "h2-g1"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> board = {".b.B.B.b", "B.B.b.w.", ".B.B.B.w", "B.w.B.B.", ".B.B.b.b", "B.b...B.", ".b.B.B.w", "w.w.B.B."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d2-e3", "d4-e3", "f2-e3", "f4-e3"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> board = {".W.B.B..", "b.B.W.B.", ".B.w.b.b", "..W.B.B.", ".b.b.B.w", "b.b.B.b.", ".B.W.b.w", "B.W.w.B."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b6-a5", "g7-h8"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> board = {".b.W.B.b", "w.W.w.b.", ".b.b.W.b", "b.B.B.w.", ".w.W.w.b", "b.b.w.W.", ".b...W.w", "W.W.W.w."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c3-d2"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> board = {".W.B.W.b", "B.B.B...", ".b.W.b.B", "b.B.b.W.", ".B.B.w.b", "b.B.W.b.", ".....B.W", "w.B.B.B."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a3-b2", "c1-b2", "c1-d2", "c3-b2", "c3-d2", "e1-d2", "h6-g7", "h8-g7"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> board = {"...W.W.b", "..w.W.w.", ".W.b.W.w", "B.B.B.w.", ".W.b.w.W", "b.b.b.w.", ".b.W.w.W", "B...B.w."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b6-a7", "c7-b8", "d2-c1"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> board = {".W.B.W.W", "W...b.b.", ".w.w.W.B", "W.w.w.B.", ".w.W.b.B", "B.w.B.W.", ".W.W.W.W", "B.w.w.w."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b6-c7", "b8-c7", "d6-c7"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> board = {".W.b.b.B", "..W.b.w.", ".w.B.B.w", "w.w.B.w.", "...B...B", "w.B.b.w.", ".b.b.W.B", "..w.w.B."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a3-b4", "b6-a7", "b8-a7", "g3-f4"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> board = {".W.....W", "W.W.W.b.", ".b.b.W.b", "b.b.b.W.", ".b.W...W", "b.W.W.W.", ".W.b.W.W", "..W.W.W."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b2-a1", "c7-d8", "e3-f4", "e7-d8", "e7-f8", "g3-f4", "g5-f4"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> board = {".b.W.W.b", "..W.B.w.", ".W.w.W.w", "b.w.b.W.", ".w.b.w.w", "W.b.W.W.", "...w...b", "W.W.W.w."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a1-b2", "a3-b2", "b6-a7", "c1-b2", "e1-f2", "e3-f2", "g1-f2", "g3-f2"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> board = {".b.W.B.B", "B.b.B.b.", ".b.b.w.w", "w.b.w.b.", ".B.b.W.B", "w.W.b...", ".W.B.b.B", "B.B...w."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d2-e1", "f2-e1", "h2-g3", "h4-g3"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> board = {".b.B.B.b", "B.w.w.W.", ".w.W.W.B", "..B.B.B.", "...w.B.B", "W.B.B.B.", ".B...B..", "w.W.B.W."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c3-a5", "c3-b4", "c3-d2", "c5-b4", "e1-d2", "e3-d2", "g3-h2"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> board = {"...b....", "w.b.b.b.", ".b.b....", "w.b.b.w.", ".B.W.b.b", "w.W...w.", ".b.W.B.b", "w.W...w."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d4:f6:h8", "g1:e3", "g3:e1", "g5:e3"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> board = {".W.B.B.W", "B.W.w.W.", ".w.w.B..", "w.B.b...", ".w.w.B.w", "w.b...w.", ".W...w.B", "B.W.W.W."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b4:d2", "c1:g5", "c1:h6", "e7:g5:e3"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> board = {"...W.b.b", "..B.w.w.", ".W.W...B", "..W.W...", ".w.w.W.w", "....w.b.", ".W.W.W.w", "W.w.W.B."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d6:b8"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> board = {".W.b...W", "w.W...b.", ".W.W...W", "W...W...", ".B.w....", "b.w...w.", ".w.w.w.w", "w.W.w.W."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b4:e7", "b4:f8"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> board = {".W.W....", "b.b.W.b.", "...b.b.B", "W.b.w.w.", "...w.b.W", "b.b.B.W.", ".w.B...w", "w.B.W..."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d6:f8"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> board = {".b...B..", "B.....b.", ".w.B.w..", "B...w.w.", "...B.B.b", "b.w...b.", "...w...B", "w.w.B..."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a5:c7", "a5:d8", "a7:c5", "d4:b2", "f4:h6"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> board = {"...b.B.b", "w...B...", ".w.w.B.B", "B.W.w.w.", ".B...w.B", "B.b...B.", ".b...B.B", "W.w....."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c5:g1", "e5:g7"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> board = {".b.B.W..", "w.w...B.", "...B.w..", "W...w.w.", ".W.W.b.W", "..b.B.B.", ".w.W.B.w", "W.w.B.B."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b4:e7", "f6:h8", "f8:c5", "f8:h6"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> board = {".b.W...b", "W.w.w.w.", ".w.w...W", "b.b.B.W.", ".w.b.b.b", "W.w.W...", ".b.w.B.W", "W.w.w.w."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"h4:f6", "h8:f6"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> board = {".B.b...b", "w.w.w.W.", ".B.b.w.B", "w.b.b.w.", ".....w.w", "B...b.b.", "...B.B.w", "..B.w.B."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d6:f8", "h6:f8"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> board = {".W.W.B.W", "B.w.B.W.", ".W.W.W.W", "B.B...W.", ".W...w.w", "w.....w.", ".W.W.W..", "W.B.W.B."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b6:d4", "b6:e3"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> board = {"...B.B.W", "B.W.B.w.", ".B.B.B.b", "B.W.W.w.", "...w.B.w", "B.B.w.B.", ".B.w.W.B", "W.W.w..."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d6:b4", "d6:b8"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> board = {".b...W..", "B.W.B.W.", ".B.....w", "b.b...W.", ".B.b.b.B", "b.W.b.b.", ".W...w..", "B...W.W."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c3:f6:d8", "f8:d6", "g5:d8"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> board = {".W...B..", "..W.w...", ".....w.b", "w.B.w.B.", ".W.b.W..", "....B...", ".w.w...b", "B...B.B."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b4:d6", "e5:c3", "f6:h4"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> board = {".W.....W", "W.W.B.B.", ".b.W.W.W", "b.B.W.w.", ".W...W.W", "..w.W.b.", ".....W..", "W.W.W.W."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d6:f8", "f4:h2", "f6:d8", "h6:f8"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> board = {".b.B...B", "W.W.W...", ".B.b.W.W", "w.W.w.W.", "...w.W.W", "W.w.b.w.", ".w.B.W.B", "B.w.B..."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d2:b4", "d6:b4", "d6:f8", "e3:g1"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> board = {".b.b.b.W", "..b.w...", ".w.b.b..", "B...w.b.", "...B...w", "........", ".w.W.w..", "....w..."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d4:a1", "d4:a7", "d4:g1", "d6:f4"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> board = {".b...b.b", "b...b.w.", ".b.b.b..", "..w.....", ".....b..", "w...W.b.", ".....b.b", "........"};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"e3:g1", "e3:g5", "e3:h6", "g7:e5:c7:a5"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> board = {".b......", "..w.B.B.", "...w.B.w", "W.W.....", "...b...w", "w...b.B.", ".W...W..", "B.w.w.B."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a1:c3", "d4:b6:d8"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> board = {".b...b.W", "w.B.B.B.", ".w.w.W.w", "w...W...", ".w.W.w.b", "B...B.w.", ".w.B....", "w.W...B."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b6:d8", "d4:f2", "f6:d8"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> board = {".b.b.B.B", "b.w.W.b.", ".W.b....", "W.b.w...", ".w.w.w.b", "b.b.w.w.", ".b.b.b.b", "w.B.B.w."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d8:f6"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> board = {".W.B.B.W", "..B.W...", ".b...w..", "B...w.w.", ".W...B.w", "B.b.w.b.", ".....B..", "w.B.B.W."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a3:c5", "a3:d6", "f2:c5", "f2:d4", "f4:d2", "f4:d6", "f4:h6", "f8:c5", "f8:d6"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> board = {".B.b.B.B", "W.W.W.B.", ".b.b.w.b", "B.B.b.b.", ".B...W.b", "B.W.W.b.", ".b.W.W.b", "W.B.B.B."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b2:d4"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> board = {".W.B...B", "W.B...W.", ".W.W.W.B", "B.w.W.B.", ".W.W...W", "W.B.B.W.", ".W.W...B", "B.W.W..."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"g5:e7", "h2:f4", "h6:f8"};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> board = {".B.W.W.W", "b...w.b.", ".w.b.W.W", "b...W.B.", ".B.B.W.W", "B.b.W.W.", ".b.W.W.b", "..W.W.W."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"e3:c5", "e5:c7", "e7:c5"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> board = {".B.W.W.b", "W.B.W.W.", ".B.W.b..", "W.W...w.", ".W.b.b.B", "w.b.W.W.", ".W.W.w.w", "W.w.W.w."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"g3:e5", "g7:e5"};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> board = {"...b....", "B.b...w.", ".b.B.w.b", "W.W.B.w.", ".B.B.w.w", "..W.b.B.", "...B.W.B", "B.B.w.w."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d4:b2", "h6:f8"};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> board = {".b...W.b", "b.b.W.b.", ".b.w.W.w", "b.W.b.b.", ".b.w.w.w", "..w.b.b.", ".b.b.b.b", "w.w.B.W."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c1:a3", "c5:a3"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> board = {".W.B.B.W", "B.w.B.W.", ".B.b.w.B", "..B.B.w.", ".W.W.B..", "B.b.w.B.", ".B.....b", "B.B.B.W."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b4:d2", "c7:a5"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> board = {".B.W.b..", "b.B...w.", ".B.W.B.w", "B.B...w.", ".B.W.w..", "w.....b.", ".W.w.B.W", "B.w.B.w."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"g1:e3", "g5:e7", "g7:e5"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> board = {".W...b.b", "w.w.....", ".b.w.w.b", "..b.b.w.", ".w.b....", "..b.....", "...w...b", "w...W.w."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b6:d8", "c3:a5", "c5:a3", "c5:e7", "e5:g7", "h6:f4"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> board = {".b...b..", "W.W.w.b.", ".b.w.B.w", "..w.W.B.", ".b...B.W", "W.w.W.b.", ".w.b.b.W", "B.B.w.B."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b6:d4", "b6:d8", "f2:d4", "f6:d4", "f6:d8"};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> board = {".B.W.b.B", "..b.B.B.", "...w.B.B", "b.w.B.W.", ".W.B...B", "W.w.b...", "...B....", "B.W...B."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d4:a7", "d4:b2", "d4:b6", "h6:f4"};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> board = {".W.B....", "w.B.w.w.", ".W.b.B.W", "B.w.w.W.", ".W.w.b.w", "w...w.w.", "...B.w.b", "B.B.w.B."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a5:c3", "d6:f8", "f6:h8"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> board = {".W.B.W.B", "....w...", ".W.W.w.W", "W...B...", "...W.w..", "....W.W.", ".B.w.W.W", "..w.w.W."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c1:a3", "d4:a1"};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> board = {"...b...W", "..w...w.", ".b.w.W.b", "B.W.w.w.", ".w.W....", "w.w.w...", ".w.w.w.w", "W.w...w."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"h6:f4", "h6:f8"};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> board = {".B...B..", "W...w.B.", ".w.b.b.W", "..w.W.w.", ".W.B.b.W", "W...B.B.", "...w....", "w.W...w."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"e5:b2", "e5:c3", "e5:c7", "h4:e1", "h4:f2"};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> board = {"...W.B..", "w...W...", ".w.b.b.W", "b.b.W.W.", ".b...b..", "w.w.b.W.", ".b.b.W.w", "....W.W."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a3:c1", "b6:d4", "c3:a1", "e5:b8", "e5:c7", "e5:g7", "e5:h8", "f2:d4"};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> board = {".b...b.b", "b.w.W.b.", ".b.W.b.W", "b.W.w.b.", ".b...b.W", "b.b.W.W.", ".b.W.w.W", "W...W.W."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b6:d4", "b6:d8", "f6:d4", "f6:d8"};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> board = {".b.b.W.W", "w.W.w.W.", ".b.b.W..", "..b.W.b.", ".B...W.B", "..w.b.W.", ".W.W.b..", "W.W.W.W."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c3:a5", "c7:a5", "f4:h6"};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> board = {"...B.b..", "b.W.b.b.", ".W.B.b..", "..W.B.W.", ".B.W...w", "B.b.b.w.", ".b.w.b.W", "W.B.W..."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d6:b8"};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> board = {".W.b.W.B", "b...B.b.", ".b.b.b.b", "b.W.W.W.", ".W...B.B", "B.W...W.", ".b.B.W..", "..W.B.W."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b2:d4", "b6:d4", "f4:h2", "f6:d4"};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> board = {".W.b.W.B", "b.W.b.w.", ".b...b.b", "W.W.w...", ".b.b.w.b", "w...w.w.", ".b.W.W.w", "w.w.W.w."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b4:d6"};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> board = {".b.B.B..", "B...B.b.", ".b...w.b", "w.w.w...", ".b.B.B.w", "B.w.B.b.", "...B.W.B", "..B.w..."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a5:c7", "f6:h8"};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> board = {".B...W.b", "B.B.B.w.", ".w.w.B.B", "w.B.W.B.", ".b.w.w.w", "..w.B.b.", ".w.b.w.w", "W.B.w..."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c1:a3", "e3:g1"};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> board = {".....b..", "..w...b.", ".B.w.B.B", "b.b...w.", ".b...B.w", "B.......", ".b.b.B.B", "w......."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b6:d8", "c5:e7"};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> board = {"...b.W.b", "w.w.W...", ".w.b.b.b", "W.w.w.W.", ".w.W.b.B", "..b.b.b.", ".W.W.w.B", "w.B.B.w."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c1:a3", "d6:b8"};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> board = {".B.B.b.W", "..b.B.B.", ".....B.b", "W.B.b...", ".W...b.b", "B.b...b.", ".b.....b", "B.B....."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"b4:d2:g5", "b4:d6"};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> board = {"...B.B.W", "B.b.b.W.", ".B.W.W.W", "b.B.B.B.", "...b...B", "..b.W...", ".b.W.B..", "W.....w."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d2:b4", "d6:a3:c1", "d6:b8", "d6:g3:e1", "h6:f4"};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> board = {".b.b.b.b", "B.B.B.w.", ".B.B.b.b", "b.W.W...", ".b.b...b", "B.b.b.W.", "...b....", "W.W...B."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d6:f4:h2", "h4:f2"};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> board = {".b.B.W.W", "W.w.w.b.", ".w.W.w.W", "w.w.W.W.", ".W.W.B.b", "b.b.b.w.", ".b.w.w.w", "W.W.B.w."};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> board = {".B.W.W.W", "W.W.B.B.", ".B.W.b.W", "W.W.W.B.", ".W.B.W.w", "b.W.B.B.", ".b.w.W.B", "W.W.W.W."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> board = {"........", "......b.", "........", "........", "...W....", "........", ".b......", "........"};
    string turn = "WHITE";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d4:a1", "d4:h8"};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> board = {"........", "..w.w...", "........", "....w...", "........", "..B.w...", "........", "........"};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"c3:f6:d8:b6:f2", "c3:f6:d8:b6:g1"};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> board = {".......b", "....w.w.", "........", "....b...", ".w.w.w..", "........", "...w.w..", "........"};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"e5:c3:a5", "e5:c3:e1:g3:d6:a3", "e5:c3:e1:g3:d6:f8:h6", "e5:c3:e1:h4:d8", "e5:g3:e1:c3:a5", "e5:g3:e1:c3:f6:d8", "h8:f6:d8"};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> board = {"........", "........", ".w.w.w..", "........", ".w.w.w..", "........", ".w.w.w..", "B......."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a1:c3:a5:c7:e5:c3:e1:g3:e5:g7", "a1:c3:a5:c7:e5:c3:e1:g3:e5:h8", "a1:c3:a5:c7:e5:c3:e1:h4:d8", "a1:c3:a5:c7:e5:c3:e1:h4:e7", "a1:c3:a5:c7:e5:g3:e1:c3:e5:g7", "a1:c3:a5:c7:e5:g3:e1:c3:e5:h8", "a1:c3:a5:c7:e5:g7", "a1:c3:a5:c7:e5:h8", "a1:c3:a5:d8:g5:e3:c1", "a1:c3:a5:d8:g5:e3:c5:e7", "a1:c3:a5:d8:g5:e3:c5:f8", "a1:c3:a5:d8:g5:e3:g1", "a1:c3:a5:d8:h4:e1:c3:e5:b8", "a1:c3:a5:d8:h4:e1:c3:e5:c7", "a1:c3:a5:d8:h4:e1:c3:e5:g3", "a1:c3:a5:d8:h4:e1:c3:e5:h2", "a1:c3:e1:g3:e5:c3:a5:c7:e5:g7", "a1:c3:e1:g3:e5:c3:a5:c7:e5:h8", "a1:c3:e1:g3:e5:c3:a5:d8:g5", "a1:c3:e1:g3:e5:c3:a5:d8:h4", "a1:c3:e1:g3:e5:c7:a5:c3:e5:g7", "a1:c3:e1:g3:e5:c7:a5:c3:e5:h8", "a1:c3:e1:g3:e5:g7", "a1:c3:e1:g3:e5:h8", "a1:c3:e1:h4:d8:a5:c3:e5:b8", "a1:c3:e1:h4:d8:a5:c3:e5:c7", "a1:c3:e1:h4:d8:a5:c3:e5:g3", "a1:c3:e1:h4:d8:a5:c3:e5:h2", "a1:c3:e1:h4:e7:c5:a3", "a1:c3:e1:h4:e7:c5:a7", "a1:c3:e1:h4:e7:c5:e3:g5", "a1:c3:e1:h4:e7:c5:e3:h6", "a1:c3:e5:c7:a5:c3:e1:g3:e5:g7", "a1:c3:e5:c7:a5:c3:e1:g3:e5:h8", "a1:c3:e5:c7:a5:c3:e1:h4:d8", "a1:c3:e5:c7:a5:c3:e1:h4:e7", "a1:c3:e5:g3:e1:c3:a5:c7:e5:g7", "a1:c3:e5:g3:e1:c3:a5:c7:e5:h8", "a1:c3:e5:g3:e1:c3:a5:d8:g5", "a1:c3:e5:g3:e1:c3:a5:d8:h4", "a1:c3:e5:g7", "a1:c3:e5:h8"};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> board = {".B.B.B.B", "........", ".w.w.w.B", "........", ".w.w.w.B", "........", ".w.w.w.B", "B......."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a1:c3:a5:c7:e5:c3:e1:g3:e5:g7", "a1:c3:a5:c7:e5:g3:e1:c3:e5:g7", "a1:c3:a5:c7:e5:g7", "a1:c3:e1:g3:e5:c3:a5:c7:e5:g7", "a1:c3:e1:g3:e5:c7:a5:c3:e5:g7", "a1:c3:e1:g3:e5:g7", "a1:c3:e5:c7:a5:c3:e1:g3:e5:g7", "a1:c3:e5:g3:e1:c3:a5:c7:e5:g7", "a1:c3:e5:g7", "b8:e5:c3:a5:c7", "b8:e5:c3:e1:g3:e5:g7", "b8:e5:g3:e1:c3:a5:c7", "b8:e5:g3:e1:c3:e5:g7", "b8:e5:g7", "d8:a5:c3:e1:g3:e5:c3", "d8:a5:c3:e1:g3:e5:c7", "d8:a5:c3:e1:g3:e5:g7", "d8:a5:c3:e5:c7", "d8:a5:c3:e5:g3:e1:c3", "d8:a5:c3:e5:g7", "d8:g5:e3:c1:a3:c5:a7", "d8:g5:e3:c1:a3:c5:e3:g1", "d8:g5:e3:c1:a3:c5:e7", "d8:g5:e3:c5:a3:c1:e3:g1", "d8:g5:e3:c5:a7", "d8:g5:e3:c5:e7", "d8:g5:e3:g1", "f8:c5:a3:c1:e3:c5:a7", "f8:c5:a3:c1:e3:g1", "f8:c5:a3:c1:e3:g5:e7", "f8:c5:a7", "f8:c5:e3:c1:a3:c5:a7", "f8:c5:e3:g1", "f8:c5:e3:g5:e7", "h2:e5:c3:a5:c7:e5:g7", "h2:e5:c3:e1:g3", "h2:e5:c7:a5:c3:e1:g3", "h2:e5:c7:a5:c3:e5:g7", "h2:e5:g7", "h4:e1:c3:a5:c7:e5:c3", "h4:e1:c3:a5:c7:e5:g3", "h4:e1:c3:a5:c7:e5:g7", "h4:e1:c3:e5:c7:a5:c3", "h4:e1:c3:e5:g3", "h4:e1:c3:e5:g7", "h4:e7:c5:a3:c1:e3:c5:a7", "h4:e7:c5:a3:c1:e3:g1", "h4:e7:c5:a3:c1:e3:g5", "h4:e7:c5:a7", "h4:e7:c5:e3:c1:a3:c5:a7", "h4:e7:c5:e3:g1", "h4:e7:c5:e3:g5", "h6:e3:c1:a3:c5:a7", "h6:e3:c1:a3:c5:e3:g1", "h6:e3:c1:a3:c5:e7:g5", "h6:e3:c5:a3:c1:e3:g1", "h6:e3:c5:a7", "h6:e3:c5:e7:g5", "h6:e3:g1", "h8:e5:c3:a5:c7:e5:g3:e1:c3", "h8:e5:c3:e1:g3:e5:c7:a5:c3", "h8:e5:c7:a5:c3:e1:g3:e5:c3", "h8:e5:c7:a5:c3:e5:g3:e1:c3", "h8:e5:g3:e1:c3:a5:c7:e5:c3", "h8:e5:g3:e1:c3:e5:c7:a5:c3"};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> board = {"........", "........", "........", "........", "........", "........", "........", "........"};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> board = {".B.B.B.B", "........", "........", "........", "........", "........", "........", "B.B.B.B."};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a1-b2", "a1-c3", "a1-d4", "a1-e5", "a1-f6", "a1-g7", "b8-a7", "b8-c7", "b8-d6", "b8-e5", "b8-f4", "b8-g3", "b8-h2", "c1-a3", "c1-b2", "c1-d2", "c1-e3", "c1-f4", "c1-g5", "c1-h6", "d8-a5", "d8-b6", "d8-c7", "d8-e7", "d8-f6", "d8-g5", "d8-h4", "e1-a5", "e1-b4", "e1-c3", "e1-d2", "e1-f2", "e1-g3", "e1-h4", "f8-a3", "f8-b4", "f8-c5", "f8-d6", "f8-e7", "f8-g7", "f8-h6", "g1-a7", "g1-b6", "g1-c5", "g1-d4", "g1-e3", "g1-f2", "g1-h2", "h8-b2", "h8-c3", "h8-d4", "h8-e5", "h8-f6", "h8-g7"};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> board = {"...b....", "b.W.....", "...b.W.b", "......w.", ".W...b..", "w.......", "...w....", "........"};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"d6:b8", "d8:b6"};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> board = {"........", "B.......", "........", "........", "........", "........", "........", "........"};
    string turn = "BLACK";
    RussianCheckers* pObj = new RussianCheckers();
    clock_t start = clock();
    vector<string> result = pObj->listMoves(board, turn);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"a7-b6", "a7-b8", "a7-c5", "a7-d4", "a7-e3", "a7-f2", "a7-g1"};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=13507&pm=9857
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
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
#include <cctype> 
#include <string> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
#define LENGTH(X) ((int)(X.length())) 
 
const int MX[]={-1,-1,1,1}; 
const int MY[]={-1,1,-1,1}; 
 
class RussianCheckers 
{ 
public: 
  vector<string> result; 
  int sWin; 
  string getstr(int x,int y) 
  { 
    char c1=char('a'+y); 
    char c2=char('1'+(7-x)); 
    string s=""; 
    s+=c1; 
    s+=c2; 
    return s; 
  } 
  bool capture(vector<string> &A,int x1,int y1,int dx,int dy,int L,int &x3,int &y3) 
  { 
    int C=0; 
    for (int i=1;i<=L-1;i++) 
    { 
      int x0=x1+i*dx,y0=y1+i*dy; 
      if (A[x0][y0]=='*') {C++;x3=x0;y3=y0;} 
      else if (A[x0][y0]!='.') return false; 
    } 
    return C==1; 
  } 
  bool can_capture(vector<string> &A,int x,int y,char key) 
  { 
    for (int d=0;d<4;d++) 
    { 
      int dx=MX[d],dy=MY[d]; 
      int maxL=(key=='w')?2:8; 
      for (int L=2;L<=maxL;L++) 
      { 
        int x2=x+dx*L,y2=y+dy*L; 
        if (x2<0 || x2>=8 || y2<0 || y2>=8 || A[x2][y2]!='.') continue; 
        int x3,y3; 
        if (capture(A,x,y,dx,dy,L,x3,y3)) return true; 
      } 
    } 
    return false; 
  } 
  void search(vector<string> &A,int x,int y,string move) 
  { 
    if (LENGTH(move)>0) move+=':'; 
    move+=getstr(x,y); 
    if (!can_capture(A,x,y,A[x][y])) 
    { 
      if (LENGTH(move)>4) result.push_back(move); 
      return; 
    } 
    char key=A[x][y]; 
    for (int d=0;d<4;d++) 
    { 
      int dx=MX[d],dy=MY[d]; 
      int maxL=(key=='w')?2:8; 
      for (int L=2;L<=maxL;L++) 
      { 
        int x2=x+dx*L,y2=y+dy*L; 
        if (x2<0 || x2>=8 || y2<0 || y2>=8 || A[x2][y2]!='.') continue; 
        int x3,y3; 
        if (!capture(A,x,y,dx,dy,L,x3,y3)) continue; 
        A[x3][y3]='#'; 
        int LC=abs(x3-x); 
        bool find=false; 
        for (int k=LC+1;!find && k<=maxL;k++) 
        { 
          int x3=x+k*dx,y3=y+k*dy; 
          if (x3<0 || x3>=8 || y3<0 || y3>=8 || A[x3][y3]!='.') break; 
          swap(A[x][y],A[x3][y3]); 
          if (x3==sWin) A[x3][y3]='W'; 
          if (can_capture(A,x3,y3,key)) find=true; 
          swap(A[x][y],A[x3][y3]); 
          A[x][y]=key; 
        } 
        swap(A[x][y],A[x2][y2]); 
        if (x2==sWin) A[x2][y2]='W'; 
        bool cap_now=can_capture(A,x2,y2,key); 
        swap(A[x][y],A[x2][y2]); 
        A[x][y]=key; 
        if (!find || cap_now) 
        { 
          swap(A[x][y],A[x2][y2]); 
          if (x2==sWin) A[x2][y2]='W'; 
          search(A,x2,y2,move); 
          swap(A[x][y],A[x2][y2]); 
          A[x][y]=key; 
        } 
        A[x3][y3]='*'; 
      } 
    } 
  } 
  vector<string> listMoves(vector<string> board, string turn) 
  { 
    result.clear(); 
    if (turn=="BLACK")  
      for (int i=0;i<8;i++) for (int j=0;j<8;j++) 
        if (board[i][j]=='B' || board[i][j]=='W') 
          board[i][j]='B'+'W'-board[i][j]; 
        else if (board[i][j]=='b' || board[i][j]=='w') 
          board[i][j]='b'+'w'-board[i][j]; 
    sWin=(turn=="BLACK")?7:0; 
    for (int i=0;i<8;i++) for (int j=0;j<8;j++) if (board[i][j]=='b' || board[i][j]=='B') board[i][j]='*'; 
    for (int i=0;i<8;i++) for (int j=0;j<8;j++) if (board[i][j]=='w' || board[i][j]=='W') search(board,i,j,""); 
    if (result.empty()) 
      for (int i=0;i<8;i++) for (int j=0;j<8;j++) if (board[i][j]=='w' || board[i][j]=='W') 
      { 
        for (int d=0;d<4;d++) 
        { 
          int dx=MX[d],dy=MY[d]; 
          int x=i,y=j; 
          if (board[i][j]=='w' && (sWin==0 && dx>0 || sWin==7 && dx<0)) continue; 
          int maxL=(board[i][j]=='w')?1:8; 
          for (int L=1;L<=maxL;L++) 
          { 
            int x2=x+dx*L,y2=y+dy*L; 
            if (x2<0 || x2>=8 || y2<0 || y2>=8 || board[x2][y2]!='.') continue; 
            bool empty=true; 
            for (int k=1;k<=L-1;k++) 
              if (board[x+dx*k][y+dy*k]!='.') 
                empty=false; 
            if (!empty) continue; 
            result.push_back(getstr(x,y)+"-"+getstr(x2,y2)); 
          } 
        } 
      } 
    sort(result.begin(),result.end()); 
    return result; 
  } 
};

********************************************************************************
*******************************************************************************/