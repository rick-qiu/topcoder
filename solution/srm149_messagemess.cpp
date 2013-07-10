/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1331
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

class MessageMess {
public:
    string restore(vector<string> dictionary, string message);
};

string MessageMess::restore(vector<string> dictionary, string message) {
    string ret;
    return ret;
}


int test0() {
    vector<string> dictionary = {"HI", "YOU", "SAY"};
    string message = "HIYOUSAYHI";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "HI YOU SAY HI";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> dictionary = {"ABC", "BCD", "CD", "ABCB"};
    string message = "ABCBCD";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS!";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> dictionary = {"IMPOSS", "SIBLE", "S"};
    string message = "IMPOSSIBLE";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> dictionary = {"A", "B", "C", "D"};
    string message = "BADCAB";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "B A D C A B";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> dictionary = {"A", "B", "C", "D"};
    string message = "ABRACADABRA";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> dictionary = {"APPLE", "APPLET", "ET"};
    string message = "APPLET";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "APPLET";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> dictionary = {"A", "BA", "BAB", "AR"};
    string message = "ABABABABABABABABABABABABABABABABABABABABABABABAR";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS!";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> dictionary = {"A", "BA", "BABA", "AR", "ABA"};
    string message = "ABABABABABABABABABABABABABABABABABABABABABABABAR";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> dictionary = {"A", "BA", "BABA", "AR", "ABA", "ABAB"};
    string message = "ABABABABABABABABABABABABABABABABABABABABABABAR";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "ABAB ABAB ABAB ABAB ABAB ABAB ABAB ABAB ABAB ABAB ABAB AR";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> dictionary = {"TA", "PEA", "DOG", "CAT", "APE", "TAPE"};
    string message = "TAPEAPEAPE";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "TAPE APE APE";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> dictionary = {"AB", "BA", "AA", "BB", "BABAAB", "ABAAAB", "BAAB", "BABA", "BBBA", "BAAA"};
    string message = "ABBAABBBABABBAABAAABAAAABABAAABABABAAABABABABAABA";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> dictionary = {"AB", "BA", "AA", "BB", "BABAAB"};
    string message = "ABBAABBBABABBAABAAABAAAABABAAABABABAAABABABABAABAA";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS!";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> dictionary = {"A", "B", "C", "BAB", "BAD", "E", "F", "G", "H", "I", "J", "K", "L", "EF", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
    string message = "BAABAABBAAABAABAABAABBBBADEEABAAAABAAABAABBBBAFBAA";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "B A A B A A B B A A A B A A B A A B A A B B B BAD E E A B A A A A B A A A B A A B B B B A F B A A";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> dictionary = {"XYX"};
    string message = "XYXXYXXYXXYXXYXXYX";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "XYX XYX XYX XYX XYX XYX";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> dictionary = {"IMPOSS", "SIBLE", "S", "IMPOSSIBLE"};
    string message = "IMPOSSIBLE";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
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
    vector<string> dictionary = {"AB", "AC", "A"};
    string message = "A";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> dictionary = {"AB", "AC", "A"};
    string message = "C";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> dictionary = {"A", "B", "AB", "BA", "ABA", "BAB", "ABAB", "BABA", "ABABA", "BABAB", "ABABAB", "BABABA", "ABABABA", "BABABAB", "ABABABABABABABABABABABAC"};
    string message = "ABABABABABABABABABABABACABABABABABABABABABABABAC";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "ABABABABABABABABABABABAC ABABABABABABABABABABABAC";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> dictionary = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAA", "AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS!";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> dictionary = {"A", "B", "AA", "AB", "BA", "BB", "AAA", "AAB", "ABA", "BAA", "BBB", "BBA", "BAB", "ABB", "AAAA", "AAAB", "AABA", "ABAA", "BAAA", "BBBB", "BBBA", "BBAB", "BABB"};
    string message = "ABABBBABABBBABABBAAABABBAAABBABABBBABABBBABABBC";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> dictionary = {"IMPOSS", "SIBLE", "S"};
    string message = "IMPOSSIBLE";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> dictionary = {"AA", "AAAA", "AAAAAA", "AAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> dictionary = {"BLAH", "BLA"};
    string message = "BLAHA";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> dictionary = {"AB", "CD", "ABCD"};
    string message = "ABCD";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS!";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> dictionary = {"A", "AA", "AAA", "AAAA", "AAAAA"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAC";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> dictionary = {"A", "AA", "AAA", "AAAA", "AAAAA"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS!";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> dictionary = {"A", "AA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> dictionary = {"H", "HH", "HHCH"};
    string message = "HHHHHHHHHHHHHHHHHHHHHHHHHHHCHHHHHHHHHHHHHHHHHHHHC";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> dictionary = {"A", "AB", "ABC", "ABCD", "ABCDE", "ABCDEF", "ABCDEFG", "BCDEFG", "CDEFG", "DEFG", "EFG", "FG", "G", "B", "C", "D", "E", "F", "BC", "CD", "DE", "EF", "BCD", "CDE", "DEF", "BCDE", "CDEF", "BCDEF"};
    string message = "ABCDEFGABCDEFGABCDEFGABCDEFGZ";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> dictionary = {"AB", "CD", "EF", "ABC"};
    string message = "ABCDEF";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AB CD EF";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> dictionary = {"AB", "CDEF", "CD"};
    string message = "ABCDEF";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AB CDEF";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> dictionary = {"A", "AA"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS!";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> dictionary = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAA", "AAAAAAAAAAAAAAA"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS!";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> dictionary = {"A", "AA", "AAA", "AAAA"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAB";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> dictionary = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAA", "AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> dictionary = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> dictionary = {"ABC", "AB", "CD"};
    string message = "ABCD";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AB CD";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> dictionary = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAC";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> dictionary = {"ABC", "AB", "C"};
    string message = "ABC";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS!";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> dictionary = {"A", "B", "C", "D", "E", "F", "G", "AB", "BC", "CD", "DE", "EF", "FG", "ABC", "BCD", "CDE", "DEF", "EFG", "ABCD", "BCDE", "CDEF", "DEFG", "ABCDE", "BCDEF", "CDEFG", "ABCDEF", "BCDEFG", "ABCDEFG"};
    string message = "ABCDEFGABCDEFGABCEDFGABCDEFGABCDEFGZ";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> dictionary = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAA", "AAAAAAAAAAAA", "AAAAAAAAAAAAA", "AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS!";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> dictionary = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAC";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> dictionary = {"A", "AA", "AAA", "AAAA"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAAAB";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> dictionary = {"A", "G", "B", "C", "D", "E", "F", "AB", "BC", "CD", "DE", "EF", "FG", "ABC", "BCD", "CDE", "DEF", "EFG", "ABCD", "BCDE", "CDEF", "DEFG"};
    string message = "ABCDEFGABCDEFGABCDEFGABCDEFGABCDEFGZ";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> dictionary = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAAA"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAC";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> dictionary = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAAA"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> dictionary = {"AA", "BB", "A", "B", "AB", "BA", "BBB", "AAA", "ABAB"};
    string message = "AABBABABABBBBABAAAABBBABABABAAABBB";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS!";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> dictionary = {"A", "AA", "AAA", "AAAA"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> dictionary = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS!";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> dictionary = {"AB", "C", "ABC"};
    string message = "ABC";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS!";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> dictionary = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA"};
    string message = "AAAAAAAA";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS!";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> dictionary = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAA", "AAAAAAAAA", "AAAAAAAAAA"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS!";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> dictionary = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA", "AAAAAAA", "AAAAAAAAAA", "AAAAAAAAAAAAAAAAA"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "IMPOSSIBLE!";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> dictionary = {"A", "AA", "AAA", "AAAA", "AAAAA", "AAAAAA"};
    string message = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS!";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> dictionary = {"ABC", "BCD", "CD", "ABCB"};
    string message = "ABCBCD";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS!";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> dictionary = {"HI", "H", "I"};
    string message = "HI";
    MessageMess* pObj = new MessageMess();
    clock_t start = clock();
    string result = pObj->restore(dictionary, message);
    clock_t end = clock();
    delete pObj;
    string expected = "AMBIGUOUS!";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=264869&rd=4550&pm=1331
********************************************************************************
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cstdio>
#include <cmath>
#include <cctype>
#include <sstream>
 
using namespace std;
 
const string AMB="AMBIGUOUS! ";
const string IMP="IMPOSSIBLE! ";
 
class MessageMess
{
  vector<string> dict;
  map<string, string> R;
  string rest (string m)
  {
    if (m=="") return m;
    if (R.count(m)!=0) return R[m];
    string sol=IMP;
    for (int i=0; i<dict.size(); i++)
    if (m.size()>=dict[i].size() && m.substr(0, dict[i].size())==dict[i])
    {
      string tail=rest(m.substr(dict[i].size()));
      if (tail==AMB) return R[m]=AMB;
      if (tail==IMP) continue;
      if (sol!=IMP) return R[m]=AMB;
      sol=dict[i]+" "+tail;
    }
    return R[m]=sol;
  }
  
  public:
  string restore(vector <string> a, string b) 
  {
    dict=a;
    string sol=rest(b);
    return sol.substr(0, sol.size()-1);
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/