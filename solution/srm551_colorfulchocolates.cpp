/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12137
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

class ColorfulChocolates {
public:
    int maximumSpread(string chocolates, int maxSwaps);
};

int ColorfulChocolates::maximumSpread(string chocolates, int maxSwaps) {
    int ret;
    return ret;
}


int test0() {
    string chocolates = "ABCDCBC";
    int maxSwaps = 1;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
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
    string chocolates = "ABCDCBC";
    int maxSwaps = 2;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
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
    string chocolates = "ABBABABBA";
    int maxSwaps = 3;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
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
    string chocolates = "ABBABABBA";
    int maxSwaps = 4;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
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
    string chocolates = "QASOKZNHWNFODOQNHGQKGLIHTPJUVGKLHFZTGPDCEKSJYIWFOO";
    int maxSwaps = 77;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string chocolates = "ZWYZ";
    int maxSwaps = 2;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
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
    string chocolates = "STDCJAHMSUXMPVNGGSCGXLFCFBJ";
    int maxSwaps = 2;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
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
    string chocolates = "RQNKVRWVAKQVIEKDRQLJUS";
    int maxSwaps = 5;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string chocolates = "HWEZHPUZYAYMNZGUSWRBWJCUZCCJZTWIPCKWTEYUGWGTVON";
    int maxSwaps = 59;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string chocolates = "ETIPVERAHABCWMTAWPUAPOIOUBJIOBVUU";
    int maxSwaps = 14;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string chocolates = "SKAURDVVZH";
    int maxSwaps = 32;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string chocolates = "FFUHVKPJEQUOGYLCURMMBOGUREPTNFVTKRAFB";
    int maxSwaps = 23;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
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
    string chocolates = "HKNVRLJVFAHSDYAZRGQKUVHPFYRNZJDIUQGNB";
    int maxSwaps = 16;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string chocolates = "HRSBUSDTJKLWGGDVLEOYFYEOUUUHYJRHAJIWDNRPZ";
    int maxSwaps = 19;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string chocolates = "FIQCVURWAPAQJWKSUVJBXVLT";
    int maxSwaps = 15;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string chocolates = "MPYOAEYTIVPZRRQTHBQTTKOFMLCXGEYSUXIWDIPL";
    int maxSwaps = 13;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string chocolates = "NXYDRGHHBA";
    int maxSwaps = 28;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string chocolates = "HFDLFMQDGMAPIFZATDHGBFLUNSBPVUFEAKSFYKKFWNW";
    int maxSwaps = 74;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string chocolates = "VGLZNTCTFWGZXXUREBTPTANDLUZYQFSMMELZZPUGLDGKACD";
    int maxSwaps = 51;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string chocolates = "KGCKWIDKWJVXKMSRZXZJZBPEHOCFPQJCYLMUVRHRACPLRJEQ";
    int maxSwaps = 12;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string chocolates = "CFGRMPHQVWGGYERLBP";
    int maxSwaps = 7;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string chocolates = "GFMVSDGWWMBYUHPGXWW";
    int maxSwaps = 16;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string chocolates = "FCT";
    int maxSwaps = 2;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
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
    string chocolates = "GMKKWRPJOJ";
    int maxSwaps = 56;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
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
    string chocolates = "ECDFFABAFEAEBBFABAABEDAFFBCCDABBAEEACFEFBFEAEBBDBB";
    int maxSwaps = 126;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string chocolates = "BAAABBCCDDDDCDDAACADBCCBDDDCCDDDADABACADCDDADCADAA";
    int maxSwaps = 113;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string chocolates = "CBDBACDCBCCBCCDCADCCCBCBDDBADABCBADBCDDABBBDDACADA";
    int maxSwaps = 80;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string chocolates = "BBACCABACACAACAACBCCCCAABAAABBCCCABCBAACBACBAACABB";
    int maxSwaps = 143;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string chocolates = "EEEAADADABCECDCEDCEGDFEGDAGGCCDEEBCEECFCBAABCAGFCB";
    int maxSwaps = 91;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string chocolates = "FFECCEADDDCEDEAFACCDCFFABDDACDDAAACCCDEFAEBDDAADCA";
    int maxSwaps = 108;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string chocolates = "CBABBBCBCACCBBCABBACAAABABBACCCABCBABBCACBCAAABCCB";
    int maxSwaps = 158;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string chocolates = "HCAGGAHFBHFFFDHCAFDHHEEHCFAFCFDBHDAGEHDFGACEDBGEGB";
    int maxSwaps = 60;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string chocolates = "ECGDAFBBDEFEDCDAFEACBAACBBCAGCEEEEAECGEEBABFACDFEE";
    int maxSwaps = 102;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string chocolates = "EFFDEGCEGGGBBEDCEAGDFFGFADECACFCGBEDAEFGDCADAEFCCE";
    int maxSwaps = 126;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string chocolates = "HKJIKDSZLRXKNSPPNAMTPXDLOVUEGLBOVLYGQS";
    int maxSwaps = 27;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string chocolates = "CTDNLTDFGIBMFFCHLCJFRYTOILKCPRLTKQJXMODUWGHDNLLYNU";
    int maxSwaps = 67;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string chocolates = "MXKEPAVPQUENHXVWTCPLTQZOWQBOKTXWQJCHLXXCUDRBCMZVOQ";
    int maxSwaps = 46;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string chocolates = "JJHZFXATIVSGMBJTNISPCXGFZUEULVCUEMULJWETSXAGAJZNRU";
    int maxSwaps = 25;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string chocolates = "WRMDRHINUFSOLEKYPJCJBBJHCUIRNCYLWMPNTZCNGUERAQPQZT";
    int maxSwaps = 21;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string chocolates = "CXKLBGWUTASFWFWLAVOQBIWUJMLBOECSDOEEUAZPARWZYSKBNY";
    int maxSwaps = 40;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string chocolates = "OJPKSBVVRCXKFLOKHQLWSETRDLCEBAXRJMCDPXYJZXTFKJRRZC";
    int maxSwaps = 56;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string chocolates = "TIJLNWNRXPQPBETEWQFFSEYZPJSIIWYDEHOSEDLDTEUUINAGGH";
    int maxSwaps = 19;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string chocolates = "AMLZDUTLEPMITTWLZCZDVDZRNPTUVBFXPTYUNRHUGTCZPANOCM";
    int maxSwaps = 60;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string chocolates = "ZRVSEKMYHPGEGZCAMVJGBFKCUNRKRFGRWBJBLXBUMHASGCUVXG";
    int maxSwaps = 45;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string chocolates = "ALOCHDURUBZNYAXBNWCJJKJDQNALKGPMTFRAKLTEMTSMVRNLNQ";
    int maxSwaps = 61;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string chocolates = "WCECURCGEKXSDEJFOWYULTMXRDNERFYPHETBYVJEFIWKOGPCEQ";
    int maxSwaps = 85;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string chocolates = "AAAABBABAABABBAABBAABAABBAABAAABAABBAABAAAAABAABBA";
    int maxSwaps = 156;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string chocolates = "BAABBABBBAABAABAABAAAAAABAAABBBABBBABBAABAABABBABB";
    int maxSwaps = 110;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string chocolates = "CBDBDBADADAACCBBAADACCBAABDDDACBCCCBDCAACAAADBBDCA";
    int maxSwaps = 131;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string chocolates = "BABAAABBAAAABABAABBAAABABAABBBABBBBBBABAABAAABAAAA";
    int maxSwaps = 188;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string chocolates = "NXIASZWQAGIX";
    int maxSwaps = 4;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string chocolates = "CACBBCCDCCCEBCCCCCJJJCBBCKLBCBBCBSCSBWWWCWWCWCCCC";
    int maxSwaps = 33;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string chocolates = "CBABBACBABABCCCCCAABBAACBBBBCBCAAA";
    int maxSwaps = 8;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string chocolates = "AAABCD";
    int maxSwaps = 1;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string chocolates = "ZZZZZZZ";
    int maxSwaps = 3;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string chocolates = "QASOKZNHWNFODOQNHGQKGLIHTPJUVGKLHFZTGPDCEKSJY";
    int maxSwaps = 1234;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string chocolates = "AAABBBBBBBBBBBBBAABB";
    int maxSwaps = 1000;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string chocolates = "ZAZAZ";
    int maxSwaps = 2;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string chocolates = "QASOKZNHWNFODOQNHGQKGLIHTPJUVGKLHFZTGPDCEKSJYIWFOO";
    int maxSwaps = 2500;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string chocolates = "ABCDEFGABCDEFGABCDEFGABCDEFGABCDEFGABCDEFGABCDEFG";
    int maxSwaps = 2500;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string chocolates = "AAAAA";
    int maxSwaps = 1;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string chocolates = "AAABBBAAABBBAAABBBAAABBBAAABBBAAABBBAAABBBAABBBBB";
    int maxSwaps = 50;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string chocolates = "A";
    int maxSwaps = 2;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string chocolates = "ABCDBBVNBBB";
    int maxSwaps = 6;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string chocolates = "AABBCCCCCFGFGFGFGSCDCDCDCDCDFGFGFGFYYYYSESEWWSESEG";
    int maxSwaps = 2500;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string chocolates = "ABCDEFGHJIB";
    int maxSwaps = 4;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string chocolates = "Z";
    int maxSwaps = 2500;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
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
    string chocolates = "JWSMEADGLXDIUKWZGNXWSILWDJBWMGCFVLSHJUUKKTHDEEWBHW";
    int maxSwaps = 1;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string chocolates = "CDUCACBC";
    int maxSwaps = 2;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string chocolates = "ASDSDRGRGGEAAARRQWYUAAHAAUTNFAA";
    int maxSwaps = 55;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string chocolates = "AACAAA";
    int maxSwaps = 1;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string chocolates = "AABBCCDEFFGDTHBDBAADSBDDBSUSIDAPQZAIDTTYYAAZYYDBD";
    int maxSwaps = 37;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string chocolates = "ABBACCADDAEE";
    int maxSwaps = 2;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
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
    string chocolates = "ABACADAEAFAGADAFAGAVBABABBBBBBACADADAFA";
    int maxSwaps = 50;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string chocolates = "DACDDBEDEEBCCECCCADDAEDBBAAEABEDBEEABDCCABEACECCCC";
    int maxSwaps = 95;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string chocolates = "ABDDSCBSDXSFGFSSSDCVDSCSSXXASSSWCAXA";
    int maxSwaps = 20;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string chocolates = "AABABABABABABCCCBBCBABCBACBACBBCBCCBCCCBACABCBCBC";
    int maxSwaps = 6;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string chocolates = "A";
    int maxSwaps = 1;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string chocolates = "Z";
    int maxSwaps = 10;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string chocolates = "AABCBACAA";
    int maxSwaps = 5;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string chocolates = "AAAAAAAAXA";
    int maxSwaps = 1;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string chocolates = "ABBBBBBABBCABCBCBCAA";
    int maxSwaps = 1;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string chocolates = "ZZZZZ";
    int maxSwaps = 1;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string chocolates = "ABCDEFGHIJKLMNOPQRSTUVWXYZQBCDEFGHIJKLMNOPQRSTUV";
    int maxSwaps = 2500;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string chocolates = "QASOKZNHWNFODOQNHGQKGLIHTPJUVGKLHFZTGPDCEKSWFOOWEE";
    int maxSwaps = 2500;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string chocolates = "ABCDEFGABCDEFGABCDEFGAZZ";
    int maxSwaps = 11;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string chocolates = "CCBBCBAABCCCBABCBCAA";
    int maxSwaps = 91;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string chocolates = "ABCADAEA";
    int maxSwaps = 2;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string chocolates = "ABCDEFAAAHIJAA";
    int maxSwaps = 6;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string chocolates = "BABCDB";
    int maxSwaps = 3;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string chocolates = "ABCDA";
    int maxSwaps = 1;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string chocolates = "EDADGECCBDFAGGHIBDJFIFEHBFFJBICHGFDACCDJBAIBEJGAJ";
    int maxSwaps = 5;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string chocolates = "ABABCAABBABBBBAAAABBBBAAAAABACADADDDADDDDAACCACADD";
    int maxSwaps = 67;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string chocolates = "A";
    int maxSwaps = 2500;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string chocolates = "ABCDASAFA";
    int maxSwaps = 2;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string chocolates = "AABBBAAAABBBAAACCAA";
    int maxSwaps = 14;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string chocolates = "ABCDEFA";
    int maxSwaps = 2;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string chocolates = "AAAAA";
    int maxSwaps = 5;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string chocolates = "YEHXIDONKPSZLVCNGMPKYTDAOP";
    int maxSwaps = 50;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string chocolates = "CAAACCCCA";
    int maxSwaps = 3;
    ColorfulChocolates* pObj = new ColorfulChocolates();
    clock_t start = clock();
    int result = pObj->maximumSpread(chocolates, maxSwaps);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23026564&rd=15173&pm=12137
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
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
 
 
class ColorfulChocolates {
public:
  int maximumSpread(string x, int swp){
    int ans = 0;
  
    for(int i = 0; i < x.size(); ++i){
      int part = 1;
    vector<int> cols;
    int left = 0, right = 0;
    for(int j = i - 1; j >= 0; --j)
      if(x[j] == x[i])
        cols.push_back(left);
      else
        ++left;
    for(int j = i + 1; j < x.size(); ++j)
        if(x[j] == x[i])
          cols.push_back(right);
        else
          ++right;
    
    sort(cols.begin(), cols.end());
    int sum = 0;
    for(int j = 0; j < cols.size(); ++j){
      if(sum + cols[j] > swp)
          break;
      sum+= cols[j];
      ++part;
    }
    ans = max(ans, part);
  }
  
  return ans;
  }
};
 
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/