/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7894
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

class ValueAddedTax {
public:
    double calculateFinalPrice(string product, int price, vector<string> food);
};

double ValueAddedTax::calculateFinalPrice(string product, int price, vector<string> food) {
    double ret;
    return ret;
}


int test0() {
    string product = "milk";
    int price = 1;
    vector<string> food = {"bread", "butter", "milk"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string product = "car";
    int price = 100;
    vector<string> food = {"bread", "butter", "milk"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 118.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string product = "abc";
    int price = 57;
    vector<string> food = {"a", "b", "c"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 67.25999999999999;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string product = "ba";
    int price = 654;
    vector<string> food = {"ba"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 719.4000000000001;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string product = "cafcab";
    int price = 30;
    vector<string> food = {"ed"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 35.4;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string product = "dbbddcdadab";
    int price = 367;
    vector<string> food = {"dbbddcdbdab"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 433.06;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string product = "eigejjfcdekbjbabgkgkediaeejjcf";
    int price = 164;
    vector<string> food = {"eakichhfdcfg", "eigejjfcdekbjbabgkgkediaeejjcf"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 180.4;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string product = "jldlgcd";
    int price = 704;
    vector<string> food = {"kmh", "hhjedbb"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 830.7199999999999;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string product = "f";
    int price = 710;
    vector<string> food = {"eedlklmmfbiecnjfhdma", "c"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 837.8;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string product = "bcaabcaa";
    int price = 530;
    vector<string> food = {"bcaabcaa", "bb", "accbb"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 583.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string product = "dbccbde";
    int price = 535;
    vector<string> food = {"ecca", "edeeadadeeeebe", "bceaadca"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 631.3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string product = "cbcbcaa";
    int price = 1;
    vector<string> food = {"bbb", "cbcbca", "cabaccbccbb"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 1.18;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string product = "dmgeemcgg";
    int price = 247;
    vector<string> food = {"cckdkfmjhjmmilbkhbh", "fbilflmedamm", "kglbaamafdkgggfdlggdcmf", "dmgeemcgg"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 271.70000000000005;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string product = "cbcaeeaabebbcbdabdbd";
    int price = 469;
    vector<string> food = {"cecc", "ea", "e", "baedeebcdeecacae"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 553.42;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string product = "bbh";
    int price = 59;
    vector<string> food = {"hhfhgd", "bb", "cegfbdfagah", "bc"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 69.61999999999999;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string product = "faefbch";
    int price = 376;
    vector<string> food = {"a", "ec", "faefbch", "b", "hfehab"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 413.6;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string product = "abbbacbcbbbaaaccabbcc";
    int price = 466;
    vector<string> food = {"cbaaaacbbcbccbcacbbccc", "cac", "aaab", "bcbccbbaaccab", "aaaaacbacccccbbbccabcbac"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 549.88;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string product = "caedcbcaecbedebc";
    int price = 347;
    vector<string> food = {"cdbbeaaadab", "d", "eadeeabecbc", "caedcbdaecbedebc", "ceeecbde"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 409.46;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string product = "bedeb";
    int price = 791;
    vector<string> food = {"dcedbgeda", "aaaedcfdcadbd", "bedeb", "degccfbd", "bgcbcg", "bea"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 870.1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string product = "fdeddcbfddaebacaacfef";
    int price = 3;
    vector<string> food = {"ddfabae", "babeebacfcae", "a", "f", "dbedabcdcffcfbbecfefcbccbdbfdf", "ccecebffedd"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 3.54;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string product = "efacefccccfe";
    int price = 596;
    vector<string> food = {"efcfbafc", "acfddecccdf", "efacefccccae", "accadbcfe", "bceeeab", "ffaadeeaaedce"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 703.28;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string product = "elaaf";
    int price = 226;
    vector<string> food = {"fidfh", "elaaf", "keenkfbnkfcnbdg", "gleafl", "jkijfhanbehfcj", "bnbgidecdkl", "iflkgnefnadck"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 248.60000000000002;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string product = "bbbaa";
    int price = 399;
    vector<string> food = {"a", "baaaaa", "baaba", "aaabab", "bbabba", "aaaaa", "bbaba"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 470.82;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string product = "fa";
    int price = 932;
    vector<string> food = {"bdbbdcd", "ceadecf", "fd", "eb", "c", "eeefbd", "f"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 1099.76;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string product = "bd";
    int price = 442;
    vector<string> food = {"caaabd", "bd", "ccbacc", "a", "bcc", "d", "c", "dac"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 486.20000000000005;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string product = "cnelikaenanmaiejinjljj";
    int price = 134;
    vector<string> food = {"gjbkmchefaffgdajlglbjmnog", "ma", "hdlahcn", "joa", "mm", "k", "iofef", "ngfnakfndkjeogjnodjfinaecob"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 158.12;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string product = "dbabdeeeaaaec";
    int price = 318;
    vector<string> food = {"cbdceb", "ccbccdceaddadcdbdd", "ea", "cecc", "adddabaddbacac", "deddeaaddcdabcddcec", "ac", "dbabdeedaaaec"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 375.23999999999995;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string product = "baaabbabbbb";
    int price = 188;
    vector<string> food = {"baaa", "baaabbabbbb", "ababaababb", "abaa", "bbbabaab", "ba", "aaaabbbaaba", "bbaaabaaaa", "bba"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 206.8;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string product = "egeaebdeafagcdecfcgcddgdeag";
    int price = 259;
    vector<string> food = {"efcabcafeccfdeededdfegbdfdbdbgegcedefgf", "eadgfegadbedbgaaaca", "deaeacfbafgffb", "gbbbaaeeggddgeacbcdgggeecfbbfcgbbgcdbgbba", "eefdffgffageeaacbaefbceffebgfdbaaecdfbfe", "cdeecefcdbfdgcaaeffbagbdfffgcc", "adbggbfadcccaddd", "bageafbaegaaceeebcaa", "gddeeddgeeee"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 305.62;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string product = "dgihhcrid";
    int price = 130;
    vector<string> food = {"dgihhcrih", "p", "ockcompo", "odclcdaqbpileikhdpjfrndppq", "mjmgipfckbnbjjrkpr", "fcfgnlnmcqndo", "ahrkkjgqcm", "eohinakoqnakejejkgrblkfqclkeq", "hqrf"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 153.4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string product = "ggg";
    int price = 740;
    vector<string> food = {"eejjjcdh", "fjafadhii", "ibdchd", "iaabhj", "eafd", "ceaaadf", "ggg", "ej", "fbibcffii", "cc"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 814.0000000000001;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string product = "babaaababbbaabbbaabaabba";
    int price = 962;
    vector<string> food = {"bbbaaa", "a", "ab", "abbabbaabababa", "abbbaaabaaabbaaabbbabbaa", "aaabaaa", "baaabaabbabbbbaa", "aaaaaaaaabbba", "bbbbabaaa", "abbbbbaaabbbaabaaaaab"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 1135.1599999999999;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string product = "eafbbafaba";
    int price = 189;
    vector<string> food = {"bea", "aca", "bfbeaeee", "ace", "efef", "ad", "eafbbafab", "bdfee", "aba", "cf"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 223.01999999999998;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string product = "bcbbbc";
    int price = 488;
    vector<string> food = {"acbbcab", "ccaac", "aba", "cbbcbca", "cbcc", "baab", "bcaca", "bcc", "ccbc", "bcbbbc", "bb", "bcbac", "caabc", "ababcba", "cacba"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 536.8000000000001;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string product = "aaa";
    int price = 270;
    vector<string> food = {"aaaa", "ba", "aaaabbbbaab", "aababaaba", "babbbabaaaaab", "aabbb", "bbbbabaaaa", "baaabbabbababaabbbb", "baaabaabaaaaaa", "aaabbbaaaaabba", "bbbbababbbabbbbaabbba", "bbbaab", "aab", "bbbbbaababbbaa", "aaaabbabaaabaabaaa"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 318.59999999999997;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string product = "abcaa";
    int price = 638;
    vector<string> food = {"bacb", "abcac", "aca", "babcab", "ccacc", "bc", "bacc", "ccba", "cab", "cba", "baaaba", "bca", "bbcbab", "cabbc", "bbc"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 752.8399999999999;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string product = "cfddba";
    int price = 775;
    vector<string> food = {"bed", "cbf", "adccfb", "ccdfba", "faecb", "abeb", "f", "adecd", "bfa", "abfc", "efbb", "eba", "cebace", "cfddba", "bce", "fefc", "cacb", "e", "febd", "caabbc"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 852.5000000000001;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string product = "qlkemmcnisabjojhm";
    int price = 776;
    vector<string> food = {"eonghkgqogp", "jbi", "mhgaksjporqslcndg", "sbfjmakargsrilirhc", "kehbsgkjkcof", "msbseeq", "nlblbgesndprb", "qbqqnshlcmqddbhobja", "rqehb", "cbfsdfdnbr", "lmbdlnepeb", "c", "cchiaemah", "ba", "qqaigeahllp", "flkjnsjf", "bn", "mc", "nknbnis", "emisdifnofdegiardid"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 915.68;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string product = "caadba";
    int price = 747;
    vector<string> food = {"bddbecccad", "beddbcc", "beabcbac", "acdcebcae", "aded", "baceaadd", "eccaeacdee", "ecedabbbdec", "de", "ba", "adcaebeacbe", "eeabcdcdc", "caaeba", "ddac", "aaedeebede", "edcacaaec", "beeeeeacbba", "ecddbaa", "edddcacdcc", "cdebbaedbdd"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 881.4599999999999;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string product = "jjgidgbiaabbaiieha";
    int price = 7;
    vector<string> food = {"aa", "jicgdkaibe", "caeeabcbi", "bidjjgk", "ddhhjikcbag", "jjgidgbiaabbaiieha", "eccegghhkibk", "gejejdajekd", "kkfdgaje", "bcbcgbidjji", "eegibbhbdfdheiiia", "jbcei", "kafkhdhhbdfbg", "kebihbj", "igiefiggidjhd", "dcjhibh", "kajaddgkj", "jkhedibiihkc", "dhffkaaedabiihehi", "djac", "ie", "kagcccfjdcakj", "bejk", "kdkegehaj", "eakbjk"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 7.700000000000001;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string product = "jeemkbieg";
    int price = 61;
    vector<string> food = {"ldbcmagdb", "ee", "djldhj", "ndghacdidnafbbdjd", "bdlejn", "jighacd", "nikahlemjdidcniiie", "hdlij", "eiflhdbfcl", "ffeageaacdjjhkkhlmbk", "albkndebfefkj", "gkkfaagkhlkgfaabihf", "mjfaiaeemeghffjl", "gdfdibchceiiiebmee", "eldfndfhafajdgfaanghhejhd", "nen", "cmigedfijfbiabkneibnnnk", "hemlbhg", "hjlmacecadbgjm", "bgbhggfmcighmjnlfjd", "ffkbad", "ddmgcbfgccab", "fccjablhnidaclamghjlmgeknc", "hmnedihcificfmbhjeambjgaa", "degjjldfhg"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 71.97999999999999;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string product = "bhhcahhiceeihacaci";
    int price = 510;
    vector<string> food = {"bdcfeedfiehihg", "hcbeiebi", "g", "dgbbffebihgebdhg", "eehfacbhaifbicdgfdaa", "iegibegeafchbfiica", "dfccd", "dfabddihb", "hfadhciac", "dfdfebifeidchechg", "ehhcahhiceeihacaci", "cedggfbaiaebbccdi", "bdggafecbhd", "dbegacbicfdb", "faba", "fdbdgccafffhigacagai", "dcbiefggcfffaaecbaf", "dabgheh", "diefda", "eiiifgcbbgeib", "dgdaigicbeghigabh", "cebhiieacbfcdc", "gicdibagd", "ffecafbeibgdc", "hb"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 601.8;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string product = "abab";
    int price = 214;
    vector<string> food = {"bbabb", "bbbb", "a", "abbab", "aaaab", "b", "aa", "baaa", "ab", "baaaa", "babba", "babbab", "bba", "abbb", "aaaaa", "aabaab", "aabab", "abaaab", "bbbbb", "bb", "abbbb", "bbbaa", "aaabab", "babb", "aaba", "abab", "aabaa", "baaaaa", "bbaaaa", "aba"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 235.4;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string product = "eebcbddc";
    int price = 322;
    vector<string> food = {"d", "eeaaebcaa", "dcabab", "ddeadeeae", "bccabebedd", "deadc", "cebbcdaeacdedddeecaecdcecce", "bbbaabdcddbcad", "edebdbecdcace", "cecbaceedabbdeeebbddbcb", "bdcbdd", "cbeaadbeedd", "bbabdabddddbbebcddeaadabdd", "bdceedb", "cbcaabbdcceee", "bcbebbabceeeaedbbcdeebaeaadd", "bdc", "de", "eddcdddeececeddd", "ebdddddbacdaaebcdccadbdd", "cabdeecadccaa", "beeeddcacaaeebceaabeabde", "ebccdccdedebaeee", "dcbeaaacdccaabec", "caccecceadadacecebcceba", "ecbbeeaadcdabcbecbeaaaeddd", "cedeabeeecdaaadbbc", "aceceeeab", "badbbcedbcedbaccb", "ddc"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 379.96;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string product = "mafd";
    int price = 765;
    vector<string> food = {"fmkkmja", "dhdehaecjidjajdgegmkieilchikcahd", "klad", "cfj", "djhlgdhbkdkmbhlhbhgif", "bgiccdjcbcldmadaah", "felkeagklmcbcmih", "fihmmbhi", "mcbkfbbaafffajkffakkjhfheij", "bbidijeahbiafdafflidiel", "ileghjajggmhcmmmfgdmcackgclbilaakef", "gkmiembckd", "bkfmjdfjbdmmmkklbmcdmgfcml", "g", "fdgeeecicdgmekabdcbeigibdjdleh", "gfjfmdcimeihaeg", "damambcmjf", "cehkhdgkgebehmgadjaamambfhlgggfbg", "kbg", "gceib", "maf", "lcggllakellbbffaijlelghgflfmfll", "icabbdagfehehm", "aglhfbkfabkjdjadijhdbljlbc", "ifmalfbbcbkhgmikieffmbdikjcaddleel", "bf", "dlgjdbgajkaihicgcjcimihdibcjacdkbe", "dcjiliellakeajkgdkaeikcjfalmh", "aajmkkkffmmgmmaamcibf", "dhlbemjb"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 902.6999999999999;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string product = "dc";
    int price = 727;
    vector<string> food = {"gbdc", "gegcdgbfgcc", "gf", "dc", "g", "gcdfaaagfee", "bce", "cfaceeggdf", "ggae", "dgfeedafbde", "baaaaeebbbag", "fb", "ea", "aadfeaedgdaad", "agbeabcf", "bcbfbd", "efbfdaeafdeeg", "cga", "acbadg", "cbedbeegcbfc", "aac", "ecdaddbgaf", "egcge", "d", "daddccaecea", "gfgeacef", "cbfafeb", "abgeeg", "afefa", "bdddae", "eabdbcdedg", "cfceegc", "ace", "egegd", "fgaabccadeabe"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 799.7;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string product = "ccaabbcc";
    int price = 679;
    vector<string> food = {"ccac", "aa", "b", "cca", "aaaacc", "baac", "baaac", "bbaaacaa", "accb", "acbaabbbb", "cbbb", "cccbba", "bbabbcc", "aabbcba", "aaa", "bbaacbbbb", "abcbbbb", "c", "baabcaa", "babccbb", "bcabbbab", "aacacbbb", "bc", "abc", "babcca", "acacac", "aabbccaca", "baccbbcc", "abbabca", "acbaacabb", "a", "ccbbcaaa", "cbbbbbbc", "acbabaa", "aaabbaca"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 801.2199999999999;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string product = "bicgc";
    int price = 655;
    vector<string> food = {"ihecbigifeicbgdded", "cdbebegifedhiccibc", "hbahfhfidchdce", "bcbegbgffcchib", "efbaeieg", "hh", "heebbeeabcfah", "ce", "dfgahdbbbafe", "fbabfgfchcgeahif", "didiibga", "baegiddc", "gi", "eeibgegiddica", "cfi", "abdedgbff", "gb", "hbifddabad", "agceaibbdhciada", "dca", "ebdahbdih", "becgc", "fdfihfabdchgded", "fgg", "biea", "ccgebedeb", "ihbbgb", "bcaebfiefdghhg", "gea", "a", "cbaafi", "ifhgcaachgaiiiiid", "hgfhbgbebecdi", "ddchhfdhi", "ighffbdiabgcibgie"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 772.9;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string product = "fdahfdadcihifdbbeehhie";
    int price = 787;
    vector<string> food = {"ifabfaifgcdiege", "gdbbgehfcadgcief", "cabifidfhigfhfbbcfhfbdihg", "fahdddbhabhbbg", "hfdhheacgighiadbgbbff", "fhabhdbcdffiegiechi", "gceihefbaiibiegi", "daieabideagc", "ffghiigadecccibhgd", "idcd", "behdecaedhaihggefiicgghfc", "fdahfdadcihifdbbeehhie", "chcid", "gchegiggfebggi", "eeecbcdhbdggfebchedhbdb", "ibegcdifhd", "gfb", "hg", "fagidhi", "ebcegddgefhgiicdfdbdicb", "hddfiigififeighebfafbba", "fgagieegc", "fdbfcdhhhccec", "cgeegbhbdgehehdaice", "cahfeifaedciebga", "ca", "agca", "bbhaafdgfh", "fcd", "aidbe", "adfiiaifhhfdhdcfcc", "edhdaeeabiebedbeefa", "cgaeahdbibcgbdbfdecea", "gdfhecebcfhcebcbdiagd", "hece", "dfbfffcehbchiheiec", "haeaabbde", "cbgfccgcdecfbgdgb", "ahgafbfgchbgaegggaageceih", "gfgieficaagcdefabddh"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 865.7;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string product = "abaaabaaaabbaa";
    int price = 89;
    vector<string> food = {"b", "ab", "bbaa", "aabbababbaabaa", "ababbbabbbaaaaaababb", "bbabaaababb", "aabbabba", "aababbbbbbbababaaa", "aababaabbabaaa", "aabbbba", "abbbbabbbbbb", "aabbaaaababbaabba", "abaaaabbbabbb", "bb", "baaaabaabababaabb", "bbaba", "aaaaabbab", "baabbaaab", "a", "abbaababb", "abababbbaabbaabbabba", "aabbabb", "baaababbbababaaba", "aaaaaab", "ababbaaaabaa", "bbbbabab", "bbabaab", "baaaabbaabaaba", "abaabbbbba", "ba", "bbbbbaabaabaaa", "bbaaababb", "aabbbbaa", "bbabbbbbbbabaa", "aabaabbbaabababa", "baabaabbbba", "babbbaaababaaaabaab", "abbabbab", "abababbbbabbabbaaba", "bbbabababaaabbabba"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 105.02;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string product = "fadaged";
    int price = 183;
    vector<string> food = {"ebad", "edbd", "g", "cdcfdadf", "ecefcg", "cce", "gcgfdd", "d", "gec", "eagg", "bgcgg", "ca", "ged", "gaade", "ddge", "dced", "becdfb", "dafbgga", "feef", "dfagdb", "dcbf", "gga", "baca", "b", "ga", "f", "dceacda", "fadage", "afgddac", "dgfde", "edced", "eae", "c", "eceagfdf", "fdebefg", "df", "eefbg", "aeeb", "bbageedc", "de"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 215.94;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string product = "fgcahe";
    int price = 901;
    vector<string> food = {"c", "feh", "dhff", "h", "bbdge", "deehff", "dfa", "cgdg", "eagee", "gdd", "ggee", "gddbcd", "ff", "dchhbd", "gcagh", "ggdahc", "bdadd", "caa", "bhe", "hbg", "adfcdf", "ea", "abcc", "bgeh", "fdffb", "agce", "chfgd", "edg", "aeehgg", "egh", "acf", "hdh", "hbgeeh", "fedg", "ecdd", "hde", "ffb", "fggch", "fgcahe", "bhfe", "cbe", "gdgdfd", "hhccce", "g", "gfbffe"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 991.1000000000001;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string product = "cdcbabdbc";
    int price = 282;
    vector<string> food = {"cbacbabdbdadcdabb", "badbaccabbbdd", "bbabadbccbbdaabb", "ccbaa", "dbbccbabacdcbb", "aaabccadaacaaddca", "bcdababcdaabc", "cabd", "bdbabbbb", "bacbd", "adbdacccacadcbb", "daabccaaab", "bbdaacbcbbbcccbadc", "dbddaabddda", "cdaabba", "dababdaad", "daddddacdbcb", "dbbcd", "dbdbabcddcdcdddd", "ddadbbba", "adddb", "dcadcb", "abdac", "abdcbcadbbdd", "dccbbcaadaddbacdd", "aaaaa", "dbcbccdaddbdcacaab", "babccbdccbcda", "cdccdbada", "cdbadacdbdacb", "cbabcdcadabdc", "abdcdcddad", "cc", "babbbabdcaacdc", "ddacbbbabbbbd", "dbccadbbccabcdbc", "cccddbcad", "c", "bc", "bdacacbdbcbc", "bccdccbabcbbdcaa", "babbbdccbd", "aacbd", "bcbcdaddbcad", "aacdddada"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 332.76;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string product = "abbaggafba";
    int price = 958;
    vector<string> food = {"bcafdcaaffdbfgceeeebcbcd", "fgbbeaaffgeabc", "bfdecfgfeedbbc", "cbefbc", "gegbebddegeeacgaa", "bfedcgfcffd", "abaad", "dccfgaeefgfaeabeadafb", "cdfbaggffcgcdgdfedddbgg", "bfgdafdgedb", "dcgdecgda", "bbbcfgdcbcacaacfgfc", "babagbfgdcabadbcad", "dbgaeffdadedfggeeaffe", "caaebgegbeafdbgacb", "cbfgaccgfaagfc", "gebfcfbeccdcefabceagfgg", "fdaccefbdge", "eaaagcaedabggd", "babdcgd", "bfafbefgfcabbdcecbda", "bgcgcaedfebcecebacaacag", "dgecedbcbggaafgggcbacfgbd", "dbcagfbcfccdceebacfadab", "bafeacadcgaaa", "cgfaadcgfgfeacgaf", "gcdedcccadgeacgbgecf", "cfecfaggbccgedadfgd", "dcfbcafgegbff", "agdgfgefbcddeeded", "befgedacaeeca", "bfcadfcgdcgfdfgdgccga", "beaaaabcbbbbe", "ffbbfbfagaaaeagaeddbagfbd", "dfaaabgaad", "fcefcggggdfeg", "ebeaddeeedfafdcefcba", "bgafdgacdacfeffcgdffcdf", "fdcddaeaebegddbgcdeaabf", "abbaggbfba", "cggbdagecddbgfbbbbgbd", "baddggacceegcfcdafac", "dgbcbfggcffebcbbd", "dbffefaadegcfbfdgdeagfgb", "acadg"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 1130.4399999999998;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string product = "fdce";
    int price = 819;
    vector<string> food = {"dbccdbfdabebcb", "ebeacacdd", "cdddafbdacffb", "fff", "cbaffcbcfce", "aafda", "cba", "eeefecdaeadd", "cccbdbfaccd", "deefe", "accadece", "edcbddadea", "cdfbbbacc", "ffbaeddeadc", "bfabccccbfcdee", "cdadecdcbcacbddcf", "fdce", "cbfeacdd", "dddbec", "acfaacbd", "efc", "adf", "ae", "dcbbacbfcafdade", "bbaadeccf", "eaeddddbedf", "aebef", "edcf", "aaffdfbfbf", "ce", "c", "baab", "deaaaacfe", "adbcccddfbaab", "fbecdbcec", "ffbddadbbe", "aaefbbffcbaedadcc", "feedebdcfdbdaeccd", "bfdeb", "dbcbefaddfafcee", "ebdbed", "defecbfcafd", "dfaefbcbfda", "feafc", "dbdeaacbfccfcffcd", "ddbafbfe", "eaabffdaf", "afee", "cdcaefbbeedbfbeed", "bccbeeedebcae"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 900.9000000000001;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string product = "bddcbddc";
    int price = 985;
    vector<string> food = {"dbb", "dbaacbbd", "cdaaaddaca", "daaac", "dbdaaacc", "bbdcbab", "bd", "daaccb", "cbcabbc", "bacbdd", "dcbdd", "daaab", "bb", "b", "bdbabaab", "a", "adcdbdbcad", "caccddcd", "bcccbcdaaa", "c", "cbaabdbbb", "cacbcdddb", "ab", "acaaabad", "cb", "aadd", "cbaadcb", "addbaccc", "acba", "cdbbbddddc", "bbdacacad", "cca", "dbbaba", "adbcaacdb", "bcdbaaccda", "abbadbbadd", "bbdaacad", "abc", "ddccc", "dbbdbccdc", "bacddbadb", "adb", "bddbbdaab", "dbd", "adcdcbdacb", "ababbbacbd", "bdbbccdcc", "aa", "dbacd", "ccdd"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 1162.3;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string product = "dkbabbg";
    int price = 370;
    vector<string> food = {"keg", "jjhcfgge", "hieahibgbkgcjggidac", "fdhefcgkiac", "chkkkfdikj", "gcdi", "djiidfcjhjjhkkedc", "ffckhhf", "jdfadejkid", "aebekcg", "kaibahgbfckbi", "ccdjc", "bjg", "dkbabgg", "g", "gjfidhk", "jdh", "jakagbibfhcdhhafjg", "fdjfibb", "cagi", "jfeae", "iiehciacaccfajgc", "ekaagf", "dcggfbdacggikak", "jiigjacjajkjbjidg", "bkdkcfbeedhhja", "ijcdcfdjkcjjbbh", "bagad", "kbkdjbeadcjkcb", "bacfdeckddgkjdkeebce", "gckhdgaih", "ihkhgbficcbgifebefge", "gbheacdkgbgdd", "hca", "hkkcdihehediabea", "hkg", "ffaeahjdgdaghicdah", "jekdbeaj", "daibjfegfabgeaijbfcf", "cibibgh", "gciagjbdkkdbgb", "adfahjcihbjca", "ffdebffgfacab", "ia", "bhjjekdeebfib", "ghffbbjcebjjbcga", "dkjdbckhcdkcjaciac", "kfijifdafgij", "efgjbgkjgffkkajc", "efbheeckjcg"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 436.59999999999997;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string product = "aaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int price = 654;
    vector<string> food = {"aaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaa", "a", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aa", "aaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaa", "aaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 719.4000000000001;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string product = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    int price = 825;
    vector<string> food = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "a", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaa", "aaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 973.5;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string product = "aaaaaaaaaaaaaa";
    int price = 856;
    vector<string> food = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaa", "aa", "aaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaa", "aaaaaaaaa", "aaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaa", "aaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaa", "aaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaa", "aaaaaa", "a", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 1010.0799999999999;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string product = "bzsdnjcuvjb";
    int price = 677;
    vector<string> food = {"o", "hwsizkbqbpefktbaqtdfncrzoajakrntnxyfoqvyijpwkjkq", "mfzunwooqbvyvvnmss", "f", "gnchere", "dxjokj", "wnquxwsxhvugtdbokrzobgdqgxijglygmxnsrsbchbpdkojf", "ajgyscbxcsnjregeqsq", "agrruslxakzniwszzoczqsqukthajxxlmzo", "isbskitdneqeihnwh", "rypbbtuogucowylaolcztwyeiwurcnxhobqyn", "plwfxsmdvfrmxhtuqmsyltptgpnysyoduovrydy", "goqsnikobiyrcvbkcinxatsofsxncwqngndpldijpfqolzl", "defdnenzszniogeoonyrjonoq", "gdbfrnbtvpyhywlwwkfutfivsjcrulqjdyixvfvavhqexuqok", "crmmbiemaqqbzfpirorxxbqveos", "bwbjrdzsrtjrzhjt", "fjghoupwllxgzwcitqxobwyiwaksjvdlkodzvvmo", "xt", "ywtdjgraficxsldtqitknayuhumiigjlvismjfcijf", "omkoagt", "cflnpsdpydwvdk", "oqwotpmhignxainlxeecw", "ldkdeurpptvxys", "ryikm", "llgjgizxcqbkdng", "bzsdnjcuvjb", "gbscpgtpsfpflgiqjgbotnwcxkhwffk", "vandgzszygpjihbwtviyqxoznhlz", "lhkxlooqftpzhl", "uwztfxztqrkejuydmkgsdsrsx", "vjtilajvxcwgahzhrbojxunhozcxstopwvkvhktryl", "mjnbacfrvvgyurcnkwfiijckvxlfzclayobfbemqucsnig", "nuulcxhyuirisz", "wvwtfiaeabuymbswmjxcnqj", "bptniukuelsgwgetjjkpvmcxdnxiiochtvqznernqxwyi", "zwxwabenxjxpjqbfrmikzjynstvt", "eqfswomwtmxqxqsdtzsjrmripzxw", "jtaauuogoynijkdvnrlrexexrojlsssszh", "nhyuegxxksrtxryupjwftcpzfbfgbpalrckmfwbqp", "zbwzpsv", "mvktljdoldv", "pxb", "pb", "uoyh", "wyvvsf", "wjijvwaiiru", "shnfcfspunlgueaqqkyfltqzn", "rrtaslrixmzzgyqnqknewkhbwvvffjloocthppzkc", "bqpniihdrlkymlnucqdwziipjftidbfzrgtklalbadkhi"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 744.7;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string product = "wmybswhtuqczivnyuymkjzr";
    int price = 540;
    vector<string> food = {"phqxellagh", "whhqpgoqrpoumanajpghznbogyfgjautffeuh", "uskceqzvqnsflkcczltesiitwsznafxtjdbngvfslbtdfei", "lfhyuc", "jazaavtqacsecaepjxgkrovzpangeurwnuyusnslpsdp", "iofqhcotsdntsbizvydrdfvjquccwcixquriwztn", "lwrmhkhfgjrfabaf", "u", "hz", "sufgerqzdpgrzwbhuynkohhobcsxaaefagoxzlehgpgn", "dlhitspnajgcgvlrvsgscatobzsjhbic", "eubtgxpxaalvmcypzcoup", "dmiooqouqiwmsokmlgmmvimgsypygbuim", "gprshbtohiarvqffnamdczuretrleigedacqj", "gvpdpljwndrdcteibwwlvxswicsdxsrukwsztytj", "nbuerlghutkcnbhrpykpxxnsuviipaz", "mvzcraefvqwmixkmdfcvismdy", "bsilrjtlqjxkkomnqrcpdbfdujzrqxjxzyf", "kd", "vhrnvahdkxiayhlsyedkxivuieqlkahbwbyte", "ijrxgbhaphoalblkznbwychlubczqzxnrdicrtxxjh", "xlmbbctxhdrversalrzoxyuuzlcsootcfcwyuzcqqrg", "okbfhkxv", "ytxqgahgfoikmgibarb", "lvapogpckbuihrdvejfwctsxdcvcdirflgyyeyujfii", "lbigkdtkqhhhsrqwqavldtm", "qllqahlabwepjcyhkrlatikildo", "gzfrnywxgmmpwbosysefegpwehdqxpkhwuid", "ydsicynfqyidtsivbwewzig", "fovpvixdakgylwxqctpccqhkph", "fmyj", "fydlskgphjoiisqcpkbpumzrkbxjbucszybolse", "ctuullyqwywjdanfpwwfwbxssvtvchwrmygtpi", "ylsxpwavvixxjisfjrjrjqukysbjaeeadnobk", "bldwuezxdlrgtfvrcgtnphwuyusmzaqrvaadxfnndfbknvnues", "qzidxllkabdjcrzzagrckvhczrvroqoueurqrdehwzchrsxu", "ckviooxoznnzxobyubiqbojurlzgqswuf", "sxdpimcwexcafhycniudfsqvr", "wkkdbdsriocgwstqcmgbiazh", "nftjupsiwlgqhkgeucgavpcqcdxmemhpvzquvkjiho", "qwlrouqfsagfxlqirnwfwmhbraucpbf", "ktkixyryoywhddaxthqbfxaoorfbewo", "eywyestulrxgfdaydi", "gtwnavpxqnxgbln", "xpjjdftkaysfcqpxwhlpxnzbylbcvym", "kbgmjmwpsmccpmwbwqfyfmrxjpi", "fikcbxrfdgxwvqrbyzzwwhdhfonrqihqisgqzyhv", "ppincehy", "jxdypvzhmwjrpnmmqynbxyttyvxlahi", "luiqhaqoqeqbyncrhtxthivqwdzbdlzcnvzsktud"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 637.1999999999999;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string product = "jluh";
    int price = 544;
    vector<string> food = {"lnxno", "lshzknbyyozh", "vwuhlmfwwvkhpjoebmhsgarndrmzfavliulrhmwtabrif", "levvkfumtiupjrvxrkqrhigeslbscxnn", "mfatac", "wzyiwasioglydqowbtttiobqhgvyuvxdvkrxrmvzyj", "hvqpwmsxbfffzksiigyqkgellmgddid", "jovfmssskdlzahpujxwngejkphmvdxmxwqvskvszf", "fvgumpkftqpiqagnildiegpigbcqdixrqmoaraqxil", "syfnizniuduykddiadebntpyajgstfyrehptselxsabazjqo", "qazrtvhtvzysgcmzksgfvwi", "uhqiwsihfqxbyelyjuzrgpufksfvq", "kfehblultpxdyrrgjlxkzmdekffba", "pnhcedacnlthgyvxwxnpyotrkxhmzneivcz", "gjkwkxju", "mjxzkuhldvlaefqvmbgrlgzlwmmomhlijdyskc", "axwyhwtsmmwsfqw", "eljyl", "atrldfqgnzmvcgdstxcstodnztzuixh", "clmibjeqtpnrptcrdsbsyjmrjwcuktkxfulvcwwgwknowzto", "ciqmlvzibcrgjdqbymsxjrysvutnqtcqienrrecszcqmvjfrq", "jlqh", "xxjyaiemyhk", "lmzijwcwzeuggfwvypu", "xppeeoefijsquegdflpbzrgtcvhbnylu", "cjqmuhucnepyzcfai", "sbiwjvphkenmvwoebmmgxgmhvaeqlgfrcfxzsfvkofykcwsqd", "jysgocwqnokbpcwwfdwwxnsbiatsvufnzhzveijeouj", "yulzq", "mrwdfytuqpkww", "ztarkhqlfhahpuxxejybtujinmursdqephfrlx", "owqfbywexzi", "maepofwhtimkfjiktnhlelx", "latzorttpzicjsfxzqnnynskvcbynmsjjofffydhwcfnaox", "tvgdsyrtgxgyckvpmmxf", "opgoqtmmiabjaojxunhqanjbzlprlemn", "xfbodpsuywkocqmgpleames", "roeo", "qkifumwkp", "gtetmzirkalhbgganrgtaqhdgw", "hwkqlpvvimbkrokjpzpofqfdwakmwigpcqjmvxlxftwz", "tbadlqyhixdlhezoqaalpknjlfgnwfiinkuydp", "vagvkhrcjrqcgwcr", "kntzadhfyqzasraoerklngjcbqhplziwbykvkyd", "exwjyflddwjpplvpcp", "m", "aqkdgajcsllrfvs", "njvxautjjbvqbdzkixiybhrrzddra", "utmbqrxptjxyrgpketj", "izvxsezqrwnsrdmbpgxcwe"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 641.92;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string product = "aaabb";
    int price = 987;
    vector<string> food = {"ba", "a", "aaaaa", "bbaaa", "bba", "b", "aabbb", "baa", "abbbb", "bbbaa", "abaa", "baaaa", "bbb", "aab", "ababb", "aba", "bbbbb", "bb", "aaab", "bab", "abba", "baab", "aaaa", "bbbb", "abb", "baaa", "abaaa", "aabaa", "ab", "abbb", "babba", "aaa", "aaaab", "bbab", "aa", "bbba", "aabab", "baba", "babaa", "bbabb", "abbaa", "aaaba", "babbb", "bbaa", "babab", "baaab", "aaabb", "bbbba", "aaba", "babb"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 1085.7;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string product = "aaaab";
    int price = 401;
    vector<string> food = {"a", "aba", "aa", "abab", "bbaa", "bb", "bbab", "aaaaa", "bbaaa", "aaa", "b", "babab", "ab", "ba", "babba", "bbaba", "abbba", "abbab", "aaabb", "bbbb", "bbaab", "abaa", "aabb", "baa", "abba", "bab", "bba", "baab", "babaa", "aaba", "aaaa", "abbb", "bbb", "aabba", "bbbaa", "aabaa", "ababa", "baabb", "aab", "abb", "baaa", "aabbb", "babbb", "aaab", "babb", "baaaa", "bbba", "abbbb", "baaba", "bbbba"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 473.17999999999995;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string product = "bbbba";
    int price = 487;
    vector<string> food = {"ba", "a", "ab", "abaa", "bbb", "baa", "baaba", "b", "abb", "bb", "aaabb", "abab", "abbb", "aaaab", "aa", "bbab", "aba", "bbaa", "abbab", "aaaa", "bbaab", "ababb", "bbbbb", "bba", "abaab", "baaab", "baab", "aaab", "babbb", "abba", "bbbb", "bbba", "baaa", "aaa", "aabbb", "baba", "bab", "aab", "babb", "babab", "bbaaa", "bbbab", "babaa", "aaba", "aabab", "baabb", "abaaa", "aabaa", "bbaba", "bbabb"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 574.66;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string product = "babb";
    int price = 504;
    vector<string> food = {"aa", "abb", "b", "baa", "abab", "aabbb", "aabab", "babb", "a", "bb", "ba", "baab", "bbb", "babba", "bbab", "baaba", "ab", "baba", "bbbb", "babaa", "abaa", "aabb", "abbaa", "aaab", "abba", "bbaab", "aaa", "baabb", "abaab", "babbb", "bba", "bbabb", "bbba", "bbaa", "aba", "aaabb", "aab", "aaba", "bab", "abbab", "bbbba", "aaaaa", "aaaba", "baaa", "bbaba", "bbbaa", "ababa", "aaaa", "abaaa", "babab"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 554.4000000000001;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string product = "aaabb";
    int price = 790;
    vector<string> food = {"bbbba", "aa", "bb", "bab", "b", "bba", "aaa", "bbbb", "ba", "abaab", "abbab", "a", "baaab", "ab", "aab", "abab", "bbb", "baab", "baabb", "aabbb", "babaa", "bbba", "baaba", "aba", "aaba", "baba", "baaaa", "abb", "ababa", "aaaa", "aabba", "bbaa", "baaa", "bbaab", "abbb", "bbaaa", "abba", "abbba", "baa", "aaab", "bbbab", "bbab", "bbabb", "bbaba", "aabb", "ababb", "babba", "babb", "aaaba", "abbbb"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 932.1999999999999;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string product = "babab";
    int price = 859;
    vector<string> food = {"aa", "bb", "babbb", "baaba", "baaa", "b", "bbba", "ab", "a", "baa", "ba", "aaaba", "bba", "aaab", "abb", "abaab", "aaba", "aaabb", "aaa", "bbbaa", "aab", "bbab", "aaaa", "abab", "aabb", "babb", "bbbb", "bbbbb", "babaa", "bbb", "bbbab", "bbabb", "bab", "aabab", "aabaa", "abaaa", "abbb", "aba", "bbaa", "baaaa", "abba", "bbaba", "babba", "aabbb", "baba", "aabba", "abbbb", "baabb", "abbba", "baaab"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 1013.6199999999999;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string product = "baaba";
    int price = 407;
    vector<string> food = {"bb", "aa", "ba", "ab", "a", "bba", "babba", "bbaa", "abab", "bab", "abbb", "aba", "bbba", "baa", "bbab", "aaaab", "ababa", "aabba", "b", "aab", "aabb", "bbb", "abaaa", "baba", "bbaab", "babb", "bbbab", "bbbaa", "aabbb", "abb", "abaab", "baab", "abaa", "aaaa", "aaa", "bbbba", "baaa", "bbbb", "baaab", "aaab", "abbaa", "abba", "aaba", "babbb", "bbbbb", "baabb", "aaabb", "bbabb", "abbba", "baaaa"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 480.26;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string product = "bbaba";
    int price = 762;
    vector<string> food = {"ba", "bba", "bb", "b", "abb", "a", "ab", "bab", "aa", "baa", "aaba", "abbb", "bbbba", "abab", "aba", "aab", "ababb", "bbbbb", "bbaa", "baba", "abbbb", "aaaa", "abbab", "bbb", "babb", "bbab", "abaaa", "abba", "aabba", "baaaa", "baaba", "aabaa", "bbaab", "ababa", "bbba", "abbaa", "abaa", "babaa", "baaa", "babba", "aabb", "aaa", "abbba", "bbbaa", "bbabb", "babbb", "baab", "babab", "aaaab", "aaab"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 899.16;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string product = "baaba";
    int price = 147;
    vector<string> food = {"babb", "bbaba", "aabba", "aab", "abbbb", "b", "bb", "bba", "aba", "abaa", "ab", "bbbb", "ba", "baa", "bbba", "bbaab", "bab", "babbb", "aa", "bbb", "bbbba", "baab", "aaa", "abaab", "aaab", "bbaa", "a", "abaaa", "aaba", "babba", "bbab", "abb", "aabb", "bbbaa", "aaaa", "abab", "abba", "aabbb", "bbbab", "baba", "baaaa", "aabab", "aaaab", "abbaa", "bbaaa", "abbb", "bbbbb", "aaaaa", "abbba", "aabaa"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 173.45999999999998;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string product = "hai";
    int price = 10;
    vector<string> food = {"hai", "no"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string product = "milk";
    int price = 1;
    vector<string> food = {"bread", "butter", "milk"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string product = "milk";
    int price = 1;
    vector<string> food = {"bread", "butter", "milk", "aaaaa"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string product = "milk";
    int price = 5;
    vector<string> food = {"bread", "butter", "milk"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string product = "aaa";
    int price = 10;
    vector<string> food = {"aaa", "bbb"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string product = "carne";
    int price = 100;
    vector<string> food = {"carnes"};
    ValueAddedTax* pObj = new ValueAddedTax();
    clock_t start = clock();
    double result = pObj->calculateFinalPrice(product, price, food);
    clock_t end = clock();
    delete pObj;
    double expected = 118.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22686024&rd=10712&pm=7894
********************************************************************************
#include<iostream> 
#include<string> 
#include<vector> 
#include<algorithm> 
#include<sstream> 
using namespace std; 
 
 
 
#define P__ system("pause"); 
 
// *** START *** // 
 
class ValueAddedTax 
        {  
        public:  
        double calculateFinalPrice(string product, int price, vector <string> food)  
            {  
              bool present = false; 
              int i; 
              for( i = 0 ; i<food.size();i++ ) 
                   if ( food.at(i) == product ) 
                      {present = true; 
                       break; 
                      } 
               
               
              if( present ) 
                  return 1.1 * price; 
              else return 1.18*price; 
             
             
            }  
         
  
        };  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/