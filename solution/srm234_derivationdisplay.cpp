/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4021
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

class DerivationDisplay {
public:
    vector<string> getDerivation(string input);
};

vector<string> DerivationDisplay::getDerivation(string input) {
    vector<string> ret;
    return ret;
}


int test0() {
    string input = "baabba";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "bUa", "baUa", "baaUa", "baabUa", "baabba"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string input = "aaabb";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "aTb", "aaTbb", "aaAbb", "aaabb"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string input = "bbba";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "bUa", "bbUa", "bbba"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string input = "baabba";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "bUa", "baUa", "baaUa", "baabUa", "baabba"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string input = "a";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "A", "a"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string input = "b";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "B", "b"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string input = "aabbbbbbbb";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "aTb", "aaTbb", "aaBbb", "aabBbb", "aabbBbb", "aabbbBbb", "aabbbbBbb", "aabbbbbBbb", "aabbbbbbbb"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string input = "aaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbb";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "aTb", "aaTbb", "aaaTbbb", "aaaaTbbbb", "aaaaaTbbbbb", "aaaaaaTbbbbbb", "aaaaaaaTbbbbbbb", "aaaaaaaaTbbbbbbbb", "aaaaaaaaaTbbbbbbbbb", "aaaaaaaaaaTbbbbbbbbbb", "aaaaaaaaaaaTbbbbbbbbbbb", "aaaaaaaaaaaaTbbbbbbbbbbbb", "aaaaaaaaaaaaaTbbbbbbbbbbbbb", "aaaaaaaaaaaaaaTbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaTbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaTbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaTbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaTbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaTbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaTbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaBbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbb"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string input = "aaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbb";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "aTb", "aaTbb", "aaaTbbb", "aaaaTbbbb", "aaaaaTbbbbb", "aaaaaaTbbbbbb", "aaaaaaaTbbbbbbb", "aaaaaaaaTbbbbbbbb", "aaaaaaaaaTbbbbbbbbb", "aaaaaaaaaaTbbbbbbbbbb", "aaaaaaaaaaaTbbbbbbbbbbb", "aaaaaaaaaaaaTbbbbbbbbbbbb", "aaaaaaaaaaaaaTbbbbbbbbbbbbb", "aaaaaaaaaaaaaaTbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaTbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaTbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaTbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaTbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaTbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaTbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaAbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbb"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string input = "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "aTb", "aBb", "abBb", "abbBb", "abbbBb", "abbbbBb", "abbbbbBb", "abbbbbbBb", "abbbbbbbBb", "abbbbbbbbBb", "abbbbbbbbbBb", "abbbbbbbbbbBb", "abbbbbbbbbbbBb", "abbbbbbbbbbbbBb", "abbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbBb", "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string input = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "aTb", "aAb", "aaAb", "aaaAb", "aaaaAb", "aaaaaAb", "aaaaaaAb", "aaaaaaaAb", "aaaaaaaaAb", "aaaaaaaaaAb", "aaaaaaaaaaAb", "aaaaaaaaaaaAb", "aaaaaaaaaaaaAb", "aaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaAb", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string input = "aaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "A", "aA", "aaA", "aaaA", "aaaaA", "aaaaaA", "aaaaaaA", "aaaaaaaA", "aaaaaaaaA", "aaaaaaaaaA", "aaaaaaaaaaA", "aaaaaaaaaaaA", "aaaaaaaaaaaaA", "aaaaaaaaaaaaaA", "aaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string input = "bbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "B", "bB", "bbB", "bbbB", "bbbbB", "bbbbbB", "bbbbbbB", "bbbbbbbB", "bbbbbbbbB", "bbbbbbbbbB", "bbbbbbbbbbB", "bbbbbbbbbbbB", "bbbbbbbbbbbbB", "bbbbbbbbbbbbbB", "bbbbbbbbbbbbbbB", "bbbbbbbbbbbbbbbB", "bbbbbbbbbbbbbbbbB", "bbbbbbbbbbbbbbbbbB", "bbbbbbbbbbbbbbbbbbB", "bbbbbbbbbbbbbbbbbbbB", "bbbbbbbbbbbbbbbbbbbbB", "bbbbbbbbbbbbbbbbbbbbbB", "bbbbbbbbbbbbbbbbbbbbbbB", "bbbbbbbbbbbbbbbbbbbbbbbB", "bbbbbbbbbbbbbbbbbbbbbbbbB", "bbbbbbbbbbbbbbbbbbbbbbbbbB", "bbbbbbbbbbbbbbbbbbbbbbbbbbB", "bbbbbbbbbbbbbbbbbbbbbbbbbbbB", "bbbbbbbbbbbbbbbbbbbbbbbbbbbb"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string input = "babababababababaabababababa";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "bUa", "baUa", "babUa", "babaUa", "bababUa", "bababaUa", "babababUa", "babababaUa", "bababababUa", "bababababaUa", "babababababUa", "babababababaUa", "bababababababUa", "bababababababaUa", "babababababababUa", "babababababababaUa", "babababababababaaUa", "babababababababaabUa", "babababababababaabaUa", "babababababababaababUa", "babababababababaababaUa", "babababababababaabababUa", "babababababababaabababaUa", "babababababababaababababUa", "babababababababaababababaUa", "babababababababaabababababa"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string input = "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "bUa", "baUa", "baaUa", "baaaUa", "baaaaUa", "baaaaaUa", "baaaaaaUa", "baaaaaaaUa", "baaaaaaaaUa", "baaaaaaaaaUa", "baaaaaaaaaaUa", "baaaaaaaaaaaUa", "baaaaaaaaaaaaUa", "baaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaUa", "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string input = "baaaaaaaaaabbbbbbbbbbbbbbbbbbba";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "bUa", "baUa", "baaUa", "baaaUa", "baaaaUa", "baaaaaUa", "baaaaaaUa", "baaaaaaaUa", "baaaaaaaaUa", "baaaaaaaaaUa", "baaaaaaaaaaUa", "baaaaaaaaaabUa", "baaaaaaaaaabbUa", "baaaaaaaaaabbbUa", "baaaaaaaaaabbbbUa", "baaaaaaaaaabbbbbUa", "baaaaaaaaaabbbbbbUa", "baaaaaaaaaabbbbbbbUa", "baaaaaaaaaabbbbbbbbUa", "baaaaaaaaaabbbbbbbbbUa", "baaaaaaaaaabbbbbbbbbbUa", "baaaaaaaaaabbbbbbbbbbbUa", "baaaaaaaaaabbbbbbbbbbbbUa", "baaaaaaaaaabbbbbbbbbbbbbUa", "baaaaaaaaaabbbbbbbbbbbbbbUa", "baaaaaaaaaabbbbbbbbbbbbbbbUa", "baaaaaaaaaabbbbbbbbbbbbbbbbUa", "baaaaaaaaaabbbbbbbbbbbbbbbbbUa", "baaaaaaaaaabbbbbbbbbbbbbbbbbbUa", "baaaaaaaaaabbbbbbbbbbbbbbbbbbba"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string input = "bababababababbabbaaababaabaaaababababababa";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "bUa", "baUa", "babUa", "babaUa", "bababUa", "bababaUa", "babababUa", "babababaUa", "bababababUa", "bababababaUa", "babababababUa", "babababababaUa", "bababababababUa", "bababababababbUa", "bababababababbaUa", "bababababababbabUa", "bababababababbabbUa", "bababababababbabbaUa", "bababababababbabbaaUa", "bababababababbabbaaaUa", "bababababababbabbaaabUa", "bababababababbabbaaabaUa", "bababababababbabbaaababUa", "bababababababbabbaaababaUa", "bababababababbabbaaababaaUa", "bababababababbabbaaababaabUa", "bababababababbabbaaababaabaUa", "bababababababbabbaaababaabaaUa", "bababababababbabbaaababaabaaaUa", "bababababababbabbaaababaabaaaaUa", "bababababababbabbaaababaabaaaabUa", "bababababababbabbaaababaabaaaabaUa", "bababababababbabbaaababaabaaaababUa", "bababababababbabbaaababaabaaaababaUa", "bababababababbabbaaababaabaaaabababUa", "bababababababbabbaaababaabaaaabababaUa", "bababababababbabbaaababaabaaaababababUa", "bababababababbabbaaababaabaaaababababaUa", "bababababababbabbaaababaabaaaabababababUa", "bababababababbabbaaababaabaaaabababababaUa", "bababababababbabbaaababaabaaaababababababa"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string input = "aaaaaaaaaaabbbbbbbbbbbbbbbbbbb";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "aTb", "aaTbb", "aaaTbbb", "aaaaTbbbb", "aaaaaTbbbbb", "aaaaaaTbbbbbb", "aaaaaaaTbbbbbbb", "aaaaaaaaTbbbbbbbb", "aaaaaaaaaTbbbbbbbbb", "aaaaaaaaaaTbbbbbbbbbb", "aaaaaaaaaaaTbbbbbbbbbbb", "aaaaaaaaaaaBbbbbbbbbbbb", "aaaaaaaaaaabBbbbbbbbbbbb", "aaaaaaaaaaabbBbbbbbbbbbbb", "aaaaaaaaaaabbbBbbbbbbbbbbb", "aaaaaaaaaaabbbbBbbbbbbbbbbb", "aaaaaaaaaaabbbbbBbbbbbbbbbbb", "aaaaaaaaaaabbbbbbBbbbbbbbbbbb", "aaaaaaaaaaabbbbbbbBbbbbbbbbbbb", "aaaaaaaaaaabbbbbbbbbbbbbbbbbbb"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string input = "baa";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "bUa", "baa"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string input = "bba";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "bUa", "bba"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string input = "aab";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "aTb", "aAb", "aab"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string input = "abb";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "aTb", "aBb", "abb"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string input = "aabbbbbbbb";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "aTb", "aaTbb", "aaBbb", "aabBbb", "aabbBbb", "aabbbBbb", "aabbbbBbb", "aabbbbbBbb", "aabbbbbbbb"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string input = "aaaa";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "A", "aA", "aaA", "aaaA", "aaaa"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string input = "baabba";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "bUa", "baUa", "baaUa", "baabUa", "baabba"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string input = "aab";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "aTb", "aAb", "aab"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string input = "b";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "B", "b"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string input = "bb";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "B", "bB", "bb"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string input = "aaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbb";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "aTb", "aaTbb", "aaaTbbb", "aaaaTbbbb", "aaaaaTbbbbb", "aaaaaaTbbbbbb", "aaaaaaaTbbbbbbb", "aaaaaaaaTbbbbbbbb", "aaaaaaaaaTbbbbbbbbb", "aaaaaaaaaBbbbbbbbbb", "aaaaaaaaabBbbbbbbbbb", "aaaaaaaaabbBbbbbbbbbb", "aaaaaaaaabbbBbbbbbbbbb", "aaaaaaaaabbbbBbbbbbbbbb", "aaaaaaaaabbbbbBbbbbbbbbb", "aaaaaaaaabbbbbbBbbbbbbbbb", "aaaaaaaaabbbbbbbBbbbbbbbbb", "aaaaaaaaabbbbbbbbBbbbbbbbbb", "aaaaaaaaabbbbbbbbbBbbbbbbbbb", "aaaaaaaaabbbbbbbbbbBbbbbbbbbb", "aaaaaaaaabbbbbbbbbbbBbbbbbbbbb", "aaaaaaaaabbbbbbbbbbbbBbbbbbbbbb", "aaaaaaaaabbbbbbbbbbbbbBbbbbbbbbb", "aaaaaaaaabbbbbbbbbbbbbbBbbbbbbbbb", "aaaaaaaaabbbbbbbbbbbbbbbBbbbbbbbbb", "aaaaaaaaabbbbbbbbbbbbbbbbBbbbbbbbbb", "aaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbbb"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string input = "baa";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "bUa", "baa"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string input = "babbbbbbbbaaaaabbbbbbaaababbbbbbbbbaaaaabbbbbababa";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "bUa", "baUa", "babUa", "babbUa", "babbbUa", "babbbbUa", "babbbbbUa", "babbbbbbUa", "babbbbbbbUa", "babbbbbbbbUa", "babbbbbbbbaUa", "babbbbbbbbaaUa", "babbbbbbbbaaaUa", "babbbbbbbbaaaaUa", "babbbbbbbbaaaaaUa", "babbbbbbbbaaaaabUa", "babbbbbbbbaaaaabbUa", "babbbbbbbbaaaaabbbUa", "babbbbbbbbaaaaabbbbUa", "babbbbbbbbaaaaabbbbbUa", "babbbbbbbbaaaaabbbbbbUa", "babbbbbbbbaaaaabbbbbbaUa", "babbbbbbbbaaaaabbbbbbaaUa", "babbbbbbbbaaaaabbbbbbaaaUa", "babbbbbbbbaaaaabbbbbbaaabUa", "babbbbbbbbaaaaabbbbbbaaabaUa", "babbbbbbbbaaaaabbbbbbaaababUa", "babbbbbbbbaaaaabbbbbbaaababbUa", "babbbbbbbbaaaaabbbbbbaaababbbUa", "babbbbbbbbaaaaabbbbbbaaababbbbUa", "babbbbbbbbaaaaabbbbbbaaababbbbbUa", "babbbbbbbbaaaaabbbbbbaaababbbbbbUa", "babbbbbbbbaaaaabbbbbbaaababbbbbbbUa", "babbbbbbbbaaaaabbbbbbaaababbbbbbbbUa", "babbbbbbbbaaaaabbbbbbaaababbbbbbbbbUa", "babbbbbbbbaaaaabbbbbbaaababbbbbbbbbaUa", "babbbbbbbbaaaaabbbbbbaaababbbbbbbbbaaUa", "babbbbbbbbaaaaabbbbbbaaababbbbbbbbbaaaUa", "babbbbbbbbaaaaabbbbbbaaababbbbbbbbbaaaaUa", "babbbbbbbbaaaaabbbbbbaaababbbbbbbbbaaaaaUa", "babbbbbbbbaaaaabbbbbbaaababbbbbbbbbaaaaabUa", "babbbbbbbbaaaaabbbbbbaaababbbbbbbbbaaaaabbUa", "babbbbbbbbaaaaabbbbbbaaababbbbbbbbbaaaaabbbUa", "babbbbbbbbaaaaabbbbbbaaababbbbbbbbbaaaaabbbbUa", "babbbbbbbbaaaaabbbbbbaaababbbbbbbbbaaaaabbbbbUa", "babbbbbbbbaaaaabbbbbbaaababbbbbbbbbaaaaabbbbbaUa", "babbbbbbbbaaaaabbbbbbaaababbbbbbbbbaaaaabbbbbabUa", "babbbbbbbbaaaaabbbbbbaaababbbbbbbbbaaaaabbbbbabaUa", "babbbbbbbbaaaaabbbbbbaaababbbbbbbbbaaaaabbbbbababa"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string input = "aaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbb";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "aTb", "aaTbb", "aaaTbbb", "aaaaTbbbb", "aaaaaTbbbbb", "aaaaaaTbbbbbb", "aaaaaaaTbbbbbbb", "aaaaaaaaTbbbbbbbb", "aaaaaaaaaTbbbbbbbbb", "aaaaaaaaaaTbbbbbbbbbb", "aaaaaaaaaaaTbbbbbbbbbbb", "aaaaaaaaaaaaTbbbbbbbbbbbb", "aaaaaaaaaaaaaTbbbbbbbbbbbbb", "aaaaaaaaaaaaaaTbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaTbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaTbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaTbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaTbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaTbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaTbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaTbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaTbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaTbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaTbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaAbbbbbbbbbbbbbbbbbbbbbbbb", "aaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbb"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string input = "babababababababababababababababababababababababaa";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "bUa", "baUa", "babUa", "babaUa", "bababUa", "bababaUa", "babababUa", "babababaUa", "bababababUa", "bababababaUa", "babababababUa", "babababababaUa", "bababababababUa", "bababababababaUa", "babababababababUa", "babababababababaUa", "bababababababababUa", "bababababababababaUa", "babababababababababUa", "babababababababababaUa", "bababababababababababUa", "bababababababababababaUa", "babababababababababababUa", "babababababababababababaUa", "bababababababababababababUa", "bababababababababababababaUa", "babababababababababababababUa", "babababababababababababababaUa", "bababababababababababababababUa", "bababababababababababababababaUa", "babababababababababababababababUa", "babababababababababababababababaUa", "bababababababababababababababababUa", "bababababababababababababababababaUa", "babababababababababababababababababUa", "babababababababababababababababababaUa", "bababababababababababababababababababUa", "bababababababababababababababababababaUa", "babababababababababababababababababababUa", "babababababababababababababababababababaUa", "bababababababababababababababababababababUa", "bababababababababababababababababababababaUa", "babababababababababababababababababababababUa", "babababababababababababababababababababababaUa", "bababababababababababababababababababababababUa", "bababababababababababababababababababababababaUa", "babababababababababababababababababababababababUa", "babababababababababababababababababababababababaa"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string input = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "A", "aA", "aaA", "aaaA", "aaaaA", "aaaaaA", "aaaaaaA", "aaaaaaaA", "aaaaaaaaA", "aaaaaaaaaA", "aaaaaaaaaaA", "aaaaaaaaaaaA", "aaaaaaaaaaaaA", "aaaaaaaaaaaaaA", "aaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaA", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string input = "bbbbbbbbbb";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "T", "B", "bB", "bbB", "bbbB", "bbbbB", "bbbbbB", "bbbbbbB", "bbbbbbbB", "bbbbbbbbB", "bbbbbbbbbB", "bbbbbbbbbb"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string input = "bbbaaba";
    DerivationDisplay* pObj = new DerivationDisplay();
    clock_t start = clock();
    vector<string> result = pObj->getDerivation(input);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S", "bUa", "bbUa", "bbbUa", "bbbaUa", "bbbaaUa", "bbbaaba"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10468504&rd=6533&pm=4021
********************************************************************************
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <cmath> 
#include <cctype> 
#include <vector> 
#include <string> 
#include <set> 
#include <map> 
#include <utility> 
#include <algorithm> 
#include <iostream> 
#include <sstream> 
using namespace std; 
 
#define FF(i,a,b) for(int i=(a),_b=(b);i<=_b;++i) 
#define FB(i,a,b) for(int i=(a),_b=(b);i>=_b;--i) 
#define FFE(i,a,b) for(i=(a);i<=(b);++i) 
#define FBE(i,a,b) for(i=(a);i>=(b);--i) 
#define pb push_back 
#define si size() 
#define bit(i) ((long long)(1)<<i) 
typedef vector<int> VI; 
typedef vector<string> VS; 
typedef long long I64;  
typedef unsigned long long U64; 
 
class DerivationDisplay {  
public:  
vector <string> getDerivation(string input) {  
  VS res; 
  string p,s; 
  int state=0;  
   
  res.clear(); 
  res.pb("S"); p=""; s=""; 
  while (input.si>0) {     
    switch (state) { 
    case 0: 
      if (input[0]=='b' && input[input.si-1]=='a') { 
        res.pb(p+"bUa"+s);  
        state=2; 
        p+='b'; 
        s='a'+s; 
        input=input.substr(1,input.si-2); 
      } 
      else { 
        res.pb(p+"T"+s); 
        state=1; 
      } 
      break;   
    case 1: 
      if (input[0]=='a' && input[input.si-1]=='b') { 
        res.pb(p+"aTb"+s);          
        p+='a'; 
        s='b'+s;         
        input=input.substr(1,input.si-2); 
      } 
      else if (input[0]=='a') { 
        res.pb(p+"A"+s);          
        state=3;         
        } 
      else { 
        res.pb(p+"B"+s); 
        state=4;         
        } 
      break;   
    case 2: 
      if (input[0]=='a') { 
        if (input.si>1) { 
          res.pb(p+"aU"+s); 
          p+='a';           
        } 
        else res.pb(p+"a"+s); 
        input=input.substr(1,input.si-1); 
      } 
      else { 
        if (input.si>1) { 
          res.pb(p+"bU"+s); 
          p+='b';           
        } 
        else res.pb(p+"b"+s); 
        input=input.substr(1,input.si-1); 
      } 
      break; 
    case 3: 
      if (input.si>1) { 
        res.pb(p+"aA"+s); 
        p+='a';           
      } 
      else res.pb(p+"a"+s); 
      input=input.substr(1,input.si-1);       
      break;   
    case 4: 
      if (input.si>1) { 
        res.pb(p+"bB"+s); 
        p+='b';           
      } 
      else res.pb(p+"b"+s); 
      input=input.substr(1,input.si-1);       
      break;   
    } 
  } 
  return res; 
}  
 
 
  
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/