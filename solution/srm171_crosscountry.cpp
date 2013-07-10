/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1950
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

class CrossCountry {
public:
    string scoreMeet(int numTeams, string finishOrder);
};

string CrossCountry::scoreMeet(int numTeams, string finishOrder) {
    string ret;
    return ret;
}


int test0() {
    int numTeams = 2;
    string finishOrder = "AABBABBABBA";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int numTeams = 3;
    string finishOrder = "CCCBBBBBAAACC";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BC";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int numTeams = 4;
    string finishOrder = "ABDCBADBDCCDBCDBCAAAC";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BDCA";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int numTeams = 10;
    string finishOrder = "BDHCEAJBIDBCCHGCBDJEBAAHEGAGGADHGIECJEHAEBDADJCDHG";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDAHEG";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int numTeams = 5;
    string finishOrder = "AAAABBBBCCCCDDDDEEEEEE";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int numTeams = 3;
    string finishOrder = "ABCABCABCABC";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int numTeams = 10;
    string finishOrder = "AAAAAAABBBBBBBCCCCCCCDDDDDDDEEEEEEEFFFFFFFGGGGGGGH";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFG";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int numTeams = 10;
    string finishOrder = "AAAAABBBBBCCCCCDDDDDEEEEEGGGGGHHHHHIIIIIJJJJJ";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEGHIJ";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int numTeams = 10;
    string finishOrder = "ABCDEFGHIJJIHGFEDCBAABCDEFGHIJJIHGFEDCBAJIHGFEDCBA";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "JIHGFEDCBA";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int numTeams = 5;
    string finishOrder = "ACEBEDCBEECECCAAABD";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "EC";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int numTeams = 7;
    string finishOrder = "DEGGCFBGFBBGDEADEEGFCFCFECBGBEG";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "GEFB";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int numTeams = 7;
    string finishOrder = "EEEBGBGEDEAFGFFAFACGBCDEACFAEFDFC";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "EFA";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int numTeams = 7;
    string finishOrder = "FBBDEAABFAFFDFCGFGGEDCECEBECGFDDCGADA";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "FAEDGC";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int numTeams = 7;
    string finishOrder = "EEEBGBGEDEAFGFFAFACGBCDEACFAEFDFC";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "EFA";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int numTeams = 5;
    string finishOrder = "CAEEBDCDDADADBEEACCADCDA";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "DAC";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int numTeams = 10;
    string finishOrder = "HGJGDAHIBIFCHABIDIBGHIHADABCJADAFCJIDCHIFCJAJGJCBG";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "HIADBGCJ";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int numTeams = 7;
    string finishOrder = "BGFCBCCCDCCAEBEAGBCGEAGBDGFGB";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "CBG";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int numTeams = 6;
    string finishOrder = "FEBADADADADEDCBEBEDCFEDCABE";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "DAE";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int numTeams = 7;
    string finishOrder = "FDEBAAGDBGBBCGBDFBCGDBADGGDCEEGFACDFACF";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BDGAFC";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int numTeams = 5;
    string finishOrder = "DEABACBCCCACDADCCBDEEAEAEBBADD";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "CADBE";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int numTeams = 9;
    string finishOrder = "IGIFHGBDFGFEDDABDFBEIDHDDEGAHBEHBAGGHAGFBICECHIABF";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "DGFBIHEA";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int numTeams = 3;
    string finishOrder = "BABCAABABAB";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int numTeams = 3;
    string finishOrder = "ABACBBABABA";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int numTeams = 2;
    string finishOrder = "AABBABBABBA";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int numTeams = 3;
    string finishOrder = "BABCAABABAB";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int numTeams = 3;
    string finishOrder = "ABACBCBABABABA";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BA";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int numTeams = 4;
    string finishOrder = "ABDCBADBDCCDBCDBCAAAC";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BDCA";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int numTeams = 3;
    string finishOrder = "ACBBAABBABABA";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BA";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int numTeams = 3;
    string finishOrder = "ABBABAACBBAB";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BA";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int numTeams = 3;
    string finishOrder = "ABABABBABCAB";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BA";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int numTeams = 3;
    string finishOrder = "ABABABABBCCCABACC";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BAC";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int numTeams = 5;
    string finishOrder = "ABABABABBCDEABA";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BA";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int numTeams = 3;
    string finishOrder = "ABCABCABCABC";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int numTeams = 3;
    string finishOrder = "ABBAABBCAABCBCCCC";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BAC";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int numTeams = 7;
    string finishOrder = "ABBAABBCAABABACCDDCDCDEEDEE";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCD";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int numTeams = 10;
    string finishOrder = "ABCDEFGHIJJJJABDCJHIDEHHJABEDFFBBCGGGJ";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "JB";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int numTeams = 3;
    string finishOrder = "BABCAABABABAB";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int numTeams = 3;
    string finishOrder = "BABCAABABABBA";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BA";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int numTeams = 3;
    string finishOrder = "BAACBBAABCBABA";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BA";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int numTeams = 2;
    string finishOrder = "ABABABBABBAB";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BA";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int numTeams = 3;
    string finishOrder = "ABABABABBCCCAB";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BA";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int numTeams = 6;
    string finishOrder = "ABACBBABABABBDEDFEEDEDEDEE";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BAED";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int numTeams = 3;
    string finishOrder = "ABBAABBCAABBA";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BA";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int numTeams = 3;
    string finishOrder = "BABCAABABABB";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BA";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int numTeams = 4;
    string finishOrder = "AABBCCDDDDD";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "D";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int numTeams = 3;
    string finishOrder = "ABBAABABCBCAB";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BA";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int numTeams = 3;
    string finishOrder = "ABBABAACBBAA";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int numTeams = 3;
    string finishOrder = "BAABAABCBBCCCCAB";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "BAC";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int numTeams = 3;
    string finishOrder = "BABCAABABABAAB";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int numTeams = 3;
    string finishOrder = "AAAAABBBBBCCCCAA";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int numTeams = 2;
    string finishOrder = "ABBAABBAABB";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int numTeams = 3;
    string finishOrder = "ABBAABABBCAABB";
    CrossCountry* pObj = new CrossCountry();
    clock_t start = clock();
    string result = pObj->scoreMeet(numTeams, finishOrder);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=152347&rd=4660&pm=1950
********************************************************************************
#pragma warning( disable : 4786 ) 
 
#include <vector> 
#include <string> 
#include <algorithm> 
#include <cstdio> 
#include <set> 
#include <map> 
#include <functional> 
#include <deque> 
 
using namespace std; 
 
string fo; 
 
int cat( int kar, int ct ) { 
  int acu = 0; 
  for( int i = 0; i < fo.size(); i++ ) { 
    if( ct == 0 ) 
      break; 
    if( fo[ i ] == kar ) { 
      acu += i; 
      ct--; 
    } 
  } 
  if( ct ) 
    return 1000000; 
  return acu; 
} 
 
class st { 
public: 
  bool operator()( char a, char b ) const { 
    int aca = cat( a, 5 ); 
    int acb = cat( b, 5 ); 
    if( aca == acb ) { 
      aca = cat( a, 6 ); 
      acb = cat( b, 6 ); 
    } 
    if( aca == acb ) { 
      return a < b; 
    } 
    return aca < acb; 
  } 
}; 
 
class CrossCountry { 
  public: 
  string scoreMeet(int numTeams, string finishOrder) { 
    fo = finishOrder; 
    string beef; 
    for( int i = 0; i < numTeams; i++ ) 
      if( count( finishOrder.begin(), finishOrder.end(), 'A' + i ) >= 5 ) 
        beef += ( 'A' + i ); 
    sort( beef.begin(), beef.end(), st() ); 
    return beef; 
  } 
}; 
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/