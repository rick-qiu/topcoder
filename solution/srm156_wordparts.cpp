/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1361
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

class WordParts {
public:
    int partCount(string original, string compound);
};

int WordParts::partCount(string original, string compound) {
    int ret;
    return ret;
}


int test0() {
    string original = "ANTIDISESTABLISHMENTARIANISM";
    string compound = "ANTIDISIANISMISM";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string original = "ANTIDISESTABLISHMENTARIANISM";
    string compound = "ESTABLISHMENT";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string original = "TOPCODERDOTCOM";
    string compound = "TOMTMODERDOTCOM";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string original = "HELLO";
    string compound = "HELLOHEHELLOLOHELLO";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string original = "DONTFORGETTHEEMPTYCASE";
    string compound = "";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string original = "BAAABA";
    string compound = "BAAABAAA";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string original = "ABCXABCYABC";
    string compound = "ABCYABCA";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string original = "MHHMHMHMHHMHHMMHHMHMMMMMHMMHHMMMMMMMMHMMMHMMMHHHMH";
    string compound = "HMHHMHHHMHMHHMHHHMHMHHMHMHMMHHMHHMHHMHMHMHHMHMHHMH";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string original = "AAAAAAPPPPAPPPAAAPAAAAAPPAPAAAAPAAAAPPAAAPPAPPPPAP";
    string compound = "PAPPPPAPAPPPAPPAPPPPAPAAAPPPPAPAPPPPAPAAAAAAAAAPAP";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string original = "YJYYYJJJJYYYJJYJYJJYJJJYJYJYJJYYYYJJJJYJYYJYYJJJJJ";
    string compound = "YJYYYJJJJJJYJYYYYJJJJJYYJJJJJYJYYYJYYYJJYJJJJJJYJY";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string original = "PHPPPPPHPHHHHHPPPHHHPPHHPPPHPPPPPPPHHHPHHHPHHPPPPH";
    string compound = "PPPPPHHHHPPPPHPPPPHHHPPPPHPHPHPPHHPPPPHPPPPPHPHPPP";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string original = "UUNUNNUNNUNUUUNUNUNUNUNNUUUNUUNNUUNUUUNUUUNNNNUUUN";
    string compound = "UUNUNUUNUNNUNUNNNUUUNNNNNUUUNUUNUNNUNNNNUUUNNNUUUN";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string original = "ABCDA";
    string compound = "ABCDAB";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string original = "WEERWRRWWRRWRWRWRWWWWRRRWWWRRRWWRRWRWRRWRWWRRWWEER";
    string compound = "REWWRWWRREEWWW";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string original = "AYYAEAEEEAAAEAEAAEAEAAAEAAEAAEAAAEAEEEEAAAAAAAAYYE";
    string compound = "EEEAAAEYEYYYAA";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string original = "VQQVTTTVTTVTTTTVTTVVVTVVTVTVVTTVVTVTTTTVVTTVTTTQQT";
    string compound = "TTVVVVVQVQTQVV";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string original = "JZZJJMJMMMJMMJMMMMJMMJJMJJMMMMMMMMJJMJJJJMJJMJMZZM";
    string compound = "MJJMZMZMZZJJZJ";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string original = "IRRNNIININNINNIIIIIINNININIIINIIIINNNNIININNIIIRRN";
    string compound = "NNRRNNIRRIIRII";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string original = "A";
    string compound = "";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string original = "A";
    string compound = "B";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string original = "A";
    string compound = "A";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string original = "CDEABC";
    string compound = "ABCDE";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string original = "AB";
    string compound = "AB";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string original = "AB";
    string compound = "AA";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string original = "AB";
    string compound = "BB";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
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
    string original = "AB";
    string compound = "BA";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string original = "ABBBAABABBBAABBABBABABBABAABBAABBBBBABBABABBABAABB";
    string compound = "BBBAABABBBAABBABBABABBABAABBAABBBBBABBABABBABAABAA";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string original = "ANTIDISESTABLISHMENTARIANISM";
    string compound = "ANTIDISIANISMISM";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string original = "ABBBAABABBBAABBABBABABBABAABBAABBBBBABBABABBABAABB";
    string compound = "BBBAABABBBAABBABBABABBABAABBAABBBBBABBABABBABAABAA";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string original = "AAA";
    string compound = "AAA";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string original = "ABBBAABABBBAABBABBABABBABAABBAABAAABABBABABBABAABB";
    string compound = "BBBAAAABABAABBABBABABBABAABBAABABABABBABABBABAABAA";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string original = "BAAABA";
    string compound = "BAAABAAA";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string original = "GTI";
    string compound = "GTI";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string original = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    string compound = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
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
    string original = "ABBEBCC";
    string compound = "ABBCC";
    WordParts* pObj = new WordParts();
    clock_t start = clock();
    int result = pObj->partCount(original, compound);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=311502&rd=4585&pm=1361
********************************************************************************
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <set>
#include <algorithm>
using namespace std;
typedef long long i64;
 
string o,s;
int step[60];
int n;
 
class WordParts {
  public:
  bool good(int i, int j){
    int len,k,l;
    len = j - i;
    k=0;
    while(k<len){
      if(o[k]!=s[i+k+1]) break;
      k++;
    }
    if(k==len) return true;
    k=0;
    l = o.size();
    while(k<len){
      if(o[l-k-1]!=s[j-k]) break;
      k++;
    }
    if(k==len) return true;
    return false;  
  }
    
    
  int partCount(string original, string compound) {
    s = " " + compound;
    o = original;
    n = compound.size();
    if(n==0) return 0;
    
    for(int i = 1; i < 55; i++) step[i] = -1;
    step[0] = 0;
    
    for(int i = 0; i < n; i++){
      for(int j=i+1;j<=n;j++){        
        if((step[i]>=0)&&good(i,j)){
          if(step[j]<0) step[j] = step[i] + 1;
          else if(step[j] > step[i] + 1) step[j] = step[i] + 1;
        }
      }
    }
    
    return step[n];
    
    
    
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/