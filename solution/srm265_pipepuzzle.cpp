/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2001
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

class PipePuzzle {
public:
    int longest(vector<string> pipes);
};

int PipePuzzle::longest(vector<string> pipes) {
    int ret;
    return ret;
}


int test0() {
    vector<string> pipes = {"LL-L-", "L+L+L", "--NL-", "L+--L", "LL+L-"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> pipes = {"ELLL", "LLLL", "LLLL", "LLLL"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> pipes = {"ELLLLL+", "++++++L", "L+++++L", "L+++++L", "L+++++L", "L+++++L", "+LLLLLL"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> pipes = {"LLLLL", "LLELL", "LLLLL", "LLLLL"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> pipes = {"-+-+-+-+-+-+-+-+-+-W"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> pipes = {"N"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> pipes = {"S"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
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
    vector<string> pipes = {"E"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> pipes = {"W"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> pipes = {"LL", "LN"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> pipes = {"L++L++L", "--+N-+L", "+++L+++", "-++++LL", "+L+L-+L", "+++LL+L", "+L+++++", "++L+LL-", "LL--L++"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> pipes = {"++-LL+-", "++L++L+", "+LL++-L", "+-+L++-", "-L+L+++", "--LN+L+", "+LLL+LL", "L+++L++"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> pipes = {"LEL+L+-L-L-+", "-+++--+++--+", "++++L+--+++-", "-L+--+-+-+-L", "-L+L++++-+LL", "+-LL+--LLL-+"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
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
    vector<string> pipes = {"-++++++++++", "++L-L++-+LL", "+++++++++--", "++-------L+", "LL+++L-++++", "-++L+-+-+++", "++N+L-L-+L+", "+L++++++L-L"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> pipes = {"++LLLL-LL+++-+++", "--+-+L+-++-LL-+-", "--++----++L-++L-", "L++-L++++---+-+L", "L++--+--+++--+++", "+L+L+-+W+L++L-+L"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> pipes = {"++++++", "+L++++", "++-+LL", "L+L+++", "++L+LS", "++++LL", "L+++++"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> pipes = {"+++++-+-++++", "-+-++---+-++", "SLL++-++++-+", "-++-+-L-L-++", "-+L++++L++++", "--++--+++LL+", "++++++--+++-", "LL--L++L++++", "-L++++-+++++", "---+L+L-++++", "-++--+++-+++", "++L+++L+++++", "++++++++++++", "+++++++-++++", "+-++++++L++-", "++-+++++++++"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> pipes = {"+LL", "L+L", "-LL", "LLL", "S++", "L+L", "+++", "+LL", "LL+", "++L", "+LL", "+L+"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> pipes = {"+++++++", "+++L+L+", "-+-+++L", "++++L++", "++++L+S", "++L+L++", "++L++L+", "++L+L++", "+++++++", "+++++LL", "+++++++", "+LL+L++", "+LLL+++"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> pipes = {"++LL", "LL-L", "-L+W", "+-L+", "LLLL", "L-+L", "+-LL", "+LL-"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> pipes = {"LL+L", "LL+L", "LLLL", "SLL+", "L+LL"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> pipes = {"+++++-+-+++--+-+++-L", "+++++--+L+++++++++++", "++++++++++++++++-+++", "+---+-+++++-++++++++", "+++-++++-+++++++++++", "++++-+++++-++++-+-++", "-+++++--+++-L+++++++", "+++++++-+++++++++--+", "--+++-+-+-+++-++++LL", "++++++++++++L++++++-", "+-++++--+++++-+-+-++", "L+++++-+++++++++--++", "++++-++++-++++++++++", "++L+--+-+-+-+-----++", "++++--+-++L+++++++++", "++-+++++L+++++++++++", "+++++++++++-+-++++-+", "+-+++++++++-+-++++-+", "++++L+++-+++++-+-+LN", "++++-++-+++++--+-+++"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> pipes = {"+LL", "LL+", "+++", "L+L", "LLL", "LNL"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> pipes = {"-+-+++L", "LL+LLLL", "-L-+---", "+L+--++", "+LL-+-L", "+--L+NL", "+LL+LL-"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> pipes = {"LL+WLLLL", "LLLL++L+", "LLLLL+-L"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> pipes = {"L++-+-+L+", "LL+LE-+LL", "+++-++-L+", "+++---+++", "+++-++-++", "L------++", "+-+--+-++", "++++L--+-", "-+L-L++++", "--+++++++"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> pipes = {"-+++L+++++L+L++++", "-++++-++++-+++++L", "++++++L++L+++L++L", "+++++L+++++-+--+L", "+--+++--+++++++L+", "+-++++++++++L++++", "-+-E+-++++++L+++-", "L++-++++++++L+-L+"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> pipes = {"L++LL+", "++L+++", "+++LL-", "L++++L", "++++++", "++++++", "-++L+L", "L-++L+", "+--+++", "LL+--+", "-+L+++", "L+S--+", "++++++", "+LL+++"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> pipes = {"--+L+L+++++", "-+S++-++--+", "-+-L-+---+-", "+-++-+-L---", "-+L+++++-+L", "+---L+--+L+", "+++L-+-+++-", "--+++++-+++", "++-+-----L+", "-L+---+++LL", "---+-+++-+-", "--++--+-L++", "++---+++++L", "-+++-++++L-"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> pipes = {"+L++LL+L++LL", "+L+L-+++-++L", "+LLL++--L+LN", "L+-+L-+-+L+L"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> pipes = {"+-+L+L", "--L-++", "++LLL+", "L++++-", "L+L+W+", "++L--L", "--++++", "+-+-LL", "+++L+-"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> pipes = {"+++++L++++++++L+", "++++++++++++++++", "+LL++L+W++++++++", "++L++L++++++++++", "++++++++++++++++", "++-+++++++L-++++", "+++++++-++L+++++", "++++++++++++L+L+", "+++++++LL+++++++", "L+L-++++++++++++", "L+++-++L++++++++", "++++--++++-+++++", "++++-+++++++++++", "++++++++++++++++", "++++++++++++++++", "++++++++++++++++", "-+++++++++++++++", "+++++L++++++++++", "+++++++L+++++-++"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> pipes = {"L++L", "LL-L", "+-+L", "-LL+", "LLN+", "LL--", "L++L", "L+-L", "L-+-"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> pipes = {"++LL++L++", "+++LLL+++", "-+L++++++", "+++-++L++", "L+L+-+WL+", "-+++++L++", "L+L+++L++", "++L++++L+"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> pipes = {"--L-+L+---L", "L+++-LLL--+", "+++L-L+++LL", "+-+LLL++LL+", "L+++-WL+++-"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> pipes = {"+L++", "LL+L", "LE+L", "LLLL"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> pipes = {"L+L+++", "++L+LL", "LLLL-L", "L++L-+", "+L-LL+", "LLNLL+"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> pipes = {"L-+L+L-+--++", "L-++L--+++-+", "+++++--++L++", "+-+++++++--+", "--++LL-+-+-+", "+E-L++-+++-+", "+++++---++++", "++-+--++-+++", "+++-L-++L+++", "++++--+LL+L+", "-+---++L+L-+"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> pipes = {"+LWL", "++L+", "LL++", "+-+-", "+L++", "+LL+", "+L+L", "L++L", "+L+L", "+LL+"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> pipes = {"+--+L++-L--++-+-+LL", "+-++-+-++-LL+E+L+-+", "--+L+-LL+++-++L+++L", "--++L+++++++---L++-", "-++---+-+-++L--L---"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> pipes = {"-++++++", "L+-+--+", "++++++-", "-++-+++", "-+++-++", "-+-+++S", "+++L+++", "+++LLLL", "++-++-L", "++-+++L", "+++-+++", "++L+L+-", "+L-+-L+", "++L++++"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> pipes = {"+++++L+", "++L++L+", "+++++++", "++NL+++", "L++++-L", "++++-++", "+-+++++", "+--+++L", "++++++L", "+++L+++", "++-+++L", "++L+++L", "+++L++-", "++-++++", "+++++L-"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> pipes = {"+LL++L-++-+++L+", "+++++++-++-++++", "+L++-+-+++L++++", "++++++-+++-L++-", "+-+++-++++-++++", "++++++++++++++-", "++++++++++++--+", "+-+++++++++++++", "+LL+++++++++-++", "++++++-+++L-++L", "++++++L+L-E+++L", "+-+++++++++L+LL", "-++++L++++++++-", "+-++++-+-+++++L"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> pipes = {"L+LL+", "L+++L", "L++L+", "LLN+L", "LL++L"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> pipes = {"++-+L+++++-+LL--++", "-++++---++-+-++-++", "+++S++--+++--+-++-", "-+L++-+-++--L---L-", "L+LL-++-+-+L+++L++", "-++++-++++++-+-+--", "+-+--+-++++-+++-++", "+++++++--+++++-+++", "+-+-++--++L++-L-++", "++L++L+L-+++---+++", "+-+--+--+---+-+-+-"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> pipes = {"-L-L+", "+L+LW", "+-++L", "-+LL+", "L-LL-", "L+-LL"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> pipes = {"+++++++++++++++++", "++L++++++++++++++", "+++++++++++++++S+", "++++++++++++++-++", "+++++++++++++++++", "++++++++++++++++L", "+++++-L++++++++++", "+-++L+L++++++++++", "L++++++++++++L+++", "+L+++++-++++++-++", "+++++++++++++++++", "+++++L++++L++++++", "++++++++++++L++++", "+++++++++-+++++LL", "++LL+++++L++++++L"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> pipes = {"+++++++LL+-", "+++-+L+LL-L", "LL--++++L++", "+L-L++L+++-", "LL+++-+--++", "+++++++E++L", "+-+L+L+++L+"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> pipes = {"+++++++++L+++++", "+++++L++L+L++L+", "+++L+++L-++++L+", "+++LL+L++++++++", "+++L+++++LL+++L", "+-+++LL+++E+++L"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> pipes = {"LLL+EL", "LL+LLL", "L+LLLL", "LLLLL+"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> pipes = {"EL", "LL"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> pipes = {"L------------L------", "N++++++++++++L++++++"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> pipes = {"L------------L------", "E++++++++++++L++++++"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> pipes = {"L------------L------", "N++++++++L+++L++++++"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> pipes = {"L------------L------", "E++++++++L+++L++++++"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> pipes = {"+--+-+-+-++-++-+-+-+", "+--+-+-+-++-++-+-+-+", "+--+N+-+-++-++-+-+-+", "-------+-+++++++++++", "++++++-+-++-++------", "+-+-++-++-+-+-++--+-"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> pipes = {"+--+-+-+-+++-+-+-+-+", "+--+-+-+-+++-+-+-+-+", "+--+-+-+-+++-+-+-+-+", "-E-----+++++++++++++", "++++++-+-+++-+------", "+-+-++-++-+-+-++--+-"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> pipes = {"+--+-+-++-++-+-+-+-+", "+--+-+-++-++-+-+-+-+", "+--+++-++-++-+-+-+-+", "-------+++++++++++++", "+++W++-++-++-++-----", "+-+-++--+-+-+-++--+-"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> pipes = {"+--+-+-++-++-S-+-+-+", "+--+-+-++-++-+-+-+-+", "+--+++-++-++-+-+-+-+", "-------+++++++++++++", "++++++-++-++-+------", "+-+-++--+-+-+-++--+-"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> pipes = {"ELLLLL+", "++++++L", "L+++++L", "L+++++L", "L+++++L", "L+++++L", "+LLLLLL"};
    PipePuzzle* pObj = new PipePuzzle();
    clock_t start = clock();
    int result = pObj->longest(pipes);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=158244&rd=8007&pm=2001
********************************************************************************
#include <algorithm>
#include <cctype>
#include <cmath>
#include <functional>
#include <iostream>
#include <map>
#include <stack>
#include <string>
#include <vector>
 
using namespace std;
 
typedef vector<bool> VB; typedef vector<double> VD;
typedef vector<int> VI; typedef vector<string> VS;
 
#define N 0
#define S 1
#define E 2
#define W 3
 
int go(int y, int x, int dir, VS pipes, VS vis)
{
  int ny=y,nx=x,ret=0;
  
  if(dir==N) ny=y-1;
  if(dir==S) ny=y+1;
  if(dir==E) nx=x+1;
  if(dir==W) nx=x-1;
  
  if(nx<0||nx>=pipes[0].length()) return 0;
  if(ny<0||ny>=pipes.size()) return 0;
  if(vis[ny][nx]=='Y'&&pipes[ny][nx]!='+') return 0;
  
  vis[ny][nx]='Y';
  ret++;
  
  if(pipes[ny][nx]=='L') {
    if(dir==N||dir==S) ret+=max( go(ny,nx,E,pipes,vis), go(ny,nx,W,pipes,vis) );
    else ret+= max( go(ny,nx,N,pipes,vis), go(ny,nx,S,pipes,vis) );
  }
  else ret+=go(ny,nx,dir,pipes,vis);
  
  return ret;
}
 
class PipePuzzle
{
public:
 
int longest(VS pipes)
{
  int i,j;
  int x=-1,y=-1,dir;
  
  string dirs="NSEW";
  
  for(i=0;i<pipes.size();i++) {
    if(x!=-1&&y!=-1) break;
    for(j=0;j<pipes[i].length();j++) {
      if(dirs.find(pipes[i][j])!=string::npos) {
        y=i;x=j;
        dir=dirs.find(pipes[i][j]);
        break;
      }
    }
  }
  
  VS vis=pipes;
  for(i=0;i<pipes.size();i++) for(j=0;j<pipes[i].length();j++) vis[i][j]='N';
  vis[y][x]='Y';
  
  return go(y,x,dir,pipes,vis);
}
 
};

********************************************************************************
*******************************************************************************/