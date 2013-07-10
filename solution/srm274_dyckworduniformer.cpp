/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5887
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

class DyckwordUniformer {
public:
    string uniform(string dyckword);
};

string DyckwordUniformer::uniform(string dyckword) {
    string ret;
    return ret;
}


int test0() {
    string dyckword = "XXYXXYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXYYXYY";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string dyckword = "XYXYXXXYYYXXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXYYYXXYYXYXY";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string dyckword = "XXXYYYXXYXXXYYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXYYYXYYXXXYYY";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string dyckword = "XXYYYX";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
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
    string dyckword = "XXXXXXXXXXXXXXXXXXXXXXXXXYYYYYYYYYYYYYYYYYYYYYYYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXXXXXXXXXXXXXXXXXXXXXXYYYYYYYYYYYYYYYYYYYYYYYYY";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string dyckword = "XYXXXXXXXXXXXXXXXXXXXXXXXXYYYYYYYYYYYYYYYYYYYYYYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXXXXXXXXXXXXXXXXXXXXXYYYYYYYYYYYYYYYYYYYYYYYYXY";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string dyckword = "XYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXY";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string dyckword = "XXYXXYYXYXXYYXYXXYYXYXXYYXYXXYYXYXXYYXYXXYYXYXXYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXYYXXYYXXYYXXYYXXYYXXYYXXYYXXYYXYXYXYXYXYXYXYXYY";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string dyckword = "XXYXXYYYXXYXXYYYXXYXXYYYXXYXXYYYXXYXXYYYXXYXXYYYXY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXYYXYYXXXYYXYYXXXYYXYYXXXYYXYYXXXYYXYYXXXYYXYYXY";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string dyckword = "XXYXXYYYXXXYYXXXYYYYXXXXYYYXXXXYYYYYXXYXXXXXYYYYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXXXYYYYYXYYXXXXXYYYYXXXYYYYXXXXYYYXXYYYXXXYYXYY";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string dyckword = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
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
    string dyckword = "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
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
    string dyckword = "YX";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
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
    string dyckword = "YYYYYYYYYYYYYYYYYYYYYYYYYXXXXXXXXXXXXXXXXXXXXXXXXX";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
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
    string dyckword = "XXXXXXXXXXXXXXXXXXXXXXXXXYYYYYYYYYYYYYYYYYYYYYYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string dyckword = "XXXXXXXXXXXXXXXXXXXXXXXXYYYYYYYYYYYYYYYYYYYYYYYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
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
    string dyckword = "XXXXXXXXXXXXXXXXXXXXXXXXYYYYYYYYYYYYYYYYYYYYYYYYYX";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string dyckword = "XXYXYYXXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXYXYYXXYY";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string dyckword = "XYXXYYXYXXYXYYXYXXYYXXXYXYYYXXXYXYYXYXYYXXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXYXYYXYXYYXXXYXYYYXXYXYYXXYYXXYYXXYYXYXYXY";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string dyckword = "XXYXXYYXYXXYYXXYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXYYXXYYXXYYXYXYY";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string dyckword = "XXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXYY";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string dyckword = "XY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XY";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string dyckword = "XYXXXYYYXXYXYXXXYXYYYXXYXYXYYXXYYXYXYXXYXYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXYXYYYXXYXYXYYXXYXYYXXYYXYXYXYXYYXXXYYYXY";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string dyckword = "XXYXXYYYXXYXYYXYXYXYXXYYXXXYXYXYXYXYYXXYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXYXYXYXYXYYXXYYYXXXYYXYYXXYXYYXXYYXYXYXY";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string dyckword = "XYXYXYXXYYXYXYXYXYXXYYXYXYXYXXYYXYXYXXYXYYXYXY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXYXYYXXYYXXYYXXYYXYXYXYXYXYXYXYXYXYXYXYXYXYXY";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string dyckword = "XYXXYXYYXXYXXYYYXYXXYXYYXXYYXYXY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXYYXYYXXYXYYXXYXYYXXYYXYXYXYXY";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string dyckword = "XXXXXYXYYXYXXYXYXYYYYXYXYXYXXXYYYXYXYXYXXYYXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXXYXYXYYXXYXYYXYYYXXXYYYXXYYXYXYXYXYXYXYXYY";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string dyckword = "XYXYXXYYXXXYXYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXYXYYYXXYYXYXY";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string dyckword = "XXYYXYXXYXYYXYXYXXYYXXYXXYYXYXXYYYXXYYXYXXYXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXYYXXYYXYXYYXXYXYYXXYXYYXXYYXXYYXXYYXYXYXYXY";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string dyckword = "XYXXYYXYXY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXYYXYXYXY";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string dyckword = "XXXXXXYYYXYXXYYXYXYYXXYXYXYXYYXYYYXXYXXYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXXXYYYXXYYXYXYXYYXXYXYXYXYYXYYYXXXYYXYY";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string dyckword = "XYXXYXYXYXXYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXYYXYXYXYYXY";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string dyckword = "XXXYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXYYY";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string dyckword = "XYXYXYXYXYXYXYXXYXYXXYXYYXYXXYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXYXYYXXYYXYXYXYYXYXYXYXYXYXYXY";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string dyckword = "XXYYXXYYXYXXXXXXXYYYYYYXYXYXYXXYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXXXXYYYYYYXXYYXYXYXYYXXYYXXYYXY";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string dyckword = "XXYYXYXXYXYXYYXYXXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXYXYXYYXXYYXXYYXYXY";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string dyckword = "XXXYXYXYXYXYYXXYYXXYXYXYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXYXYXYXYXYYXXYXYXYYXXYYY";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string dyckword = "XXYXYXYXXYXYXYYXYYXXXYYYXXYYXYXY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXYXYXYYXYXYXYXYYXXXYYYXXYYXYXY";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string dyckword = "XXXXXYYXXYXYXYXYYXYXXYXXYYXYYXYYXYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXXXYYXYXYYXXYXYXYXYYXXYYXYXYYXYYY";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string dyckword = "XYXYXYXXXYXYYXXYXXYYYYXYXXYXYXYYXYXY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXYYXYYXXYXYYYXXYXYXYYXYXYXYXYXYXY";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string dyckword = "XXXXYYYXXYYXYXXYXYYXXYXYXYYXYXXYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXYYYXXYXYXYYXXYXYYXXYYXXYYXYXYY";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string dyckword = "XYXYXXXYXYYXYYXXYYXYXYXXXYYYXXYXYXYXYXXXYXYYYXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXYXYYYXYXYXYXYXYYXXXYXYYXYYXXXYYYXXYYXYXYXYXY";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string dyckword = "XXXXYYYYXXYYXXYXYYXYXYXXYYXYXYXXXXXYYYYXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXXYYYYXYYXXXXYYYYXXYXYYXXYYXXYYXYXYXYXY";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string dyckword = "XYXXYYXYXXYYXXYYXYXYXXYXYXYXYXYXXYXXXYYYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXXYYYXYYXYXYXYXYXYYXXYYXXYYXXYYXYXYXYXY";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string dyckword = "XXYYXXYYXXYYXXXXYXYXYYYXYXYXYYXYXYXXYYXXYXXYYXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXYXYXYYYXYXYXYYXXXYYXYXYYXXYYXXYYXXYYXXYYXYXY";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string dyckword = "XYXXYXXXYYYXYXYYXYXXYYXXXXYYYXXYYXYXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXYYYXXYYXYXYYXXXXYYYXYXYXYYXXYYXYXY";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string dyckword = "XYXYXYXXXYYYXYXXXYYXYXYXYXXYXYXYYXXXXYXYYYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXXYXYYYYXXYXYXYYXXYYXYXYXYYXXXYYYXYXYXYXY";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string dyckword = "XYXYXXXYYXXYXYXYXYYXYXYYXYXYXYXY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXYXYXYXYYXXYYXYXYYXYXYXYXYXYXY";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string dyckword = "XXXXYYYXYYXXYYXXXYXXXXYXYYYYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXXXYXYYYYXYYYXXXXYYYXYYXXYY";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string dyckword = "XYXYXYXYXXXYXYXXYYXYXYXXYXYYXYXYYXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXYXYYXXYYXYXYXYXYXYXYYXYYXYXYXYXY";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string dyckword = "XYXYXXYXYXXXXYYXYYXYXYXYXYXYXYYXXYYXYXYXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXXYYXYYXYXYXYXYXYXYYXXYYXYXYXYXYXYYXYXY";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string dyckword = "XYXXYXYXYXYXYXYXXYYXYXYXYXXYYXXXYYYYXXYXYXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXYYYXXYYXXYYXYXYXYXYXYXYXYXYXYYXXYXYXYYXY";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string dyckword = "XXYXXYXYYXYXYYXXYXYXYXYYXYXXXYYYXXYXYXXYXYXYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXYXYXYYXYXYYXXXYXYYXYXYXYYXXXYYYXXYXYXYXYYXY";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string dyckword = "XXYXXYXYYXYXYXXXYXYXXYYYXYXYXXYYXXYXYXXYYYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXXYYXYXYYXXXYYXYXYYXXYYXYXYYXXYXYYXYXYXYY";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string dyckword = "XXYXYXXXYYXYXYYXYXYXXYYXYXXYYXXYYXYXYXYYXXXYYXXYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXYYXYXYYXXYYXXYYXXYYXYXYXYXYXYXYXYXYYXXXYYXXYYY";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string dyckword = "XXYYXYXXXYYXXYXXYXYYXXXYYXXYYYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXXYYXXYYYXXYXYYXYYXXYYYXXYYXY";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string dyckword = "XYXXYYXYXYXXXXYYYXYXYXXYYXYXYXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXYYYXXYYXYXYXYXYXYYXXYYXYXYXY";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string dyckword = "XXYXXYYYXXXXYYYXXXXYYYYYXXXYYXXXYYYYXXYXXXXXYYYYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXXXYYYYYXYYXXXXXYYYYXXXYYYYXXXXYYYXXYYYXXXYYXYY";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string dyckword = "XY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XY";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string dyckword = "XXY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string dyckword = "XYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string dyckword = "XYXY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XYXY";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string dyckword = "XXXYYYXYXXXXXYYYXXXYXYXXXYYXXYXXXYXYXYXYYYYYYXXYXY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
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
    string dyckword = "XXXXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
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
    string dyckword = "XYXXXY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
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
    string dyckword = "XXXXYYYXYYXXXYYYXXXXYYYXYYXXXYYYXXXXYYYXYYXXXYYYXY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXYYYXYYXXXXYYYXYYXXXXYYYXYYXXXYYYXXXYYYXXXYYYXY";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string dyckword = "XXYYXXYYXXXXYYYYXYXYXYXYXYXYXYXYXYXYXYXYXYXYXXYXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXYYYYXXYXYYXXYYXXYYXYXYXYXYXYXYXYXYXYXYXYXYXYXY";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string dyckword = "XXXY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
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
    string dyckword = "XXYXXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
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
    string dyckword = "XXXXYYYXXYXYXYYXXXYYYXXYXXYYYXXYXXYYYYXXYXYXXXYYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXYYXYYXXXYYXYYXXXYYYXXXYYYXXYXYXYYYXXXXYYYXYXYY";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string dyckword = "XXXYYYXXYXXXYYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXYYYXYYXXXYYY";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string dyckword = "XXXXXXXX";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
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
    string dyckword = "XYXXYYXXXYYYXXYYXXXYYYXXYYXYXYXXYYXXXXYYYYXYXYXXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXYYYYXXXYYYXXXYYYXXYYXXYYXXYYXXYYXXYYXYXYXYXYXY";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string dyckword = "XYXXY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string dyckword = "XX";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
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
    string dyckword = "XXXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string dyckword = "YYXX";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
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
    string dyckword = "XYXXYYXYXXYYXYXXYYXYXXYYXYXXYYXYXXYYXYXXYYXYXXYYXY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXYYXXYYXXYYXXYYXXYYXXYYXXYYXXYYXYXYXYXYXYXYXYXYXY";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string dyckword = "XXXXYYYYXXYYXYXXYXYYXXXXYYYYXXYYXYXXYXYYXXXXYYYYXY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXYYYYXXXXYYYYXXXXYYYYXXYXYYXXYXYYXXYYXXYYXYXYXY";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string dyckword = "XXYX";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
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
    string dyckword = "XYXYXYXYXYXXXXXYYYYYXXXXYYYYXXXYYYXXYYXXYXYYXXYXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXXYYYYYXXXXYYYYXXXYYYXXYXYYXXYXYYXXYYXYXYXYXYXY";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string dyckword = "XXXYX";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
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
    string dyckword = "XXXYYYXXYXXXYYYYXYXYXXXYYYXXYYXYXYXXXYYYXXYYXXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXYYYXYYXXXYYYXXXYYYXXXYYYXXYYXXYYXXYYXYXYXYXY";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string dyckword = "XXXXYYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXYYYY";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string dyckword = "XYXXYYXXYXXYYYXYXYXYXYXYXYXYXYXYXYXXYYXXYYXXXYYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXYYXYYXXXYYYXXYYXXYYXXYYXYXYXYXYXYXYXYXYXYXYXY";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string dyckword = "XYXXYYXXXYYYXXXXYYYYXXXXXYYYYYXXYXYYXXXYYXYYXXYXYY";
    DyckwordUniformer* pObj = new DyckwordUniformer();
    clock_t start = clock();
    string result = pObj->uniform(dyckword);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXXYYYYYXXXXYYYYXXXYYXYYXXXYYYXXYXYYXXYXYYXXYYXY";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10481120&rd=8071&pm=5887
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
 
using namespace std; 
 
#ifdef __GNUC__ 
#define int64 long long 
#else /* MSVC, say */ 
#define int64 __int64 
#endif 
 
class DyckwordUniformer { 
public: 
    string uniform(string w) { 
        int sum = 0; 
    vector<string> s; 
    int i; 
    string cur = ""; 
    for (i=0; i < w.size(); i++) { 
      if (w[i] == 'X') sum++; 
      if (w[i] == 'Y') sum--; 
      cur += w[i]; 
      if (sum < 0) return ""; 
      if (sum == 0) { 
        s.push_back(cur); 
        cur = ""; 
      } 
    } 
    if (sum != 0) return ""; 
    string res; 
    if (s.size() != 1) { 
      for (i=0; i < s.size(); i++) 
        s[i] = uniform(s[i]); 
      sort(s.begin(), s.end()); 
      res = ""; 
      for (i=0; i < s.size(); i++) 
        res += s[i]; 
    } else { 
      string tmp = ""; 
      for (i=1; i+1 < w.size(); i++) 
        tmp += w[i]; 
      res = 'X' + uniform(tmp) + 'Y'; 
    } 
        return res; 
    } 
 
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/