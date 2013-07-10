/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1764
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

class QuiningTopCoder {
public:
    string testCode(string source);
};

string QuiningTopCoder::testCode(string source) {
    string ret;
    return ret;
}


int test0() {
    string source = ";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "QUINES 0";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string source = "_";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "TIMEOUT";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string source = "1:+:1J";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "OVERFLOW 147";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string source = "0;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "QUINES 91";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string source = "0;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "BADEND 437";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string source = "#R;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "QUINES 97";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string source = ";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "QUINES 12";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string source = "0;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "QUINES 309";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string source = "R;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "MISMATCH 7";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string source = ";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "QUINES 12";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string source = "#-:;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "QUINES 27";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string source = "W+#3:;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "QUINES 40";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string source = "S6S+:43-W;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "QUINES 459";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string source = "W:8W++";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "OVERFLOW 317";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string source = "$:R+4";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "OVERFLOW 278";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string source = "--R+9:";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "OVERFLOW 345";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string source = "+2:-+R";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "OVERFLOW 348";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string source = "+:+7R_";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "OVERFLOW 353";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string source = "#:1163280$0S_SR_80#3;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "MISMATCH 107";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string source = "99WW+R1;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "MISMATCH 62";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string source = "77W_;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "MISMATCH 59";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string source = "091_1W-:S0-:+:+:+:+5W-1W_##########_$:;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "QUINES 8940";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string source = "099+:+:+1_1W-:S0-:+:+:+:+5W-1W_##########_$:;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "QUINES 78396";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string source = "55+:+5+::+:++::+:++;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "MISMATCH 59";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string source = "5:::+++:+:+:+:+:+:+:+:+:+:+:+:+:+:+:++1000000_";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "OVERFLOW 79337";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string source = ";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "QUINES 2";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string source = "221;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "MISMATCH 11";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string source = ";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "QUINES 31";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string source = "W687++_;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "MISMATCH 25";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string source = ";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "QUINES 2";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string source = "#;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "MISMATCH 26";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string source = "0;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "BADEND 437";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string source = "1:+:1J";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "OVERFLOW 147";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string source = "40WJ@";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "BADEND 4";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string source = ":";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "TIMEOUT";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string source = "21-:+:3J";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "OVERFLOW 149";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string source = "1W;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "MISMATCH 9";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string source = ";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "BADEND 1";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string source = "111112-;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "MISMATCH 67";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string source = ";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "MISMATCH 2";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string source = "72-J;
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "BADEND 4";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string source = "21-:+::+:++3J";
    QuiningTopCoder* pObj = new QuiningTopCoder();
    clock_t start = clock();
    string result = pObj->testCode(source);
    clock_t end = clock();
    delete pObj;
    string expected = "OVERFLOW 94";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=288584&rd=4565&pm=1764
********************************************************************************
/****************************  http://www.thisisjeff.com/  ****************************/
 
#include <algorithm>
#include <cmath>
#include <deque>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <stdarg.h>
#include <string>
#include <vector>
using namespace std;
 
#define Forc(i, c) for(typeof(c.begin()) i(c.begin()); i != c.end(); ++i)
#define In(c, x) (c.find(x) != c.end())
#define Inv(v, x) (find(v, x) >= 0)
#define X first
#define Y second
#define Pair(x, y) make_pair(x, y)
#define SetPair(a, x, y) pair<typeof(x), typeof(y)> a(x, y)
#define mkvecint makeVec<int, int>
#define mkvecstring makeVec<string, char *>
typedef pair<int, int> point;
 
int strToInt(string); string intToStr(int);
vector<string> tokenize(string, string = " ", bool = false);
vector<int> tokenizeInt(string, string = " ", bool = false);
template <class A, class B> int find(const vector<A>&, B);
template <class T> T nth(const set<T>&, int);
template <class T> ostream &operator <<(ostream&, const vector<T>&);
template <class A, class B> ostream &operator <<(ostream&, const pair<A, B>&);
template <class A, class B> vector<A> makeVec(int, ...);
void validateExample(string, string, string, string);
 
/**************************************************************************************/
/*************************** Here is where my code begins. ****************************/
/**************************************************************************************/
 
string MyCode(string source) {
  bool noInc(false);
  int N(source.length()), IP(0), D(1), oldD(1), answer(0);
  vector<int> st;
  string output;
  while (true) {
    D = oldD;
    noInc = false;
    char c(source[IP]);
    if (c >= '0' && c <= '9')
      st.push_back(c - '0');
    if (c == '$' && st.size() > 0)
      st.pop_back();
    if (c == ':') {
      int x(0);
      if (st.size() > 0) {
        x = st[st.size() - 1];
        st.pop_back();
      }
      st.push_back(x);
      st.push_back(x);
    }
    if (c == 'W') {
      int x(0), y(0);
      if (st.size() > 0) {
        x = st[st.size() - 1];
        st.pop_back();
      }
      if (st.size() > 0) {
        y = st[st.size() - 1];
        st.pop_back();
      }
      st.push_back(x);
      st.push_back(y);
    }
    if (c == ',') {
      int x(0);
      if (st.size() > 0) {
        x = st[st.size() - 1];
        st.pop_back();
      }
      output += source[abs(x) % N];
    }
    if (c == '+') {
      int x(0), y(0);
      if (st.size() > 0) {
        x = st[st.size() - 1];
        st.pop_back();
      }
      if (st.size() > 0) {
        y = st[st.size() - 1];
        st.pop_back();
      }
      long long z(0);
      z += x;
      z += y;
      if (z < -1000000000 || z > 1000000000)
        return string("OVERFLOW ") + intToStr(answer);
      st.push_back(z);
    }
    if (c == '-') {
      int x(0), y(0);
      if (st.size() > 0) {
        x = st[st.size() - 1];
        st.pop_back();
      }
      if (st.size() > 0) {
        y = st[st.size() - 1];
        st.pop_back();
      }
      long long z(0);
      z += x;
      z -= y;
      if (z < -1000000000 || z > 1000000000)
        return string("OVERFLOW ") + intToStr(answer);
      st.push_back(z);
    }
    if (c == '#')
      D *= 2;
    if (c == 'R') {
      D *= -1;
      oldD = D;
    }
    if (c == 'S') {
      int x(0);
      if (st.size() > 0) {
        x = st[st.size() - 1];
        st.pop_back();
      }
      if (x > 0)
        st.push_back(1);
      else
        st.push_back(-1);
    }
    if (c == '_') {
      int x(0);
      if (st.size() > 0) {
        x = st[st.size() - 1];
        st.pop_back();
      }
      D = x % N;
      oldD = D;
    }
    if (c == 'J') {
      int x(0);
      if (st.size() > 0) {
        x = st[st.size() - 1];
        st.pop_back();
      }
      IP = abs(x) % N;
      noInc = true;
    }
    if (c == '@')
      return string("BADEND ") + intToStr(answer);
    if (source.substr(0, output.length()) != output)
      return string("MISMATCH ") + intToStr(answer);
    if (source == output)
      return string("QUINES ") + intToStr(answer);
    if (!noInc)
      IP = (3 * N + IP + D) % N;
    ++answer;
    if (answer == 80000) return "TIMEOUT";
  }
}
 
/**************************************************************************************/
/**************** And here is where my code ends.  Thanks for looking! ****************/
/**************************************************************************************/
 
struct QuiningTopCoder {
  string testCode(string source) {
    validateExample("1", MyCode(","), "QUINES 0", "testCode(\",\")");
    validateExample("2", MyCode("_"), "TIMEOUT", "testCode(\"_\")");
    validateExample("3", MyCode("1:+:1J"), "OVERFLOW 147", "testCode(\"1:+:1J\")");
    validateExample("4", MyCode("0,1+:#@:$1J"), "QUINES 91", "testCode(\"0,1+:#@:$1J\")");
    validateExample("5", MyCode("0,1+::9W-9W-S1W1W:+2_J_@_@"), "BADEND 437", "testCode(\"0,1+::9W-9W-S1W1W:+2_J_@_@\")");
    validateExample("6", MyCode("#R,#:+1+:#,R#"), "QUINES 97", "testCode(\"#R,#:+1+:#,R#\")");
    validateExample("7", MyCode("R,#1+1:"), "MISMATCH 7", "testCode(\"R,#1+1:\")");
    return MyCode(source);
  }
};
 
int strToInt(string str) {
  stringstream ss(str);
  int answer;
  ss >> answer;
  return answer;
}
 
string intToStr(int x) {
  stringstream s;
  s << x;
  return s.str();
}
 
vector<string> tokenize(string str, string delim, bool returnDelims) {
  vector<string> answer;
  string temp;
  for (int i(0); i < str.length(); ++i) {
    bool isDelim(false);
    for (int j(0); j < delim.length(); ++j)
      if (str[i] == delim[j]) isDelim = true;
    if (!isDelim) {
      temp += str[i];
      continue;
    }
    if (temp != "") answer.push_back(temp);
    temp = "";
    if (returnDelims) answer.push_back(string(1, str[i]));
  }
  if (temp != "") answer.push_back(temp);
  return answer;
}
 
vector<int> tokenizeInt(string str, string delim, bool returnDelims) {
  vector<string> tokens(tokenize(str, delim, returnDelims));
  vector<int> answer(tokens.size());
  for (int i(0); i < tokens.size(); ++i)
    answer[i] = strToInt(tokens[i]);
  return answer;
}
 
template <class A, class B> int find(const vector<A> &vec, B item) {
  for (int i(0); i < vec.size(); ++i)
    if (vec[i] == item) return i;
  return -1;
}
 
template <class T> T nth(const set<T> &s, int x) {
  typename set<T>::iterator answer(s.begin());
  for (int i(0); i < x; ++i) ++answer;
  return *answer;
}
 
template <class T> ostream &operator <<(ostream &os, const vector<T> &vec) {
  if (vec.empty()) return os;
  for (int i(0); i < vec.size() - 1; ++i) os << vec[i] << ',';
  return os << vec[vec.size() - 1];
}
 
template <class A, class B> ostream &operator <<(ostream &os, const pair<A, B> &p) {
  return os << '(' << p.X << ',' << p.Y << ')';
}
 
template <class A, class B> vector<A> makeVec(int n, ...) {
  vector<A> answer(n);
  va_list vl;
  va_start(vl, n);
  for (int i(0); i < n; ++i) answer[i] = va_arg(vl, B);
  va_end(vl);
  return answer;
}
 
void validateExample(string exampleNo, string returned, string expected, string args) {
  cout << "Example " << exampleNo << ": ";
  if (returned == expected)
    cout << "Success!" << endl;
  else {
    cout << "FAILURE..." << endl;
    cout << "   Expected: " << expected << endl;
    cout << "   Returned: " << returned << endl;
    cout << "   " << args << endl;
  }
}
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/