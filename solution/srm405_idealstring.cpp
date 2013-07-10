/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9757
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

class IdealString {
public:
    string construct(int length);
};

string IdealString::construct(int length) {
    string ret;
    return ret;
}


int test0() {
    int length = 1;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int length = 3;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABB";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int length = 2;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
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
    int length = 4;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
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
    int length = 6;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCBCC";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int length = 7;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCC";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int length = 5;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
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
    int length = 8;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int length = 9;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
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
    int length = 10;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDBCCDDD";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int length = 11;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCBDCCDDDD";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int length = 12;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCDCCCDDDD";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int length = 13;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCDCCDDDDD";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int length = 14;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCDCDDDDDD";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int length = 15;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDD";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int length = 16;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDBECCDDDEEEEE";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int length = 17;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCBDECCDDDDEEEEE";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int length = 18;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCDECCCDDDDEEEEE";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int length = 19;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCDCECCDDDDEEEEEE";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int length = 20;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCDECCDDDDDEEEEEE";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int length = 21;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCDCECDDDDDEEEEEEE";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int length = 22;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCDECDDDDDDEEEEEEE";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int length = 23;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCDCEDDDDDDEEEEEEEE";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int length = 24;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDEDDDDDDDEEEEEEEE";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int length = 25;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDEDDDDDDEEEEEEEEE";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int length = 26;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDEDDDDDEEEEEEEEEE";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int length = 27;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDEDDDDEEEEEEEEEEE";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int length = 28;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDEDDDEEEEEEEEEEEE";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int length = 29;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDEDDEEEEEEEEEEEEE";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int length = 30;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDEDEEEEEEEEEEEEEE";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int length = 31;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEEEEEE";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int length = 32;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCDECFDDDDDDEEEEEEEFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int length = 33;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCDCEFDDDDDDEEEEEEEEFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int length = 34;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDEFDDDDDDDEEEEEEEEFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int length = 35;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDEDFDDDDDDEEEEEEEEFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int length = 36;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDEFDDDDDDEEEEEEEEEFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int length = 37;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDEDFDDDDDEEEEEEEEEFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int length = 38;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDEFDDDDDEEEEEEEEEEFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int length = 39;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDEDFDDDDEEEEEEEEEEFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int length = 40;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDEFDDDDEEEEEEEEEEEFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int length = 41;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDEDFDDDEEEEEEEEEEEFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int length = 42;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDEFDDDEEEEEEEEEEEEFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int length = 43;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDEDFDDEEEEEEEEEEEEFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int length = 44;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDEFDDEEEEEEEEEEEEEFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int length = 45;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDEDFDEEEEEEEEEEEEEFFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int length = 46;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDEFDEEEEEEEEEEEEEEFFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int length = 47;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDEDFEEEEEEEEEEEEEEFFFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int length = 48;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEFEEEEEEEEEEEEEEEFFFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int length = 49;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEFEEEEEEEEEEEEEEFFFFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int length = 50;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEFEEEEEEEEEEEEEFFFFFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int length = 51;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEFEEEEEEEEEEEEFFFFFFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int length = 52;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEFEEEEEEEEEEEFFFFFFFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int length = 53;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEFEEEEEEEEEEFFFFFFFFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int length = 54;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEFEEEEEEEEEFFFFFFFFFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int length = 55;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEFEEEEEEEEFFFFFFFFFFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int length = 56;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEFEEEEEEEFFFFFFFFFFFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int length = 57;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEFEEEEEEFFFFFFFFFFFFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int length = 58;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEFEEEEEFFFFFFFFFFFFFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int length = 59;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEEFEEEEFFFFFFFFFFFFFFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int length = 60;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEEEFEEEFFFFFFFFFFFFFFFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int length = 61;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEEEEFEEFFFFFFFFFFFFFFFFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int length = 62;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEEEEEFEFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int length = 63;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEEEEEEFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int length = 64;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDEFDGEEEEEEEEEEEEEEFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int length = 65;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDEDFGEEEEEEEEEEEEEEFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int length = 66;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEFGEEEEEEEEEEEEEEEFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int length = 67;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEFEGEEEEEEEEEEEEEEFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int length = 68;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEFGEEEEEEEEEEEEEEFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int length = 69;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEFEGEEEEEEEEEEEEEFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int length = 70;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEFGEEEEEEEEEEEEEFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int length = 71;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEFEGEEEEEEEEEEEEFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int length = 72;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEFGEEEEEEEEEEEEFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int length = 73;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEFEGEEEEEEEEEEEFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int length = 74;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEFGEEEEEEEEEEEFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int length = 75;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEFEGEEEEEEEEEEFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int length = 76;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEFGEEEEEEEEEEFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int length = 77;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEFEGEEEEEEEEEFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int length = 78;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEFGEEEEEEEEEFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int length = 79;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEFEGEEEEEEEEFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int length = 80;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEFGEEEEEEEEFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int length = 81;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEFEGEEEEEEEFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int length = 82;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEFGEEEEEEEFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int length = 83;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEFEGEEEEEEFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int length = 84;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEFGEEEEEEFFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int length = 85;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEFEGEEEEEFFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int length = 86;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEFGEEEEEFFFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int length = 87;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEFEGEEEEFFFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int length = 88;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEEFGEEEEFFFFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int length = 89;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEEFEGEEEFFFFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int length = 90;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEEEFGEEEFFFFFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int length = 91;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEEEFEGEEFFFFFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int length = 92;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEEEEFGEEFFFFFFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int length = 93;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEEEEFEGEFFFFFFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int length = 94;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEEEEEFGEFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int length = 95;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEEEEEFEGFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int length = 96;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEEEEEEFGFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int length = 97;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEEEEEEFFGFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int length = 98;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEEEEEEFFFGFFFFFFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int length = 99;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEEEEEEFFFFGFFFFFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int length = 100;
    IdealString* pObj = new IdealString();
    clock_t start = clock();
    string result = pObj->construct(length);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDDDDDDDDEEEEEEEEEEEEEEEEFFFFFGFFFFFFFFFFFFFFFFFFFFFFFFFFFGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22705757&rd=12177&pm=9757
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
 
#define for_each(it, v) for (typeof((v).begin()) it = (v).begin(); it != (v).end(); ++it)
 
class IdealString {
public:
  string construct(int);
};
 
int x[100];
int len;
string best;
 
void dfs(int i, int last, int sum)
{
  if (sum == len)
  {
    char s[101];
    memset(s, 0, sizeof(s));
    queue<char> unused;
    for (int j = 0; j < i; j++)
    {
      s[x[j] - 1] = 'A' + j;
      for (int k = 0; k < x[j] - 1; k++)
        unused.push('A' + j);
    }
    for (int j = 0; j < len; j++)
      if (s[j] == 0)
      {
        s[j] = unused.front();
        unused.pop();
      }
    s[len] = '\0';
    if (best == "" || best > string(s))
      best = string(s);
    return;
  }
  for (x[i] = last + 1; x[i] <= sum + 1 && sum + x[i] <= len; x[i]++)
    dfs(i + 1, x[i], sum + x[i]);
}
string IdealString::construct(int length) {
  len = length;
  best = "";
  dfs(0, 0, 0);
  return best;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/