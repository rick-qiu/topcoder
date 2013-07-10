/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10705
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

class MinimalDifference {
public:
    int findNumber(int A, int B, int C);
};

int MinimalDifference::findNumber(int A, int B, int C) {
    int ret;
    return ret;
}


int test0() {
    int A = 1;
    int B = 9;
    int C = 10;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int A = 11;
    int B = 20;
    int C = 20;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int A = 1;
    int B = 1;
    int C = 999;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int A = 100;
    int B = 1000;
    int C = 99;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 189;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int A = 999990000;
    int B = 1000000000;
    int C = 1;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int A = 85309234;
    int B = 85346169;
    int C = 337262359;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 85309249;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int A = 927106109;
    int B = 927144448;
    int C = 67731109;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 927106117;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int A = 196637359;
    int B = 196696076;
    int C = 970074859;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 196637359;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int A = 356793609;
    int B = 356805020;
    int C = 413434234;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 356800006;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int A = 913434234;
    int B = 913467889;
    int C = 960309234;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 913434237;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int A = 698590484;
    int B = 698596475;
    int C = 477887359;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 698590489;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int A = 292340484;
    int B = 292351357;
    int C = 284527984;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 292342999;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int A = 630231109;
    int B = 630238914;
    int C = 429059234;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 630231599;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int A = 489606109;
    int B = 489630874;
    int C = 749371734;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 489606129;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int A = 536481109;
    int B = 536520546;
    int C = 503277984;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 536481189;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int A = 159527984;
    int B = 159571437;
    int C = 26715484;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 159528007;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int A = 345074859;
    int B = 345078598;
    int C = 28668609;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 345074859;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int A = 182965484;
    int B = 183018083;
    int C = 761090484;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 182965503;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int A = 477887359;
    int B = 477944766;
    int C = 57965484;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 477887403;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int A = 423199859;
    int B = 423260526;
    int C = 772809234;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 423199860;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int A = 372418609;
    int B = 372448892;
    int C = 893902984;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 372418999;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int A = 280621734;
    int B = 280635471;
    int C = 886090484;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 280622999;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int A = 223981109;
    int B = 224046434;
    int C = 889996734;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 223999999;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int A = 421246734;
    int B = 421272453;
    int C = 464215484;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 421246739;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int A = 749371734;
    int B = 749426793;
    int C = 391949859;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 749371899;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int A = 36481109;
    int B = 36487180;
    int C = 431012359;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 36481114;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int A = 157574859;
    int B = 157575436;
    int C = 548199859;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 157574999;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int A = 731793609;
    int B = 731811494;
    int C = 825543609;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 731793615;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int A = 997418609;
    int B = 997473502;
    int C = 343121734;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 997420000;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int A = 845074859;
    int B = 845088318;
    int C = 157574859;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 845074869;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int A = 509137359;
    int B = 509167372;
    int C = 593121734;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 509137361;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int A = 397809234;
    int B = 397816331;
    int C = 811871734;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 397809301;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int A = 112652984;
    int B = 112701153;
    int C = 32574859;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 112652989;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int A = 302106109;
    int B = 302129790;
    int C = 352887359;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 302119999;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int A = 481793609;
    int B = 481821472;
    int C = 52106109;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 481800003;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int A = 419293609;
    int B = 419358488;
    int C = 657574859;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 419294999;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int A = 229840484;
    int B = 229851559;
    int C = 751324859;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 229840487;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int A = 9137359;
    int B = 9141524;
    int C = 975934234;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 9137899;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int A = 905621734;
    int B = 905631401;
    int C = 261090484;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 905621740;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int A = 893902984;
    int B = 893962301;
    int C = 669293609;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 893902991;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int A = 766949859;
    int B = 766977814;
    int C = 438824859;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 766949901;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int A = 741559234;
    int B = 741604007;
    int C = 405621734;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 741560009;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int A = 897809234;
    int B = 897863083;
    int C = 950543609;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 897810008;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int A = 712262359;
    int B = 712274018;
    int C = 429059234;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 712262369;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int A = 577496734;
    int B = 577506929;
    int C = 950543609;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 577497002;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int A = 407574859;
    int B = 407601440;
    int C = 647809234;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 407574862;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int A = 5231109;
    int B = 5275820;
    int C = 956402984;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 5249999;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int A = 472027984;
    int B = 472059133;
    int C = 456402984;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 472027992;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int A = 583356109;
    int B = 583410810;
    int C = 712262359;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 583356115;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int A = 561871734;
    int B = 561915183;
    int C = 618512359;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 561871741;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int A = 352887359;
    int B = 352949574;
    int C = 175152984;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 352887360;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int A = 565777984;
    int B = 565800659;
    int C = 757184234;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 565778003;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int A = 81402984;
    int B = 81458491;
    int C = 237652984;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 81406999;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int A = 757184234;
    int B = 757202053;
    int C = 600934234;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 757190002;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int A = 274762359;
    int B = 274810802;
    int C = 286481109;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 274762362;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int A = 85309234;
    int B = 85409234;
    int C = 370465484;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 85309259;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int A = 337262359;
    int B = 337362359;
    int C = 927106109;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 337262363;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int A = 7184234;
    int B = 7284234;
    int C = 67731109;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 7184239;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int A = 196637359;
    int B = 196737359;
    int C = 431012359;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 196640002;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int A = 970074859;
    int B = 970174859;
    int C = 356793609;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 970074867;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int A = 897809234;
    int B = 897909234;
    int C = 413434234;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 897810000;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int A = 913434234;
    int B = 913534234;
    int C = 979840484;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 913436999;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int A = 960309234;
    int B = 960409234;
    int C = 698590484;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 960309899;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int A = 26715484;
    int B = 26815484;
    int C = 477887359;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 26779999;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int A = 292340484;
    int B = 292440484;
    int C = 348981109;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 292340599;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int A = 284527984;
    int B = 284627984;
    int C = 630231109;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 284530003;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int A = 587262359;
    int B = 587362359;
    int C = 429059234;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 587262404;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int A = 489606109;
    int B = 489706109;
    int C = 899762359;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 489606799;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int A = 749371734;
    int B = 749471734;
    int C = 536481109;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 749372005;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int A = 915387359;
    int B = 915487359;
    int C = 503277984;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 915387363;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int A = 159527984;
    int B = 159627984;
    int C = 149762359;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 159528079;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int A = 26715484;
    int B = 26815484;
    int C = 345074859;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 26715699;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int A = 874371734;
    int B = 874471734;
    int C = 28668609;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 874371735;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int A = 182965484;
    int B = 183065484;
    int C = 479840484;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 182965485;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int A = 761090484;
    int B = 761190484;
    int C = 477887359;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 761098999;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int A = 893902984;
    int B = 894002984;
    int C = 57965484;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 893903079;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int A = 423199859;
    int B = 423299859;
    int C = 93121734;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 423200199;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int A = 772809234;
    int B = 772909234;
    int C = 372418609;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 772809241;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int A = 108746734;
    int B = 108846734;
    int C = 893902984;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 108746899;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int A = 280621734;
    int B = 280721734;
    int C = 958356109;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 280621999;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int A = 886090484;
    int B = 886190484;
    int C = 223981109;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 886091003;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int A = 71637359;
    int B = 71737359;
    int C = 889996734;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 71699999;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int A = 421246734;
    int B = 421346734;
    int C = 229840484;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 421246769;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int A = 464215484;
    int B = 464315484;
    int C = 749371734;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 464215599;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int A = 22809234;
    int B = 22909234;
    int C = 391949859;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 22899999;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int A = 36481109;
    int B = 36581109;
    int C = 792340484;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 36481199;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int A = 431012359;
    int B = 431112359;
    int C = 157574859;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 431079999;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int A = 13043609;
    int B = 13143609;
    int C = 548199859;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 13099999;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int A = 731793609;
    int B = 731893609;
    int C = 56012359;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 731794000;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int A = 825543609;
    int B = 825643609;
    int C = 997418609;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 825543899;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int A = 634137359;
    int B = 634237359;
    int C = 343121734;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 634137400;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int A = 845074859;
    int B = 845174859;
    int C = 897809234;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 845074859;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int A = 157574859;
    int B = 157674859;
    int C = 509137359;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 157574904;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int A = 524762359;
    int B = 524862359;
    int C = 593121734;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 524762360;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int A = 397809234;
    int B = 397909234;
    int C = 411481109;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 397810001;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int A = 811871734;
    int B = 811971734;
    int C = 112652984;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 811871741;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int A = 83356109;
    int B = 83456109;
    int C = 32574859;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 83356189;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int A = 302106109;
    int B = 302206109;
    int C = 325543609;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 302106799;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int A = 352887359;
    int B = 352987359;
    int C = 481793609;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 352887365;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int A = 948590484;
    int B = 948690484;
    int C = 52106109;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 948600000;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int A = 419293609;
    int B = 419393609;
    int C = 3277984;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 419293615;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int A = 657574859;
    int B = 657674859;
    int C = 229840484;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 657575006;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int A = 882184234;
    int B = 882284234;
    int C = 751324859;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 882184238;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int A = 9137359;
    int B = 9237359;
    int C = 751324859;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 9137699;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int A = 975934234;
    int B = 976034234;
    int C = 905621734;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 975940003;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int A = 1987;
    int B = 9123;
    int C = 1;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int A = 106;
    int B = 30287;
    int C = 16783423;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 7999;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int A = 2507654;
    int B = 2572297;
    int C = 32;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 2510000;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int A = 599823407;
    int B = 599823407;
    int C = 9;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 599823407;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int A = 774299934;
    int B = 774299979;
    int C = 4;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 774299940;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int A = 96560959;
    int B = 96560959;
    int C = 1000000000;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 96560959;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int A = 867395769;
    int B = 867395773;
    int C = 1000000000;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 867395770;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int A = 398999681;
    int B = 398999681;
    int C = 1000000000;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 398999681;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int A = 999999999;
    int B = 999999999;
    int C = 1000000000;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int A = 679;
    int B = 679;
    int C = 8;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 679;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int A = 29;
    int B = 434;
    int C = 9295;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 399;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int A = 115045;
    int B = 115046;
    int C = 6593605;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 115046;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int A = 4;
    int B = 5;
    int C = 667879486;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int A = 1000000000;
    int B = 1000000000;
    int C = 999999999;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int A = 676747503;
    int B = 676847503;
    int C = 556;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 676800000;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int A = 665947380;
    int B = 666047380;
    int C = 113;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 666000000;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int A = 94880065;
    int B = 94980065;
    int C = 4;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 94900000;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int A = 688208537;
    int B = 688308537;
    int C = 5;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 688210000;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int A = 888501675;
    int B = 888601675;
    int C = 1000000000;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 888510000;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int A = 937;
    int B = 100937;
    int C = 29774987;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 99999;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int A = 30;
    int B = 100030;
    int C = 776875586;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 99999;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int A = 2961;
    int B = 102961;
    int C = 998967870;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 99999;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int A = 8;
    int B = 100008;
    int C = 988975869;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 99999;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int A = 1;
    int B = 100000;
    int C = 999999999;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 99999;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int A = 999899999;
    int B = 999999999;
    int C = 1000000000;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 999900000;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int A = 1234;
    int B = 2345;
    int C = 1259;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 1259;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int A = 10;
    int B = 19;
    int C = 19;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int A = 98;
    int B = 99;
    int C = 4;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int A = 1;
    int B = 2;
    int C = 3;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int A = 10000;
    int B = 30000;
    int C = 11;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 10001;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int A = 1;
    int B = 3;
    int C = 3;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int A = 1;
    int B = 2;
    int C = 5;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int A = 100;
    int B = 200;
    int C = 300;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 102;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int A = 1;
    int B = 2;
    int C = 2;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int A = 1;
    int B = 9;
    int C = 999;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int A = 29;
    int B = 30;
    int C = 30;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int A = 1;
    int B = 1000;
    int C = 9999999;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int A = 21;
    int B = 30;
    int C = 30;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int A = 9;
    int B = 10;
    int C = 10;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int A = 2;
    int B = 10;
    int C = 10;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int A = 7;
    int B = 9;
    int C = 1;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int A = 2;
    int B = 3;
    int C = 3;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int A = 234324234;
    int B = 234424234;
    int C = 909099999;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 234399999;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int A = 19;
    int B = 20;
    int C = 5;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int A = 1;
    int B = 2;
    int C = 999;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int A = 500;
    int B = 1500;
    int C = 1000;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int A = 1;
    int B = 7;
    int C = 7;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int A = 99999;
    int B = 99999;
    int C = 1;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 99999;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int A = 1;
    int B = 9998;
    int C = 9999;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 8999;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int A = 9990000;
    int B = 10000000;
    int C = 45312342;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 9990000;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int A = 6;
    int B = 8;
    int C = 9;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int A = 5;
    int B = 10;
    int C = 1;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int A = 1;
    int B = 30;
    int C = 77;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int A = 9;
    int B = 9;
    int C = 5;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int A = 7;
    int B = 13;
    int C = 12;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int A = 6;
    int B = 8;
    int C = 55;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int A = 1000;
    int B = 1030;
    int C = 9999;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 1029;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int A = 99;
    int B = 101;
    int C = 2;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int A = 5;
    int B = 9;
    int C = 54;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int A = 17;
    int B = 19;
    int C = 92;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int A = 1;
    int B = 4;
    int C = 2;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int A = 999900000;
    int B = 999999998;
    int C = 999999999;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 999989999;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int A = 10;
    int B = 12;
    int C = 14;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int A = 7;
    int B = 8;
    int C = 99999999;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int A = 5;
    int B = 5;
    int C = 10;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int A = 10;
    int B = 11;
    int C = 3;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int A = 10;
    int B = 20;
    int C = 29;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int A = 1;
    int B = 3;
    int C = 4;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int A = 5;
    int B = 8;
    int C = 3;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int A = 999999999;
    int B = 1000000000;
    int C = 10;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int A = 1;
    int B = 6;
    int C = 7;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int A = 999900000;
    int B = 1000000000;
    int C = 10000001;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int A = 234;
    int B = 1000;
    int C = 2;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int A = 9;
    int B = 19;
    int C = 92;
    MinimalDifference* pObj = new MinimalDifference();
    clock_t start = clock();
    int result = pObj->findNumber(A, B, C);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22845840&rd=13908&pm=10705
********************************************************************************
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
 
class MinimalDifference {
public:
  int findNumber(int, int, int);
};
 
int MinimalDifference::findNumber(int A, int B, int C) {
  int sum=0;
  do
  {
    sum+=C%10;
    C/=10;
  }while(C>=10);
  sum+=C;
  int min=10e8,ret;
  for(int i=A;i<=B;i++)
  {
    int s=0,k=i;  
    do
    {
      s+=k%10;
      k/=10;
    }while(k>=10);
    s+=k;
    if(abs(s-sum)<min)
    {
      ret=i;
      min=abs(s-sum);
    }
  }
  return ret;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/