/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11889
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

class AkariDaisukiDiv2 {
public:
    int countTuples(string S);
};

int AkariDaisukiDiv2::countTuples(string S) {
    int ret;
    return ret;
}


int test0() {
    string S = "topcoderdivtwo";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string S = "foxciel";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string S = "magicalgirl";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string S = "waaiusushioakariusushiodaisuki";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string S = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 8924;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string S = "u";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string S = "yw";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string S = "nzr";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string S = "fsxv";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string S = "uwqhu";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string S = "tltmcx";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string S = "bzldnxo";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string S = "ooqrmpet";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string S = "fwbxebdgm";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string S = "fwdgsydlvu";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string S = "evltriolgyh";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string S = "nlpioqqhkspm";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string S = "bazxynexxvoye";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string S = "fatetestarossa";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string S = "iofykguzyfsnaq";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string S = "takamachinanoha";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string S = "mvolskdbxkdvmlw";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string S = "otxsuyptitvmqykg";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string S = "okegqzziwigjotjlf";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string S = "kmcximgxuhnmcazmqu";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string S = "wjkxocolguqujfseyrw";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string S = "nuweayqeastbwympybmz";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string S = "ltklaenkrmuzepywydcaa";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string S = "rtvfzawkbvvukzwjmqtooj";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string S = "hkkceevwvjbrrvdtwyfgfot";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string S = "jrqtatlpnaehwkqaikvkvkpw";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string S = "enhobodlrlfdyehdamacxdkcm";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string S = "pglnifelvsfbrwwnuzhjcrazsi";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string S = "vsskojjilcdqphbzvxmxxhzllex";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string S = "qjawyoflptghsirrmjhtncwvcfxl";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string S = "nkmjeqnevggizvtzasprvihvqllud";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string S = "fktakyzsuivcezclqxfmoatnnecirn";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string S = "ytojfjfcxbhskzdfxjbsxemzkdmidjw";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string S = "cvagfhomxrqoddwljrryytkksinjsbue";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string S = "ywplemqhiduojnplmzwdhxdkibzauctux";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string S = "oxcufgnwdnhbwgmucoxyxcuuysmeulgkzw";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string S = "dihsujudptutpgkgvxiuoqbnycscvlgahti";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string S = "llbxmezsvwjnckrhsbridhmvqbjmelllslca";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string S = "sukhdkpikgzqagrgzunponemsyfhcqmokkprs";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string S = "rbmqvoawnlnetdcnbjftansxsrbjxubbzltlwa";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string S = "tclkeqaphnisqucgbblwmlaesssfmuatgljaewr";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string S = "spqmvnkwovpoimjqzffsdcuyxtpugemkfuonxvuk";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string S = "vdzjkcyadthoszgyhieekrufkbjwvphtxbnfwfeig";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string S = "ojsbqrgofcrymwnfsekzdayhpjwavzkumryxvzzjpn";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string S = "zdkqhybiduhzuoccfogzhbuwzlmrhkmoxmqmupfeajb";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string S = "omcqgqwnshmnsopdsjcmcyaigaqbwifvkpemzaplprco";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string S = "wjwpqfpcqpdhqyiyflnfnogbwhmqciayudvylbmiykcfh";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string S = "qsvnakcrszbxjbygktllpxvilolnwadcarsifzwqnkzuwr";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string S = "zzkvumocbpfxsynhfbxhmlnqfawadnpejlihovegzvcdfcr";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string S = "wcegboouyuxktcrhloetgpwcsukaoxaklwkhpllmuarmrjzg";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string S = "qfyrrmqphtgfezabljtoovvyfbiulvvtpplqyfhdyziugmlob";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string S = "lbnxqjzpmhwammtpxoptapcazbcobxdbqfuznxguadnpetmhxz";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string S = "ulegzlotqoyaquaytdonomdvruvdyslgykgxssbxksbzkuoeui";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string S = "rowhaexhudrdtovfinkwjmborzgexqflyrkzxnpnslvbnttnxe";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string S = "zhdylwsczegqtyzdanyggcdcrqllsijpimrclcffviloibltdy";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string S = "xavrzgkvmuhcvzsudwkveaweaalukokpgozbqgnwnkfsshpmel";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string S = "btenrrrkiwrzaltccejrehcbmyumdvhyqprqjuhljmdvhvxevw";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string S = "ihyrbteilmrbcttlwlrjiplveprdstsnnwrhffhjxnilwekyts";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string S = "bvcmzjgbnxoabkbcpuppwlfhqrhrcsnhnelrgneqpqlyzpnhpl";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string S = "kpvbmltwpxcnakjfzgejanqytrjtodyajzrisipocoopcuzpnj";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string S = "pqukgltnxtybnuwqcwypiqolhutifrocedhhrahxyfawoltnup";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string S = "xcgvjskyefshwsgnuigygxaodssmurlyzjmpatktkcpydcjslg";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string S = "ejxlibbfwxigqqvmcyruzkbhmkgetggdvgqfjaezwxcdyanzqd";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string S = "etzugvbgvuksadzimugmvdrvopvewyqecijlrttmrxhomvjyig";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string S = "whdhhyanovnvmpiqflvorqguqgupwyzpfuzyuynklnogiqehso";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string S = "elzhhthdpjxkndtkqgehyxtneugfgjrnjqkchrntwrbapooblp";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string S = "lfgamabzsfbwakufjpfjmxginfcaoflpuxmckxhnafdgawqjnh";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string S = "fznjewvjgdhwkgjsprdkicfdecpwkvtweukkmhwqgjjkkwrgtl";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string S = "xdpknvfsyqlvkobjuucpcexowztctvpscbthupshbuciyjwlwj";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string S = "lnyplxvbdejtwsguizsuoqlakosqzwxxawnemkdovfctayulbb";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string S = "jnhyjbhfcrlclkllngrlamulqgxdihqjpncxtcmcelqvbbyxln";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string S = "oqdrwkuijltyutxfvjnojmjvmnpgbzkrqybuypopfwpckjffbb";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string S = "aaaabaaaaaaabaaaaaabaaaaaaaaababbaaaaaaaaaabbaaaaa";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2077;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string S = "topcoderdivtwoopp";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string S = "aaaa";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string S = "hooopooopppooosss";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string S = "abbabba";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string S = "a";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string S = "zabzabz";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string S = "abcjkfjgkjjabcjkdjfkabcdejjiie";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string S = "abaabba";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string S = "abaaaaaxxaaaaabbaaaaaaaaaxxaabaaaaxxaaaxaaaaxx";
    AkariDaisukiDiv2* pObj = new AkariDaisukiDiv2();
    clock_t start = clock();
    int result = pObj->countTuples(S);
    clock_t end = clock();
    delete pObj;
    int expected = 1082;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=23002271&rd=14733&pm=11889
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
#include <cstring>
 
using namespace std;
 
#define PRINTV(x) for(int i=0;i<sz(x);i++)cout<<x[i]<<" ";
#define REPL(i,a) for((i)=(a);(i)>=0;(i)--)
#define REP(i,a) for((i)=0;(i)<(int)(a);(i)++)
#define FOR(i,a,b) for((i)=(a);(i)<(int)(b);(i)++)
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define sz(x) (x.size())
#define DBG(x) cout<<"-->"<<(#x)<<"="<<x<<"\n"
#define ALL(x) x.begin(),x.end()
#define ALLR(x) x.rbegin(),x.rend()
typedef long long ll;
const int inf=1<<28;
template <class T> inline string itos(T n) { return (n)<0?"-"+itos(-n):(n)<10?(string)("")+(char)((n)+'0'):itos((n)/10)+itos(n%10);}
 
int i, n;
 
 
 
class AkariDaisukiDiv2 {
public:
  int countTuples(string S) {
    int cnt=0;
    REP(i,sz(S)-3)
    {
      if(i==0) continue;
      int k=0,x=i;
      while(k<sz(S))
      {
        int l=0;
        k++;
        if(k>sz(S)-3-i) break; //DBG(k);
        string t=S.substr(i,k);
        //DBG(t);
        for(l=x+k+1; l+k<=sz(S)-1; l++)
        {  
          string t1=S.substr(l,k);
          //DBG(t1);
          if(t1==t) {cnt++;}// DBG(cnt);}
        }
 
      }
    }
    return cnt;
  }
};
 
 
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/