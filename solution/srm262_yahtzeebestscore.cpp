/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4800
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

class YahtzeeBestScore {
public:
    int bestLowerScore(vector<string> hands);
};

int YahtzeeBestScore::bestLowerScore(vector<string> hands) {
    int ret;
    return ret;
}


int test0() {
    vector<string> hands = {"66666", "66666", "66655", "12345", "12345", "66666", "66666"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 235;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> hands = {"12345", "12345", "12345", "12345", "12345", "12345", "12345"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> hands = {"12121", "12344", "42365", "22222", "66666", "66666", "66666"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 235;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> hands = {"11111", "22222", "33333", "44444", "55555", "66666", "12345"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 190;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> hands = {"13144", "32342", "66554", "12321", "65456", "45654", "33445"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> hands = {"66666", "55666", "54321", "65431", "11223", "22334", "33445"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 167;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> hands = {"11122", "22233", "33344", "44455", "55566", "66611", "66666"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> hands = {"52141", "32142", "41114", "53444", "25222", "52433", "42441"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> hands = {"11223", "11223", "11223", "11223", "11223", "11223", "11223"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> hands = {"11111", "11111", "11111", "11111", "11111", "11111", "11111"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> hands = {"22222", "22222", "22222", "22222", "22222", "22222", "22222"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 105;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> hands = {"12344", "32234", "22333", "56565", "12345", "22222", "11111"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 196;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> hands = {"11115", "12345", "12345", "33365", "12345", "55555", "66666"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 189;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> hands = {"55222", "46322", "11334", "36332", "32343", "12122", "33224"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> hands = {"11112", "22223", "33334", "44445", "55556", "66661", "11111"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 122;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> hands = {"11111", "12345", "12345", "33333", "11112", "11223", "22334"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 165;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> hands = {"62334", "43221", "54321", "33222", "33344", "11111", "11111"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 185;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> hands = {"11122", "22233", "33344", "44455", "55566", "66611", "11122"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> hands = {"13344", "22343", "22322", "13222", "11111", "12122", "65432"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 151;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> hands = {"32533", "44421", "64366", "32111", "22234", "56455", "66615"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> hands = {"11111", "11111", "11111", "11111", "11111", "11111", "11111"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> hands = {"11111", "11111", "11111", "11111", "12345", "12345", "22222"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 165;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> hands = {"32114", "32211", "23422", "44322", "11456", "65533", "54554"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> hands = {"45666", "23444", "24212", "12344", "43533", "22234", "32246"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> hands = {"53535", "12121", "64646", "25252", "53535", "21212", "34343"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> hands = {"66266", "44544", "11112", "33363", "22221", "55515", "64666"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> hands = {"66661", "66662", "66663", "66664", "66665", "66666", "66666"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 159;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> hands = {"66611", "66622", "66633", "66644", "66655", "66666", "66666"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 159;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> hands = {"23456", "12345", "23456", "12345", "12345", "12345", "12345"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> hands = {"54422", "23344", "66554", "33445", "11223", "33661", "23234"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> hands = {"55544", "33361", "12354", "66666", "12344", "55555", "44444"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 216;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> hands = {"41456", "16246", "45241", "26215", "34141", "45316", "32431"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> hands = {"62623", "53646", "56316", "24325", "15533", "51435", "46615"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> hands = {"42121", "43562", "61222", "12141", "61133", "54152", "14663"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> hands = {"15641", "54665", "55511", "62466", "44215", "26651", "32444"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 75;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> hands = {"55512", "33133", "24224", "64215", "36465", "33224", "62231"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> hands = {"36635", "65145", "21622", "21232", "44314", "23432", "14142"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> hands = {"42553", "13521", "52522", "36653", "16221", "24363", "52446"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 78;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> hands = {"55221", "13112", "26646", "26336", "41141", "31564", "21534"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 139;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> hands = {"31426", "46432", "11541", "46126", "46635", "43643", "31156"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 66;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> hands = {"43653", "53256", "35123", "54341", "33332", "32216", "15244"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> hands = {"35643", "14215", "44346", "15544", "26223", "12661", "15311"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> hands = {"26466", "24512", "43614", "51246", "43163", "63426", "51332"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> hands = {"41235", "51622", "46542", "23511", "53131", "12344", "63614"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> hands = {"41145", "23563", "45115", "63355", "46444", "31141", "51151"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> hands = {"16461", "56411", "32332", "43624", "61442", "21455", "31312"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> hands = {"31526", "12644", "15535", "51421", "52514", "45343", "22414"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> hands = {"44532", "64452", "43442", "53221", "65623", "61215", "54153"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> hands = {"36315", "42515", "24555", "45664", "23214", "66243", "31643"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> hands = {"54431", "64523", "53611", "21323", "56115", "32132", "63316"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 59;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> hands = {"11223", "11223", "11223", "11223", "11223", "11111", "11111"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> hands = {"11111", "11111", "11111", "11111", "11111", "11111", "11111"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> hands = {"66666", "66666", "66655", "54321", "54321", "66666", "66666"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 235;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> hands = {"66666", "11111", "66655", "12345", "12345", "11111", "11111"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 208;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> hands = {"66666", "66666", "66666", "66666", "66666", "66666", "66666"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 165;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> hands = {"11123", "11123", "11123", "11123", "11123", "11123", "11123"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> hands = {"11112", "11112", "11112", "11112", "11112", "11112", "11112"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> hands = {"12234", "12234", "12234", "12234", "12234", "12234", "12234"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> hands = {"66666", "66666", "66655", "12345", "12345", "66666", "66666"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 235;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> hands = {"66644", "12346", "12346", "12346", "12346", "12346", "12346"};
    YahtzeeBestScore* pObj = new YahtzeeBestScore();
    clock_t start = clock();
    int result = pObj->bestLowerScore(hands);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15607604&rd=7996&pm=4800
********************************************************************************
#include <vector>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
#include <ctype.h>
 
using namespace std;
 
#define Rep(i, b, n) for (int i = (b); i < (n); ++i)
 
class YahtzeeBestScore {
public:
  int total(string& h)
  {
    int tot=0;
    Rep(i,0,5) tot+=h[i]-'0';
    return tot;
  }
 
  int three(string& h)
  {
    int c[6];
    Rep(i,0,6) c[i]=0;
    Rep(i,0,5) c[h[i]-'0'-1]++;
    Rep(i,0,6)
      if (c[i]>=3) return total(h);
    return 0;
  }
 
  int four(string& h)
  {
    int c[6];
    Rep(i,0,6) c[i]=0;
    Rep(i,0,5) c[h[i]-'0'-1]++;
    Rep(i,0,6)
      if (c[i]>=4) return total(h);
    return 0;
  }
 
  int full(string& h)
  {
    int c[6];
    Rep(i,0,6) c[i]=0;
    Rep(i,0,5) c[h[i]-'0'-1]++;
 
    bool b3=false, b2=false, b5=false;
 
    Rep(i,0,6) {
      if (c[i]==3) b3=true;
      if (c[i]==2) b2=true;
      if (c[i]==5) b5=true;
    }
 
    if ((b3&&b2)||b5) return 25;
    return 0;
  }
 
  int small(string& h)
  {
    int c[6];
    Rep(i,0,6) c[i]=0;
    Rep(i,0,5) c[h[i]-'0'-1]++;
 
    if (c[0]>0 && c[1]>0 && c[2]>0 && c[3]>0) return 30;
    if (c[4]>0 && c[1]>0 && c[2]>0 && c[3]>0) return 30;
    if (c[4]>0 && c[5]>0 && c[2]>0 && c[3]>0) return 30;
    return 0;
  }
 
  int large(string& h)
  {
    int c[6];
    Rep(i,0,6) c[i]=0;
    Rep(i,0,5) c[h[i]-'0'-1]++;
 
    if (c[0]>0 && c[1]>0 && c[2]>0 && c[3]>0 && c[4]>0) return 40;
    if (c[5]>0 && c[1]>0 && c[2]>0 && c[3]>0 && c[4]>0) return 40;
    return 0;
  }
 
  int yahtzee(string& h)
  {
    int c[6];
    Rep(i,0,6) c[i]=0;
    Rep(i,0,5) c[h[i]-'0'-1]++;
    Rep(i,0,6)
      if (c[i]>=5) return 50;
    return 0;
  }
 
  int chance(string& h)
  {
    return total(h);
  }
 
  int score(vector<string>& hands, vector<int>& perm)
  {
    int sc=0;
    Rep(i,0,7) {
      switch(perm[i]) {
      case 0:
        sc+=three(hands[i]);
        break;
      case 1:
        sc+=four(hands[i]);
        break;
      case 2:
        sc+=full(hands[i]);
        break;
      case 3:
        sc+=small(hands[i]);
        break;
      case 4:
        sc+=large(hands[i]);
        break;
      case 5:
        sc+=yahtzee(hands[i]);
        break;
      case 6:
        sc+=chance(hands[i]);
        break;
      }
    }
    return sc;
  }
 
  int permute(vector<string>& hands, vector<int>& perm, int entry, int n)
  {
    int ret = 0;
 
    for (int i = 0; i < n; i++) {
      bool good = true;
      if (entry != 0) {
        for (int j = entry-1; j >= 0; j--)
          if (i == perm[j]) good = false;
      }
      if (!good) continue;
 
      perm[entry] = i;
 
      if (entry == n-1) {
        ret = score(hands, perm);
      } else {
        ret = max(ret, permute(hands, perm, entry+1, n));
      }
    }
 
    return ret;
  }
 
  int bestLowerScore(vector <string> hands)
  {
    vector<int> perm(7);
    Rep(i,0,7) perm[i]=i;
    return permute(hands, perm, 0, 7);
  }
};

********************************************************************************
*******************************************************************************/