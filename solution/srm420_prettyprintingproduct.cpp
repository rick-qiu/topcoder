/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9916
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

class PrettyPrintingProduct {
public:
    string prettyPrint(int A, int B);
};

string PrettyPrintingProduct::prettyPrint(int A, int B) {
    string ret;
    return ret;
}


int test0() {
    int A = 1;
    int B = 10;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "36288 * 10^2";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int A = 7;
    int B = 7;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "7 * 10^0";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int A = 211;
    int B = 214;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "2038974024 * 10^0";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int A = 411;
    int B = 414;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "28952...24024 * 10^0";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int A = 412;
    int B = 415;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "2923450236 * 10^1";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int A = 47;
    int B = 4700;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "14806...28928 * 10^1163";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int A = 311;
    int B = 314;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "9536499024 * 10^0";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int A = 312;
    int B = 315;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "965915496 * 10^1";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int A = 1;
    int B = 100000;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "28242...62496 * 10^24999";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int A = 1;
    int B = 1000000;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "82639...12544 * 10^249998";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int A = 1000000;
    int B = 1000000;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "1 * 10^6";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int A = 1;
    int B = 19;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "12164...08832 * 10^3";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int A = 8;
    int B = 25;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "30776...34496 * 10^5";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int A = 13;
    int B = 25;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "32382...26624 * 10^4";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int A = 427784;
    int B = 744439;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "11778...95584 * 10^79163";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int A = 448441;
    int B = 732252;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "17954...99328 * 10^70953";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int A = 485137;
    int B = 592122;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "15864...30656 * 10^26743";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int A = 453285;
    int B = 495368;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "11029...67648 * 10^10519";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int A = 826677;
    int B = 991147;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "22456...83328 * 10^41117";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int A = 82608;
    int B = 853848;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "16549...75872 * 10^192808";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int A = 398036;
    int B = 825775;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "74617...85408 * 10^106935";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int A = 551677;
    int B = 622039;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "92473...10944 * 10^17589";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int A = 440532;
    int B = 777613;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "90688...26912 * 10^84268";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int A = 124812;
    int B = 480191;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "15181...62336 * 10^88846";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int A = 65043;
    int B = 286828;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "63366...36224 * 10^55445";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int A = 803711;
    int B = 967485;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "11565...14528 * 10^40942";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int A = 465688;
    int B = 774960;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "48468...87488 * 10^77316";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int A = 44952;
    int B = 779461;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "43655...84352 * 10^183626";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int A = 76;
    int B = 89;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "66539...96032 * 10^2";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int A = 42;
    int B = 99;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "27898...16032 * 10^13";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int A = 78;
    int B = 83;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "27176...94656 * 10^1";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int A = 43;
    int B = 97;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "68464...65248 * 10^13";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int A = 2;
    int B = 16;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "20922...89888 * 10^3";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int A = 99;
    int B = 99;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "99 * 10^0";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int A = 69;
    int B = 70;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "483 * 10^1";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int A = 24;
    int B = 87;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "81531...66816 * 10^16";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int A = 54;
    int B = 81;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "13560...60384 * 10^7";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int A = 75;
    int B = 88;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "56072...40416 * 10^4";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int A = 74;
    int B = 81;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "12968...03136 * 10^3";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int A = 94;
    int B = 97;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "8315616 * 10^1";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int A = 27;
    int B = 88;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "45992...60768 * 10^14";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int A = 72;
    int B = 99;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "10973...98688 * 10^6";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int A = 23;
    int B = 69;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "15224...43968 * 10^11";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int A = 62;
    int B = 92;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "24505...32544 * 10^7";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int A = 77;
    int B = 78;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "6006 * 10^0";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int A = 1;
    int B = 97;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "96192...83232 * 10^22";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int A = 82;
    int B = 97;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "16593...05984 * 10^3";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int A = 936;
    int B = 917877;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "47132...03616 * 10^229233";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int A = 4896;
    int B = 915147;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "71131...58528 * 10^227561";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int A = 7392;
    int B = 916397;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "56253...80128 * 10^227250";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int A = 5805;
    int B = 945637;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "19689...37984 * 10^234958";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int A = 6925;
    int B = 984811;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "23442...49344 * 10^244471";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int A = 8542;
    int B = 935433;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "17118...46304 * 10^231721";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int A = 5028;
    int B = 999058;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "37894...01792 * 10^248504";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int A = 1442;
    int B = 974923;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "67157...09184 * 10^243367";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int A = 2359;
    int B = 916372;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "18587...28544 * 10^228502";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int A = 9714;
    int B = 909676;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "12844...57056 * 10^224991";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int A = 2;
    int B = 1000000;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "82639...12544 * 10^249998";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int A = 2;
    int B = 999999;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "82639...12544 * 10^249992";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int A = 1;
    int B = 999999;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "82639...12544 * 10^249992";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int A = 4;
    int B = 1000000;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "13773...35424 * 10^249998";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int A = 1;
    int B = 999935;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "82811...39936 * 10^249978";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int A = 2851;
    int B = 999998;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "16675...45312 * 10^249282";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int A = 3;
    int B = 999999;
    PrettyPrintingProduct* pObj = new PrettyPrintingProduct();
    clock_t start = clock();
    string result = pObj->prettyPrint(A, B);
    clock_t end = clock();
    delete pObj;
    string expected = "41319...06272 * 10^249992";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20292244&rd=13511&pm=9916
********************************************************************************
#include <string> 
#include <iostream> 
#include <sstream> 
#include <cmath> 
#include <cstdio> 
#include <algorithm> 
#include <cctype> 
#include <iterator> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <utility> 
#include <numeric> 
#include <functional> 
#include <math.h> 
 
#include <cstring> 
#include <cstdlib> 
#include <cstdio> 
#include <ctype.h> 
#include <iomanip> 
 
using namespace ::std; 
 
 
 
typedef long long LL; 
 
struct PrettyPrintingProduct  
{ 
  string prettyPrint(int A, int B)  
  { 
    string res; 
        ostringstream oss; 
        int E=0; 
        LL low=1; 
        LL high=1; 
        bool bb=false; 
        for(int n=A; n<=B; n++) 
        { 
            low*=n; 
            while(low%10==0) 
            { 
                low/=10; 
                E++; 
            } 
            if (low>=1000000000000LL) 
            { 
                bb=true; 
                low%=1000000000000LL; 
            } 
            high*=n; 
            LL t=high/1000000000000LL; 
            while(t) 
            { 
                t/=10LL; 
                high/=10LL; 
            } 
        } 
        if(bb) 
        { 
            oss<<setw(5)<<setfill('0')<<(high/10000000L); 
            oss<<"..."; 
            oss<<setw(5)<<setfill('0')<<(low%100000L); 
        } 
        else 
        { 
            if(low>=10000000000LL) 
            { 
                high=low; 
                while(high/100000L) 
                { 
                    high/=10L; 
                } 
                oss<<(high); 
                oss<<"..."; 
                oss<<setw(5)<<setfill('0')<<(low%100000L); 
           } 
           else 
           { 
                oss<<(low); 
           } 
             
        } 
        oss<<" * 10^"<<E; 
        res = oss.str(); 
    return res; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/