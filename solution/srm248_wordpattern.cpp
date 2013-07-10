/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3523
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

class WordPattern {
public:
    long countWords(string word);
};

long WordPattern::countWords(string word) {
    long ret;
    return ret;
}


int test0() {
    string word = "HELLO";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 60;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string word = "TC";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string word = "ABCDEFGHIJKLMNOPQRST";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 2097148;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string word = "ALKSJDLGHSDGH";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 16380;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string word = "SDG";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string word = "A";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string word = "AB";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string word = "ABC";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string word = "ABCD";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 28;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string word = "ABCDE";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 60;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string word = "ABCDEF";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 124;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string word = "ABCDEFG";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 252;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string word = "ABCDEFGH";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 508;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string word = "ABCDEFGHI";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 1020;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string word = "ABCDEFGHIJ";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 2044;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string word = "ABCDEFGHIJK";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 4092;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string word = "ABCDEFGHIJKL";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 8188;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string word = "ABCDEFGHIJKLM";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 16380;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string word = "ABCDEFGHIJKLMN";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 32764;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string word = "ABCDEFGHIJKLMNO";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 65532;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string word = "ABCDEFGHIJKLMNOP";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 131068;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string word = "ABCDEFGHIJKLMNOPQ";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 262140;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string word = "ABCDEFGHIJKLMNOPQR";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 524284;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string word = "ABCDEFGHIJKLMNOPQRS";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 1048572;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string word = "ABCDEFGHIJKLMNOPQRST";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 2097148;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string word = "ABCDEFGHIJKLMNOPQRSTU";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 4194300;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string word = "ABCDEFGHIJKLMNOPQRSTUV";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 8388604;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVW";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 16777212;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWX";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 33554428;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXY";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 67108860;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 134217724;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZA";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 268435452;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZAB";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 536870908;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABC";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 1073741820;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCD";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 2147483644;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDE";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 4294967292;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEF";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 8589934588;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFG";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 17179869180;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGH";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 34359738364;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHI";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 68719476732;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJ";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 137438953468;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJK";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 274877906940;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKL";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 549755813884;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 1099511627772;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMN";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 2199023255548;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNO";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 4398046511100;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOP";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 8796093022204;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQ";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 17592186044412;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQR";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 35184372088828;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRS";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 70368744177660;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRST";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 140737488355324;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTU";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 281474976710652;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRTSTUV";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899906842620;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRTSTUVW";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 2251799813685244;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string word = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 68719476732;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string word = "AA";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string word = "AAAAAAAAAAAAAAA";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 65532;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string word = "A";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string word = "R";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string word = "TC";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string word = "K";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string word = "XX";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJ";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 137438953468;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string word = "T";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string word = "C";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string word = "H";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string word = "ABCDEFGHIJKLMNOPQRSTUVWXYZABBBHIZZZEPPPOAAQUTNNYII";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 2251799813685244;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string word = "HELLO";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 60;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string word = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 2251799813685244;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string word = "X";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string word = "MADAM";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 60;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string word = "ABCDEEFGEADESWJFOADNDOSMGSEOSKDLSSAKEOFMMMMMMMMMMM";
    WordPattern* pObj = new WordPattern();
    clock_t start = clock();
    long result = pObj->countWords(word);
    clock_t end = clock();
    delete pObj;
    long expected = 2251799813685244;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=311170&rd=7223&pm=3523
********************************************************************************
#include <stdlib.h> 
#include <math.h> 
#include <vector> 
#include <queue> 
#include <string> 
#include <set> 
#include <map> 
#include <iostream> 
#include <sstream> 
#include <numeric> 
#include <algorithm> 
using namespace std; 
typedef vector<int> VI;typedef vector<VI> VVI; 
typedef vector<string> VS;typedef vector<VS> VVS; 
#define mp make_pair 
#define ft first 
#define sd second 
#define pb push_back 
#define zall(b) b.begin(),b.end() 
#define forn(i,n) for(int i=0;i<n;i++) 
#define forv(i,v) forn(i,v.size()) 
 
 
struct WordPattern { 
  long long countWords(string word) { 
    int n=word.size(); 
    if (n==1) return 1; 
    long long res=1; 
    res=res<<(n+1); 
    res-=4; 
    return res; 
  } 
 
 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/