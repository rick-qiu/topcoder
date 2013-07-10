/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12420
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

class EllysBulls {
public:
    string getNumber(vector<string> guesses, vector<int> bulls);
};

string EllysBulls::getNumber(vector<string> guesses, vector<int> bulls) {
    string ret;
    return ret;
}


int test0() {
    vector<string> guesses = {"1234", "4321", "1111", "2222", "3333", "4444", "5555", "6666", "7777", "8888", "9999"};
    vector<int> bulls = {2, 1, 1, 0, 2, 0, 0, 0, 1, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "1337";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> guesses = {"0000", "1111", "2222"};
    vector<int> bulls = {2, 2, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> guesses = {"666666", "666677", "777777", "999999"};
    vector<int> bulls = {2, 3, 1, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> guesses = {"000", "987", "654", "321", "100", "010"};
    vector<int> bulls = {2, 1, 0, 0, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "007";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> guesses = {"0294884", "1711527", "2362216", "7666148", "7295642", "4166623", "1166638", "2767693", "8650248", "2486509", "6138934", "4018642", "6236742", "2961643", "8407361", "2097376", "6575410", "6071777", "3569948", "2606380"};
    vector<int> bulls = {1, 0, 1, 3, 4, 4, 3, 2, 1, 1, 0, 4, 4, 3, 0, 0, 0, 0, 2, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "4266642";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> guesses = {"00", "01", "02", "03", "04", "05", "06", "07", "08"};
    vector<int> bulls = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "09";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> guesses = {"123", "456", "789"};
    vector<int> bulls = {1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> guesses = {"123", "456", "789", "100"};
    vector<int> bulls = {1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> guesses = {"123", "456", "789", "403", "050"};
    vector<int> bulls = {1, 1, 1, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> guesses = {"00000000", "10000001", "07000008", "02000020", "00600070", "00300300", "00050600", "00044000", "80005000"};
    vector<int> bulls = {0, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> guesses = {"00000000", "10000001", "82000000", "07300000", "00640000", "00055000", "00004600", "00000370", "00000028"};
    vector<int> bulls = {0, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> guesses = {"000000000", "555555555", "100000001", "920000000", "083000000", "007400000", "000606000", "000004700", "000000380", "000000029"};
    vector<int> bulls = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> guesses = {"000000000", "555555555", "100000001", "920000000", "083000000", "007400000", "000606000", "000004700", "000000380", "000000029", "900000009", "007000009", "083000000", "100004000", "020600000", "003004000", "180000000", "000600700", "020000001", "900006000", "000400300", "007006000", "000004009", "080000009", "000000720", "000000081", "080006000", "003000001", "080000700", "107000000", "000000701", "000400300", "083000000", "007000009", "003000020", "100600000", "007400000", "000400001", "007400000", "903000000", "020000001", "007000009", "000000309", "900006000", "100000300", "100000020", "080000080", "000000029", "000000380", "000000701"};
    vector<int> bulls = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> guesses = {"00000000", "11111111", "00001111", "11000000", "00010000", "22222222", "00002222", "00220000", "02000000", "33333333", "00003333", "00000033", "00000300", "44444444", "00004444", "00440000", "55555555", "00005555", "00000055", "00000005", "66666666", "00006666", "00000066", "77777777", "00007777"};
    vector<int> bulls = {0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> guesses = {"00000000", "11111111", "00001111", "00110000", "00010000", "22222222", "00020222", "00222000", "00022000", "33333333", "00033333", "03333000", "00333000", "44444444", "04044044", "04044004", "55555555", "05055555", "05055055", "66666666", "06066666", "77777777", "07777777"};
    vector<int> bulls = {0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> guesses = {"000000000"};
    vector<int> bulls = {0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> guesses = {"000000000"};
    vector<int> bulls = {1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> guesses = {"000000000"};
    vector<int> bulls = {4};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> guesses = {"000000000", "100000001", "020000020", "003000300", "000404000", "000050000", "000606000", "007000700", "080000080", "900000009"};
    vector<int> bulls = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> guesses = {"000000000", "111111111", "222222222", "333333333", "444444444", "555555555", "666666666", "777777777", "888888888"};
    vector<int> bulls = {4, 0, 0, 0, 0, 0, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> guesses = {"000000000", "010101010", "111111111", "222222222", "333333333", "444444444", "555555555", "666666666", "777777777", "888888888"};
    vector<int> bulls = {4, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "909090909";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> guesses = {"00000000", "11111111", "00001111", "11000000", "00010000", "22222222", "00002222", "00220000", "02000000", "33333333", "00003333", "00000033", "00000300", "44444444", "00004444", "00440000", "55555555", "00005555", "00000055", "00000005", "66666666", "00006666", "00000066", "77777777", "00007777", "88888888"};
    vector<int> bulls = {0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "42179356";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> guesses = {"000000000", "111111111", "000001111", "000110000", "001000000", "222222222", "000002222", "000000022", "000000002", "333333333", "000003333", "000000033", "000000300", "444444444", "000004444", "000000044", "555555555", "000005555", "005550000", "050000000", "666666666", "000006666", "000006000", "777777777", "000770000", "077000000", "007000000", "888888888", "000080000"};
    vector<int> bulls = {0, 1, 0, 0, 1, 1, 1, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "571983624";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> guesses = {"00000000", "11111111", "00001111", "00110000", "00010000", "22222222", "00020222", "00222000", "00022000", "33333333", "00033333", "03333000", "00333000", "44444444", "04044044", "04044004", "55555555", "05055555", "05055055", "66666666", "06066666", "77777777", "07777777", "88888888"};
    vector<int> bulls = {0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "83712546";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> guesses = {"000000000", "111111111", "000001111", "000110000", "000010000", "222222222", "000022222", "002220000", "020020000", "333333333", "030030333", "030333000", "030033000", "444444444", "040440444", "040444000", "044440000", "555555555", "550550055", "550550005", "666666666", "660660666", "660666006", "777777777", "770777077", "888888888", "880888888"};
    vector<int> bulls = {0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "429316875";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> guesses = {"42155355", "42166356", "02104344", "42144344", "00102222", "02100033", "42177356", "11000000", "42106356", "42100305", "02100300", "11111111", "42178356", "00120000", "42107356", "02103333", "02140300", "22122222", "00001111", "42100356", "42100355", "00000000", "02100000", "42105355", "00010000", "32133333"};
    vector<int> bulls = {5, 6, 3, 4, 1, 2, 7, 0, 6, 4, 3, 1, 7, 1, 6, 3, 3, 2, 0, 6, 5, 0, 2, 5, 0, 3};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "42179356";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> guesses = {"001000000", "001000022", "571003624", "001002222", "001003323", "000000000", "221222222", "501773624", "501003624", "000110000", "571773624", "501003024", "571883624", "001000320", "111111111", "000001111", "441443424", "001003524", "001553024", "571083624", "051003024", "501003624", "001003024", "331333323", "561663624", "001000023", "551553524", "001003424", "001000002"};
    vector<int> bulls = {1, 2, 7, 2, 3, 0, 2, 6, 6, 0, 7, 5, 8, 2, 1, 0, 4, 4, 4, 8, 4, 6, 4, 3, 6, 2, 5, 4, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "571983624";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> guesses = {"11111111", "83712546", "03012004", "33312333", "43412444", "00212000", "03012546", "00110000", "03312000", "03012045", "53512545", "63612546", "00012333", "22212222", "03012545", "03012044", "03712546", "00010000", "00010222", "00001111", "73712546", "00000000", "00012000", "00312000"};
    vector<int> bulls = {1, 7, 3, 3, 4, 2, 6, 1, 3, 4, 5, 6, 2, 2, 5, 4, 7, 1, 1, 0, 7, 0, 2, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "93712546";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> guesses = {"000000000", "111111111", "420316005", "002210000", "420316075", "420310665", "425315555", "020310444", "000110000", "000010000", "020010000", "020010333", "427316775", "424314444", "000001111", "420310005", "000012222", "420316875", "020314000", "420310055", "428316875", "024310000", "020013000", "323313333", "020313000", "222212222", "426316665"};
    vector<int> bulls = {0, 1, 6, 1, 7, 5, 5, 3, 1, 1, 2, 2, 7, 4, 0, 5, 1, 7, 3, 5, 8, 3, 2, 3, 3, 2, 6};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "428316975";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> guesses = {"123", "456", "789", "100", "159"};
    vector<int> bulls = {1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "186";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> guesses = {"123", "456", "789", "403", "050", "186"};
    vector<int> bulls = {1, 1, 1, 0, 0, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "726";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> guesses = {"00000000", "10000001", "07000008", "02000020", "00600070", "00300300", "00050600", "00044000", "80005000", "87654321"};
    vector<int> bulls = {0, 1, 1, 1, 1, 1, 1, 1, 1, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "12345678";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> guesses = {"00000000", "10000001", "82000000", "07300000", "00640000", "00055000", "00004600", "00000370", "00000028", "12345678"};
    vector<int> bulls = {0, 1, 1, 1, 1, 1, 1, 1, 1, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "87654321";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> guesses = {"000000000", "555555555", "100000001", "920000000", "083000000", "007400000", "000606000", "000004700", "000000380", "000000029", "111111110"};
    vector<int> bulls = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> guesses = {"000000000", "555555555", "100000001", "920000000", "083000000", "007400000", "000606000", "000004700", "000000380", "000000029", "111111110"};
    vector<int> bulls = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "987654321";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> guesses = {"000000000", "555555555", "100000001", "920000000", "083000000", "007400000", "000606000", "000004700", "000000380", "000000029", "000404000", "000004080", "007000009", "000000309", "003000001", "000006001", "000000720", "007000080", "003000300", "900000080", "100000001", "100000001", "000006020", "007006000", "000006020", "000600009", "080006000", "020000001", "027000000", "000006300", "083000000", "000004009", "027000000", "000600080", "020004000", "020000300", "080006000", "080000700", "180000000", "007006000", "100004000", "020000300", "100000300", "900000080", "007400000", "000004700", "000000081", "000000309", "007000009", "111666999"};
    vector<int> bulls = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> guesses = {"589582895", "514642133", "298664252", "533445988", "376922971", "772784227", "255167742", "772499861", "433712385", "433738482", "663793867", "561345874", "696735512", "548993457", "261645127", "369849731", "268333812", "663972324", "788414249", "336125157", "874912264", "324613286", "844217528", "541567799", "216254761", "675948468", "172374529", "969364686", "936418357", "811295514", "469963427", "411294125", "363943987", "312725139", "731872873", "284793527", "652931634", "637869245", "185876849", "814265861", "764154284", "284467594", "153615162", "285372396", "165798751", "513733729", "113574899", "763168337", "788954787", "544377447"};
    vector<int> bulls = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "000000000";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> guesses = {"0000", "1000", "2000"};
    vector<int> bulls = {0, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> guesses = {"00", "01", "02", "03", "04", "05", "06", "07", "08", "09"};
    vector<int> bulls = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> guesses = {"000", "111", "012", "210"};
    vector<int> bulls = {1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> guesses = {"000000000", "111111111", "222222222", "333333333", "444444444", "555555555", "666666666", "777777777", "888888888", "999999999"};
    vector<int> bulls = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> guesses = {"000000000", "555555555", "100000001", "920000000", "083000000", "007400000", "000606000", "000004700", "000000380", "000000029", "000000701", "083000000", "083000000", "080000700", "000004080", "020004000", "000004700", "020000300", "900000700", "000000309", "027000000", "920000000", "900006000", "003000020", "000600009", "003000001", "020004000", "000400300", "007000700", "100000020", "000400020", "100000001", "000600700", "020000300", "020000001", "007000700", "000000029", "100000020", "000000720", "000606000", "027000000", "080000700", "080400000", "920000000", "180000000", "007400000", "900000080", "000600009", "000600080", "000006001"};
    vector<int> bulls = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> guesses = {"000000000", "555555555", "100000001", "920000000", "083000000", "007400000", "000606000", "000004700", "000000380", "000000029", "123456789", "987654321"};
    vector<int> bulls = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> guesses = {"458812", "498245", "998386"};
    vector<int> bulls = {1, 2, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> guesses = {"6238", "6275", "8278", "2089", "8205", "2767", "7816", "9589", "0072", "5214", "6468", "8355", "5584", "5472", "4990", "0350", "6783", "4419", "5747", "4088", "5232", "6662", "0493", "1995", "5605", "4634", "0539", "2881", "6024", "0221", "4442", "0421", "7795", "4034", "2298", "2785", "3944"};
    vector<int> bulls = {2, 3, 2, 0, 3, 2, 2, 0, 3, 2, 1, 1, 2, 1, 3, 1, 0, 3, 3, 1, 2, 1, 3, 1, 1, 1, 1, 0, 3, 3, 3, 2, 3, 1, 0, 0, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> guesses = {"566072726", "713216383", "860126054", "793478816", "876172378", "858733108", "092491573", "422012770", "410373959"};
    vector<int> bulls = {5, 0, 6, 7, 1, 5, 2, 0, 5};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> guesses = {"2867", "8183", "3620", "8418", "7581", "0488", "3678", "5556", "3008", "2306", "0972"};
    vector<int> bulls = {2, 0, 0, 3, 1, 1, 1, 2, 0, 3, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> guesses = {"94", "82", "25"};
    vector<int> bulls = {0, 1, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> guesses = {"39", "19", "28", "14", "10", "07", "08", "40", "95", "82", "21", "40", "59", "51", "09", "91", "33", "76", "02", "98", "99", "20", "78", "30", "64", "19", "60", "36", "21", "32", "05", "96", "82", "40", "60", "29", "85", "56", "88", "87", "79", "58", "39", "53", "23", "48", "13", "81"};
    vector<int> bulls = {1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> guesses = {"77", "64", "92", "31", "97", "26", "76", "53", "07", "53", "88", "01", "50", "90", "35", "27", "67", "20", "17", "91", "17", "66", "92", "65", "40", "78", "11", "57", "21", "11", "74", "56", "98", "32", "38", "27", "68", "11", "53", "31", "34", "31", "90", "52", "12", "17", "15"};
    vector<int> bulls = {1, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> guesses = {"05", "83", "88", "16", "70", "98", "49", "75", "48", "87", "09", "69", "01", "55", "01", "74", "70", "41", "18", "57", "47", "82", "02", "88", "97", "34", "13", "12", "53", "45", "14", "26", "33", "08", "38", "69", "01", "93", "36", "54"};
    vector<int> bulls = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> guesses = {"65518", "62250", "25206", "28006", "30643", "05207", "61818", "65926", "23212", "88874", "05995", "09951", "12339", "23304", "43924", "05747", "63090", "01510", "95896", "57638", "93025", "57794", "78578", "42384", "30417", "21313", "51505", "22155", "89284", "75840", "44358"};
    vector<int> bulls = {4, 0, 2, 3, 2, 0, 0, 0, 2, 0, 3, 1, 2, 3, 4, 1, 3, 3, 2, 0, 1, 1, 3, 1, 2, 1, 1, 3, 2, 4, 4};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> guesses = {"3340675", "6098357", "0487402", "5416645", "9124993", "6587897", "1650132", "0574490", "1190421", "7093331", "5695988", "9513628", "1981334", "9272176", "7306025", "0720954", "2560881", "7579237", "7936381", "6876512", "5615413", "5092133", "2904857", "3030321", "0818728", "2302825", "8124988", "7179503", "0153423", "9492490", "4985323"};
    vector<int> bulls = {3, 2, 3, 4, 3, 6, 1, 1, 2, 3, 6, 6, 5, 1, 6, 3, 0, 3, 2, 2, 0, 4, 0, 4, 3, 3, 3, 5, 4, 4, 4};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> guesses = {"19883", "93328", "40201", "10766", "05889", "73222", "02316", "77287", "59291", "08192", "24758", "00716", "30373", "43231", "27713", "70363", "95615", "09730", "15171", "94980", "18508", "28085", "47361", "80865", "10283", "56149", "83233", "30148", "89897", "19589", "93314", "45763", "63834", "78901", "07349", "56898", "97084", "69362", "06516", "97350", "65182", "24522", "86983", "50581", "07341", "64170", "06105", "25832"};
    vector<int> bulls = {2, 3, 2, 3, 0, 0, 3, 4, 3, 0, 1, 4, 0, 0, 0, 1, 1, 3, 2, 0, 4, 1, 1, 2, 0, 3, 2, 2, 4, 1, 1, 4, 2, 4, 4, 4, 0, 0, 1, 0, 2, 0, 0, 0, 0, 4, 0, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> guesses = {"27297631", "98954952", "22308728", "75418296", "98163754", "01228546"};
    vector<int> bulls = {3, 3, 3, 6, 5, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> guesses = {"44918", "87971", "43529", "55679", "23198", "84443", "80294", "83504", "52577", "44041", "54028", "81476", "98738", "28098", "49682", "47940", "48182", "14669", "81364", "22010", "87331", "56121", "18047", "41198", "03250", "22633", "15821", "39721", "20927", "50329", "80114", "43996", "62096", "30351", "67927", "68246", "09187", "84037", "62273", "73073", "46740", "24463", "50201", "93791"};
    vector<int> bulls = {3, 1, 1, 0, 2, 0, 4, 3, 2, 1, 1, 4, 1, 0, 3, 2, 2, 3, 0, 3, 4, 4, 2, 1, 3, 1, 4, 3, 4, 2, 2, 2, 2, 4, 0, 3, 1, 4, 0, 1, 1, 4, 1, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> guesses = {"41", "46", "87", "34", "67", "81", "12", "11", "08", "10", "77", "51", "78", "93", "39", "37", "20", "17", "67", "75", "81", "52", "75", "10", "05", "07", "64", "14", "08", "97", "99", "06", "80", "69", "20"};
    vector<int> bulls = {1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> guesses = {"69189118", "35091082", "68977893", "56397743", "83336104", "42715722", "03609896", "02903224", "74531334", "52169884", "45730277", "02008645", "15732791", "40331583", "51025104", "64895622", "17478600", "13924154", "66813310", "89389843", "96977252", "28338578", "13512086", "53953548", "03508435", "12602216", "01773835", "32194230", "48661387", "44354427", "56690709", "67320153", "65468158", "33287696"};
    vector<int> bulls = {6, 2, 4, 7, 1, 5, 0, 7, 3, 7, 1, 6, 3, 0, 0, 4, 6, 2, 7, 3, 3, 4, 1, 1, 4, 3, 3, 1, 7, 3, 2, 3, 5, 6};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> guesses = {"21058700", "73462011", "53495343", "70915400", "12377333", "15888024", "33676614", "16596871", "16763712", "94718248", "16204859", "44994532", "74319073", "42698774", "78321937", "44351328", "90349443", "85381238", "85106181", "77282366", "65138076", "60310431", "89545744", "77526889", "98050296", "22926736", "52171153", "66815869", "66288168", "89790582", "97175164", "99615560", "50795685", "70752304", "85800977", "47592322", "19730437", "08812749", "93620720", "53577443", "86445924", "24253234", "23720776", "75679085"};
    vector<int> bulls = {1, 6, 3, 3, 7, 6, 6, 3, 3, 0, 0, 3, 6, 0, 6, 6, 5, 5, 2, 5, 7, 5, 4, 3, 6, 6, 0, 0, 1, 2, 2, 1, 7, 1, 6, 7, 0, 5, 4, 5, 0, 0, 3, 7};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> guesses = {"565882", "527673", "569445", "692956", "783726", "100456", "646763", "147500", "588698", "560604", "864034", "004361", "568676", "894510", "867077", "622965", "406962", "126470", "241003", "179802", "897477", "391296", "149869", "482582", "619371", "206899", "911348", "491439", "952167", "518075", "429184", "812846", "315854", "664614", "466758", "151190", "634457", "656296", "321634", "056506", "332660", "200520", "610494"};
    vector<int> bulls = {4, 1, 5, 3, 3, 1, 5, 1, 3, 1, 1, 0, 1, 0, 2, 0, 3, 2, 4, 1, 3, 5, 1, 1, 5, 5, 0, 0, 2, 5, 0, 1, 4, 2, 1, 3, 2, 3, 5, 1, 4, 5, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> guesses = {"6407", "6685", "0021", "8435", "8705", "5630", "9937"};
    vector<int> bulls = {2, 1, 1, 0, 3, 0, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> guesses = {"302", "118", "374", "719", "612", "257", "842", "650", "607", "444", "506", "263", "755", "489", "812", "792", "829", "990", "642", "351", "784", "198", "969", "647", "486", "149", "873", "577", "133", "965"};
    vector<int> bulls = {1, 1, 0, 2, 0, 2, 2, 1, 2, 1, 0, 0, 1, 2, 1, 2, 2, 0, 1, 2, 1, 2, 0, 2, 1, 0, 2, 1, 0, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> guesses = {"2498", "4261", "6105", "4870", "1728", "1191", "3232", "8187", "6264", "4370", "4373", "0568", "6812", "6243", "2051", "5801", "8284", "7238", "1622", "3856", "8935", "6957", "0025", "3037", "1525", "5355", "6685", "1026", "9625", "8661", "7125"};
    vector<int> bulls = {2, 3, 0, 2, 2, 2, 2, 1, 1, 1, 0, 0, 0, 2, 2, 3, 1, 3, 1, 0, 1, 3, 1, 2, 3, 3, 0, 0, 2, 0, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> guesses = {"270049", "810017", "569506", "236752", "666786", "558004", "228650", "993871", "199852", "107388", "969311", "124680", "950468", "733173", "342773", "655360", "563329", "635514", "179965", "237097", "956993", "818961", "453464", "521754", "385231", "200085", "887108", "322270", "474344", "605537", "190888", "916786", "980546", "640188", "946409", "912439", "776679", "945469", "682675", "682435"};
    vector<int> bulls = {4, 1, 2, 5, 4, 4, 5, 3, 3, 5, 5, 4, 2, 1, 3, 3, 3, 1, 2, 2, 5, 0, 1, 4, 1, 2, 4, 2, 4, 2, 4, 5, 3, 4, 2, 5, 1, 4, 2, 4};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> guesses = {"64", "24", "96", "22", "65", "95", "44", "49", "13", "73", "05", "51", "85"};
    vector<int> bulls = {1, 0, 0, 1, 0, 1, 1, 0, 1, 1, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> guesses = {"89", "73", "42", "76", "02", "39", "22", "94", "48", "63", "28", "37", "37", "91", "91", "62", "22", "61", "59", "26", "90", "40", "63", "41", "84", "73", "43", "51", "49", "06", "54", "91", "23", "22", "17", "09", "89", "01", "06", "45", "08", "05"};
    vector<int> bulls = {0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> guesses = {"9325", "3572", "5489", "8688", "5994", "9987", "3130", "6340", "3766", "5207", "6879", "8085", "2429", "0150", "4005", "4775", "8359", "8960", "0191", "0143", "7969", "7554", "4209"};
    vector<int> bulls = {0, 2, 0, 2, 2, 2, 2, 0, 2, 1, 0, 3, 2, 3, 3, 2, 1, 1, 2, 0, 2, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> guesses = {"770", "312", "424", "035"};
    vector<int> bulls = {1, 0, 0, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> guesses = {"14965", "87840", "90582", "29698", "95701", "07656", "28558", "01945", "77183", "33835", "61194", "91926", "70938", "30868", "06853", "86056", "89605", "91754", "84117", "25688", "53437", "60610"};
    vector<int> bulls = {4, 2, 1, 3, 2, 3, 3, 1, 1, 4, 3, 0, 2, 3, 4, 3, 4, 3, 0, 0, 0, 4};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> guesses = {"953711", "316914", "708649", "013119", "959356", "439545", "037224", "058030", "540884", "177809", "002045", "216846", "628852", "692160", "600558", "439636", "411554", "924057", "044755", "184465", "049958", "548602", "273159", "989740", "472088", "023913", "933125", "206177"};
    vector<int> bulls = {5, 2, 3, 3, 3, 5, 3, 0, 2, 2, 2, 2, 1, 5, 0, 0, 0, 4, 5, 3, 1, 4, 1, 2, 2, 1, 0, 4};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> guesses = {"1226105", "3312572", "7122809", "9314143", "4873282", "9850835", "5837160", "0531420", "5904260", "2423850", "3297374", "8880973", "7612428", "3983510", "6254853", "7080469", "8522217"};
    vector<int> bulls = {5, 1, 4, 5, 2, 5, 0, 6, 3, 4, 4, 0, 2, 2, 6, 4, 5};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> guesses = {"929", "950", "252", "161", "221", "355", "080", "644", "092", "140", "151", "308", "564", "452", "150", "172", "730", "844", "505", "240", "019", "370", "608", "791", "269", "959", "114", "513", "843", "401"};
    vector<int> bulls = {2, 0, 2, 2, 0, 2, 0, 0, 0, 1, 2, 1, 0, 1, 2, 2, 2, 1, 1, 2, 2, 0, 2, 1, 0, 0, 1, 0, 1, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> guesses = {"750958", "270967", "848513", "147246", "814866", "097993", "140762", "862389", "737641", "032023", "375207", "086894"};
    vector<int> bulls = {5, 2, 5, 4, 4, 2, 4, 3, 1, 0, 4, 3};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> guesses = {"300", "072", "731", "918", "838", "847", "126", "083", "192", "113", "110", "124", "505", "308", "072", "059", "911", "379", "744", "214", "271", "258", "846", "585", "721", "723", "279", "528", "573", "979", "038", "861", "691", "929"};
    vector<int> bulls = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> guesses = {"28617314", "75981552", "67379472", "93742196", "99462773"};
    vector<int> bulls = {1, 2, 2, 1, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> guesses = {"7126", "3742", "5641", "3232", "2979", "9429", "2531", "0475", "0882", "5441", "7591", "9060", "3118", "0316", "4152", "0430", "9563", "2850", "5642", "5561", "6030", "4370", "2522", "4285", "2722", "3910", "5445", "9269", "3568", "9569"};
    vector<int> bulls = {0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> guesses = {"07878183", "51725158", "40815335"};
    vector<int> bulls = {1, 1, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> guesses = {"992441692", "852012829", "688785459", "006187171", "779360344", "659803864", "143120748", "939715732", "597937501", "846213907", "809209420", "646136458", "744167540", "332239893", "755295897", "410382732", "560729664", "759607615", "257841925", "930226092", "165474921", "716431755", "290839924", "255362841", "669143468", "384746466", "806116905", "111583490", "193874707", "392698951", "007126943", "222333102", "099265663", "888835137", "740619462", "301358374", "123908286", "781651405"};
    vector<int> bulls = {0, 1, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 2, 2, 0, 1, 2, 2, 2, 1, 2, 1, 0, 0, 1, 1, 0, 2, 0, 0, 0, 0, 2, 1, 2, 2, 1, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> guesses = {"53948", "38807", "33208", "46977", "92556", "64506", "53668", "34915", "44396", "47634", "19596", "18360", "90946", "36136", "07527", "53316", "58387", "14357", "17865", "69911", "95304", "32895", "08185", "04743", "25402", "94638", "91932", "60880", "12495", "29829", "06742"};
    vector<int> bulls = {0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> guesses = {"361", "412", "260", "895", "074"};
    vector<int> bulls = {0, 0, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> guesses = {"53582", "68317", "72508", "30619", "17403", "08308", "43426", "65482", "98214", "62420", "66271", "97251", "08984", "66710", "83312", "31545", "44734", "21407", "97031", "61083", "13214", "62492", "19009", "25171", "16530", "42436", "59376", "91058", "90548", "48387", "02501", "24624", "54949", "96913", "62339", "57099", "17934", "55349", "54813", "37151", "02501", "73431", "87905"};
    vector<int> bulls = {0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 0, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> guesses = {"20", "47", "01", "31", "88", "35", "28", "45", "06", "45", "85", "87"};
    vector<int> bulls = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> guesses = {"94310", "46081", "74454", "90794", "05649", "55121", "33219", "93550", "17316", "04682", "68196", "98753", "05413", "73784", "80416", "83721", "71211", "13560", "53085", "22679", "96121", "08005", "81243", "20041", "65397", "89408", "75603", "09493", "47861", "73970", "44658", "78752", "77694", "31149", "50239", "98813"};
    vector<int> bulls = {1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> guesses = {"954874", "983852", "531673", "522150", "628367", "537788", "035893", "709335", "364940", "978652", "353791", "509365", "961991", "594750", "203885", "403779", "906876", "091798", "904052", "807493", "011471"};
    vector<int> bulls = {2, 2, 0, 1, 1, 2, 0, 1, 2, 2, 1, 1, 2, 2, 1, 1, 1, 1, 2, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> guesses = {"38", "10", "53", "94", "70", "23", "12", "75", "85", "16", "84", "75", "55", "24", "04", "54", "24", "90", "24", "70", "71", "85", "57", "37", "92"};
    vector<int> bulls = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> guesses = {"50408", "44335", "20504", "26881", "62389", "15681", "71992", "41280", "46003", "85454", "80989", "09849", "08073", "25070", "79006", "15129", "06363", "76633", "48171", "06713", "81791", "01830", "46732", "48279", "65464", "98760", "35568", "82465", "39489", "01559", "75090", "41329", "63995", "10769", "24693", "34180", "68957", "38214", "40911", "55543", "97791", "98479", "59947"};
    vector<int> bulls = {0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> guesses = {"49", "23", "71", "81", "48", "88", "44", "01", "10", "05", "10", "70", "25", "24", "98", "66", "04", "66", "31", "62", "16", "77", "05", "70", "37", "15", "78", "41"};
    vector<int> bulls = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> guesses = {"8082106", "8549415", "0858115", "6291705", "2768279", "8183793", "8309569", "8981736", "6326087", "4818138", "8951966", "5528162", "8805099", "3365383", "2665914", "8744272", "2098162", "7483984", "8687587", "7173709", "9220161", "5964672", "8692884", "0799841", "5673208", "9313610", "5222042", "1833496", "3226522", "5623857", "1100037"};
    vector<int> bulls = {0, 1, 2, 2, 0, 0, 0, 1, 0, 2, 1, 0, 1, 0, 1, 2, 2, 2, 0, 0, 0, 2, 1, 0, 1, 0, 0, 2, 0, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> guesses = {"887152", "166421", "728282", "079418", "107895", "841647", "793044", "507496", "755850", "170218", "266081", "828088", "280373", "432545", "884018", "976224", "742142", "470316", "772537", "913824", "222741", "817321", "915789", "737874", "521999", "260251", "010984", "509524", "001687", "702776", "596055", "543363", "627967", "085073", "625170", "725454", "067578", "169223", "211647", "682371", "970790", "077969", "182173", "693164", "851103", "969689", "484268", "331606"};
    vector<int> bulls = {2, 2, 0, 1, 2, 0, 0, 2, 0, 0, 2, 2, 2, 1, 2, 2, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 2, 2, 2, 1, 2, 2, 1, 1, 2, 2, 1, 0, 0, 1, 2, 0, 2, 2, 2, 2, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> guesses = {"3366", "4860", "6987", "4978", "1103", "9703", "7052", "9015", "6739", "8596", "0362"};
    vector<int> bulls = {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> guesses = {"759975227", "355265270", "557773655", "135306173", "434648525", "630447246", "666331655", "889147045", "547529802", "525899863", "013868825", "714209817", "565335635", "701037313", "960219888", "509037252", "577901144", "956476800", "867833826", "856706113", "501388679", "060146428", "268792938", "066886733", "150403444", "491371238", "415026607", "720085991", "569393475", "526724882", "077166674", "751339629", "706373005", "112220518", "127550120", "720973062", "929333466", "402253957", "946342056"};
    vector<int> bulls = {2, 1, 2, 0, 1, 0, 1, 0, 1, 0, 1, 2, 0, 2, 2, 0, 0, 2, 1, 2, 0, 1, 0, 1, 1, 0, 2, 2, 2, 0, 1, 0, 2, 1, 1, 1, 1, 2, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> guesses = {"28", "92", "70", "30", "67", "63", "06", "65", "11", "06", "88", "48", "09", "65", "48", "08"};
    vector<int> bulls = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "54";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> guesses = {"18275602", "27636864", "30869882", "63260628", "62613487", "51571748", "46415645", "50492177"};
    vector<int> bulls = {2, 2, 1, 0, 2, 0, 2, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> guesses = {"35217", "61569", "18047", "73574", "58431", "38010", "39237", "93703", "13304", "83870", "42864", "67577", "50058", "82876", "58010", "29386", "73608", "60993", "80755", "60950", "45560", "90377", "53464", "51515", "81305", "50975", "93483", "60796", "57360", "39930", "18388", "08360", "51596", "69449", "78152", "07544", "32077"};
    vector<int> bulls = {1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> guesses = {"60", "41", "86", "69", "62", "21", "50"};
    vector<int> bulls = {0, 0, 0, 0, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> guesses = {"782143807", "799006081", "604873597", "648653318", "397317525", "215038753", "490853375", "502813631", "609772892", "898602577", "422645483", "150788742", "819802024", "570700543", "408250381", "730477095", "750893849", "650830226", "141052334", "842687173", "201556713", "273634756", "282416854", "481103589", "092830145", "154687493", "628366655", "319897226", "159478995", "227184109", "578455975", "319446612", "810453282", "172791805", "001858147", "120175913", "932159745", "274555985"};
    vector<int> bulls = {2, 0, 1, 0, 2, 2, 1, 2, 2, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 2, 1, 2, 2, 1, 0, 2, 2, 0, 1, 1, 1, 1, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> guesses = {"9972893", "1168986", "1311967", "1558910", "4836331", "2393060", "2643129"};
    vector<int> bulls = {1, 2, 0, 2, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> guesses = {"9249", "6552", "6550", "8684", "6655", "9686", "8592", "8936", "1041", "7912", "5390", "8575", "0865", "2585", "0136", "7346", "5786", "4439", "2377", "7079", "8024", "8489", "2109", "3361", "4823", "7753", "6516", "4230", "6948", "2653", "4181", "3336", "5327"};
    vector<int> bulls = {0, 0, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> guesses = {"6441520", "7553125", "8860633", "3044544", "5072978", "8996546", "7210155", "7687384"};
    vector<int> bulls = {0, 0, 0, 1, 2, 0, 2, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> guesses = {"013570177", "419100638", "025156841", "386782824", "698701626", "452984165", "903855242", "503424180", "112360159", "473968544", "981222727", "283381069", "974619589", "197934503", "428472762", "089137354", "541423463", "135668110", "371129694", "017975158", "045905110", "975622964", "409363125", "788607949", "492987328", "708447346", "122409553", "217084376", "936504023", "566766064", "459869629", "206943629", "516737831", "252016173", "517336665", "474726198", "176825017", "674659514", "706818495", "810241563", "893050105", "866938310", "006050503", "086761944", "363457079"};
    vector<int> bulls = {2, 2, 2, 2, 1, 2, 1, 1, 1, 0, 2, 0, 0, 0, 2, 2, 2, 1, 2, 0, 0, 2, 2, 1, 0, 2, 1, 2, 0, 1, 2, 2, 1, 2, 0, 1, 2, 0, 1, 1, 0, 1, 2, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> guesses = {"426001", "808212", "649305", "989268", "903293", "530998", "468668", "025691", "179931", "748425", "693221", "784859", "817598", "677855", "007642", "690339", "591070", "234716", "688245", "302286", "104451", "289199", "447868", "394095", "780887", "590903", "267991", "329790", "343351", "155764", "462050"};
    vector<int> bulls = {1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 2, 1, 1, 0, 2, 1, 2, 1, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 2, 0, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> guesses = {"417779", "643283", "611113", "693003", "113208", "893075", "107187", "859993", "469331", "458205", "250909", "142103", "696848", "107602", "635821", "031947", "973602", "308676", "610765", "724333", "920683", "955027", "127707", "731738", "882277", "368411", "229277", "113102", "843492", "578571", "476062", "512844", "388591", "799756", "871509", "632048", "830447"};
    vector<int> bulls = {0, 1, 2, 0, 1, 2, 0, 2, 0, 1, 0, 0, 2, 0, 1, 2, 1, 2, 2, 0, 0, 2, 1, 1, 1, 1, 2, 2, 1, 0, 1, 2, 2, 0, 0, 1, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> guesses = {"5740", "3098", "6535"};
    vector<int> bulls = {1, 0, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> guesses = {"2431", "2168", "1540", "2086", "4869", "4247", "5436", "3508", "4569", "0063", "2009", "2869", "0932", "4000", "2061", "3415", "2479", "8160", "7880", "2464", "2030"};
    vector<int> bulls = {1, 2, 0, 2, 2, 0, 0, 0, 2, 2, 3, 3, 0, 1, 3, 0, 2, 1, 0, 2, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "2069";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> guesses = {"32929", "58452", "34747", "81970", "88090", "26180", "55362", "91876", "10290", "48302", "45389", "47024", "33787", "30275", "07507", "30529", "84316", "40066", "85807", "55580", "15576", "08715", "81165", "13849"};
    vector<int> bulls = {1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> guesses = {"413928", "078595", "811622", "018939", "712067", "209449", "846609", "749660", "363111", "889595", "559454", "141659", "647997", "787297", "763875", "482825", "385146"};
    vector<int> bulls = {1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> guesses = {"486809812", "033726199", "716564813", "276844859", "864475013", "276844453", "652022461", "296204853", "603572773", "276344853", "618243233", "557423434", "318956562", "816984833", "201044803", "211938908", "506844453", "456541853", "546444803", "179614189", "276654553", "269844883", "197454272", "272549111", "023097180", "772824158", "376844853", "276864858", "636874353", "266884898", "276844803", "276874853", "246844857", "276424617", "238344820", "276841853", "475862855", "554030364", "946261043", "090048612", "390412541", "342017154", "270791065", "285578556", "515746653", "722142813", "776850107", "156318858", "211840889"};
    vector<int> bulls = {3, 0, 4, 8, 1, 8, 0, 6, 1, 8, 2, 0, 0, 4, 5, 1, 6, 5, 5, 2, 6, 6, 1, 3, 0, 4, 8, 7, 5, 5, 8, 8, 7, 4, 4, 8, 4, 0, 2, 1, 0, 1, 2, 2, 3, 3, 3, 3, 4};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "276844853";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> guesses = {"69345052", "91008789", "43681433", "93481403", "13077521", "93981755", "93887703", "12400874", "94439776", "93960702", "63982131", "84831287", "93281753", "59363734", "93605483", "07023307", "93985196", "45707942", "14523082", "91961703", "03983703", "93641795", "93854704", "93921708", "24927976", "13483957", "95906663", "85583480", "52424767"};
    vector<int> bulls = {0, 2, 4, 6, 1, 6, 6, 0, 2, 5, 3, 1, 6, 1, 3, 1, 4, 0, 0, 6, 6, 4, 4, 6, 1, 2, 3, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "93981703";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> guesses = {"00573840", "01824988", "20553524", "05843617", "02419030", "01843494", "41341094", "00842218", "80299398", "91821423", "93700216", "13151086", "64340471", "09228043", "13795550", "47528440", "37225588", "02246076", "10718172", "95249002", "54970078", "07624252", "97855772", "75021682", "53050870", "46291032", "48384865", "18309911", "00647014", "77481644", "13249098", "08719113"};
    vector<int> bulls = {2, 3, 1, 2, 2, 2, 2, 3, 1, 3, 0, 2, 1, 3, 0, 1, 1, 3, 3, 2, 2, 3, 3, 3, 1, 3, 0, 0, 3, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "00821072";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> guesses = {"431262368", "638962936", "821504280", "536966368", "830132368", "038792796", "941271755", "586211244", "635915368", "380999068", "936989768", "767879585", "114943257", "831961176", "032966824", "734946095", "989294086", "014992368", "714366368", "094295464", "567549856", "836160143", "239562468", "833962762", "814960449", "473628348", "889457760", "566962008", "737967781", "124838972", "299808454", "631222306", "147261768", "876306625", "953067723", "138956368"};
    vector<int> bulls = {6, 4, 1, 6, 6, 2, 0, 0, 5, 3, 4, 0, 2, 4, 3, 3, 0, 6, 5, 2, 0, 3, 5, 6, 4, 2, 2, 4, 3, 1, 0, 3, 3, 1, 1, 5};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "834962368";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> guesses = {"73", "54", "52", "49", "55", "58", "52", "33", "56", "27", "57"};
    vector<int> bulls = {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> guesses = {"19404", "25605", "50016", "92473", "77040", "00934", "26742", "25625", "52417", "17195", "14705", "20278", "50094", "22113", "11247", "91722"};
    vector<int> bulls = {0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> guesses = {"169990", "344783", "384182", "374904", "675775", "370334", "818188", "395737", "243139", "279843", "350093", "670032", "457265", "928034", "109195", "781624", "342312", "535439", "989856", "338673", "445192", "733542", "315735", "575034", "075861", "188892", "787862", "788836", "565932", "332432", "042300", "861115", "366697"};
    vector<int> bulls = {0, 1, 2, 2, 2, 3, 0, 3, 1, 2, 1, 3, 0, 1, 0, 0, 2, 2, 1, 1, 2, 1, 3, 3, 3, 2, 2, 2, 3, 3, 0, 0, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "375832";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> guesses = {"8630", "7340", "4632", "2117", "9723", "5424", "0210", "4593", "5505", "5611", "7001", "1851", "0501", "2502", "0521", "0720", "8569", "1991", "2731", "6034", "6276", "9419", "6200", "8963", "3875", "5577", "2721", "2923", "6599", "9489", "2594", "1379", "9860", "2373", "9870", "5941", "2259", "9575", "3003", "2025", "8055", "0061", "0592", "7370", "7042"};
    vector<int> bulls = {1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "5090";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> guesses = {"277410", "777586", "247809", "458549", "332799", "254694", "727686", "214518", "204716", "482786", "859270", "552216", "057481", "992888", "977764", "244266", "754202", "934829", "123158", "552115", "654789", "364026", "677306", "208282", "250233", "950299", "628282", "291883", "076789", "457295", "657766", "747916", "615196", "999146", "354237", "852900", "759296", "757278", "281086", "045085", "706216", "627732", "242955", "941827", "458386", "638777", "554268", "206963"};
    vector<int> bulls = {2, 3, 2, 1, 0, 2, 3, 1, 2, 2, 2, 3, 3, 1, 1, 3, 2, 0, 0, 1, 2, 1, 2, 3, 3, 2, 2, 2, 1, 3, 3, 2, 1, 1, 2, 1, 3, 3, 3, 1, 2, 1, 1, 0, 3, 0, 2, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "257286";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> guesses = {"471", "510", "296", "799", "557", "775", "924", "957", "655", "374", "457", "653", "938", "562", "637", "319", "025", "659", "444", "478", "794", "618", "328", "943", "913", "867", "634", "790", "648", "960", "824", "282", "328", "675", "174", "727"};
    vector<int> bulls = {0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "758";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> guesses = {"378792274", "388543419", "758731394", "478466883", "354795144", "523783783", "378648189", "308925511", "378273784", "672375744", "344773287", "997932719", "958704229", "456373932", "781484553", "412045755", "748073744", "378124884", "362861040", "371623485", "374573585", "378773272", "178384784", "256164986", "964959190", "996308278", "312777787", "338771088", "378748684", "377070784", "978573784", "120677168", "678144888"};
    vector<int> bulls = {5, 3, 3, 3, 3, 4, 4, 2, 8, 4, 5, 1, 2, 2, 0, 1, 5, 5, 1, 4, 5, 6, 5, 1, 0, 0, 5, 5, 6, 6, 7, 1, 3};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "378773784";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> guesses = {"8310602", "8413363", "0755528", "4137677", "3330572", "5759054", "4974668", "1795692", "3945645", "0316973", "1469140", "5111375", "5376341", "4796022"};
    vector<int> bulls = {3, 0, 0, 3, 3, 0, 2, 3, 1, 3, 0, 1, 2, 4};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "4396672";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> guesses = {"965342", "990401"};
    vector<int> bulls = {1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> guesses = {"2959594", "5231410", "1867869", "1167819", "5995316", "1867811", "1860839", "1868819", "1837819", "2973704", "8387679"};
    vector<int> bulls = {0, 1, 6, 6, 1, 6, 5, 6, 6, 0, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "1867819";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> guesses = {"15097", "49567", "02767", "49267", "48129", "89509", "53655", "03069", "49367", "45057", "60469", "73266", "44431", "12137", "08645", "63717", "15889", "48160", "15282", "12234", "48247", "96672", "10434", "46116", "93563"};
    vector<int> bulls = {2, 3, 2, 3, 2, 0, 0, 2, 3, 3, 1, 1, 1, 1, 1, 1, 0, 3, 0, 0, 3, 0, 0, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "48067";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> guesses = {"05285091", "23111418", "33055055", "99463408", "10183534", "76974773", "98845853", "05668899", "72911098", "05441597", "14804575", "78078488", "76119311", "67840093", "08265926", "53283038", "88630557", "57106227", "65192060", "18938959", "28405835", "75413301", "98134493"};
    vector<int> bulls = {2, 0, 2, 0, 1, 1, 0, 0, 2, 0, 2, 2, 2, 1, 0, 2, 0, 0, 1, 0, 1, 1, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> guesses = {"606207", "534863", "246217", "796411", "353408", "636015", "871158", "319257", "685414", "467896", "727506", "822363", "073413", "978422", "072010", "579411", "705573", "085787", "930247", "650405", "563845", "980399", "903488", "941269", "685717", "192375", "575404", "765872", "363121"};
    vector<int> bulls = {1, 0, 2, 2, 1, 1, 0, 1, 3, 1, 0, 0, 2, 2, 1, 2, 1, 2, 2, 1, 1, 1, 2, 1, 3, 0, 2, 2, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "965417";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> guesses = {"58484081", "01069077", "52903740", "83315314", "44132426", "65818585", "86957292", "30390725", "05135525"};
    vector<int> bulls = {1, 1, 1, 1, 1, 0, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> guesses = {"37", "92", "63", "51", "98", "59"};
    vector<int> bulls = {0, 0, 1, 0, 0, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "69";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> guesses = {"6799", "3885", "8327", "3137", "9781", "7294", "3397", "4737", "6402", "6709", "3387", "1397", "4530", "8392", "3038", "4237", "2392", "3336", "8081", "6638", "6357", "8937", "4537", "3347", "3857", "5339", "3332", "8387", "8675", "3950", "9330", "9217", "3331", "9080", "6347", "3335", "5681", "3374", "3037", "6330", "3647", "6346"};
    vector<int> bulls = {0, 1, 2, 3, 0, 0, 3, 2, 0, 0, 3, 2, 1, 1, 2, 2, 1, 3, 0, 1, 2, 2, 2, 3, 2, 2, 3, 2, 0, 1, 2, 1, 3, 0, 2, 3, 0, 2, 3, 2, 2, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "3337";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> guesses = {"31405", "44267", "13882", "26625", "07049", "68501", "91633", "19476", "93576", "04535"};
    vector<int> bulls = {2, 1, 0, 1, 0, 0, 1, 2, 2, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "94475";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> guesses = {"580763900", "763921852", "384319702", "940679788", "087573233", "721389363", "300896049", "345319870", "198502806", "439046400", "457807472", "280263561", "749665017", "539404964", "964991399", "644439940", "922747367", "959462933", "288413041", "229236665", "522263083", "926687915", "276465562", "730216895", "529640134", "384286141", "863081228", "852279602", "739523899", "117619911", "085109364", "549071168", "450639301", "714183014", "517917494", "719830325", "506064848", "747691704", "209980624", "075457380", "469368989", "170920105", "900321127", "037687521"};
    vector<int> bulls = {1, 2, 0, 0, 0, 2, 1, 1, 2, 0, 1, 2, 0, 2, 1, 0, 2, 0, 0, 2, 2, 2, 1, 2, 1, 2, 2, 1, 2, 0, 1, 2, 0, 1, 2, 0, 2, 0, 1, 1, 1, 0, 0, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "593287869";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> guesses = {"655063096", "617213976", "389044523", "744118674", "018866066", "615723769", "677756478", "061325306", "600913140", "615213176", "011213476", "615543446", "406835972", "279497033", "946579449", "715523675", "911213471", "615213172", "754646780", "615332473", "117283076", "616213476", "210251866", "875002748", "806737513", "602213672", "316237872", "262000871", "690813477", "616243672", "615723496"};
    vector<int> bulls = {4, 7, 0, 2, 2, 4, 3, 1, 3, 8, 7, 6, 1, 0, 1, 4, 6, 7, 0, 5, 5, 8, 3, 1, 0, 5, 3, 1, 5, 5, 6};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "615213476";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> guesses = {"035515", "130226", "024831", "275375", "184983", "595236", "291926", "020937", "295255", "112677", "395760", "275316", "595816", "593646", "215016", "695796", "081286", "346492", "430561", "245244", "296915", "196206", "905849", "416836", "716036", "275210", "110246", "804296", "644103", "223416", "835589", "275116", "827756", "305819", "578560", "529602", "309459", "495611", "393266", "653389", "995218", "613537", "495129", "904651", "256289", "144006", "160144", "635210"};
    vector<int> bulls = {2, 2, 0, 2, 0, 4, 3, 0, 4, 0, 2, 4, 4, 2, 4, 3, 2, 0, 0, 3, 3, 3, 1, 1, 1, 4, 2, 2, 0, 3, 1, 4, 1, 2, 0, 0, 0, 3, 3, 0, 4, 0, 2, 0, 2, 1, 0, 3};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "295216";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> guesses = {"284191", "225885", "523057", "702271", "516202", "246981", "549176", "933931", "227578", "203277", "893238", "427408", "033588", "773537", "060911", "999049", "229820", "943683", "957214", "488698", "128352", "541455", "253277", "045274", "293224", "263868", "017039", "401866", "135193", "489888", "263385", "084119", "327218", "685738", "857650", "104276", "483221", "165089", "850298", "992992", "760171"};
    vector<int> bulls = {1, 3, 2, 1, 1, 2, 0, 1, 3, 3, 3, 2, 3, 1, 0, 0, 2, 2, 1, 1, 1, 0, 3, 1, 3, 3, 0, 0, 0, 2, 3, 0, 3, 1, 0, 1, 2, 1, 2, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "223288";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> guesses = {"163557", "670599", "988696", "959494", "940395", "160582", "367539"};
    vector<int> bulls = {2, 4, 2, 2, 3, 3, 3};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "960599";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> guesses = {"5435", "5257", "5128", "6935", "1846", "5919", "4338", "2915", "8349", "2861", "3642", "6724", "5404", "8415", "7571"};
    vector<int> bulls = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> guesses = {"02642813", "47651066", "36496532", "63332647", "63672766", "52132467", "86885784", "80314871", "76737209", "35483821", "14725705", "23124469", "22202366", "08639899", "08622476", "96429285", "61216722", "19835060"};
    vector<int> bulls = {3, 2, 0, 3, 3, 3, 0, 3, 1, 1, 0, 1, 3, 3, 3, 0, 0, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "00332866";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> guesses = {"311121122", "090381821", "642517876", "657959762", "190882388", "006173498", "602570167", "876039279"};
    vector<int> bulls = {1, 2, 0, 0, 0, 0, 0, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> guesses = {"60443263", "92200517", "14291929", "54310352", "09416508", "14226953", "38147510", "91714010", "54202493", "23066348", "91283216", "82087150", "21412347", "00036731", "37371589", "12128675", "43719485", "98130429", "82240151", "64160191", "35041523", "72547638", "47766947", "49279132", "09635797", "32487622", "21311589", "35631844", "14313167", "97109514", "02262564", "07883521", "36418319"};
    vector<int> bulls = {0, 2, 1, 0, 0, 0, 1, 0, 2, 1, 0, 2, 0, 2, 2, 1, 2, 2, 1, 0, 2, 2, 0, 2, 0, 2, 1, 1, 0, 2, 1, 0, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "32009439";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> guesses = {"385679", "713185", "844933", "814600", "761935", "246813", "526606", "942612", "918766", "588962", "505143", "984571", "378797", "886053", "698543"};
    vector<int> bulls = {0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> guesses = {"3926", "4896", "8146", "6386", "3610", "0739", "3384", "1817", "6991", "3039", "4925", "6088", "3412", "0315", "5263", "3082", "4644", "7144", "0287", "3488", "6586", "3988", "3540", "3206", "3916", "5485", "2482", "3906"};
    vector<int> bulls = {2, 1, 1, 2, 2, 0, 2, 0, 0, 1, 0, 1, 1, 0, 0, 2, 1, 0, 1, 2, 2, 2, 1, 2, 2, 1, 1, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "3686";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> guesses = {"151450145", "028105369", "727543749", "633454051", "227048819", "405745683", "498540919", "624544189", "293596279", "468437188", "658345302", "418616781", "417098722", "129285935", "582587389", "133214840", "482848637", "426849179", "728511849", "676412415", "819304147", "625337601", "422565370", "122434689", "413887481", "323318309", "635288902", "527575849", "468919389", "784200802"};
    vector<int> bulls = {0, 5, 4, 0, 3, 4, 5, 5, 2, 3, 4, 3, 1, 2, 4, 0, 2, 4, 4, 0, 0, 1, 5, 3, 2, 3, 0, 4, 5, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "428545389";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> guesses = {"73229397", "65427208", "20480396", "20420356", "15905926", "61879698", "70420396", "80820396", "83083616", "25620396", "56120344", "10423206", "20425396"};
    vector<int> bulls = {3, 2, 7, 7, 1, 1, 7, 6, 1, 6, 3, 4, 7};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "20420396";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> guesses = {"68", "42", "52", "06", "50", "35", "88", "85", "26", "09", "54", "71", "08", "48", "88", "02", "50", "07", "00", "94", "53", "87", "84", "46", "30", "72", "97", "22", "97", "05", "36", "92", "89", "38", "22", "12", "44", "59", "97", "89", "42", "45", "85", "85", "92"};
    vector<int> bulls = {0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "82";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> guesses = {"47", "56", "65", "23", "24", "33", "93", "54", "32", "30", "40", "96", "65", "33", "45", "13", "93", "96", "68", "21", "73", "69", "64", "14", "35", "23", "93", "23", "74", "69", "82", "13", "13", "28", "41", "05", "90", "62", "90", "60", "65", "21", "48", "93"};
    vector<int> bulls = {0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "63";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> guesses = {"2943153", "9518051", "3336459", "1486459", "2423621", "4738938", "6164119", "9186451", "2237470", "3006739", "1586555", "5595121", "1746451", "1788363", "2055793", "1616459", "6808471", "5469639", "3186351", "8086933", "3589151", "1567041", "1479551", "8538451", "1516356", "8005954", "9275661"};
    vector<int> bulls = {1, 3, 3, 5, 1, 0, 0, 5, 1, 1, 5, 2, 5, 2, 0, 4, 2, 0, 4, 2, 4, 3, 3, 4, 4, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "1586451";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> guesses = {"22315", "11486", "90915", "81566", "98411", "04697", "12031", "45056", "91214", "84317"};
    vector<int> bulls = {2, 2, 1, 2, 1, 0, 0, 1, 2, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> guesses = {"97516417", "03334377", "73665225", "76075094", "73764836", "41495945", "86814908", "36705107", "35598293", "14367384", "30614635", "34101500", "86494138", "47677097", "43165773", "86571352", "72300107", "79602165", "69840125", "37968882", "01510038", "32850283", "02189370", "43786916", "64456997", "36633871", "76316055", "48763543", "80223482", "86329644", "73652702", "42949686", "74754371", "24358260", "61160908", "82101920", "99923715", "13944718", "06749712", "09991667", "70794938", "81846649", "31755826", "37218937", "24403410", "71428193", "84614225", "69275790", "05992551", "57733260"};
    vector<int> bulls = {0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "25287848";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> guesses = {"59", "17", "02", "61", "00", "85", "53", "69", "15", "59", "31", "68", "85", "31", "53", "83", "87", "79", "79", "59", "70", "69", "09", "81", "86", "87", "04", "29", "47", "83", "66", "09", "39", "16", "29", "93", "77", "51", "31", "19", "77", "82", "04", "63", "74", "92", "79", "99", "85", "49"};
    vector<int> bulls = {1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "89";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> guesses = {"840944", "866406", "423329", "979029", "769583", "750468", "595513", "724433", "199652", "813448", "326333", "804268", "220429", "719993", "725429", "619347", "840376", "129122", "737329", "306302", "010813", "721352", "340113", "742025", "903507", "046215", "318566", "947601", "810166", "873530", "373560", "020522", "713325", "704009", "950063", "666487", "727803", "224442", "670598", "707151", "872594", "540888", "711383", "750620", "694843", "796720"};
    vector<int> bulls = {1, 0, 3, 1, 2, 2, 1, 3, 0, 0, 3, 0, 3, 2, 3, 1, 2, 2, 3, 1, 2, 3, 2, 2, 0, 0, 0, 0, 1, 0, 0, 3, 3, 1, 2, 0, 3, 1, 1, 1, 0, 1, 3, 3, 1, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "720323";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> guesses = {"59343198", "27859668"};
    vector<int> bulls = {3, 3};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> guesses = {"02187687", "09323647", "76002477", "08181390", "90999675", "05121127", "66321067", "08002687", "14532891", "14453937", "48184587", "04514858", "01184667", "08082687", "76413767", "03622753", "15295879", "82151928", "42656002", "30561200", "12640010", "09184627", "36584694", "98874717", "62166138", "67117041", "89674598", "27307230", "48184387"};
    vector<int> bulls = {6, 3, 1, 4, 1, 3, 1, 5, 0, 1, 6, 2, 6, 6, 1, 1, 0, 1, 0, 0, 0, 6, 3, 3, 1, 1, 1, 0, 6};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "08184687";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> guesses = {"634146", "728952", "219839", "938142", "935494", "632142", "655842", "119396", "534142", "636082"};
    vector<int> bulls = {5, 1, 0, 4, 1, 5, 3, 0, 5, 3};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "634142";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> guesses = {"213153", "212076", "881573", "334297", "790103", "621225", "543980", "564019", "891742", "585033", "122651", "426627", "310950", "954344", "421018", "125560", "621441", "306042", "890280", "348463", "938270", "625512", "120549", "562847", "286168", "921444", "654672", "911806", "862787", "133744", "769162", "851734", "721802", "416531", "025558"};
    vector<int> bulls = {0, 0, 2, 0, 0, 2, 0, 0, 3, 0, 1, 2, 0, 1, 3, 2, 3, 2, 0, 0, 0, 3, 3, 1, 0, 3, 1, 1, 0, 1, 1, 1, 3, 2, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "421542";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> guesses = {"786568898", "207137041", "983634045", "531139799", "591000359", "534365413", "855255853", "594554433", "976722540", "993465260", "584659312", "598736013", "366685976", "067431332", "724219366", "574455913", "515755014"};
    vector<int> bulls = {0, 1, 1, 1, 1, 5, 3, 4, 1, 1, 4, 5, 1, 0, 2, 6, 6};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "524755013";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> guesses = {"90536", "06936", "73320", "35321", "93171", "79664", "27997", "80626", "66213", "90546", "50231", "97593", "97536", "82479", "92037", "82357", "49773"};
    vector<int> bulls = {2, 2, 0, 0, 0, 0, 2, 2, 0, 1, 2, 0, 1, 1, 2, 2, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "80937";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> guesses = {"0278592", "2334308", "7608702", "0718571", "6878202", "4118543", "0978502", "5378282", "0778502", "0238502", "6129732", "9928552", "7278582", "5463963", "6606369", "7678502", "0078504", "0368481", "2384297", "2194286", "0538636", "0178500", "8164516", "1282930", "9078404", "0278800", "8278502", "5208962", "0378105", "0237005", "0968402"};
    vector<int> bulls = {6, 1, 3, 3, 4, 2, 6, 3, 6, 6, 1, 3, 5, 0, 0, 5, 5, 2, 0, 0, 2, 5, 1, 1, 3, 5, 6, 3, 4, 3, 4};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "0278502";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> guesses = {"449", "361", "743", "537", "548", "394", "247", "521", "348", "807", "141", "650", "519", "543", "569", "759"};
    vector<int> bulls = {2, 0, 1, 1, 2, 0, 1, 1, 1, 0, 1, 0, 2, 2, 2, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "549";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> guesses = {"481586", "463586", "441858", "418474", "459586", "429286", "630337", "429587", "362286", "049194", "929551", "299580", "425586", "429582", "571865", "428286", "496576", "054616", "824687", "829485", "459688", "409586", "128309", "162555", "929386", "429266", "329523", "001872", "357370", "196388", "453506", "115834", "439588", "303354", "429583", "421582", "006435", "439984", "438581", "696791", "141341"};
    vector<int> bulls = {4, 4, 1, 1, 5, 5, 0, 5, 2, 1, 3, 3, 5, 5, 0, 4, 3, 1, 2, 3, 3, 5, 1, 1, 4, 4, 3, 0, 0, 1, 3, 0, 4, 0, 5, 4, 0, 3, 3, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "429586";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> guesses = {"004837865", "982000026", "003685014", "573296627", "584167150", "932896072", "280040526", "902033290", "192007850", "542363020", "302807112", "777176251", "360811950", "885983942"};
    vector<int> bulls = {0, 6, 1, 1, 3, 3, 3, 5, 3, 6, 1, 0, 1, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "982063020";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> guesses = {"76", "11", "17", "51", "63", "61", "11", "16", "48", "70", "07", "90", "71", "10", "24", "74", "13", "18", "46", "09", "07", "51", "31", "07", "41", "05", "06", "07", "61", "44", "78", "99", "26", "31", "71", "73", "33", "76", "11"};
    vector<int> bulls = {0, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "01";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> guesses = {"69942817", "35247543"};
    vector<int> bulls = {0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> guesses = {"72037697", "62036715", "32186015", "72526915", "47016715", "07411725", "52636015", "49336715", "72076715", "62036715", "22421733", "72036813", "72030010", "72876758", "75013819", "32536165", "82495831", "72600016", "72036786", "57559721", "72036705", "10886175", "52030596", "84336715", "52037274", "72132717", "72136725", "43269321", "76033015", "32437719", "54032715", "78036715", "34223110", "96228459", "78045715", "58302198", "72016717", "91481607"};
    vector<int> bulls = {4, 7, 4, 5, 5, 2, 5, 5, 7, 7, 2, 6, 5, 4, 3, 4, 1, 3, 6, 1, 7, 2, 3, 5, 3, 5, 6, 0, 5, 4, 5, 7, 1, 0, 5, 0, 6, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "72036715";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> guesses = {"004325", "906510", "188564", "952538", "816369", "899869", "909251", "855899", "939281", "599157"};
    vector<int> bulls = {0, 3, 0, 1, 3, 2, 1, 2, 1, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "916819";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> guesses = {"769583769", "741289607", "381817723", "019171454", "820654279", "138453320", "198129928", "850466048", "523724119", "598854739", "812898718", "160177511", "489240797", "978242368", "416891656", "879083911", "856287247", "213649219", "663561793", "807606501", "210957457", "017630304", "565486942", "554746195", "019566640", "387415410", "785355309", "358335738", "216292249", "701868136", "828982761", "969075858"};
    vector<int> bulls = {1, 2, 2, 1, 2, 2, 2, 2, 0, 0, 1, 2, 0, 1, 1, 1, 2, 1, 0, 1, 2, 2, 1, 0, 2, 0, 0, 1, 0, 0, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "030687628";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> guesses = {"3591"};
    vector<int> bulls = {1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> guesses = {"96411098", "41188096", "24826699", "27136690", "26374617", "37158425", "02988563", "80400384", "91229899", "70844545", "33016679", "25131533", "64375978", "91216903", "64005653", "21716649", "24126612", "41118482"};
    vector<int> bulls = {1, 3, 6, 5, 2, 1, 0, 0, 4, 0, 3, 2, 0, 2, 1, 5, 5, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "21126699";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> guesses = {"194582317", "737167816", "941046314", "380912509", "367436318", "724762129", "320803338", "509625560", "755059219", "714662216", "706982581", "926598530", "602062252", "914704800", "709152218", "794154619", "304062261", "201407909", "664113215", "825333862", "704568261", "714168207", "977263071", "623453082", "204668212", "523191396", "355061211", "204361041", "203079179", "704022373", "240292791"};
    vector<int> bulls = {3, 3, 2, 2, 1, 5, 0, 1, 5, 6, 3, 0, 5, 1, 5, 4, 6, 2, 3, 0, 5, 4, 1, 0, 5, 0, 4, 3, 3, 5, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "704062219";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> guesses = {"250", "370", "888", "310", "141", "255", "619", "955", "152", "176", "878", "340", "740", "956", "312", "357", "979", "750", "354", "353", "380", "716", "551", "992", "730", "650", "400", "653", "101", "870", "656", "182", "665", "109", "160", "222", "656", "381", "623", "382", "330"};
    vector<int> bulls = {2, 2, 0, 2, 0, 1, 0, 1, 1, 0, 0, 2, 1, 1, 1, 2, 0, 2, 2, 2, 2, 0, 1, 0, 1, 2, 1, 1, 0, 1, 1, 0, 0, 0, 1, 0, 1, 1, 0, 1, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "350";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> guesses = {"937", "669", "539", "292", "273", "071", "396", "790", "437", "762", "866", "802", "222", "222", "936", "606", "322", "524", "727"};
    vector<int> bulls = {0, 0, 0, 1, 0, 0, 0, 1, 0, 2, 0, 1, 2, 2, 0, 0, 2, 1, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "722";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> guesses = {"38989", "82831", "36830", "12628", "62021", "82986", "74171", "86881", "83981", "86186", "84827", "36130", "81171", "34423", "09111", "82105", "82627", "59189", "74321", "83541"};
    vector<int> bulls = {0, 3, 0, 2, 3, 2, 2, 2, 2, 2, 2, 1, 3, 1, 2, 3, 3, 1, 2, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "82121";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> guesses = {"390084", "131921", "258859", "159750", "370867", "689263", "983043", "384458", "422033", "046895", "920452", "874961", "630121", "687339", "503002", "499243", "996746", "105261", "460648", "020564", "423321", "071837", "724732", "779485", "911397", "196361", "470908", "563927", "554559", "999861", "410928", "953456", "132806", "603275", "818756", "131651", "658168", "900373", "371104", "330220", "853526", "276346"};
    vector<int> bulls = {0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "675692";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> guesses = {"269294751", "182029877", "124101300", "086196845", "068820126", "560244885", "618671321", "512052321", "616827828", "603356494", "598879826", "820560047", "432044802", "068726191", "625218725", "846297367", "204982104", "480605216", "693091079", "120592451", "807499249", "660364009", "909604811", "140324955", "200754526", "279026395", "680311941", "415087783", "368509933", "660754034", "736851645"};
    vector<int> bulls = {2, 2, 1, 1, 1, 3, 3, 3, 3, 1, 2, 2, 3, 1, 3, 0, 1, 1, 2, 3, 0, 3, 3, 2, 3, 1, 3, 2, 0, 3, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "620084821";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> guesses = {"61", "04", "16", "33", "95", "03", "46", "73", "93", "23", "29", "14", "45", "76", "80", "22", "18", "23", "28", "53", "34", "76", "15", "61", "17", "19", "14", "78", "69", "84", "10", "34", "33", "44", "39", "93", "33", "31", "67"};
    vector<int> bulls = {0, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1, 1, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "13";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> guesses = {"475", "455", "725", "419", "625", "480", "823", "316", "035", "419", "075", "492", "411", "370", "497", "025", "479", "007", "410", "115", "017", "011", "461", "731", "473", "015", "091", "743", "417", "162", "485", "925", "437", "978", "485", "555", "435", "956", "160", "450", "420", "414", "825", "598", "692", "211", "862", "562", "266"};
    vector<int> bulls = {2, 2, 1, 2, 1, 1, 0, 1, 1, 2, 1, 1, 2, 0, 1, 1, 1, 0, 2, 2, 1, 1, 1, 0, 1, 2, 0, 0, 2, 0, 2, 1, 1, 0, 2, 1, 2, 0, 0, 1, 1, 2, 1, 0, 0, 1, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "415";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> guesses = {"48501", "00361", "97888", "76931", "98790", "98588", "98337", "66525", "23346", "03580", "48584", "08519", "95581", "07544", "17844", "88458", "96581", "98181", "16326", "91048", "98197", "06954", "93601", "98582", "20076", "82357", "18584", "92681", "85985", "38835", "97540", "99498", "01718", "29579", "80434", "37582", "11531", "98282", "88558"};
    vector<int> bulls = {3, 1, 2, 1, 2, 4, 2, 1, 0, 2, 3, 2, 4, 1, 0, 1, 4, 4, 0, 1, 2, 0, 2, 4, 0, 0, 3, 3, 1, 1, 2, 1, 0, 1, 0, 2, 2, 3, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "98581";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> guesses = {"3132421", "9132172", "3472978", "1972978", "2472976", "1750680", "8283964", "8556931", "4432919"};
    vector<int> bulls = {1, 3, 5, 4, 5, 0, 1, 1, 3};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> guesses = {"831977", "746578", "149885", "433672", "698661", "287921", "238820", "866090", "113629", "147831", "905150", "238626", "782809"};
    vector<int> bulls = {1, 0, 1, 2, 1, 2, 2, 0, 3, 2, 0, 3, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> guesses = {"82612174", "86148973", "52020395", "40516526", "19523529", "87283302", "36735386", "65876853", "03225472", "51228872", "13599029", "03270678", "33232309", "59323872", "13623567", "32242972", "52526373", "55134438", "51273373", "53023070", "91225382", "53128172", "37523785", "07323372", "84150458", "43223773", "83329394", "54350826", "55222377", "81605171", "23250380", "22733996", "54127372", "33423863", "63225362", "32195632"};
    vector<int> bulls = {1, 1, 3, 0, 2, 4, 1, 0, 5, 5, 1, 3, 3, 5, 3, 3, 4, 1, 5, 5, 4, 5, 2, 5, 0, 5, 3, 1, 5, 1, 3, 1, 5, 3, 5, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "53223372";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> guesses = {"785517", "941417", "585522", "845039", "680517", "090611", "050515", "608685", "788567", "233510", "784517", "590577", "757493", "083537", "722947", "878378", "671551", "780416", "707114", "339998", "780567", "480517", "235158", "959111", "781510", "621510", "744327", "818497", "252832", "747948"};
    vector<int> bulls = {5, 2, 2, 0, 5, 2, 3, 0, 4, 2, 5, 3, 1, 3, 2, 0, 1, 4, 2, 0, 5, 5, 0, 1, 4, 2, 2, 1, 0, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "780517";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> guesses = {"6669348", "9831929", "5157926", "1261279", "6129225", "0568368", "9918715", "5648225"};
    vector<int> bulls = {1, 3, 2, 2, 3, 0, 0, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> guesses = {"409414", "947305", "622205", "197098", "448936", "306349", "497966", "686003", "087972", "106086", "431228", "101418", "207898", "405200", "110806", "687537", "944335", "697088", "627533"};
    vector<int> bulls = {1, 2, 1, 2, 2, 1, 2, 0, 2, 2, 0, 2, 2, 1, 1, 2, 2, 1, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "107935";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> guesses = {"71", "77", "25", "62", "27", "24", "01", "28", "31", "81", "57", "75"};
    vector<int> bulls = {0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> guesses = {"980", "635", "565", "981", "088", "940", "192", "984", "951", "855", "905", "285", "905", "031", "922", "261", "924", "902", "988", "432", "105", "949", "982", "986", "179", "695", "287", "974", "299", "305", "185", "685", "984", "513", "897", "610", "341", "156", "270"};
    vector<int> bulls = {2, 1, 1, 2, 1, 1, 0, 2, 1, 1, 2, 2, 2, 0, 1, 0, 1, 1, 2, 0, 1, 1, 2, 2, 0, 1, 1, 1, 0, 1, 2, 2, 2, 0, 0, 0, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "985";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> guesses = {"669", "800", "151", "281", "871", "669", "576", "164", "069", "643", "790", "829", "449", "312", "275", "104", "042", "732", "645", "293", "963"};
    vector<int> bulls = {0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "773";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> guesses = {"018025", "628321", "415200", "518005", "668011", "213572", "132796", "761940", "714559"};
    vector<int> bulls = {2, 1, 2, 2, 1, 2, 1, 2, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<string> guesses = {"53211", "00710", "68815", "93208", "39415", "59045", "10545", "14927", "28555", "78047", "29648", "49940", "37561", "27335", "76435", "79548", "75635", "29535", "77544", "70544", "88350", "71715", "72939", "07650", "09535", "44447"};
    vector<int> bulls = {0, 0, 1, 0, 2, 3, 3, 0, 2, 2, 2, 2, 1, 1, 2, 4, 2, 3, 3, 3, 0, 2, 1, 0, 3, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "79545";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<string> guesses = {"23865", "95679", "97208", "97258", "95771", "42737", "95235", "97405", "45608", "78008", "39702", "95238", "77198", "95205", "82619", "95228", "07570", "94808", "93458", "49030", "98407", "95608", "55206"};
    vector<int> bulls = {0, 2, 4, 3, 2, 0, 3, 2, 3, 2, 1, 4, 1, 4, 0, 4, 0, 3, 2, 0, 2, 4, 3};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "95208";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<string> guesses = {"593264191", "643114160", "155197045", "062690200", "282551469", "317983978", "451852197", "397648247", "025724523", "785697877", "136969609", "079219167", "858775441", "042882441", "800836535", "694177751", "018548094", "765981721", "142390825", "292726738", "403296058"};
    vector<int> bulls = {2, 0, 2, 0, 2, 1, 0, 1, 1, 2, 2, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<string> guesses = {"239", "963", "796", "499", "096", "342", "096", "963", "040", "990", "452", "596", "488", "509", "958", "896"};
    vector<int> bulls = {0, 1, 2, 1, 2, 0, 2, 1, 0, 2, 0, 2, 0, 0, 1, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "996";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<string> guesses = {"19342219", "58956635", "58676652", "88676575", "23387448", "42063472", "38635406", "05527183", "58665672", "53676682", "05632660", "64616652", "58576672", "72661699", "08676072", "58675672", "58779646", "58674672", "28528251", "16684572", "47783115", "48122673", "38976272", "56776172", "88584429", "26316073", "53671405", "39676672", "58676677", "54808102", "08696672", "68676672"};
    vector<int> bulls = {0, 4, 7, 5, 0, 2, 2, 0, 6, 6, 2, 4, 7, 2, 6, 7, 4, 7, 1, 3, 0, 3, 5, 5, 1, 2, 3, 6, 7, 2, 6, 7};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "58676672";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<string> guesses = {"376381", "599419", "792819", "130880", "455642", "401783", "425771", "303677", "420791", "731839", "737351", "462113", "873681", "432831", "433232", "431826", "443231", "833384", "233531", "931832", "234781", "963711", "963531", "433853", "698339", "458323", "464795", "465871", "967842", "261711", "333331", "729609", "138034", "037791", "453681", "436531", "423732"};
    vector<int> bulls = {1, 0, 0, 1, 1, 2, 3, 1, 3, 2, 2, 1, 2, 4, 4, 2, 4, 2, 4, 2, 3, 3, 3, 3, 1, 1, 2, 2, 0, 2, 4, 0, 2, 3, 3, 4, 4};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "433731";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<string> guesses = {"435", "450", "865", "837", "215", "832", "335", "884", "831", "805", "880", "394", "317", "516", "068", "735"};
    vector<int> bulls = {2, 0, 2, 2, 1, 2, 2, 1, 2, 2, 1, 0, 0, 0, 0, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "835";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<string> guesses = {"40", "06", "98", "94", "69", "68", "85", "11", "41", "68", "34", "38", "11", "96", "16", "56", "78", "48", "28", "86", "88", "78", "88", "80", "88", "67", "73", "26", "57", "90", "29", "81", "02", "57", "27", "17", "34", "77", "98", "03", "86", "28", "60", "49", "19", "47", "56", "28", "71", "66"};
    vector<int> bulls = {0, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "18";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<string> guesses = {"747331", "548667", "254638", "029098", "042917", "049619", "806986", "112866", "273219", "412299", "810588", "086532", "070789", "781773", "404792", "749805", "687159", "332826", "006843", "379460", "507755", "984697", "682606", "088155", "096075", "900255", "023527", "000295", "945144", "069629", "582792", "301779", "000664", "844722", "219404", "891978", "771077", "855137", "764394", "038979"};
    vector<int> bulls = {1, 0, 0, 1, 2, 2, 1, 1, 1, 2, 0, 1, 2, 0, 1, 0, 2, 1, 2, 0, 2, 0, 1, 2, 1, 2, 1, 2, 0, 2, 1, 2, 2, 0, 0, 0, 0, 0, 1, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "002359";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<string> guesses = {"70053187", "96872022", "09456705", "37652239", "26413685", "38880820", "88963840", "05462340", "00433040", "00466840", "50493714", "50334949", "36163822", "47822204", "99331128", "40983880", "56642935", "83468310", "03163840", "06218847", "00467849", "47462846", "65343392", "06863870", "91263244", "32891604", "00463860", "97363845", "93255205", "20966404"};
    vector<int> bulls = {2, 0, 2, 0, 2, 2, 5, 5, 6, 7, 3, 2, 3, 0, 0, 4, 0, 3, 6, 3, 6, 4, 1, 5, 3, 0, 7, 4, 0, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "00463840";
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<string> guesses = {"76", "60", "43", "64", "17", "69", "49", "46", "69", "86", "22", "63", "36", "72", "34", "96"};
    vector<int> bulls = {1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "66";
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<string> guesses = {"3998366", "3994578", "4522004", "8288478", "7102772", "7052893", "9361265", "3952579", "9903499", "3990095", "2961842", "8325287", "7635595", "0174601", "9312269", "9863619", "4600176", "0849463", "7443975", "7300108", "1653146", "5417305", "1345970", "1583721", "1987119", "2555617", "3694138", "7534045", "1850080", "8084479", "0743105", "3376766", "3007821", "4324306", "4726889", "7812623", "8738304", "7331357", "9012609", "4674141", "3893448", "4447705"};
    vector<int> bulls = {0, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "6577552";
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<string> guesses = {"92329", "90212", "36271", "53220", "92583", "91386", "01507", "02504", "07585", "37097", "72141", "32983", "49899", "30725", "11164", "35723", "35533", "32327", "35555", "91473", "62441", "47168", "21543", "95746", "42923", "30863"};
    vector<int> bulls = {2, 0, 1, 1, 3, 0, 1, 2, 1, 1, 1, 3, 0, 2, 0, 3, 3, 3, 2, 1, 1, 0, 2, 0, 3, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "32523";
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<string> guesses = {"19884556", "95998374", "42236850", "86874374", "25374780", "73674638", "75660801", "97752748", "47033363", "95330743", "97392203", "79301922", "75219728", "85877348", "92172875", "05079353", "49502457", "95250340", "09522070", "35317391", "85478395", "88775378", "95168571", "75859373", "51079589", "19992934", "13314878", "96822739", "71371595", "27951639", "94354370", "12172671", "48311571", "58488440", "14398213", "99232303", "91379842", "05318372", "57312577", "09395373", "45341883", "35071370"};
    vector<int> bulls = {0, 4, 0, 3, 3, 1, 1, 2, 2, 4, 4, 1, 1, 3, 4, 4, 1, 3, 2, 3, 3, 3, 3, 4, 1, 1, 2, 2, 2, 0, 4, 3, 2, 0, 2, 4, 3, 4, 3, 4, 3, 4};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "95372373";
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<string> guesses = {"45", "44", "88", "59", "42", "30", "49", "96", "81", "75", "47", "07", "47", "31", "94", "03", "22", "42", "75", "54", "71", "46", "49", "29", "31", "01", "91"};
    vector<int> bulls = {1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "41";
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<string> guesses = {"034432", "847557", "247360", "203268", "857495", "239122", "952586", "018606", "231047", "230112", "232572", "128472", "652520", "220242", "990617", "506012", "230742", "207236", "287412", "834402", "737742", "233444", "735442", "361268", "897634", "034417", "236682", "944419"};
    vector<int> bulls = {3, 1, 2, 1, 2, 3, 0, 0, 3, 3, 3, 2, 0, 3, 0, 1, 4, 2, 4, 3, 4, 4, 4, 0, 1, 2, 3, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "237442";
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<string> guesses = {"662", "612", "046", "153", "116", "148", "113", "771", "625", "404", "292", "653", "554"};
    vector<int> bulls = {1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "452";
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<string> guesses = {"0157834", "7304245", "8080437", "2023752", "9619022", "3968345", "3804412", "9293737", "9303305", "5341945", "3309723", "5378399", "3108294", "5808506", "3040402", "5007645", "5908495", "0236379", "3674412", "4332444", "3270436", "4308769", "4362649", "8981086", "5334840", "3546364", "4878950", "2234687", "8979752", "7298345", "3330681", "7074487", "8594829", "9637319", "6137776", "4378545", "6368545"};
    vector<int> bulls = {0, 4, 0, 0, 0, 4, 1, 0, 4, 4, 2, 4, 2, 3, 0, 4, 4, 1, 0, 2, 0, 3, 2, 0, 3, 1, 1, 0, 0, 4, 1, 0, 0, 1, 0, 4, 4};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "5308345";
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<string> guesses = {"248315", "546037", "596898", "467206", "607508", "869027", "899089", "660796", "625534", "717603", "548914", "967409", "744415", "815673", "146849", "069510", "172542", "244318", "037242", "444734", "042116", "448792", "273329", "095127", "442706", "846923", "775363", "031490", "964518", "887914", "141013", "769573", "165234", "418173", "993393", "183807", "249425", "754314", "057707"};
    vector<int> bulls = {1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "801145";
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<string> guesses = {"570802720", "626335564", "672502702", "614018275", "678364715", "478567703", "659562733", "211402415", "177062193", "670502903", "918792105"};
    vector<int> bulls = {3, 1, 6, 1, 5, 7, 6, 1, 4, 6, 3};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "678562703";
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<string> guesses = {"121212121", "343434343", "565656565", "787878787", "909090909", "000000000", "111111111", "222222222", "333333333", "444444444", "666666666", "777777777", "888888888", "999999999", "100000001", "920000000", "083000000", "007400000", "000606000", "000004700", "000000380", "000000029", "000006001", "000000081", "020600000", "100000020", "003000001", "003000020", "000000720", "000006020", "000600009", "100000300", "900006000", "000000380", "000006001", "007006000", "107000000", "100000300", "080000009", "000600080", "003000300", "003600000", "007000700", "000400020", "083000000", "080006000", "000600700", "007000080", "000400020", "003054300"};
    vector<int> bulls = {2, 2, 2, 2, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789";
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<string> guesses = {"483059327", "300149988", "967986353", "847867786", "270776714", "507750888", "338656570", "409376188", "023202553", "830249748", "861676301", "840072388", "083269381", "422980768", "106302488", "043827338", "704852338", "464271383", "902455365", "683135309", "350945488", "058157778", "250926977", "647825483", "331803385", "830019788", "895136958", "738516748", "455484387", "842236361", "640351388", "035174381", "367953458", "303006248", "963677325", "342100349", "049474761", "734081782", "545053759", "823564643", "430241381", "930927756", "895472342", "946831309", "943672384", "501436367", "224126094", "663925376", "057427598", "319986358"};
    vector<int> bulls = {2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 1, 2, 1, 1, 1, 2, 1, 2, 2, 1, 2, 1, 1, 2, 1, 1, 2, 2, 3, 2, 1, 1, 1, 1, 2, 2, 2, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789";
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<string> guesses = {"889483858", "441016818", "139178153", "383385643", "559752810", "839687718", "432326551", "499247881", "749054580", "041664798", "021554252", "544376358", "820376010", "389776334", "648448818", "333177848", "659277987", "593612618", "882353418", "506150412", "549692282", "481252214", "839672898", "086776310", "327586448", "486655228", "493671018", "505650818", "164976111", "849678811", "809016331", "997311889", "801171481", "433967818", "618470479", "493161898", "489648308", "540346276", "339188776", "389186677", "687263732", "847268718", "021751414", "101368818", "579615882", "026678248", "083336318", "896266248", "131342013", "167588988"};
    vector<int> bulls = {1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 2, 1, 1, 1, 2, 0, 1, 2, 1, 1, 2, 1, 0, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789";
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<string> guesses = {"211072346", "840078066", "145026566", "155654966", "254975966", "694956067", "245178366", "255182369", "843616966", "653022967", "644922964", "654072361", "614065366", "105176566", "980156063", "205608379", "214065946", "740925787", "355642989", "258075786", "231978089", "102422366", "841975362", "640198489", "213375086", "910628307", "254965066", "115933086", "661422986", "941462066", "641096659", "900978068", "924028366", "954726766", "110422166", "425125986", "915665066", "854967039", "945476266", "641939786", "804928913", "800125911", "105266956", "805022961", "229062380", "254622066", "107178766", "043052366", "101660796", "911556366"};
    vector<int> bulls = {0, 0, 2, 2, 0, 2, 0, 1, 2, 1, 0, 0, 0, 2, 2, 1, 0, 2, 2, 2, 2, 2, 0, 2, 2, 0, 0, 2, 2, 1, 2, 0, 1, 2, 2, 2, 0, 1, 2, 2, 0, 0, 2, 0, 2, 0, 2, 2, 2, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789";
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<string> guesses = {"526300973", "926333992", "653385276", "677351908", "023384902", "083886963", "728484098", "633315570", "383780172", "347445832", "371358730", "820382309", "325860354", "190500756", "145338391", "340385599", "741081972", "386311552", "046465963", "706285256", "720382376", "341671598", "733705971", "607061272", "329381996", "326330929", "551358858", "701380793", "227381376", "465386586", "468396778", "526473365", "527785185", "301108771", "386371398", "322083219", "926313302", "303581951", "621669767", "623311241", "787585339", "397401698", "776395702", "356795958", "787383776", "373381723", "102487294", "346780702", "727251465", "601085576"};
    vector<int> bulls = {1, 1, 1, 1, 2, 2, 2, 1, 1, 1, 2, 2, 1, 2, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 2, 1, 1, 1, 2, 2, 2, 2, 1, 0, 2, 1, 1, 2, 2, 1, 1, 1, 0, 1, 2, 2, 1, 2, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789";
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<string> guesses = {"665484331", "745448200", "015843959", "059459670", "584431763", "900558760", "680588807", "785901407", "765548881", "120319875", "080359842", "138303888", "155536810", "824018229", "010949844", "788142809", "014508847", "768487897", "368355847", "745421247", "785183397", "677966752", "799429891", "064543887", "684101697", "785188900", "673187807", "014143940", "181246837", "015589503", "614109304", "196945237", "721483613", "118378000", "714403817", "063901897", "097488847", "677481857", "010546351", "085888859", "689466821", "190388877", "000989569", "712086429", "115549892", "697308059", "228105849", "181758597", "024327728", "660953897"};
    vector<int> bulls = {1, 1, 1, 2, 2, 2, 0, 0, 1, 2, 1, 2, 2, 2, 0, 1, 0, 1, 1, 1, 0, 2, 1, 1, 0, 0, 1, 0, 2, 0, 0, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 2, 2, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789";
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<string> guesses = {"452624586", "182762979", "591462321", "659858366", "806501361", "026918196", "226310374", "822384396", "532004474", "051431466", "520198421", "100907731", "852346150", "483340964", "051161721", "452546960", "141387722", "888304579", "086958110", "224304376", "156708170", "162308440", "353009474", "827114520", "452304376", "365401324", "562314466", "072904324", "505807761", "953286821", "453704326", "153792594", "855350166", "056948281", "156546673", "442351167", "862308586", "844413494", "821341261", "882358824", "154386626", "526361575", "522388464", "827708591", "639351426", "452328584", "852324581", "053301130", "451411222", "046374766"};
    vector<int> bulls = {1, 2, 1, 1, 0, 1, 1, 1, 0, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 1, 2, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789";
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<string> guesses = {"100376598", "577009738", "445729768", "118309595", "769066690", "189306537", "839770785", "014821879", "999008782", "078079979", "574701761", "079158885", "405879598", "107208669", "049708539", "808709339", "314709699", "427201293", "474099569", "726709701", "159996038", "009007539", "009809568", "093863598", "779718533", "108005745", "845409130", "649409583", "993482563", "008816573", "404405568", "777939710", "749908715", "827811603", "469501599", "077781465", "079881533", "817116704", "777739335", "625807757", "315109763", "791706181", "431806968", "404002763", "878409563", "808402133", "823238591", "475719590", "713793538", "783103720"};
    vector<int> bulls = {2, 1, 1, 1, 1, 2, 2, 1, 2, 1, 1, 2, 0, 2, 1, 1, 1, 1, 1, 2, 2, 1, 0, 1, 0, 2, 1, 2, 2, 1, 1, 1, 1, 1, 1, 0, 0, 2, 0, 2, 1, 2, 1, 1, 1, 1, 2, 0, 1, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789";
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<string> guesses = {"960431543", "273109735", "560471523", "370354703", "273804703", "693950403", "921115742", "693353698", "817250809", "953226803", "821307684", "513649514", "200958403", "800361475", "853352563", "010346083", "811356126", "703051965", "563025705", "194358803", "270358407", "849356202", "853355603", "250553583", "319359409", "184637283", "540447703", "725781509", "026652403", "610326493", "897666463", "826352405", "808410109", "442356431", "965351523", "873352377", "192636103", "800331473", "800381573", "839656933", "813611493", "425734439", "180991765", "026054503", "884651281", "543928700", "803214405", "830369733", "970398989", "432316730"};
    vector<int> bulls = {1, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 0, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 2, 2, 2, 1, 2, 2, 0, 0, 2, 1, 2, 2, 2, 2, 2, 1, 1, 2, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789";
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<string> guesses = {"783045387", "195146681", "383437458", "727546367", "790481480", "437160699", "694956498", "318446375", "392246988", "328648829", "999546588", "335856277", "537053437", "383541339", "920149187", "353343796", "229286607", "141626142", "307058752", "333846063", "125147207", "330617439", "192449638", "627249634", "347353701", "390246737", "882046698", "648866937", "497476648", "373804899", "337756067", "390926479", "323520818", "185845736", "580266229", "174746191", "848826998", "383422335", "382586097", "330566697", "086446491", "334446611", "457841799", "466155736", "327547624", "683046370", "397546338", "410156958", "337025588", "687832639"};
    vector<int> bulls = {2, 3, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 2, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 2, 2, 2, 2, 1, 2, 1, 2, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789";
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<string> guesses = {"178352338", "824397846", "314551512", "521495337", "850477379", "832592713", "513693350", "128245250", "145813582", "210397310", "513593312", "463195379", "834397376", "244392312", "204259373", "430699270", "744696884", "240959256", "673596352", "463649386", "435519836", "578458933", "140595271", "216596319", "543597302", "523595396", "641455643", "835727799", "839593382", "226494373", "414697276", "324395333", "210699766", "284396529", "113595363", "877457336", "844369816", "520295912", "330697370", "729052313", "210692676", "110167726", "345507512", "414419672", "840263339", "248557156", "044553400", "340497373", "870449316", "535952333"};
    vector<int> bulls = {2, 1, 1, 2, 2, 1, 1, 2, 2, 0, 1, 2, 0, 0, 1, 0, 2, 1, 2, 2, 0, 2, 1, 2, 1, 2, 2, 2, 1, 2, 0, 1, 1, 2, 2, 2, 0, 1, 0, 2, 0, 2, 0, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789";
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<string> guesses = {"174536111", "060621580", "079595610", "381580618", "873351234", "381581510", "131116600", "374581041", "304704780", "179381127", "371390617", "368752541", "380311211", "983611329", "303622736", "370646521", "370421028", "300146746", "374590230", "184381661", "371621211", "183261548", "376681780", "272296283", "060751018", "384528517", "374159028", "309621230", "674381647", "301195640", "321323038", "759354588", "324711037", "384326918", "679076720", "324953238", "161381551", "182587083", "980651038", "003651571", "163677057", "330491611", "394416341", "325181710", "004396512", "300121618", "529716343", "384182037", "343120020", "383461421"};
    vector<int> bulls = {2, 1, 0, 0, 2, 0, 2, 0, 2, 1, 0, 1, 0, 2, 2, 1, 1, 2, 0, 1, 0, 2, 2, 2, 1, 0, 1, 0, 0, 0, 1, 2, 1, 1, 2, 2, 1, 2, 1, 2, 2, 1, 2, 2, 1, 0, 2, 0, 1, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789";
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<string> guesses = {"922394048", "977088085", "485174528", "039997012", "389954732", "078997878", "899198223", "803989098", "431306288", "839498329", "975446028", "092368529", "482139819", "032983084", "933128069", "028997241", "872998028", "562457828", "195976926", "485098527", "492099822", "992377298", "953978529", "089098828", "479688829", "892389823", "988159048", "280076529", "924480835", "089099728", "878084228", "871954680", "403594583", "979188257", "933475428", "482376247", "092991529", "948998088", "979488828", "118298287", "935974078", "995777029", "799389888", "992199522", "485974528", "432988227", "079086268", "182159428", "926858038", "479474548"};
    vector<int> bulls = {1, 1, 0, 0, 2, 0, 0, 1, 2, 2, 2, 1, 1, 1, 2, 1, 0, 2, 2, 0, 0, 0, 2, 0, 1, 0, 1, 2, 2, 1, 0, 2, 2, 0, 2, 1, 1, 1, 1, 2, 0, 1, 1, 0, 0, 0, 1, 2, 2, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789";
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<string> guesses = {"410304247", "613677746", "628754831", "613961049", "617257059", "322277838", "608467344", "617071884", "517430180", "760574230", "610067237", "729024240", "116354665", "360084379", "614657480", "217057362", "118387870", "638294283", "616460242", "786060387", "810304847", "618175882", "917051262", "610407047", "619252182", "178981532", "167854597", "687157084", "918261259", "687558794", "600877487", "010236544", "610274332", "896464699", "613494647", "613482330", "623980317", "238086554", "717566250", "145270716", "676474862", "108154502", "663586337", "619561180", "696549389", "680401314", "616506240", "627215987", "820763439", "618207832"};
    vector<int> bulls = {0, 2, 2, 2, 2, 1, 1, 1, 2, 0, 0, 1, 2, 1, 2, 1, 1, 1, 1, 1, 0, 1, 1, 1, 2, 1, 2, 2, 1, 2, 1, 1, 0, 2, 2, 2, 2, 1, 1, 2, 1, 2, 2, 1, 2, 1, 1, 2, 2, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789";
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<string> guesses = {"123456789", "234567891", "345678912", "456789123", "567891234", "678912345", "789123456", "891234567", "912345678", "000000000", "678912345", "789123456", "891234557", "912345678", "000001000", "678912345", "789123456", "891234567", "912344678", "000000000", "678913345", "789123456", "891233567", "912345678", "000006000", "678912345", "789122456", "891232567", "912345678", "000006000"};
    vector<int> bulls = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<string> guesses = {"000000000", "000000001", "000000002", "000000003", "000000004", "000000005", "000000006", "000000007", "000000008", "000000009"};
    vector<int> bulls = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<string> guesses = {"925833420", "428667474", "341137424", "128302424", "528097704", "208332280", "058533582", "018344464", "976534348", "876106084", "435436585", "148083488", "416837064", "938538714", "378234621", "902097680", "588047470", "940935888", "568438021", "901069584", "028437000", "998612754", "935932465", "838797564", "678424030", "961453420", "089007482", "950737920", "874936435", "971217992", "978134930", "478547368", "489347434", "392967404", "738456114", "381414480", "983037632", "977267914", "092436124", "270760884", "876367885", "878634276", "108431644", "671172384", "128157734", "978504850", "308407903", "628067456", "316477446", "985297514"};
    vector<int> bulls = {3, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 3};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "978437484";
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<string> guesses = {"900000000", "080000000", "007000000", "000600000", "000050000", "000004000", "000000300", "000000020", "000000001"};
    vector<int> bulls = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "987654321";
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<string> guesses = {"367535629", "127093606", "261879202", "375922897", "361293194", "784503610", "632061554", "765693745", "254744307", "868843149", "206892664", "950487172", "722610615", "949091771", "159776736", "563948129", "390885096", "385611598", "481030444", "476317596", "217857418", "597538831", "896433386", "048889776", "430309254", "059469224", "775481289", "368021051", "108506462", "586284724", "062990813", "110340391", "969338056", "640046267", "569872829", "960276132", "159914910", "758704804", "296104222", "055290283", "804091962", "544993605", "029435174", "314694226", "412889288", "868383338", "047689068", "790333732", "652658796", "041048708"};
    vector<int> bulls = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<string> guesses = {"100000000", "020000000", "003000000", "000400000", "000050000", "000006000", "000000700", "000000080", "000000009", "111111111", "222222222", "333333333", "444444444", "555555555", "666666666", "777777777", "888888888", "999999999", "111111111", "222222222", "333333333", "444444444", "555555555", "666666666", "777777777", "888888888", "999999999", "111111111", "222222222", "333333333", "444444444", "555555555", "666666666", "777777777", "888888888", "999999999", "111111111", "222222222", "333333333", "444444444", "555555555", "666666666", "777777777", "888888888", "999999999"};
    vector<int> bulls = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789";
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<string> guesses = {"100000000", "010000000", "001000000", "000100000", "000010000", "000001000", "000000100", "000000010", "000000001", "100000000", "010000000", "001000000", "000100000", "000010000", "000001000", "000000100", "000000010", "000000001", "100000000", "010000000", "001000000", "000100000", "000010000", "000001000", "000000100", "000000010", "000000001", "100000000", "010000000", "001000000", "000100000", "000010000", "000001000", "000000100", "000000010", "000000001", "100000000", "010000000", "001000000", "000100000", "000010000", "000001000", "000000100", "000000010", "000000001", "100000000", "010000000", "001000000", "000100000", "000010000"};
    vector<int> bulls = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "111111111";
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<string> guesses = {"900000000", "090000000", "009000000", "000900000", "000090000", "000009000", "000000900", "000000090", "000000009", "111111119"};
    vector<int> bulls = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "999999999";
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<string> guesses = {"910000000", "902000000", "900300000", "900300000", "900040000", "900005000", "900000600", "900000070", "900000008"};
    vector<int> bulls = {2, 2, 2, 2, 2, 2, 2, 2, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "912345678";
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<string> guesses = {"033496626", "811828215", "757144633", "872017361", "583731030", "355499291", "747437154", "636519590", "901349563", "277943717", "971636597", "886216667", "802724119", "084674603", "178550707", "181440007", "390952388", "548910694", "309759170", "148163411", "397509500", "033496626", "811828215", "757144633", "872017361", "583731030", "355499291", "747437154", "636519590", "901349563", "277943717", "971636597", "886216667", "802724119", "084674603", "178550707", "181440007", "390952388", "548910694", "309759170", "148163411", "397509500"};
    vector<int> bulls = {1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 2, 1, 1, 1, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 2, 1, 1, 1, 1, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "887850521";
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<string> guesses = {"000000000", "111111111", "222222222", "333333333", "444444444", "555555555", "666666666", "777777777", "000000000", "111111111", "222222222", "333333333", "444444444", "555555555", "666666666", "777777777", "000000000", "111111111", "222222222", "333333333", "444444444", "555555555", "666666666", "777777777", "000000000", "111111111", "222222222", "333333333", "444444444", "555555555", "666666666", "777777777", "000000000", "111111111", "222222222", "333333333", "444444444", "555555555", "666666666", "777777777", "000000000", "111111111", "222222222", "333333333", "444444444", "555555555", "666666666", "777777777"};
    vector<int> bulls = {2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    vector<string> guesses = {"999999988", "999999999"};
    vector<int> bulls = {8, 8};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    vector<string> guesses = {"689717881", "729469886", "836709781", "182159888", "389571851", "802979001", "855698811", "883017381", "287479881", "689187881", "186272081", "549279841", "829259582", "889209851", "465277831", "489034841", "854257830", "583859981", "451171881", "829977181", "589259281", "584819788", "189275655", "389989186", "888219281", "389364881", "289619892", "488379911", "739371471", "399229321", "589077481", "889372855", "074279488", "489276833", "879734481", "849279825", "715279981", "386309883", "899779505", "115174081", "687279667", "987289061", "789279812", "082577871", "419709881", "178279821", "587503881", "815432882", "809271664", "886556286"};
    vector<int> bulls = {5, 4, 4, 4, 5, 4, 3, 4, 6, 5, 5, 6, 5, 7, 4, 4, 3, 4, 4, 5, 6, 3, 4, 4, 6, 5, 4, 4, 3, 4, 5, 5, 4, 5, 4, 6, 5, 4, 4, 3, 4, 4, 6, 4, 5, 5, 4, 3, 4, 3};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "889279881";
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    vector<string> guesses = {"174094882", "455171152", "761423221", "685761892", "795431233", "411387427", "793198650", "286024865", "090061389", "344606618", "496378829", "135984076", "361542097", "372601657", "541200146", "071777733", "599818266", "038012509", "478351201", "640618984", "143988087", "783837107", "349651099", "683484992", "553337438", "088068198", "972282890", "781586124", "258626539", "246182119", "762952003", "918195325", "258677229", "419698255", "491250839", "396799769", "357665825", "441616335", "532825361", "862146291", "503649293", "440596342", "887581257", "444442930", "778730382", "520372975", "343211325", "351222640", "703400531", "067500454"};
    vector<int> bulls = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    vector<string> guesses = {"000000000", "000011111", "001100111", "011011100", "010110011", "000000000", "000011111", "001100111", "011011100", "010110011", "000000000", "000011111", "001100111", "011011100", "010110011", "000000000", "000011111", "001100111", "011011100", "010110011", "000000000", "000011111", "001100111", "011011100", "010110011", "000000000", "000011111", "001100111", "011011100", "010110011", "000000000", "000011111", "001100111", "011011100", "010110011", "000000000", "000011111", "001100111", "011011100", "010110011"};
    vector<int> bulls = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    vector<string> guesses = {"000000000", "000000001", "000000002", "000000003", "000000004", "000000005", "000000006", "000000007", "000000008", "000000009", "000000000", "000000001", "000000002", "000000003", "000000004", "000000005", "000000006", "000000007", "000000008", "000000009", "000000000", "000000001", "000000002", "000000003", "000000004", "000000005", "000000006", "000000007", "000000008", "000000009", "000000000", "000000001", "000000002", "000000003", "000000004", "000000005", "000000006", "000000007", "000000008", "000000009", "000000000", "000000001", "000000002", "000000003", "000000004", "000000005", "000000006", "000000007", "000000008", "000000009"};
    vector<int> bulls = {1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    vector<string> guesses = {"012345789", "112345789", "212345789", "312345789", "412345789", "512345789", "612345789", "712345789", "812345789", "912345789"};
    vector<int> bulls = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    vector<string> guesses = {"111111110", "111111111", "111111112", "111111113", "111111114", "111111115", "111111116", "111111117", "111111118", "111111119"};
    vector<int> bulls = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    vector<string> guesses = {"111111111"};
    vector<int> bulls = {8};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    vector<string> guesses = {"123456789"};
    vector<int> bulls = {8};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    vector<string> guesses = {"000000000", "111111111", "222222222", "333333333", "444444444", "000000000", "111111111", "222222222", "333333333", "444444444", "000000000", "111111111", "222222222", "333333333", "444444444", "000000000", "111111111", "222222222", "333333333", "444444444", "000000000", "111111111", "222222222", "333333333", "444444444", "000000000", "111111111", "222222222", "333333333", "444444444", "000000000", "111111111", "222222222", "333333333", "444444444", "000000000", "111111111", "222222222", "333333333", "444444444", "000000000", "111111111", "222222222", "333333333", "444444444", "000000000", "111111111", "222222222", "333333333", "444444444"};
    vector<int> bulls = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    vector<string> guesses = {"12", "32"};
    vector<int> bulls = {1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    vector<string> guesses = {"000000985", "000000588", "000000847", "000000313", "000000254", "000000904", "000000434", "000000606", "000000978", "000000748", "000000569", "000000473", "000000317", "000000263", "000000562", "000000234", "000000592", "000000262", "000000596", "000000189", "000000376", "000000332", "000000310", "000000099", "000000674", "000000959", "000000298", "000000153", "000000437", "000000302", "000000205", "000000854", "000000800", "000000006", "000000363", "000000955", "000000689", "000000820", "000000075", "000000834", "000000415", "000000660", "000000477", "000000737", "000000477", "000000592", "000000220", "000000888", "000000500", "000000357"};
    vector<int> bulls = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    vector<string> guesses = {"000000000", "111111111", "222222222", "333333333", "444444444", "555555555", "666666666", "777777777", "888888888", "999999999", "000000000", "111111111", "222222222", "333333333", "444444444", "555555555", "666666666", "777777777", "888888888", "999999999", "000000000", "111111111", "222222222", "333333333", "444444444", "555555555", "666666666", "777777777", "888888888", "999999999", "000000000", "111111111", "222222222", "333333333", "444444444", "555555555", "666666666", "777777777", "888888888", "999999999", "000000000", "111111111", "222222222", "333333333", "444444444", "555555555", "666666666", "777777777", "888888888", "999999999"};
    vector<int> bulls = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    vector<string> guesses = {"000000000", "000000001", "000000002", "000000003", "000000004", "000000005", "000000006", "000000007", "000000008", "000000009", "000000010", "000000011", "000000012", "000000013", "000000014", "000000015", "000000016", "000000017", "000000018", "000000019", "000000020", "000000021", "000000022", "000000023", "000000024", "000000025", "000000026", "000000027", "000000028", "000000029", "000000030", "000000031", "000000032", "000000033", "000000034", "000000035", "000000036", "000000037", "000000038", "000000039", "000000040", "000000041", "000000042", "000000043", "000000044", "000000045", "000000046", "000000047", "000000048", "000000049"};
    vector<int> bulls = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    vector<string> guesses = {"000000000", "000000009", "000000090", "000000900", "000009000", "000090000", "000900000", "009000000", "090000000", "900000000", "000000000", "000000009", "000000090", "000000900", "000009000", "000090000", "000900000", "009000000", "090000000", "900000000", "000000000", "000000009", "000000090", "000000900", "000009000", "000090000", "000900000", "009000000", "090000000", "900000000", "000000000", "000000009", "000000090", "000000900", "000009000", "000090000", "000900000", "009000000", "090000000", "900000000", "000000000", "000000009", "000000090", "000000900", "000009000", "000090000", "000900000", "009000000", "090000000", "900000000"};
    vector<int> bulls = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "999999999";
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    vector<string> guesses = {"888888889", "888888898", "888888988", "888889888", "888898888", "888988888", "889888888", "898888888", "988888888"};
    vector<int> bulls = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "999999999";
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    vector<string> guesses = {"000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000"};
    vector<int> bulls = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    vector<string> guesses = {"234466890", "134567890", "224467790", "134567899", "234567890", "134557790", "234567790", "224466790", "234567880", "224457799", "134567890", "234566890", "234556890", "233567790", "234467880", "234567890", "234566890", "233467890", "133567890", "133466889", "234567780", "224467890", "234467790", "134456890", "234567899", "134457890", "233566890", "234556890", "133567890", "223567890", "223566790", "233567890", "233567780", "234466790", "234466890", "233567890", "234467790", "234467890", "233457880", "234556890", "234557790", "134567890", "134567890", "233566890", "234567889", "233567890", "224467880", "234467889", "224567890", "124566899"};
    vector<int> bulls = {2, 1, 3, 2, 0, 3, 1, 4, 1, 5, 1, 1, 2, 2, 2, 0, 1, 2, 2, 6, 2, 2, 2, 4, 1, 3, 2, 2, 2, 2, 4, 1, 3, 3, 2, 1, 2, 1, 4, 2, 2, 1, 1, 2, 2, 1, 3, 3, 1, 4};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "123456789";
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    vector<string> guesses = {"099845870", "109552386", "246963829", "330429697", "531919117", "964605021", "116592552", "571023170", "186421061", "178780414", "762422254", "030834139", "229379871", "187508148", "449455103", "991918052", "166709088", "879655428", "368781332", "107856402", "742560002", "205967613", "697673810", "803740986", "474760634", "301985386", "468397622", "358844390", "097675700", "635501958", "881412477", "899503918", "962362994", "434847256", "477845657", "151963479", "050206472", "820178084", "733073301", "762978126", "373366783", "175531073", "150745414", "578185422", "562397894", "221408588", "214146065", "152924966", "209913712", "019766967"};
    vector<int> bulls = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    vector<string> guesses = {"000000000", "000000001", "000000002", "000000003", "000000004", "000000005", "000000006", "000000007", "000000008", "000000009", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000"};
    vector<int> bulls = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    vector<string> guesses = {"999999950", "999999951", "999999952", "999999953", "999999954", "999999955", "999999956", "999999957", "999999958", "999999959", "999999960", "999999961", "999999962", "999999963", "999999964", "999999965", "999999966", "999999967", "999999968", "999999969", "999999970", "999999971", "999999972", "999999973", "999999974", "999999975", "999999976", "999999977", "999999978", "999999979", "999999980", "999999981", "999999982", "999999983", "999999984", "999999985", "999999986", "999999987", "999999988", "999999989", "999999990", "999999991", "999999992", "999999993", "999999994", "999999995", "999999996", "999999997", "999999998", "999999949"};
    vector<int> bulls = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    vector<string> guesses = {"999999990", "999999991", "999999992", "999999993", "999999994", "999999995", "999999996", "999999997", "999999998", "999999999"};
    vector<int> bulls = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test250() {
    vector<string> guesses = {"999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990", "999999990"};
    vector<int> bulls = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Ambiguity";
    if(result == expected) {
        cout << "Test Case 250: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 250: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test251() {
    vector<string> guesses = {"000000001", "000000000", "000000002", "000000003", "000000004", "000000005", "000000006", "000000007", "000000008", "000000009", "000000000", "000000001", "000000002", "000000003", "000000004", "000000005", "000000006", "000000007", "000000008", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009", "000000009"};
    vector<int> bulls = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 251: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 251: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test252() {
    vector<string> guesses = {"000000000", "000000001", "000000002"};
    vector<int> bulls = {0, 1, 1};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "Liar";
    if(result == expected) {
        cout << "Test Case 252: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 252: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test253() {
    vector<string> guesses = {"999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "999999998", "888888888", "899999997"};
    vector<int> bulls = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 0, 8};
    EllysBulls* pObj = new EllysBulls();
    clock_t start = clock();
    string result = pObj->getNumber(guesses, bulls);
    clock_t end = clock();
    delete pObj;
    string expected = "999999997";
    if(result == expected) {
        cout << "Test Case 253: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 253: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    test243() == 0 ? ++passed : ++failed;
    test244() == 0 ? ++passed : ++failed;
    test245() == 0 ? ++passed : ++failed;
    test246() == 0 ? ++passed : ++failed;
    test247() == 0 ? ++passed : ++failed;
    test248() == 0 ? ++passed : ++failed;
    test249() == 0 ? ++passed : ++failed;
    test250() == 0 ? ++passed : ++failed;
    test251() == 0 ? ++passed : ++failed;
    test252() == 0 ? ++passed : ++failed;
    test253() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22781940&rd=15492&pm=12420
********************************************************************************
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
 
class EllysBulls {
public:
  string getNumber(vector <string>, vector <int>);
};
 
int p[10], digits[10];
map < vector < int >, vector < int > > M;
 
string EllysBulls::getNumber(vector <string> guesses, vector <int> bulls) {
  int k = guesses[0].size();
  int n = guesses.size();
 
  int k1 = k / 2;
  int k2 = k - k1;
 
  p[0] = 1;
  for (int i = 1; i < 10; ++i) {
    p[i] = p[i - 1] * 10;
  }
 
  M.clear();
 
  for (int i = 0; i < p[k1]; ++i) {
    vector < int > a(n, 0);
    int x = i;
    for (int j = 0; j < k1; ++j) {
      digits[j] = x % 10;
      x /= 10;
    }
    reverse(digits, digits + k1);
    for (int j = 0; j < n; ++j) {
      for (int l = 0; l < k1; ++l) {
        if (guesses[j][l] == digits[l] + '0') {
          ++a[j];
        }
      }
    }
    M[a].push_back(i);
  }
 
  set < int > S;
  for (int i = 0; i < p[k2]; ++i) {
    if (i == 172) {
      int x = 0;
    }
    vector < int > a = bulls;
    int x = i;
    for (int j = 0; j < k2; ++j) {
      digits[j] = x % 10;
      x /= 10;
    }
    reverse(digits, digits + k2);
 
    bool nice = true;
    for (int j = 0; j < n; ++j) {
      for (int l = k1; l < k; ++l) {
        if (guesses[j][l] == digits[l - k1] + '0') {
          --a[j];
        }
      }
      if (a[j] < 0) {
        nice = false;
      }
    }
    if (!nice) {
      continue;
    }
 
    if (M.count(a) != 0) {
      if (S.size() > 1) {
        break;
      }
      vector < int > b = M[a];
      for (int j = 0; j < b.size(); ++j) {
        S.insert(b[j] * p[k2] + i);
        if (S.size() > 1) {
          break;
        }
      }
      if (S.size() > 1) {
        break;
      }
    }
  }
 
  if (S.size() == 1) {
    int x = * S.begin();
    string res = "";
    for (int i = 0; i < k; ++i) {
      res += x % 10 + '0';
      x /= 10;
    }
    reverse(res.begin(), res.end());
    return res;
  }
 
  if (S.size() == 0) {
    return "Liar";
  }
 
  return "Ambiguity";
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/