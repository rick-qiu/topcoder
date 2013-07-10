/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10992
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

class OneRegister {
public:
    string getProgram(int s, int t);
};

string OneRegister::getProgram(int s, int t) {
    string ret;
    return ret;
}


int test0() {
    int s = 7;
    int t = 392;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+*+";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int s = 7;
    int t = 256;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+***";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int s = 4;
    int t = 256;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "**";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int s = 7;
    int t = 7;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
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
    int s = 7;
    int t = 9;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int s = 10;
    int t = 1;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int s = 5;
    int t = 1250;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "**+";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int s = 4099;
    int t = 4096;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+*+**";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int s = 1000000000;
    int t = 536870912;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+*+*+**+";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int s = 11;
    int t = 214358881;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "***";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int s = 1;
    int t = 1;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
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
    int s = 1;
    int t = 2;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int s = 1;
    int t = 4;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+*";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int s = 1;
    int t = 8;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+*+";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int s = 1;
    int t = 16;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+**";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int s = 1;
    int t = 128;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+*+*+";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int s = 1;
    int t = 256;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+***";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int s = 1;
    int t = 564;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int s = 1;
    int t = 65536;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+****";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int s = 1;
    int t = 262144;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+***+*";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int s = 1;
    int t = 1000000000;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int s = 2;
    int t = 256;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "***";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int s = 3;
    int t = 4;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+*";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int s = 3;
    int t = 16;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+**";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int s = 3;
    int t = 59049;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int s = 4;
    int t = 2;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int s = 5;
    int t = 125;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int s = 5;
    int t = 6250000;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "*+**";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int s = 6;
    int t = 144;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+*";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int s = 8;
    int t = 4;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+*";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int s = 8;
    int t = 268435456;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "*+**";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int s = 9;
    int t = 43046721;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "***";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int s = 9;
    int t = 172186884;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "**+*";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int s = 10;
    int t = 10245;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int s = 10;
    int t = 40000;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "*+*";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int s = 10;
    int t = 100000000;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "***";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int s = 11;
    int t = 214358881;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "***";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int s = 13;
    int t = 456976;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+**";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int s = 14;
    int t = 802816;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++*";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int s = 17;
    int t = 83521;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "**";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int s = 18;
    int t = 104976;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "**";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int s = 19;
    int t = 16;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+**";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int s = 21;
    int t = 168;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+++";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int s = 22;
    int t = 123904;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "++++*";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int s = 22;
    int t = 234256;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "**";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int s = 23;
    int t = 1083392;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+++++*+";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int s = 23;
    int t = 771751936;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+++++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int s = 27;
    int t = 2916;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+*";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int s = 28;
    int t = 614656;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "**";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int s = 32;
    int t = 1024;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "*";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int s = 32;
    int t = 1048576;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "**";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int s = 33;
    int t = 264;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+++";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int s = 41;
    int t = 2825761;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "**";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int s = 43;
    int t = 172;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "++";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int s = 48;
    int t = 73728;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "++*+";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int s = 49;
    int t = 392;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+++";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int s = 49;
    int t = 5764801;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "**";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int s = 50;
    int t = 838860800;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int s = 51;
    int t = 6765201;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "**";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int s = 53;
    int t = 11236;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+*";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int s = 53;
    int t = 889192448;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int s = 62;
    int t = 260046848;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int s = 66;
    int t = 18974736;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "**";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int s = 68;
    int t = 21381376;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "**";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int s = 72;
    int t = 1327104;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "++++*";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int s = 74;
    int t = 592;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+++";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int s = 74;
    int t = 620756992;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int s = 75;
    int t = 31640625;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "**";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int s = 76;
    int t = 46208;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+*+";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int s = 80;
    int t = 256;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+***";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int s = 80;
    int t = 102400;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "++*";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int s = 81;
    int t = 648;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+++";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int s = 83;
    int t = 881792;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+++*+";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int s = 86;
    int t = 875213056;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+**";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int s = 92;
    int t = 71639296;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "**";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int s = 94;
    int t = 788529152;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int s = 96;
    int t = 768;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+++";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int s = 96;
    int t = 9437184;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+++++*";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int s = 97;
    int t = 88529281;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "**";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int s = 124;
    int t = 64;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+*+*";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int s = 128;
    int t = 96;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int s = 157;
    int t = 1024;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+**+*";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int s = 257;
    int t = 256;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+***";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int s = 454;
    int t = 256;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+***";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int s = 637;
    int t = 512;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+***+";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int s = 43393;
    int t = 65536;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+****";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int s = 68467;
    int t = 68467;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
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

int test87() {
    int s = 102968;
    int t = 65536;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+****";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int s = 999999;
    int t = 99999999;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int s = 1002736;
    int t = 1048576;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+**+**";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int s = 3431332;
    int t = 2097152;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+**+**+";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int s = 30199283;
    int t = 67108864;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+*+**+*";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int s = 193221366;
    int t = 536870912;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+*+*+**+";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int s = 1000000000;
    int t = 2;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int s = 1000000000;
    int t = 4;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+*";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int s = 1000000000;
    int t = 16;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+**";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int s = 1000000000;
    int t = 256;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+***";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int s = 1000000000;
    int t = 65536;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+****";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int s = 1000000000;
    int t = 1000000000;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int s = 512;
    int t = 65536;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+****";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int s = 10;
    int t = 1000000000;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int s = 465456;
    int t = 16769023;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int s = 4;
    int t = 32768;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+*+*+";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int s = 12345678;
    int t = 260846532;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int s = 29382974;
    int t = 293829747;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int s = 2;
    int t = 1;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int s = 2;
    int t = 4;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "*";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int s = 14;
    int t = 12;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int s = 666666670;
    int t = 886389896;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int s = 13;
    int t = 999999999;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int s = 65537;
    int t = 131073;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int s = 32;
    int t = 64;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int s = 1;
    int t = 99999999;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int s = 5;
    int t = 40000;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+*+*";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int s = 5;
    int t = 2;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int s = 3;
    int t = 9;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "*";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int s = 3;
    int t = 6718464;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+**+*";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int s = 77;
    int t = 64;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+*+*";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int s = 1;
    int t = 536870912;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+*+*+**+";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int s = 7;
    int t = 368947264;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "*+*+*";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int s = 7;
    int t = 1;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int s = 3;
    int t = 81;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "**";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int s = 350490028;
    int t = 991619984;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int s = 67;
    int t = 1000000000;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int s = 268435457;
    int t = 536870913;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int s = 10;
    int t = 2;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int s = 1000000000;
    int t = 999999999;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int s = 1;
    int t = 1024;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+**+*";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int s = 524288;
    int t = 536870912;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+*+*+**+";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int s = 3;
    int t = 402653184;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+++++++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int s = 7;
    int t = 114688;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++++++";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int s = 9;
    int t = 36;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "++";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int s = 434;
    int t = 134217728;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+*+**+*+";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int s = 1;
    int t = 43;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int s = 10;
    int t = 4;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+*";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int s = 17;
    int t = 16;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+**";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int s = 10889;
    int t = 10;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int s = 3;
    int t = 805306368;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int s = 12345;
    int t = 2;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int s = 3;
    int t = 256;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+***";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int s = 999999999;
    int t = 808348673;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int s = 3;
    int t = 60466176;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int s = 7;
    int t = 2048;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+**+*+";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int s = 128;
    int t = 256;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int s = 8;
    int t = 16;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int s = 7;
    int t = 49;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "*";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int s = 162;
    int t = 104976;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+*";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int s = 1;
    int t = 5;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int s = 324987325;
    int t = 382975023;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int s = 3;
    int t = 2;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int s = 132;
    int t = 2;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int s = 1;
    int t = 805306368;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int s = 2;
    int t = 6;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int s = 65538;
    int t = 262148;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int s = 343;
    int t = 33554432;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+*+***+";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int s = 3;
    int t = 1000000000;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int s = 77;
    int t = 2097152;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+**+**+";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int s = 10000000;
    int t = 1;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int s = 9;
    int t = 589824;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int s = 10000;
    int t = 100000000;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "*";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int s = 6;
    int t = 787346436;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int s = 536870913;
    int t = 536870912;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+*+*+**+";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int s = 50;
    int t = 100;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int s = 7;
    int t = 1000000000;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int s = 7;
    int t = 8;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+*+";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int s = 500000000;
    int t = 1000000000;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int s = 7;
    int t = 268435456;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+*+*+**";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int s = 3;
    int t = 11;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int s = 6;
    int t = 18;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int s = 16384;
    int t = 134217728;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+*+**+*+";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int s = 256;
    int t = 1024;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "++";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int s = 1;
    int t = 64;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+*+*";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int s = 17;
    int t = 8;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+*+";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int s = 31000;
    int t = 961000000;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "*";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int s = 512;
    int t = 131072;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+****+";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int s = 500000;
    int t = 891896832;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int s = 3;
    int t = 536870912;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+*+*+**+";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int s = 1024;
    int t = 65536;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int s = 5;
    int t = 83886080;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int s = 64;
    int t = 256;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "++";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int s = 7;
    int t = 14680064;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "+++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int s = 2;
    int t = 67108864;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "*+**+*";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int s = 1;
    int t = 3;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int s = 65500;
    int t = 70000;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = ":-(";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int s = 3;
    int t = 65536;
    OneRegister* pObj = new OneRegister();
    clock_t start = clock();
    string result = pObj->getProgram(s, t);
    clock_t end = clock();
    delete pObj;
    string expected = "/+****";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22726556&rd=14239&pm=10992
********************************************************************************
#include <iostream> 
#include <string> 
#include <math.h> 
template <class T> T MIN(T a, T b) { if(a < b) return a; else return b; } 
using namespace std; 
#define  SZ(a)    (int)(a).size() 
class OneRegister  
{ 
  string ret; 
  int S; 
  void dg(string str, int i) 
  { 
    if(i == S) 
    { 
      if(SZ(str)) ret = SZ(ret) == 0 ? str : (SZ(ret) > SZ(str) ? str : (SZ(ret) < SZ(str) ? ret : MIN(ret, str))); 
    } 
    if(i > 1) 
    { 
      bool even = i % 2 == 0; 
      int temp = sqrt(i); 
      while(temp * temp < i) temp++; 
      bool square = temp * temp == i; 
      if(even) dg("+" + str, i >> 1); 
      if(square) dg("*" + str, temp); 
    } 
  } 
public: 
  string getProgram(int s, int t) 
  { 
    if(s == t) return ""; 
    if(t == 1) return "/"; 
    S = s; 
    ret = ""; 
    dg("", t); 
    string str1 = ret; 
    S = 1; 
    ret = ""; 
    dg("", t); 
    string str2 = ret; 
    if(SZ(str2)) str2 = "/" + str2; 
    ret = str1; 
    if(SZ(str2)) ret = SZ(ret) == 0 ? str2 : (SZ(ret) > SZ(str2) ? str2 : (SZ(ret) < SZ(str2) ? ret : MIN(ret, str2))); 
    return SZ(ret) == 0 ? ":-(" : ret; 
  } 
};

********************************************************************************
*******************************************************************************/