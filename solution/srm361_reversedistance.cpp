/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8009
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

class ReverseDistance {
public:
    string find(int difference);
};

string ReverseDistance::find(int difference) {
    string ret;
    return ret;
}


int test0() {
    int difference = 18;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "20";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int difference = 15;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int difference = 4275;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "5080";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int difference = 900;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "101001";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int difference = 1989;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "100990";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int difference = 857232;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "860300";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int difference = 9;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "10";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int difference = 27;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "30";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int difference = 90;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1101";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int difference = 1;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int difference = 2;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int difference = 99;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "100";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int difference = 216;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int difference = 307386;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "400390";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int difference = 306297;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "307000";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int difference = 497295;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "500300";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int difference = 19800;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1020001";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int difference = 391806;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "402010";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int difference = 90189;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1000190";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int difference = 9189;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "100190";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int difference = 981;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int difference = 9100;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int difference = 9081;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "9100";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int difference = 90981;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "91000";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int difference = 329670;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1330001";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int difference = 360036;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "400040";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int difference = 59400;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1060001";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int difference = 249579;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1050080";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int difference = 590139;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1000140";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int difference = 520839;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1000840";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int difference = 260469;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1000470";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int difference = 255789;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "10005790";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int difference = 199989;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1000099990";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int difference = 180000;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1000200001";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int difference = 1000000;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int difference = 140679;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1000680";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int difference = 999999;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1000000";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int difference = 900000;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "100001000001";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int difference = 810000;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1000900001";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int difference = 190989;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int difference = 999990;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "11000001";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int difference = 999981;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int difference = 709389;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "10010390";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int difference = 181989;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "10090990";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int difference = 109989;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "110000";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int difference = 139298;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int difference = 99000;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "100100001";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int difference = 990000;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "10001000001";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int difference = 861732;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "862000";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int difference = 390807;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "391000";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int difference = 297000;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "100300001";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int difference = 999000;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1001000001";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int difference = 139590;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1140001";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int difference = 571933;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int difference = 29700;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1030001";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int difference = 297000;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "100300001";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int difference = 818181;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "909090";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int difference = 900900;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "101001001";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int difference = 987210;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int difference = 927000;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int difference = 666666;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int difference = 777222;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "808030";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int difference = 616374;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "620400";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int difference = 696029;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int difference = 155349;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "156000";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int difference = 299700;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "10300001";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int difference = 706012;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int difference = 172429;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int difference = 183218;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int difference = 11869;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int difference = 562439;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int difference = 800000;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int difference = 479115;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "500120";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int difference = 580014;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "600020";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int difference = 1800;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "102001";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int difference = 609984;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "610000";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int difference = 14949;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "15000";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int difference = 978111;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "980200";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int difference = 200079;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1000080";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int difference = 376416;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "400420";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int difference = 502695;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "503000";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int difference = 621774;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "622000";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int difference = 161003;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int difference = 908289;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int difference = 697696;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int difference = 245343;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int difference = 512348;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int difference = 45;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "50";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int difference = 198900;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1010099001";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int difference = 28890;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "11008901";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int difference = 208890;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "110008901";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int difference = 90000;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1000100001";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int difference = 199890;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1100099901";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int difference = 901989;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "100001990";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int difference = 999900;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "101000001";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int difference = 108;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int difference = 198000;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "100200001";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int difference = 144900;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "10150001";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int difference = 802989;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "100002990";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int difference = 450000;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "1000500001";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int difference = 999998;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int difference = 900018;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int difference = 900090;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "11000101";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int difference = 208989;
    ReverseDistance* pObj = new ReverseDistance();
    clock_t start = clock();
    string result = pObj->find(difference);
    clock_t end = clock();
    delete pObj;
    string expected = "100008990";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19929536&rd=10773&pm=8009
********************************************************************************
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <fstream> 
#include <iostream> 
#include <sstream> 
#include <vector> 
#include <string> 
#include <algorithm> 
#include <queue> 
using namespace std; 
 
#define Min(a,b) ((a)>(b)?(b):(a)) 
#define Max(a,b) ((a)>(b)?(a):(b)) 
#define prr make_pair 
 
typedef long long ll; 
 
inline int reverse(int a) 
{ 
  int b = 0; 
  while (a) 
  { 
    b = b*10 + a%10; 
    a/=10; 
  } 
  return b; 
} 
inline ll reverse(ll a) 
{ 
  ll b = 0; 
  while (a) 
  { 
    b = b*10 + a%10; 
    a/=10; 
  } 
  return b; 
} 
class ReverseDistance 
{  
  public: 
  int n,m; 
  string find(int dif)  
  { 
    int i,j,k; 
    for (i=2; i<13; i++) 
    { 
      int up = pow(10.0, (i+1)/2); 
      int mod = pow(10.0, i - (i+1)/2); 
      for (j=up/10; j<up; j++) 
      { 
        int bak = reverse(j); 
        int last = (bak + dif) % mod; 
        if ( (ll)j*mod + last - reverse((ll)j*mod + last) == dif) 
        { 
          char s[100]; 
          sprintf(s,"%lld",(ll)j*mod + last); 
          return s; 
        } 
      } 
    } 
    return "NONE"; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/