/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3046
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

class MultiReplacer {
public:
    long length(string arep, string brep, string crep, int iter, int m);
};

long MultiReplacer::length(string arep, string brep, string crep, int iter, int m) {
    long ret;
    return ret;
}


int test0() {
    string arep = "abc";
    string brep = "c";
    string crep = "ba";
    int iter = 3;
    int m = 7;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string arep = "b";
    string brep = "c";
    string crep = "a";
    int iter = 2000000000;
    int m = 100;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string arep = "b";
    string brep = "c";
    string crep = "aa";
    int iter = 30;
    int m = 10000;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 1024;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string arep = "acabbcabbabac";
    string brep = "cababcababcabcabacbacbabcacb";
    string crep = "acbacbabcababcabababbabcbcab";
    int iter = 2000000000;
    int m = 2000000000;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 1876480521;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string arep = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    string brep = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    string crep = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    int iter = 1999999997;
    int m = 2000000001;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 1960000001;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string arep = "aa";
    string brep = "bbbbbbbbbbb";
    string crep = "ccccccccccccccccccc";
    int iter = 1;
    int m = 10;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string arep = "aa";
    string brep = "b";
    string crep = "c";
    int iter = 2;
    int m = 10;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
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
    string arep = "aa";
    string brep = "b";
    string crep = "c";
    int iter = 3;
    int m = 10;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string arep = "aa";
    string brep = "b";
    string crep = "c";
    int iter = 4;
    int m = 10;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string arep = "aa";
    string brep = "b";
    string crep = "c";
    int iter = 4;
    int m = 2;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string arep = "aa";
    string brep = "b";
    string crep = "c";
    int iter = 2;
    int m = 2;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string arep = "bbbccc";
    string brep = "b";
    string crep = "c";
    int iter = 1000;
    int m = 1000;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string arep = "b";
    string brep = "ab";
    string crep = "ccccc";
    int iter = 40;
    int m = 2100000000;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 165580141;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string arep = "bbbaabcacbacb";
    string brep = "abacabbbaabbaacbcaacbaccbccbbcbcbbc";
    string crep = "accbacaaacbabacc";
    int iter = 826865891;
    int m = 239376250;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 191366368;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string arep = "baacbbacabacabcccabacbccbaaaacaccbbccccacbcbbb";
    string brep = "bbaabccbbabbcbcbbcabbaababaabacbacaaccccabbabab";
    string crep = "cbacbcbbcbccaccacbabccbbbcaacbaccacccabbcc";
    int iter = 1022791726;
    int m = 1320463375;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 200884814;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string arep = "accbacabbcabbcb";
    string brep = "bccba";
    string crep = "aaaaccbcccbbaaabccccabbbcababcabccacab";
    int iter = 1380722684;
    int m = 1023653238;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 342126284;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string arep = "a";
    string brep = "cbccacbacbcaccbc";
    string crep = "bbaabacbcaccacabbaaacbcbacbbccbabbbbbabbbac";
    int iter = 1816160895;
    int m = 1664431527;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string arep = "bcbabaccabccbaccbccbaacbaacaaaabababbabaaacb";
    string brep = "caacacbcbcabacacbcbcbbcaccaaacaabcbcacabccaabbacab";
    string crep = "acbabcbabcbccb";
    int iter = 954768059;
    int m = 1509497780;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 536512196;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string arep = "aaaccbacaacccaccbaababaabaa";
    string brep = "abbcaabcbabbbbacaabbaabcba";
    string crep = "acc";
    int iter = 1636844003;
    int m = 815665426;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 468359928;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string arep = "ccccbacccbcccaabbacbca";
    string brep = "ab";
    string crep = "bccbcbbaaabb";
    int iter = 1618724829;
    int m = 1988502575;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 1622367127;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string arep = "cbacb";
    string brep = "aaababcabcbbcabcacacbaaaaacccbcbcbcbbbcbbbb";
    string crep = "babcabcbbcacabacaccabbacbcacc";
    int iter = 1594054863;
    int m = 1281832307;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 1279902248;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string arep = "bacccccababbcaaccccacccaccbacaccaaacababcbb";
    string brep = "aaacccabaacbababcaaabacbaaccbcaaabbbabcabbbbaab";
    string crep = "cbccbbcbaccbacbcacbcbaaacaacaaacacbbaca";
    int iter = 1938514050;
    int m = 741088457;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 468345425;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string arep = "bbcabcaccbccabbaac";
    string brep = "bcbaccabbbacac";
    string crep = "bccccbcacaaacbbbbbcbacbbbcbacabbaaa";
    int iter = 1536144095;
    int m = 502217385;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 291351435;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string arep = "baccaaabbbccacccaaabcbbbcbaacacbbac";
    string brep = "bbabcaacbcbccccabcbcabb";
    string crep = "cbcccaabccbbabbabcbacaacbbcbcbabcbbbcbababcbac";
    int iter = 772677291;
    int m = 501783496;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 139864848;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string arep = "aaacabcbcaccacabbabbbcaab";
    string brep = "cb";
    string crep = "aacbbac";
    int iter = 1914840539;
    int m = 418173961;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 21291675;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string arep = "abccbbbabbabbcbababbccaaaccbc";
    string brep = "babbbbbbacbbabccba";
    string crep = "cbabbccbbabcababbbccbabbbcccbaac";
    int iter = 796266902;
    int m = 2036410279;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 1973431835;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string arep = "bccbcbcbbccbbcacacbabbcccbcbcbcccbaabcacbabb";
    string brep = "ccacabbbabbacaaabbbabaaabccbacaaabbcabaca";
    string crep = "cccabcacbcbbbccbaaaccacbbacaaabcc";
    int iter = 1175705567;
    int m = 715271188;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 275047018;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string arep = "baccaabcaaabbcbaccbbacccaaccbaa";
    string brep = "bcbcccccbaacbbbaccccacacccaacbacbacbbcbcabbaccb";
    string crep = "cbbabcaaababbbbcaacbacbcabcaaaacbcacbba";
    int iter = 719229319;
    int m = 2104489795;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 205213816;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string arep = "cbaaacccbabaaaabcbababbbabcbabcb";
    string brep = "c";
    string crep = "aaababbaaabbcaabbac";
    int iter = 1372252797;
    int m = 98053647;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 96049534;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string arep = "bbcabaababcccaccbbb";
    string brep = "cbaabcaccacab";
    string crep = "aaacaaabaacaaacaacbccbaccbabccabbacbaaccaab";
    int iter = 506591718;
    int m = 902918693;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 383320859;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string arep = "ccabbbaaabbbacaacbbc";
    string brep = "aaaccabac";
    string crep = "cbcabcccaaabbccaccbababcaacaccccbcccbbabba";
    int iter = 862818600;
    int m = 744506415;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 59791538;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string arep = "cbcbbbbcbcccbacacbba";
    string brep = "aacabbcbaababbcbaabcbaacbbcbccabcabccacabcca";
    string crep = "abacababbbbcbbaacbbbccbcabcbaa";
    int iter = 399838958;
    int m = 920534278;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 298017450;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string arep = "bbccccabacabbbbbcabcacababacbccbcbcbccaabcba";
    string brep = "cbcbcaacbcbbbcacacbbabaa";
    string crep = "bcbacbaabaabaacabaaacabcc";
    int iter = 1980848377;
    int m = 1748419839;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 1452179564;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string arep = "bccbbccbbcbb";
    string brep = "ab";
    string crep = "acbacabaacacccbbbcccaabaccccbacbcccabbcaabbcca";
    int iter = 1672262369;
    int m = 1348991789;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 869547815;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string arep = "abbbcbcbacaaaabcbbaccbcccbbaaaacaccabbcabbac";
    string brep = "ccb";
    string crep = "bcbbacacbaacaca";
    int iter = 840645091;
    int m = 520886083;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 218262886;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string arep = "bbabaccabbbcccacc";
    string brep = "acaacaccacb";
    string crep = "cccccacbacaccabcbac";
    int iter = 828709055;
    int m = 1059655499;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 840397692;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string arep = "bbacbccacbcbcccbcccabcabcbacbcbbabccaabcbbbbb";
    string brep = "cbaccaacccbbaccbcacccbcabaaabacbacaccaaacababbcaa";
    string crep = "bbbbcbcc";
    int iter = 1630158744;
    int m = 1875541131;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 1404795644;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string arep = "aacaaacaaabababaaaabcbcacaccbacbac";
    string brep = "baaaaabcabaabbcbaccacbbbabababacbbaaaabccaaaaacc";
    string crep = "cbcbbcacbbacbabccbac";
    int iter = 977939534;
    int m = 2071873788;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 1010411052;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string arep = "acaabbcccabcbacbabcaccaacbbbabbacabacabaaaa";
    string brep = "cbaabcabaaccbacacababbaacbacc";
    string crep = "accbaaabbcaacabbcbbabbccc";
    int iter = 337056029;
    int m = 353529667;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 318091986;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string arep = "aabcacabbbbbaacababcacbbaccbccbabacbcbbaca";
    string brep = "bbaabbbbbaccabbcacccbbcababcacb";
    string crep = "bacbbaaccabccababbacbaacbbcbcacabaaccccaa";
    int iter = 1972858286;
    int m = 1384927261;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 1064975669;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string arep = "abaaccabcbcaacbbaabcaaaaabbabba";
    string brep = "aacbababaaacbbbbbcaaabbbccaba";
    string crep = "accaaacbaabcacbabbaabbabacbccbcaaacba";
    int iter = 1560773805;
    int m = 685962564;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 634017671;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string arep = "babcacb";
    string brep = "bacabbbcccaabaa";
    string crep = "acaaabcacbcaa";
    int iter = 1995932921;
    int m = 31433924;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 2135191;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string arep = "cbbaccacbcaccaacabcaacabbabccbcbcaabaaabc";
    string brep = "cbccbbcaccbcbbabccacaaabc";
    string crep = "ccacbbaaacbbaaabcbcac";
    int iter = 522623770;
    int m = 36029667;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 19224968;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string arep = "acbabcbcbbbacabbbabbcca";
    string brep = "aabcbbbbabacababaabbaac";
    string crep = "cca";
    int iter = 138166463;
    int m = 2147483647;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 215913811;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string arep = "aaaaabcabbbbccacacbaccaccb";
    string brep = "aabcabcccbbabaccccbcbbaacabaabbbbaacbbb";
    string crep = "abbcbc";
    int iter = 955909474;
    int m = 2147483647;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 445673145;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string arep = "abcaacbcbaaaacbbbcaccbccccbabab";
    string brep = "ccbcbcbbacaccbaaabaabbbabbabcacabbaac";
    string crep = "bcacabaccaacacc";
    int iter = 517235962;
    int m = 2147483647;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 1907061609;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string arep = "ccaabaaacacbbababbabbbcacaaabaabbcaacaaabaccbbca";
    string brep = "bbbabcbcbbabbabbbabaaacbccbccaccbbbaaabaabbbca";
    string crep = "babbcaaaaaabccaacbacca";
    int iter = 107576523;
    int m = 2147483647;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 225386672;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string arep = "abbaacbb";
    string brep = "cbbcaabcacabbaaaacbbcbccacbbcababccbbcabbacb";
    string crep = "bcaccbcbbcbbbbcabcacbbbcbbaccbbcbacabccacabaacbcb";
    int iter = 1405880388;
    int m = 2147483647;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 1951307027;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string arep = "cbcacbcbbcaabcabbcbaaccccba";
    string brep = "ccbccaaaacaacbcaabbbacbbbabaaaccabbbacbbac";
    string crep = "cacaaacbaaccbcbcccccabaaccabaccacb";
    int iter = 1073451030;
    int m = 2147483647;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 2090882855;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string arep = "cbaccabbbcacaccacccbccbacaccacb";
    string brep = "cccbbbabacbaaabcacccaccccbbbccbb";
    string crep = "cccababa";
    int iter = 112467467;
    int m = 2147483647;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 1682838249;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string arep = "baaaaaacacbcccbcbcacccbcacbbbbcbbbcca";
    string brep = "ba";
    string crep = "abccccbaacaccbabcbcabbaa";
    int iter = 1753435327;
    int m = 2147483647;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 408509933;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string arep = "aacc";
    string brep = "cbbcabcbbcacaccabccacacacabca";
    string crep = "bbbbccbcbccaaccababbab";
    int iter = 1272732338;
    int m = 2147483647;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 984737429;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string arep = "acbbbab";
    string brep = "bbccacbcbacbbcaaabbaacaaaab";
    string crep = "bccaaaa";
    int iter = 1180200706;
    int m = 2147483647;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 1037177613;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string arep = "acabbcabbabac";
    string brep = "cababcababcabcabacbacbabcacb";
    string crep = "acbacbabcababcabababbabcbcab";
    int iter = 2000000000;
    int m = 2000000000;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 1876480521;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string arep = "ab";
    string brep = "bc";
    string crep = "ac";
    int iter = 2000000000;
    int m = 5;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string arep = "abca";
    string brep = "bccc";
    string crep = "cbac";
    int iter = 2000000000;
    int m = 1988989;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 828546;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string arep = "abcabcabc";
    string brep = "abcabcabc";
    string crep = "abcabcabc";
    int iter = 91;
    int m = 2147483647;
    MultiReplacer* pObj = new MultiReplacer();
    clock_t start = clock();
    long result = pObj->length(arep, brep, crep, iter, m);
    clock_t end = clock();
    delete pObj;
    long expected = 1202204424;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=6519&pm=3046
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
#define FOREACH(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
typedef long long LL;
 
typedef vector<long long> VL;
typedef vector<VL> MAT;
 
long long MOD;
 
VL get(string s) {
  VL v(3,0);
  FOREACH(it,s) v[*it-'a']++;
  return v;
}
 
MAT mul(MAT a,MAT b) {
  MAT c(3,VL(3));
  REP(x,3) REP(y,3) {
    LL w = 0;
    REP(i,3) w += (a[i][y]*b[x][i])%MOD;
    w%=MOD;
    c[x][y]=w;
  }
  return c;
}
 
MAT pot(MAT m, int a) {
  if(a==0) {
    REP(i,3) REP(j,3) m[i][j]=i==j;
    return m;
  }
  MAT m2 = pot(mul(m,m),a/2);
  if(a&1) m2 = mul(m2,m);
  return m2;
}
 
struct MultiReplacer {
 
  // MAIN
  long long length(string arep, string brep, string crep, int iter, int m) {
    MOD = m;
    MAT aa(3);
    aa[0] = get(arep);
    aa[1] = get(brep);
    aa[2] = get(crep);
    aa = pot(aa,iter);
    LL res = 0;
    REP(i,3) res+=aa[0][i];
    return res%MOD;
  }
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/