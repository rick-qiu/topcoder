/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5966
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

class SuspiciousStrings {
public:
    int getAmount(vector<string> dictionary, int n);
};

int SuspiciousStrings::getAmount(vector<string> dictionary, int n) {
    int ret;
    return ret;
}


int test0() {
    vector<string> dictionary = {"x"};
    int n = 1;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> dictionary = {"ab", "bb"};
    int n = 2;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> dictionary = {"ab", "bb"};
    int n = 5;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6350;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> dictionary = {"aab", "bba"};
    int n = 5;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4054;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> dictionary = {"xxxxxx", "xxx", "x", "yyxyy", "xxxyxxx", "y", "yx", "xy", "zzzzzzzzzz"};
    int n = 5;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8752;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> dictionary = {"aaaaaaaaaa", "bbbbbbbbbb", "cccccccccc", "dddddddddd", "eeeeeeeeee", "ffffffffff", "gggggggggg", "hhhhhhhhhh", "xxxxxxxxxx", "zzzzzzzzzz"};
    int n = 2147483647;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5040;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> dictionary = {"xy", "xx", "yx"};
    int n = 2;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> dictionary = {"testtest", "test"};
    int n = 18;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3022;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> dictionary = {"aaabbb", "bbbaaa"};
    int n = 16;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9396;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> dictionary = {"ssssssssss"};
    int n = 9;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> dictionary = {"pppppppppp"};
    int n = 10;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
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
    vector<string> dictionary = {"tttttttttt", "yyyyyyyyyy", "kkkkkkkkkk", "nnnnnnnnnn", "aaaaaaaaaa", "mmmmmmmmmm", "qqqqqqqqqq", "pppppppppp", "bbbbbbbbbb", "jjjjjjjjjj"};
    int n = 1073741823;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2720;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> dictionary = {"muhmx", "tbszq", "lsdxrmzxq", "jbocsznxjb", "mmpvk", "ewxzuacchf"};
    int n = 169465347;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 890;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> dictionary = {"kyyrknywut", "v", "qcbbyznoo", "fplcufh", "kbpv", "wzy", "lbigab", "bhwpsmlpu"};
    int n = 321787702;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1720;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> dictionary = {"mgkkikj", "ljghhji", "ihhmmmmi", "mlmmmlk", "kmhililj", "ikimk", "ljjmkgh", "jlhgl", "jlhhm"};
    int n = 8;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1122;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> dictionary = {"kmglk", "ikgkkk", "ighgmkhmg", "mmilg", "jkjiilllkm", "jkkiiljkmi", "kkmklggg", "ghklhkhill", "ilkmijg", "iigilkmk"};
    int n = 8;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2690;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> dictionary = {"kmhmkgh", "hjhmgkjljg", "hmmmmlj", "klmhjmj", "iimhlklihm", "jkkjgh", "mhhlhj", "iiimmgjki", "mkkhmkj"};
    int n = 1;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> dictionary = {"ilhjg", "ghghmlhhkg", "lilikkmklg", "lmlhhkji", "klhmgi", "jlhigl", "glhigkl", "llkhhmjglg"};
    int n = 3;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> dictionary = {"gikgki", "kikhiihg", "kljhkilk", "jghmjlj", "ikhiihmgm", "llklhlik", "mgimiimmj", "kmiliiki", "gkmjij", "glhghjmk"};
    int n = 4;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
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
    vector<string> dictionary = {"lmllkgj", "iilkmjjgg", "mljljjll", "mgjikgmgk", "hljiighjki", "jlljl", "iglgmgj", "hmgmimgl", "kilhmk"};
    int n = 9;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9294;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> dictionary = {"khlhlhjm", "lllmkgh", "ilglkjhg", "glkijmgigi", "ijgmhg", "kgiggjih", "kjhmjkjlj", "hmmjhhjlmm"};
    int n = 4;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> dictionary = {"vhef", "xdunklm", "zxassx", "soruhb", "wm", "dpzsktcxd"};
    int n = 1277958538;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 7072;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> dictionary = {"nautfkkvz", "tlvx", "tctq"};
    int n = 391619553;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1104;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> dictionary = {"kfo", "vryucpgqkf", "sllgxrb", "t", "oimjfmggps", "ddtizzclqr", "vnwihj"};
    int n = 1658970893;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3646;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> dictionary = {"ostkusve", "boiyyn", "gcu", "xvqdayjl", "hfzarfp"};
    int n = 925344302;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5360;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> dictionary = {"wmemiroj"};
    int n = 1993813358;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2688;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> dictionary = {"vsf", "w", "rw", "agblir", "ymhuvrewyc", "wq", "vjhix", "izmyrl", "ngryeo", "u"};
    int n = 1;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> dictionary = {"fuecbqdcr", "tlzuf", "wbiz", "x", "itdy", "yob"};
    int n = 1228691106;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2613;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> dictionary = {"msbt", "seiscoi", "as", "bmffr", "zbxfmzxhtt", "odubw", "qknbljs", "fossgi"};
    int n = 1306212165;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8086;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> dictionary = {"qvmacr", "pfsxokya", "dwluixhsu", "seobrzog", "anvsikkz"};
    int n = 1517632626;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9698;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> dictionary = {"n", "jvuwjg", "v", "vpfsmjjcdb", "hokhikusco", "ase", "bwtdisg", "uheofhr"};
    int n = 1568770062;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9832;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> dictionary = {"kny", "d", "kwwcoj", "yg", "nu"};
    int n = 1623644892;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9688;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> dictionary = {"wlbqrb", "z", "tplbu", "nmlkwydfwc", "pd", "ugkumpjmeg"};
    int n = 2067419357;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1229;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> dictionary = {"qco", "vdaaymouu", "dlxawy"};
    int n = 2134972478;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1708;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> dictionary = {"ommvwau", "ftjopbawb"};
    int n = 282435424;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 880;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> dictionary = {"v", "wgegxzedc", "bnewfi", "vnatn", "tgrgrfftf", "bfpbm", "sevrgqox", "zsmp"};
    int n = 19386926;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3090;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> dictionary = {"s", "qetlqiijja", "xtjm", "n", "pmnt", "eb"};
    int n = 1591803662;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9906;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> dictionary = {"rsyasohm", "ga", "ld", "ulx"};
    int n = 1652704556;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3167;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> dictionary = {"dmauhuccld", "lgvkrpn", "eippb", "rdox", "azbodtz", "vdaas", "gthqjwr", "kpnz", "uvtxpb", "qtrsx"};
    int n = 722997388;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6835;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> dictionary = {"xxjs", "gecvodpc", "vxmyi", "blvss", "fehlixls", "hcup", "kbcipbrsb"};
    int n = 345283398;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1300;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> dictionary = {"wybq", "i", "wzwxxacycf", "lspottmp", "oghjxzz", "rk"};
    int n = 1376994792;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9428;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> dictionary = {"ezffc", "gcghucg", "ygppmhprh", "edi"};
    int n = 1656385931;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2722;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> dictionary = {"kw"};
    int n = 1335452692;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1627;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> dictionary = {"qgea"};
    int n = 279550175;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 7392;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> dictionary = {"xsspdgjiel", "gigd", "tfceik", "htbajv", "gck", "fqgo", "av", "kcmsz"};
    int n = 697814744;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2622;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> dictionary = {"gtqz"};
    int n = 1834801500;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8833;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> dictionary = {"ps", "hbxahxjfs", "p", "attdaruca"};
    int n = 594265473;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3277;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> dictionary = {"fddpbhvka", "onl", "ajyfq", "smmilypwu", "kypzjodat", "hvk", "dfontgnty", "gsopfvjfuq", "khnjv"};
    int n = 435643524;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5918;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> dictionary = {"pla", "idjymsa", "fihxje", "dmpsmoiabg", "alqxvfu", "skkxdmjt", "rdpomjgg", "qc"};
    int n = 701202974;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 209;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> dictionary = {"chuihqsnld", "ogckzulnsa", "coqxypqlen", "izzvhdskjf", "ryoiqqydvv", "gdvqqklfia", "twyohryspc", "dnaczekoge", "dvdrhfmjbh", "tpkcrgnrto"};
    int n = 1090793943;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1456;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> dictionary = {"itwkdmvftz", "cgkfjncaww", "uqcsxrzazd", "vpgwcxepdv", "pqdirrtnhq", "nlmrbatgth", "joufmpbpgr", "fjdivsjjlf", "ryslkvresu", "ulgixrmwfd"};
    int n = 1073741823;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9264;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> dictionary = {"puztwtcrjf", "wlmxxcvcpw", "zoysgcgvmi", "kqhebgkbkb", "kqmglnxzvr", "bvfbvmxcbw", "coevggnlem", "ianhspnvbg", "dpdtazoyyl", "eqvicahtcl"};
    int n = 737583858;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2643;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> dictionary = {"fehjubimwm", "tnpwiagnyg", "xuxiojdytt", "jfdeolhtch", "rsyrxgofvk", "blnfifokwx", "auyfsdvwxp", "oeskbqlena", "opdcgzinsy", "fkvaumznpt"};
    int n = 81228650;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5456;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> dictionary = {"vlngmxskeg", "mhvtrwhkca", "orkbypecwo", "ffnpgloepa", "tmxhcaujot", "urxaxcmzjg", "subwbjxpgu", "lqtoerlemh", "dabyzilbja", "czcepepdgc"};
    int n = 1492698180;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9811;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> dictionary = {"aabbbabaab", "aaabbabbba", "bbababaaba", "abaabbaaaa", "bbabbbabba", "aaaabbabaa", "babbbababa", "abbabbabbb", "bbbbbabbba", "baabaaaaba"};
    int n = 729788645;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2049;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> dictionary = {"aaaaaaaabb", "aaaaabbabb", "abaabababa", "abbabbbbab", "baaabaabab", "ababbbaaab", "aabbabaaaa", "aabbbabbbb", "babbaaabab", "babbabbabb"};
    int n = 1992504133;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2904;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> dictionary = {"baabbbbbba", "bbaaaaaaaa", "babaabbaba", "bbbbabbbaa", "bbabaabaaa", "babbaaaaab", "babbbabbab", "aaaaaaabab", "aaaaababab", "babaababaa"};
    int n = 1073741824;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4727;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> dictionary = {"bbaabbaaaa", "abaaabbaab", "aaabababbb", "baabaaaaaa", "aaaababbbb", "abaaaabaaa", "bbabbbbaba", "babaabbbba", "baabababbb", "bbbbabbbbb"};
    int n = 1667690330;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2295;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> dictionary = {"aabaabbaba", "baabbbabba", "aabaabbaab", "abbbbbbbaa", "bbaaabaaab", "aabbbaabab", "aababababb", "abababbaab", "bbaaabbabb", "aaaaababba"};
    int n = 804359459;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 7064;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> dictionary = {"baaaabbbba", "abbbabbbbb", "baababaabb", "bbabaaabba", "bbabaababb", "aaabbbabab", "bbbbbaaaaa", "aaaaaaaaba", "aabbabbabb", "bbbabaabab"};
    int n = 330893685;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5364;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> dictionary = {"aaaabbbbab", "bbbabbabab", "baaababbba", "baababbaba", "aaaaabbaaa", "abbbababaa", "bbaabaaaab", "aabaabbbba", "babbbabaab", "aabbbababb"};
    int n = 1233;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 9798;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> dictionary = {"abcdefghij", "bcdefghijk", "cdefghijkl", "defghijklm", "efghijklmn", "fghijklmno", "ghijklmnop", "hijklmnopq", "ijklmnopqr", "jklmnopqrs"};
    int n = 1642649847;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 936;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> dictionary = {"abcdefghij", "klmnopqrst", "uvwxyz"};
    int n = 1000059993;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1984;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> dictionary = {"q"};
    int n = 2147483647;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 551;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> dictionary = {"fifi", "fi"};
    int n = 4;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2027;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> dictionary = {"test", "testtest"};
    int n = 8;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4827;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> dictionary = {"test", "testtest"};
    int n = 4;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> dictionary = {"test", "testtest"};
    int n = 10;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6073;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> dictionary = {"fi", "fifi"};
    int n = 2;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> dictionary = {"fi", "fifi"};
    int n = 4;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2027;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> dictionary = {"ngwrtuodnm", "pthqbgonm", "zroqnve", "algmeibh", "algoritm", "algo", "nve", "nm", "qbg"};
    int n = 7777564;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1180;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> dictionary = {"abcd", "abcd"};
    int n = 4;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> dictionary = {"aa", "bb", "aa"};
    int n = 2;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> dictionary = {"topcoder", "codertop", "topcoder"};
    int n = 10;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4056;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> dictionary = {"abcd", "ghju", "abcd"};
    int n = 5;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> dictionary = {"tiptip", "tiptop", "toptop", "tiptip"};
    int n = 1000000000;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1552;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> dictionary = {"killbill", "killbill", "killbill", "killbill", "killbill", "killbill", "killbill", "killbill", "killbill", "killbill"};
    int n = 777478;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8368;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> dictionary = {"tttttttttt", "yyyyyyyyyy", "kkkkkkkkkk", "nnnnnnnnnn", "aaaaaaaaaa", "mmmmmmmmmm", "uuuuuuuuuu", "pppppppppp", "bbbbbbbbbb", "jjjjjjjjjj"};
    int n = 2147483647;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 5040;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> dictionary = {"tttttttttt", "yyyyyyyyyy", "kkkkkkkkkk", "nnnnnnnnnn", "aaaaaaaaaa", "mmmmmmmmmm", "uuuuuuuuuu", "pppppppppp", "tttttttttt", "jjjjjjjjjj"};
    int n = 2147483647;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 8630;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> dictionary = {"x"};
    int n = 1;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> dictionary = {"cacaac", "aaccac", "ccacca", "aaaccacac", "caacaaccc", "acaacacaa", "aananabva", "assdfafjj", "assffaasd", "ccacaass"};
    int n = 1999999973;
    SuspiciousStrings* pObj = new SuspiciousStrings();
    clock_t start = clock();
    int result = pObj->getAmount(dictionary, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1466;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8394868&rd=8080&pm=5966
********************************************************************************
#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <vector>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <numeric>
#include <algorithm>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
 
#define Mp(x,y) make_pair(x,y)
#define For(i,a,b) for(int i=(a); i<=(b); i++)
#define Rep(i,n) for(int i=0; i<(n); i++)
#define Size(x) (int(x.size()))
 
const int mod=10000;
 
vvi matmult(vvi a,vvi b)
{
  int n=Size(a);
  vvi res(n,vi(n,0));
  Rep(i,n) Rep(j,n) Rep(k,n) 
    res[i][j]=(res[i][j]+a[i][k]*b[k][j])%mod;
  return res;
}
 
vvi matpow(vvi a,int n)
{  
  vvi b(Size(a),vi(Size(a),0));
  Rep(i,Size(b)) b[i][i]=1;
  while(n>0)
  {
    if(n&1) b=matmult(b,a);
    n>>=1;
    a=matmult(a,a);
  }
  return b;
}
 
vs dict;
int n,m;
 
string suf(string st,int len)
{
  return st.substr(Size(st)-len,len);
}
 
void foo(string st,int &i,int &j)
{
  Rep(k,Size(dict)) if(Size(st)>=Size(dict[k]) && suf(st,Size(dict[k]))==dict[k])
  {
    i=k;
    j=Size(dict[k]);
    return;
  }
  i=j=0;
  Rep(k,Size(dict)) 
  {
    int t=min(Size(st),Size(dict[k]));
    while(t>j && suf(st,t)!=dict[k].substr(0,t)) --t;
    if(t>j)
    {
      i=k;
      j=t;
    }
  }
}
 
int bar(int x,int n)
{
  int res=1;
  while(n>0)
  {
    if(n&1) res=(res*x)%mod;
    n>>=1;
    x=(x*x)%mod;
  }
  return res;
}
 
struct SuspiciousStrings
{
  int getAmount(vs dict,int n)
  {
    ::dict=dict;
    ::n=n;
    vector<pair<int,int> > ss;
    ss.push_back(Mp(0,0));
    Rep(i,Size(dict)) For(j,1,Size(dict[i])-1)
      ss.push_back(Mp(i,j));
    int m=Size(ss);
    vvi a(m,vi(m));
    Rep(i,m) for(char ch='a'; ch<='z'; ++ch)
    {
      int x,y;
      foo(dict[ss[i].first].substr(0,ss[i].second)+ch,x,y);
      if(y<Size(dict[x]))
      {
        int t=0;
        while(ss[t]!=Mp(x,y)) ++t;
        ++a[t][i];
      }
    }
    a=matpow(a,n);
    int res=0;
    Rep(i,m) res+=a[i][0];
    res%=mod;
    res=bar(26,n)-res;
    res%=mod;
    if(res<0) res+=mod;
    return res;
  }
};

********************************************************************************
*******************************************************************************/