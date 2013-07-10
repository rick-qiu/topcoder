/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2332
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

class PresentationComp {
public:
    string simplify(string expression);
};

string PresentationComp::simplify(string expression) {
    string ret;
    return ret;
}


int test0() {
    string expression = "xyxyxyxyxyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxyx";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string expression = "xxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxx";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string expression = "yyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yyyy";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string expression = "xyxyxyxyxyxyxyxyxxyyxyxyxyxxyyxyxyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyx";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string expression = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "y";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string expression = "xxxy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxy";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string expression = "xxxxxxxxyyyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
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
    string expression = "xy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xy";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string expression = "yyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyy";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string expression = "yyyyyyyyyyyyyyyyyyyyyyyyyyyxxxxxxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyyy";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string expression = "yyyyyyxxxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxx";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string expression = "yyyyyxxxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxxy";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string expression = "xxxxxxxyyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxyx";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string expression = "yyyyyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyx";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string expression = "yyyyyxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xx";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string expression = "yyyyyxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string expression = "xxxyyxxyxyxxxyyyyxxxxxxxxyyxxxyyxxxxyyxxyxxy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxyyx";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string expression = "yyyyyxyxyyxxyyyxyyyyxyyyyxxyyyxxyyxxyyyyyxxyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxxyyy";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string expression = "yxyyyxyyyxxxxxyyxyxxyxxyxxyyxyxyyxxxyxyxxyxxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxx";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string expression = "yyxyyyxyyxyxyxyyxyxyxxxxyxyyxyxxyyxyyxyyyyxxxyyyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxyyx";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string expression = "yxyxyyxyyxxxyyyyyyxxyyyyyyyyxxyxxxxyyxyyxxyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxy";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string expression = "yxxyxxyyyxxxyyxxxyxxxxyyxxyyxyyyyxxyyyyxxxyxxxxyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyyx";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string expression = "yyxxxyyxxxyxxxyyyxyyyyxyxxxyxyxyyyxxyxyyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxyyy";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string expression = "yyxxxyxyxxyyyxxyxyyyxxxxxyyxyxxxxyxyxyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxyy";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string expression = "xxyyyxyyxxxxyyyyxyxyyxyxxxyyyxxxyyyxxxyyxyyxxyxyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxyx";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string expression = "yxxxxyxyyxxyxxyyxyxxxyyxxxxyxyyxxxxyyxyxxy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyyy";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string expression = "xyyxxxxyxyxyxxxxyyxxyyyyxxxxxyxxyyxxxxyyyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyyy";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string expression = "xyxxxyxxyxyyyyyxyyyxyyyyxyyyyxxyxyyyxxyyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yx";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string expression = "xxyyyyyxyyyxxxxyyyyxxxyxyyxyxxyyxxyyyyxyxxxy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxyyx";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string expression = "xxyyyyyxyxyxxyxyxxyxyxxxyyyxyyyyyyxyyxxyyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxyy";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string expression = "yxyyxxxyyxyxyxxxxxxxxyyxyyxyyyyxxyxyxyyxyxyxyxxyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyx";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string expression = "yxyyyxxyxyyyxxxyyyyyxyyxxxxxxyxxyyxxyxxxyyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxxy";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string expression = "xyxyxxxyxyxyxyyxyyxyyxyyyxyyxyxxyxyyxxyxxyyyxxyxy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxxyy";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string expression = "xxyxxyxxxxxxxxxxyyyyyyyxxyxyxyyxyyxyyyxxyxxyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyyy";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string expression = "yyyxyxxxyxxxyxyxyxyyyxxxyxyxxyxyxyxyxyxxyxyyyxyxy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyy";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string expression = "yxxyyxyxyyxxxxxxyyyxxxxyyxyxyyxyxxxxxyyyyyyyxxyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string expression = "xxxyxxxyxxxxyyyxyyyyyyyxxxyxyxyyyyxyxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxy";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string expression = "yyxyyxxxxyxyxyyyyyyxxyxxyxxyyxxxxxxyyyxyyxyyxyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string expression = "xxxxxyyxxyyxyyyyyxxxxxxxxyxxxyyyxyyyxyyyxxxxxxyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxyyy";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string expression = "xyxyxyyyyxxxyxyyyxxxyyxxyyxxyxxxxxyyxxyxxxyxyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxy";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string expression = "yyxyxyyyxyyyyyyxxyyxyyxxxxxyyyxyyyyxxyxyyxyyxyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyx";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string expression = "xyxyyxxxxyxxyxyxyxxyxyxyxxxyxxxyxxxyyyxyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yyx";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string expression = "xyxxxxyxxxyxyxxyxyxyxyxyxxxxxyyxxyxxxyxyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxy";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string expression = "yyyyyyxyyxxxxxxxyyxxxxxxyyyxxyxxyyyxyyxyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxyx";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string expression = "yxxxxxxyyyyyxxyxxyyyyyxxyyxyxyxxxyxxyyyyxyyxyxyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yyyyy";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string expression = "xyxxyyyxyxxxyyxxyxxxyyxxxyyxxyxyxxyyxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yyx";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string expression = "yxxyyxyxxyyyxxxxyyxyxxxyyyxyxxyxxxxyyyxyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxyyy";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string expression = "yxxyyyxxyxxyxxyyyxxxxxyyxyyyxxxyxxyxyxxxxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxyyy";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string expression = "xxxxxxyxxxyxxxyyxyxyyyxxyxxxyxxyxyyxyyxyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyy";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string expression = "xyyxxyxxxxxyyyxxxxxxxxxxxyxxyxxxxyyxyyxyyxyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxyx";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string expression = "yyxxxxyyyyyyxxxyyxyxyyyxyyxxyxyxyyxyyxyxxxyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxyy";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string expression = "yyyyxyyyxyyxyyxyxxyyyyxyyyxxyxxyxyyyyyxxxxxyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyyy";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string expression = "xyxxxxyxxxxyyxyxxyyxyxxxxyxyxyyxyyxyxyyxxy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string expression = "xyxyyxxyxxyxyxyxyxxyxxyyxyyxyxyyyyyxyxxyyxyyyyxyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxyy";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string expression = "yyxxxyxxxyyxxyyyyxxxyyyyxyxyxyxyyxyyxxxy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxyyy";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string expression = "yxxxyyxyyyyxyxxyyxyyxyyyxyxxxxyxyyxxxxyyxyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxy";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string expression = "yyyxyxxxyxyxxyxxyyyxyyyxyyyyxyxxyxyxyyyyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyy";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string expression = "yyyyyyyyyyyxyyyyyyyyyyxxyyxxxyyyxyxxxxyxxyyxxyxyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyyx";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string expression = "yxxxyyyxxyxyyyyxyxxyyyyxxxyxyyyxxyxyyyyxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxyyy";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string expression = "yxyxyyyyxxxxxxxxyxyyxyxyxyyyxyxyxxxyxyxxxxxxyyxxyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxyyx";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string expression = "yyyxyxxxxxxxxyyxyyxyxyyxxxxyxyxyyxyxxxyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxxy";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string expression = "yyyyyxyxxyyxyxyyxxxyxyyxyxxxyyyyyyyxyxxxyxyxyyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxyyx";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string expression = "yyyxxxxyyyyxxxyyyxyxxxyxyxyxyxyyxyxyxyxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxxyy";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string expression = "yyyyxxyyxxxxxxyxxxxyxxxyyxxyxyxyyxxyxxxxyyyxyxxyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxyyx";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string expression = "yxxyyyxyxxxyxyyyxyxyxyyxyyxyxxxxyxyyyyyxyyxyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxy";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string expression = "xyyxyxxyxxxxyxyyxyxyyxyxxyyyxxyyyxyyxxxxyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxyyx";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string expression = "x";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "x";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string expression = "xx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xx";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string expression = "xxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxx";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string expression = "xxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxx";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string expression = "xxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxx";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string expression = "xxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxx";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string expression = "xxxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxx";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string expression = "y";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "y";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string expression = "yx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yx";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string expression = "yxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxy";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string expression = "yxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyx";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string expression = "yxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxy";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string expression = "yxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxyx";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string expression = "yxxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxy";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string expression = "yxxxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxyx";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string expression = "yy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yy";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string expression = "yyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yyx";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string expression = "yyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyy";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string expression = "yyxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyyx";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string expression = "yyxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxyy";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string expression = "yyxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxyyx";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string expression = "yyxxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxyy";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string expression = "yyxxxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxyyx";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string expression = "yyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yyy";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string expression = "yyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyyy";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string expression = "yyyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyyy";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string expression = "yyyxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxyyy";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string expression = "yyyxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxyyy";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string expression = "yyyxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxyyy";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string expression = "yyyxxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxyyy";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string expression = "yyyxxxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxxyyy";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string expression = "yyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yyyy";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string expression = "yyyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyy";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string expression = "yyyyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyyx";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string expression = "yyyyxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxyy";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string expression = "yyyyxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxyyx";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string expression = "yyyyxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxyy";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string expression = "yyyyxxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxyyx";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string expression = "yyyyxxxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxxyy";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string expression = "yyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yyyyy";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string expression = "yyyyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xy";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string expression = "yyyyyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyx";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string expression = "yyyyyxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxy";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string expression = "yyyyyxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxyx";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string expression = "yyyyyxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxy";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string expression = "yyyyyxxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxyx";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string expression = "yyyyyxxxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxxy";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string expression = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xy";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string expression = "xxxxxyyyyyxxxxxyyyyyxxxxxyyyyyxxxxxyyyyyxxxxxyyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yx";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string expression = "yyyyyxxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxyx";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string expression = "yyyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyy";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string expression = "xyyyyyxy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyy";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string expression = "yyyyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xy";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string expression = "yyyyyyyyyyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xy";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string expression = "yx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yx";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string expression = "yxxxxyxxxxyyxxxxyxxxyyxxxyxyxxxyxxxxyxxxxxyxxxyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxyx";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string expression = "yxyxyxyxyxyxyxyxyxyxyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyx";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string expression = "xxyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyyx";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string expression = "xxxxxxyyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxyx";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string expression = "yyxxyyxxyyxxyyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yy";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string expression = "yxyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xy";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string expression = "xxxyyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyx";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string expression = "xxxxxxxyyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxyx";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string expression = "xxxxxyyyyyxxxxxyyyyyxxxxxyyyyyxxxxxyyyyyxxxxxyyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yx";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string expression = "yyyyyxxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxyx";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string expression = "yyyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyy";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string expression = "xyyyyyxy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyy";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string expression = "yyyyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xy";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string expression = "yyyyyyyyyyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xy";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string expression = "yx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yx";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string expression = "yxxxxyxxxxyyxxxxyxxxyyxxxyxyxxxyxxxxyxxxxxyxxxyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxyx";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string expression = "yxyxyxyxyxyxyxyxyxyxyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyx";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string expression = "xxyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyyx";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string expression = "xxxxxxyyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxyx";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string expression = "yyxxyyxxyyxxyyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yy";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string expression = "yxyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xy";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string expression = "xxxyyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyx";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string expression = "xxxxxxxyyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxyx";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string expression = "xxxxxyyyyyxxxxxyyyyyxxxxxyyyyyxxxxxyyyyyxxxxxyyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yx";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string expression = "yyyyyxxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxyx";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    string expression = "yyyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyy";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    string expression = "xyyyyyxy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyy";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    string expression = "yyyyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xy";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    string expression = "yyyyyyyyyyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xy";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    string expression = "yx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yx";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    string expression = "yxxxxyxxxxyyxxxxyxxxyyxxxyxyxxxyxxxxyxxxxxyxxxyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxyx";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    string expression = "yxyxyxyxyxyxyxyxyxyxyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyx";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    string expression = "xxyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyyx";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    string expression = "xxxxxxyyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxyx";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    string expression = "yyxxyyxxyyxxyyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yy";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    string expression = "yxyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xy";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    string expression = "xxxyyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyx";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    string expression = "xxxxxxxyyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxyx";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    string expression = "xxxxxyyyyyxxxxxyyyyyxxxxxyyyyyxxxxxyyyyyxxxxxyyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yx";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    string expression = "yyyyyxxxxxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxyx";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    string expression = "yyyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyy";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    string expression = "xyyyyyxy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyy";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    string expression = "yyyyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xy";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    string expression = "yyyyyyyyyyyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xy";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    string expression = "yx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yx";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    string expression = "yxxxxyxxxxyyxxxxyxxxyyxxxyxyxxxyxxxxyxxxxxyxxxyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxyx";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    string expression = "yxyxyxyxyxyxyxyxyxyxyx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyx";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    string expression = "xxyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xyyx";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    string expression = "xxxxxxyyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxyx";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    string expression = "yyxxyyxxyyxxyyxx";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "yy";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    string expression = "yxyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xy";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    string expression = "xxxyyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxyx";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    string expression = "xxxxxxxyyyyy";
    PresentationComp* pObj = new PresentationComp();
    clock_t start = clock();
    string result = pObj->simplify(expression);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxyx";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=5867&pm=2332
********************************************************************************
// Warning: less successful challenges against me than against tomek. 
// I'm now automatically removing unused stuff. 
 
#include <algorithm> 
#include <string> 
#include <math.h> 
using namespace std; 
 
#define LS < 
#define Size(x) (int(x.size())) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
// 6y x8 xy -> y5x 
 
#line 3 "PresentationComp.cc" 
 
string answers[3][6] = { 
  {"", "y", "yy", "yyy", "yyyy", "yyyyy"}, 
  {"x", "yx", "yyx", "xyyy", "xyy", "xy"}, 
  {"xx", "xxy", "xxyy", "xxyyy", "xyyx", "xyx"} 
  }; 
 
class PresentationComp { 
  public: 
  string simplify(string exp) { 
    // !FDI 
    int ymul = 1; 
    int xcount = 0; 
    int ycount = 0; 
    FOR(k, 0, Size(exp)) { 
      if(exp[k] == 'x') {xcount++; ymul *= -1;} 
      else ycount += ymul; 
      } 
    xcount %= 8; 
    ycount %= 6; 
    ycount += 6; 
    ycount %= 6; 
    string res; 
    while(xcount > 2) {xcount -= 2; res += "xx";} 
    return res + answers[xcount][ycount]; 
     
    return res; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/