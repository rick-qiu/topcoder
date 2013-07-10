/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12138
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

class ColorfulCupcakesDivTwo {
public:
    int countArrangements(string cupcakes);
};

int ColorfulCupcakesDivTwo::countArrangements(string cupcakes) {
    int ret;
    return ret;
}


int test0() {
    string cupcakes = "ABAB";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string cupcakes = "ABABA";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string cupcakes = "ABC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string cupcakes = "ABABABABABABABABABABABABABABABABABABABABABABABABAB";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string cupcakes = "BCBABBACBABABCCCCCAABBAACBBBBCBCAAA";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 741380640;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string cupcakes = "ABCCCACCCBCCC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string cupcakes = "ABBBBAABAAACCBABAAACACCACABCABBAABCCCBAABCCBABA";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 188207837;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string cupcakes = "CAAABBAAB";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string cupcakes = "ACCACABACABABACBBCCCBAACABABA";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 10664808;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string cupcakes = "AABCACACAAABBBBBAABAACABCBAACABA";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 16016;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string cupcakes = "ABCABCABCC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string cupcakes = "BBBBCACAAABABCB";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 450;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string cupcakes = "AACBAACBBCBBCBCACBCCCA";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 174020;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string cupcakes = "CBCAACCCACBCCBBBBABACCCACBBAAC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 8011080;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string cupcakes = "BAACBABBABCC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 408;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string cupcakes = "CCABABBBBBBAAAABCBCACBBCAAABBAAACBCACBBACABACACBB";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 323466116;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string cupcakes = "CBBCBCCBCACCBCBBAACCBCAACAACBACCBBCBAB";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 19722697;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string cupcakes = "CAACCAABBBABAACBBCBBBBAA";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 185184;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string cupcakes = "BCAACAAABACCBBABABBBACCCCBBBCCABAACABCACAABCAC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 198638319;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string cupcakes = "ABABCBCCABBCABACCABCBCCBCBAC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 6825840;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string cupcakes = "AABCBABCCBABACAAACCBCCABCABAABB";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 85228176;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string cupcakes = "BCBABAAACBAABAACACAACBCCCBCCCBC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 55045584;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string cupcakes = "BAACBABBABBCCCBCCCACBCCABBAAAAACBACCBBBB";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 680898127;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string cupcakes = "AACCCAACBABBCBABCACAACCBCCABBC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 27054720;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string cupcakes = "CCAABBACBBBBACBCCAABBABCBBBBBCCAAABBCBCCBABBAABAAB";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 838553334;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string cupcakes = "BCBABCCCCBABCACACAACABCBAABCBCACCAABAABCCBCCCCCCCA";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 838553334;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string cupcakes = "BACCCAABCCCABBAACCACCCABBACCACACAACCACBCBAABCCCCBA";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 534612302;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string cupcakes = "BABCAAAACACBAABACCACBACCCBBBBCBCBCCCACCAACCCAACACA";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 451311121;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string cupcakes = "CBACBCBCBCAAACAABBAAABACAABABBBBACACCACBACCABBCACC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 969866300;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string cupcakes = "BABCAAACBCAABBACAACABAABBACAACAABACCBCBCCBABABABBA";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 359261006;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string cupcakes = "CABBCABCCCCCCAACABABBCACABABABCACABCCABBABBACCACBA";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 807732686;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string cupcakes = "ACACCBACCBBACBBAAABCCCBBAABABCBBACBCBCABABBAACBABA";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 829127786;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string cupcakes = "BAACBAAACBABBBCCAABBCAABAACCCAAAABAAAAACCBBBCAABCA";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 612092993;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string cupcakes = "CBAAABBCBBACCABCBBCABCCAAACCBBCBCACABBAAAAACBBBAAB";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 823779011;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string cupcakes = "ABCABAABCCCCBACBACABCABAAACBCCBCBAABABCBBCAAABCBAA";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 969866300;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string cupcakes = "AABCBCAABCBCACABACBBBAABBBABCBBACAABCBCBCABCBABCCA";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 618020015;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string cupcakes = "ABBBACCBACCCACAABCBBBBCBBBBABBABCCACCABAACAABBBABB";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 439564296;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string cupcakes = "CACCCBBACCCABCACBAABABAAABBBCAACBBCBCBBCABACAACCAA";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 807732686;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string cupcakes = "ABBACBACBCABACCCACACCBAAABACACCCBCCBACABABBAAAAABB";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 618020015;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string cupcakes = "CAAAAABCBACBCABCCCCABACCBAABBCACCAAABCAAACACABBCBB";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 991666600;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string cupcakes = "AABACCBABACBCCCAABABBAACAABCACBBCABABAACAACBABCBCC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 395853981;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string cupcakes = "CCAACBAAABBCCBABBBBABABBBBAAAAACABAACBBCCCCCBABCBA";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 270820324;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string cupcakes = "CABACACAAAABCCCACBBABBAAACABCCCABBBABCBCCBAABAAACC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 618020015;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string cupcakes = "CBAABBCAABCACACBBBAAACCCCACACCABAABCBBCCAACABACBBC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 823779011;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string cupcakes = "ABCBCABBCABBACBABBCABAAABCCCABCCACBCABBCCCBAABC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 423411909;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string cupcakes = "CBABBACBABABCCCCCAABBAACBBBBCBC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 24862992;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string cupcakes = "AAAAAAAAAAAAAAABBBBBBBBBBBBBBBCCCCCCCCCCCCCCC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 730747455;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string cupcakes = "AAAAAAAAAAAAAAAABBBBBBBBBBBBBBBBACCCCCCCCCCCCCCCCB";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 139077442;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string cupcakes = "ABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCABCCC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 726665879;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string cupcakes = "AAAAAAAAAAAAAAABBBBBBBBBBBBBBBCCCCCCCCCCCCCCCABCAB";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 139077442;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string cupcakes = "ABCA";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string cupcakes = "ABCCCAAABBBCCCAAABBBCBCBACBACACACACBCACBCBAC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 280387198;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string cupcakes = "BCBABBACBABABCCCCCAABBAACBBBBCBCAAABBC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 886239205;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string cupcakes = "AAAAAAAAAAAAAAABBBBBBBBBBBBBBBCCCCCCCCCCCCCCCCCCCC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 395853981;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string cupcakes = "AABABABABABABCCCBBCBABCBACBACBBCBCCBCCCBACABCBCBC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 521301082;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string cupcakes = "AAAAAAAAAAAAAAAABBBBBBBBBBBBBBBBCCCCCCCCCCCCCCCC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 853062226;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string cupcakes = "ACBACBABBCABCBABABACACABCBACBACBABCAC";
    ColorfulCupcakesDivTwo* pObj = new ColorfulCupcakesDivTwo();
    clock_t start = clock();
    int result = pObj->countArrangements(cupcakes);
    clock_t end = clock();
    delete pObj;
    int expected = 746183318;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22904116&rd=15173&pm=12138
********************************************************************************
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
 
#define REP(i, n) for(int i=0; i<(int)n; ++i)
#define FOR(i, c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(),(c).end()
 
using namespace std;
 
typedef long long lli;
 
static const double EPS = 1e-5;
 
const int N = 50 + 1;
const int A = 0, B = 1, C = 2, D = 3;
const int LAST = 4, FIRST = 4;
 
lli memo[FIRST][LAST][N][N][N];
 
const lli mod = 1000000007;
 
lli rec(int first, int last, int a, int b, int c)
{
  lli &ret = memo[first][last][a][b][c];
  if (ret != -1) return ret;
  if (a == 0 && b == 0 && c == 0) {
    return last != first;
  }
 
  lli sum = 0;
 
  if (first == D) {
    if (a) sum = (sum + rec(A, A, a - 1, b, c)) % mod;
    if (b) sum = (sum + rec(B, B, a, b - 1, c)) % mod;
    if (c) sum = (sum + rec(C, C, a, b, c - 1)) % mod;
  } else {
    if (last == A) {
      if (b) sum = (sum + rec(first, B, a, b - 1, c)) % mod;
      if (c) sum = (sum + rec(first, C, a, b, c - 1)) % mod;
    }
    if (last == B) {
      if (a) sum = (sum + rec(first, A, a - 1, b, c)) % mod;
      if (c) sum = (sum + rec(first, C, a, b, c - 1)) % mod;
    }
    if (last == C) {
      if (a) sum = (sum + rec(first, A, a - 1, b, c)) % mod;
      if (b) sum = (sum + rec(first, B, a, b - 1, c)) % mod;
    }
  }
 
  return ret = sum;
}
 
class ColorfulCupcakesDivTwo {
public:
  int countArrangements(string C)
  {
    int a = count(C.begin(), C.end(), 'A');
    int b = count(C.begin(), C.end(), 'B');
    int c = count(C.begin(), C.end(), 'C');
 
    fill(&memo[0][0][0][0][0], &memo[FIRST][0][0][0][0], -1);
    return rec(D, D, a, b, c) % mod;
  }
 
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/