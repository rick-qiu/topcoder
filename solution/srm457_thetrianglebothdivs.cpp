/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10696
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

class TheTriangleBothDivs {
public:
    string fix(string time);
};

string TheTriangleBothDivs::fix(string time) {
    string ret;
    return ret;
}


int test0() {
    string time = "17:45 GMT-4";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "21:45";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string time = "16:?? GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string time = "?1:34 GMT-9";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "06:34";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string time = "??:?? GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string time = "00:?? GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:00";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string time = "00:?? GMT+?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string time = "?5:?? GMT+1";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "04:00";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string time = "1?:45 GMT+?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:45";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string time = "??:11 GMT-9";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:11";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string time = "??:11 GMT-8";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:11";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string time = "??:11 GMT-7";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:11";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string time = "??:11 GMT+5";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:11";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string time = "??:11 GMT+6";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:11";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string time = "??:11 GMT+9";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:11";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string time = "18:16 GMT?5";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "13:16";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string time = "19:16 GMT?5";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:16";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string time = "01:2? GMT+8";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "17:20";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string time = "??:?? GMT?3";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string time = "?0:5? GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:50";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string time = "??:46 GMT?9";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:46";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string time = "1?:1? GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:10";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string time = "0?:29 GMT+9";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:29";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string time = "17:?? GMT-1";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "18:00";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string time = "06:?4 GMT?9";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "15:04";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string time = "10:5? GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:50";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string time = "?4:?? GMT?8";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "06:00";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string time = "??:?6 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:06";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string time = "??:17 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:17";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string time = "??:4? GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:40";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string time = "??:1? GMT+?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:10";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string time = "??:?0 GMT?6";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string time = "?3:20 GMT?8";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:20";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string time = "??:?? GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string time = "??:1? GMT+9";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:10";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string time = "1?:?? GMT?5";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string time = "??:?? GMT+0";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string time = "1?:4? GMT?2";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "08:40";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string time = "22:?? GMT-6";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "04:00";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string time = "??:?? GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string time = "??:?? GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string time = "?2:?? GMT?7";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:00";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string time = "?6:?9 GMT-9";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:09";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string time = "0?:?4 GMT?6";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:04";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string time = "0?:27 GMT+?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:27";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string time = "1?:18 GMT-6";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:18";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string time = "14:40 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "15:40";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string time = "01:57 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:57";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string time = "?1:?6 GMT?7";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "04:06";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string time = "0?:?2 GMT+8";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:02";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string time = "16:?5 GMT+3";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "13:05";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string time = "18:10 GMT+?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "09:10";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string time = "?6:?? GMT?1";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:00";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string time = "1?:4? GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:40";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string time = "?2:21 GMT?3";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:21";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string time = "?6:?9 GMT?5";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:09";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string time = "1?:5? GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:50";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string time = "1?:2? GMT+6";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "04:20";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string time = "?7:0? GMT+7";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string time = "11:39 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "02:39";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string time = "03:?1 GMT-3";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "06:01";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string time = "??:?7 GMT-7";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:07";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string time = "1?:?? GMT-1";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "11:00";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string time = "??:5? GMT+1";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:50";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string time = "22:?6 GMT-1";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "23:06";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string time = "0?:0? GMT?1";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string time = "?1:?? GMT+9";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "02:00";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string time = "??:44 GMT+?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:44";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string time = "2?:4? GMT?3";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:40";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string time = "?7:02 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:02";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string time = "07:3? GMT+5";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "02:30";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string time = "0?:32 GMT+5";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:32";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string time = "??:?5 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:05";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string time = "??:40 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:40";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string time = "??:12 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:12";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string time = "22:?2 GMT?8";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "06:02";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string time = "0?:0? GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string time = "2?:?0 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string time = "??:?? GMT+2";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string time = "05:01 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "06:01";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string time = "1?:43 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:43";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string time = "?2:08 GMT+8";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "04:08";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string time = "15:?? GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string time = "1?:2? GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:20";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string time = "??:1? GMT+?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:10";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string time = "0?:?? GMT?8";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string time = "??:?? GMT-8";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string time = "?3:5? GMT+?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:50";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string time = "?2:1? GMT?1";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:10";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string time = "?2:5? GMT+9";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "03:50";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string time = "2?:51 GMT?3";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:51";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string time = "??:5? GMT?8";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:50";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string time = "?3:0? GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string time = "1?:4? GMT+3";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "07:40";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string time = "02:?? GMT-1";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "03:00";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string time = "?6:13 GMT+?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:13";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string time = "??:?6 GMT+?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:06";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string time = "1?:5? GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:50";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string time = "02:05 GMT?7";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "09:05";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string time = "09:?9 GMT-1";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "10:09";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string time = "0?:5? GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:50";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string time = "?8:?4 GMT+0";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "08:04";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string time = "0?:40 GMT+?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:40";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string time = "1?:11 GMT?5";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:11";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string time = "05:0? GMT+7";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "22:00";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string time = "0?:?6 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:06";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string time = "??:10 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:10";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string time = "??:53 GMT+?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:53";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string time = "?4:?? GMT+?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string time = "?7:00 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string time = "03:4? GMT+8";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "19:40";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string time = "?2:2? GMT+7";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:20";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string time = "??:55 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:55";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string time = "1?:?? GMT-6";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string time = "23:?0 GMT+3";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "20:00";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string time = "1?:55 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:55";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string time = "?1:39 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:39";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string time = "?8:?? GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string time = "?9:?? GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string time = "2?:?4 GMT?2";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:04";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string time = "?9:?? GMT-1";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "10:00";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string time = "?9:?3 GMT?7";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "02:03";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string time = "00:00 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:00";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string time = "?4:00 GMT?1";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "03:00";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string time = "23:23 GMT-9";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "08:23";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string time = "00:01 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:01";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string time = "12:00 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "03:00";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string time = "?1:3? GMT?9";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "02:30";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string time = "12:34 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "03:34";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string time = "12:2? GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "13:20";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string time = "0?:?? GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:00";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string time = "00:42 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:42";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string time = "01:23 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "02:23";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string time = "11:00 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "12:00";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string time = "23:59 GMT+0";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "23:59";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string time = "23:45 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:45";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string time = "12:00 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "13:00";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string time = "10:00 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:00";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string time = "14:?? GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "15:00";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string time = "12:45 GMT?4";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "08:45";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string time = "01:00 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "02:00";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string time = "0?:?9 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:09";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string time = "12:34 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "13:34";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string time = "13:13 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "04:13";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string time = "07:59 GMT+?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:59";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string time = "?3:?4 GMT+8";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:04";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string time = "13:13 GMT+?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "04:13";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    string time = "2?:00 GMT+1";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "19:00";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    string time = "?7:45 GMT-4";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "11:45";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    string time = "?6:00 GMT?1";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:00";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    string time = "12:12 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "03:12";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    string time = "17:48 GMT-4";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "21:48";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    string time = "10:12 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "11:12";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    string time = "?4:11 GMT+0";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "04:11";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    string time = "14:45 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "15:45";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    string time = "00:45 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:45";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    string time = "13:13 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "14:13";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    string time = "10:00 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "11:00";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    string time = "1?:4? GMT+?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:40";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    string time = "?5:0? GMT?0";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:00";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    string time = "10:?3 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:03";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    string time = "?4:?0 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:00";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    string time = "07:1? GMT+9";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "22:10";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    string time = "12:45 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "03:45";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    string time = "01:34 GMT+9";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "16:34";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    string time = "00:00 GMT+0";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    string time = "2?:00 GMT+0";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "20:00";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    string time = "17:45 GMT+4";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "13:45";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    string time = "23:30 GMT+0";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "23:30";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    string time = "00:?5 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:05";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    string time = "1?:?1 GMT?7";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:01";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    string time = "?4:4? GMT-3";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "07:40";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    string time = "?4:59 GMT-9";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "13:59";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    string time = "?8:00 GMT+0";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "08:00";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    string time = "03:45 GMT?2";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:45";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    string time = "14:00 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "05:00";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    string time = "?5:11 GMT+1";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "04:11";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    string time = "2?:3? GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:30";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    string time = "00:01 GMT+9";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "15:01";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    string time = "1?:?? GMT?4";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "06:00";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    string time = "00:00 GMT+?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    string time = "??:00 GMT-1";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    string time = "01:01 GMT+5";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "20:01";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    string time = "10:45 GMT?2";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "08:45";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    string time = "13:?9 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "14:09";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    string time = "00:00 GMT??";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    string time = "?1:00 GMT+1";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:00";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    string time = "2?:23 GMT+0";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "20:23";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    string time = "00:00 GMT+8";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "16:00";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    string time = "1?:?2 GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "00:02";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    string time = "00:59 GMT-1";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "01:59";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    string time = "13:?? GMT-?";
    TheTriangleBothDivs* pObj = new TheTriangleBothDivs();
    clock_t start = clock();
    string result = pObj->fix(time);
    clock_t end = clock();
    delete pObj;
    string expected = "14:00";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22691154&rd=14144&pm=10696
********************************************************************************
#line 62 "TheTriangleBothDivs.cpp"
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
 
class TheTriangleBothDivs {
  public:
  string fix(string time) {
    const char *p=time.c_str();
    for(int i=0;i<24;i++)for(int k=0;k<60;k++){
      for(int t=-9;t<=9;t++){
        char buf[100];
        sprintf(buf,"%02d:%02d GMT%+d\n",(i+t+24)%24,k,t);
        int ng=0;
        for(int s=0;s<11;s++)if(buf[s]!=p[s] && p[s]!='?')ng=1;
        if(ng==0){
          sprintf(buf,"%02d:%02d",i,k);
          return buf;
        }
      }
    }
    
  }
  
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/