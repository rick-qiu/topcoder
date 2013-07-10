/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1861
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

class ShortPalindromes {
public:
    string shortest(string base);
};

string ShortPalindromes::shortest(string base) {
    string ret;
    return ret;
}


int test0() {
    string base = "RACE";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "ECARACE";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string base = "TOPCODER";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "REDTOCPCOTDER";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string base = "Q";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "Q";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string base = "MADAMIMADAM";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "MADAMIMADAM";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string base = "ALRCAGOEUAOEURGCOEUOOIGFA";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "AFLRCAGIOEOUAEOCEGRURGECOEAUOEOIGACRLFA";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string base = "ABCDEFG";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGFEDCBA";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string base = "GFEDCBA";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGFEDCBA";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string base = "AAAAA";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAA";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string base = "AAAAAB";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "BAAAAAB";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string base = "ABBBBB";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBBBBA";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string base = "GECABDF";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "FDBACEGECABDF";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string base = "ACEGFDB";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGFEDCBA";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string base = "ABCDAA";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "AABCDCBAA";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string base = "CA";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "ACA";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string base = "EDD";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "EDDE";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string base = "BEDA";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "ABDEDBA";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string base = "BEABB";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "BBAEABB";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string base = "DEABCB";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "DEABCBAED";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string base = "AECEABA";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "ABAECEABA";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string base = "EEDBDEDA";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "ADEEDBDEEDA";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string base = "ACBAAADCC";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "ACBCDAAADCBCA";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string base = "ACCCCCCBDA";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "ADBCCCCCCBDA";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string base = "ACDBABDCCDB";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "ABDCCDBABDCCDBA";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string base = "BDDAABCAEAAB";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "BADDAEABCBAEADDAB";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string base = "BBCADBCEBBECD";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "BBCADBCEBBECBDACBB";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string base = "BCCAADEBCEEBAA";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "BCCAADEBCEECBEDAACCB";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string base = "EDCCCECEBACDEBD";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "DBEDCABCCECECCBACDEBD";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string base = "CECCDBBBBDBDBCBB";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "BBCBECCDBDBBBDBDCCEBCBB";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string base = "BBEDBAEEDEACEDDAC";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "BBCADDECDBAEDEDEABDCEDDACBB";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string base = "AEABEDBDBBADEECEDC";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "ACDEABCEEDABBDBBADEECBAEDCA";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string base = "AABEDDEBBDBCECDCADD";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "AABDEDACDCEBCBDBCBECDCADEDBAA";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string base = "ACCADCCDCDDBBEDACBCB";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCBCADCCEBBDCDCDBBECCDACBCBA";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string base = "BEAEDAADADDDDBDDCCABD";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "DBEACCEDAADABDDDDBADAADECCAEBD";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string base = "AEEECABCBEAEBBCCACDAEC";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "ACEADEECABCCBBEAEBBCCBACEEDAECA";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string base = "AEADACEBABCCBDBAEDCCCBC";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "ACBCCCDEABDABCCEBABECCBADBAEDCCCBCA";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string base = "AADEDEBECDCDEBCCECCEACCC";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "ACCCADECCDECCBECDCDCEBCCEDCCEDACCCA";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string base = "CBDDECBEDCEBEEEAEBCCAEEAE";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "CBDDEACBEDCEACCBEAEEAEBCCAECDEBCAEDDBC";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string base = "HMDCDJKWHWMEDBKWJEKRFHLO";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "OLHFMDCDRKEJWKBDEMWHWMEDBKWJEKRDCDMFHLO";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string base = "MWRQIGJTGNKPBHKXQGIIECSF";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "FMSCEIWRQIGJQTGNXKHBPBHKXNGTQJGIQRWIECSMF";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string base = "PXVXFOVOXFXUNVKQSVBLTGNL";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "LNGPTLBVSQKXVNUXFXOVOXFXUNVXKQSVBLTPGNL";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string base = "QTQDDSEJHKMAVPVVRSITDMMM";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "MMMDQTIQDDSEJHKMARVPVPVRAMKHJESDDQITQDMMM";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string base = "UZOUZENQJTNWLRNBTABSNHHZA";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "AUZHHOUZENQJSBATBNRLWLRNBTABSJQNEZUOHHZUA";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string base = "EOFYITMBCPSKYNAIBHGVIGFBT";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "EOFYITMBCFGPSKYNAIBHGVGHBIANYKSPGFCBMTIYFOE";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string base = "LVJYMTWWFPUAJGFAENQAITSUW";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "LVJYMTWWFPUAJGFSTIAENQNEAITSFGJAUPFWWTMYJVL";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string base = "ZNRDGCMXQCSHEIRSONFBOZDFQ";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "QFDZOBFNOSRDGIEHSCMQXQMCSHEIGDRSONFBOZDFQ";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string base = "ALRCAGOEUAOERGCOEUOOIGFA";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "AFLRCAGIOEOUAEOCEGRGECOEAUOEOIGACRLFA";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string base = "ALRCAGOEUAOEURGCOEUOOIGFA";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "AFLRCAGIOEOUAEOCEGRURGECOEAUOEOIGACRLFA";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string base = "ALRCAGOEUAOEXXGCOEUOOIGFA";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "AFLRCAGIOEOUAEOCEGXXGECOEAUOEOIGACRLFA";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string base = "ALRCAGOEUAOEXXXCOEUOOIGFA";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "AFLRCAGIOEOUAEOCEXXXECOEAUOEOIGACRLFA";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string base = "ABACADAFAGAFAHAJAKABA";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "ABACKADJAHAFAGAFAHAJDAKCABA";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string base = "ABACADAEAFAGAHAIAJAKAL";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "ABLACKADJAEIAFHAGAHFAIEAJDAKCALBA";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string base = "SDGBIULGIBNEROJOPGERG";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "GRESDGPOJORENBIGLULGIBNEROJOPGDSERG";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string base = "TOPCODER";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "REDTOCPCOTDER";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string base = "GOOGLE";
    ShortPalindromes* pObj = new ShortPalindromes();
    clock_t start = clock();
    string result = pObj->shortest(base);
    clock_t end = clock();
    delete pObj;
    string expected = "ELGOOGLE";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=311502&rd=4630&pm=1861
********************************************************************************
#include <string>
#include <vector>
#include <iostream>
#include <strstream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;
 
int len[50][50];
int pad[50][50];
int n;
 
 
 
class ShortPalindromes {
  public:
  string shortest(string base) {
    string ans = "";
    int i,j,l;
    
    n = base.size();
    for(i = 0; i < n; i++){
      len[i][i] = 1;
      pad[i][i] = 4;
      len[i+1][i] = 0;
      pad[i+1][i] = 4;
    }
    
    for(l = 2; l <= n; l++){
      for(i = 0; i <= n - l; i++){
        char h, t;
        j = i + l - 1;
        h = base[i];
        t = base[j];
        if(h == t){
          len[i][j] = len[i+1][j-1] + 2;
          pad[i][j] = 3;
        }
        else{
          if(len[i+1][j] < len[i][j-1]){
            len[i][j] = len[i+1][j] + 2;
            pad[i][j] = 1;
          }
          if(len[i+1][j] > len[i][j-1]){
            len[i][j] = len[i][j-1] + 2;
            pad[i][j] = 2;
          }
          if(len[i+1][j] == len[i][j-1]){
            if(h < t){
              len[i][j] = len[i+1][j] + 2;
              pad[i][j] = 1;
            }
            else{
              len[i][j] = len[i][j-1] + 2;
              pad[i][j] = 2;
            }
          }
        }
      }
    }
    
    //cout<<"end";
    
    i = 0;
    j = n - 1;
    l = 0;
    while(i < j){
      
      switch(pad[i][j]){
        case 1: ans = ans + base[i]; i++; l++; break;
        case 2: ans = ans + base[j]; j--; l++; break;
        case 3: ans = ans + base[i]; i++; j--; l++; break;
        case 4: break;
      }
    }
    if(i==j) ans += base[i];
    for(i = l - 1; i >= 0; i--){
      ans += ans[i];
    }
    return ans;
  
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/