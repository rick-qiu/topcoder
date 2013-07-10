/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12325
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

class FauxPalindromes {
public:
    string classifyIt(string word);
};

string FauxPalindromes::classifyIt(string word) {
    string ret;
    return ret;
}


int test0() {
    string word = "ANA";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string word = "AAAAANNAA";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string word = "LEGENDARY";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string word = "XXXYTYYTTYX";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string word = "TOPCOODEREDOOCPOT";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string word = "TOPCODEREDOOCPOT";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string word = "XXXXYYYYYZZXXYYY";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string word = "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSHSSSSSSSSSSSSS";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string word = "IIIIIIIIIIIIIIIIIIIIIIIIAAAAAAAIIIIIIII";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string word = "UUUUUUUUUUUUUUUUUUUUUUUUUYGGEGYYYUUU";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string word = "OOOOOOOOOOHPPPHHHHHHHHHHHOOOOOOO";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string word = "KKKKKKKKKKKKKKSSDSSKKKKKKKKKKK";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string word = "HHHHHHHHHHHHHHHHHEEPPEEEHHH";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string word = "WWWWWWWWWWWCECCCCW";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string word = "OOOOEEQQEEEEEEEEOOOOOOOOOO";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string word = "VVVVVVV";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string word = "NNNNNNNNNNNNNNNNNNNNNVVOOLOOVVNNNNNNNNNNNNNNNNNNN";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string word = "FFFFFFFFFFFFFFFKKKKFFFFFF";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string word = "SSSSSSSSSSSSKKKKKKKKTFTKKKKSSSSSSS";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string word = "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFQQQQQFFFFFFF";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string word = "GGGGGGGGGGGGG";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string word = "UUUUUUUUUUUUUXXXXGGGGGGGGGGGRGGXXXUUUUUUUUUUUUUU";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string word = "KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKFFFFFFFFFFKK";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string word = "XXXXXXXXX";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string word = "QQQQQ";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string word = "GFFFFGGGGGGGGGGG";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string word = "MMMMMMMMMMMMMMMPMMM";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string word = "K";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string word = "FGGGGGGGGGGGGGGGGGGGGUGGGGGGGGGGGGGGGF";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string word = "MQIIIQMMMMMMMM";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string word = "XXXXXXZZZZZLLLLLZZX";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string word = "LLLWWLLLLLLLLLLLL";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string word = "GGBBGGGGGGGGG";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string word = "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIJII";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string word = "LMLLLLLLLLLLLLLLLLLLLLLLLLL";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string word = "AAAAAAAAAAAAAAAAAAAAAAAAOAAAAAAAAAAAAAAA";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string word = "PYYAAYYYYYYPP";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string word = "SSSSSSSS";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string word = "UUUUUURURRUUUUUUUUUUUU";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string word = "MMMMMMMMMMUUUJUUMMMMMMMMMMMMM";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string word = "AAAAAAAAAAAAAAAAAAAAAAAANNAAAAAAAAAAA";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string word = "OOOOOFOO";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string word = "WWWWWWWWWBBBBCCBWWWWWWW";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string word = "KKKKKKKKKKKDKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string word = "PPPPPPPPPPPPPPPPYYYYYYYYYYYYDDYYYYYYPPPPPPP";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string word = "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRMMMMRRRRRRRRRRRRR";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string word = "EEEEXXXXXXXXXXXWWDWWXXXXE";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string word = "WCSSBSCWWWWWWWWWWWWWWWWWWWWW";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string word = "VVVVVVVVVVVVVVVUUUUUUUUFAFFUUUUUUUUUUVVVVVVVVVVVVV";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string word = "EEEEWFFNNYNFWWWWWWWWWEEEEEEEEEEE";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string word = "MMMMMMMMMMMMMMMMMMMMMMMMMMHHHHHHHHHHHHHHM";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string word = "DDDDDDFDDDDDDDDDDDDDDDDDDD";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string word = "AAAAAAAAAAAAAAAAAAAAAASSSSAAAAAAA";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string word = "JJJJJJJJJJJJJJ";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string word = "KKKKKKKKTTTTTTTTTTETKKKKKKKKKKKKKK";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string word = "XXCX";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string word = "AAAAAAAAAAAAAAAAAAAAAAAAAAIEIAAAAAAAAAAAA";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string word = "SSSSSSSSSQQQQPJOOFFMFOJPPPPPQQQQQQQQQSSSSSSS";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string word = "ZZZIIIIIIIIIIIIIIIIIIPZDEEEWEEDDZPPPIIIIIIIIZZZ";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string word = "OOOOOOOHHHHWKKKKKKKKFFFFTJTFKKKKKKKKKKKKWHHHHO";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string word = "IIRRRRRRRDDDDDDDDDSSSSFFQBQFSSDDDDRIIIII";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string word = "OOMMMMMMLLLLLLLLFFFFFFFFQUUTUQFFLLLLLMMMMMMMOOOO";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string word = "GGGGGGPHHHHHHHHHHHHHHFWWWEEGEWFFHHHHHHHPPPPPPPG";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string word = "ZZZZZZZZZAAAAEEEEEEEEEBBJJJLLLOWWOLLJBEAZZZZZZZ";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string word = "XXXXXXXXXXXXXXXXXEEEEMMZMBLBMZMMEEEEEXXXXXX";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string word = "SSSSIIIXXXXXXXXXXXXFFONTTNNOFFXIIIIIISSSSSS";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string word = "KKKKKKKJJJJJJJJJJJJJJPTTDDONOOODDTTTTPPJKKKKKKKKKK";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string word = "ELUHHAGKTTAZZATTKGAHHULE";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string word = "EUKUHVWFWENAMKIHLEELHIKMANEWFWVHUKUE";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string word = "ZUKDHIBTNUICIUNTBIHDKUZ";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string word = "UASUGECOOFAJJHIASQZLUNVAVNULZQSAIHJJAFOOCEGUSAU";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string word = "ZKTHLUUNVNUULHTKZ";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string word = "TVMZDVHDSVCKCVSDHVDZMVT";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string word = "HNBGBHESEREWVYRYVWERESEHBGBNH";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string word = "COAPPTWIOEIBORCTZEIISYUYSIIEZTCROBIEOIWTPPAOC";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string word = "HJNYFFDMMDFFYNJH";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string word = "SNZUGBRQMSFHYHFSMQRBGUZNS";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string word = "ZDGKHFKUBUKFHKGDZ";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string word = "GIXWEJIQQIJEWXIG";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string word = "IBSJKTYFCDZHFSRYYRSFHZDCFYTKJSBI";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string word = "DRXNOBLLBONXRD";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string word = "BFNJGLYMEMYLGJNFB";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string word = "NIRSLVLLZUHOJIUBNTENFXFNETNBUIJOHUZLLVLSRIN";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string word = "BTZDRXZVHMQVZNWHIVCCVIHWNZVQMHVZXRDZTB";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string word = "LKRNBCOHRIBDNEHFKYTDSSSSDTYKFHENDBIRHOCBNRKL";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string word = "TNFFOJQQGDPWQTUMULQZNVVNZQLUMUTQWPDGQQJOFFNT";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string word = "ZJKSDMAPEYIXPHJKOIIOKJHPXIYEPAMDSKJZ";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string word = "ZUBWLCMSHNOPONHSMCLWBUZ";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string word = "CIOCIGCMGBUGXYXGUBGMCGICOIC";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string word = "JVVGGEYCCVCYHFMSILSOCWAVVAWCOSLISMFHYCVCCYEGGVVJ";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string word = "MGGKFMSPOHAHOPSMFKGGM";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string word = "RZRSOVTUHMYIAYRRFUQMFFSFFMQUFRRYAIYMHUTVOSRZR";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string word = "GISBBHQOQHBBSIG";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string word = "VRRODWGZBQRLLRQBZGWDORRV";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string word = "HSUEWFLOMMJOEIYTYSOERAWYWAREOSYTYIEOJMMOLFWEUSH";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string word = "HCOOVEPFQPPQFPEVOOCH";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string word = "MEPLXBSTZQIURNJPVPJNRUIQZTSBXLPEM";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string word = "HQQKGTDGGDTGKQQH";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string word = "KQWDWJNCZQZJGKKXJZPUUGUUPZJXKKGJZQZCNJWDWQK";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string word = "OBDYUEOFQKFQIYBPSFPBUGSGUBPFSPBYIQFKQFOEUYDBO";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string word = "VHYCGVDRRSOKKNVNKKOSRRDVGCYHV";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string word = "MFWWQQWOAHUQGFQPEVMMVEPQFGQUHAOWQQWWFM";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string word = "NKITLZUDEZMNKQMYNEJJENYMQKNMZEDUZLTIKN";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string word = "GGJQJUGQELLEQGUJQJGG";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string word = "ASAUCICCCCICUASA";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string word = "FMTBMRERMBTMF";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string word = "MQPRAFWGKPNMWHWKKWHWMNPKGWFARPQM";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string word = "KLPWCZUGVIRRVHHVRRIVGUZCWPLK";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string word = "NJAWHYGEJZDNFZOWUSPJPJPSUWOZFNDZJEGYHWAJN";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string word = "GJQIAQDTOSVJRXMOUFZZFUOMXRJVSOTDQAIQJG";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string word = "UYHMSDTKFICDOYUUPCCCCPUUYODCIFKTDSMHYU";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string word = "LYGTKZVSDUBVQZOYOZQVBUDSVZKTGYL";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string word = "QRYAGGHWXBXUWWDJMMJDWWUXBXWHGGAYRQ";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string word = "CDLPJDQXXQDJPLDC";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string word = "NCUZNRBUWWHGESHRGVUSUUKUUSUVGRHSEGHWWUBRNZUCN";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string word = "YOZDHOZOZPGJGTINMUPHNPPNHPUMNITGJGPZOZOHDZOY";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string word = "GASWAKUTTZNTQKHKQTNZTTUKAWSAG";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string word = "HHHHHHUDDNDUUUUHHHHHHHHHHHHHHHHHHHHHSHHHHHHHH";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string word = "YFRAJFEVVWTVEYSVVTIPLSLPITVVSSEVTWVVEFJARFY";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string word = "ZZZZZZZZZZZZZZZZGDDDDDTVTTTZDDGGGGGGGGGGGZZZZZZZ";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string word = "CJXEJACCAJEXJF";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string word = "NNNNNNNNUUUGUUUUUUUUUUUDDJJJJGGJDDDDDDDDDUUNNNNN";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string word = "LEWOFQQFAWEL";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string word = "UUUGUUUUHHHHHHHXXXXXXXXWXHHHHHHHUU";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string word = "PCAWKOVVEKDAUAZOOZAFADKEVVOKWACP";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string word = "FNNNNDNNNNNNNNHHHWWHNFFFFFFFFFFFFF";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string word = "SVZCLHRYJOXXOJYRKLCZVS";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string word = "SSSSSSSSSGGGGGCKKKTKKKCCGGGGSSSSSS";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string word = "PXMDCWGJATHKWTCKEOMKCSDSCKMOEKCTWKHTAJGWTDMXP";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string word = "OOOOWOOOIQQXQQQIOOOOOOOOOOO";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string word = "UDZKURZMHMJTRSDDSRTJMHUZRUKZDU";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string word = "FFFFFFFFFFFFFFFFFFFFRRRRRRRRORRRUCCUURF";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string word = "HFKXVRMQTWSOTQGSNNSXDVQVDXSNNSGQTOSWTPMRVXKFH";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string word = "RRRJJJJJJOJJJJJBPBBJJRRR";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string word = "FLVASXQWIDSUYJFCGIMTAJKJJKJATMIGCFXYUSDIWQXSAVLF";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string word = "CCCCCCVVVVVVVVVVVLLLLLMULVVCCCCCCCCCCC";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string word = "CTZHTJBPYNKXCRYCQEJZHXOJVJOXHZJEQCYRCXKNYPBJTHZTC";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string word = "ZZZZZZZAAADDDVDCCDAAAAAAZ";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string word = "LTSISEDXVJQNKVQHFAERALAREAFQQVKNQJVXDESISTL";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string word = "WWWWDDDDDJJJBBJDDDDDWWWWWWTWWWWWWW";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string word = "TYJTEGYAMZMNRWZJVVJZWRNMZMAYGEQJYT";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string word = "FFFCZZZGZPFFF";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string word = "BLXIUZZUIMLB";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string word = "SSSSSSSSAAAAWAFJFASSSSS";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string word = "JWQFNUCEJPTYZQVTZOJWWJOZTVQZETPJECUNFQWJ";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string word = "TTTTTTTTTTTTTUOMOUUFTTTTTTT";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    string word = "QQGTLJZLVQYSQSTBUYUBTSQSYQVLZJLTGXQ";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    string word = "NNNNXXXXXXXXXXXXXCXJYJXXXXXXNNNNN";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    string word = "HZFZYVHCAYGWRNMFYIHEALLAEHIYCMNRWGYACHVYZFZH";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    string word = "QQQQQQQQQQQQQQQQQQRRRCCCCLILCCCCCRRRRRRRRZRRQQQQ";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    string word = "CQHXXGAQQAGXSHQC";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    string word = "GGGNGGGGGGGGGGGGGGGGGGGGIIIIIIKKKUKKIIIIIIIIIIIGG";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    string word = "FXMGOQWBCFTTFKBWQOGMXF";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    string word = "FFFFFFFFFFFFDDDDDDDDUUUJUDDDDDFFFFFFYFFFF";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    string word = "TMIAHNSTBYLPZVQONOEQCKHKHKCQEONOQVZPLYBTSNHAIGT";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    string word = "CCCCCCCCCCIIIIIIIIIIIWMMMWEC";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    string word = "FWDTITDJF";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    string word = "EIEEEPPPPPPPXXXKXPPPPPPEEE";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    string word = "OPXCNGTRJULZVBNWGXJFQJJQFJXGWNBVZLUNRTGNCXPO";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    string word = "FFFFFFFFFFFFFFFFFFFFFFFFEBBBBBBBBWWIIHHIWBBBF";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    string word = "LWJOXKHGHTKWGAAJDAEESQYTVVTYSSEEADJAAGWKTHGHKXOJWL";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    string word = "YYYFFFFFGFFFRIRFFFYYYY";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    string word = "KPNCIJAZHUMZTYZMQETGGYIXHXIYGGTEQMZDTZMUHZAJICNPK";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    string word = "AAMLLLLJJJJLLLLLALLLLLLLLMMAAAAAA";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    string word = "FHJNYDOCMHTURHEGADOODAGEHRUTHMCODKNJHF";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    string word = "RRRRWWWKKKWDWKWWWWWWR";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    string word = "FDMABJOYDUBOBUDYOJAAMDF";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    string word = "AT";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    string word = "AAAABCAAAA";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    string word = "ABCA";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    string word = "ANNA";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    string word = "TTOOTPPPOOOOT";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    string word = "ASDFGA";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    string word = "XYZYMX";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    string word = "AANA";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    string word = "AB";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    string word = "AABBCBA";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    string word = "AANNAA";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    string word = "ABBA";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    string word = "ABBCBA";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    string word = "A";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "PALINDROME";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    string word = "KKOOOOOOOOOK";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    string word = "ABC";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "NOT EVEN FAUX";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    string word = "TTAAXAAT";
    FauxPalindromes* pObj = new FauxPalindromes();
    clock_t start = clock();
    string result = pObj->classifyIt(word);
    clock_t end = clock();
    delete pObj;
    string expected = "FAUX";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23081873&rd=15186&pm=12325
********************************************************************************
#include <set>
#include <map>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <vector>
#include <string>
#include <cctype>
#include <cstdio>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <complex>
#include <numeric>
#include <valarray>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
 
#define inf 1061109567
#define pb push_back
#define mp make_pair
#define all(a) a.begin(),a.end()
#define mem(x,a) memset(x,a,sizeof(x))
#define rep(i,n) for(int i(0),_n(n);i<_n;++i)
#define repi(i,a,b) for(int i(a),_b(b);i<_b;++i)
#define repe(it,c) for(__typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
#define len(x) ((int)(x.size()))
 
 
 
#define uniq(c) (c).resize(unique(c.begin(),c.end())-(c).begin());
 
 
 
 
class FauxPalindromes {
public:
    string classifyIt( string word ) {
    string s1=word,s2;
    s2=s1;
    reverse(all(s2));
    if(s1==s2)return "PALINDROME";
    
    uniq(s1);
    s2=s1;
    reverse(all(s2));
    if(s1==s2)return "FAUX";
    return "NOT EVEN FAUX";
    
    }
};
 
 
 
// Powered by FileEdit
// Powered by moj 4.15 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/