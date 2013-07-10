/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10674
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

class ReverseMagicalSource {
public:
    int find(int source, int A);
};

int ReverseMagicalSource::find(int source, int A) {
    int ret;
    return ret;
}


int test0() {
    int source = 19;
    int A = 200;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 209;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int source = 19;
    int A = 18;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int source = 333;
    int A = 36963;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 369963;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int source = 1234;
    int A = 1000000;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 1370974;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int source = 943103;
    int A = 757846;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 943103;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int source = 214774;
    int A = 229791;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 2362514;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int source = 307250;
    int A = 582124;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 3379750;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int source = 942382;
    int A = 206296;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 942382;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int source = 27373;
    int A = 574062;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 3038403;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int source = 115806;
    int A = 656705;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 1273866;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int source = 731134;
    int A = 414474;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 731134;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int source = 439306;
    int A = 381191;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 439306;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int source = 803726;
    int A = 876361;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 8840986;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int source = 505082;
    int A = 244210;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 505082;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int source = 541067;
    int A = 186932;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 541067;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int source = 32806;
    int A = 441464;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 3641466;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int source = 268992;
    int A = 767324;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 2958912;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int source = 249475;
    int A = 261225;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 2744225;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int source = 220566;
    int A = 818444;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 2426226;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int source = 799058;
    int A = 851211;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 8789638;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int source = 869843;
    int A = 34444;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 869843;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int source = 100108;
    int A = 286394;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 1101188;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int source = 244928;
    int A = 27652;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 244928;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int source = 602046;
    int A = 89371;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 602046;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int source = 658842;
    int A = 475916;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 658842;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int source = 971995;
    int A = 195702;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 971995;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int source = 958264;
    int A = 409908;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 958264;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int source = 703641;
    int A = 885853;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 7740051;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int source = 597162;
    int A = 214106;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 597162;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int source = 392000;
    int A = 763069;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 4312000;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int source = 710984;
    int A = 548074;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 710984;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int source = 186880;
    int A = 333359;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 2055680;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int source = 445043;
    int A = 218074;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 445043;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int source = 224719;
    int A = 537895;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 2471909;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int source = 539294;
    int A = 162502;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 539294;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int source = 575290;
    int A = 291457;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 575290;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int source = 3467;
    int A = 53695;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 384837;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int source = 797105;
    int A = 755174;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 797105;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int source = 244823;
    int A = 877866;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 2693053;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int source = 745197;
    int A = 659148;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 745197;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int source = 516595;
    int A = 606966;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 5682545;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int source = 99;
    int A = 204403;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 1099989;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int source = 31;
    int A = 220860;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 344441;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int source = 100;
    int A = 135172;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 1111100;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int source = 78;
    int A = 898490;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 8666658;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int source = 68;
    int A = 77180;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 755548;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int source = 57;
    int A = 857059;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 6333327;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int source = 13;
    int A = 168556;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 1444443;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int source = 45;
    int A = 704198;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 4999995;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int source = 89;
    int A = 457909;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 988879;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int source = 83;
    int A = 922224;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 9222213;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int source = 53;
    int A = 587561;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 588883;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int source = 22;
    int A = 777161;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 2444442;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int source = 50;
    int A = 694314;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 5555550;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int source = 69;
    int A = 81397;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 766659;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int source = 67;
    int A = 75650;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 744437;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int source = 87;
    int A = 754378;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 966657;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int source = 68;
    int A = 378222;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 755548;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int source = 37;
    int A = 375604;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 411107;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int source = 10;
    int A = 686106;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 1111110;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int source = 82;
    int A = 746286;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 911102;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int source = 53;
    int A = 871800;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 5888883;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int source = 96;
    int A = 752175;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 1066656;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int source = 3;
    int A = 561659;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 3333333;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int source = 26;
    int A = 796402;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 2888886;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int source = 62;
    int A = 962577;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 6888882;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int source = 30;
    int A = 981348;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 3333330;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int source = 79;
    int A = 438566;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 877769;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int source = 56;
    int A = 476421;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 622216;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int source = 97;
    int A = 787477;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 1077767;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int source = 9;
    int A = 275301;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 999999;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int source = 31;
    int A = 106851;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 344441;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int source = 25;
    int A = 951641;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 2777775;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int source = 68;
    int A = 212937;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 755548;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int source = 52;
    int A = 536140;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 577772;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int source = 71;
    int A = 731586;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 788881;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int source = 54;
    int A = 624717;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 5999994;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int source = 55;
    int A = 859890;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 6111105;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int source = 53;
    int A = 159892;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 588883;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int source = 56;
    int A = 868265;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 6222216;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int source = 88;
    int A = 110856;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 977768;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int source = 865;
    int A = 549480;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 961015;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int source = 375;
    int A = 910743;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 4166625;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int source = 889;
    int A = 65908;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 98679;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int source = 709;
    int A = 463437;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 787699;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int source = 506;
    int A = 757982;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 5622166;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int source = 406;
    int A = 888139;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 4511066;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int source = 685;
    int A = 161194;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 761035;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int source = 288;
    int A = 404181;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 3199968;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int source = 60;
    int A = 49367;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 66660;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int source = 672;
    int A = 621628;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 746592;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int source = 350;
    int A = 472619;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 3888850;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int source = 485;
    int A = 600925;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 5388835;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int source = 890;
    int A = 905112;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 988790;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int source = 693;
    int A = 824792;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 7699923;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int source = 341;
    int A = 746731;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 3788851;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int source = 486;
    int A = 280648;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 539946;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int source = 395;
    int A = 221408;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 438845;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int source = 562;
    int A = 417875;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 624382;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int source = 671;
    int A = 169161;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 745481;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int source = 846;
    int A = 357535;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 939906;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int source = 1;
    int A = 1;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int source = 1;
    int A = 11;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int source = 2;
    int A = 222;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 2222;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int source = 3;
    int A = 333333;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 3333333;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int source = 4;
    int A = 1000000;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 4444444;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int source = 100;
    int A = 100;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 1100;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int source = 10;
    int A = 10;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int source = 12;
    int A = 12;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int source = 19;
    int A = 209;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 2109;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int source = 19;
    int A = 19;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 209;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int source = 2;
    int A = 2;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int source = 10;
    int A = 110;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 1110;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int source = 13;
    int A = 13;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int source = 20;
    int A = 20;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 220;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int source = 10;
    int A = 1000000;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 1111110;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int source = 1234;
    int A = 13574;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 136974;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int source = 9;
    int A = 9;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int source = 1000000;
    int A = 1000000;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 11000000;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int source = 20;
    int A = 220;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 2220;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int source = 18;
    int A = 18;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 198;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int source = 1;
    int A = 1000000;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 1111111;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int source = 25;
    int A = 25;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 275;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int source = 9567;
    int A = 165443;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 1061937;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int source = 10;
    int A = 111111;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 1111110;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int source = 1;
    int A = 200000;
    ReverseMagicalSource* pObj = new ReverseMagicalSource();
    clock_t start = clock();
    int result = pObj->find(source, A);
    clock_t end = clock();
    delete pObj;
    int expected = 1111111;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22842274&rd=13905&pm=10674
********************************************************************************
#include<iostream> 
#include<vector> 
#include<string> 
#include<math.h> 
#include<algorithm> 
#include<stdlib.h> 
 
using namespace std; 
 
class ReverseMagicalSource{ 
public: 
 
int find(int source, int A) 
{ 
if(source>A) 
return source; 
int sm=source,i=1; 
while(1) 
{ 
sm+=pow(10,i++)*source; 
if(sm>A) 
return sm; 
} 
} 
};

********************************************************************************
*******************************************************************************/