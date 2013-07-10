/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10265
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

class IncreasingLists {
public:
    string makeIncreasingList(string mask);
};

string IncreasingLists::makeIncreasingList(string mask) {
    string ret;
    return ret;
}


int test0() {
    string mask = "??";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "10";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string mask = "???";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,2";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string mask = "?????????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,2,3,4,5,9";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string mask = "??????????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string mask = "?;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string mask = "?2?5??7;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string mask = "?2?5??7?;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "12,50,70,71";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string mask = "?;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,1566,1567";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string mask = "???;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,2,5,6,10,11";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string mask = "???????????????????????????????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,11,100,101,102,103,104,105,106";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string mask = "??9??8??7??6??5??4??3??2??1??0??";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,9,18,170,6005,14003,1200100000";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string mask = "?";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string mask = ";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string mask = "0";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string mask = "9";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "9";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string mask = "0??????????????????????";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string mask = ";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string mask = "9?";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "90";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string mask = "9??";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "900";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string mask = "6?6";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "606";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string mask = "1;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,2,1111,2000,6666666";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string mask = "1;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,20,111,1000,2000";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string mask = "??????????????????????????????????????????????????";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,100,1000,10000,100000,1000000,100000000000000";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string mask = "90;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string mask = "?????94??8";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,94,98";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string mask = "?0???????0?????????????00?3?????7??8????0?????????";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "10,100,1000,10000,1000000,3000007,1800000000000000";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string mask = "???????????????????3??????????????6????????3??????";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,100,1000,100003,1000000,1000060,1000003000000";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string mask = "???????????????????????????????????????????????0??";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,100,1000,10000,100000,1000000,100000000000000";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string mask = "6?????????0???;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "6,10,100,10000,10010,100000,1000000,10000000000008";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string mask = "??????99????98?????97????96??????94????85?????83??";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,199,10098,100097,100960,1000940,1085000008300";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string mask = "???????????????????????????????????????????????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,2,3,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string mask = "?????5????7?????2?????2?????9????3?????7??????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string mask = "?????5????7?????2?????2?????9????3?????7?????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,50,107,108,200,202,203,900,930,1007,1008,1009";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string mask = "?????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,2,3,5,6,10,70,71,20000,2000009,10030000,70000000";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string mask = "9?8??7??6????5????4??????3???????2????????1??????";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "9,80,7006,10050,10400,100300,1000200,100001000000";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string mask = "?9??8;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "19,28,17006,25004,33002,41000";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string mask = "???????????????????????????????????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,100,1000,1001,1002,10000,10001,10900,10000000";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string mask = "????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,11,12000,12001,12002,12003,12005";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string mask = ";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string mask = "243;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string mask = "?8?????????";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "18,100,1000";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string mask = "?;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,2,90,120,190,191";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string mask = "???;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string mask = "??1";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "101";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string mask = "??2?????0???0?0??";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,2,10,100,100000";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string mask = "?0??????23?7??00???";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "10,100,123,70000000";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string mask = "?;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,7,10,100010,115040";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string mask = "???0???59700;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,1059700,1260054";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string mask = "8?2?8?1?4;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "8,2080104,2209689";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string mask = "91239????1?8?717785";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "91239,100108,717785";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string mask = "?10000?0?33?73446";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "11000000,33073446";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string mask = "4610??05???9209;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "4610,1050009209,2050007043";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string mask = "??4?28340?34?538???767?9827?3481320196?178120?3?59";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,4,28340,340538,1076709827,3481320196,17812003059";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string mask = "??8??????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,8,10,11,100";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string mask = "??????????";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,10000";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string mask = "?????????2??????????????????????????????????";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,100,200,1000,10000,100000,1000000000000";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string mask = "?0?????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "10,1000,1600010006,103030000003000,110000000006000";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string mask = "?;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,100,100000,10000000,190000000,190000001";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string mask = "?;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string mask = "35????1?3?5;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "350,351,355,8000";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string mask = "8?;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "80,86,93";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string mask = "????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,11,12,21,22";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string mask = "?????????????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,11,12,13,20";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string mask = "?7????4?;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "17,18,40,41,100000";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string mask = "?29?9??;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "129,900,908";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string mask = "?7????2??2???9???;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "17,18,20,21,29,30,31";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string mask = "8106?54??60";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "8106,540060";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string mask = "?????90?2?????0";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,90,200,210";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string mask = "?9??;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1900,15000,90090060";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string mask = "9?;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "90,300,1070100";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string mask = "?088???0;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "10880000,11600000";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string mask = "?0;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "10,102704,200010";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string mask = "804780?0?57018??7";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "80478000057018007";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string mask = "?;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,105,170,175";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string mask = "?????????????????????50???9;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,11,100,101,102,150,159,160,1000500,1000000000";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string mask = "?????????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,2,3,4,5,6,10,100,10000,100000,1000000,1000000000";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string mask = "????4????3???9???0??7?1????0???00???????00??;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,2,4,10,30,190,200,701,1000,1100,1101,10000,10001";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string mask = "??????????????0?6????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,2,10,11,12,20,60,61,100,101,102,7000,10000,10005";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string mask = "?????1??5??3?????????0???????????2;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,1005,1300,1301,2000,2001,2002,100000,10000000";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string mask = "???????????????0???????????7????????????????????0?";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,100,1000,10000,100000,700000,1000000,10000000";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string mask = "????????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,100,100000,10000000,1000000000,10000000000000";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string mask = "??02??????????????????????????????????????????????";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1002,10000,100000,1000000,10000000,100000000000000";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string mask = "?00??0??0??02?0??0??;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "100,10000,1020000000,10004000000,10000300030001000";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string mask = "4?2?0?0?0?19???5?64?76??8??;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "4,2000000,19000506407600800,8600702070020246058300";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string mask = "7870??0?4?4066344?9??59?;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "7870,1004040663440900590,8004738050029000236700080";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string mask = "9000?000?00603374?207?62007?639???9?70?9?679011560";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "90000000000603374,20706200706390009070090679011560";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string mask = "8?0000000000000?0000000000010000000000000002000000";
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "80000000000000000000000000010000000000000002000000";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string mask = "??????????????????????????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,2,3,10,11,12,13,14,15,16,17,100,1000,10000,10001";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string mask = "???????????????8????????????????????0????8???;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,11,12,13,18,19,20,21,22,23,24,30,31,8000,8001";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string mask = "??2????????9????????????????7????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,2,10,11,19,20,21,22,23,24,70,71,72,73,74,100,101";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string mask = "?;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string mask = "???????????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,2,3,4,5,6,7,8,10,11,12,13,14,15,16,100,1000,1001";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string mask = "???;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,2,3,4,5,6,8,9,10,11,20,21,22,23,24,25,26,100,101";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string mask = "372528491815737947332878;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "372528491815737947332878,462000380000060700320297";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string mask = "482640764547403949260524;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "482640764547403949260524,530040070000700030040100";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string mask = "?????????????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,100,1000,10000,100000,1000000,100000000000000";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string mask = "???????????????????????????????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "1,10,11,100,101,102,103,104,105,106,1000,100000000";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string mask = "0????????????????????????????????;
    IncreasingLists* pObj = new IncreasingLists();
    clock_t start = clock();
    string result = pObj->makeIncreasingList(mask);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22733480&rd=13696&pm=10265
********************************************************************************
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <ctime>
#include <cassert>
 
using namespace std;
 
#define pb push_back
#define all(x) x.begin(), x.end()
#define forn(i, n) for(int i = 0; i < (int)(n); i++)
 
const int inf = (1 << 30) - 1;
 
typedef pair <int, int> pii;
typedef long long int64;
 
class IncreasingLists {
public:
  string makeIncreasingList(string);
};
 
const string sb = ",0123456789";
 
string min (string s1, string s2)
{
  if (s1 == "z")
    return s2;
  if (s2 == "z")
    return s1;  
  if (s1.length() != s2.length())
    {
      if (s1.length() < s2.length())
        return s1;
       else
        return s2; 
    }
  if (s1 < s2)
    return s1;
   else
    return s2;   
}
 
string s;
string t[51];
int n;
 
void uppend (string &s, int p)
{
  for (int i = p; i < (int)s.length(); i ++)
    if (s[i] == '?')
      s[i] = '0';
}
 
string minimum (string s1, string s2)
{
  if (s2[0] == '0' || s1.length() > s2.length())
    return "z";
  if (s1.length() < s2.length())
    {
      if (s2[0] == '?')
        s2[0] = '1';
      uppend (s2, 1);  
      return s2;      
    }  
  string s3 = s2;
  forn (i, s1.length())
    if (s2[i] != '?')
      {
        if (s2[i] > s1[i])
          {
            uppend (s2, i+1);
            return s2;
          }
        if (s2[i] < s1[i])
          {
            for (int j = i; j >= 0; j --)
              if (s3[j] == '?' && s2[j] < '9')
                {
                  s2[j] = (char)((int)s2[j] + 1);
                  uppend (s2, j+1);
                  return s2;
                }
             return "z";   
          }  
      }
     else
      s2[i] = s1[i];
  for (int j = (int)s2.length()-1; j >= 0; j --)
    if (s3[j] == '?' && s2[j] < '9')
      {
        s2[j] = (char)((int)s2[j] + 1);
        uppend (s2, j+1);
        return s2;
      }
  return "z";   
}
 
bool check ()
{
  t[0] = "";
  string tmp;
  for (int i = 1; i <= n; i ++)
    {
      t[i] = "z";
      tmp = "";
      for (int j = i-1; j >= 0; j --)
        {
          if (s[j] == ',')
            break;
          tmp = s[j] + tmp;
          if (j == 0) 
            t[i] = min (t[i], minimum ("", tmp));
           else
          if ((s[j-1] == ',' || s[j-1] == '?') && (t[j-1] != "" && t[j-1] != "z"))
            t[i] = min (t[i], minimum (t[j-1], tmp));
        }
    }  
  if (t[n] == "z")
    return false;
   else
    return true;   
}
 
string IncreasingLists::makeIncreasingList(string mask) {
  s = mask;
  n = s.length();
  if (!check ())
    return "impossible";
  forn (i, n)
    if (s[i] == '?')
      {
        forn (j, 11)
          {
            s[i] = sb[j];
            if (check())
              break;
          }
      }  
  return s;    
}

********************************************************************************
*******************************************************************************/