/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6022
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

class DigitByDigit {
public:
    double expectedScore(string digits);
};

double DigitByDigit::expectedScore(string digits) {
    double ret;
    return ret;
}


int test0() {
    string digits = "_0";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 45.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string digits = "__";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 60.75;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string digits = "_55_";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 6303.25;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string digits = "____0000000000000000";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 7.482735000000001E19;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string digits = "___6__3___";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 8.604871517066002E9;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string digits = "__________";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 8.882477600592714E9;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string digits = "0";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string digits = "99999999999999999999999999999999999999999999999999";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E50;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string digits = "____________________";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 9.583251637922008E19;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string digits = "__________________________________________________";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 9.97547673335543E49;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string digits = "0000000000_0000000000_0000000000_0000000000_000000";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 6.915000000052848E39;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string digits = "_0_1_2_3_4_5_6_7_8_9_";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 8.25430304569466E20;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string digits = "_";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 4.5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string digits = "7";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string digits = "_9999999999999999999999999999999999999999999999999";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 5.499999999999999E49;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string digits = "000000000000000000000000000000000000000000000_____";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 78733.8045;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string digits = "014922___5____1_067_____4__1__2__2609___0";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4922965298599258E39;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string digits = "3__4__7_9_9____4___1_8261__________8942____3_30";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 3.978085430911233E46;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string digits = "4_90___7___6__4______3_0___3___9___4__0__";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 4.978616073320793E40;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string digits = "__7_9__8_____2_40_79_3970505____12_8___1__";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 9.677911562683919E41;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string digits = "4_4523____8____8____61___46_______4700__5_____";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 4.934143033348244E45;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string digits = "75515____8_9072_____0__3109_0____120______663";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 7.551596866800043E44;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string digits = "_2__0__0_1046__3___89__72__5_90_11_________06";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 9.123415002373696E44;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string digits = "232__3_3_16__80_____05_______7_23_4__73__";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 2.329665131664449E40;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string digits = "____6_6_0__2_2__2_05___2_______6_____1___30_2_";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 9.865892534146287E45;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string digits = "2__5_6_91___5___5_0_12__21___809____075_2";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9626980551878684E40;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string digits = "6_________1____3_007_7_6332__63058____839___4___";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 6.980463156205806E47;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string digits = "8_____89__90__52_055997__9___3_40544_7__13____";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 8.968660222874899E45;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string digits = "9_136__________6713_5_864___5_25546_26_5___8";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 9.887913607994664E43;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string digits = "60_______90________5_2___2_0__6875__1_47__210_1";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 6.098046317496375E46;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string digits = "__________9_6__7_66_125__6_3__4__0_________32_3_";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 9.878123262401342E47;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string digits = "1_5_7_______2____2__3____8_5__06_____2_____7";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 1.950446342293424E43;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string digits = "47_7____11_______9_08___64__4_41_747_6_____";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 4.7962418026116257E42;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string digits = "80_9_6__549_5__1__72___5_77____1__2_22_9__7_";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 8.097816375698759E43;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string digits = "09___8_______81____7____55______0__1__58_1";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 9.982237062532665E40;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string digits = "4_4_2_7____3________63_94_____22___5____7_";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 4.936511274998553E41;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string digits = "0_________________2_____________________________5_";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 9.967457214015187E48;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string digits = "___________9_____________________________________1";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 9.970386079696278E49;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string digits = "__________________________________________________";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 9.97547673335543E49;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string digits = "__________";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 8.882477600592714E9;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string digits = "00000000000000000000______________________________";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 9.838245760580156E29;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string digits = "________97__________________________________13____";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 9.964238685059565E49;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string digits = "__________4_________6__________3__________";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 9.930795910791479E41;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string digits = "8_____________________________________3__________1";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 8.996745721401515E49;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string digits = "_______1______2____0_____3_______0______6____9____";
    DigitByDigit* pObj = new DigitByDigit();
    clock_t start = clock();
    double result = pObj->expectedScore(digits);
    clock_t end = clock();
    delete pObj;
    double expected = 9.952543290329455E49;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=279471&rd=9815&pm=6022
********************************************************************************
#include <string>
#include <vector>
#include <iostream>
using namespace std;
 
vector<vector<double> > bb;
 
class DigitByDigit {
  public:
  double expectedScore(string digits) {
    bb.push_back(vector<double>());
    bb.push_back(vector<double>(1, 4.5));
    for(int i=2; i<52; i++) {
      vector<double> r(i, 0);
      for(int p = 0 ;p<=9; p++) {
        int pj = 0;        
        for(int j=0; j<i-1; j++) {
          if (pj == j) {
            if (p > bb[i-1][j]) r[pj++] += 0.1 * p;
          }
          r[pj++] += 0.1 * bb[i-1][j];          
        }
        if (pj == i-1) {
          r[pj++] += 0.1 *p;
        }
      }
      for(int p=0; p<r.size(); p++) cout << r[p] << ' ';
      cout << endl;
      bb.push_back(r);
    }
    int us = count(digits.begin(),digits.end(), '_');
    int usp = 0;
    double r = 0;
    for(int p=0; p < digits.size(); p++) {
      if (isdigit(digits[p])) {
        r = r*10 + int(digits[p] - '0');
      } else {
        r = r*10 + bb[us][usp++];
      }
    }
    return r;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/