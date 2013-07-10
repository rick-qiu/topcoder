/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2229
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

class SpamDetector {
public:
    int countKeywords(string subjectLine, vector<string> keywords);
};

int SpamDetector::countKeywords(string subjectLine, vector<string> keywords) {
    int ret;
    return ret;
}


int test0() {
    string subjectLine = "LoooW INTEREST RATES available dont BE slow";
    vector<string> keywords = {"interest", "rates", "loan", "available", "LOW"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string subjectLine = "Dear Richard Get Rich Quick no risk";
    vector<string> keywords = {"rich", "risk", "Quicken", "wealth", "SAVE"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string subjectLine = "a a a a a a a a a a a a a a a a a a a a a a a a a";
    vector<string> keywords = {"aa", "b", "c", "d", "e", "f", "g", "a"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string subjectLine = "in debbtt againn and aAgain and AGAaiIN";
    vector<string> keywords = {"AGAIN", "again", "Again", "again"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string subjectLine = "PlAyy ThEE Lottto get Loottoo feever";
    vector<string> keywords = {"play", "lotto", "lottery", "looser"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string subjectLine = "aabb aaabb abb aab ab bbaaa aab";
    vector<string> keywords = {"aab"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string subjectLine = "abc aabc abbc abcc aabbc abbcc aabcc";
    vector<string> keywords = {"abc"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string subjectLine = "AAAAaaaaaaaaAAAAAAAbbbbbbccccc AAAAAbccc";
    vector<string> keywords = {"abc"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string subjectLine = " ";
    vector<string> keywords = {"empty", "space", "does", "not", "match"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
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
    string subjectLine = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    vector<string> keywords = {"ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab", "ab"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
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
    string subjectLine = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
    vector<string> keywords = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "ab"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string subjectLine = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
    vector<string> keywords = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "b"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
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
    string subjectLine = "aaaaab abbbbb aaaabbbb ab";
    vector<string> keywords = {"aab", "aBB"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string subjectLine = "oooooooooooooooooooooooGooooooooooooooooooooooo";
    vector<string> keywords = {"ogo"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
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
    string subjectLine = "OgO";
    vector<string> keywords = {"OOgOO"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
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
    string subjectLine = "AAABBBCCCDDDEEEFFFGGGHHHIIIJJKKLLMMNNOOP";
    vector<string> keywords = {"aabbccddeeffgghhiijjkkllmmnnoopp", "aabbccddeeffgghhiijjkkllmmnnoop"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
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
    string subjectLine = "AAABBBCCCDDDEEEFFFGGGHHHIIIJJKKLLMMNNOOP";
    vector<string> keywords = {"aabbccddeeffgghhiijjkkllmmnnoopp"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string subjectLine = "ffghiijkklmmnnopqqrsttt lmnno pppp";
    vector<string> keywords = {"abcdefghijklmn", "abcdefgh", "lmmnno", "pp"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string subjectLine = "no loosers at losers slots";
    vector<string> keywords = {"losers"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string subjectLine = "ded deed dded ddeedd dedd deedd ddeed deeed deeded";
    vector<string> keywords = {"Deed"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string subjectLine = "";
    vector<string> keywords = {"nothing", "nada", "zip", "nil", "squat", "vaccuum"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string subjectLine = "Z";
    vector<string> keywords = {"a", "b", "c", "d", "e", "f", "g", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "Z"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string subjectLine = "z y x w v u t s r q p o n m l k j i h g f e d c b";
    vector<string> keywords = {"a", "b", "c", "d", "e", "f", "g", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "Z"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string subjectLine = "zz bbb ddd lll kkkkk qq rrr pppp uu n mmm i";
    vector<string> keywords = {"a", "b", "c", "d", "e", "f", "g", "i", "j", "k", "l", "m", "nn", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "Z"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string subjectLine = "to b or not to b";
    vector<string> keywords = {"a", "b", "c", "d", "e", "f", "g", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "Z"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string subjectLine = "Ben said is am are was were be being been bee";
    vector<string> keywords = {"ben", "be"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string subjectLine = "it is unlikely to match if there are no keywords";
    vector<string> keywords = {};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string subjectLine = "Dear Richard Get Rich Quick no risk";
    vector<string> keywords = {"rich", "risk", "Quicken", "wealth", "SAVE"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string subjectLine = "a";
    vector<string> keywords = {"a", "a"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string subjectLine = "todo";
    vector<string> keywords = {"ttodo"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string subjectLine = "aabbcc";
    vector<string> keywords = {"aABBCC"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string subjectLine = "aabb";
    vector<string> keywords = {"aab"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string subjectLine = "abcddd";
    vector<string> keywords = {"abc"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string subjectLine = "qw qqw";
    vector<string> keywords = {"qqw", "qqw"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string subjectLine = "helo";
    vector<string> keywords = {"hello"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string subjectLine = "lo";
    vector<string> keywords = {"loo"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string subjectLine = "again againn aagain";
    vector<string> keywords = {"AGAIN", "again", "aGain", "Again"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string subjectLine = "aa";
    vector<string> keywords = {"ba"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string subjectLine = " cooooool abcdFGHI abb cc dd ee ff gg hh ii jj";
    vector<string> keywords = {"cl", "abcdefgh", "ab", "c", "d", "ii", "j"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
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
    string subjectLine = "ba";
    vector<string> keywords = {"bab"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string subjectLine = "plaaaaya";
    vector<string> keywords = {"plaay"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string subjectLine = "fo";
    vector<string> keywords = {"foo"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string subjectLine = "lowwwww";
    vector<string> keywords = {"low"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string subjectLine = "aaab";
    vector<string> keywords = {"aab"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string subjectLine = "boird";
    vector<string> keywords = {"bird"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string subjectLine = "misssissippi mississsippi mississipppi misisipi";
    vector<string> keywords = {"mississippi"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string subjectLine = "a";
    vector<string> keywords = {"aa"};
    SpamDetector* pObj = new SpamDetector();
    clock_t start = clock();
    int result = pObj->countKeywords(subjectLine, keywords);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=5851&pm=2229
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define VAR(a,b) typeof(b) a=(b)
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
#define FOR(i,a,b) for(int i=(a),_b=(b);i<=_b;++i)
#define FORD(i,a,b) for(int i=(a),_b=(b);i>=_b;--i)
#define FOREACH(it,c) for(VAR(it,(c).begin());it!=(c).end();++it)
#define ALL(f,w) ({ bool _ok=true; f _ok=_ok && (w); _ok; })
#define EXISTS(f,w) (!ALL(f,!(w)))
typedef long long LL;
const int INF = 1000000000;
typedef vector<int> VI;
template<class T> inline int size(const T&c) { return c.size(); }
template<class T> inline vector<T> makeV(const T&x) { return vector<T>(1,x); }
template<class T> inline vector<T> makeV(const T&x,const T&y) {
  vector<T> v(2); v[0] = x; v[1] = y; return v;
}
template<class T> inline vector<T> makeV(const T&x,const T&y,const T&z) {
  vector<T> v(3); v[0] = x; v[1] = y; v[2]=z; return v;
}
template<class A,class B> inline bool contains(const A&a, const B&b) {
  return find(a.begin(),a.end(),b)!=a.end();
}
template<class T> string i2s(T x) { ostringstream o; o<<x; return o.str(); }
vector<string> split(string s,string del=" ") {
  s+=del[0];
  string w;
  vector<string> res;
  FOREACH(it,s) {
    if(!contains(del,*it)) w+=*it;
    else if(w!="") { res.push_back(w); w=""; }
  }
  return res;
}
 
///////////////////////////////////////////////////////////////////
 
bool match(string a, string b) {
  FOREACH(it,a) *it = tolower(*it);
  FOREACH(it,b) *it = tolower(*it);
  int pa = 0, pb = 0;
  while(pa < size(a) && pb < size(b)) {
    char c = b[pb];
    int ilea = 0;
    while(pa < size(a) && a[pa]==c) { ++ilea; ++pa; }
    int ileb = 0;
    while(pb < size(b) && b[pb]==c) { ++ileb; ++pb; }
    if(ilea < ileb) return false;
  }
  return pa==size(a) && pb==size(b);
}
 
struct SpamDetector {
  // MAIN
  int countKeywords(string subjectLine, vector <string> keywords) {
    vector<string> v = split(subjectLine);
    int res = 0;
    FOREACH(it,v) if(EXISTS(FOREACH(jt,keywords),match(*it,*jt))) ++res;
    return res;
  }
 
 
  
///////////////////////////////////////////////////////////////////
 
 
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/