/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8444
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

class CandidateKeys {
public:
    vector<int> getKeys(vector<string> table);
};

vector<int> CandidateKeys::getKeys(vector<string> table) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> table = {"ABC", "ABC", "ABC"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> table = {"ABC", "ABD", "ABE"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> table = {"ABC", "ACD", "BBE"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> table = {"BDC", "AFC", "BFG", "GAD", "DBA", "BCB", "ACC"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> table = {"AABAA", "ABABA", "ABBAA", "BBBAA", "BBBAB", "ABBBB", "BBBAA", "AAABB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> table = {"A", "B"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> table = {"AAABA", "BBBAB", "BBBAA", "AAABB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> table = {"AAABA", "BBBAA", "BBBAA", "AAABB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> table = {"ABAABA", "BABBAB", "BABBBB", "ABAAAA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> table = {"AAC", "ABD", "BAC", "BBD"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> table = {"ACB", "ACA", "BDB", "BDA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> table = {"ACEB", "ACEA", "BDFB", "BDFA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> table = {"ABA", "BAA", "CAB", "ACA", "DBC", "CAC"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> table = {"AA", "AB", "AC", "BD"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> table = {"ABBBBA", "BAABBA", "BABABA", "AAAAAA", "BBAABB", "BBABAA", "BBAAAA", "ABAAAA", "BBABBA", "BBABAA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> table = {"BBABABAB", "BBAABABB", "ABAAABBA", "ABAABBAB", "BABBBBAA", "AABBBBAB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> table = {"AAABBABAA", "BBAAABBBB", "BABAABAAA", "ABAABBBAA", "BBBBAAABA", "ABABBABAA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> table = {"AB", "BB", "AB", "BA", "AB", "AA", "AA", "BA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> table = {"BBA", "ABA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> table = {"ABBABBBBBB", "BAAABBBBAB", "BAABAAAAAB", "AABBBABBBA", "BABABAABBB", "BBBABAAAAA", "BAABABBAAA", "BBBBBBABAA", "BABAABAABB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> table = {"BAB", "BBB", "BBB", "AAB", "ABA", "ABA", "BBA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> table = {"BBBBAABAA", "BBBBBBBAB", "BAABBBABB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> table = {"A", "A", "A", "A", "B", "A", "B", "A", "B"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> table = {"A", "B"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> table = {"BBABA", "ABBBB", "BABBB", "BBABA", "BAABB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> table = {"BAAAB", "BABAB", "ABAAB", "AAAAB", "BABAB", "ABBBB", "AAAAA", "BABBA", "AABBA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> table = {"AAA", "AAB", "BBA", "AAB", "AAB", "BBA", "BAA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> table = {"BBBBA", "ABBBA", "BBBBB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> table = {"AA", "AB", "BA", "BB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> table = {"AABBBBAAB", "ABBABBAAB", "AABABBAAA", "ABAABBABA", "ABABBABAA", "AAAABAABB", "ABBAABABA", "BBBABBABA", "AABBAABAB", "AAAABBBAA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 6};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> table = {"ABAA", "BAAB", "AAAA", "BBAB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> table = {"ABAB", "ABBB", "BBAB", "ABAB", "BABB", "BBAA", "AAAA", "ABBA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> table = {"AABAB", "ABABB", "BBABB", "AAAAB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> table = {"AABA", "AAAA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> table = {"AAABA", "BBBAA", "BBBAB", "AABBA", "BBABA", "BABAA", "ABBBA", "BBBBA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> table = {"AA", "AA", "AB", "AB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> table = {"A", "A", "A", "B", "A", "A", "A", "A"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> table = {"AAAAAAABAA", "BABAABAAAB", "BBABAAABBB", "BBBBBABAAB", "AAAABBAAAB", "BABAAABBBB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> table = {"ABBBBA", "BAABBA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> table = {"BBA", "ABA", "BAB", "BAA", "AAB", "BAB", "ABB", "BBB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> table = {"BBBBABABAA", "AABAABABBA", "BBBBABBAAA", "AAABAABAAA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> table = {"BAAABAAAA", "BBBBAABBB", "AAABBBBAA", "BBABABBAA", "BAABBABBB", "BBBAAAABA", "AAABAABAB", "BAABAAABB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> table = {"BB", "AA", "BA", "AA", "BA", "BA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> table = {"ABBB", "BBAB", "BABA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> table = {"BABAABBBB", "AAABABAAA", "BBAABAABA", "BBBBBBAAB", "BABAAABAA", "BBABABBAA", "ABABBBBBA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> table = {"BB", "AA", "BA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> table = {"ABA", "BBA", "AAA", "ABB", "BBA", "AAA", "BBA", "BAB", "BAA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> table = {"BBBABAAAAB", "BBBAAAAAAA", "BBBBAAABBA", "AABBBABAAB", "BAAABBAABA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> table = {"AABBB", "BABBB", "AABBB", "ABABB", "BBBBA", "ABAAA", "BBBAB", "BBAAB", "AABAA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> table = {"AAAAAABBA", "BABAAAABA", "AABBAAABB", "ABAAABAAA", "AABABABAA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> table = {"AAABABBA", "BBBBBABA", "AAABAAAA", "AABAABBA", "AABABABB", "BAAAABAA", "BABAAABA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> table = {"AABB", "BABA", "CAAB", "DAAA", "EBBB", "FBBA", "GBAB", "HBAA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> table = {"AD", "BE", "CF"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> table = {"AABBA", "BABAA", "CAABA", "DAAAA", "EBBBB", "FBBAB", "GBABB", "HBAAB", "IABBC", "JABAC", "KAABC", "LAAAC", "MBBBD", "NBBAD", "OBABD", "PBAAA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> table = {"CSCA", "RIGN", "ZGCE", "NLGY", "TXUM", "BNWK", "ORCP", "GOVC", "JBFB", "ZGPB", "VMMN", "VQZK", "FCDS", "FGOJ", "BRCI", "BWGN", "JQLX", "QSVE"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> table = {"WNEJ", "HPCQ", "TNCO", "WLZK", "BQZA", "VXTV", "UUJV", "CHTL", "FGXC", "YDAB", "OEFU", "SKCM", "IGUU", "IGFE", "XBRH", "VRVP", "SRDL", "NVJH", "QDVT", "HMCA", "SUCU", "OZWH", "RCHF", "DKOL", "OAWW", "APNO", "PXHH", "RJRY", "MNMV", "JNMQ", "AJJB", "VFUV"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> table = {"DYPOGTJG", "ARRRXRKD", "ZGXERQOW", "DTKSUFRP", "BXSYRAFP", "IGBNHJLR", "CHBNLMKD", "XJUMOJJW", "WLQVXDKQ", "EPGLLBPV", "UJBBZEOB", "MPIFERJI", "HTIPVEBC", "ZZOWCXEM", "WEBSGPFY", "KWJYSLPQ", "RWPSBNTM", "ZGINTEYY", "HZYKAMYU", "SSBKXOXY", "HDMRQARA", "OKJNPFBD", "XDPGMAJQ", "CHVFBYBK"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> table = {"OBSLB", "HCWYH"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> table = {"XTRVWAIJ", "TYQEGSDP", "GZDSLZKH", "JWRYQXPZ", "XAKYQXRQ", "ZYUVBEOT", "FNSMNMYB", "TTJKKEAY", "FMIJTEYT", "JJLWPFMW", "XQUAXATY", "WLUFVDPP", "SOSMCZYP", "KKBACWQF", "LKJLRHOR", "AVMCVPIH", "ITLXTKSV", "BDCLWPWO", "GHAGLPJP", "JFBNSJXJ", "FBHQMEOM", "GWAIXFML", "MFNVVAKD", "NRGJJYZG", "ADOGKPPT", "CVMOVHMH", "MNMSUIWO", "RILPORUY", "OPXGMWYQ", "WRQLSEGX", "MYRNRIPP", "MBHMSFHC", "RSDWBIZD", "YZQUZXKX", "YPCDGNTK", "ILJFIHFC", "SFTYJTAY", "OGZEGTKM"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> table = {"KFBNFLLHM", "XTLZRVSKD", "ZMCGERTFG", "VKIITTZVT", "FGJMYGLBY", "VAKCGKQRV", "PTIWMCPKX", "ZHGMJHSKT", "KQNKGVMBS", "NHGWEULIK", "QHOKTQUJR", "UWSWBMQLB", "VCXHSCGNR", "QJNBMFYBC", "VKGORHJQX", "LWHWVIARH", "DPNVJDEUD", "OITLWTVAS", "QBEYCQVNR", "FEDJRZSPH"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> table = {"ETQNZEKNUR", "KZNGVESXYS", "MEYMEYJVKJ", "WDNJUMVXOP", "CUVXCGMKDP", "OCUFPGPOPE", "KECQFWLZWN", "HLZWIWGGYP", "BRKOIEERFV", "HIDUEVFAER", "OOKJJDUPTB", "WWXYLSWGZB", "TEUTSZEWCI", "NHRZPFBXHG", "QGYTAQEMCQ", "CDMENNIQHC", "CQVSGEQPJN", "SJVSJKWRUU", "JXPWLGIKLE", "LWADKTIMKQ", "RMMPTDHFER", "VBKJQHEIUB", "PJRMTKDUEJ", "BZFXOSLDKQ", "YFSYZJNMFR", "MBWZNIDNNP", "KNVKHWJKFR", "LCUAZVHTUB", "ADFIWUABNB", "HMGNMNYDYP", "PAAGRYEKCN", "ZKCQSESRFX", "SUDIWQOGDV", "QUTZSEKXJQ", "DMQKFCQDSA", "QWSWKUOWEJ", "ECADPOVBUI", "ZSOAVLYRAE"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> table = {"YOSWPKHOLY", "KLWFNQAQDJ"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> table = {"M", "I", "Q", "V", "W", "M", "H", "J", "S", "K", "V", "R", "L", "Q", "W", "S", "E", "V", "J", "J", "F", "H", "R", "Z", "Q", "U", "K", "F"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> table = {"WOLIEVU", "ZVTFLFK", "XYUSUOX", "FNVUDZR", "WTRZEZZ", "BDBOXVG", "GUOUHFT", "OMYBVIZ", "GZVDJBO", "XNKCHWH", "TTOPWCB", "KMPXBVD", "VMXVLHE"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> table = {"MIJFMVUV", "CGQPVVHC", "XXYOYZLX", "AYRWOVTV", "CVCFEPOR", "KSEPAWIY", "SARPDUNB", "MRKOQIWH", "ALCEPEXF", "GMJRURVG", "KCZZDNVZ", "HQULUTBV", "AKODKOHZ", "ORYXRDKQ", "GKYFXDXJ", "EHUQNQKA", "PWUCDHWD", "GBJWWCXE", "UDTHSAVY", "LVIBKWTC", "YGOZNYJQ", "KTTFYIGZ", "AANCBYSQ", "LPJIUHET", "ELSLADSX", "FDHLCFKT", "XFVHBBDP", "NAJFYEER", "RMMIOEKO", "EMSMANAG", "IKVZJEPA", "LZBSMBTH", "PCZKMCMF", "TICXQLHP", "BQMINALQ", "QBUTLCEW", "VXMDTYLP", "AJVWHFNX", "CZAOVDCK"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> table = {"LQT", "YAV", "GCZ", "NUO", "YJM", "MQB", "XAA", "FFN", "FKA", "VAE", "YGA", "EKA", "WDH", "XBO", "HTI", "ZQQ", "HOM", "BFA", "HFY", "KNJ", "VLD", "YLH", "XVZ", "DNX", "HCD", "INJ", "XTX", "JID", "DYE", "XMP", "BLZ", "ZMN", "KFN", "IGB", "HPI", "OEZ", "TZF", "TTX", "GWP", "AUY", "VQZ", "OBR", "NLM"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> table = {"JQMKRETL", "IINMHOWV", "KBOFTXZM"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> table = {"FNOTIKQO", "BQMZSPOG", "RUSTNHWX", "YSOROLRE", "RVQOFJHF", "VASRTNLL", "XLKYMQAW", "PVTITKOH", "RUNEXZAG", "YVSOJNJS", "TUUQPIYC", "SBZNTNKN", "EUALTLUO", "WWVOWTYI", "MFSWLNHC", "GWQHEMUG", "GJZQRXSB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> table = {"JGBWTBPZA", "ZRGQTCOWH", "MCWISQDRB", "KTJDTOHMD", "TOOQKCCSJ", "ZAWZHITOB", "XIPVHZHYN", "MDJKXTXVM", "WCAOTTMOP", "XTCSGKFUD", "AOMMYQLPR"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> table = {"CFNL", "FBKM", "DECL", "OGIC", "BLAO", "IFNE", "HOMK", "IEJN", "HCAK", "HGHN", "MAAB", "MCCI", "HNCI", "ELAN", "KGKG", "NJID", "ENCA", "NKKG", "CFAB", "EGMN", "FDEE"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> table = {"CDAEA", "DCDBE", "EFEDD", "FEDDB", "EAGBD", "CAFDC", "BCFDG", "GEFDE", "CBDCD", "CEEFE", "BAGFB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> table = {"BEFFFE", "BEEGDC", "EABGCB", "CCCCFF", "GGGFAF", "BBEBBE", "CFGEEA", "ABBBBG", "EBBFBC", "GFGFBD", "ECBBBC", "BGCFFC", "DCCECC", "CECGGG", "DGFCGF", "DFFDBB", "GFDAGE", "ACACDD", "DBBGAE", "GEBCGE", "FGDBFD", "DBEABB", "FAEAFF", "BDAFGB", "AADGEF", "EAFBCD", "DAADCA", "EGFFEG", "BEEDDB", "BBGBGB", "DADDBF", "EDAECE", "EGCEEA", "ACBFBE", "EEDFEF", "DEBGCG"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> table = {"EGFCGG", "DCFCCD", "ACCGAE", "AFDEGA", "BBACDB", "CFGBCD", "FAFGCB", "FBDGAC", "DDFFGD", "CEDDEF", "BDAFGE", "DGBEDF", "CCABGA", "DFBGCC", "EGADFC", "AEBGGE", "FACEED", "AGEGEC", "CADFDB", "DGDFFE", "BFGCCC", "EDGAGA", "BAFGGA", "CABCEG", "GDGGFG", "AGDEDG", "ADBCAE", "EFBCGE", "FGEAAE", "ACFFDC", "DCDAED", "EFAFEB", "DAABBC", "FDABCB", "AFFBGF", "EBBFCD", "GEECEF", "AADCFG", "CACDDB", "ABCGDF", "ACDBFB", "BDCFDG", "ACCAFB", "EBGDEC", "DBADCB", "DADECC", "DGCBDF", "BABGGA", "GBAAGF", "BDAEGG"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> table = {"BAE", "CAC", "AGE", "FFF", "CAE", "GGE", "GFG", "BGD", "CEA", "EAF", "FEA", "FDE", "BGG", "EGF", "BDD", "ABA", "DFA", "GAE", "FBG", "EGA", "DAE", "DFC", "DAF", "AAF", "CBC", "ECB", "FBC", "FAD", "DAF", "GDG", "BAC", "DFF", "DDE", "CEA", "EBG", "EFA", "GDC", "EBD", "CEF", "BAE", "GFC", "EEF", "CBB", "AGC", "AGF", "GEC"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> table = {"BDFD", "AFGA", "BFDD", "FEBA", "CBFF", "CDFB", "GCGC", "EGDB", "AEGC", "FGCA", "BGGC", "DGCC", "CCCE", "DBDB", "EGED", "GAEB", "FCBB", "GDEF", "FAFA", "DCBA", "EACE", "FEAA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> table = {"CF", "AE", "CD", "AE", "GC", "GD", "BE", "EF", "GD", "GC", "CE", "AE", "EC", "CE", "AD", "FC", "AF", "AF", "FG", "FA", "BG", "AE", "EG", "AF", "EE", "FG", "CA", "DG", "GE", "FA", "GA", "BD", "CG", "FG", "DB", "FC", "EC", "EA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> table = {"AEABFBAA", "DDBFBFEF", "ABAADEAB", "CCCCEGCD", "FEDBBDDG", "CGFEBAAE", "FDEDCDGG", "BEBEECGG", "BBDFACFC", "DEEFCBCF", "ADBDCBGF", "DCAGACBC", "DEGDCFGF", "FGAECCEE"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> table = {"AEAGFDGAB", "CDECDGCBF", "CEAGBBCGC", "AGEGBCGCG", "FGBDDAAEF", "GAGGFEFAD", "GGFCCDFFB", "CGCAFGBFE"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> table = {"G", "B", "F", "C", "D", "G", "A", "D", "G", "A", "E", "C", "E", "F", "C", "G", "A", "G", "B", "G", "F", "A", "G", "D", "C", "E"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> table = {"EACE", "ABCB", "DEEA", "AGBD", "GACF", "BBDB", "CAFC", "FGFD", "BAAB", "GGGA", "ACGD", "DGGC", "AGED", "GCDE", "AABD", "DEDF", "CACC", "DBEE", "BECB", "AEGE", "GECC", "ABGG", "BEFD", "BFAA", "DCCB", "FGGF", "FFDF", "ACEC", "GAAF", "EDDC", "BBGD", "GFDE", "FEFF", "CBGD", "CEEE", "EEBF", "EEGE", "FFCC", "GDGD", "CAGD", "FAFG", "FAEC", "FGGG", "DCDB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> table = {"CEBAGED", "EBGDFFD", "EFABBAA", "CBDCDBD", "BDDBACD", "CECEGGB", "CDDDBAF", "FFEDEAD", "AFAFAGG", "EBGDEFF", "CFDDGCA", "CGBADAF"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> table = {"BBGCEGFAEE", "EDBFACGABC", "DDEFFBCDEG", "DGGGEEFADD", "ECFDBAEGDD", "EDEGFDBAAB", "BBCBADEGGC", "CDDBDDAEFG", "BCEDBDDCFB", "GGADBGCFGG", "BGGBEFFFDD", "DGAGGBGCEC", "CEAFADFGGA", "CCADGFGBDB", "GADEBBFGBC", "GBDCGBBAGA", "CBECDFGECD", "BABFFBAFDG", "AFBECEGEDE", "DDCEAACCBD", "BFBADBFGDC", "AAADBADBGD", "CFCDABCDCC", "GBGCCEAABB", "BFEDCGCDEE", "EFCBFCDAAG", "GDFGAEBBEG", "AGADDAGBDC"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> table = {"EFAAFG", "DCGFGG", "DGBCAF", "DEGECD", "CCBCBC", "CGEFDA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> table = {"FEBFAE", "ABGDDF", "BBCCEB", "BDEFFF", "FBFFCA", "CGFACG", "FBAADE", "EFGCBC", "FGEDDF", "BBAAAG", "AACGFB", "EDDBBD", "FDDFCE", "GCEAFC"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> table = {"FCCG", "BFFG", "FCDF", "GGDB", "CAED", "DGGG", "ACEE", "EFCA", "EGED", "DFEE", "FEEE", "GCBA", "GDGC", "DBCB", "GAGA", "BFFG", "FEEE", "CBFD", "BEDG", "CDGE", "FDEA", "DACG"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> table = {"BFEDCDDCBD", "FBAACBEDFG", "FAEEFCCADC", "GBCGABGCEC", "AEDEEDFDBC", "GDAEFCCAGE", "FEDCDGGCGD", "FDEFEACEFG", "AGGDCECBFF", "BGEBABCBCB", "ACFCGEBBDF", "AFGEEGEAAC", "DFADBABDBA", "FFCGBCCAAB", "ACEDDCDAGA", "CAAFGCAFAA", "AFFFCABADG", "CCAABDBCGE", "FBBBBBBGEG", "CEABFDFEGD", "BABDBCBCDD", "EDCEEACAGF", "ADEGDFDEBF", "AAGDBCCAGF", "CDFCGDADDF", "DBCEBCAGFF", "AFBEBGBECF", "AEBGAADDDE", "BBAEFFDDAA", "FEBFEGGEAC", "BAEFCBFBDB", "FDGDBBFGAC", "AFCCDCGBCB", "BCDBGACBEA", "GGAFADDACA", "DDECFGDEFC", "BGBDEBCBCF", "ECEBGCDFFD", "FCBBDCGFFD", "BCFDAAAABF", "DBCEGBCFDA", "GBFCEFEGEC", "GCAECGAADB", "DGCBAGBEEA", "DFFBBCCCDF", "DGBAGFAGDC", "ECGEDCFEBB", "GCDFAGAFDD"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> table = {"FCFBFCBED", "AADDBCDFG", "CCBBEAFCB", "EADGCAFFF", "CGEDBEBFD", "DFCCGFGGA", "BAFBBCDGB", "FCBCBECFE", "DAFGFFCCC", "BDFGCBEEF", "GCBAAGFGB", "GBEDFGCGB", "AGBAFBDAC", "FGEGGDACE", "DEBACAEBG", "FFDCCCADG", "BDCDEDFFG", "DBACGEFCE", "DACEAGADG", "ACBDAACCB", "FADCGGBED", "BCGFCGBGE", "CDGDAFFAD", "EFCABDCBE", "GFBAEFBFF", "EGEFEAACB", "BDEECFCAB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> table = {"DB", "CD", "DF", "DC", "GC", "AB", "AD", "GA", "GA", "AD", "EC", "AF", "FF", "EF", "DA", "DA", "GA", "GG", "BC", "AA", "GF", "EE", "BA", "BB", "AF", "EF", "AE", "FG", "FD", "BF", "AB", "FE", "BA", "DC", "FA", "FE", "DE", "AA", "FB", "CG", "DA", "GB", "AC"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> table = {"DEB", "DCA", "GCG", "DFB", "BEG", "EBA", "FCE", "DCE", "DDA", "FCA", "ADE", "CEF", "ABC", "DEG", "GFF", "EBF", "FAD", "DCB", "FFG", "CED", "GCF", "FFF", "CFA", "GBG", "FBA", "DCA", "EAB", "FBC", "EEB", "EAF", "BED"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> table = {"BACADAEFAF", "AEBAAEEDGF", "FDDABDFDGD", "GECCADEFCC", "GGEFEFBBBG", "EFGEBFCCAA", "EBDBFCFDEB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> table = {"BADBEACD", "ADEDGCBE", "BCEFFFDB", "DEEAACGG", "DBCABBGF", "DGEEDFBB", "BEFDFFDG", "FCDBEGEB", "DDFBEFAG", "FDGFCADB", "DDCDDGDA", "FDEABEFG", "ADECGFEB", "CBCABCBA", "FBCGABGG"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> table = {"CEFFBEBDDC", "DBEFFDCCEA", "AFGBFCBFEB", "DBEABCBBGG", "AEEBEGBADB", "EEAADAGEFC", "CDEBAGACEE", "FGBGDBGEDG", "FAFEBAGDCE", "DBBACDGFEC", "ABGBFGCCAA", "BEGGECADGG", "DEFCFFGGCD", "EDGAAGEEFB", "EEGGAAABEC", "CDEBDEEFDF", "DABDADFBAE", "DFACGACEDE", "ABBDDCEEFE", "AFEAGGFGFC", "FECEDAGBAD", "EAEBEEAGEF", "FGFGGDEBCA", "FGGGAAEEBE", "ABFEDEGFAA", "GCBFAGFFBG", "BGBCEAABEA", "FFCFAGCEDC", "BDAABDAACD", "EAFDACBDFB", "BFEECFADEC", "DCFADBCCCC", "FCEAFDFCGD", "CDDDCCFBGC", "AFGFBAFABC", "BDADAGGEBA", "DCEFCCGEEG", "GCGEAEEFFC", "AGAFCBBBFA", "DFDCFCFFEE", "ABEDBADEGF", "FCEBFFEGEB", "EDBBGBEDGG", "FAACFDFCBA", "BDFCEDFBGD", "ECGCFCEFCE", "AEBDAEGCCB", "BABFCDBAAE", "AACDFEBFBC", "BCABGDEDAA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> table = {"ABCBDCFBGD", "DCDBFAEBEC", "GBADFABEBD", "BBDDGDGCFA", "EBBBCFGBCE", "ABAACGBDEA", "ABCAACEAGD", "BFAFFDBGDE", "GDACCCGFGA", "DFEDBDAECF", "GGCBFCDBEC", "EFGDFAGABF", "EEGAEAACEA", "FBFEDAGEGE", "DBDADGEGEB", "EGCAFBDBCE", "DADECEBABE", "ACDDEDADGA", "BFBEAFDCAE", "EGDCAECAGG", "ABEGCEEAGB", "EDCCCBECFA", "CBGGFEFGGF", "AFEDEBGFBB", "CEDFEDAAFD", "AFCGFBABFG", "ACFDEACEBB", "BBGDGAAAEE", "EECDGBGECF", "GGEBBEAFDB", "AEFBGDFFEG", "ABGAEDBEGB", "FGGEDGABFF", "ADFCEAGCGA", "DBEDAFAGEB", "FFEDEAEGCA", "DFECBFBDEE", "EGBBACEDGA", "BADDCAFDAD", "GCGGBAFEAG", "EFAEBCEFGG", "AAEEDFDCGD", "GBDBEBABBA", "FGAABGEGBC", "GGCFAGEGBC", "GBCCCAEDGB", "CBDFBDACEA", "CFFDDFADCD", "CCDCDDGEAA", "CEAGFBDEEA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> table = {"EFDGGDGCBC", "DBBDDEFABF", "EGEEACEFAG", "DGDEFEAGCD", "BDCDFFGDAC", "BFBGBCCDDG", "GCCEDEFBGB", "BFFDBDGBCD", "GFBACGBABA", "BEAFDBAEDD", "FBFCBDECAC", "CGECCBEBFF", "GEECCGBDEB", "AEGCFGDEFA", "CGEAACFCEA", "DFECDACBFC", "EGCFEFAAEF", "GDBFFFDGEG", "AFBGABEFCC", "BECGACFBFF", "GCGCDFGCBE", "BAGFGCADDE", "CEACGAFFGC", "EEGGDCDBGD", "ABGDGAGBFF", "FCECBEBAGD", "EFEBDAECBB", "GGABCFBAAF", "FBBGGBDCBG", "DDCFCCFBFE", "EAFCEFDDEE", "BCABFDDAFF", "CDFACGBBBD", "CCAGCDFGBD", "GEEGFEBFDG", "EGCACAFAFE", "FGGFGEFCGE", "EACAECDEFG", "DCBDFCAAFG", "FGFAGAFFCE", "CDDAABFFEA", "CCGECFBEGG", "CAAGGCGDGD", "CFACFCGCCE", "EDBBFAAFGG", "EDABEAGFFF", "BCABDCBECE", "GFFDCBFBAB", "AAEGCACAFC", "GEEBABAEAD"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> table = {"FAGCGACGBE", "ECDEGFDCCE", "FCGFGACFEF", "ADAFDCDEFB", "BEFDBFEDAB", "CEAAAFDBGA", "GGBEBACFCA", "FAFFAFAAFD", "FADDDBAABE", "CDFBAAFCGB", "DEGEGAFBFC", "GGECBFFBDE", "GEADFDCBAC", "GEBCACGGBB", "CEABAFDCCD", "ABAACAEACC", "DEAFBGGDDF", "FBFEAGFDDG", "DGBFDACACG", "AADBFDFBGF", "CEEACCDBDG", "EGCBAFEABE", "FGEEDGAFDB", "DCAFGBDCBF", "FGGACDEBEF", "ADCAAGBFDG", "AFAEGGABED", "BEDDGCGDAE", "BFABCGFBBC", "ABFFCCGBBC", "GGAGEEGEED", "FABEGAGGBB", "DCCEBBDBEA", "FCGCGFBFAF", "FCFBADDAAA", "ABABABCABB", "CBCEBCEADE", "ABEGFAECAB", "ACABGBDGBA", "EEBCGGCFDB", "BCBECEEGGG", "EEDBDGCBAB", "CGFCBFEECD", "EGAEGCFGCC", "DFGBFBDFDG", "DCEBGEAGCB", "DGCBDDDEEA", "DEBDDFDAEB", "EEEADDEFEA", "EADCEFDABA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> table = {"EFABFAADDG", "EDAEGGGAGC", "DBFFBFGDAF", "GDGCBEBDFG", "BFCEDGBBCF", "AAGEACEAGF", "DGBFGBCDGC", "GGAAADFFCD", "AGAAFCDADC", "ABEEADEBCF", "BCBBDACGBB", "GDFBGFCCAB", "AEAAFGECBE", "ACEBCGADGB", "DAFAGECEAC", "GEABBFCDDF", "EGCBFDDFGD", "DDCEDBCBDD", "DGBGBEABEE", "BDECBFDACB", "DEFBEDBEFC", "DCADABFBBA", "EACCGGFCCF", "CEDGDCGGFD", "CBAACFEBAD", "FBFADEGGGB", "CDEAEDEGBF", "BDGFGFFDDF", "FDCEEFABAF", "EEFCDBCGEA", "ACGEFAEEFG", "EGBDCAGFFG", "ADGFCAFACB", "BEFAGFGCGD", "DEBDEACEEE", "CAECEACBAB", "BGBAAEAEAC", "BEBEEBDEEA", "CDBBEEEBDB", "EFEFCBECCB", "CGBGECAEGE", "EECBCADFBD", "GBEBFBBGGD", "EDDFGEDAAE", "FDABADBFDD", "GCBEDCCEGC", "BAAFDEAAAA", "DDFEFCCFDB", "BDBECGAEAA", "BAFGACFCCB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> table = {"DCGFDAGGEC", "CFBCCBCEFD", "BDDGEBGGDG", "CAEGBBEGFC", "GDBDGFAEDE", "FFAFEEDAFB", "EADAFFBCAE", "BBAGCBCGCF", "BFCGCFDCAD", "DEADCAEEFD", "AEAFFFFAGF", "FBGFABFEBB", "EBAFBGEECB", "BEEEBFAEGG", "GGDAAAGDAB", "BCGGDFACAD", "BDGEEFDEAA", "GAAABBAECA", "CEGECAABEB", "EFABBEEACD", "DFGADCFGAE", "EAEEBGFADG", "DCFBFDEEFA", "ABCEEFAEGE", "ECGBCGFFDC", "FDEGBDGCFE", "DBAFBAGGCD", "AGFFBCAEEC", "DCBAGDGGCD", "EDAECGFGDA", "CDDDDDDCEA", "DCBFDFBDCC", "AFEBFCGABD", "ABDDDFEGBF", "BEAFDCAGCG", "DDBECFBEGF", "EEBDGFGABF", "GDACADADEC", "GFFEAEBGEC", "CAACDCGFAD", "EEGDEDDGEE", "GCBFCGFCEF", "DFCEDAGFEA", "ABDBBDCGAC", "ABCGBBDFFG", "CGCAFBACCE", "CCBFGEFBAA", "EGACBGFEAE", "EAFEACBAED", "AEFDDCBDBF"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> table = {"GBFGBDEAED", "GBAGDACFDC", "ADGBDACDDE", "GCEEGEAEBE", "EGDECAGBEG", "EAADFCAGED", "BFGGCGFCAE", "AFEEFAFEBC", "BEEBEGFGCE", "FEBEGBGABG", "GBGCGECABD", "GEDFFEFAEB", "ECFFDFEADC", "BBCDGCEFAF", "FADDGFBFFA", "AGACDADBAF", "FFDDAFEEDE", "BGDBCGDEEB", "DDBDDAACCC", "FDBGCBCDDC", "DABGABBFGE", "CCEACGFFCF", "AFEFEDGGGA", "CCDFGDBDFG", "DABBAEFGFA", "CBGEDECBEF", "AFDFEDCGGE", "EEGBEEEGGB", "EGEFCCCDDC", "CACEFBGCEC", "DGBEGAACEB", "EGDEFCADAC", "EFAFGCBAEC", "BEEBGGBAAE", "CBEFGDFCFB", "DDFEEADGED", "DEFCCFFDFA", "EDGGGFEDEC", "DGBFAADAEA", "GGECCGCAFA", "EDAGDFDDEA", "BDEFGGGCDB", "AGEGDCCDGC", "BFDAGDEFBB", "BDEABCCBFA", "GFCCCDGEEC", "DGFDGCEDAD", "DABADBGBAF", "GDCAGDABEB", "ACCFCBBFCG"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> table = {"ADDFFGDCFB", "DFAEBBFCCD", "GEEAGCEGDF", "EFDBFBCFBA", "DCCFAAGFBE", "CGBCCGGFDA", "BCBBFDEBCG", "CCBFFECFBE", "CDFADEFGAG", "BAGBDGFDCD", "FEGBCEAAFF", "DCCBGCCCGA", "BGGDBAEEFG", "BEBFGFGGAD", "BFCEACDEFA", "CEGCDDFGDB", "CCABGGFECA", "CGDEACBADD", "AGGAFFACEE", "AEFABBCFCA", "FCCFDAFABA", "BCGCFEDEDA", "FAGEDCFDCB", "GFCCCACGFC", "GAFCADFBBG", "CCBDCDCEDB", "GDEDBADBAD", "AGEBDDAABF", "BADAEBBCBG", "EGDAEGCEDD", "FAFDGEGGFA", "DCFGFFCAFG", "CAFBAFCBEC", "AFBGEGEFEB", "ACEGFGEDDD", "FACCCFCCEA", "GBDDDAEGDD", "ECDGCBGCGG", "ABABDACDGE", "EGCCEAFFDC", "GCDBEAGACG", "DCFBEABAAD", "ECBDDBACEG", "EFDBCCDGBF", "EBGFBAGAFD", "EAEFEGDEFA", "DCGGEBCEAD", "FFDAGECFFB", "EAGAGGEEBD", "EGCEDGFFBD"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> table = {"GABCFBBFGE", "BBGCDDBEBC", "FGABEEEEGG", "ACDGFDFGCE", "BBAGDAFBED", "AEADDBFEDD", "ADEGECDADB", "EGBEACGEDC", "ABGGGAGGGA", "FCEAGBGGEG", "DGDFGCDGDD", "CGDFGEEDAA", "FCGDEGFFGE", "CGBBEBFFBD", "EEAEBEFDFA", "ECFDFDCEFG", "FEAGGBABCG", "FFBCFCGECG", "FEBEGDAAEC", "BEABAADEDC", "FEBABFAEFC", "CACCGDDDFA", "ECCFCGBFCF", "ECBADDFEGD", "GDEDGBGGED", "CEAABAEFCF", "GBFGFEAEDB", "GCDBDADBCB", "GACBFBBADG", "FBACGGAGED", "ABCAFAADEF", "CFFBGEGCEC", "CCDFCFCADD", "FBGCBGADAC", "FCEDFBCABF", "AFAEABBAED", "CADEBBBCDF", "CAADEDEBAC", "EBGDFGACGF", "CBBGGDCBBC", "BABFEDCEFG", "FADAEAFGFF", "DGFABGGBCD", "CEDEEGDECD", "EABDEFBGAE", "BEGBGFBCGC", "ECAGAAADAD", "FBFADDEFCE", "BFDAGCFCDB", "BEDBGABGGG"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> table = {"AAFGFGCFEA", "DEBFGGAGEA", "GBCECCCFGE", "EFAADDBDFC", "GADGGADCBB", "BBBEAEGFBD", "CADFCFACFG", "DGBADEAFEB", "GDBCCCDDGE", "EDACDAFCAE", "BCDECGDFGG", "BGEAFBFEAF", "EECEGFGFGF", "CADBBEBAEE", "EEBDCCDDED", "BFBGCEFDCE", "FDCFFDAFBG", "CAFAADBABG", "BGGDDDGDBG", "AGDFFBEFEA", "DFEDBCEDAF", "EGEAAGAFBA", "AEABGFDEBE", "DABAFCCFAA", "CAFACEDGBG", "EEGFACEEFB", "CAADDADCGD", "BCDDAEAGBA", "AGADBFDADC", "CGBBGDFFAB", "DGEEEADEFA", "DDGGBBDDAA", "DACCCDFGEC", "GBDFFBCBFC", "DAFFADEAGG", "EAFFFCDAGC", "GCGDFACBEF", "GBCDFBEECC", "BDECGGDBGF", "BGEDECGBEG", "FEGBFFFFAF", "FDACDBADDA", "DDCCDFDFFC", "CFFGFACBAB", "DBGCCEEGFE", "GCFBGCADDE", "GGAGFCACBE", "CACGFGCBAG", "FEDBFFAACF", "GFCEEDDCGB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> table = {"ZVYHJKYDSD", "KQMHVEBSUE", "OGSTPTZNXL", "YDKGBTNRQX", "XACTAHJVVD", "YVONBKXWQX", "GKRJXYISTF", "GRRJMTSWVB", "GFTSOKYEIV", "COTBBYXFYV"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> table = {"AABB", "BABA", "CAAB", "DAAA", "EBBB", "FBBA", "GBAB", "HBAA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> table = {"A", "B"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> table = {"AA", "AB", "BB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> table = {"ABC", "DEF", "ABC"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> table = {"AABB", "ABAB", "BBBA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> table = {"CBA", "ABC", "CCC"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> table = {"ABCDEFGHIJ", "CBADEFGHUK"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> table = {"AAABB", "ABABB", "AAAAB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> table = {"ABCDEFGHIK", "ABCDEFGHIC", "ABCDEFGHID", "ABCDEFGHIE", "ABCDEFGHIF", "ABCDEFGHIG", "ABCDEFGHIH", "ABCDEFGHII", "ABCDEFGHIJ"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> table = {"AAAAAAAAAA", "AAAAAAAAAB", "AAAAAAAAAC", "AAAAAAAACC"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> table = {"ABCDEFGHIJ", "ABCDEFGHJI", "ABCDEFGIHJ", "ABCDEFGIJH", "ABCDEFGJHI", "ABCDEFGJIH", "ABCDEFHGIJ", "ABCDEFHGJI", "ABCDEFHIGJ", "ABCDEFHIJG", "ABCDEFHJGI", "ABCDEFHJIG", "ABCDEFIGHJ", "ABCDEFIGJH", "ABCDEFIHGJ", "ABCDEFIHJG", "ABCDEFIJGH", "ABCDEFIJHG", "ABCDEFJGHI", "ABCDEFJGIH", "ABCDEFJHGI", "ABCDEFJHIG", "ABCDEFJIGH", "ABCDEFJIHG", "ABCDEGFHIJ", "ABCDEGFHJI", "ABCDEGFIHJ", "ABCDEGFIJH", "ABCDEGFJHI", "ABCDEGFJIH", "ABCDEGHFIJ", "ABCDEGHFJI", "ABCDEGHIFJ", "ABCDEGHIJF", "ABCDEGHJFI", "ABCDEGHJIF", "ABCDEGIFHJ", "ABCDEGIFJH", "ABCDEGIHFJ", "ABCDEGIHJF", "ABCDEGIJFH", "ABCDEGIJHF", "ABCDEGJFHI", "ABCDEGJFIH", "ABCDEGJHFI", "ABCDEGJHIF", "ABCDEGJIFH", "ABCDEGJIHF", "ABCDEHFGIJ", "ABCDEHFGJI"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 4};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> table = {"AAA", "AAB", "ABA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> table = {"AABB", "WABA", "CAAB", "DAAA", "DBBB", "FBBA", "GBAB", "HBAA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> table = {"ABCDEFGHAA", "ABCDEEFFSS", "AEEDEEFSSS", "BASKHKGHSD", "BASKASDJKG", "SDGJKSDJKG", "KSDJKASDKH", "ASKDJKASSJ", "ASDKAHSDKD", "ASDFLHAFAF", "ASFASFDGFS", "SDGSDGSDGF", "SDFFGFGGFF", "SDFFGFGGAG", "SFSSSSSSSS", "AAAAAAAAAA", "BBBBBBBBBB", "CCCCCCCCCC", "DDDDDDDDDD", "AAAAAAAABA", "DDFGGGGGGG", "AAAAAAAABX", "AAAAAAAAXA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> table = {"ABCDEFGHIJ", "BCDEFGHIJK", "CDEFGHIJKL", "DEFGHIJKLM", "EFGHIJKLMN", "FGHIJKLMNO", "GHIJKLMNOP", "HIJKLMNOPQ", "IJKLMNOPQR", "JKLMNOPQRS", "KLMNOPQRST", "LMNOPQRSTU"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> table = {"ABCDEFGHI", "BCDEFGHIA", "CDEFGHIAB", "DEFGHIABA", "EFGHIABFT", "FGHFDRTYE", "WRYFGHHDH", "FGHDFGHNN", "TYRHDFHNU", "RTYERTHHJ", "WERTETWUU", "UIITYHFHH", "FGVNFHUTU", "DFGHJJUUR", "FGJGHJTUN", "VBMIDFRTY", "DFGHRTYYF", "QWETRTRYU", "SDFHSHUUT", "DFGDFJURE", "FJGJRTYTG", "RTUYUTYUE", "FGHJFGRTY", "YUPTYUIOT", "ETWUTUUGJ", "VBNRTFGHU", "ASDFJLIYU", "WERTUYRTO", "SDFGFGJHH", "CBVBNFHRT", "QWERUIDFG", "ZXCBFGHKY", "ASDFGRTYH", "XCVNASDFU", "VBNRTHJUI", "MBCGDSWER", "DFGWQERTH", "XCVNTYUFH", "DFGHKTYIE", "DFGWRTDFH", "VBNDFGRTW", "BMFGHRTDH", "BNMKRTYHD", "QWETUDFHV", "MVDFGERTH", "HJKLDFGHD", "GHJTYDFGN"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 4};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> table = {"AABBAABBA", "BABABABAD", "CAABCAABE", "DAAADAAAE", "EBBBEBBBD", "FBBAFBBAC", "GBABGBABB", "HBAAHBAAA", "AABBAABBA", "BABABABAD", "CAABCAABE", "DAAADAAAE", "EBBBEBBBD", "FBBAFBBAC", "GBABGBABB", "HBAAHBAAA", "AABBAABBA", "BABABABAD", "CAABCAABE", "DAAADAAAE", "EBBBEBBBD", "FBBAFBBAC", "GBABGBABB", "HBAAHBAAA", "AABBAABBA", "BABABABAD", "CAABCAABE", "DAAADAAAE", "EBBBEBBBD", "FBBAFBBAC", "GBABGBABB", "HBAAHBAAA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> table = {"B", "A"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> table = {"ABC", "ABC", "ABC"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> table = {"AAAAAAA", "BAABAAB", "CAACABA", "DAADABB", "EAAEBAA", "FAAFBAB", "GBAABBA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> table = {"ABC", "ABD", "BBD"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> table = {"HEBEAEHJAE", "AHAEHUEAMA", "AJEKAEEAIE", "BBCDEFHEAH", "EAJEAJHAEJ", "IEAJAEJAEA", "IOJTDIDTTD", "AUANEAJAEJ", "EAIEAJEANE", "EIERSJEJES", "IJDDJTRRRU", "IJDTIRRJRS", "ISEJESJESI", "INDFJFJDVN", "TDOTDJNJDF", "AEHUEAHEAU", "EIRSSRKJSR", "RSIJRSRSJS", "SROSRJKRSK", "SROSJMCSNS", "AEIEAJAENM", "EAJAENEAKJ", "AEIEAJEAKJ", "EIRSKJRSJK", "TDODITTDJT", "EAEAJEAJAE", "SROSDTJTJS", "EHAUAEHEAU", "RSORSKJRSJ", "AEUAEHEAAE", "RSIRSJRSJS", "RSIRSJNRSJ", "RSISRJRSIR", "RSISRNJRSR", "RSIRJSRSIS", "OTDJDTTDIT", "WAEUEAHEAE", "EAJAEHAEIE", "STISRJRSIR", "IDTJDTTDUU", "AERIEAHEAY", "IAJSRSRORS", "AEUAEJAEYE", "TJDNTDSRIR", "WEAIAEJHEA", "DTOTDKTDOO", "AEJHAENEAE", "SRISRJRSIS"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 6};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> table = {"ABCDEFG", "BCDEFGA", "CDEFGAB", "ABCDEFG", "BCDEFGA", "CDEFGAB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> table = {"ABCDEFGHIJ", "KLMNOPQRST", "UVWXYZABCD", "EFGHIJKLMN", "OPQRSTUVWX", "YZABCDEFGH", "ABCDEFGHIJ", "KLMNOPQRST", "UVWXYZABCD", "EFGHIJKLMN", "OPQRSTUVWX", "YZABCDEFGH", "ABCDEFGHIJ", "KLMNOPQRST", "UVWXYZABCD", "EFGHIJKLMN", "OPQRSTUVWX", "YZABCDEFGH", "ABCDEFGHIJ", "KLMNOPQRST", "UVWXYZABCD", "EFGHIJKLMN", "OPQRSTUVWX", "YZABCDEFGH", "ABCDEFGHIJ", "KLMNOPQRST", "UVWXYZABCD", "EFGHIJKLMN", "OPQRSTUVWX"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> table = {"DFAEAFCFDE", "EDDCDDCCEE", "DAACFADFFB", "DCFBCBAEAB", "DBFCDEACFA", "FFADDFAFCC", "EADBDFCCFD", "FACEBECAEE", "DADEAEEDDE", "AEDFFCFAAF", "FDBFAACDFB", "AAEBCBFEBE", "CCDDCFDDFF", "BBBBFFCEEA", "ACFEFDFCCD", "ACCDFCDAFF", "EFBDCCBCFF", "EECFCABDAA", "BCDBCBEAAF", "BBBEDCECAC", "AAFABDBDAE", "ABBFCFADBD", "AABBFFFDFE", "EDFEAACCBF", "DDAAECEDBC", "DFFFDFDAFD", "DFBAEEFACE", "BDCACCDADB", "BEBACBDBFC", "BDBBECFEDC", "DFCDAFEFAD", "ADEECAFFCE", "ACEAFEEFCE", "BDCCFBBECA", "BEFCBDCFFE", "AFFEFBEACF", "BEDCDECCBB", "DCDBFAAABD", "ACBEBEDAEE", "EFBFCDDADB", "BCFDAEEBEA", "ACCDBCBCAF", "CAEADDBBFD", "EFBFDAEBBD", "BDAABBDBDE", "FFAEBFECDA", "BFABFFCFBA", "CEEFBBADFE", "DEFEBFEDAA", "CDABABDFAD"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> table = {"AAAAAAAAAA", "BBBBBBBBBB", "CCCCCCCCCC", "DDDDDDDDDD", "EEEEEEEEEE", "FFFFFFFFFF", "GGGGGGGGGG", "HHHHHHHHHH"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> table = {"AAA", "AAB", "BAA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> table = {"KSDJFKDSLF", "VKLJJDDSSA", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "GREJJFDDGL", "ASDJSSEDLS"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> table = {"QAAAAAAAQA", "WAAAAAAAWA", "EAAAAAAAEA", "RAAAAAAARA", "TAAAAAAATA", "YAAAAAAAYA", "AQAAAAAAUA", "BWAAAAAAIA", "AEAAAAAAOA", "ARAAAAAAPA", "ATAAAAAAAA", "AYAAAAAASA", "AAQAAAAADA", "AAWAAAAAFA", "AAEAAAAAGA", "AARAAAAAHA", "AATAAAAAJA", "AAYAAAAAKA", "AAAQAAAALA", "AAAWAAAAZA", "AAAEAAAAXA", "AAARAAAACA", "AAATAAAAVA", "AAAYAAAABA", "AAAAQAAANA", "AAAAWAAAMA", "AAAAEAAAAQ", "AAAARAAAAW", "AAAATAAAAE", "AAAAYAAAAR", "AAAAAQAAAT", "AAAAAWAAAY", "AAAAAEAAAU", "AAAAARAAAI", "AAAAATAAAO", "AAAAAYAAAP", "AAAAAAQAAA", "AAAAAAWAAS", "AAAAAAEAAD", "AAAAAARAAF", "AAAAAATAAG", "AAAAAAYAAH", "AAAAAAAQAJ", "AAAAAAAWAK", "AAAAAAAEAL", "AAAAAAARAZ", "AAAAAAAYAX", "AAAAAAAUAC", "AAAAAAAIAV", "AAAAAAAOAB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 8};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> table = {"ABCABCABCA", "EFGHEFGHEF", "ABBABBABBA", "KLMNOPQRST", "ABCDEFGHIJ", "CCCCCCCCCC", "BBBBBBBBBB", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "BBBBBBBBBB", "CCCCCCCCCC", "CCCCCCCCCC", "CCCCCCCCCC", "CCCCCCCCCC", "CCCCCCCCCC", "CCCCCCCCCC", "CCCCCCCCCC", "CCCCCCCCCC"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> table = {"AAAAAAAAAX", "AAAAAAAAAB", "AAAAAAAAAC", "AAAAAAAAAD", "AAAAAAAAAE", "AAAAAAAAAF", "AAAAAAAAAG", "AAAAAAAAAH", "AAAAAAAAAI", "AAAAAAAAAJ", "AAAAAAAAAK", "AAAAAAAAAK", "AAAAAAAAAM", "AAAAAAAAAN", "AAAAAAAAAO", "AAAAAAAAAP", "AAAAAAAAAQ", "AAAAAAAAAR", "AAAAAAAAAS", "AAAAAAAAAT", "AAAAAAAAAU", "YYYYYYYYYX", "YYYYYYYYYB", "YYYYYYYYYC", "YYYYYYYYYD", "YYYYYYYYYE", "YYYYYYYYYF", "YYYYYYYYYG", "YYYYYYYYYH", "YYYYYYYYYI", "YYYYYYYYYJ", "YYYYYYYYYK", "YYYYYYYYYK", "YYYYYYYYYM", "YYYYYYYYYN", "YYYYYYYYYO", "YYYYYYYYYP", "YYYYYYYYYQ", "YYYYYYYYYR", "YYYYYYYYYS", "YYYYYYYYYT", "YYYYYYYYYU"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> table = {"CAAD", "BECB", "BECC", "DDEE", "DBCA", "BDDB", "EACB", "BEEA", "BCEC", "BDAC"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> table = {"ABC", "XYC", "AYD"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> table = {"AAAAAAAACQ", "AAAAAAAACW", "AAAAAAAACE", "AAAAAAAACR", "AAAAAAAACT", "AAAAAAAACY", "AAAAAAAACU", "AAAAAAAACI", "AAAAAAAACO", "AAAAAAAACP", "AAAAAAAACA", "AAAAAAAACS", "AAAAAAAACD", "AAAAAAAACF", "AAAAAAAACG", "AAAAAAAACH", "AAAAAAAACJ", "AAAAAAAACK", "AAAAAAAACL", "AAAAAAAACZ", "AAAAAAAACX", "AAAAAAAACC", "AAAAAAAACV", "AAAAAAAACM", "AAAAAAAACN", "AAAAAAAABQ", "AAAAAAAABW", "AAAAAAAABE", "AAAAAAAABR", "AAAAAAAABT", "AAAAAAAABY", "AAAAAAAABU", "AAAAAAAABI", "AAAAAAAABO", "AAAAAAAABP", "AAAAAAAABA", "AAAAAAAABS", "AAAAAAAABD", "AAAAAAAABF", "AAAAAAAABG", "AAAAAAAABH", "AAAAAAAABJ", "AAAAAAAABK", "AAAAAAAABL", "AAAAAAAABZ", "AAAAAAAABX", "AAAAAAAABC", "AAAAAAAABV", "AAAAAAAABM", "AAAAAAAABN"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> table = {"DDDDABBDDC", "CDCCCCDABD", "BDCBCDDBDC", "ACAAAABAAC", "CADDABDCCA", "CCBCBDABBC", "BBBBBACAAC", "DBDCCCADBC", "CABDCACDDD", "ACDDACADBD", "AAAABDBACA", "ABADAABBDD", "ADACDAADAC", "CCBBCBBDCB", "ABADCBCBBC", "CCCDCBAABD", "CAAAABCCBD", "ACABCBCCAA", "CCCABCADDA", "DCABDBDADC", "DCDCBABCDD", "ADABDCCBAB", "CDDAABDBAD", "ABCAABDDBC", "CDABADCDAD", "CCDBACBAAB", "DBAADBCDDA", "DBBCDCBBCD", "DAACBCCDDD", "DACCABACBB", "ABBACACCDB", "DCDAABBDBD", "DBDCDCCCDC", "BCCCBBBCDC", "CBBBADBDCD", "CCACADBCBD", "DBDCBBDCAD", "ABDBBDDCDB", "DCABCDDAAB", "BCBDBBBABD", "BDADBDBADA", "CCDADDBDDD", "ADCBDBCADC", "BCDCABABDA", "ABDCDCDACC", "ADCBBDDBDC", "CDCBCBCBAC", "DADBBCBCBB", "DACBBBBAAB", "BDCAADCDBB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 6};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> table = {"CLXPSMZFPV", "QQPTGCWLNC", "HOZURKRMZA", "IAIVZAEOCU", "LMYEOCGLGL", "MLALKALNZW", "PRNNAVOULD", "VHVPILPYNU", "HYPTMUGLZP", "IUAOSBMSAW", "DRLEIMZHIA", "UPJUNLUVVZ", "MEXAQQYYGB", "WATARAEWXI", "XIFTKVFDCE", "FFGLCADPFI", "YOOVNIPITT", "GIELJVKPJO", "BNYLMWDGLV", "WWWJXZGHHK", "MOQFFEQTSI", "KQUKOUYWOA", "EIVKSAVDEX", "HSFRDZYJHS", "IUZKRXJGVB", "IUEPJNMTKR", "PEDGXDLEEX", "AFLTSATPBT", "EJUAAOITYQ", "KWHEZVEVCC", "CHCUTDFRDZ", "ORFZSQUWZW", "VNPEHLRYED", "JZWNPSWWOX", "RBAWDBECBD", "IAMAICBBTN", "GOAJQIMGIE", "ALQZFGBIKY", "JBEDNDPAEA", "LEIHUWQJZM", "TFMBBDSZTI", "DOUUNIIWLX", "YXPTBIJYXA", "FDBTGOGPTG", "OLGGMPOBZQ", "EVLOHHNEZZ", "AMNIYETHEH", "PVEIRUPKLX", "AWIWXEZFPD", "WNXYZHOWEM"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> table = {"AABAB", "ABBBA", "ACACB", "ADADA", "BEBEB", "BFBFA", "BGAGB", "BHAHA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> table = {"AA", "AB", "BA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> table = {"ABCDEFGHIJ", "FKLDAFLKAW", "JFKDFJKDFJ", "FJKDFJDKWQ", "IOIOPOPEEW", "QWEWERJKOW", "ARIWMJTJWI", "ARIPMNROUX", "AIRONERLWP", "AXBCMMEKIP", "AURNDJUELD", "AROQMDOEPU", "AROMDLPWIT", "POQILDYTIR", "ARJKJKLWOP", "ASDFWERTQQ", "KAFJDKLAWE", "ADFADWERPQ", "ADFDLIOQWP", "LKJHDASDFG", "ASDFLKJHJD", "ASDFJKLREO", "ASDFASDFAS", "LKJHLKJHAS", "ASDFASDFUI", "WERUIOASIO", "WERIOOPQWE", "QWEIOQWEIO", "QWEIOWEROP"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> table = {"AABBCA", "BACBBA", "CAACAB", "DDAAAA", "EBDBBB", "FBBAEA", "GAGBAB", "HDHBAA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> table = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "W", "X", "Y", "Z"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> table = {"LYO", "IJR", "UXB", "GTH", "DLT"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> table = {"AACD", "AACB", "CAAB", "BACB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> table = {"ASDDFGHJKL", "NFHRYVJDHE", "SNCBDGEHRY", "HFNDIUEYHD", "ASDFGHJUDE", "ANCBDHERYF", "AHSXNDBFGT", "OIUJWNDHCB", "AKIURFHHFG", "NHSCNDHFGR", "ANXBDIEUHF", "AJHNDHYQQW", "AASYTHEEDC", "FJHRUFHYWE", "AXNDCJHEIR", "AJCOOIURRR", "AJHNVHFUUR", "AOPKLMJUFR", "ASHNJCUDYE", "JHSXGDBCNF", "AJJUUYEHDG", "SJHDVNBFHG", "AHDDJHQQWE", "ASDJCNDHFR", "ALLPMZMXMC", "DJFHNVJHDE", "AJNDPIOEND", "DOKISEYRFT", "AJHVFNHOKR", "AJOIQWNZXD", "DJNHBSUZHD", "AHEIDHKTER", "AJHNVBDIJE", "JHNVJUDHGE", "JHSNCBSKIR", "JJIURPAAXX", "AJHDNCBDGE", "JUHEGIKJJJ", "SJHRGKMNED", "SJUHFGRHYE", "AJNXBDGFED", "SHGBDYHCGD", "AJNNNCCCBF", "AJSUYEHDGR", "AJHNVJFHRD", "AJNXBDHHQQ", "ASDCBDGEYD", "AJSHNCBDHE", "AJHDDDDDDD", "AJHNCHDGDE"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 5};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> table = {"ABCQ", "ACDQ", "BBEQ", "ABCP"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> table = {"ACBABCAAB", "BABCABABA", "ACCABABCZ", "ACBAKZALM", "CANOKASAA", "LMNRPTABC", "AFAWFFAFA"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> table = {"AABB", "BABA", "CAAB", "DAAA", "EBBB", "FBBA", "GBAB", "HBAA", "HBAB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> table = {"DEEB", "CBCE", "DCAD"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> table = {"AB", "BB"};
    CandidateKeys* pObj = new CandidateKeys();
    clock_t start = clock();
    vector<int> result = pObj->getKeys(table);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=11120&pm=8444
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
#define two(X) (1<<(X))
#define contain(S,X) (((S)&two(X))!=0)
template<class T> inline int countbit(T n){return (n==0)?0:(1+countbit(n&(n-1)));}
 
class CandidateKeys
{
public:
    bool f[two(10)];
    vector<string> B;
  vector <int> getKeys(vector <string> A)
  {
    int n=A[0].length();
        int m=A.size();
        memset(f,false,sizeof(f));
        int m1=+100000;
        int m2=-100000;
        for (int set=0;set<two(n);set++)
        {
            f[set]=true;
            B.clear();
            for (int i=0;i<m;i++)
            {
                string s="";
                for (int k=0;k<n;k++) if (contain(set,k)) s+=A[i][k];
                B.push_back(s);
            }
            sort(B.begin(),B.end());
            for (int i=0;i<m-1;i++) if (B[i]==B[i+1]) f[set]=false;
            if (!f[set]) continue;
            int c=countbit(set);
            bool good=true;
            for (int s0=0;s0<set;s0++) if ((set&s0)==s0 && f[s0]) good=false;
            if (!good) continue;
            if (c<m1) m1=c;
            if (c>m2) m2=c;
        }
        vector<int> result;
        if (m1<100000)
        {
            result.push_back(m1);
            result.push_back(m2);
        }
        return result;
  }
};
 
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/