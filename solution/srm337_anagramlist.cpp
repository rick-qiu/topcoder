/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7407
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

class AnagramList {
public:
    string getAnagram(string s, int i);
};

string AnagramList::getAnagram(string s, int i) {
    string ret;
    return ret;
}


int test0() {
    string s = "tree";
    int i = 1;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "eetr";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string s = "tree";
    int i = 6;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "reet";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string s = "tree";
    int i = 12;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string s = "abcabfebda";
    int i = 5000;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "aadfcabbbe";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string s = "sdoijgfasdkhaiw";
    int i = 2000000000;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "adsdghwiiokfjas";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string s = "a";
    int i = 0;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string s = "pppppppppppppppppp";
    int i = 1;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string s = "abcdefghijkja";
    int i = 1556755199;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "kjjihgfedcbaa";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string s = "kabfcdefghijk";
    int i = 1556755200;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string s = "f";
    int i = 2000000000;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string s = "wcwwczwwrrzwrcwrcwwz";
    int i = 1876512680;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "zwwwwczrwwwwzcccrrrw";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string s = "uunmuhhhou";
    int i = 14116;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "ouhhuuumhn";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string s = "hrsrqzsrfhhhfhtss";
    int i = 790187153;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "fshhhrzshfsqtrrhs";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string s = "rmqqhmmmnvnarala";
    int i = 1133061591;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "amlnammmvhqrqnra";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string s = "zrxdczabxpuqcmcxbqpm";
    int i = 950222756;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "abbccdcxmzqpurxqpxmz";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string s = "sbkuboddswrwuk";
    int i = 2242816;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "bbdwrsdkksuowu";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string s = "ybjjqlpdbjkljpbqokdp";
    int i = 595439104;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbddlyjkjjpjkplpqoq";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string s = "gtkkvgakgaak";
    int i = 554400;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string s = "vlxfffflxxxxtxxq";
    int i = 86486399;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxxvtqllffff";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string s = "aa";
    int i = 0;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "aa";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string s = "zx";
    int i = 1;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "zx";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string s = "pf";
    int i = 2;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string s = "dtdidtdttitiiitdidti";
    int i = 133024319;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "tttttttiiiiiiidddddd";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string s = "ppppmp";
    int i = 5;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "pppppm";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string s = "tztt";
    int i = 3;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "zttt";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string s = "hkihhhikhihhhkkhhkhk";
    int i = 4537612;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "hihkhhhhkihhkkhkhihk";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string s = "nnnn";
    int i = 0;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "nnnn";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string s = "lnl";
    int i = 1;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "lnl";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string s = "rrrrgggrggrrrrgrrrrr";
    int i = 22066;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "rrgrgggrrrrrggrrrrrr";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string s = "bbt";
    int i = 1;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "btb";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string s = "sisiiiisssissiiiiiis";
    int i = 94579;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "siisssisiiiisssiiiii";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string s = "yyyyy";
    int i = 0;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "yyyyy";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string s = "iua";
    int i = 3;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "iua";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string s = "zzddv";
    int i = 23;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "zdzvd";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string s = "aavva";
    int i = 8;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "vavaa";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string s = "titqtititiitqiitqtii";
    int i = 489115504;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string s = "jjbjbbjbbjjjbjbj";
    int i = 672739871;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string s = "aogtakhatkkoxht";
    int i = 1524299588;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string s = "qhhqhqhqhhhqqhqqhqqh";
    int i = 664745666;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string s = "ieeippeieepiiieipei";
    int i = 551878429;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string s = "ebejbcjb";
    int i = 657997256;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string s = "tyyyyittytittiyytitt";
    int i = 385031039;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string s = "evmtmeececcvpktunpdt";
    int i = 125188934;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "cccdeeevttpumepktnmv";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string s = "lklssjf";
    int i = 855;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "lslfksj";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string s = "eebdttbebbdtdettbd";
    int i = 144060124;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "betebbdebbetdtddtt";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string s = "gbb";
    int i = 2;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "gbb";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string s = "kikikicdbkhbsdsicsod";
    int i = 128695557;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "bbccdksdisikiihsodkk";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string s = "xxrtjdjlyydjlj";
    int i = 175233866;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "xjxryjyldtjljd";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string s = "glgggltgttlgltt";
    int i = 209282;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "gtllggtlggtgttl";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string s = "jssozzsejeioaiorijsj";
    int i = 372066532;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "aeeijossijrsjoojzzis";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string s = "ufcckpuceqqfuecft";
    int i = 16534971;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "ccccfuuqufkftepqe";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string s = "roffficcifcocrof";
    int i = 166950261;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "frocffccciiorffo";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string s = "qwyrwywwqwywhwryh";
    int i = 124438823;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "rywwhwhryywwwwqqy";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string s = "obbtbtoootobttttobto";
    int i = 45688004;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "otbbotttototobottbob";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string s = "xccxcc";
    int i = 13;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "xcxccc";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string s = "mkupqtxfpdydtzxthzdd";
    int i = 1882733733;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "ddddfkhtzqxputzxyptm";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string s = "jimrrzmire";
    int i = 96446;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "riemzmirrj";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string s = "kkkyykikyd";
    int i = 1914;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "kkkidykyyk";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string s = "bbthsdatst";
    int i = 52545;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "dsbashtbtt";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string s = "qnkgylnkzbfyyrqoxypi";
    int i = 453055661;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "bfgikkqzyxryyyqonnlp";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string s = "iyohiohbiozwx";
    int i = 47978149;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "oioyxozhhiwbi";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string s = "vppoyriyiysyiynnyq";
    int i = 742273005;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "iinpyypqonrvysyiyy";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string s = "rrftr";
    int i = 19;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "trrrf";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string s = "nxkjjkjkacenrhjfqqpf";
    int i = 1830109640;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "aceffqkrkjjpnxqjjkhn";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string s = "zzkzhcizhtzkzh";
    int i = 9384197;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "zzkzzkhczhtzih";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string s = "koconcvdkwawwapupa";
    int i = 1996234354;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "aaadkopuwncpovwwck";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string s = "fdvujiutmghoyiufum";
    int i = 338122546;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "dffgmuivhumjyuouit";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string s = "gakgywdjujjjwqmaywky";
    int i = 1901266440;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "aadgjkyjwmjqjwygkuwy";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string s = "fejotloio";
    int i = 34154;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "oeiofoljt";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string s = "mwwmomcgauajcw";
    int i = 283485650;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "mccmmowawwjgau";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string s = "abcdefghijklmnopqrst";
    int i = 2000000000;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefgljikpmosrnqht";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string s = "abcdefghijklmnopqsr";
    int i = 2000000000;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefkihjolnrqmpgs";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string s = "aaazzcccdddfffff";
    int i = 403603199;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "zzfffffdddcccaaa";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string s = "sdoijgfasdkhaiw";
    int i = 2000000000;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "adsdghwiiokfjas";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string s = "abcjdaoiemnzdfqpldf";
    int i = 2000000000;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "aabcddnifemflqpjodz";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string s = "ammzadgawagrawdpoawd";
    int i = 2000000000;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaadwgdgwmdowrmpaz";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string s = "zjghaghsdjgasyuftpid";
    int i = 2000000000;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "aaddfgjgpjszhyhtisgu";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string s = "abcdefghijkmnopqrstu";
    int i = 2000000000;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefgmjikqnptsorhu";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string s = "abcdesghijslmmobqrst";
    int i = 2000000000;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "abbcdejsrmitlshqmogs";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string s = "abcdefgthiyuhgitvfth";
    int i = 2000000000;
    AnagramList* pObj = new AnagramList();
    clock_t start = clock();
    string result = pObj->getAnagram(s, i);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdehvgfituthfgyiht";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20280511&rd=10661&pm=7407
********************************************************************************
#include <iostream> 
#include <sstream> 
#include <cstdio> 
#include <cmath> 
#include <string> 
#include <vector> 
#include <algorithm> 
using namespace std; 
 
typedef long long LL; 
typedef vector <int> VI; 
 
#define MAX 30 
 
class AnagramList 
{ 
  LL fac[MAX]; 
  LL Count(int *kol) 
  { 
    LL ret = 1; 
    int cnt = 0; 
    int i; 
    for (i=0;i<MAX;i++) 
    { 
      cnt += kol[i]; 
    } 
       
    ret = fac[cnt]; 
    for (i=0;i<MAX;i++) 
      ret /= fac[kol[i]]; 
 
    return ret;       
  } 
   
  string Solve(int *kol, LL k) 
  { 
    LL tot = 0; 
    int i; 
    for (i=0;i<MAX;i++) 
      if ( kol[i]>0 ) 
      {   
        kol[i]--; 
        LL cnt = Count(kol); 
        tot += cnt; 
        if ( tot>=k ) 
        { 
          tot -= cnt; 
          return char(i+'a') + Solve(kol, k-tot);   
        } 
         
        kol[i]++; 
      } 
       
    return ""; 
  } 
   
public: 
  string getAnagram(string s, int k) 
  { 
    int kol[MAX]; 
    int len = s.length(); 
    int i; 
    for (i=0;i<MAX;i++) 
      kol[i] = 0; 
       
    for (i=0;i<len;i++) 
      kol[s[i]-'a']++; 
   
    fac[0] = 1; 
    for (i=1;i<MAX;i++) 
      fac[i] = fac[i-1]*LL(i); 
   
    k++;       
    LL tot = Count(kol); 
    if ( k<1 || k>tot ) 
      return ""; 
       
    return Solve(kol, LL(k)); 
  } 
 
};

********************************************************************************
*******************************************************************************/