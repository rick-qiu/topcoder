/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1686
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

class Quipu {
public:
    int readKnots(string knots);
};

int Quipu::readKnots(string knots) {
    int ret;
    return ret;
}


int test0() {
    string knots = "-XX-XXXX-XXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 243;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string knots = "-XX--XXXX---XXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 204003;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string knots = "-X-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
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
    string knots = "-XX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string knots = "-XXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string knots = "-XXXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string knots = "-XXXXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string knots = "-XXXXXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string knots = "-XXXXXXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string knots = "-XXXXXXXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string knots = "-XXXXXXXXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string knots = "-X-------";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string knots = "-XXXXXXXXX--XXXXXXXXX-XXXXXXXXX-XXXXXXX-XXXXXXXXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 909979;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string knots = "-XX-XXXXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string knots = "-XXXXXX-X-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string knots = "-XXXXXXXX-XXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string knots = "-XX-XXXXXXXXX-XXXXXXXX-XXX---";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 298300;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string knots = "-XXXX-XXXXX-XX-X-XXXX--";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 452140;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string knots = "-XXXXXX-XXXX-XXXXXXXX-XXXXXXXX--XXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 648803;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string knots = "-XXXXXXX-XXXXXXXXX-XXXXXXXXX-XXXXX-XXXXXXXXX-X-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 799591;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string knots = "-XXXXXXXX-XXXXXXXX--XXXXXX-XXXXXXXXX-XXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 880693;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string knots = "-X-XXXX-XXXXXXXX-XXXXX-XXXXX-XX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 148552;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string knots = "-XXXX-XXXXXXXXX-XXXXX-XXXXXXXX-XXXXXXXX-XXXXXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 495886;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string knots = "-XXX-XXXXXX--XX-XX-XXXXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 360225;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string knots = "-XXXXX-XXXXXXXX-XXXXXXXX-XXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 5883;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string knots = "-XXXX-XXXXX-X-XXXXXXX-XXXXXXX-XXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 451773;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string knots = "-XXXXXXX-XX--XXXXXXXXX---";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 720900;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string knots = "-XXXXXXXXX-XXXXXXX-XXXXXXXX-XXX-XXXX-XXXXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 978345;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string knots = "-X-XXXXXXXX-X-XX-XXXXXXXXX-XXXXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 181295;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string knots = "-XXXXX-X-XX-XXXXX-XXXXX-XXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 512553;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string knots = "-XXXX-X-XXXX-XXXX-X-XXXXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 414415;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string knots = "-XXXXXX-XXXXXXXX-XX-XXXXXXXX-XXXXXXX-XXXXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 682875;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string knots = "-XXX--XXXXXXXX-XXXXXX-XXXXXXXX-XXXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 308684;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string knots = "-X-XXXXXXXXX--XXXXX-XXXXXXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 19057;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string knots = "-XXXXXXX-XXXXX-XX-X-XXXXX-XXXXXXXX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 752158;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string knots = "-XXXXXXXXX-XXXX-XXX--X-XX-";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 943012;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string knots = "-X-----";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string knots = "-XX--";
    Quipu* pObj = new Quipu();
    clock_t start = clock();
    int result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7327102&rd=4580&pm=1686
********************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <deque>
#include <math.h>
using namespace std;
 
typedef int I;
typedef vector<int> VI;
typedef string S;
typedef vector<string> VS;
typedef bool B;
typedef vector<bool> VB;
typedef double D;
typedef vector<double> VD;
 
struct Quipu
{
I readKnots (S s)
{
  I r=0;
  I c=0;
  for (I i = 1; i<s.length(); i++)
  {
    if (s[i] == 'X') c++;
    if (s[i] == '-')
    {
      r*=10;
      r+=c;
      c=0;
    }
  }
  return r;
}
};

********************************************************************************
*******************************************************************************/