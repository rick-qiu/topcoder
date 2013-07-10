/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12118
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

class ConversionMachine {
public:
    int countAll(string word1, string word2, vector<int> costs, int maxCost);
};

int ConversionMachine::countAll(string word1, string word2, vector<int> costs, int maxCost) {
    int ret;
    return ret;
}


int test0() {
    string word1 = "a";
    string word2 = "b";
    vector<int> costs = {100, 2, 3};
    int maxCost = 205;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
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
    string word1 = "aa";
    string word2 = "bb";
    vector<int> costs = {102, 283, 282};
    int maxCost = 1000000;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 394255315;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string word1 = "abcba";
    string word2 = "abcba";
    vector<int> costs = {67, 23, 43};
    int maxCost = 0;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string word1 = "aaaaaaaaaaa";
    string word2 = "cbcbaaaacaa";
    vector<int> costs = {1, 1, 1};
    int maxCost = 1000000000;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 103255104;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string word1 = "cccccccc";
    string word2 = "aaaaaaaa";
    vector<int> costs = {10000000, 1, 1};
    int maxCost = 100;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 40320;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string word1 = "aa";
    string word2 = "cc";
    vector<int> costs = {1, 10, 100};
    int maxCost = 1787;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 123611681;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string word1 = "a";
    string word2 = "c";
    vector<int> costs = {2374035, 562618982, 480360678};
    int maxCost = 780797507;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string word1 = "a";
    string word2 = "c";
    vector<int> costs = {842433666, 48442207, 178097042};
    int maxCost = 747333495;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
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
    string word1 = "acacaaaabc";
    string word2 = "bcbabcbbbb";
    vector<int> costs = {884741355, 762905410, 766344689};
    int maxCost = 614762568;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
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
    string word1 = "ccbbacbab";
    string word2 = "acbccacba";
    vector<int> costs = {44749443, 321083036, 286939056};
    int maxCost = 309527907;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
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
    string word1 = "aabccccbc";
    string word2 = "caabacbcb";
    vector<int> costs = {387764413, 236012499, 201750066};
    int maxCost = 501823287;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
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
    string word1 = "ca";
    string word2 = "ca";
    vector<int> costs = {541156591, 35726091, 946191342};
    int maxCost = 859654263;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string word1 = "bacac";
    string word2 = "caaac";
    vector<int> costs = {686515006, 386481844, 826460406};
    int maxCost = 519511330;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
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
    string word1 = "bca";
    string word2 = "bcc";
    vector<int> costs = {932934013, 401587205, 264489679};
    int maxCost = 982138130;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string word1 = "abbabc";
    string word2 = "ccabcc";
    vector<int> costs = {226966362, 956249242, 739687284};
    int maxCost = 365977640;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string word1 = "baba";
    string word2 = "bbbc";
    vector<int> costs = {669944122, 34483038, 619280588};
    int maxCost = 695148743;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string word1 = "baca";
    string word2 = "ccaa";
    vector<int> costs = {54, 84, 14};
    int maxCost = 307597668;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 721882592;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string word1 = "cbaaca";
    string word2 = "cbbcca";
    vector<int> costs = {61, 75, 88};
    int maxCost = 815144539;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 309483399;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string word1 = "ca";
    string word2 = "aa";
    vector<int> costs = {62, 19, 50};
    int maxCost = 195602524;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 860183739;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string word1 = "cccaaaccba";
    string word2 = "cbaaccbaab";
    vector<int> costs = {61, 45, 47};
    int maxCost = 338999268;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 736706045;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string word1 = "cbcccaaccca";
    string word2 = "ccbcccaaaba";
    vector<int> costs = {59, 7, 52};
    int maxCost = 90283387;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 532665495;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string word1 = "bbbcab";
    string word2 = "cbccba";
    vector<int> costs = {22, 47, 70};
    int maxCost = 538114877;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 261779849;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string word1 = "aaabb";
    string word2 = "cbcac";
    vector<int> costs = {80, 63, 18};
    int maxCost = 221027581;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 896129862;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string word1 = "ca";
    string word2 = "ac";
    vector<int> costs = {67, 58, 57};
    int maxCost = 773343718;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 613955220;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string word1 = "aabbcacb";
    string word2 = "bcaabbab";
    vector<int> costs = {60, 100, 31};
    int maxCost = 758794666;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 236712319;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string word1 = "bcabbabcbb";
    string word2 = "cbbbbacbca";
    vector<int> costs = {74, 47, 45};
    int maxCost = 567626576;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 590427414;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string word1 = "abbcaaccbbc";
    string word2 = "bcacbaabbaa";
    vector<int> costs = {1, 1, 1};
    int maxCost = 704180870;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 247948065;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string word1 = "bcabcacacca";
    string word2 = "acaabbbacbc";
    vector<int> costs = {1, 1, 1};
    int maxCost = 411951430;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 855738145;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string word1 = "caccaccaabb";
    string word2 = "bbcccbaaacc";
    vector<int> costs = {1, 1, 1};
    int maxCost = 598698049;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 144538037;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string word1 = "accbbbbbaac";
    string word2 = "baabaaabcba";
    vector<int> costs = {1, 1, 1};
    int maxCost = 452139813;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 792140212;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string word1 = "cbbbcccacca";
    string word2 = "ccabcabbaab";
    vector<int> costs = {1, 1, 1};
    int maxCost = 425008849;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 178523401;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string word1 = "babbacbcbcc";
    string word2 = "cbbabacccbb";
    vector<int> costs = {1, 1, 1};
    int maxCost = 632248484;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 532322220;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string word1 = "bcbbbcbaccb";
    string word2 = "aaccabccbcc";
    vector<int> costs = {1, 1, 1};
    int maxCost = 284761269;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 321601669;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string word1 = "bcabbcbbaac";
    string word2 = "bbbcccbabac";
    vector<int> costs = {1, 1, 1};
    int maxCost = 277834411;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 41318521;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string word1 = "abcbbcbcabc";
    string word2 = "cccabbbbcab";
    vector<int> costs = {1, 1, 1};
    int maxCost = 536870911;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 515131206;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string word1 = "cbcacbcacaa";
    string word2 = "caaabcccbbc";
    vector<int> costs = {1, 1, 1};
    int maxCost = 1000000000;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 334944992;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string word1 = "aaaaaaaaaaa";
    string word2 = "aaaaaaaaaaa";
    vector<int> costs = {1, 1, 1};
    int maxCost = 536870912;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 941170882;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string word1 = "aabbabbbbbb";
    string word2 = "bbababaabab";
    vector<int> costs = {783, 635, 967};
    int maxCost = 177015953;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 340935804;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string word1 = "bbbabbbbbaa";
    string word2 = "aababbbbaab";
    vector<int> costs = {47, 816, 934};
    int maxCost = 222754718;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 742845138;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string word1 = "abaabbabbaa";
    string word2 = "aaabbbbbbbb";
    vector<int> costs = {801, 243, 927};
    int maxCost = 470199726;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 727541367;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string word1 = "babaaabbbbb";
    string word2 = "baababaabba";
    vector<int> costs = {744, 389, 145};
    int maxCost = 905483689;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 98864847;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string word1 = "ababaaaabab";
    string word2 = "aaabbbabaaa";
    vector<int> costs = {12, 606, 645};
    int maxCost = 120370484;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 834214937;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string word1 = "abbaaaabbbb";
    string word2 = "aaabaabbabb";
    vector<int> costs = {614, 131, 274};
    int maxCost = 683441231;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 272907888;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string word1 = "bbbbaaaaaba";
    string word2 = "bbbaabbbaaa";
    vector<int> costs = {264, 278, 63};
    int maxCost = 843591678;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 685526135;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string word1 = "abbaabbbbba";
    string word2 = "abbbbabaaab";
    vector<int> costs = {415, 126, 396};
    int maxCost = 287817727;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 159352612;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string word1 = "aabaaabbaaa";
    string word2 = "bbababababb";
    vector<int> costs = {479, 485, 951};
    int maxCost = 603678491;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 353709000;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string word1 = "bbaaaaabbab";
    string word2 = "ababbabbaab";
    vector<int> costs = {705, 736, 818};
    int maxCost = 215275678;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 64933726;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string word1 = "aaaaaaaabbb";
    string word2 = "bbbabababba";
    vector<int> costs = {937, 692, 443};
    int maxCost = 163296300;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 461696016;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string word1 = "bbbaaababbb";
    string word2 = "bbabbbaabab";
    vector<int> costs = {701, 260, 746};
    int maxCost = 600554940;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 168301926;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string word1 = "bbababaabba";
    string word2 = "aababbbabba";
    vector<int> costs = {543, 806111111, 516222222};
    int maxCost = 406387153;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string word1 = "bbbbabaaabb";
    string word2 = "abbabbbbaaa";
    vector<int> costs = {920, 8031111, 5891111};
    int maxCost = 184101707;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 305611725;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string word1 = "bbaaabbbaaa";
    string word2 = "bbbbabbbaab";
    vector<int> costs = {690, 80511111, 3011111};
    int maxCost = 627536534;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 776178791;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string word1 = "aabbbaaaaab";
    string word2 = "bbbbaaaabbb";
    vector<int> costs = {531, 4144444, 818444};
    int maxCost = 209222160;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 97373708;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string word1 = "baabbabbbab";
    string word2 = "aabaaaabbab";
    vector<int> costs = {673, 1, 93012334};
    int maxCost = 975679429;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 645858550;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string word1 = "abbabbbbbbb";
    string word2 = "baaaaabaaab";
    vector<int> costs = {441, 7791111, 781};
    int maxCost = 508653228;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 462187799;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string word1 = "bbaaaabbbba";
    string word2 = "baababbbbbb";
    vector<int> costs = {375, 740, 12212334};
    int maxCost = 532008079;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 346534130;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string word1 = "abaabbbaaba";
    string word2 = "baabbaabaaa";
    vector<int> costs = {481, 293, 705000542};
    int maxCost = 367517558;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string word1 = "ab";
    string word2 = "ab";
    vector<int> costs = {729, 371, 886};
    int maxCost = 640035947;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 688082579;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string word1 = "a";
    string word2 = "b";
    vector<int> costs = {514, 12, 817};
    int maxCost = 138068217;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 102806;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string word1 = "ba";
    string word2 = "aa";
    vector<int> costs = {241, 811, 869};
    int maxCost = 504932238;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 201998554;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string word1 = "aabbb";
    string word2 = "babab";
    vector<int> costs = {892, 185, 692};
    int maxCost = 382931508;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 947998483;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string word1 = "b";
    string word2 = "a";
    vector<int> costs = {317, 485, 769};
    int maxCost = 850555421;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 541410;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string word1 = "bb";
    string word2 = "bb";
    vector<int> costs = {226, 852, 336};
    int maxCost = 404236895;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 153777955;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string word1 = "aba";
    string word2 = "baa";
    vector<int> costs = {577, 256, 790};
    int maxCost = 186976621;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 219306955;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string word1 = "bbaba";
    string word2 = "ababb";
    vector<int> costs = {190, 948, 389};
    int maxCost = 110884805;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 137201130;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string word1 = "aba";
    string word2 = "bbb";
    vector<int> costs = {865, 273, 630};
    int maxCost = 829228040;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 111789378;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string word1 = "a";
    string word2 = "b";
    vector<int> costs = {368, 51, 369};
    int maxCost = 252574603;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 320526;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string word1 = "bbbaaaaaa";
    string word2 = "acacaacaa";
    vector<int> costs = {2, 74, 41};
    int maxCost = 582996071;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 128360629;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string word1 = "ababbbbab";
    string word2 = "accacaaaa";
    vector<int> costs = {11, 72, 90};
    int maxCost = 608326079;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 869943179;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string word1 = "aabbbbbab";
    string word2 = "acccacccc";
    vector<int> costs = {84, 20, 82};
    int maxCost = 861168166;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 654379334;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string word1 = "aaabababbba";
    string word2 = "aaaacacccca";
    vector<int> costs = {91, 85, 3};
    int maxCost = 995987791;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 914723037;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string word1 = "baabbabaab";
    string word2 = "cacaaacaca";
    vector<int> costs = {70, 3, 99};
    int maxCost = 576911789;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 264820392;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string word1 = "baaabbaabab";
    string word2 = "ccacaaaccac";
    vector<int> costs = {40, 40, 61};
    int maxCost = 927150898;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 484973990;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string word1 = "baaaababaab";
    string word2 = "ccaaacccaca";
    vector<int> costs = {36, 100, 52};
    int maxCost = 902260170;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 527130575;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string word1 = "abaababab";
    string word2 = "ccaacaaac";
    vector<int> costs = {54, 27, 2};
    int maxCost = 163638604;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 42848010;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string word1 = "abbababaaa";
    string word2 = "cacaccaaaa";
    vector<int> costs = {92, 84, 4};
    int maxCost = 152428362;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 998473549;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string word1 = "bababbaaba";
    string word2 = "accacccaca";
    vector<int> costs = {61, 65, 86};
    int maxCost = 669453338;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 260431374;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string word1 = "bbaccbbb";
    string word2 = "bbacbbac";
    vector<int> costs = {70437, 133, 133};
    int maxCost = 991840667;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 89619301;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string word1 = "aaaa";
    string word2 = "bbbb";
    vector<int> costs = {1000000000, 1, 1};
    int maxCost = 1000000000;
    ConversionMachine* pObj = new ConversionMachine();
    clock_t start = clock();
    int result = pObj->countAll(word1, word2, costs, maxCost);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=15172&pm=12118
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
 
class ConversionMachine {
public:
  int countAll(string, string, vector <int>, int);
};
 
const int md = 1000000007;
 
int a[99][99], b[99][99], c[99][99];
int w[99][99][99];
 
int ConversionMachine::countAll(string word1, string word2, vector <int> costs, int maxCost) {
  int n = word1.length(), i, j, k, k0 = 0, k1 = 0, k2 = 0;
  for (i=0;i<n;i++) {
    int z = 0;
    while (word1[i] != word2[i]) {
      maxCost -= costs[word1[i]-'a'];
      if (maxCost < 0) return 0;
      z++;
      word1[i]++;
      if (word1[i] == 'd') word1[i] = 'a';
    }
    if (z == 0) k0++;
    if (z == 1) k1++;
    if (z == 2) k2++;
  }
  int z0, z1, z2, t = 0;
  for (z0=0;z0<=n;z0++)
    for (z1=0;z0+z1<=n;z1++) {
      z2 = n-z0-z1;
      w[z0][z1][z2] = t++;
    }
  memset(a,0,sizeof(a));
  for (z0=0;z0<=n;z0++)
    for (z1=0;z0+z1<=n;z1++) {
      z2 = n-z0-z1;
      int q = w[z0][z1][z2];
      if (z0 > 0) a[q][w[z0-1][z1][z2+1]] = z0;
      if (z1 > 0) a[q][w[z0+1][z1-1][z2]] = z1;
      if (z2 > 0) a[q][w[z0][z1+1][z2-1]] = z2;
      if (z1+z2 == 0) a[q][t] = 1;
    }
  a[t][t] = 1;
  t++;
  memset(b,0,sizeof(b));
  for (i=0;i<t;i++)
    for (j=0;j<t;j++) b[i][j] = (i == j);
  long long tot = costs[0]; tot += costs[1]; tot += costs[2];
  int pw = k1+2*k2+3*(maxCost/tot)+1, step = 1 << 30;
  while (step > 0) {
    for (i=0;i<t;i++)
      for (j=0;j<t;j++) {
        c[i][j] = 0;
        for (k=0;k<t;k++) c[i][j] = (c[i][j]+(long long)b[i][k]*b[k][j]) % md;
      }
    for (i=0;i<t;i++)
      for (j=0;j<t;j++) b[i][j] = c[i][j];
    if (step & pw) {
      for (i=0;i<t;i++)
        for (j=0;j<t;j++) {
          c[i][j] = 0;
          for (k=0;k<t;k++) c[i][j] = (c[i][j]+(long long)b[i][k]*a[k][j]) % md;
        }
      for (i=0;i<t;i++)
        for (j=0;j<t;j++) b[i][j] = c[i][j];
    }
    step >>= 1;
  }
  return b[w[k0][k1][k2]][t-1];
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/