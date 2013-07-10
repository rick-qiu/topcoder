/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12125
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

class EasyConversionMachine {
public:
    string isItPossible(string originalWord, string finalWord, int k);
};

string EasyConversionMachine::isItPossible(string originalWord, string finalWord, int k) {
    string ret;
    return ret;
}


int test0() {
    string originalWord = "aababba";
    string finalWord = "bbbbbbb";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string originalWord = "aabb";
    string finalWord = "aabb";
    int k = 1;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string originalWord = "aaaaabaa";
    string finalWord = "bbbbbabb";
    int k = 8;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string originalWord = "aaa";
    string finalWord = "bab";
    int k = 4;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string originalWord = "aaa";
    string finalWord = "bab";
    int k = 5;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string originalWord = "aba";
    string finalWord = "bab";
    int k = 5;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string originalWord = "aababbabaa";
    string finalWord = "abbbbaabab";
    int k = 9;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string originalWord = "ababbababab";
    string finalWord = "bababaabaaa";
    int k = 36;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string originalWord = "aabaababaaaabbaaaaaabbaabba";
    string finalWord = "bbbbabbabaabaabaabaaabbbabb";
    int k = 20;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string originalWord = "aababbabaabbbbbbaab";
    string finalWord = "abbbabaabbbbbaaaaaa";
    int k = 31;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string originalWord = "abbbaaabbaaababbaabbbaaabbbaabbbaabbaaaabb";
    string finalWord = "aaabbaaabbaabbababbbbbbbbbabbbbabbaaaabbba";
    int k = 15;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string originalWord = "ababbabbaaabbaabaabbabbbaaaaaaaba";
    string finalWord = "bbbabbabababbaaaaaabababaababaaaa";
    int k = 19;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string originalWord = "aaaaabaabaa";
    string finalWord = "aabaababaab";
    int k = 17;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string originalWord = "baabbaaabbbaaabbabbbbaaab";
    string finalWord = "baaabaaaaabbaabbbaaaaabab";
    int k = 47;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string originalWord = "babbabbababaabbaabbaaabaabba";
    string finalWord = "bbbaaabababbaaaababbaabbbbab";
    int k = 7;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string originalWord = "bababbabababaaababbabababbabbaaabaa";
    string finalWord = "bbbbbaaaaaababbabbbabaabbbbabbbbbbb";
    int k = 6;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string originalWord = "abaabbbababbbbbabbaabaaabbbaabbbabbbaba";
    string finalWord = "babaaaaaababbbbaabbbaabbaabbaaaaabbbbaa";
    int k = 5;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string originalWord = "bbbbababaaaaabbbaabbabaaabaabbbbb";
    string finalWord = "babbbbaabbabaaabbaaabbbaaaaabaaab";
    int k = 46;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string originalWord = "baabbaabbabbbaababaabbbaabaabbaaabbbabbabbba";
    string finalWord = "abbbbabbababbbaaabbbbaababaaabaabbbaabaaabba";
    int k = 14;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string originalWord = "aabababbabbaaaab";
    string finalWord = "aababababbababaa";
    int k = 27;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string originalWord = "bbabbbabbba";
    string finalWord = "ababaabaaba";
    int k = 16;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string originalWord = "aaababaaabaababbabbabaaaa";
    string finalWord = "baabbabbaabaaabababaaaaaa";
    int k = 10;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string originalWord = "abbabaabbbbbababbabbbbbbbaaaabbbabbababbbaaaaa";
    string finalWord = "aaaaaaaaababbaabbaabbababbbbbaabaabbbaabbabbba";
    int k = 20;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string originalWord = "abaabbaaaaabbaabbbbabbbaba";
    string finalWord = "abababbabbbaaaaabaabbaaaab";
    int k = 19;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string originalWord = "aababbaaabbaaaaabbabaabaaabbaabbb";
    string finalWord = "aabbabbababababbababbbbbaabaabaaa";
    int k = 5;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string originalWord = "babaaaaabaabbaaaaaa";
    string finalWord = "baaaabbabaabbbbabab";
    int k = 45;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string originalWord = "abbaabbbbaabbbbabbaabbbaab";
    string finalWord = "baabbabbbbbbbaaabbaaabbabb";
    int k = 11;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string originalWord = "abaababbaabbbbbabbbb";
    string finalWord = "bbaaaabbaababbaaaaba";
    int k = 1;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string originalWord = "aabaaabaaaaaabbbaaabbbabbbbabbaaaaabaabbbabababb";
    string finalWord = "aabaabbababaabaabbbbbbabbabbabaaababbaababaabbaa";
    int k = 30;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string originalWord = "b";
    string finalWord = "a";
    int k = 46;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string originalWord = "babbaababaaabaabaaaaabbbaaab";
    string finalWord = "baababaaabababbaabbbaaaabbaa";
    int k = 32;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string originalWord = "aaaababaaaaabbbbaaab";
    string finalWord = "aaabbbababbbaaaaabab";
    int k = 41;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string originalWord = "baabbabbbbabaab";
    string finalWord = "baaaabbbbaaabba";
    int k = 50;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string originalWord = "ababababaabaabbbabbbbbbbbaabaabaababaabbbb";
    string finalWord = "baaaabbaabbbbabaaaababaaabbbabbababaababaa";
    int k = 20;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string originalWord = "abbbaaabbaaaaaabbbbbababaab";
    string finalWord = "bbaabaaabbbbabbbbbbbabaabaa";
    int k = 4;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string originalWord = "bab";
    string finalWord = "abb";
    int k = 49;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string originalWord = "abbbaaabbbabbbabbbbabaaabbabbb";
    string finalWord = "aaabbabbabbabbabaababbaaaaabba";
    int k = 10;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string originalWord = "bbabaabbabaabbbabbabbaabbbaababaabbbbabb";
    string finalWord = "baabbabbabbaabaaabaabaaabababbababbbbbba";
    int k = 1;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string originalWord = "aaababbbbaaababababbaabaabbaaabaaaaabababaaababbab";
    string finalWord = "abbababbabbbabbbbbababaabbaaaaaabbbbbaaaaaabbbaaab";
    int k = 24;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string originalWord = "abbbbaabababaaabbabbbabbaaabba";
    string finalWord = "babbaaaaabbabababbbbbbaabbaaab";
    int k = 31;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string originalWord = "a";
    string finalWord = "b";
    int k = 28;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string originalWord = "babaabababbaaabaabbaaababbaaaaaaabaabbabbabaaaaa";
    string finalWord = "aabbbaaabababbabbabbbbbbbaababbababbabaababbabab";
    int k = 37;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string originalWord = "bbbbbbbaaaaabbbabababa";
    string finalWord = "abbabbaabbaabababbbaba";
    int k = 43;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string originalWord = "bbababababbbbbbbaaaaabbbaaabbaaaa";
    string finalWord = "abaaaaabbbbbaabaaabbaabaaababbaaa";
    int k = 11;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string originalWord = "abababbaaabbaaabba";
    string finalWord = "baabaaaaabbbababba";
    int k = 43;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string originalWord = "aa";
    string finalWord = "aa";
    int k = 1;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string originalWord = "bbabbbaabbbbbabbbabbaaabababbb";
    string finalWord = "bbaabbaaaaabaaababbbbbbababbbb";
    int k = 12;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string originalWord = "bbbaabab";
    string finalWord = "aaaabbaa";
    int k = 29;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string originalWord = "bbbabbabababbaaaaababbbababbabba";
    string finalWord = "bbbabaababbaaaaaaababbababbbabab";
    int k = 21;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string originalWord = "aabbbaabbbaaabbababbabbaabbaaababbbba";
    string finalWord = "aaabbbabbaaaaaaababbaaabaabbbaabaaaaa";
    int k = 23;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string originalWord = "bbbbbaaabab";
    string finalWord = "ababbaaabbb";
    int k = 27;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string originalWord = "abbaaabbaababbababbabaababaababbbabbbaa";
    string finalWord = "baabaaaaabbbbbbbbabaabbbbaaaaaaababbbab";
    int k = 16;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string originalWord = "abbaaabbaababaaabbbbabbabbaaaabababaabaabbb";
    string finalWord = "ababbaaababbaaaaaabbbabaababbbaabbaababbaba";
    int k = 46;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string originalWord = "bbbbaaabbabbbaabbaaabbbbabbaababaabbabaaabaa";
    string finalWord = "abbababaabaaabaaaababababbaabaabaabaaabbaaaa";
    int k = 13;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string originalWord = "bbabbbbbaababababb";
    string finalWord = "baabababbbaaababab";
    int k = 10;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string originalWord = "aabaaababaabbaaaaaaaaa";
    string finalWord = "aabaabbbaaaaaaabaabbab";
    int k = 21;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string originalWord = "abbaaababaabbabbabbaabaabaababaabaaaaaaaaabbbbbb";
    string finalWord = "abbbaaababbbaaabbbbbaaaaaaaaababbbaabaabababaabb";
    int k = 37;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string originalWord = "bbbbabaabaabaaababbbbbabaaabbbb";
    string finalWord = "bbabbbabbaabbbbbbababbbbbaababa";
    int k = 37;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string originalWord = "baaaabbbaaa";
    string finalWord = "bbaababbbaa";
    int k = 25;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string originalWord = "abaaaaabbbbaaababaaaabbabbaaabaabaabbb";
    string finalWord = "aabbabaabbaabbbbaababbaaaaabbabababbaa";
    int k = 5;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string originalWord = "abbaaaaabbbbbbbabaaabbabab";
    string finalWord = "bbbaabaaaabaabaabbaababaab";
    int k = 29;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string originalWord = "baab";
    string finalWord = "aabb";
    int k = 6;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string originalWord = "abbab";
    string finalWord = "aabba";
    int k = 4;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string originalWord = "baaaaabababbbbbaabbaba";
    string finalWord = "bababbbbabbaaaabaabbbb";
    int k = 12;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string originalWord = "baaaaaabbaabbaababbaa";
    string finalWord = "abbbbabbbbbaaabaababa";
    int k = 21;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string originalWord = "bbaaabbbbbaabbbaaababbbbbaab";
    string finalWord = "aaaaaaababbbabbabaaabababbba";
    int k = 25;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string originalWord = "abbabbbbaababbaabbaaaabababaabbabbbabbabbabb";
    string finalWord = "aaaabbababaaaabbabaabbaaaabaabbbbaabbbababba";
    int k = 29;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string originalWord = "abaabbabababbbbaabaab";
    string finalWord = "baabbababbabaabbbbbbb";
    int k = 44;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string originalWord = "bbaaaaabbababababaaabaababbabaaabbbabb";
    string finalWord = "abaabbbbabbababababaaabbaaaaababaababb";
    int k = 45;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string originalWord = "abaaabbbbabbbbbbbbabbbabbbbaaaaba";
    string finalWord = "aababbbaaabbabbaaabaababaaaaabbbb";
    int k = 44;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string originalWord = "bab";
    string finalWord = "bbb";
    int k = 19;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string originalWord = "bbababaaababbabbabababb";
    string finalWord = "aabaabaaaaabaaabbbbbaab";
    int k = 18;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string originalWord = "aaabbabaabbbabbaaaaabbaaabbabaabbababbab";
    string finalWord = "bbbaabbabaababbaaaaaaaaaabbabaabbabbaaab";
    int k = 29;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string originalWord = "baabbaabba";
    string finalWord = "aaaaababab";
    int k = 93;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string originalWord = "abab";
    string finalWord = "abba";
    int k = 47;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string originalWord = "bbaaabaabaabaababaabaaababaaabbabbbaab";
    string finalWord = "baaabbbbababaababbbaaababaaabaabbbbabb";
    int k = 10;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string originalWord = "babbabb";
    string finalWord = "aaabbab";
    int k = 39;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string originalWord = "bababaaababb";
    string finalWord = "bbabababbaab";
    int k = 28;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string originalWord = "abaabbbbbabbbabbbabbbaabaabba";
    string finalWord = "abbaaaaaabbaaaaaaabbbabbaaaab";
    int k = 3;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string originalWord = "bbabababbaababbabbbababbb";
    string finalWord = "abaaaababaaabaaababbbaaab";
    int k = 3;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string originalWord = "bbaabbababbabbbabbabbbbaabbbbabbbab";
    string finalWord = "baaabaabbaabbaabababbabaabbbaaaaaaa";
    int k = 33;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string originalWord = "baaaaabbababaaaaaabaaaaabaabbbaaabaaabbabbbabaaba";
    string finalWord = "ababbaabbabbaaabaababbaabbaababbabbbbabbaaaabbbba";
    int k = 30;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string originalWord = "bbabbbbaaaaabbbaabbbabbbabbaaabbaa";
    string finalWord = "baaaabbbabaabbaababbabababaabaaaab";
    int k = 47;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string originalWord = "babbaabaaabaabbbabaaabbbababaaabbaabbaaabbaaab";
    string finalWord = "baaabaabaaaaabababbabbbaaaababaababaaabaabbaab";
    int k = 11;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string originalWord = "abbbbababbbbaaabaaaba";
    string finalWord = "aabbbbabbabbbbbabaaba";
    int k = 29;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string originalWord = "aaabaababbaaaabbababa";
    string finalWord = "abbabaaabaabbbbabaaba";
    int k = 97;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string originalWord = "ababaaabaabababbbbabbbb";
    string finalWord = "abaabbaaaabaabbbbbbabab";
    int k = 100;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string originalWord = "bbbaabbabbbabababbabbbbabbabbbaaabab";
    string finalWord = "babaaaaaaaaabababaabbbaaaababbbabbaa";
    int k = 35;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string originalWord = "aabbbbbbab";
    string finalWord = "baaabaabba";
    int k = 32;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string originalWord = "babbbbaabaabbaaaaaaaaaaabbbbabababaabbaaabaabbb";
    string finalWord = "aaaababbabbbbabaaababbbabbbbaaaabbaaaababbbbbbb";
    int k = 1;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string originalWord = "bbbbbbaaabbababaabbaabbaaaabaababaaaa";
    string finalWord = "aaaaaaabbbaabaaabbaabbaaabaaabaabaabb";
    int k = 92;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string originalWord = "bbbabaaabababaaaaaababbaaaba";
    string finalWord = "bbabbbbabbbbaaaabaaabbbabaaa";
    int k = 37;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string originalWord = "bbbabaabababbbabbbabaaaba";
    string finalWord = "aabaababaaaaabbbaaaaaaabb";
    int k = 11;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string originalWord = "babaabbaabaabbba";
    string finalWord = "aabbbabbababbaab";
    int k = 29;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string originalWord = "aabaabbabbbababbbbb";
    string finalWord = "babbbbbbbaababbbbab";
    int k = 7;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string originalWord = "aabaabaaababaabbbbabbabbbabba";
    string finalWord = "abbbbaabbaababaaabbbbbaaabbba";
    int k = 26;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string originalWord = "a";
    string finalWord = "b";
    int k = 34;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string originalWord = "aabbabbababaabaaaaaababaaab";
    string finalWord = "aabaabbabababbbbbbaaaababab";
    int k = 43;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string originalWord = "aaaaaabbabaaaababbababbaababbaaab";
    string finalWord = "baaaaabababbbbabaaabbabbbbabbbbbb";
    int k = 14;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string originalWord = "ababbbabaababbbaaabbabbabba";
    string finalWord = "bbbabaaaabbbaaabbbbbababbaa";
    int k = 33;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string originalWord = "bbaabbabaabbabaabbaaababbbaaaaaabbbbbbaaaaaaabba";
    string finalWord = "ababbaabaaabaabbbaaabbbbbaabbbabbbbbbbbabbabaaba";
    int k = 36;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string originalWord = "bbabbababaaabaabbbababaabaabbbbbaaaaabababbab";
    string finalWord = "aaaaabababbbbbabaaabbbabbbaababbbbaaaabbabbbb";
    int k = 93;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string originalWord = "bababbaaabbaaabababbbabbbbbbaababaaababaaaabaaa";
    string finalWord = "aabbabbabbbbbabbbaabaabaabaababbbaaaaaabbabbabb";
    int k = 14;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string originalWord = "abababaaabb";
    string finalWord = "bbbbbbbbbba";
    int k = 19;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string originalWord = "bbbabbbaabaaaabbbbbbbbaababbaaabaaaababaabbb";
    string finalWord = "aaaabaabaababaabbaaaabbabbbbbbaabaaabbaaabab";
    int k = 30;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string originalWord = "aaaaabaababaabbabbbaaabbbaabaaabaabbaaaaabbbbbb";
    string finalWord = "baaababbbabbabbbabaaababaaababbaaabbbabbbbbbbbb";
    int k = 93;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string originalWord = "bbbbaabaaabbbbbbaabbaabbbbabaababaabbaaabaaaba";
    string finalWord = "babbabbaaababbaaabbaabbbbaabababaabbbaabbbaaaa";
    int k = 24;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string originalWord = "a";
    string finalWord = "b";
    int k = 1;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string originalWord = "aaaaa";
    string finalWord = "bbbbb";
    int k = 3;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string originalWord = "aabbb";
    string finalWord = "bbbbb";
    int k = 3;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string originalWord = "aa";
    string finalWord = "aa";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string originalWord = "aaabb";
    string finalWord = "bbbbb";
    int k = 5;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string originalWord = "aaaa";
    string finalWord = "aaaa";
    int k = 10;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string originalWord = "abab";
    string finalWord = "baba";
    int k = 5;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string originalWord = "a";
    string finalWord = "a";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string originalWord = "aaaa";
    string finalWord = "babb";
    int k = 5;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string originalWord = "aaa";
    string finalWord = "bbb";
    int k = 5;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string originalWord = "a";
    string finalWord = "b";
    int k = 90;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string originalWord = "aabb";
    string finalWord = "bbaa";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string originalWord = "aaaaa";
    string finalWord = "bbbaa";
    int k = 5;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string originalWord = "bab";
    string finalWord = "aaa";
    int k = 10;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string originalWord = "abab";
    string finalWord = "abab";
    int k = 4;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string originalWord = "ab";
    string finalWord = "ba";
    int k = 10;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string originalWord = "a";
    string finalWord = "a";
    int k = 1;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string originalWord = "aab";
    string finalWord = "aab";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string originalWord = "aa";
    string finalWord = "aa";
    int k = 4;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string originalWord = "aaab";
    string finalWord = "bbbb";
    int k = 5;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string originalWord = "aaa";
    string finalWord = "aaa";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string originalWord = "aa";
    string finalWord = "aa";
    int k = 3;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string originalWord = "abbba";
    string finalWord = "aaaaa";
    int k = 5;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string originalWord = "aaa";
    string finalWord = "aaa";
    int k = 100;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string originalWord = "ab";
    string finalWord = "aa";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string originalWord = "aaab";
    string finalWord = "abba";
    int k = 5;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string originalWord = "abbba";
    string finalWord = "abbba";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string originalWord = "a";
    string finalWord = "b";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string originalWord = "aaaa";
    string finalWord = "bbbb";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string originalWord = "ab";
    string finalWord = "ab";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string originalWord = "abbab";
    string finalWord = "babaa";
    int k = 1;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string originalWord = "aaaaa";
    string finalWord = "bbbbb";
    int k = 7;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string originalWord = "aaa";
    string finalWord = "aaa";
    int k = 3;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string originalWord = "aaab";
    string finalWord = "bbaa";
    int k = 5;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string originalWord = "aa";
    string finalWord = "aa";
    int k = 100;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string originalWord = "aaa";
    string finalWord = "bbb";
    int k = 6;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string originalWord = "aab";
    string finalWord = "abb";
    int k = 10;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string originalWord = "ab";
    string finalWord = "ab";
    int k = 1;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string originalWord = "aba";
    string finalWord = "abb";
    int k = 1;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    string originalWord = "aabb";
    string finalWord = "aabb";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    string originalWord = "abb";
    string finalWord = "aab";
    int k = 11;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    string originalWord = "aaaaa";
    string finalWord = "bbbbb";
    int k = 20;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    string originalWord = "aaaaaa";
    string finalWord = "aabbbb";
    int k = 6;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    string originalWord = "aaaaa";
    string finalWord = "aabbb";
    int k = 5;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    string originalWord = "aababbabaa";
    string finalWord = "abbbbaabab";
    int k = 8;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    string originalWord = "aba";
    string finalWord = "bbb";
    int k = 3;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    string originalWord = "aaaaaaaaaaaaa";
    string finalWord = "bbbbbbbbbbbbb";
    int k = 13;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    string originalWord = "a";
    string finalWord = "a";
    int k = 6;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    string originalWord = "ab";
    string finalWord = "ba";
    int k = 4;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    string originalWord = "ababab";
    string finalWord = "ababab";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    string originalWord = "ab";
    string finalWord = "aa";
    int k = 3;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    string originalWord = "aaaaaaa";
    string finalWord = "aaaaaab";
    int k = 3;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    string originalWord = "aaa";
    string finalWord = "bbb";
    int k = 1;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    string originalWord = "aaab";
    string finalWord = "aaaa";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    string originalWord = "abab";
    string finalWord = "bbaa";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    string originalWord = "aab";
    string finalWord = "aaa";
    int k = 4;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    string originalWord = "aaaa";
    string finalWord = "aaaa";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    string originalWord = "aba";
    string finalWord = "bba";
    int k = 1;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    string originalWord = "aaaaaa";
    string finalWord = "bbbaaa";
    int k = 5;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    string originalWord = "aaaabbb";
    string finalWord = "aabaaab";
    int k = 7;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    string originalWord = "abb";
    string finalWord = "baa";
    int k = 5;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    string originalWord = "aaaaa";
    string finalWord = "bbbbb";
    int k = 1;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    string originalWord = "bbbbb";
    string finalWord = "aaaaa";
    int k = 3;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    string originalWord = "aabbb";
    string finalWord = "aaaaa";
    int k = 5;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    string originalWord = "abab";
    string finalWord = "baba";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    string originalWord = "aaaaaaa";
    string finalWord = "aaaaaab";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    string originalWord = "aa";
    string finalWord = "ab";
    int k = 4;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    string originalWord = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string finalWord = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int k = 100;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    string originalWord = "aaaab";
    string finalWord = "bbbab";
    int k = 7;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    string originalWord = "aaa";
    string finalWord = "aab";
    int k = 4;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    string originalWord = "aaaaaa";
    string finalWord = "bbbbba";
    int k = 6;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    string originalWord = "aaa";
    string finalWord = "bbb";
    int k = 7;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    string originalWord = "abab";
    string finalWord = "abba";
    int k = 4;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    string originalWord = "aaaaaaaaaaaaa";
    string finalWord = "bbbbbbbbbbbbb";
    int k = 26;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    string originalWord = "aaaa";
    string finalWord = "bbbb";
    int k = 1;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    string originalWord = "aaaa";
    string finalWord = "aaab";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    string originalWord = "baab";
    string finalWord = "bbbb";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    string originalWord = "aab";
    string finalWord = "bba";
    int k = 5;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    string originalWord = "abbba";
    string finalWord = "aaaaa";
    int k = 4;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    string originalWord = "aaaa";
    string finalWord = "aaaa";
    int k = 4;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    string originalWord = "abababab";
    string finalWord = "aaaaaaaa";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    string originalWord = "aabbaa";
    string finalWord = "bbaaaa";
    int k = 6;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    string originalWord = "aaabb";
    string finalWord = "bbbbb";
    int k = 6;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    string originalWord = "aabb";
    string finalWord = "babb";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    string originalWord = "aaa";
    string finalWord = "aab";
    int k = 1;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    string originalWord = "abaababa";
    string finalWord = "baaaabba";
    int k = 6;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    string originalWord = "aa";
    string finalWord = "bb";
    int k = 4;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    string originalWord = "aaaa";
    string finalWord = "aaaa";
    int k = 3;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    string originalWord = "aabb";
    string finalWord = "bbaa";
    int k = 8;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    string originalWord = "aaa";
    string finalWord = "bbb";
    int k = 3;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    string originalWord = "abababab";
    string finalWord = "aaaaaaaa";
    int k = 14;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    string originalWord = "aaa";
    string finalWord = "aaa";
    int k = 6;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    string originalWord = "aaaa";
    string finalWord = "babb";
    int k = 4;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    string originalWord = "aaa";
    string finalWord = "bbb";
    int k = 9;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    string originalWord = "aaaaabbb";
    string finalWord = "bbbbbbbb";
    int k = 6;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    string originalWord = "aba";
    string finalWord = "bab";
    int k = 3;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    string originalWord = "ab";
    string finalWord = "bb";
    int k = 1;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    string originalWord = "aba";
    string finalWord = "aaa";
    int k = 1;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    string originalWord = "aaaaaaaaaa";
    string finalWord = "bbbbbaaaaa";
    int k = 3;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    string originalWord = "a";
    string finalWord = "a";
    int k = 100;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    string originalWord = "abbbab";
    string finalWord = "aaaaaa";
    int k = 6;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    string originalWord = "aaaaa";
    string finalWord = "bbbbb";
    int k = 14;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    string originalWord = "aba";
    string finalWord = "bab";
    int k = 6;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    string originalWord = "aabba";
    string finalWord = "bbbaa";
    int k = 5;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    string originalWord = "aaaaa";
    string finalWord = "bbbba";
    int k = 10;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    string originalWord = "aa";
    string finalWord = "ba";
    int k = 2;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    string originalWord = "aaa";
    string finalWord = "bba";
    int k = 3;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE";
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    string originalWord = "ababa";
    string finalWord = "babab";
    int k = 7;
    EasyConversionMachine* pObj = new EasyConversionMachine();
    clock_t start = clock();
    string result = pObj->isItPossible(originalWord, finalWord, k);
    clock_t end = clock();
    delete pObj;
    string expected = "POSSIBLE";
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23047618&rd=15172&pm=12125
********************************************************************************
#include <iostream> 
#include <string> 
 
using namespace std; 
 
class EasyConversionMachine 
{ 
        public: 
        string isItPossible(string originalWord, string finalWord, int k) 
        { 
                int i; 
                int c=0; 
                for (i = 0;i<originalWord.size();i++){ 
                        if(originalWord[i] != finalWord[i]){ 
                                c++; 
                        } 
                } 
                if(c>k)return "IMPOSSIBLE"; 
                if(k == c || (k-c)%2==0){ 
                        return ("POSSIBLE"); 
                } else { 
                        return ("IMPOSSIBLE"); 
                } 
        } 
};

********************************************************************************
*******************************************************************************/