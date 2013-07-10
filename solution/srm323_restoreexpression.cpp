/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6580
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

class RestoreExpression {
public:
    string restore(string expression);
};

string RestoreExpression::restore(string expression) {
    string ret;
    return ret;
}


int test0() {
    string expression = "5+?=?4";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "5+9=14";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string expression = "?+?=4";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "4+0=4";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string expression = "?+?=?";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "9+0=9";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string expression = "?2+?2=4";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "no solution";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string expression = "??+1=1?";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "18+1=19";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string expression = "??????????+??????????=??????????";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "8999999999+1000000000=9999999999";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string expression = "123456789+987654321=1111111110";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789+987654321=1111111110";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string expression = "?2?4?6?8?+9?7?5?2?=1?1?1?1?1?";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "928486889+90705029=1019191918";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string expression = "??+??????????????????????=??????????????????????";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "99+9999999999999999999900=9999999999999999999999";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string expression = "?+??????????????????????=???????????????????????";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "9+9999999999999999999999=10000000000000000000008";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string expression = "????????????????+????????????????=????????????????";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "8999999999999999+1000000000000000=9999999999999999";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string expression = "??1?2???3??4????+?6??7?8??9???4??=??2??3??4??5?6??";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "8319231930949299+1610708019010400=9929939949959699";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string expression = "??1?2???3??4????+?6??7?8??99??4??=??2??3??4??5?6?9";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "8319231930049299+1610708019910400=9929939949959699";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string expression = "3?+??=50";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "39+11=50";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string expression = "?50+?50=100";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "no solution";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string expression = "9?9+??=999";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "989+10=999";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string expression = "???+?=???0";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "999+1=1000";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string expression = "1234567891234567+1234567891234567=2469135782469134";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1234567891234567+1234567891234567=2469135782469134";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string expression = "?2345??891234567+1?34??6891234567=2469???78246???4";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1234599891234567+1234996891234567=2469596782469134";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string expression = "?2345??891???567+1?34??6891?3?5?7=2469???78246???4";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1234599891438567+1234996891030597=2469596782469164";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string expression = "?2345??891???55+??34??6891?3?5?=?2469???78246???";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "923459989143855+323499689103059=1246959678246914";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string expression = "?2345??891???55+1?34??6891?3?5?=?2469???78246???";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "no solution";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string expression = "?2345??891???55+2?34??6891?3?5?=?2469???78246???";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "no solution";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string expression = "?2345??891???55+4?34??6891?3?5?=?2469???78246???";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "823459989143855+423499689103059=1246959678246914";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string expression = "?2345??891???55+??34??6891?3?5?=12469???78246???";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "923459989143855+323499689103059=1246959678246914";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string expression = "?2345??891???55+4?34??6891?3?5?=?2469???78246??1";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "823459989143855+423499689103056=1246959678246911";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string expression = "?2345??891???55+4?34??6891?3?5?=?2469???78246??2";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "823459989143855+423499689103057=1246959678246912";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string expression = "?2345??891???55+4?34??6891?3?5?=?2469???78246??3";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "823459989143855+423499689103058=1246959678246913";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string expression = "?2345??891???55+4134??6891?3?5?=?2469???78246??3";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "no solution";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string expression = "581+4??=100?";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "581+428=1009";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string expression = "5???????????????+????????????????=7???????????????";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "5999999999999999+2000000000000000=7999999999999999";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string expression = "30+??=50";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "30+20=50";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string expression = "9+?=?1";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "9+2=11";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string expression = "??+44=96";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "52+44=96";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string expression = "53+44=96";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "no solution";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string expression = "??+??=96";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "86+10=96";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string expression = "8??+??=9?6";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "899+97=996";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string expression = "9?+1??=106";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "no solution";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string expression = "??+?=18";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "18+0=18";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string expression = "?+??=18";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "8+10=18";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string expression = "15+??=15";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "no solution";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string expression = "??+15=15";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "no solution";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string expression = "1+2=4";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "no solution";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string expression = "15+15=??";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "15+15=30";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string expression = "1+2=?4";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "no solution";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string expression = "1?+2?=4?";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "19+29=48";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string expression = "?+???????????????????????=????????????????????????";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "9+99999999999999999999999=100000000000000000000008";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string expression = "???????????????????????+?=????????????????????????";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "99999999999999999999999+9=100000000000000000000008";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string expression = "??+??????????????????????=????????????????????????";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "no solution";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string expression = "?????????????????????+???=????????????????????????";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "no solution";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string expression = "8+8=6";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "no solution";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string expression = "8+8=16";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "8+8=16";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string expression = "1+9999999999999999999999?=???????????????????????";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1+99999999999999999999998=99999999999999999999999";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string expression = "1+9999999999999999999999?=????????????????????????";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "1+99999999999999999999999=100000000000000000000000";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string expression = "9999999999999999999999?+1=???????????????????????";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "99999999999999999999998+1=99999999999999999999999";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string expression = "9999999999999999999999?+1=????????????????????????";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "99999999999999999999999+1=100000000000000000000000";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string expression = "?+?=19";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "no solution";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string expression = "?+?=0";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "0+0=0";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string expression = "1+99999999999999999999999=???????????????????????";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "no solution";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string expression = "99999999999999999999999+1=???????????????????????";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "no solution";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string expression = "?????????6????????????+?=?????????7????????????";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "9999999996999999999999+9=9999999997000000000008";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string expression = "???????????????9+???????????????9=???????????????9";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "no solution";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string expression = "?+?=4";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "4+0=4";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string expression = "1?2?3?4?5?6?7?8+???????????????=2?3?4?5?6?7?8?9";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "192939495969798+101010101010101=293949596979899";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string expression = "??????????????????????+??=????10????5???????????";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "9999109999599999999989+10=9999109999599999999999";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string expression = "?0?7??????3?0???+?07???3???0????=??0?10????5?????";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "9097999699390999+807110300209000=9905109999599999";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string expression = "?????2+?????2=4";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "no solution";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string expression = "???????????4+???????????7=???????????2";
    RestoreExpression* pObj = new RestoreExpression();
    clock_t start = clock();
    string result = pObj->restore(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "no solution";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=310333&rd=10003&pm=6580
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <map> 
#include <string> 
#include <utility> 
#include <vector> 
 
using namespace std; 
 
 
string A, B, C; 
 
struct return_type { 
   string a, b, c; 
   return_type() { a = b = c = ""; } 
}; 
bool operator == ( const return_type &X, const return_type &Y ) { 
   return X.a == Y.a && X.b == Y.b && X.c == Y.c; 
} 
 
return_type none; 
 
typedef pair<int,int> par; 
 
map<par, return_type> memo; 
 
struct RestoreExpression { 
 
   return_type rec( int i, int carry ) { 
      if( i == 0 ) { 
         if( carry ) return none; 
         return return_type(); 
      } 
 
      par p( i, carry ); 
      if( memo.count( p ) ) return memo[p]; 
      return_type &ret = memo[p]; 
       
      ret = none; 
 
      for( int aa = 0; aa < 10; ++aa )  
         for( int bb = 0; bb < 10; ++bb )  
            for( int cc = 0; cc < 10; ++cc ) { 
 
               if( i > A.size() ) { 
                  if( aa > 0 ) continue; 
               } else { 
                  int pa = (int)A.size() - i; 
                  if( pa == 0 && aa == 0 && A.size() > 1 ) continue; 
                  if( A[pa] != '?' && A[pa] != aa+'0' ) continue; 
               } 
               if( i > B.size() ) { 
                  if( bb > 0 ) continue; 
               } else { 
                  int pb = (int)B.size() - i; 
                  if( pb == 0 && bb == 0 && B.size() > 1 ) continue; 
                  if( B[pb] != '?' && B[pb] != bb+'0' ) continue; 
               } 
               if( i > C.size() ) { 
                  if( cc > 0 ) continue; 
               } else { 
                  int pc = (int)C.size() - i; 
                  if( pc == 0 && cc == 0 && C.size() > 1 ) continue; 
                  if( C[pc] != '?' && C[pc] != cc+'0' ) continue; 
               } 
 
               for( int borrow = 0; borrow < 2; ++borrow ) { 
                  if( (aa+bb + borrow)/10 != carry ) continue; 
                  if( (aa+bb + borrow)%10 != cc ) continue; 
                   
                  return_type t = rec( i-1, borrow ); 
                  if( t == none ) continue; 
                  t.a = (char)(aa+'0') + t.a; 
                  t.b = (char)(bb+'0') + t.b; 
                  t.c = (char)(cc+'0') + t.c; 
 
                  if( ret == none ) ret = t; 
                  else if( t.c > ret.c ) ret = t; 
                  else if( t.c == ret.c && t.a > ret.a ) ret = t; 
               } 
            } 
      return ret; 
   } 
 
   string trim( string s ) { 
      while( s.size() > 1 && s[0] == '0' ) 
         s.erase( 0, 1 ); 
      return s; 
   } 
 
   string restore( string expression ) { 
      int f1 = expression.find( "+" ); 
      int f2 = expression.find( "=" ); 
      A = expression.substr( 0, f1 ); 
      B = expression.substr( f1+1, f2-f1-1 ); 
      C = expression.substr( f2+1); 
 
      none.a = none.b = none.c = "NONE"; 
 
      if( A.size() > C.size() ) return "no solution"; 
      if( B.size() > C.size() ) return "no solution"; 
 
      memo.clear(); 
 
      return_type ret = rec( C.size(), 0 ); 
      if( ret == none ) return "no solution"; 
 
      return trim(ret.a) + "+" + trim(ret.b) + "=" + trim(ret.c); 
   } 
 
 
 
 
 
 
    
  
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 3.0 beta 7 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/