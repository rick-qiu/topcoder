/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7754
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

class LostParentheses {
public:
    int minResult(string e);
};

int LostParentheses::minResult(string e) {
    int ret;
    return ret;
}


int test0() {
    string e = "55-50+40";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -35;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string e = "10+20+30+40";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string e = "00009-00009";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
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
    string e = "50980-46441-24363-78452+26293+52584-94259-46416+29";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -317857;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string e = "62027+93403-16025+47588-94607+16226-24573";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -43589;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string e = "38222-5957+82602";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -50337;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string e = "81527-18177+61845+65698-17591+95310-74537+43131";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -294762;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string e = "7137-86285-90051+56183+18972-238";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -244592;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string e = "99795+89526+70916-92094-61129+45";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 106969;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string e = "16975+91232+63135-54496+90711+949-96915-13844+7002";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -92575;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string e = "7379-83954+27220";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -103795;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string e = "40965-39362-36823-80824+80367-61673-4820+95110";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -358014;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string e = "25698-30039+32266+60021-45328+50319+20492-13190";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -225957;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string e = "41";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string e = "4450";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 4450;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string e = "42739+87891+85469-2858-65821+48382+4997+26650+7308";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 60083;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string e = "86133+8985-12804";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 82314;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string e = "21196-31278-722";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -10804;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string e = "27221+97756+91020-75775-91072-92305-86067-44993";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -174215;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string e = "50956+7007+67669+30498-24273+61443+15738-64438+205";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -9967;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string e = "9074";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 9074;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string e = "90995-51290+67196+12592-50";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -40133;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string e = "5810+97806+39236+90152+70512-99317+84381+71191+89";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 48538;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string e = "270";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 270;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string e = "83356+41708-77";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 124987;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string e = "80652+20578+17593+13825+18993+97165+49485+47932-52";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 346171;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string e = "69594-28319+40247-60113";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -59085;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string e = "42793-20923+58263+47877+19356+843";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -104469;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string e = "50830+98022+5257+7612+72785+93704+77590+20710-161";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 426349;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string e = "35219-64702-71992-42002-31425-4018+99357-17501+271";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -296049;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string e = "61584-68038-93492+29808-1568+34442-85612-7725-34";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -259135;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string e = "11884-64635+2990-91109-52105+12769+294";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -212018;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string e = "42848-54676-42981-87989-3248-69503+4095-2706-3454";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -225804;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string e = "19925+20772+25099-21462-8740-360";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 35234;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string e = "62268-98376";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -36108;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string e = "41978-46051+26287+1791+24953-88957-59004-7461-1395";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -213921;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string e = "15280+37207-65852";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -13365;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string e = "9347+71262-41";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 80568;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string e = "62210-35286-97259-30790-10874-24444-74807+96161";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -307411;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string e = "51226-46442-96439-17463-55061-39777-98602-52174-37";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -354769;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string e = "30731-7118";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 23613;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string e = "96918-82628-40958-8114";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -34782;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string e = "90169-89036-80538-40791-22775-82971-94442-21988";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -342372;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string e = "68854-48688-11962-48507-35705";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -76008;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string e = "97682+87716+83178+35569+64458+83571+33336+9818+964";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 496292;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string e = "73691+76698+37825+3223+83796";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 275233;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string e = "66831+83033+32706";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 182570;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string e = "98979+1586+49415+37180+31929+36145+22151+60949+73";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 338407;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string e = "90727+60972+35106+35269+36553+11356+593";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 270576;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string e = "99999+99999+99999+99999+99999+99999+99999+99999+99";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 800091;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string e = "4+9-2";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string e = "063+539-03761-069-3627-15790+075-4907+11289-06170";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -45086;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string e = "0391+0241+02860-03603";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -111;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string e = "01474-09";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 1465;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string e = "0519+296+14112-2307+0517-1898-3754-32157+516+882";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -27104;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string e = "3487-08021-2868";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -7402;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string e = "09411-562-790-11612-1117-05595";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -10265;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string e = "02876-190-16152-1371+0028-0180-09802+8066+731-1229";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -34873;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string e = "1-2+3-4+5-6+7-8+9-10+11-12+13-14+15-16+17+18+19";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -188;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string e = "10-3+1+002+3-0004+5";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -8;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string e = "555";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 555;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string e = "9999-555+666-77";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = 8701;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string e = "01+012-02-045-20+03+04-05+06+07-08+90+029";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -206;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string e = "1+1-1+1-1-1-1+1+1-1-1-1-1+1+1+1+1100-1-1-2-2+3-3-4";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -1128;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string e = "1-2+3-4+5-6+7-8-9-1+2-3+4+5-6+7-8+9+1-2-3-4+5-6+7";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -116;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string e = "1-100-1";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -100;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string e = "2-2-2-2-2-2-2-2-2-2-2-2-2-2-2-2-2-2-2-2-2-2-2-2-2";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -46;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string e = "1000-2000+3000-4000+5000-6000";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -19000;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string e = "5";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
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
    string e = "00010+20+30+40-34-329-394+28-334+20-329-394+28-39";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -1829;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string e = "1+2-3+4-5+6-7";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -22;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string e = "1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1-1";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -23;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string e = "00009-00009+0009-09+09-09+09-09";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -54;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string e = "5-5+5-15";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -20;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string e = "1-2+3-4+5-6+7-80+9-10+7-9+4-1+1+1+1-3-3-3-3-3-3+1";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -168;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string e = "1+2-3+4-5+6";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -15;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string e = "1-1+1+1+1+1+1+1+1+1-1+1+1+1+1+1-1+1+1+1+1+1-1+1-1";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -23;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string e = "5-5+5+5-5+5-5+5+5-5+5-5+5+5-5+5-5+5+5-5+5-5+5+5-5";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -115;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string e = "3+1+8-1-3+2+1-7";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string e = "10+10+10-50-50+10+15+20-10+5+6+7";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -143;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string e = "2-2-2";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string e = "2-2-3-100+50+120-1000-20";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -1293;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string e = "5-50+40-55-50+40-55-50+40-55-50+40-55-50+40-55-5+7";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -732;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string e = "3-5+2+4-2+3-43+43+42-234";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -375;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string e = "4+2+3-4-56-21+222-123-344+212-111-2200";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -3284;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string e = "50-20-100";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -70;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string e = "55123+24245-23245+52213-24225+44345-52125+12325-5";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -129115;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string e = "99999-99999-99999-99999-99999-99999-99999+99999";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -599994;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string e = "1-2+3-4+5-6+7";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -26;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string e = "10+20+30+40-20+40-30+20";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -10;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string e = "1-2+3+4+5+6+7";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -26;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string e = "1+2-3+3+4+5-7-7-6-9-8+2-3-4+5+6+5+6+7-5-6-7-8-9-1";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -123;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string e = "1-2+3+4-1+3+3+2+4+3-43-56-54-1-2-3-4";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -187;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string e = "1+2-100";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -97;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string e = "00005+123-231+213+23-237";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -576;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string e = "10+20+30+40-20+40-30+20-40+50+30-20-10+60-10";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -230;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string e = "003-23-453+34-2324+23-142+232-008";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -3236;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string e = "1-1+1-1+1-1+1-1+1-1+1-1+1-1+1-1+1-1+1-1+1-1+1-1+10";
    LostParentheses* pObj = new LostParentheses();
    clock_t start = clock();
    int result = pObj->minResult(e);
    clock_t end = clock();
    delete pObj;
    int expected = -32;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7340263&rd=10672&pm=7754
********************************************************************************
#include<iostream> 
#include<sstream> 
#include<cstdlib> 
#include<cmath> 
#include<vector> 
#include<string> 
#include<algorithm> 
using namespace std; 
typedef vector<int>VI;typedef vector<VI>VVI; 
typedef vector<string>VS; 
typedef pair<int,int>PII; 
#define FOR(i,n) for((i)=0;(i)<(n);(i)++) 
#define FORN(i,n) for((i)=(n)-1;(i)>=0;(i)--) 
#define BE(a) ((a).begin()),((a).end()) 
#define SI(a) ((a).size()) 
#define PB push_back 
#define MP make_pair 
#define FORIT(i,a) for((i)=(a).begin();(i)!=(a).end();(i)++) 
#define CLR(a,v) memset((a),(v),sizeof(a)) 
template <class Ty, class Tx> 
Ty cast(const Tx &x) { Ty y; stringstream ss(""); ss<<x; ss.seekg(0); ss>>y; return y; } 
VS tokenize(string s, string del=" ") { 
        VS ret(0); ret.reserve(1000); 
        for (int i=0,j;i<SI(s);i=j+1) { 
                if ((j=s.find_first_of(del,i))==s.npos) j = SI(s); 
                if (j-i>0) ret.PB(s.substr(i,j-i)); 
        } 
        return ret; 
} 
template <class T, class TS> 
vector<T> tokt(string s, TS del=" ") { 
        vector<T> ret(0); ret.reserve(1000); 
        VS vs = tokenize(s,string(del)); 
        for (int i=0;i<SI(vs);i++) ret.PB(cast<T>(vs[i])); 
        return ret; 
} 
 
class LostParentheses { 
public: 
  int minResult(string s) { 
    VS tok; 
    VI tok2; 
    int ret, i, j; 
    tok = tokenize(s, "-"); 
    ret = 0; 
    FOR (i,SI(tok)) { 
      tok2 = tokt<int>(tok[i], "+"); 
      FOR (j,SI(tok2)) if (i) ret -= tok2[j]; 
      else ret += tok2[j]; 
    } 
    return ret; 
  } 
 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]                    
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/