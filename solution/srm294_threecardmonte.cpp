/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6109
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

class ThreeCardMonte {
public:
    string position(string swaps);
};

string ThreeCardMonte::position(string swaps) {
    string ret;
    return ret;
}


int test0() {
    string swaps = "L";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string swaps = "REL";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string swaps = "RFRFR";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string swaps = "";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string swaps = "FLRELFLRELLFRLFEELFLRFLELRFLRFREFRFLLRFERLFLREFRFL";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string swaps = "LLLRLLRERLFFEELFLRRFEFEFLFELFFLFFLRLREEFL";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string swaps = "LEFLRERERFREREELFFFLFRLRLEFREEEEFEFRRLLFFFFLELL";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string swaps = "LERLRFRRFEERFRLREFFRFLFLFEFLEFFRFFRLRRLEF";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string swaps = "EFRFRFFREEFFFLFLLRRRRLRRLLLLERFFLLERREELFR";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string swaps = "LFLLLLFEFEREFEERERFFRLEEELRREEREEFLRLLFFLEFEER";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string swaps = "RLEFLFFLFLLLRRELREERREERLFELERLFLLRREFEFFEFLR";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string swaps = "LLLFFLELELRRFRLFFFRFLLRFEERRFRRLLELFERLFR";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string swaps = "FEFERRRFLFFLELFFLFLLREFLEEEFEEFLFFERRLEEFLLFLF";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string swaps = "LFELELFRLFRFLREFLFLRLLEELLEERRLRFEFFLRLEL";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string swaps = "LREEFEFEEFLEFEFLELLRERRRLLLRFRLLLRFREERLREEELEEF";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string swaps = "REFFFERREERLRELLELLLRRREFREEELELLLLLERFRLLEEFF";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string swaps = "RELLRFFEEFEEERFRRLLRLFRRLFFRLFLLLLRFLRFLEEFR";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string swaps = "RLFRRFFRERLRFEFFEFRLELRFELELRERRRLEELRLREFLLLFL";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string swaps = "LELERFFEEFFELEFFRLFFLFEEFRFLRFLREEFEFLFFFRFR";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string swaps = "LRRRRERFLLFRREFRFRRLRFFELLFELFLLFRLRFLFRREE";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string swaps = "LRFERRFEFEFFERLFEREREEFELLEEFFRRLRELRELRFL";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string swaps = "LLLRLLRERLFFEELFLRRFEFEFLFELFFL";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string swaps = "FLRLREEFLELEFLRERERFREREELFFFLFRLRLEFREEEEFEFRRL";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string swaps = "LLLRLLRERLFFEELFLRRFEFEFLFELFFL";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string swaps = "FLRLREEFLELEFLRERERFREREELFFFLFRLRLEFREEEEFEFRRL";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string swaps = "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string swaps = "EEEEEEEEEEEEEEEEEEEEEEE";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string swaps = "LLLRLLRERLFFEELFLRRFEFEFLFELFFL";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string swaps = "FLRLREEFLELEFLRERERFREREELFFFLFRLRLEFREEEEFEFRRL";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string swaps = "LLLRLLRERLFFEELFLRRFEFEFLFELFFL";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string swaps = "FLRLREEFLELEFLRERERFREREELFFFLFRLRLEFREEEEFEFRRL";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string swaps = "FLRELFLRELLFRLFEELFLRFLELRFLRFREFRFLLRFERLFLREFRFL";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string swaps = "E";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string swaps = "LE";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string swaps = "LRELRELRELRELRELREEEEEEEEEEEEEEEEEEEEEEEEEE";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string swaps = "LL";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string swaps = "L";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string swaps = "LR";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string swaps = "RL";
    ThreeCardMonte* pObj = new ThreeCardMonte();
    clock_t start = clock();
    string result = pObj->position(swaps);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20537979&rd=9815&pm=6109
********************************************************************************
#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
#include <map>
#include <stack>
#include <cmath>
#include <cstdlib>
#include <deque>
#include <utility>
 
using namespace std;
 
class ThreeCardMonte
{
        public:
                string position(string swaps)
                {
                        int pos=1;
                        int i;
                        for(i=0;i<swaps.length();i++) {
                                if(swaps[i]=='L' && (pos==0 || pos==1)) {
                                        if(pos==0)
                                                pos=1;
                                        else
                                                pos=0;
                                }
                                if(swaps[i]=='R' && (pos==1 || pos==2)) {
                                        if(pos==1)
                                                pos=2;
                                        else
                                                pos=1;
                                }
                                if(swaps[i]=='E' && (pos==0 || pos==2)) {
                                                if(pos==0)
                                                        pos=2;
                                                else
                                                        pos=0;
                                }
                        }
                        if(pos==0)
                    return "L";
                  else if(pos==1)
                    return "M";
                  else
                    return "R";
                }
                
};

********************************************************************************
*******************************************************************************/