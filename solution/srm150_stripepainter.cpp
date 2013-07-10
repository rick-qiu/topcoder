/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1215
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

class StripePainter {
public:
    int minStrokes(string stripes);
};

int StripePainter::minStrokes(string stripes) {
    int ret;
    return ret;
}


int test0() {
    string stripes = "RGBGR";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
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
    string stripes = "RGRG";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string stripes = "ABACADA";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string stripes = "AABBCCDDCCBBAABBCCDD";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string stripes = "ABCDEFGHIJKLMNOPQRSTUVWQQQWVUTSRQPONMLKJIHGFEDCBA";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string stripes = "ABCDEFGHIJKLMNOPQRSTUVWABCDEFGHIJKLMNOPQRSTUVW";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string stripes = "JJJJJJJJJJJJKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
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
    string stripes = "ABCDEFGGFEDCBAABCDEFG";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string stripes = "ABCDCBAABCDCBAAAAABCDCBA";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
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
    string stripes = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string stripes = "X";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
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
    string stripes = "RGBGRB";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string stripes = "ABCDE";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string stripes = "ABCDEFGHIJKLMNOPQRSTUVWXYYXWVUTSRQPONMLKJIHGFEDCBA";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string stripes = "JGXJFGDKGTCVGHJVGHJGDJGHVGHJFDGHJGFGHJ";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string stripes = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string stripes = "AEBEACABDABDB";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string stripes = "CGBBCDCGEAGCEEIAABHFCIKEHFBHG";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string stripes = "DBBFKDHEIGKJHGBJFEDCEHJHIGBEB";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string stripes = "DEJJEDAIJHBFCEGHFEADCJAIIGKBF";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string stripes = "DACHIGFHECADGCDFEIEHIDFCEGIIGFCDGDCFIIGCIIDCGFIGHG";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string stripes = "CIBIGBFBCGAEHFHGCFEEGGIGFIBIIAGFHEGBAHIIFIHDGEGIDF";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string stripes = "CAACEBBABCBEBBCACAAEEBBAAEBAAEDCEEEBECAAEAECBCCDEB";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string stripes = "ADAEBCBCACBDEAACAEAEABCDABAABCEEBDDCDDDCBEBABDDDBC";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string stripes = "BECBBDDEEBABDCADEAAEABCACBDBEECDEDEACACCBEDABEDADD";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string stripes = "EBEDBDEAAECDBEAECDBCCDCBCCECACAEDDAAEBCDCCDAAAAEDE";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string stripes = "HAEBDFDFEEFEFBHIGGGBACFEIAFHFABAECBIFFDEAEFHACHCDF";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string stripes = "GDBBKCKABKHJDDJEJHKAIGEKCKGAC";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string stripes = "ABCBADEFED";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string stripes = "EACBDEBCEDFAFACFABAFEACDFCBEDECFEFADAEFE";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string stripes = "BECBBDDEEBABDCADEAAEABCACBDBEECDEDEACACCBEDABEDADD";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string stripes = "BECBBDDEEBABDCADEAAEABCACBDBEECDEDEACACCBEDABEDABB";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string stripes = "ABABABABCDEFGHIJKJHIGFEDABABABABCABABCAAAAABCABAAA";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string stripes = "BECBBDDEEBABDCADEAAEABCACBDBEECDEDEACACCBEDABEBACC";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string stripes = "ABABABABABABABABABABABABABABABABABABABABABABABABAB";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string stripes = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    StripePainter* pObj = new StripePainter();
    clock_t start = clock();
    int result = pObj->minStrokes(stripes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=287496&rd=4555&pm=1215
********************************************************************************
#ifdef WIN32
#pragma warning(disable:4786 4503)
#endif
#include <algorithm>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdarg>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
#ifdef WIN32
#define min _cpp_min
#define max _cpp_max
#define i64 __int64
#define u64 unsigned __int64
#define fore(it,x) for(vi::iterator it=(x).begin();it!=(x).end();it++)
#else
#define i64 long long
#define u64 unsigned long long
#define fore(it,x) for(typeof((x).begin()) it=(x).begin();it!=(x).end();it++)
#endif
#define all(x) (x).begin(), (x).end()
typedef vector<int> vi;typedef vector<vi> vvi;
typedef vector<string> vs;typedef vector<vs> vvs;
typedef pair<int,int> pii;typedef vector<pii> vpii;
typedef set<int> si;typedef set<string> ss;
typedef set<char> sc;typedef set<pii> spii;
 
string a;
int n;
 
typedef pair<int,pii> pipii;
typedef map<pipii,int> cache;
 
cache ch;
 
int go(int i,int j,char b)
{
  while(i<j && a[i]==b) i++;
  while(i<j && a[j-1]==b) j--;
  if(i==j) return 0;
  if(i+1==j) return 1;
  cache::iterator it=ch.find(pipii(i,pii(j,b)));
  if(it!=ch.end()) return it->second;
  int& r=ch[pipii(i,pii(j,b))];
  r=1000;
  int k;
  for(k=i+1;k<j;k++) r<?=go(i,k,b)+go(k,j,b);
  for(k='A';k<='Z';k++) r<?=1+go(i,j,k);
  return r;
}
 
class StripePainter
{
  public:
  int minStrokes(string stripes)
  {
    a=stripes;
    n=a.size();
    return go(0,n,' ');
  }
}
;
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/