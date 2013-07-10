/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4562
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

class Conglutination {
public:
    string split(string conglutination, int expectation);
};

string Conglutination::split(string conglutination, int expectation) {
    string ret;
    return ret;
}


int test0() {
    string conglutination = "22";
    int expectation = 4;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "2+2";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string conglutination = "536";
    int expectation = 41;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "5+36";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string conglutination = "123456000789";
    int expectation = 1235349;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "1234560+00789";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string conglutination = "123456789";
    int expectation = 4245;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string conglutination = "112";
    int expectation = 13;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "1+12";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string conglutination = "11";
    int expectation = 1;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
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
    string conglutination = "11";
    int expectation = 11;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string conglutination = "111";
    int expectation = 12;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "1+11";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string conglutination = "10000000000";
    int expectation = 1000000000;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000+0";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string conglutination = "112";
    int expectation = 112;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string conglutination = "1111111113";
    int expectation = 111111113;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string conglutination = "99999999900000000000";
    int expectation = 999999999;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "999999999+00000000000";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string conglutination = "999999999";
    int expectation = 999999999;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string conglutination = "10000000000000000000";
    int expectation = 1;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "1+0000000000000000000";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string conglutination = "10000000000000000000";
    int expectation = 1000000000;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000000+0000000000";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string conglutination = "99999999900000000001";
    int expectation = 1000000000;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "999999999+00000000001";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string conglutination = "99999999000000000001";
    int expectation = 999999991;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "999999990+00000000001";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string conglutination = "99990000000000000001";
    int expectation = 9999001;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "9999000+0000000000001";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string conglutination = "1111111113";
    int expectation = 111111114;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "1+111111113";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string conglutination = "99999999900000000000";
    int expectation = 99999999;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string conglutination = "999999999";
    int expectation = 9999999;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string conglutination = "10000000000000000001";
    int expectation = 111;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string conglutination = "50000000000500000000";
    int expectation = 1000000000;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "500000000+00500000000";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string conglutination = "50000000000000000500";
    int expectation = 1000000000;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string conglutination = "111111111111111111";
    int expectation = 222222222;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "111111111+111111111";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string conglutination = "11111111111111111";
    int expectation = 122222222;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "11111111+111111111";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string conglutination = "44614087100466127532";
    int expectation = 365749560;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string conglutination = "77956790500099935109";
    int expectation = 819229001;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string conglutination = "77956790500099935109";
    int expectation = 812239001;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string conglutination = "96648973000037879133";
    int expectation = 320324268;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string conglutination = "43006128100327664862";
    int expectation = 639682960;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string conglutination = "143660";
    int expectation = 803;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "143+660";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string conglutination = "155486";
    int expectation = 641;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "155+486";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string conglutination = "625244";
    int expectation = 869;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "625+244";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string conglutination = "625244";
    int expectation = 869;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "625+244";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string conglutination = "359479";
    int expectation = 838;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "359+479";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string conglutination = "140011323230";
    int expectation = 463241;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "140011+323230";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string conglutination = "52015718268";
    int expectation = 538425;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "520157+18268";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string conglutination = "328912612662";
    int expectation = 941574;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "328912+612662";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string conglutination = "55303648060";
    int expectation = 601096;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "553036+48060";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string conglutination = "813070122112";
    int expectation = 935182;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "813070+122112";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string conglutination = "809136541110669776";
    int expectation = 919806317;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "809136541+110669776";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string conglutination = "177099653377515920";
    int expectation = 554615573;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "177099653+377515920";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string conglutination = "48570398889656317";
    int expectation = 575360305;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "485703988+89656317";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string conglutination = "794400476173674100";
    int expectation = 968074576;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "794400476+173674100";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string conglutination = "1621418292876068";
    int expectation = 165017897;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "162141829+2876068";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string conglutination = "61677414500104718744";
    int expectation = 721492889;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "616774145+00104718744";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string conglutination = "60190369900390969790";
    int expectation = 992873489;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "601903699+00390969790";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string conglutination = "91202121100055186283";
    int expectation = 967207494;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "912021211+00055186283";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string conglutination = "27689270300394925682";
    int expectation = 671818385;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "276892703+00394925682";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string conglutination = "58702279300070728386";
    int expectation = 657751179;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "587022793+00070728386";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string conglutination = "21705640000003073463";
    int expectation = 5244027;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "2170564+0000003073463";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string conglutination = "56475700000009276613";
    int expectation = 9841370;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "564757+00000009276613";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string conglutination = "98015950000000094916";
    int expectation = 9896511;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "9801595+0000000094916";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string conglutination = "50258590000001619067";
    int expectation = 6644926;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "5025859+0000001619067";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string conglutination = "16009400000005635813";
    int expectation = 7236753;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "1600940+0000005635813";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string conglutination = "66539540000003177588";
    int expectation = 9831542;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "6653954+0000003177588";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string conglutination = "19637860000001070810";
    int expectation = 3034596;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "1963786+0000001070810";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string conglutination = "21899000000001192720";
    int expectation = 1214619;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "21899+000000001192720";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string conglutination = "55123070000000726749";
    int expectation = 6239056;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "5512307+0000000726749";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string conglutination = "64236550000001396182";
    int expectation = 7819837;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "6423655+0000001396182";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string conglutination = "42949672982";
    int expectation = 4;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string conglutination = "24294967298";
    int expectation = 4;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string conglutination = "18446744073709551618";
    int expectation = 2;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string conglutination = "19999999999999999999";
    int expectation = 1;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string conglutination = "99990000000000009999";
    int expectation = 19998;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "9999+0000000000009999";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string conglutination = "123456000789";
    int expectation = 1235349;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "1234560+00789";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string conglutination = "22";
    int expectation = 22;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string conglutination = "112";
    int expectation = 112;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string conglutination = "32";
    int expectation = 5;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "3+2";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string conglutination = "99999999999999999999";
    int expectation = 1000000;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string conglutination = "99999999999999999999";
    int expectation = 999999999;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string conglutination = "12";
    int expectation = 4;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string conglutination = "10000000000000000001";
    int expectation = 2;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "1+0000000000000000001";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string conglutination = "99999999999999999999";
    int expectation = 277447230;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string conglutination = "12345678900123456789";
    int expectation = 246913578;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789+00123456789";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string conglutination = "123456789";
    int expectation = 4245;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string conglutination = "99999999999999999999";
    int expectation = 109998;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string conglutination = "12";
    int expectation = 12;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string conglutination = "18121568157777777777";
    int expectation = 1000000000;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string conglutination = "99999999999999999999";
    int expectation = 1235349;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string conglutination = "99999999999999999999";
    int expectation = 10;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string conglutination = "112";
    int expectation = 13;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "1+12";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string conglutination = "123";
    int expectation = 123;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string conglutination = "99999999999999999999";
    int expectation = 99;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string conglutination = "12345";
    int expectation = 12345;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string conglutination = "22000000002200000000";
    int expectation = 105032704;
    Conglutination* pObj = new Conglutination();
    clock_t start = clock();
    string result = pObj->split(conglutination, expectation);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=263088&rd=7221&pm=4562
********************************************************************************
#line 5 "Conglutination.cc"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <algorithm>
#include <functional>
#include <cmath>
#include <stdlib.h>
 
using namespace std;
 
#define VI vector<int>
#define VS vector<string>
 
class Conglutination {
  public:
  string split(string cong, int expect)
  {
      for (int i=1;i<cong.size ();i++)
      {
    int a = atoi (cong.substr (0, i).c_str ());
    int b = atoi (cong.substr (i).c_str ());
    if (a+b==expect)
        return cong.substr (0, i)+"+"+cong.substr (i);     
       }
  
      return "";
  }
  
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/