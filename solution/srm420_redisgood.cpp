/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9915
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

class RedIsGood {
public:
    double getProfit(int R, int B);
};

double RedIsGood::getProfit(int R, int B) {
    double ret;
    return ret;
}


int test0() {
    int R = 0;
    int B = 7;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int R = 4;
    int B = 0;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int R = 5;
    int B = 1;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 4.166666666666667;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int R = 2;
    int B = 2;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6666666666666666;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int R = 12;
    int B = 4;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 8.324175824175823;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int R = 11;
    int B = 12;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 1.075642825339958;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int R = 5000;
    int B = 5000;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 36.90021846438633;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int R = 4950;
    int B = 4772;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 191.15589434419024;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int R = 4446;
    int B = 4525;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 8.13249058054577E-4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int R = 4446;
    int B = 4526;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int R = 0;
    int B = 0;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int R = 0;
    int B = 5000;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int R = 5000;
    int B = 0;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 5000.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int R = 1;
    int B = 5000;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int R = 5000;
    int B = 1;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 4999.00019996;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int R = 5000;
    int B = 2;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 4998.000399920013;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int R = 4997;
    int B = 3;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 4994.000600240182;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int R = 4112;
    int B = 2414;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 1698.9961276212473;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int R = 4321;
    int B = 2313;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 2008.826383724269;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int R = 1243;
    int B = 1424;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int R = 1244;
    int B = 4312;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int R = 4141;
    int B = 114;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 4027.027562459711;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int R = 1313;
    int B = 331;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 982.2787778158794;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int R = 4765;
    int B = 4567;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 209.73511834927416;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int R = 5000;
    int B = 4999;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 37.605546346158974;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int R = 4999;
    int B = 4999;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 36.896526342887306;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int R = 4999;
    int B = 5000;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 36.194890582613674;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int R = 4950;
    int B = 5000;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 7.767994094275865;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int R = 4920;
    int B = 4990;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4266549085142939;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int R = 4917;
    int B = 5000;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002145068517158122;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int R = 4973;
    int B = 4987;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 27.34304499857498;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int R = 3415;
    int B = 4311;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int R = 5000;
    int B = 4774;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 237.03978696760726;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int R = 2562;
    int B = 3514;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int R = 1;
    int B = 10;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int R = 60;
    int B = 3263;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int R = 1;
    int B = 50;
    RedIsGood* pObj = new RedIsGood();
    clock_t start = clock();
    double result = pObj->getProfit(R, B);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=13511&pm=9915
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <list>
#include <complex>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef complex<double> pnt;
typedef pair<int, int> pii;
 
#define RA(x) (x).begin(), (x).end()
#define FE(i, x) for (typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)
#define SZ(x) ((int) (x).size())
 
 
class RedIsGood
{
public:
    double getProfit(int R, int B);
};
 
static double row[2][5002];
 
double RedIsGood::getProfit(int R, int B)
{
    memset(row, 0, sizeof(row));
    int old = 0;
    int nu = 1;
    for (int i = 1; i <= R; i++)
    {
        for (int j = 0; j <= B; j++)
        {
            double pr = i / (double) (i + j);
            double pb = j / (double) (i + j);
            row[nu][j] = max(0.0, pr * (1.0 + row[old][j]) + pb * (row[nu][j - 1] - 1.0));
        }
        swap(old, nu);
    }
    return row[old][B];
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/