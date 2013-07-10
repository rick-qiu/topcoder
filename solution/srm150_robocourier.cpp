/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1749
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

class RoboCourier {
public:
    int timeToDeliver(vector<string> path);
};

int RoboCourier::timeToDeliver(vector<string> path) {
    int ret;
    return ret;
}


int test0() {
    vector<string> path = {"FRRFLLFLLFRRFLF"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> path = {"RFLLF"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> path = {"FLFRRFRFRRFLLFRRF"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
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
    vector<string> path = {"FFFFFFFFFRRFFFFFFRRFFFFF", "FLLFFFFFFLLFFFFFFRRFFFF"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> path = {"FRRFLLFLLFRF"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> path = {"RRFFFLFLFLFLRFLFLFLFLFRLFLFLRF"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> path = {"RFLRFRFFRFRFRFFRRFRLRFRFLRRFRR", "FFRLLFLFLFFFLLFFFFLRFRLLFFFFRF"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> path = {"RFRFFFRLRLLFFFRLFLFFRRLLLFFLFRFRRFLLFFRLRRFFF", "RRLFRLRLLLRRLLLLRRFRLLLRLLFFFFFLRLFLFLLFRFFLR", "FLLRLFFFFR"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> path = {"FFFRRRRRRRRRFFFLLLLLLLFF"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> path = {"LLFFFFRRFLFFLFLFLLFRRFFLLFFFFLLFLFFFRRFF"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> path = {"RFLLFLFLFRFRRFFFRFFRFFRRFLFFRLRRFFLFFLFLLFRFLFLRFF", "RFFLFLFFRFFLLFLLFRFRFLRLFLRRFLRFLFFLFFFLFLFFRLFRLF", "LLFLFLRLRRFLFLFRLFRF"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> path = {"LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> path = {"RRFLRRRFRRLRRRFRLRRLRFLRRFFLLLLRLLRRLLLRRLRLRLLFFF", "RLLLRFRLFLRFFFFLRLRFLLFLLRRLFLFRFRFLFRLRFFFRFLLLRF", "FLFLFFFFLLRFLLLFFFFLLRLLFFFFRLRRRRLRFRRLRFRLRRFFLF", "FFLFLFFFRFFLRLLFLRFLFRLLRRLFLLLLFRLRRRFLFLRRRFRLRL", "FRFRFLLLFRFLFFFRFFLRFLLFRRLLLFRFLLFFLFFFFFRFLLFLFR", "FLLFRLRLRFFRFRRLRRFRFRRFRLLRRRLLLRFFLFRRFFRLRRFRLF", "FFFLRRFFRLRRLFRLRLFFLFLFFLFFLLRLLLLFFFFFFFFRRFLLRL", "RRFLFFLLRRLLRRRRRLLFRLLLRRRFRFRFRLRLLFRFFLLLLLRRRL", "LFLLRLRLLRRRRLRLLFRRFFLFRLFRLLRLLFLFFLFFFLFRRRLRLR", "FRLLRRRLLLRLRLFLLFLLLFFLFFRRFRFFFFLLLLLFLFRRLRRLFR"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> path = {"FLFRRLLFLLRLLRLLLRFRRLLLRRLLRLLLFLLRLRRLLRFLLFLLLR", "RRFFLLFLRFFRLLLRRLLRFLFLFRRFLLRRLLFLLFRRFRLRFLRLFR", "RFFLFFRRFFLLFFFRLFFRRFRLLFLLRRFFRLFRFRLLFLLRFLLRLF", "RRRLRLLFRFRRLLLLLFRFRLLRFLFLFFRFRRLLRFFLLRLRLRFLRL", "RFFRFLLLRLRRLFFRFLLFFRLRRLRLRLLLLFLLLLLFLRRFLRFRLL", "FFLFRLRRRLLFLFLLRLLRLLRLRFLLRLFRFRFRFLFLLRRLLLLFFF", "LRFLRFLLFLLRLFFLFFLLLRLLRLLRFRLRLRLLFFRRLFFLLFLRLL", "FLLRLRRLLFFLLFLLLRLRFRFFRRLRFRLLRRLRFRFRRLLFLRLLLL", "LFFLRLRLLRRFFRLLRFFLLFLRRRFLFLFLLRLFFLLRFLFLLLRLFF", "LLFRLLFLFFRLFFLLFLRRLLFLRFFFRLLFFRLFRFRLLFFFLLRLRL"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 145;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> path = {"RLFRFFRFRFFRFFLFFLRLRLFLFLRFFRFLRLRFLFFLFFFRLFRLFL", "RLRFRFRFLFLFLFFLRLFFLRLRFFFLFLFFLFRLFFFFRLFFLRLFFL", "FLRFRLRLFLRLFRLFLFFFRLRLRRFLFLFFFLRFLRFFLRFLRLLFLR", "LFFRLFRFRFRLLFLRFRLLFRLFFFRLRLLFRFLFLFRLLFFLFLRLFF", "FFLFLRRFFFLRFLRFLFLFFLRFLFFLFFFLRLFFFLRFLFRFFRFFFR", "FLRLRLRRFRLRFLFLFRRFLLFRFLRFFLRLFLFLRLFFLRLRFFLFLF", "LFLFLRFFFFRFRLFRFFFFFLFLFFLRLFFFRFFFFFLFFFLFLFRFRL", "LRLFLRLRRLFRLRRLRLRLRFLFLRLRLLRFLFRFRRLFFFLFLFFLLR", "LRLFFRFLFFFLLFRFLFRLRFFLFLFRRFFFFFLRRFFRLRLFFRLRLF", "LFRLRRLRLRRLRLRFLLFLRLLFLFLFLRLRFFRLRFLRFFRFLLFRFF"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> path = {"FLRLRFLRLRFLFLRFFFFLRFLFFFLRFFRLFRLRFLRLRRFRLRFRRF", "LRFFFRRFFLFLFLFRLLFFFLFFLFLLFLFFLFFFRFFFFLRLRLFLRF", "LFRLFLFFLFLRRFLRFRLFRLLFLRFLFLRFFFLRFLFRLFLRRFFLRL", "LRFFLLFLRLRLLFFFRFFRLFRFRLRLFFFRLRFLFLFLFRLRRFLRRF", "FLFFLFLFRLRLRLFRFFLLFLFLRFFRRFLRFFLRLRLRFRLFLFLFLR", "LFLRRFLLFLFLFLFFLLFFFLFFRFRLRFLFRFRLFLRFFLFRRFFFLL", "RFFFLRLFFRLFRFLRLFRFLFRFLFRRLFFLFRLRLLFRLFLFFFLFFR", "LRLLFFRFRFRLRLRFFRLFFLLFFFLRFFRFLFRFLRLRLRLFLFLFLF", "LLFLFRFLLFFLFFLRLFRRFLRLRLRFFRLFFLRFLFFRFLFLFLFFLR", "FFFLLFRFRLLFFFLRLFLRLFRLRRFLRFLRFFRFRFLFLLRFLFLRFL"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 169;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> path = {"RFRRFLRRFFFLFRLRFLLFFLFFFLRLRLFLFFRLFFRLFFLLFFLRFL", "FFLFFFFLFFFFLLFLRLLRFFLRFFFFLFFLFLFFLFRLRFLRLFLRFL", "LRFRFFFLRFFLRFFRLRLLFLRLFFFFRFFFLFLFLRRRRFLFFFLFLR", "LRFFFLFRLRFLLFLRLRLFFFRFLRLLFFFRLFLRFFRFFLRFLRFLRR", "FLFLFLRLRFFLLFFFRFFFLRLRFFLRLLFRFLFFLFLFFLFLRLRLFF", "LLFFFLRFFFLFLRFLRFFFRLFRFLLFLFLRRFLRFFLFFLFFLFFLLF", "FLFLFLRLFLRFFLRLFLRLRLFRFLRLRLFLFLRFFLFRLFLFLLFLFF", "RLRFLRRFRFRLRFRLRFLFFLLFLFFFLLFLRLFRLRLRLFLRFLFLRL", "LFRFFLRRFRFLFFFLFFFLFLFFLFRLLFFFLRFRLRLFLRLRFLRFFR", "LLFRLRFRLRLFLLFRFRFLLLFFLRFLRLRLFFRLLFLFLRRFLFRRFL"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 158;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> path = {"FFFF", "LFFFFFFFF", "FFFFFFFFFFFFFR", "LRFFFFFFF"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> path = {"FLFFLFLRLRLRLFFLRLRLFLFLRLFFFLRLFRLFRFFLRRFLFLRLLF", "FFLFRLFLFFLFLRFRRFLFFFLFLFRRFRLFFFRLRLRFRRFLRFLRFL", "FFFFRFLFRFFFFLLFLFLFLFFLRLFLFLLFFRFLLFLFFRFRFLRFRL", "RRFLFLRLFFLRFRLRLFLRLRLLFFFLRFFLFLFLFFFRFRFFFLLFRL", "FFLRLRLFRLLFRFLFLRFRLFFLLFRFLRLFFRLFRLLFLFLFFFLLFR", "FLRFFLRLLFFRRFRLFLFLFLFFRFLFLRFRFFFLFLRLRFLFRFLRLR", "LFLFFLLFRLFLRRLRLRLRFLRRFLRLFFRFFLRFFLFLFFLRFLRLRL", "FLLFRFRLFRFFFFFLRRRFLFLRFFLRFLLFFLRFLRLRLRLRLFFLRR"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 109;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> path = {"LLFLFRLRRLRFFLRRRRFFFLRFFRRRLLFLFLLRLRFFLFRRFFFLFL", "RLFFRRLRLRRFFFLLLRFRLLRFFLFRLFRRFRRRFRLRLRLFFLLFLF", "FRFLRFRRLLLRFFRRRLRFLFRRFLFFRLFLFLFRLLLLFRLLRFLLLF", "FFLFRFRRFLLFFLLLFFRLLFLRRFRLFFFRRFFFLLRFFLRFRRRLLR", "FFFRRLLFLLRLFRRLRLLFFFLFLRFFRLRLLFLRLFFLLFFLLFFFRR", "LRFRRFLRRLRRLRFFFLLLLRRLRFFLFRFFRLLRFLFRRFLFLFFLFR", "RFRRLRRFLFFFLLRFLFRRFRFLRLRLLLLFLFFFLFRLLRFRLFRLFR", "LLFLFRLFFFFFFFRRLRLRLLRFLRLRRRRRRRRLFLFLFLRFLFRLFF", "RLFRRLLRRRRFFFRRRLLLLRRLFFLLLLLRFFFFRFRRLRRRFFFLLF", "FFFFLRRLRFLLRRLRLRFRRRRLFLLRFLRRFFFRFRLFFRLLFFRRLL"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 169;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> path = {"FFFFFFFFFFFFFFFFFFFF"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> path = {"FLFLFFRFFLRLRFLRFLRLLLFLRLFLFRFRRFFFLFLRLFLFLLFLFL", "RFFLFFLRFRLFRFFFRFRFRFRFLFLRFLFRLFLFLLFRFLFLFLFLRL", "FRLFFFFRFFLFFFFRLLRLFFLLFRLFFLRFLRLRFRFRLLFLRLFRFF", "LRLRLRFLRRFLFFLFFLFRFLFLFLRFFFLLFRFRLFFLFFFLFRLLFL", "LRFFLRFRRFRLRFFFLLFRRFFFLFFFLLFLFFFRRFLFRFLFFFLRLF", "FLFRFLFRFFFLLFFLRLFLFLLFLLFFLRRLRLFLFFFLRRFLLFLRFF", "RFLRFLFRLFLLFRFLFFLFLFLRLLFRLFLRLFLFLFLFFRLRLFLFRL", "LRLLRFLFLFLRLLFRFLRLFFFFLFLRLLFFFFLFLRLFRFLFLRFLRF"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> path = {"FFFFRLLFLFRFFFLRLFFFRFFLRLLFFFFFL", "FFFFFFRLFFRLFFRFRFFFFLFFFFLRFFFLR", "FRLLLFRFRFFFFFFRLFFFFFFLRRFFFRLRL", "F"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 218;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> path = {"FFLRLFRRFRFFRLFRLRLRLRLRLFFRLRLRLFRLFRFFLLFFFFR", "RLFFLRLFRFFFLLFFFFFRFRLFLRLRFFFLFFFRFFFFFLFFFFF", "FFFRLRFFRFFFRFLRFFFLRFFFLRFFRLFFFFFFFRLFFFLRLRL", "RLFRLFFFRLRLRFLRLFFFFFFFRLFFFFRFFFRRFLFFFFFLLFF", "FFRLFFFFRFFLFFLFRLFFFFFFFFFFRFFFFFLFRLRRFFFLRLF", "LFRLFFFFFFFFFRFFFLRFFFFFFFRLFLFLRRFLFFFRFFFLLFF", "RFFLFFRFFRFFFFFFFRFFFRFLFFLRFFRLFFFFFFFLFFLFFLR", "FFFFRFFFFFRLFFFFLFFLRFFFLFFFFFFFFLFLFFRRLRLRLRF", "FFRFLFFFLRFFLRLLFRLRLRFFFRFFFFRFRRFLLFFFFRLRLRF", "FFFFFRRFFFRLLFFFFFLRFRFFFFR"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 988;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> path = {"FLRRFFFFFRLFLRFFFLRFFRR", "RFLRLRFFFRLFFRFLRLRFFFR", "RLRRFFFLRFRLFLFLFLLFFFF", "FFFFLLFFFLLFFRLFRLRRRFF", "RFRFF"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> path = {"RLRFLFRLLRFLFLRFFLFLFLFRLFLRFFRLLFLFLFLF", "LFLFRLLFLRLLFRFFLLFLFFRFRFRLRFLRFLFLFFLL"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> path = {"F"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> path = {"R"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> path = {"FFLFLLRLFLFLLFRLFLLFFRFF"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> path = {"FFLFLFRF"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> path = {"FFFFFFF", "F", "F", "RRFFF", "F", "FFR", "RFFFFF", "FLLFFFFFFLLFFFFFFRRFFF", "F"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> path = {"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF", "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 1004;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> path = {"RRRFRFRFRFFRFRF"};
    RoboCourier* pObj = new RoboCourier();
    clock_t start = clock();
    int result = pObj->timeToDeliver(path);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=269554&rd=4555&pm=1749
********************************************************************************
#line 2 "RoboCourier.cpp" 
 
#include <iostream> 
#include <cstdio> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <map> 
#include <sstream> 
#include <cmath> 
 
using namespace std; 
 
 
const int dx[6]={0,1,1,0,-1,-1}; 
const int dy[6]={-1,-1,0,1,1,0}; 
 
vector< pair<int,int> > nodes; 
vector< pair<int,int> > edges; 
bool okdir[2600][6]; 
int newloc[2600][6]; 
 
class RoboCourier { 
  public: 
   
  int lookup(int x, int y) 
  { 
    for(int i=0;i<nodes.size();i++) 
      if (nodes[i].first==x && nodes[i].second==y) 
        return i;         
    nodes.push_back(make_pair(x,y)); 
    return nodes.size()-1; 
  } 
   
  int timeToDeliver(vector <string> path) { 
    int x=0,y=0,dir=0,src,dest; 
    string p=""; 
    for(int i=0;i<path.size();i++) p+=path[i]; 
    nodes.clear(); 
    edges.clear(); 
    memset(okdir,0,sizeof(okdir)); 
    lookup(x,y); 
    for(int i=0;i<p.size();i++) { 
      switch (p[i]) { 
        case 'R' : dir=(dir+1)%6; break; 
        case 'L' : dir=(dir+5)%6; break; 
        case 'F' :         
          src=lookup(x,y); 
          x+=dx[dir]; 
          y+=dy[dir];             
          dest=lookup(x,y); 
          okdir[src][dir]=1; 
          newloc[src][dir]=dest; 
          okdir[dest][(dir+3)%6]=1; 
          newloc[dest][(dir+3)%6]=src; 
          break; 
      } 
    } 
    dest=lookup(x,y); 
     
    int n=nodes.size(); 
    /* 
    for(int i=0;i<n;i++) { 
      printf("node %d  x=%d, y=%d  ",i,nodes[i].first,nodes[i].second); 
      for(int j=0;j<6;j++) 
        if (okdir[i][j]) 
          printf("%d ",newloc[i][j]); 
      printf("\n"); 
    } 
    exit(0); 
      */ 
    vector<int> vis(n*6,0); 
    vector<int> dist(n*6,99999999); 
    dist[0]=0; 
    while (1) { 
      int best=99999999,cur=-1; 
      for(int i=0;i<n*6;i++) { 
        if (dist[i]<best && !vis[i]) { 
          best=dist[i]; 
          cur=i; 
        } 
      } 
      if (cur<0) { 
        cerr << "Error!" << endl; 
        exit(-1); 
      } 
      vis[cur]=1; 
      int m=cur/6,dir=cur%6; 
      //printf("at node %d\n",m+1); 
      if (m==dest) { 
        //exit(0); 
        return best; 
      } 
      if (dist[m*6+(dir+1)%6]>best+3) dist[m*6+(dir+1)%6]=best+3; 
      if (dist[m*6+(dir+5)%6]>best+3) dist[m*6+(dir+5)%6]=best+3; 
      int steps=0; 
      while (okdir[m][dir]) { 
        steps++; 
        m=newloc[m][dir]; 
        int tm=steps==1?4:(8+(steps-2)*2); 
        if (dist[m*6+dir]>best+tm) dist[m*6+dir]=best+tm;       
        //cout << m << endl; 
      } 
    }     
  } 
};

********************************************************************************
*******************************************************************************/