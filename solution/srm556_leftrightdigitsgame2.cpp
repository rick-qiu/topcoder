/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12198
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

class LeftRightDigitsGame2 {
public:
    string minNumber(string digits, string lowerBound);
};

string LeftRightDigitsGame2::minNumber(string digits, string lowerBound) {
    string ret;
    return ret;
}


int test0() {
    string digits = "565";
    string lowerBound = "556";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "556";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string digits = "565";
    string lowerBound = "566";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "655";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string digits = "565";
    string lowerBound = "656";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string digits = "9876543210";
    string lowerBound = "5565565565";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "5678943210";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string digits = "8016352";
    string lowerBound = "1000000";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "1086352";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string digits = "0";
    string lowerBound = "1";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
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
    string digits = "5";
    string lowerBound = "5";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "5";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string digits = "5";
    string lowerBound = "4";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "5";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string digits = "4";
    string lowerBound = "5";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string digits = "00000000000000000000000000000000000000000000000000";
    string lowerBound = "10000000000000000000000000000000000000000000000000";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
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
    string digits = "00000000000000000000000000000000000000000000000009";
    string lowerBound = "77777777777777777777777777777777777777777777777777";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "90000000000000000000000000000000000000000000000000";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string digits = "00000000000000000000000000000000000000000000000009";
    string lowerBound = "99999999999999999999999999999999999999999999999999";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string digits = "3";
    string lowerBound = "1";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "3";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string digits = "08";
    string lowerBound = "89";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string digits = "068";
    string lowerBound = "356";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "608";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string digits = "0067";
    string lowerBound = "4008";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "6007";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string digits = "35410";
    string lowerBound = "25545";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "35410";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string digits = "310938";
    string lowerBound = "847579";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "890133";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string digits = "0916929";
    string lowerBound = "2151053";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "2190699";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string digits = "07078383";
    string lowerBound = "48812165";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "70078383";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string digits = "235994996";
    string lowerBound = "373020932";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "423599996";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string digits = "8917532537";
    string lowerBound = "9447538653";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "9817532537";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string digits = "36403829258";
    string lowerBound = "83994503502";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "84360329258";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string digits = "370035289599";
    string lowerBound = "251490009789";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "253003789599";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string digits = "4695057679329";
    string lowerBound = "2124485185683";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "2304695576799";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string digits = "45527201837242";
    string lowerBound = "92788746069371";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string digits = "881324356505788";
    string lowerBound = "781132987291731";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "788132435650588";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string digits = "8724483375744806";
    string lowerBound = "7433078356500676";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "7442788335744806";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string digits = "38970557828774226";
    string lowerBound = "95480025359174697";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "98370557828774226";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string digits = "725431577753493721";
    string lowerBound = "892333704165426715";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "912754357775343721";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string digits = "2755894113062675191";
    string lowerBound = "2195549924694362705";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "2195572841306675191";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string digits = "54880697764616510142";
    string lowerBound = "56781948547726329061";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "56784580697461610142";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string digits = "522042136022636254641";
    string lowerBound = "559737750935742501186";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "560022542136223624641";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string digits = "6546702755696041797967";
    string lowerBound = "3311557917772180683713";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "4004566727556961797967";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string digits = "65020785252093803529006";
    string lowerBound = "92935012660549842608015";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "92950056278252038035006";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string digits = "738084858857841946011822";
    string lowerBound = "454621627181030803005183";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "454738088588781946011822";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string digits = "9161360312188956223616528";
    string lowerBound = "2710273188091634750631433";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "2801196363121895622361658";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string digits = "71902829060153852898546968";
    string lowerBound = "95003383463283393317509125";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "95007190282961385288546968";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string digits = "065719945873917058283256381";
    string lowerBound = "111410031089810180985956027";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "111506799458739705828325638";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string digits = "8535318031205747726058531884";
    string lowerBound = "1496211430806307166034108805";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "1500013358583125747726583884";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string digits = "71776668268500781552364414434";
    string lowerBound = "92680018933371862476321796100";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string digits = "829775674302975703295235550654";
    string lowerBound = "475770040807624506549440935519";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "475772895674302970329523555065";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string digits = "3379400061403038652000567469739";
    string lowerBound = "4061703815708007555116280004087";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "4061733940006403038520056769739";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string digits = "64685390727936112473876667344950";
    string lowerBound = "79109029525737109689800614212694";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "79203466859773611243876667344950";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string digits = "721858832037465252878884140892524";
    string lowerBound = "312664024719560340782742991335372";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "312785882037465252878884140892524";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string digits = "7122137850439491896196849625015157";
    string lowerBound = "4235777194286161215177324957003468";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "4271213785039491896196849625015157";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string digits = "72807840675529932723935303389993712";
    string lowerBound = "74129620363236558150880780703137207";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "74278078065529932723935303389993712";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string digits = "305988166842031992596942811828787505";
    string lowerBound = "663450544274918830985230286853611965";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "665039881684203199259942811828787505";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string digits = "1400655009179254568215851827762040228";
    string lowerBound = "2958085246288254831504923505285542244";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "2960014550017925456815851827762040228";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string digits = "69926079855844265636078454482903513389";
    string lowerBound = "91589358220348339033869961068500508110";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "91589626990755844265636078444829035338";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string digits = "633512720790947594025755073071831947914";
    string lowerBound = "791888405689502396247749736743360032634";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "791890013365272794759402575507307134914";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string digits = "2014388552887885426468052500360035896213";
    string lowerBound = "4591480711260210173724852233512705387936";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "4602143885528878854268052500360035896213";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string digits = "73567070347488136186801351881487179279375";
    string lowerBound = "76983994759155482845476287984980241256264";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "77000375677347488136186813518814817927935";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string digits = "701991295537619538050804723930296143184164";
    string lowerBound = "880665577171098563655869236735303745451295";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "880670199129553719538050472393029614314164";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string digits = "3596381462591125539826578084597570038182126";
    string lowerBound = "2510595515312800017871815996191029783755083";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "2511133596846259253982657808459757003818126";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string digits = "15164277574703450538807263856289489054834154";
    string lowerBound = "68637134529651527195210893473676771562410157";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "68637151642757470345058807235289489054834154";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string digits = "580324574874033623750758844156562781214263060";
    string lowerBound = "403327943408329743014060301840277561040284242";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "403328503457487403627575884156562781214263060";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string digits = "9691052684329061793323289833024290320948107435";
    string lowerBound = "6209841260552042755485797419183574836644895616";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "6209961526843901793323289833024290320948107435";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string digits = "15396453747588897025305574015633237095832465610";
    string lowerBound = "73496847884108950897552249986700604414462181175";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "73496915345374758887025305570156323095832465610";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string digits = "531874936262806092431525927760768700019212938398";
    string lowerBound = "897104778987341838792108336232745332274279280147";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "897104781359362628069243525927607687000121293398";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string digits = "9613963206361956826579275983537488795314240324017";
    string lowerBound = "2286079350108094970403342259916655130449482506546";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "2286091693632361956265792759835374887953144034017";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string digits = "82337747184963159887462482340704959847287618876913";
    string lowerBound = "81729240748720231938344986638649960138494198455928";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "81729241128337747849635988746283407045984786876913";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string digits = "31675269682330430957542344996389950693403077228885";
    string lowerBound = "11731956602838487388603622405369346965073676360312";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "13675269682330430957542344996389950693403077228885";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string digits = "24747310951154358777272966199021198272431912077219";
    string lowerBound = "42033057611009499874689347457528175994232723271473";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "42033247471095115458777272966199119827231912077219";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string digits = "20404772512064863409850260654464156524175712431654";
    string lowerBound = "43015849659357081774760578899157583305443615826636";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "43017002447252064863409850266544641565241757124165";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string digits = "75491280600948596024623532367855092605130078770302";
    string lowerBound = "20597264768617372735078177268844724789450401068690";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "20597264800014579286945960223533685502601300787703";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string digits = "74329319488258988260539971321411116704058605445694";
    string lowerBound = "18120043461391221814685668380718261899819509966746";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "18123479394825898826053997132141116704058605445694";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string digits = "40825892202622982578009162138742301673131182508036";
    string lowerBound = "64770805273494818409754967019545705329853476922565";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "64770820485922262298258009162138230167313118250803";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string digits = "48971111684219806998240010987384431885797673670178";
    string lowerBound = "13759089693307969481878920534911439689760379789225";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "13759089694111148976821809240018738443188796767078";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string digits = "18982063564753892085460897605745302113993732696377";
    string lowerBound = "83106844408861728624730486424908801923812501881514";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "83189820635647589205460897605745302113993732696377";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string digits = "28730980356895006799728787223591010592420808780165";
    string lowerBound = "31551233558510072995743688019055710947243222339120";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "32000028739835689567997287872591010592420808780165";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string digits = "12558336022492459945572656496089857074349555403601";
    string lowerBound = "38352741655738737597098682805683045793340115960533";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "38355128360224924599455726564960895707434955540601";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string digits = "51679522928591115332427616337533252968971895540341";
    string lowerBound = "83653673018269440269894186724620153595000906184214";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "83655156792292859111332427163375325296897195540341";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string digits = "34632592580364009800101794703389979890835468533261";
    string lowerBound = "94622412551245134639485918400837500584796530697242";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "94622436359580300800101794703389979890835468533261";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string digits = "21326380011206248335115400465768225440827556731821";
    string lowerBound = "66542249940878288990239943100710527042699788869844";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "66542261232380011064833511500467822544082755731821";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string digits = "01963628099683912387128159821807731934959286874355";
    string lowerBound = "60938997723477527255908175853934059922182675540466";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "60938998019636206123871281598218773193495928874355";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string digits = "54787495663306382764908265325790227829634964053439";
    string lowerBound = "56533053985310123218965348735554608785556850407792";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "56533054457879663368276490826527902278293496403439";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string digits = "99384987030503088257300735738751021522204194059522";
    string lowerBound = "51182370705865794473842485242565307416681837828600";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "51182373998498005030885730073573750215222049405922";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string digits = "07034046961703820316696523713389466320294675670512";
    string lowerBound = "83701131345018130146181335883436560589170764604221";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "83701300740469670382316696523139466320294675670512";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string digits = "61267014762850629728446449698259320898678803917065";
    string lowerBound = "62582170120536496579109068800315333384694182478485";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "62582171626047606297284464496982593089867880391705";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string digits = "81631218361325452242732474929912737972710326613615";
    string lowerBound = "99488726195008366641597069811810816234948325718715";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "99511118632836324522427324742912737972710326613615";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string digits = "03615336633252113759145894152856317009112341161939";
    string lowerBound = "41696050336245953840846454398340263483708749417150";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "41696103653363325211375145894152853170091231161939";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string digits = "00011110101101101110001100011000100111101011011010";
    string lowerBound = "10001010010000000101111101001110000101010111011001";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "10001010010000000101111101100011001100111111111110";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string digits = "11110010110011010110011110100111000101011110111110";
    string lowerBound = "11000010010000100011000110001110011010100110010110";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "11000010010000100011000111111111111111001111111110";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string digits = "10001011010111000110001000110010001101111001100111";
    string lowerBound = "10011011111110110111110001111000011110011111001101";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "10011011111110110111110010000110000000000000111011";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string digits = "01111101110100110000000000011110011010001000110001";
    string lowerBound = "10110101110111111010010011101011111000110111010101";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "10110101110111111010010111111100000000000000000000";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string digits = "11111100001101010111100110101110010111110110001100";
    string lowerBound = "11011100100010000100011000000001011010100100111111";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "11011100100010000111111000111111101111101110001100";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string digits = "11011001001111100000100111000101110001101101100011";
    string lowerBound = "10011110001010101101011101000111100101111011111110";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "10011110001010101101011101001110000001110011001101";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string digits = "11001010101111000001100011000111010110010101001111";
    string lowerBound = "10100110111011111011011110011010001010100011001101";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "10100110111011111011100001000000010001110100110111";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string digits = "00111001110000100010010110011000100000011101000110";
    string lowerBound = "11110100101111010111101001111100000001100011010000";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "11110100101111010111110000100000000010000000000110";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string digits = "11001010001011010011010110010110101110111011000111";
    string lowerBound = "10010000110011100001100101111110110001101111101100";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "10010000110011100001100110000101111100111111111011";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string digits = "01010111101001001100100011001000000010010110101010";
    string lowerBound = "11001000001111101011101100010001100100100111010011";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "11001000001111101011101100100000000100100000111100";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string digits = "00010000000000000000000000000000000000000000000000";
    string lowerBound = "10000000000000000000000000000000000000000000000000";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "10000000000000000000000000000000000000000000000000";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string digits = "00010000000000000000000000000000000000000000000000";
    string lowerBound = "10000000000000000000000000000000000000000000000001";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string digits = "44262487200663752766554168965678024449091021293154";
    string lowerBound = "19079782244642006637527665541686568024449021293154";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "19079782244642006637527665541686568024449021293154";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string digits = "94467883211437775598162033100913234128068892301340";
    string lowerBound = "47411234496788377559816203310091323128068892301340";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "47411234496788377559816203310091323128068892301340";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string digits = "87362893378460497518920615692204882128381365318586";
    string lowerBound = "22158237868933746049718920656904882128381365318586";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "22158237868933746049718920656904882128381365318586";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string digits = "55360298345822405188969587960270241512477023448189";
    string lowerBound = "95149519035562834582240588969876027021247702344818";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "95149519035562834582240588969876027021247702344818";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string digits = "47279613014107035955847160284520975073178863623741";
    string lowerBound = "31671924776130140035955847102845209750737886362741";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "31671924776130140035955847102845209750737886362741";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string digits = "44003091376486771067003290056773819011628755020075";
    string lowerBound = "95660004439137486771070032900677381011628755020075";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "95660004439137486771070032900677381011628755020075";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string digits = "03616805500073015466453092319401831741965349590549";
    string lowerBound = "30000000036168557315466453923194181741965349590549";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "30000000036168557315466453923194181741965349590549";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string digits = "04690193454653920630909810861755014738444076468886";
    string lowerBound = "31290046913454653906309098086175501478444076468886";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "31290046913454653906309098086175501478444076468886";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string digits = "13693704079108480628204167963864953930871299292463";
    string lowerBound = "18287913630407910480620416796386495393087299292463";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "18287913630407910480620416796386495393087299292463";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string digits = "71618950635842309285901304619259605475707733630230";
    string lowerBound = "88011768956354230925901304619259605475707733630230";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "88011768956354230925901304619259605475707733630230";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string digits = "28232219161041723277279976977283168400720121342808";
    string lowerBound = "38160111222283964172327727997977283640072012142809";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "38160111222823964172327727997977283640072012142808";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string digits = "69011291205141246910405025321752546596652265199692";
    string lowerBound = "11390069112912514124610405025275254659665226599693";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "11390096112912514124610405025275254659665226599692";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string digits = "23504384911696504525881887770940768401477561534206";
    string lowerBound = "92180235434916965045588188777040768401477561534207";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "92180325434916965045588188777040768401477561534206";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string digits = "02187900548038306206087157675220555015177411034896";
    string lowerBound = "81320187900548038062060871576752205550151774103497";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "81320187900548038062060871576752205550157741103496";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string digits = "85538361122488134995239235712605848687412593625504";
    string lowerBound = "10241113355886224883995239235716584868742593625505";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "10241113355886224883995239357126584868742593625504";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string digits = "09276938648651301767548870072577269651471846102629";
    string lowerBound = "24806509276938648613017754887072577269651471610270";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "24806509276938648613017754887072577269651471610629";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string digits = "21247701532424804005654286660147067044739084002361";
    string lowerBound = "26847212470153224040055428666014706704473908400362";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "26847212470153224040055486660147067044739084002361";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string digits = "92089583423526979964922726079522935371162763489668";
    string lowerBound = "56582908953423269799492272607922935371162763489669";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "56582908953423269799492272607952293371162763489668";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string digits = "08563069736134568134930267822031983976504244383750";
    string lowerBound = "16073085606936134568134932782203983976504244383751";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "16073508606936134568134932782203983976504244383750";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string digits = "22283375788952998280235623996945902896551888023210";
    string lowerBound = "15326202222283375788959988359969459028965188802321";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "15326202222283375788959988359969459028965888023210";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string digits = "10001111110110110000110010111101101111110101000101";
    string lowerBound = "10010100000000110111010011101100111111111111111001";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "10010100000000110111010011101100111111111111111001";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string digits = "10110101000011001100011000000111111000001101011001";
    string lowerBound = "10111110001011110110011100101000000000001111100000";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "10111110001011110110011100101000000000001111100000";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string digits = "00010010001001111110010010111101110000100110001101";
    string lowerBound = "11101001111010110110011100000000111100011100001000";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "11101001111010110110011100000000111100011100001000";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string digits = "01000110001110100001011000001111010100001001110001";
    string lowerBound = "11001101011011001010001110000110001000011000010001";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "11001101011011001010001110000110001000011000010001";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string digits = "01110010111101101011111110011010101100101110011011";
    string lowerBound = "10100010110000001101111011000110111111111111011111";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "10100010110000001101111011000110111111111111011111";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string digits = "01000111110011101001110100101001110001101000000011";
    string lowerBound = "10010101111101110000101111100000001110001101000010";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "10010101111101110000101111100000001110001110000001";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string digits = "11100110010000100110100010001000111100000110011001";
    string lowerBound = "10101001111011101011001100111000001000000000001011";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "10101001111011101011001101110000001000000000001010";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string digits = "00110011000110110101010111111110000000111100010000";
    string lowerBound = "10000010101010110000000011111111111110000011110001";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "10000010101010110000000011111111111110000111100000";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string digits = "11110001000111100000100000000010010010010101000100";
    string lowerBound = "10011100111110000001111000000000000000010010101001";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "10011100111110000001111000000000000000010010110000";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string digits = "10001011010010110110000101010110110001110111100111";
    string lowerBound = "10101000010010111100111000010100100001111111111100";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "10101000010010111100111000010100100010111111111011";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string digits = "24120361070998207884629926669915413549501374923069";
    string lowerBound = "53326122285316127548532392553030408672164827164085";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "53342120610709982078846299266699154149501374923069";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string digits = "7828";
    string lowerBound = "8664";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "8728";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string digits = "01010101010101010101010101010101010101010101010101";
    string lowerBound = "10110101100011010110001101011000110101100011010100";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "10110101100011010110001101011000110101100011010100";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string digits = "56556556556556556556556655655655565566556556655655";
    string lowerBound = "56656565565565565565565565565565565565565565565565";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "56656565565565565565565565565565565565565565565565";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string digits = "17409488245517115276142322168576189279543123341138";
    string lowerBound = "64277931986502860248650900613893446066184963788291";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "64278017494824551115761232216857189279543123341138";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string digits = "29384756233984765387648494847464849487322174456";
    string lowerBound = "59842948573920283857389309283849238482934958482";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "59843229384756339847658764484746484948732217446";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string digits = "01010101010101010100000001111111100011011011101001";
    string lowerBound = "11110110000000101110001001011100111111001001110001";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "11110110000000101110001001011100111111001001110001";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string digits = "01234";
    string lowerBound = "31024";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "31024";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string digits = "0182984729798237562327640756075756881883401231945";
    string lowerBound = "3459837953498579348759834769379675993134994658947";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "3459880129472798237562327640756075768818830121945";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string digits = "56545753525859515258535754565553585957525051";
    string lowerBound = "58545753525859515258535754565553585957525051";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "58545753525865545753525591558565535595725051";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string digits = "12345678901234567890123456789012345678901234567890";
    string lowerBound = "11111111111111111111111111111111111111111111111111";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "11111234567890234567890234567890234567890234567890";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string digits = "13232323232323232323232323232323232323232323232324";
    string lowerBound = "43333333333333333333333312222222222222222222222222";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "43333333333333333333333312222222222222222222222232";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string digits = "63220680150400754218533501245023126179391466089009";
    string lowerBound = "62681500758350124523167910890836531281196090887463";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "62700000223668154541853350124502312179391466089009";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string digits = "12345678901234567890123456789012345678901234567890";
    string lowerBound = "10000000000000000000000000000000000000000000000000";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "10000123456789123456789123456789123456789234567890";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string digits = "55555555555555555555555555555555555555555555555555";
    string lowerBound = "44444444444444444444444444444444444444444444444444";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "55555555555555555555555555555555555555555555555555";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string digits = "99999999999999999999999999999999999998999999998999";
    string lowerBound = "10000000000000000000000000000000000000000000000000";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "88999999999999999999999999999999999999999999999999";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string digits = "121212121212121212521232121212121212121212121212";
    string lowerBound = "121212121212121212121212121212121212121212121212";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "121212121212121212121212121212121212121212125232";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string digits = "59045940393934509345905390395034590345930359555345";
    string lowerBound = "12345678901234567890123456789012345678901234567890";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "30000000059459439393459345953939534593459335955545";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string digits = "5430319999";
    string lowerBound = "3457137961";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "3540319999";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string digits = "598795421498745566345221452000326063030326565";
    string lowerBound = "486132153013036846484300044306465406546500462";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "487598954214974556634522152000326063030326565";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string digits = "43574141794350265322231608993907688128285";
    string lowerBound = "38601412159297218638710676408991409334836";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "38601413457479435253222316099907688128285";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string digits = "478";
    string lowerBound = "633";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "748";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    string digits = "1234567890";
    string lowerBound = "1000000000";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "1234567890";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    string digits = "9324857934875893478957348957348978934747384759385";
    string lowerBound = "5328758934758934795834897432897598324748932784234";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "5329348579348758934789573489573489789347473847598";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    string digits = "75";
    string lowerBound = "66";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "75";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    string digits = "14877705255934671197265232435804391933463030504927";
    string lowerBound = "77516673942074559304004913242358337652171495383209";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "77520148777559346119265232435804391933463030504927";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    string digits = "99999988888777777666666555555444444333333322222222";
    string lowerBound = "11111111111111111111111111111111111111111111111111";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "22222222333333344444455555566666677777788888999999";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    string digits = "555666777";
    string lowerBound = "767676555";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "775556667";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    string digits = "0626";
    string lowerBound = "2929";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "6026";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    string digits = "98409053152361505509949047124075204974148011539825";
    string lowerBound = "35668709493130786707228549021927334644301060638287";
    LeftRightDigitsGame2* pObj = new LeftRightDigitsGame2();
    clock_t start = clock();
    string result = pObj->minNumber(digits, lowerBound);
    clock_t end = clock();
    delete pObj;
    string expected = "35689409053152310550994904712407520497414801159825";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22737342&rd=15178&pm=12198
********************************************************************************
#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <ctime>
#include <cstring>
#include <cassert>
#include <sstream>
#include <complex>
#include <bitset>
 
using namespace std;
 
#define forn(i, n) for(int i = 0; i < (int)(n); i++)
#define ford(i, n) for(int i = (int)(n) - 1; i >= 0; i--)
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define last(a) int(a.size() - 1)
#define all(a) a.begin(), a.end()
#define seta(a,x) memset (a, x, sizeof (a))
#define I (int)
 
typedef long long int64;
typedef pair <int, int> pii;
 
class LeftRightDigitsGame2 {
public:
  string minNumber(string, string);
};
 
const int nmax = 52;
 
bool can[nmax][nmax][3];
string t[nmax][nmax][3];
string a, s;
int n;
 
void add(int l, int r, int tp, const string& now) {
  if (!can[l][r][tp]) {
    can[l][r][tp] = 1;
    t[l][r][tp] = now;
  } else
    t[l][r][tp] = min(t[l][r][tp], now);
}
 
int get1(int a, char b, char c){
  if (b > c) return 2;
  if (b == c) return a;
  return 0;
}
 
int get2(int a, char b, char c){
  if (a == 2) return 2;
  if (a == 1) {
    if (b > c) return 2;
    if (b == c) return 1;
    return 0;
  }
  return 0;
}
 
void go(int l, int r, int tp) {  
  if (!can[l][r][tp]) return;
  //cerr << l << " " << r << " " << tp << " " << t[l][r][tp] << endl;
  char cur = a[r-l+1];
  if (l > 0) {
    int ntp = get1(tp, cur, s[l-1]);
    add(l-1, r, ntp, cur + t[l][r][tp]);
  }
  if (r < n-1) {
    int ntp = get2(tp, cur, s[r+1]);
    add(l, r+1, ntp, t[l][r][tp] + cur);
  }
}
 
string LeftRightDigitsGame2::minNumber(string d1, string l1) {
  a = d1;
  s = l1;
  n = a.size();
  memset(can, 0, sizeof can);
  forn(i, n){
    char now = a[0];
    string qwe = "";
    qwe += now;
    if (now > s[i])
      add(i, i, 2, qwe);
    if (now == s[i])
      add(i, i, 1, qwe);
    if (now < s[i])
      add(i, i, 0, qwe);
  }
  for (int len = 1; len < n; len ++)
    for (int i = 0; i + len - 1 < n; i ++)
      for (int j = 0; j < 3; j ++)
        go(i, i + len - 1, j);
  string res;
  for (int j = 1; j <= 2; j ++) {
    if (can[0][n-1][j]){
      if (res == "" || res > t[0][n-1][j])
        res = t[0][n-1][j];
    }
  }
  return res;
}

********************************************************************************
*******************************************************************************/