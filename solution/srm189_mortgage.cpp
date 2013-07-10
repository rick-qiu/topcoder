/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2427
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

class Mortgage {
public:
    int monthlyPayment(int loan, int interest, int term);
};

int Mortgage::monthlyPayment(int loan, int interest, int term) {
    int ret;
    return ret;
}


int test0() {
    int loan = 1000;
    int interest = 50;
    int term = 1;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int loan = 2000000000;
    int interest = 6000;
    int term = 1;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 671844808;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int loan = 1000000;
    int interest = 1000000;
    int term = 1000;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 988143;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int loan = 1000000;
    int interest = 129;
    int term = 30;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 10868;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int loan = 100;
    int interest = 1;
    int term = 1000;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int loan = 618083873;
    int interest = 932377;
    int term = 462;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 610230012;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int loan = 37007334;
    int interest = 497647;
    int term = 389;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 36135971;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int loan = 910806859;
    int interest = 106489;
    int term = 245;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 818564691;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int loan = 620972289;
    int interest = 447604;
    int term = 815;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 604759055;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int loan = 1964106774;
    int interest = 57176;
    int term = 469;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1623392057;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int loan = 396495408;
    int interest = 965433;
    int term = 303;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 391627612;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int loan = 1303970803;
    int interest = 751105;
    int term = 470;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1283465566;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int loan = 560290889;
    int interest = 94158;
    int term = 606;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 496956137;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int loan = 1193263809;
    int interest = 406909;
    int term = 59;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1159081766;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int loan = 790990757;
    int interest = 569741;
    int term = 255;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 774674409;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int loan = 1878848491;
    int interest = 765597;
    int term = 345;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1849853804;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int loan = 1767005838;
    int interest = 159220;
    int term = 890;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1643164757;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int loan = 160606687;
    int interest = 352973;
    int term = 961;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 155326077;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int loan = 468903894;
    int interest = 557830;
    int term = 713;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 459029289;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int loan = 622058302;
    int interest = 712197;
    int term = 633;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 611750749;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int loan = 804652054;
    int interest = 4523;
    int term = 437;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 220265161;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int loan = 317486105;
    int interest = 626173;
    int term = 530;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 311516199;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int loan = 1266328720;
    int interest = 680421;
    int term = 78;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1244382615;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int loan = 133678780;
    int interest = 660664;
    int term = 497;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 131294016;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int loan = 180769391;
    int interest = 462677;
    int term = 325;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 176199478;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int loan = 645338021;
    int interest = 625478;
    int term = 616;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 633190063;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int loan = 534515614;
    int interest = 800188;
    int term = 584;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 526618197;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int loan = 705069909;
    int interest = 347802;
    int term = 229;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 681554646;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int loan = 614051902;
    int interest = 656351;
    int term = 585;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 603026823;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int loan = 721647343;
    int interest = 325968;
    int term = 970;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 696024302;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int loan = 1214770213;
    int interest = 843509;
    int term = 161;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1197730951;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int loan = 925650314;
    int interest = 407094;
    int term = 289;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 899145989;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int loan = 1992772528;
    int interest = 53725;
    int term = 966;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1628934258;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int loan = 327822429;
    int interest = 896518;
    int term = 882;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 323492445;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int loan = 1280563618;
    int interest = 750707;
    int term = 121;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1260415956;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int loan = 1114588932;
    int interest = 332313;
    int term = 22;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1075743268;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int loan = 61085060;
    int interest = 497791;
    int term = 148;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 59647176;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int loan = 239835955;
    int interest = 918655;
    int term = 492;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 236743476;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int loan = 252618379;
    int interest = 388703;
    int term = 450;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 245053124;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int loan = 1157290063;
    int interest = 733456;
    int term = 947;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1138660553;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int loan = 259665595;
    int interest = 69925;
    int term = 161;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 221630965;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int loan = 929938417;
    int interest = 686154;
    int term = 508;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 913954464;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int loan = 175138409;
    int interest = 695122;
    int term = 926;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 172166276;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int loan = 1495989673;
    int interest = 426673;
    int term = 394;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1455066535;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int loan = 1041972280;
    int interest = 681297;
    int term = 337;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1023937200;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int loan = 1382590995;
    int interest = 11132;
    int term = 41;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 665355481;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int loan = 265538953;
    int interest = 562037;
    int term = 137;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 259987974;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int loan = 1981832936;
    int interest = 758911;
    int term = 487;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1950983727;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int loan = 512042040;
    int interest = 323687;
    int term = 861;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 493737774;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int loan = 163543995;
    int interest = 973173;
    int term = 738;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 161551931;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int loan = 1511988723;
    int interest = 580548;
    int term = 752;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1481368648;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int loan = 1490110002;
    int interest = 305117;
    int term = 39;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1433722865;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int loan = 1463035902;
    int interest = 147540;
    int term = 281;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1352991833;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int loan = 1378407427;
    int interest = 121376;
    int term = 802;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1254390445;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int loan = 1939524178;
    int interest = 2486;
    int term = 309;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 332849450;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int loan = 182518;
    int interest = 88;
    int term = 197;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1330;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int loan = 87128;
    int interest = 96;
    int term = 279;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 693;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int loan = 184597;
    int interest = 40;
    int term = 497;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 615;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int loan = 72135;
    int interest = 69;
    int term = 268;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 414;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int loan = 179135;
    int interest = 74;
    int term = 12;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1870;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int loan = 48826;
    int interest = 32;
    int term = 424;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 131;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int loan = 41875;
    int interest = 84;
    int term = 677;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 293;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int loan = 177616;
    int interest = 57;
    int term = 625;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 841;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int loan = 77336;
    int interest = 83;
    int term = 661;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 533;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int loan = 13115;
    int interest = 25;
    int term = 82;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int loan = 187890;
    int interest = 49;
    int term = 103;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 770;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int loan = 164227;
    int interest = 44;
    int term = 706;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 601;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int loan = 138709;
    int interest = 23;
    int term = 280;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 267;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int loan = 9303;
    int interest = 82;
    int term = 1000;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int loan = 14512;
    int interest = 15;
    int term = 310;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int loan = 151273;
    int interest = 73;
    int term = 895;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 916;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int loan = 127121;
    int interest = 6;
    int term = 846;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int loan = 143038;
    int interest = 65;
    int term = 879;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 772;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int loan = 126061;
    int interest = 53;
    int term = 955;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 556;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int loan = 113753;
    int interest = 76;
    int term = 387;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 717;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int loan = 1999999999;
    int interest = 1000000;
    int term = 1;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1976284585;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int loan = 2000000000;
    int interest = 6000;
    int term = 1;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 671844808;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int loan = 20000000;
    int interest = 46;
    int term = 999;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 76375;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int loan = 1000000;
    int interest = 1000000;
    int term = 1000;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 988143;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int loan = 1999999999;
    int interest = 1000000;
    int term = 1;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1976284585;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int loan = 1999999997;
    int interest = 100000;
    int term = 1;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 1785714284;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int loan = 1000;
    int interest = 50;
    int term = 1;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 86;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int loan = 3948234;
    int interest = 984;
    int term = 73;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 299221;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int loan = 2000000000;
    int interest = 1;
    int term = 1000;
    Mortgage* pObj = new Mortgage();
    clock_t start = clock();
    int result = pObj->monthlyPayment(loan, interest, term);
    clock_t end = clock();
    delete pObj;
    int expected = 263648;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8498860&rd=4765&pm=2427
********************************************************************************
#include <string> 
#include <cstdarg> 
#include <set> 
#include <utility> 
#include <vector> 
#include <queue> 
#include <bitset> 
#include <map> 
#include <functional> 
#include <sstream> 
#include <algorithm> 
#include <iostream> 
#include <cstddef> 
#include <cstring> 
#include <cctype> 
#include <cmath> 
#include <cstdio> 
 
using namespace std; 
 
typedef vector<int> VI; 
typedef vector<VI > VVI; 
typedef vector<double> VD; 
typedef vector<VD > VVD; 
typedef vector<string> VS; 
typedef vector<VS > VVS; 
typedef signed long long s64; 
typedef unsigned long long u64; 
typedef pair<int,int> PII; 
 
#define all(a) a.begin(),a.end() 
#define out(x) cout<<#x<<" = "<<(x)<<endl; 
#define out2(x,y) out(x) out(y) 
#define out3(x,y,z) out(x) out(y) out(z) 
#define fillchar(a,i) memset(a,i,sizeof(a)); 
#define fori(i,max) for(int i=0;i<(int)(max) ;(i)++) 
#define for2i(i,min,max) for(int i=min;i<(int)(max) ;(i)++) 
#define forv(i,a) fori(i,(int)(a.size())) 
#define forv2(i,j,a) forv(i,a) forv(j,(a)[i]) 
#define forIter(i, c) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++) 
 
void xd(VS &c) { 
  forv(i,c) cout<<c[i]<<endl; 
} 
 
template<typename T> 
vector<T> make0() { 
  return vector<T>(0); 
} 
template<typename T> 
vector<T> make1(const T &a) { 
  return vector<T>(1,a); 
} 
 
template<typename T> 
vector<T> make2(const T &a,const T &b) { 
  vector<T> r(2); 
  r[0]=a; r[1]=b; 
  return r; 
} 
 
template<typename T> 
vector<T> make3(const T &a,const T &b,const T &c) { 
  vector<T> r(3); 
  r[0]=a; r[1]=b; r[2]=c; 
  return r; 
} 
 
template <typename T>  
void sortref(T &a,T &b) { 
  if (a>b) swap(a,b); 
} 
 
template <typename T>  
void sortref(T &a,T &b,T &c) { 
  if (a>b) swap(a,b); 
  if (a>c) swap(a,c); 
  if (b>c) swap(b,c); 
} 
 
template <typename T> 
int sgn(T x) { 
  return x<0 ? -1 : x>0; 
} 
 
string lc(const string &x) { 
  string r=x; 
  for(size_t i=0;i<r.size();i++)  
    r[i]=tolower(r[i]); 
  return r; 
} 
 
string uc(const string &x) { 
  string r=x; 
  for(size_t i=0;i<r.size();i++)  
    r[i]=toupper(r[i]); 
  return r; 
} 
 
int gcd(int a,int b) { return b?gcd(b,a%b):a; }; 
u64 gcd(u64 a,u64 b) { return b?gcd(b,a%b):a; }; 
 
u64 tohop(int a,int b) { 
  static u64 cache[68][35]={{1}}; 
  if (a<0 || a>67) return (u64)-1; 
  if (b<0 || b>a) return 0; 
  if (b<a-b) b=a-b; 
  u64 &r= cache[a][b]; 
  if (r) return r; 
  return r=tohop(a-1,b-1)+tohop(a-1,b); 
} 
 
int positionn(string source,string t,int n) { 
  int i=0; 
  while (n && (i=source.find (t,i))!=-1)  
    if (--n) i++; 
  return i; 
} 
 
VS phanstring0(const string &s,const string &th) { 
  VS r; 
  int i=0,j=0; 
  for(;;){ 
    i=s.find_first_not_of (th.c_str (),j); 
    if (i<0) break; 
    j=s.find_first_of (th.c_str (),i); 
    r.push_back (s.substr (i,j-i)); 
  } 
  return r; 
} 
 
VS phanstring1(const string &s,const string &th) { 
  VS r; 
  int i=0,j=0; 
  for(;;){ 
    i=s.find_first_of (th.c_str (),j); 
    if (i<0) break; 
    j=s.find_first_not_of (th.c_str (),i); 
    r.push_back (s.substr (i,j-i)); 
  } 
  return r; 
} 
 
template<typename A, typename B> 
B atob(const A a) { 
  stringstream os; 
  B b; 
  os<<a; 
  os>>b; 
  return b; 
} 
 
template<typename A> 
int to1int(const A a) { 
  return atob<A, int>(a); 
} 
 
template<typename A> 
double to1double(const A a) { 
  return atob<A, double>(a); 
} 
 
template<typename A> 
string to1string(const A a) { 
  return atob<A, string>(a); 
} 
 
VI doi1VI(string s) { 
  VS p = phanstring1(s,"-0123456789"); 
  VI d; 
  forv(i, p) d.push_back (to1int(p[i])); 
  return d; 
} 
 
VD doi1VD(string s) { 
  VS p = phanstring1(s,"0123456789.Ee-"); 
  VD d; 
  forv(i, p) d.push_back (to1double(p[i])); 
  return d; 
} 
 
VI doi2VI(VS s) { 
  VI d; 
  forv(i, s) d.push_back (to1int(s[i])); 
  return d; 
} 
 
template<typename A> 
VS doi2VS(const vector<A> s) { 
  VS p; 
  forv(i, s) p.push_back (to1string(s[i])); 
  return p; 
} 
 
VD doi2VD(VS s) { 
  VD d; 
  forv(i, s) d.push_back (to1double(s[i])); 
  return d; 
} 
 
template <typename T>  
ostream &operator<<(ostream &o,const vector<T> &v) { 
  o<<"\n{"; 
  if (v.size()) o<<' '<<v[0]; 
  for(size_t i=1;i<v.size();i++)  
    o<< ", "<<v[i]; 
  return o<<" }\n"; 
} 
 
template <typename F,typename S> 
ostream &operator<<(ostream &o,const pair<F,S> &p) { 
  return o<<"\n("<<p.first <<","<<p.second <<")\n"; 
} 
 
template <typename F,typename S> 
ostream &operator<<(ostream &o,const map<F,S> &p) { 
  o<<"\n%{\n"; 
  for(typename map<F,S>::const_iterator i=p.begin();i!=p.end();i++) 
    o<<i->first<<"->"<<i->second<<endl; 
  return  o<<"}%\n"; 
} 
 
u64 factorial(int i) { 
  u64 s=1; 
  while(i>0) s*=i--; 
  return s; 
} 
 
int thoa(int i,int j,int m,int n) { 
  return (i>=0 && i<m && j>=0 && j<n); 
} 
 
template<class T>  
T min2(const T& a,const  T &b) { 
  return a>b?b:a; 
} 
template<class T> 
T max2(const T &a,const T& b) { 
  return a>b?a:b; 
} 
 
template<class T> 
T minday(int num,...) { 
  va_list a; 
  va_start(a,num); 
  T s=va_arg(a,T); 
  for(int i=0;i<num-1;i++) { 
    T s1=va_arg(a,T); 
    if (s>s1) s=s1; 
  } 
  return s; 
} 
 
template<class T> 
T maxday(int num,...) { 
  va_list a; 
  va_start(a,num); 
  T s=va_arg(a,T); 
  for(int i=0;i<num-1;i++) { 
    T s1=va_arg(a,T); 
    if (s<s1) s=s1; 
  } 
  return s; 
} 
 
int min2(int a,int b) {return a>b?b:a; } 
int max2(int a,int b) {return a>b?a:b; } 
double min2(double a,double b) {return a>b?b:a; } 
double max2(double a,double b) {return a>b?a:b; } 
int min3(int a,int b,int c) {return min2(min2(a,b),c); } 
double min3(double a,double b,double c) {return min2(min2(a,b),c);} 
int max3(int a,int b,int c) {return max2(max2(a,b),c); } 
double max3(double a,double b,double c) {return max2(max2(a,b),c);} 
 
int tmpi,tmpi1; 
char tmpc,tmpc1; 
long tmpl,tmpl1; 
string tmps,tmps1; 
 
int dx8[]={-1,-1,-1,0,1,1,1,0}; 
int dy8[]={-1,0,1,1,1,0,-1,-1}; 
 
int dx4[]={-1,0,1,0}; 
int dy4[]={0,1,0,-1}; 
 
 
 
    class Mortgage 
        {  
        public:  
      int ok(double loan, double inter1, long sl, long long tg) { 
        for(int i=0; i< sl; i++) { 
          if (loan<=0) return 1; 
          loan = loan - tg; 
          if (loan<=0) return 1; 
          loan = ceil(loan* (1 + inter1/12/100)) ; 
        } 
        return 0; 
      } 
 
        int monthlyPayment(int loan, int inter, int term)  
            {  
        long long l=1, r= loan, tg; 
        double inter1 = (double)inter/10; 
        while(l<r) { 
          tg = (l+r)/2; 
          if (!ok(loan, inter1, term*12, tg))l =tg+1; else r=tg; 
        } 
        return l; 
            }  
         
  
        };  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/