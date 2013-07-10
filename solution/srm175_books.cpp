/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2240
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

class Books {
public:
    int sortMoves(vector<string> titles);
};

int Books::sortMoves(vector<string> titles) {
    int ret;
    return ret;
}


int test0() {
    vector<string> titles = {"Algorithms", "Purely Functional Data Structures", "Intro to C", "Automata and Computability"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
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
    vector<string> titles = {"the fellowship of the ring", "the return of the king", "The two towers"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> titles = {"Basic Engineering Circuit Analysis", "A Course in Combinatorics", "Artificial Intelligence", "Asimovs Guide to Shakespeare", "The Nature of Space and Time", "A Time for Trumpets", "Essentials of Artificial Intelligence", "Life by the Numbers", "Cognitive Psychology", "ColdFusion"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> titles = {"A", "B", "A", "A", "B"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> titles = {"BNBURPJQBE", "YUQSYFXKJV", "NMLBUBRXZX", "SSCNSNSNWS", "GWGFPSJBBC", "HNYWQSPBKL", "CKUPYOHTRC", "EVPVEMXOYZ", "FMPTJWXXMQ"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
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
    vector<string> titles = {"BKWYYNGLYL", "HTETBIEKZM", "USWXLDDPJY", "ZLDKXSATZY"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
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
    vector<string> titles = {"SQWYMIZZFH", "UFQPRDDSBI", "SJOUQEWGRO", "WLPEQHTGLD", "QBZFWXXKJQ", "LQROYGRAWY", "ONENMYHGGA", "PMMBUFQPIG", "XJNQGNUITI", "SXUMISPBAQ", "CMBKZUQZTA", "HFDOOXGENI", "BJUSUTVVCN"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> titles = {"BWQZQIGTAL", "RAKVMRGOPV"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
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
    vector<string> titles = {"BPPBYEHBFN", "RSROUBCWHF", "HIXZNHCSSA", "ANVFOTVEMD", "WTTCVWDDDX", "CUKAQBNTDT", "FRSRTSPLIR", "RBLHHAOLQG", "LLXYXNGSNL", "ZOZVYOVJKJ", "YFNRUZLYLZ", "ZAOFPYFLOG", "JDJEJKNMFT", "ZDJAIBTBIR", "RIJJGYJWBY"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> titles = {"GWAQTXABON", "OESCEENPAP", "MMYKIRPCVI", "LDMNLQFEBU", "QJRHIGWQYX", "CQBINXUVRG", "IHYZUODVZG", "MHWPUZPYGQ", "CXGYDCSCGO"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> titles = {"ZVFSOIOPEP", "LVQXNFBBCM", "OXOBQITDLI", "URVVKXTKKN", "IVANZBVQLK", "YEXSQIOXAS", "JSKPXXPFAD"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> titles = {"ASVSJWIVNX", "ZZSKFJXGTP", "NCQZTIRQJK", "UZXANECZVY", "VAEICNHQLV", "LBKPVVIFIW", "NPDBQCFFNE"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> titles = {"YKDZCFWCBH"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> titles = {"KCGTIJRAJL", "ODOQEJJACR", "BYDHTSFGSX", "IPGHQOARPJ", "QCJBZOHFVO", "QWPZJOHIIG", "GSTCBKCGLE", "UHCTRSGZBT", "OZLRKVGAZW", "EWEINOGMNB", "BQTTOWLUGP", "JKQLVQCLJU", "SNVQARUSPA", "MMMOPCROLR", "HGSIJFIXZA"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> titles = {"HRQUMUJJRY", "TJBNIUWZVG", "OBSSOIEHPY", "ERDZEZXIER", "TFOLBGEDPQ", "TQXJVXMKTI", "EKVUKAHELJ", "YDIXKDRRYH", "IYYTPDHBXZ", "SLAYLJXRAT", "FAQSIZSZMH", "CVEKQXEYKH", "JEYYQIENVJ", "PKCYYGHOFN", "ZUIAREKMCW", "KIJWCVLNWI", "NGIUPHTSXO", "QINGENHYAD"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> titles = {"JGWKCTZXAT", "JFLIDPRNDH", "UODEHIJXBU"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> titles = {"NSKBYIZLQP", "BTFZLZFGYW", "NLIWKAJOKO", "XVXMFGENWD", "AIGRGAHSXT", "ZYGNIGEBPJ", "SWEKWEWRAY", "ZGAORAXBXU", "BXAOVVPXNG"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> titles = {"PEUQRLJZBJ", "ZRHVGWIUXK", "CYLSUSINHH", "CXXXWVFQKL", "NLBPIXMWYB", "QVARLOVXQT", "DYHLGNFWMH", "SZPEVKYUIZ", "FYHRSSTUUH", "KVBYUYAKYX", "IVXBIWQQNR", "QSMPHPKXNK", "OPVGTIDWWV", "LAPLRVLVEZ", "YTYJSITACG", "GUCZZJVLKY", "LNWOLHJPVN", "ZAYAKAXWBM"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> titles = {"OUSKAZTPXQ", "DIKGZRHZXZ", "SYWICILKIW", "IKKRIPROBW", "QEDWZRFBUW", "JUCCWSLRPO", "WFAHUOSAEV"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> titles = {"XPIUDZLZFU", "IJYRCUVGBO", "QMETLSLQYB", "YVOLQMQUQY", "RXNHEABHHK", "ZLFCQHQHAG", "WDRLGMARKS"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> titles = {"XTHUBBFHJU", "DTIFKWZLEK", "TYZWHPGSTQ", "GVRPMVIKZX", "FEHBCDCGLN", "JDITHIOMZS", "ATLTOJUUDE", "NWTLFBZMHF", "HGWNNMKXRB"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> titles = {"QGKNMTGJBK", "HHOYUMFALG", "SOZLRPCVXP", "NEFVTVQGAX", "AKUOUZHOMB", "XRRYZHHWAO", "TBRFTYLSNM", "XAGXWEVHEL", "FANYLXMPLA", "CHGDJJPBFK", "ZYICCLGPBP", "VLQRJOPGNF", "VYPFLMHQVN", "BZCWDXMZLT", "FEUJFZOMDY", "APUIWVNKOF", "RUFAMJGAWL"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> titles = {"QGVQQAWDHA", "HQUUPUJIWG", "ZELKKLVDTY", "GFSKBRYLLP", "VVNTYJREKW", "WBCQGUNAIM", "GAAJOIXHNN", "VBMEDJXAWT", "LKTNFPJAJL", "ZXUNDXPFPS", "LEGZLWDXNF"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> titles = {"PGKMQKRTRR", "OLSHXHKIXC", "AJNROFCNBI", "WFLPGKAPGM", "VEUHUNIORF", "ZKESEJLGDK", "XEAPIPUMKF", "HTLFIAJIZK", "SQKWIIHYPQ", "EGNDNIPBRF", "SCBURQLZFS", "ACCLZWNBNA", "ZKTEPRLPTT", "KKCTDJJJXJ", "OBCUCTSZYM"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> titles = {"JKNISVGRCY", "FAQKPISUDD", "BYUJZBZCPM"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> titles = {"ONYEELBKFC"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> titles = {"KHOSFHDPNY", "YYFXLOWEFC", "LJPKHOLKDH", "LDLMPXWLXQ", "EEVAQNUXYQ", "DOHDABSNVE", "STDBWEEDBD", "EHCALWMAVD", "JLGRXDWRIU", "GZZYLOQXXY", "LFDUJVSSBT", "KXNBHHFANX", "WRDBWBHVGY", "PWXFSZRMDC"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> titles = {"RIICZNMNYJ", "RIIHQUZGEE", "GQLOYDQZLU", "XLJKZQRNHI", "XBYKUDZGGX", "AXRRRTCPWK", "AQJYOUZKPS", "MRPDUEWWIG", "OOCTQSWCJU", "PHUDKMGUGB", "FJISWTTGLV", "PMLNBIWWXT", "ABGVEAMTPO", "BPIHSZJSMQ"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> titles = {"TYEWQKITWG", "YVZYITGFMU", "JBEBHMJGAF", "BJQAXWTVDM", "XVCUGGQWGK", "WFKJFLLAKN", "YZANJRUCQJ", "XAMVAIVJXN", "MVPBOIDAIV"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
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
    vector<string> titles = {"PCABZEWBSP", "ZFXECXPBYO", "VUIZEWURYW", "JOSAJAREWY"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> titles = {"KMOUOYOZCJ", "GDBNLEECPK", "OGHVEHLYZM", "YEJBEOJXOP", "ENSVYGFWGH", "RYMKTEUSIH", "WXYMNAFQUT", "PDPTZAFTBI", "WCSAHNITWP", "XENRUVJWLD", "CEIDZBXBWL", "QIZSZYMVHJ", "EDPEFRSHZA", "KTQOLYDBEK", "OWVKPYKWIR"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> titles = {"SGZPIANEYW", "NYWVIQAKYU", "AEMEEDIZET", "TMWBANEDRP", "FOGQVSMUVI", "MSIJRDJHLJ", "UXHSZZYLVJ", "LOKAZHNJUC", "ZGCFAPLOCQ", "IXURLTJDSU", "GVYZEIBJJV", "GCXLDWBHXQ"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> titles = {"AVLKETSJHK", "PJOUMPFXSK", "IGEMJHFMDH", "EGTPCWGEUK", "MKZXFGMJVY", "HWRVVBVJOA", "OTMBZWDCJY", "ZFOMQZNZTX", "MPJROXPUDQ", "YRYHEEKXMM", "YTDEUYOUYU", "HYABFWYCEK", "JNOFWNBEES", "WGQXQTVVCC", "PWPTRYPOSA", "VIFDNQNLUZ"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> titles = {"This Book Has No Title", " This Book Does Have A Title"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> titles = {"What Is The", "What Is The ", "What Is The Title Of This Book"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> titles = {"z", "y", "x", "w", "v", "u", "t", "s", "r", "q", "p", "o", "n", "m", "l", "k", "j", "i", "h", "g"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> titles = {"the fellowship of the ring", "the return of the king", "The two towers"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> titles = {"Basic Engineering Circuit Analysis", "A Course in Combinatorics", "Artificial Intelligence", "Asimovs Guide to Shakespeare", "The Nature of Space and Time", "A Time for Trumpets", "Essentials of Artificial Intelligence", "Life by the Numbers", "Cognitive Psychology", "ColdFusion"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
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
    vector<string> titles = {"A", "B", "A", "A", "B"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> titles = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAT", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAS", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAR", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAQ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAP", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAO", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAN", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAM", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAL", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAK", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAJ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAI", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAH", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAG", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAF", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAE", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAD", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAC", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> titles = {"Basic Engineering Circuit Analysis", "A Course in Combinatorics", "Artificial Intelligence", "Asimovs Guide to Shakespeare", "The Nature of Space and Time", "A Time for Trumpets", "Essentials of Artificial Intelligence", "Life by the Numbers", "Cognitive Psychology", "ColdFusion", "ColdFusion", "A Course in Combinatorics", "A Course in Combinatorics"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> titles = {"z", "a", "b", "c", "d", "e"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> titles = {"C", "B", "A", "D"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> titles = {"z", "a", "b", "c", "d"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> titles = {"A", "B", "C", "D", "E", "A", "B", "C", "D", "E", "A", "B", "C", "D", "E", "A", "B", "C", "D", "E"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> titles = {"Z", "Y", "X", "W", "V", "U", "T", "Q", "N", "M", "L", "K", "J", "I", "H", "G", "F", "D", "C", "E"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> titles = {"Z", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "A"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> titles = {"Basic Engineering Circuit Analysis", "A Course in Combinatorics", "Artificial Intelligence", "Asimovs Guide to Shakespeare", "The Nature of Space and Time", "A Time for Trumpets", "Essentials of Artificial Intelligence", "Life by the Numbers", "Cognitive Psychology", "ColdFusion", "Crognitive Psychology", "asdf", "dfghf", "eartyrt", "re", "hr", "hrt", "h", "d", "rteryetyertyey"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> titles = {"D", "C", "B", "A"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> titles = {"T", "S", "R", "Q", "P", "O", "N", "M", "L", "K", "J", "I", "H", "G", "F", "E", "D", "C", "B", "A"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> titles = {"B", "C", "A", "D"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> titles = {"B", "C", "D", "A", "E"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> titles = {"A", "B", "C", "D", "E", "S", "R", "Q", "L", "M", "N", "O", "P", "K", "J", "I", "H", "G", "F"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> titles = {"D", "D", "C", "A", "A"};
    Books* pObj = new Books();
    clock_t start = clock();
    int result = pObj->sortMoves(titles);
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=287568&rd=4680&pm=2240
********************************************************************************
#include <vector> 
#include <sstream> 
#include <algorithm> 
#include <cctype> 
#include <cmath> 
#include <queue> 
#include <set> 
#include <map> 
using namespace std; 
typedef long long ll; 
typedef vector<int> vi; typedef vector<vi> vvi; 
typedef vector<string> vs; typedef vector<vs> vvs; 
typedef istringstream iss; typedef ostringstream oss; 
#define pq priority_queue 
#define let(a,b) typeof(b) a(b) 
#define all(a) a.begin(),a.end() 
#define forall(a,b) for (let(a,b.begin());a!=b.end();++a) 
#define forrall(a,b) for (let(a,b.rbegin());a!=b.rend();++a) 
#define contains(a,b) (find(all(a),b)!=a.end()) 
#define fi(n) for (int i=0;i<(n);++i) 
#define fj(n) for (int j=0;j<(n);++j) 
#define fk(n) for (int k=0;k<(n);++k) 
template<typename T> string str(const T &t){oss s;s<<t;return s.str();} 
template<typename T> ll Int(const T &t){stringstream s;s<<t;ll r;s>>r;return r;} 
template<typename T> double Double(const T &t){stringstream s;s<<t;double r;s>>r;return r;} 
string tolower(string s){fi(s.size()) s[i]=tolower(s[i]);return s;} 
string toupper(string s){fi(s.size()) s[i]=toupper(s[i]);return s;} 
 
class Books{ 
public: 
int sortMoves(vector <string> titles) 
{ 
int ans=0; 
int data[100]; 
memset(data,0,sizeof(data)); 
fi(titles.size()) 
{ 
    data[i]=1; 
    fj(i) 
        if (titles[j]<=titles[i]) data[i]>?=data[j]+1; 
    ans>?=data[i]; 
} 
return titles.size()-ans; 
} 
}; 
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/