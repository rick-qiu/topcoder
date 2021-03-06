/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5881
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

class PalindromeMaker {
public:
    string make(string baseString);
};

string PalindromeMaker::make(string baseString) {
    string ret;
    return ret;
}


int test0() {
    string baseString = "AABB";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBA";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string baseString = "AAABB";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "ABABA";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string baseString = "ABACABA";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AABCBAA";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string baseString = "ABCD";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string baseString = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string baseString = "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCB";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDEFGHIJKLMNOPQRSTUVWXYZZYXWVUTSRQPONMLKJIHGFEDCB";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string baseString = "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDCA";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
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
    string baseString = "ZYXWVUTSRQPONMLKJIHGFEDCBZYXWVUTSRQPONMLKJIHGFEDC";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "CDEFGHIJKLMNOPQRSTUVWXYZBZYXWVUTSRQPONMLKJIHGFEDC";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string baseString = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string baseString = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string baseString = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBAAAAAAAAAAAAAA";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAABABAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string baseString = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAB";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string baseString = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBAAAAAAAAAAAAAB";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAABBBAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string baseString = "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZBBZZZZZZZZZZZZZB";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "BZZZZZZZZZZZZZZZZZZZZZZZBZZZZZZZZZZZZZZZZZZZZZZZB";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string baseString = "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZBBZZZZZZZZZZZZZZ";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "BZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZB";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string baseString = "A";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
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
    string baseString = "Z";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "Z";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string baseString = "FZ";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
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
    string baseString = "GG";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "GG";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string baseString = "ZZA";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "ZAZ";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string baseString = "DDZ";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "DZD";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string baseString = "DZG";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
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
    string baseString = "DDDFFF";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string baseString = "DDDFFFF";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "DFFDFFD";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string baseString = "DDTTFFF";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "DFTFTFD";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string baseString = "CFD";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string baseString = "ZA";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string baseString = "MJVKGDCGNFKDCONOHYMUCGDSHSVFLYLDJCGU";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "CCDDFGGHJKLMNOSUVYYVUSONMLKJHGGFDDCC";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string baseString = "GPDSUDGVSOFOWFCUFCPGFWVG";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "CDFFGGOPSUVWWVUSPOGGFFDC";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string baseString = "UWDNOPQQMPUPDQRPOGMHUHXNHUWWWTXDGQHXRTD";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "DDGHHMNOPPQQRTUUWWXXXWWUUTRQQPPONMHHGDD";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string baseString = "HLHPHLFHAUIAXEFEWUWYYXI";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AEFHHILUWXYPYXWULIHHFEA";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string baseString = "UQUUUJKECKUUUNWIIMVESNJVUWMGGCS";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "CEGIJKMNSUUUUVWQWVUUUUSNMKJIGEC";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string baseString = "KNPATKQQPITNDRGIKEIVWQNEPKDORSAWQAAVSINOPG";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AADEGIIKKNNOPPQQRSTVWWVTSRQQPPONNKKIIGEDAA";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string baseString = "DFFD";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "DFFD";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string baseString = "NQTNNVCTTDQCPPDNT";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "CDNNPQTTVTTQPNNDC";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string baseString = "WRRICNTEZWGEBXOZJRTDZGIDBGEZUGXIWOOICONWUUIEJUIR";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDEEGGIIIJNOORRTUUWWXZZZZXWWUUTRROONJIIIGGEEDCB";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string baseString = "SS";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "SS";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string baseString = "GXHUIYPYYOXKVCUEHIKEODODVGHWPOWDCAYODPOPHA";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "ACDDEGHHIKOOOPPUVWXYYYYXWVUPPOOOKIHHGEDDCA";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string baseString = "HNURVSHNGIBIHKIGRMVFUMNNSHIBKCF";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "BFGHHIIKMNNRSUVCVUSRNNMKIIHHGFB";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string baseString = "HMLRGGGMFDVTVYLBGQQHDBFSRTSRGYURGGG";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "BDFGGGGHLMQRRSTVYUYVTSRRQMLHGGGGFDB";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string baseString = "ZGGYUCGPGSSLYAZPQQATJCULT";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "ACGGLPQSTUYZJZYUTSQPLGGCA";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string baseString = "HROORXUUUPUXMPUKXHXXUXKM";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "HKMOPRUUUXXXXXXUUURPOMKH";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string baseString = "AMFBRSXHXXRKPAMRTXGJPUBGHSFRUJTFTTF";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "ABFFGHJMPRRSTTUXXKXXUTTSRRPMJHGFFBA";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string baseString = "USDGHUAYCMWUUHSGGISYPJCIAGMSYYXMYOPMYOGXYADJAYW";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AACDGGHIJMMOPSSUUWXYYYYGYYYYXWUUSSPOMMJIHGGDCAA";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string baseString = "BUQTQTGQQXXGQUQ";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "GQQQTUXBXUTQQQG";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string baseString = "OTBOPTB";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "BOTPTOB";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string baseString = "REIZANAADZEREXIRXZYOMQAYXDQOZMDREXN";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AADEEIMNOQRRXXYZZDZZYXXRRQONMIEEDAA";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string baseString = "LJFGGMOLYGRUDYLGGILBTLCJBGOSITOHUHVVRGGFDDMDGOSCJG";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string baseString = "STUXUDHOVOCHBZVTOGZIHCBDATDTTCRGFUUATIIHRXSDOCHH";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string baseString = "RGTHRITIVSYVKPJVAOSLSBPHNTGONMTIRSLJBTTMIYKR";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string baseString = "QOKEUFEUKGBBNNRZWHAZZAZQZRHFZFGORPUEEPRWU";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "ABEEFGHKNOPQRRUUWZZZFZZZWUURRQPONKHGFEEBA";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string baseString = "WWKZKABQFWQWBCCGJZLTLHGTYQIHUYQAPGJIGUPXX";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCGGHIJKLPQQTUWWXYZFZYXWWUTQQPLKJIHGGCBA";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string baseString = "XFXRELBEBGJLPDBIPXDXIXRVPPDNGFJBYDRYBDDXBNRFF";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBDDDEFFGIJLNPPRRXXXYVYXXXRRPPNLJIGFFEDDDBBB";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string baseString = "BLNSZZGHVUWSNWRNIVAHNWQWWBADQDRNQNLBWDGNBQIUNDB";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBDDGHILNNNNQQRSUVWWWZBZWWWVUSRQQNNNNLIHGDDBBA";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string baseString = "ZNCAQOZNZKLNYSBOZLTQGAUXOAGOIBAUCANXTSDKBYWWIA";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string baseString = "OVWRITRTYYLKOUWLYKWCHICMFFGWYUHLLXOGWKVOWXMKW";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "CFGHIKKLLMOORTUVWWWXYYWYYXWWWVUTROOMLLKKIHGFC";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string baseString = "OLRUZDIWQOODDREDPPOVLIHPCXPCECUHBZQLCSLNVXWB";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string baseString = "CAABACCAAABCCCCAAACCCBBBAACBBB";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string baseString = "BCCCBABBCABCABBCBBCCBCBAABACBACCACAC";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string baseString = "ACAABCCABACBCCACCCBBACAAABCABC";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string baseString = "BBBBABACAABCBCACCBCBBCCBACBBBACACCBCBCACAAB";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string baseString = "BAACABCCBAAAACCBBAABBAAACCABBAC";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAABBBBCCCCBCCCCBBBBAAAAAAA";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string baseString = "BAAAACBBBACCACBAABABBBCACAABBAABCBCBBABAC";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAABBBBBBBBCCCCCCCCCBBBBBBBBAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string baseString = "ACACCCAABCACABBCBAABBACABCBA";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string baseString = "AABCAAACBCBBBBABAACABACCCBBBAACBCBAAABCAAC";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string baseString = "ACCCBACCBABCBCCCCBBBBCBAAAACABCBABCCBABBBBBABAAACA";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string baseString = "CCAACCCCAAABBCAACAACCBBAAACBACCCAACCAAAACCC";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string baseString = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAABABAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string baseString = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string baseString = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADDDDCCBB";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAABCDDADDCBAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string baseString = "AABBCCDDDEE";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEDEDCBA";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string baseString = "AAAAABCBAAAAAAAAAAAAAAAAAABBA";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAABBCBBAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string baseString = "AAZ";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AZA";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string baseString = "ABCDEFGHIJKLMNOPQRSTUVWXYZWXYZWXYZWXYZWXYZWXYZWXYZ";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string baseString = "ABCDEFGHIJKLMNOPQRSTUVKJHGFDSAQWERTUIPO";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string baseString = "BCDEFGHIJKLMNOPQRSTUVWXYZBCDEFGHIJKLMNOPQRSTUVWXYZ";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDEFGHIJKLMNOPQRSTUVWXYZZYXWVUTSRQPONMLKJIHGFEDCB";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string baseString = "AABBCCDDEEFFGGHHIIJJKKLLMMNNOOPPQQRRSSTTUUVV";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJKLMNOPQRSTUVVUTSRQPONMLKJIHGFEDCBA";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string baseString = "AAAABBBBCCCCDDDDEEEEFFFFGGGGHHHHYYXXZZZ";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AABBCCDDEEFFGGHHXYZZZYXHHGGFFEEDDCCBBAA";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string baseString = "ABCDEFGHIJKLMNOPQRSTUVWZXYABCDEFGHIJKLMNOPQRSTUVWX";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string baseString = "AAACCBBBBZZYYYYKKKKBBTT";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBBCKKTYYZAZYYTKKCBBBA";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string baseString = "AAAAAAAAAABBBBBBBBBBAAAAAAAAAABBBBBBBBBBCCCCCC";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAABBBBBBBBBBCCCCCCBBBBBBBBBBAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string baseString = "AAAABBBBCCCCDDDDEEEEFFFFGGGGHHHHYYXXZZZZ";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AABBCCDDEEFFGGHHXYZZZZYXHHGGFFEEDDCCBBAA";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string baseString = "A";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string baseString = "ABCDEFGHIJKLMNOPQRSTUWABCDEFGHIJKLMNOPQRSTUW";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJKLMNOPQRSTUWWUTSRQPONMLKJIHGFEDCBA";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string baseString = "ADFASDFASDFASDFKAJSLDFKASDLFKJASLDADFADKFJLSDJFL";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string baseString = "AABB";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBA";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string baseString = "AAABBB";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string baseString = "ASDFGHJKLPOIJHGFDSAERTYULKJSDDDDCCASDFGHJKLPOIUYT";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string baseString = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string baseString = "AABBCCDDEEFFGGHHFFJJDDYYKKBBUUFGHHJJ";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string baseString = "AABCDEFGHIJKLMNOPQRSTUVWXYYXWVUTSRQPONMLKJIHGFEDCB";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJKLMNOPQRSTUVWXYYXWVUTSRQPONMLKJIHGFEDCBA";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string baseString = "ABCDEFGHIJKLMNOPABCDEFGHIJKLMNOP";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJKLMNOPPONMLKJIHGFEDCBA";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string baseString = "AB";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string baseString = "ZZZZ";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZZZ";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string baseString = "AAAABBBBCCCCDDDDEEEEFFFFGGGGHHHHYYZZAABB";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AAABBBCCDDEEFFGGHHYZZYHHGGFFEEDDCCBBBAAA";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string baseString = "ASDFGHJKLQWERTYUIOPZXCVBASDFGHJKLPOIUYTREWQVBCXZ";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJKLOPQRSTUVWXYZZYXWVUTSRQPOLKJIHGFEDCBA";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string baseString = "ABCDEFGHIJKLMNOPQRSTABCDEFGHIJKLMNOPQRST";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJKLMNOPQRSTTSRQPONMLKJIHGFEDCBA";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string baseString = "AZ";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string baseString = "AAZAA";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AAZAA";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string baseString = "AABBCCDDFFGGHHJJKKLLMMNNBBVVCCXXZZAAFFGG";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "AABBCCDFFGGHJKLMNVXZZXVNMLKJHGGFFDCCBBAA";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string baseString = "ABBB";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string baseString = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWX";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string baseString = "BABA";
    PalindromeMaker* pObj = new PalindromeMaker();
    clock_t start = clock();
    string result = pObj->make(baseString);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBA";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7421158&rd=8071&pm=5881
********************************************************************************
#include <sstream> 
#include <algorithm> 
#include <cmath> 
#include <iostream> 
#include <map> 
#include <set> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
typedef long long ll; 
typedef pair<int,int> pii; 
typedef pair<double,double> pdd; 
typedef vector<int> vi; 
typedef vector<string> vs; 
typedef map<string,int> msi; 
 
struct PalindromeMaker { 
   string make(string baseString) { 
      string res; 
      int freq[30]; 
      memset(freq, 0, sizeof(freq)); 
      for (string::iterator it = baseString.begin(); it != baseString.end(); ++it) 
  ++freq[*it-'A']; 
      char mid = -1; 
      for (int i = 0; i < 30; ++i) { 
  if (freq[i] % 2) { 
    if (mid != -1) return ""; 
    mid = 'A'+i; 
  } 
  for (int j = 0; j < freq[i]/2; ++j) 
    res += 'A'+i; 
      } 
      string tres = res; 
      if (mid != -1) tres += mid; 
      reverse(res.begin(), res.end()); 
      tres += res; 
      return tres; 
   } 
 
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/