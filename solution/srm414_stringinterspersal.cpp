/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8772
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

class StringInterspersal {
public:
    string minimum(vector<string> W);
};

string StringInterspersal::minimum(vector<string> W) {
    string ret;
    return ret;
}


int test0() {
    vector<string> W = {"DESIGN", "ALGORITHM", "MARATHON"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ADELGMAORARISIGNTHMTHON";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> W = {"BA", "B", "BA", "B", "BA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BABABABB";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> W = {"TOMEK", "PETR", "ACRUSH", "BURUNDUK", "KRIJGERTJE"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCKPERIJGERRTJETOMEKTRURUNDUKUSH";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> W = {"CCCA", "CCCB", "CCCD", "CCCE"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "CCCACCCBCCCCCCDE";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> W = {"BKSDSOPTDD", "DDODEVNKL", "XX", "PODEEE", "LQQWRT"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BDDKLODEPODEEEQQSDSOPTDDVNKLWRTXX";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> W = {"AGKFGJDDCC", "PORDDCCAAB", "TMEEDCCAZ", "TMEEDCCAZB", "TMEEDCCAZC"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AGKFGJDDCCPORDDCCAABTMEEDCCATMEEDCCATMEEDCCAZBZCZ";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> W = {"ZZZ", "ZZZABCDE", "ZZZCCC", "ZZZDDD", "Z"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZZABCDEZZZCCCZZZDDDZZZZ";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> W = {"TFGHDFZC", "AASADFZCAB", "XXYZAZCBB", "TRIFFZCDDD", "ZC"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AASADFTFGHDFTRIFFXXYZAZCABZCBBZCDDDZCZC";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> W = {"TOPCODER", "BETFAIR", "NSA", "BT", "LILLY"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BBELILLNSATFAIRTOPCODERTY";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> W = {"BBBBA", "BABBB", "AAAAA", "BBABA", "BBBAA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAABABBABABBBAABBBBABBB";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> W = {"BABCC", "BACAC", "BCBAC", "CCACC", "BACCC"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BABABABBCACBACCACCCCCCCCC";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> W = {"CBBDD", "ABADA", "AABDD", "BACBC", "ADAAC"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAABABABCBBCBCDAACDADDDD";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> W = {"DEDAC", "DDBCA", "CBAEE", "CECCC", "DDAAE"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "CBACDDAADDBCADECCCEDACEEE";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> W = {"BAADE", "EDEDC", "CCDAF", "FCAFA", "DBFFB"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BAACCDADBDEDEDCEFCAFAFFBF";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> W = {"AEDHSJKLDI", "IJPLVHHCRM", "NJONSXGVUE", "OHANXUFHCZ", "PRGQSOKRLL"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AEDHIJNJOHANONPLPRGQSJKLDISOKRLLSVHHCRMXGVUEXUFHCZ";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> W = {"QITHSQARQV", "BYLHVGMLRY", "LKMAQTJEAM", "AQYICVNIKK", "HKGZZFFEWC"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ABHKGLKMAQIQQTHSQARQTJEAMVYICVNIKKYLHVGMLRYZZFFEWC";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> W = {"PUUDMBEWIE", "JKTDJURFLZ", "THFDSMPBTQ", "RNMFJTKZBL", "KMLEQOPPHR"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "JKKMLEPQOPPHRNMFJRTDJTHFDSMPBTKTQURFLUUDMBEWIEZBLZ";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> W = {"GIBMNBWJVS", "IUNRHVLQSV", "BONIMMUHZG", "WCAZMGDOVH", "RKPUQXHMZU"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BGIBIMNBONIMMRKPUHUNRHUQVLQSVWCAWJVSXHMZGZMGDOVHZU";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> W = {"NUXUUTMMKI", "LNXJDUHABE", "NVSMOQPLXO", "UKUWQDQYHR", "QUQSCLHEKD"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "LNNNQUKUQSCLHEKDUUVSMOQPLWQDQXJDUHABEXOXUUTMMKIYHR";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> W = {"VEBPBUGGEJ", "EBZUDHORYY", "LNTICDDEKZ", "CRMIWGSUEJ", "PDQVUOMEYM"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "CEBLNPDQRMITICDDEKVEBPBUGGEJVUOMEWGSUEJYMZUDHORYYZ";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> W = {"XHCYBTUQUW", "EKBISADSSN", "LOOISPOFAK", "MIXBDHPJUQ", "BNMNDHMOTC"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BEKBILMINMNDHMOOIOSADSPOFAKSSNTCXBDHPJUQXHCYBTUQUW";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> W = {"FRIGFIAWBZ", "TJJCLOWRDA", "BOZAMIANWV", "RPHULZONWB", "RLGKDRJLLI"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BFORIGFIARLGKDRJLLIRPHTJJCLOULWBWRDAZAMIANWVZONWBZ";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> W = {"CLVAHZMKYO", "TSEZIJTXZK", "XQALIOHEBK", "EWJLBQSCWR", "MDBPBFAVGZ"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "CELMDBPBFATSEVAHVGWJLBQSCWRXQALIOHEBKZIJTXZKZMKYOZ";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> W = {"VQWTMRPLSJ", "STVJWLZWOZ", "EEXBIWJSJG", "EQIPXPPMDO", "DWFOGHDXUD"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "DEEEQIPSTVJVQWFOGHDWLWTMRPLSJXBIWJSJGXPPMDOXUDZWOZ";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> W = {"WRLTGKDVQU", "REEEBTCHZE", "WWHGUGNNPP", "QMTWSGHTVP", "RFEXXUBZCK"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "QMREEEBRFETCHTWRLTGKDVQUWSGHTVPWWHGUGNNPPXXUBZCKZE";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> W = {"FFOVOBBNVU", "QVYVKMLABV", "AJDJDVOBQR", "LSBUKUBRDJ", "SERFXCQHXD"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AFFJDJDLOQSBSERFUKUBRDJVOBBNVOBQRVUVXCQHXDYVKMLABV";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> W = {"LHMMCAKQYGSDTYU", "CVROGEHSXQFYVXRQPH", "EAQZYLWC", "WGLGDXLMCSOC", "EUOV", "JCJMPOFAQA", "OFZCFFHZLWBDSXPTN", "RR", "OKSGTBPSJ", "MARIZQTLSJSXQYFA", "XBBYY", "DLRWQIUTDGSMWGKPEU", "VDGSLCHGEWUSEZXBS", "JCRFYQBJCB", "TNBKMGULKNKO", "WYFNOCBPNYZPHPRW", "CRCL", "EWYAPLEFDRYGAYCAV", "DMRGNBGQ", "FQIPEZBJ"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "CCDDEAEEFJCJCJLHLMAMMCAKMMOFOKPOFAQAQIPEQQRCLRFRGNBGQRIRRRSGTBPSJTNBKMGULKNKOUOVDGSLCHGEVROGEHSVWGLGDWQIUTDGSMWGKPEUWUSEWWXBBXLMCSOCXQFYAPLEFDRYFNOCBPNYGAYCAVYGSDTYQBJCBYUYVXRQPHYYYZBJZCFFHZLWBDSXPTNZPHPRWZQTLSJSXQYFAZXBSZYLWC";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> W = {"HP", "MOSKCAIV", "ZEHHAIBUO", "PG", "TMFHMMHKBXHRVCSY", "Q", "IVTBKVC", "BJEWRGNRMRHBGZQSQHRU", "S", "ASFRRNHCCAHT", "RGEENLFYNCVLKVHMMHSC", "NBEEPSDDZGOUSPSZ", "WCIQMW", "M", "VENQKDLVGTJZGMM", "ZHNZXU", "THGARXUCLNXNFYZYJHD", "NCGQENRLLRYLLI", "ZDWCRPVSQWWPSVQQXEHK", "ZUVBGWFNUMZTGA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ABHIJEMMNBEENCGOPGPPQENQRGEENLFRLLRSDDSFRRNHCCAHSKCAISTHGARTMFHMMHKBTVENQKDLVGTJVTBKVCVWCIQMWRGNRMRHBGWXHRVCSXUCLNXNFYLLIYNCVLKVHMMHSCYYZDWCRPVSQWWPSVQQXEHKZEHHAIBUOZGMMZGOUSPSZHNZQSQHRUZUVBGWFNUMZTGAZXUZYJHDZ";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> W = {"AIEPLWVXQR", "QKQBKFIYDXUJC", "CXZJAFBXDIKLHDQMMNOB", "HQUBN", "KBQZROEBFPHALFRPPMUR", "JOK", "WT", "DKZVOFD", "MNHDWACEFII", "WWSQOFFCNM", "JRRLIUCYWUEU", "KCCGUVMY", "UVNTMWT", "PBGFOOFF", "DHBORCEFR", "FTPI", "QZL", "UL", "DYTQXV", "OLNSUONIOJOPNDKEYDW"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ACDDDFHBHIEJJKBKCCGKMNHDOKOLNOPBGFOOFFPLQKQBKFIQQQRCEFRRLIRSTPIUBNUCULUONIOJOPNDKEUUVMVNTMWACEFIIWTWTWVWWSQOFFCNMXQRXYDWYDXUJCYTQXVYWUEUYZJAFBXDIKLHDQMMNOBZLZROEBFPHALFRPPMURZVOFD";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> W = {"IWQGWWZKKIQ", "ZHD", "DWLTTKWW", "JYN", "CX", "EUZVPQWRALEQKLOJEJH", "PQZMMRS", "RYMUZWQLIEUYW", "WKYO", "AWRK", "SXAUWYNNMWBQYUPMEVM", "XLHMTMTEX", "TFLYVQMLSWMZLTIE", "VHKFVSVNALELBUPSCNTH", "IBUZLOT", "VSJHXSKXVOM", "ZZJNLOPIXWVKMXDWTXL", "XLJORBPOIMJR", "QNIUT", "HNQRSQIFSUZSKKVUADW"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ACDEHIBIJNPQNIQQRRSQIFSSTFLUTUUUVHKFVSJHVSVNALELBUPSCNTHWKWLTTKWQGWRKWWWWXAUWXLHMTMTEXLJORBPOIMJRXSKXVOMXXYMUYNNMWBQYNYOYUPMEVMYVQMLSWMZHDZKKIQZLOTZLTIEZMMRSZSKKVUADWZVPQWRALEQKLOJEJHZWQLIEUYWZZJNLOPIXWVKMXDWTXL";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> W = {"YWPBBAWOQ", "H", "XV", "KQRDN", "UMRIHBUJIPUFDUATJZDV", "LEDWRFKADWJZQWRA", "VPKXGMPW", "IGAZZZKIKKWGJWIICT", "MGZCMJXGXBDMJYHRB", "BFUSHX", "PVFEKVZARVVVVU", "HBTFEDQPTDYWNMKGNCPM", "HMRARFHSRNXSDVVPSBWT", "FCJ", "XAGWYFNVAPAAP", "ZGEICFWORINDEN", "SBGTDWNBVTBNRHMDGXO", "QHZMDOXBJJRJF", "CSKTZHVKMCMSBEDP", "OWJPIEJI"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BCFCFHBHHIGAJKLEDMGMOPQHQRARDNRFHSBGSKSRNTDTFEDQPTDTUMRIHBUJIPUFDUATJUSHVFEKVPKVWJPIEJIWNBVTBNRHMDGWRFKADWJXAGWXGMPWXOXSDVVPSBWTXVXYFNVAPAAPYWNMKGNCPMYWPBBAWOQZARVVVVUZCMJXGXBDMJYHRBZDVZGEICFWORINDENZHVKMCMSBEDPZMDOXBJJRJFZQWRAZZZKIKKWGJWIICT";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> W = {"YSJOWMAY", "UMSBIWL", "WVSWZBVCORY", "WJR", "ZDXGVUYX", "WMUDAUIABHAIRPTMAC", "YYZKRULKWYMDH", "FIAOJDKRLADZ", "ADMDH", "JSYERQJMMFBRA", "SGG", "NQQDXI", "OUMDVSYWWNOQ", "YLZVFWZWAKANA", "VEWWIZAG", "QLPJFQJQPHSHCCCI", "BLENFG", "KAZWSZKSTVU", "WKIBSPIYFRLBTAFZLCN", "LAARGMQSHWTHWC"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ABDFIAJKALAALEMDHNFGNOJDKOQLPJFQJQPHQQDRGMQRLADSGGSHCCCISHSUMDUMSBIVEVSWJRWKIBSPIWLWMUDAUIABHAIRPTMACWTHWCWVSWWIWXIYERQJMMFBRAYFRLBTAFYLYSJOWMAYWWNOQYYYZAGZBVCORYZDXGVUYXZKRULKWYMDHZLCNZVFWZWAKANAZWSZKSTVUZ";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> W = {"NPVHSOPGOYCUZDYFARU", "DMWYTQJQJXHLZCG", "TDPYTGYBZAEZHNZ", "GDTLLIMLQDTXZYHG", "LSMIOYBYLFVTPZOJREUS", "KOLBBOCWRRGUVYMPLI", "AGTKFACRIWJNTSTHTTX", "MFAVMLL", "TNRXZUEXCLRYCARIHK", "BXGUSIDCUGEAJYCZBUU", "GUPBXQLJQYLJ", "LELCNYPDC", "TUJHAEUFXKEANE", "CGIA", "AYEADWFRJKVUKUED", "LJNZXZAWNZ", "SKHBKYP", "RYQZDPRD", "VLOHYBZ", "IKAJUS"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AABCDGDGGGIAIKAJKLELCLJLMFAMNNNOLBBOCPRSKHBKSMIOTDPTKFACRITLLIMLQDTNRTTUJHAEUFUPBUSVHSOPGOVLOHVMLLWJNTSTHTTWRRGUVWXGUSIDCUGEAJXKEANEXQLJQXXXYBYBYCUYCYEADWFRJKVUKUEDYLFVTPYLJYMPLIYPDCYPYQYTGYBYTQJQJXHLZAEZBUUZCGZDPRDZDYFARUZHNZOJREUSZUEXCLRYCARIHKZXZAWNZYHGZZZ";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> W = {"PAHPUVKJ", "MTPCUYTA", "TGOMTONLXUDJVOQF", "MNHHPBTKQZPJNF", "UAKLUHOLCBMKGFSGGZD", "KZ", "IBHJKERLVIIMQIF", "CNTOVFUOXULL", "YUCXJLGJ", "BQWMJPHX", "FFWECLWMIJBXHJJOPR", "JQXXEGYFRMMDISKFO", "COOPYBNENH", "P", "OTYARYCYH", "G", "KHO", "CXNEAKLMFKHOJVJO", "G", "KMORSMNP"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BCCCFFGGIBHJJKEKHKKMMMNHHNOOOOOPAHPBPPPQQRLRSMNPTGOMTKQTONLTOTPCTUAKLUHOLCBMKGFSGGUUVFUOVIIMQIFVKJWECLWMIJBWMJPHXHJJOPRXNEAKLMFKHOJVJOXUDJVOQFXULLXXEGXYARYBNENHYCYFRMMDISKFOYHYTAYUCXJLGJZDZPJNFZ";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> W = {"EQFQRI", "DEYVVBKMMKCQRJJVJD", "GUIVBQDATHOYSR", "TENDWAWYUYPDF", "NXWY", "MYTRDVCGAYCM", "PCAOKRTZDKD", "ZYUDARIKA", "ZUPJVKOYWNRUTSRMNWG", "FYYKKE", "JJWAAAMJDFFJDEWVU", "WEGGVDRYY", "BGPZEBNWQOGCFWTK", "NU", "BIHIPGKBFZKUYKIHKU", "FBABALQISLHSTU", "EAUDZEHWEKXKLNYWN", "FRFMMXRKNXVNPWFMUOX", "IHPUOGAALXPIFJCC", "DKIKH"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BBDDEAEEFBABAFFGGIHIHIJJKIKHLMNNPCAOKPGKBFPPQFQIQRFMMRIRSLHSTENDTTUDUIUOGAALUUVBQDATHOWAAAMJDFFJDEWAWEGGVDRWVUWXPIFJCCXRKNXVNPWFMUOXWXYSRYTRDVCGAYCMYUYPDFYVVBKMMKCQRJJVJDYYKKEYYYZDKDZEBNWQOGCFWTKZEHWEKXKLNYWNZKUYKIHKUZUPJVKOYWNRUTSRMNWGZYUDARIKA";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> W = {"ILSSZLINDJSTBNU", "XTNVASXNTYITH", "LSJP", "TGDLZAUT", "EDQGXPGIJU", "UVFMLXIHQWHYSY", "QD", "KUYSYEIPEQOA", "MXFXZPNECIUGLF", "VVJEXTJKBQAMEWU", "MIIU", "KFVHIMLBZMRBAQCM", "SFRKYXGACD", "QWXBH", "OGOJZSYY", "Z", "YXMGYBPH", "VSFEJYZOFE", "JFQX", "JNMKAMWBSLGYHRXPSPOP"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "EDIJFJKFKLLMIIMNMKAMOGOJQDQGQQSFRKSJPSSTGDLUUUVFMLVHIMLBVSFEJVVJEWBSLGWXBHXFXIHQWHXPGIJUXTJKBQAMEWUXTNVASXNTXXYHRXPSPOPYITHYSYEIPEQOAYSYXGACDYXMGYBPHYYZAUTZLINDJSTBNUZMRBAQCMZOFEZPNECIUGLFZSYYZ";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> W = {"FRKMLLNPJDCGX", "WGIHUQMROFTR", "NWJRVFPIBERIZCZVKVJ", "UEFUACLWBLW", "XX", "MDSJMPKDLJKGW", "AKRJL", "DJBWVMVVDXLWTRXMX", "CWKAHVUCDAJE", "BPLYW", "NX", "WQVKEL", "CA", "OXJBADXKYDQSR", "JNWA", "QFMOYLIJMKRB", "FAJFQKFHDSVGUM", "DBKNGHHBGJLLWBZGJREU", "TP", "BDNMTHUDAIPDNTIZGA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCACDBDDFAFJBJFJKKMDNGHHBGJLLNMNNNOPLQFMOQKFHDRJLRKMLLNPJDCGSJMPKDLJKGSTHTPUDAIPDNTIUEFUACLVGUMWAWBLWBWGIHUQMROFTRWJRVFPIBERIWKAHVUCDAJEWQVKELWVMVVDWWXJBADXKXLWTRXMXXXXXYDQSRYLIJMKRBYWZCZGAZGJREUZVKVJ";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> W = {"GERCTZTRWSUO", "EJLTOUVJEPSK", "WYYNDCBYSSXIS", "UNQFTY", "HBVFVCKLLEZXTGVFWITL", "CEAKADLQAGWVUX", "LD", "BGRLVIHL", "TDGYUEWSCGXVJWMRDL", "LL", "X", "UFXWWFQLLBVQLI", "PJ", "ZP", "FJM", "SMETXHYAXUSVGVFAU", "EM", "WZSVCSJCTCOF", "QLEHJIGR", "IAZKV"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BCEAEEFGEGHBIAJJKADLDLLLLMMPJQAGQLEHJIGRCRLRSMETDGTOTTUFUNQFTUVFVCKLLEVIHLVJEPSKWVUWWXHXWWFQLLBVQLIXXYAXUSVGVFAUYUEWSCGXVJWMRDLYYNDCBYSSXISYZKVZPZSVCSJCTCOFZTRWSUOZXTGVFWITL";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> W = {"GIRPQKNFNJKJBQYVZPJU", "YPYCD", "LIDCSL", "QAKYXTDUIVGGUC", "INXOXBZQHNGX", "CBCUTORJHJXHRYVCHAA", "BDI", "GVPRQU", "GMLKHGP", "VZKEMUQHTJIDYXDDJ", "BCUNSOQ", "AELLFUMRIBFOOOAWOAF", "KU", "VIFUPGPYIAJBU", "HCPQAONOLUY", "G", "QCINLDBABOKT", "SWNQGMXTSE", "XBANKXECAPROQN", "XEZW"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCBCCDEGGGGHCIIIKLIDCLLFMLKHGNPPQAKQAONOLQCINLDBABOKRPQKNFNJKJBQSLSTUMRIBFOOOAUNSOQUTORJHJUUVIFUPGPVPRQUVWNQGMWOAFXBANKXECAPROQNXEXHRXOXBXTSEYIAJBUYPYCDYVCHAAYVYXTDUIVGGUCYZKEMUQHTJIDYXDDJZPJUZQHNGXZW";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> W = {"O", "DCZDYJIWLUN", "QOIMDFMOGPCFZBEZJF", "CBUTVSINHUPLKDAL", "GTRFLJGWOBYKEBHN", "GGBDAEXPHUTEXMKGCQ", "DVY", "IEFDTXIEKNIC", "YC", "E", "YAKSBKCTOXWBYRCYXQFB", "HEFXY", "RBVHEQZIBNFQTNJFMA", "QJZOEBZILLDHRCLMV", "M", "ZXVTNGQD", "LOULAHRTYVRPLN", "G", "IFQNMDZNWAJQ", "JSSGCUGLTRPOIWU"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "CBDCDEGGBDAEGGHEFIEFDIFJLMOOQJQNMDQOIMDFMOGPCFRBSSGCTRFLJGTUGLTRPOIULAHRTUTVHEQVSINHUPLKDALVWOBWUXIEKNICXPHUTEXMKGCQXYAKSBKCTOXWBYCYKEBHNYRCYVRPLNYXQFBYYZBEZDYJIWLUNZIBNFQTNJFMAZJFZNWAJQZOEBZILLDHRCLMVZXVTNGQD";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> W = {"HOYBDYYWOLNLDSEPXP", "KOOQOJNJIUNJJ", "EOOSDCGOUFWAVFMDSMT", "EXCPUUSIO", "PXHWUVMAD", "XGWPBSVSUEBD", "P", "KWQ", "AQKXVGUBW", "CBNHQPOESUGFOKPL", "EMYNHWV", "FJSRONODTAPHDNM", "BXMDMVRF", "ZXBKVRGVNDCTBH", "MQMZEZI", "JC", "QHRPV", "AAAJNPGZNEBO", "VTURZJCHCFYWU", "DNVYOBXKQIGCINMXSEW"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAABCBDEEEFHJCJJKKMMNHNNOOOOOPGPPQHQKQMQOJNJIQPOERPSDCGOSRONODSTAPHDNMUFUGFOKPLUNJJVTURVVWAVFMDSMTWQXCPUUSIOXGWPBSVSUEBDXHWUVMADXMDMVRFXVGUBWYBDYNHWVYOBXKQIGCINMXSEWYYWOLNLDSEPXPZEZIZJCHCFYWUZNEBOZXBKVRGVNDCTBH";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> W = {"PFNMFGVYDXJOQAIT", "SKF", "JWZOGEXYGBUBO", "QVAKGFJVOSEDN", "FDVCXDPYLOTKFMOI", "VHOHQIKTTEX", "AAMB", "SEJUWPSIWBR", "SXJ", "NZSMTWVJPC", "CZPJCMXTZXHXE", "PCMCMRXQWVFBLXCSJL", "EL", "VZDP", "PKEM", "QYDMNNU", "MEGHHHWRNOISETA", "IXNAROVZUNUUQUJLY", "HYFCWLBMTAXQLKQRAMZ", "RHZEKVXA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AACEFDHIJLMBMEGHHHNPCMCMPFNMFGPKEMQQRHRSEJSKFSUVAKGFJVCVHOHQIKTTEVOSEDNVVWPSIWBRWRNOISETAWXDPXJXNAROVXQWVFBLXCSJLXYDMNNUYDXJOQAITYFCWLBMTAXQLKQRAMYLOTKFMOIZDPZEKVXAZOGEXYGBUBOZPJCMXTZSMTWVJPCZUNUUQUJLYZXHXEZ";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> W = {"PJJDAUVNNPKTEQSENL", "JMEHZJBISOWP", "UKU", "UYW", "NX", "VJVPQUNTNYRBZIWPE", "FQTUXTHPWV", "AYGI", "BSSGW", "ZYEKNWOHXBCJWZDWMZ", "I", "PAUNZAPYLFRNOD", "NVPBCHDSRZBIFSC", "EEAGYSXMGMKQQXMNN", "CNIDCLBVRRUT", "R", "TGAMDSKJN", "HZAHTATJNGCORRUOOKL", "ZUPFIVYYUZL", "TLJCQPX"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCEEAFGHIJMEHNIDCLBNNPAPJJDAQRSSGTGAMDSKJNTLJCQPTUKUNUUUUVJVNNPKTEQSENLVPBCHDSRVPQUNTNVRRUTWXTHPWVXXYGIYRBYSXMGMKQQXMNNYWZAHTATJNGCORRUOOKLZAPYLFRNODZBIFSCZIWPEZJBISOWPZUPFIVYYUZLZYEKNWOHXBCJWZDWMZ";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> W = {"UFEDJDHGLNDIZ", "RLQTVL", "FBSMLAFWVHJC", "YLV", "WH", "INHWIAASPWJKEFQZA", "NN", "CKZHJIFEBVG", "APEUFDOYZEIDE", "AHFW", "DSMSJBQRALJDLZZFXYUB", "SGUZTSXMASAJUUKK", "GWGNXZNCGQSXSC", "BKLBWTWKQXUXBGOCYVLK", "O", "HWYBPLPVWKDGABZUJAN", "KLZZIUHJO", "T", "QPPINHMYENRTKHKCSF", "PADNMHVXRXBKHAMZVOT"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AABCDFBGHFHIKKKLBLNHNNOPADNMHPEQPPINHMRLQSGSMLAFSMSJBQRALJDLTTUFDOUFEDJDHGLNDIUVLVWGNWHWIAASPWJKEFQWTWKQWVHJCWWXRXBKHAMXUXBGOCXYBPLPVWKDGABYENRTKHKCSFYLVYVLKYZAZEIDEZHJIFEBVGZNCGQSXSCZTSXMASAJUUKKZUJANZVOTZZFXYUBZZIUHJOZ";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> W = {"SENDSEDAFN", "ONMAOUHWLOKB", "YBNW", "BQMLQVNNRE", "ANAC", "KZOSWEVRRQAOSZB", "HHLXJGJTIRPM", "JJLZ", "NPXOT", "IEFVZVMZICIGAWPT", "GSRVSVOHJDV", "HTVWXWMPZXRVOYJUNHH", "FIDGHPJNRKWUVVX", "THMJEGRAAK", "KAADTFYCUYHC", "BHQHWUVIUNTCZVYAQ", "GGOCZMXIN", "SJEVDQCZXUGIPKB", "DEMVURALNSSEXPQU", "BQN"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBBDEFGGGHHHHIDGHIEFJJKAADKLLMNACNOCONMAOPJNPQHQMLQNQRKSENDSEDAFNSJESRTFTHMJEGRAAKTUHVDQCVNNREVSVOHJDVURALNSSEVVVWLOKBWUVIUNTCWUVVWXJGJTIRPMXOTXPQUXWMPXYBNWYCUYHCZMXINZOSWEVRRQAOSZBZVMZICIGAWPTZVYAQZXRVOYJUNHHZXUGIPKBZ";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> W = {"SJYXQMQFAOMOP", "YJXHUYNQHY", "FLQJMEFKZAC", "PXZB", "IS", "M", "VWK", "EFDMZTXASWQLMVOMVTS", "FX", "JWVCCGOOV", "CQAKALTIUGHIK", "PZMFRHWRBVH", "ZEFRVUCKIGYR", "HGBDCHCKGYS", "QOHT", "IDFKEL", "YNLDOKV", "RFCRKNE", "XP", "WXHPMDZFLUNQWDGNQSC"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "CEFDFFHGBDCHCIDFIJKEKGLLMMPPQAKALQJMEFKQOHRFCRKNESJSTITUGHIKVWKWVCCGOOVWXHPMDXPXXYJXHUYNLDOKVYNQHYSYXQMQFAOMOPYZACZBZEFRVUCKIGYRZFLUNQWDGNQSCZMFRHWRBVHZTXASWQLMVOMVTS";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> W = {"BABABBBAAABABBAAAAAB", "ABAABAAABABAABBBAAAB", "ABBABBBAABBABBBBAABA", "BABBBABBABAAAAAAAAAB", "AAABBBAAAABBBBBBAABA", "AABABBBABABABABBBABA", "ABAABBBBBAABAAAABBAA", "BAABBAAABABAAAABAAAB", "BAAABBABBBBBBBAABABA", "AAAAABBAABABBABBABBA", "ABAAABBBABABABAABABA", "ABAABBBBABBABABBBBAB", "BABAABAABAABABAABABA", "AABABABABAABBBABABBB", "BAABBBBBAABABAABBAAA", "BBBBBBAABABABAABABBA", "ABAAABAAABBBBABBABBA", "AABABBABBBABABBBBAAB", "ABABABABBBBAABBABABB", "BBBBBAAABAAAABAABBAA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAABAAABAAABAAABAAABAABAAABAABAABAABAABABAABAABAABABAABABAABABABABAABABABABABABABABABABABBAAABABAAAABAAABBAABABBABBABBABBABBABBABBBAAAABBBAAABABBAAAAABBBAAABBBAABBABBBABABABAABABABBBABABABABBBABABBBABABBBABABBBABBABAAAAAAAAABBBBAABABBBBAABBABABBBBAABBBBABBABABBBBABBABBABBBBABBBBBAAABAAAABAABBAABBBBBAABAAAABBAABBBBBAABABAABBAAABBBBBBAABABABAABABBABBBBBBAABABBBBBBBAABABABBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> W = {"BBAAAABBBAAAABBAAABB", "AAABBABBBBAAAAAABABA", "ABAABAAAABAAABABABBB", "BAABBBBBAABABBAAABBA", "ABBBABABAABABABABBBB", "BBBABBAAABAABABABAAB", "ABBAAABABAAABBBAAABA", "AABBBABABBABBBABABBB", "AABABABABBABBAABBABB", "ABBBABAAABBBBBAAABAB", "BABBAABABBABBBBAABAA", "AABABBABBBABBABABBAB", "BAAAABBABAAABBAABAAA", "BAAAABABBABAABBBABAB", "ABABABABAAAABBBBAAAB", "AAABBABAABAAAAAAAAAB", "ABAABBBAAABBBBABAAAB", "BBBAAAAAABAAABBBAAAB", "ABAAABBABAABABABBABA", "ABBABAAAABBBBABBABBA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAABAAAABAAAABAAABAABAAAABAAABAABAABABABABAAAABABABABABABABABABBAAAABBAAABABAAABBAABABBABAAAABBABAAABBAABAAABBABAABAAAAAAAAABBABAABABABBABAABBABABBABBAABBABBABBABBABBBAAAAAABAAABBBAAAABBAAABBBAAABABBBAAABBBAAABBBABAAABBBABABAABABABABBBABABBABBBABABBBABABBBABBAAABAABABABAABBBABBABABBABBBBAAAAAABABABBBBAAABBBBAABAABBBBABAAABBBBABBABBABBBBBAAABABBBBBAABABBAAABBABBBBBBBBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> W = {"BBABAAABAABBBABBAABA", "BBBBBBBBAAAAABABABBA", "ABBBBBAAABBBAAABBBBB", "AAAABABBABAABBBAABAA", "BAABABBBABBAAABBBAAA", "BABBABABBABBAAABAAAB", "ABAABBBBBBBAABABAAAA", "BBABBABABABAAABBBBBA", "ABABAABAAABBBBBBBABB", "BAAAABBBBABBBAAAAAAA", "BAABAAABAAAABABBBABB", "ABAABAABBABBAABAABAB", "BBBBABAABABABBAAABAA", "AAABABBABABBBAAAABAB", "BAAABBABBABAABAABABA", "BAAABBABBBBBAAABBABB", "AABBABBBAABBBAABABAA", "AAAABABBAABBBAABABAB", "BBABBABAABABABAABBBB", "BBBBBAABBAABBBBABBAB"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAABAAAABAAABAAABAABAAABAAAABAABAABAABAABABAABAAABABABABABABABBAABBABAAABAABBABAABBABABBABABBABBAAABAAABBABBAABAABABBABBABAABAABABABBABBABAABABABAABBABBABABABAAABBABBABBBAAAABABBBAABAABBBAABABABBBAABBBAABABAABBBABBAAABBBAAABBBABBAABABBBABBBBABAABABABBAAABAABBBBABBBAAAAAAABBBBBAAABBABBBBBAAABBBAAABBBBBAABBAABBBBABBABBBBBABBBBBBBAABABAAAABBBBBBBABBBBBBBBAAAAABABABBABBBBBBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> W = {"ABABBABABAABAABBBABA", "AABBAABABBBABAABBBBA", "AAABAABABBBAAABBBABB", "ABBAABABBAABAABAABAA", "BAABABAABBBAAAAABABB", "BBABAABABAABAABBBBAA", "AAAAAAAAAABAAAAABABA", "AABAABABABABBAABAABA", "BABABAABABBAABBBABAB", "BAAAAAABBBBAAABBBAAA", "AABAAAABBAABBAABAAAB", "ABABAAAABBBBABBBAABA", "AAAABBABBABBABABBBAB", "BBBBBBBABBBAABAAAAAA", "ABABAAAAAABAAABABBBB", "AAAAABAABAAAAABABAAB", "BAAAABAABBBBAABABAAA", "BAAAAABAAAAAABBBABAA", "AAABABABBABABBAABAAA", "BAAABABAABABBBBABBBB"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAABAAAAABAAAAAABAAAAABAAAABAAAABAAABAABAAAAABAABAABAABAABABAAAAAABAAABABAAAABABAABABAABABAABABABAABABABABABABABABABABABABABBAABAABABBAABABBAABAABAABAABBAABABBAABBAABAAABBAABBABAABABAABAABBABABAABAABBABABBAABAAABBABBABBABABBBAAAAABABBBAAABBBABAABBBABAABBBABABBBABABBBABBBABBBBAAABBBAAABBBBAABABAAABBBBAABBBBABBBAABABBBBABBBBABBBBBBBABBBAABAAAAAABBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> W = {"BABBABABBABABBAAAABB", "BBABBAAAABAABBABBABB", "BAAABAABABBAABBABBAA", "AABBBAABABBABBABABAB", "AAAAABBAABBAABBAABBB", "ABABBAABBBAABBBBABAB", "BBBAAAABBABBAAAAABBA", "BAAABBBAABABBABBBBBB", "AAAABBBBBBABBBBABBBB", "BBBAAABBAAAABAAAABBA", "AABAABBBABBAABAABAAA", "AAAABBBBAAAABBBBBAAA", "BBAAABABBBAAABBAABAA", "AABABBABABABBAABBABB", "BBAABBBABBBAAAAABABA", "ABBBABBBBBABABABAABB", "BABBBABABBABAABABBBB", "ABBABBABBBABBABBAAAB", "ABAABBAAABABAAAABAAA", "BAAAAAAAAABBABABABBA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAABAAAAAAAAABAAABAAABAABAABAABABABABABABBAAABABAAAABAAABBAAABABBAABBAABBAABBAABBAABBAABBABABABBAABBABABABBABABBABABBAAAABBABBAAAABAABBABBAABBABBABBABBABBABBABBBAAAABBABBAAAAABBABBBAAABBAAAABAAAABBABBBAAABBAABAABBBAABABBABBABABABBBAABABBABBBAABBBABABBABAABABBBABBAABAABAAABBBABBABBAAABBBABBBAAAAABABABBBABBBBAAAABBBBABABBBBBAAABBBBBABABABAABBBBBBABBBBABBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> W = {"ABABABBBABABABABBABA", "ABAABBABBAAABBBAAAAA", "BAAAAAAABAAABBBBBBBA", "BBBAAABABBBBABABAAAA", "ABABABAABABBAAAAABAA", "AAAAABBBBAABBBBBAABB", "BBBABABBABBAAAABBABA", "BBABAAAABBBBAABBAAAA", "BAAAABBBBAAAABABAABA", "AAABAAABAABBBABBBBBB", "ABAABAABBABABBAAAABA", "ABAABBABABABBABAABAB", "BBAAAABBBABABBABBBBB", "AAABABBAABBABBBAABBB", "ABBAABBBBABBBABBABAB", "AABABAAAAAABAABABAAB", "ABBBAABAABAABBABAAAA", "ABAAABAABAABBBBABABB", "AAABABAAAABBBAABBBAB", "AABBABAAABABAAAAAABB"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAABAAAAAAABAAAABAAABAAABAAABAABAABAABAABAABAABAABABAAAAAABAABABAAAABABAABABABAABABABABABBAAAAABAABBAAAABBAABBAABBABAAAABBABAAABABAAAAAABBABABABBABAABABBABABBAAAABABBABBAAABBABBBAAAAABBBAAABABBBAABAABAABBABAAAABBBAABBBAABBBABABABABBABABBBABABBABBAAAABBABABBBABABBABBBABBBABBBBAAAABABAABABBBBAABBAAAABBBBAABBBBABABAAAABBBBABABBBBABBBABBABABBBBBAABBBBBBBABBBBBBBBBBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> W = {"AAAABBAABABBABBBBBAB", "AAABBBAAABBBAABABBAB", "BBABABBABBBAABAAABAB", "ABAAABABBBAABBAABBAA", "AABBABABBAABBABAAABB", "AAAABAABBAABBBAABBAB", "AAAABBAAABABBAAABBBA", "AAAAABAABBABABABABAA", "BAABBBAABABABBABBBBB", "BABBBBBABABBBAABBAAA", "AAAAAAABBBAABBBBAABB", "BAABBBAABAAABABAAAAB", "BBBBAABAABBAAAAABBBA", "ABBBBBAABAAABAAABAAA", "ABBBABBBAABAAABBABBB", "BBAABBBAABABBBABAAAA", "ABAAAABABAABBBABAAAB", "AAAABBABABBBBBAAABAB", "BABAAABBAABBBABBBBAA", "BAABBABBBABBBBABABBB"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAABAAABAABAABAABAABAABABAAABABAABABABBAAABABBAAABBAABABBAABBAABBAABBABABABABAABBABABBAABBABAAABBABABBABABBABBABBABBBAAABBBAABAAABABAAAABBBAABAAABABBBAABABABBABBBAABABBABBBAABABBBAABBAABBAABBBAABBABBBAABBBABAAAABBBABAAABBBABBBAABAAABBABBBABBBABBBABBBBAABAABBAAAAABBBABBBBAABBBBAABBBBABABBBBBAAABABBBBBAABAAABAAABAAABBBBBABABBBAABBAAABBBBBABBBBBBBBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> W = {"AAABABAABAAABBAABBAB", "AABAABBABBAABAAABAAA", "ABBBAABABBBABBAABBBB", "AAABAAAABABAABBAABBA", "AABBBABBBAABBBBAABAB", "BBAAAABBBAAABBBAAAAB", "ABABBBBABBBBABBABABA", "ABABAABBBBAABABBBAAB", "AABABBAABBBAAAABBABB", "ABBABBBBABBBBAABBABB", "BBBBBBBAAABBABABBBAB", "BBBBBAABBBABBABAAABB", "BABBAAABABABBAABAAAA", "BBBAABABBBBABBABBBBA", "BABBBABBBBAAAAABABBA", "ABBABBBBABABBABBBAAB", "BABBBABAABAAABBBBBAB", "BABBBABAABBABABABABA", "BBABABBBAAABBABABBBB", "BAABABBABBABAABBAABB"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAABAAAABAABAABABAABAAABABAABABAABABABABABABABABBAAAABBAAABABABBAABAAAABBAABBAABBAABBABABBABBAABAAABAAABBABBABAABBAABBABBABBABBABBBAAAABBABBBAAABBABABBBAAABBBAAAABBBAABABBBAABABBBABAABAAABBBABAABBABABABABABBBABBAABBBABBBAABBBABBBBAAAAABABBABBBBAABABBBAABBBBAABABBBBABABBABBBAABBBBABBABBBBABBBBAABBABBBBABBBBABBABABABBBBABBBBBAABBBABBABAAABBBBBABBBBBBBAAABBABABBBABBBBBBBBBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> W = {"AABBAAAAABBBBABAABBB", "ABBBABBBBBABBABABBBA", "ABBABBBBAABBBBBBAAAA", "BAABBBABABBABBBAABAA", "AABAAAABBBAAAAAAABAB", "ABAAABBABBBAABBBAAAA", "BBBBBBAABBBAAAABAABB", "BABABAABBAAABBABBABB", "AAABAAABBAAAAAAAAAAB", "BBBBABBABABAAABABAAA", "ABAABAAABABABBBABABB", "ABABAABBBABBBBBAABBA", "AAABABBBBBBBAABBAABB", "BBBABBBBBBBBABBBABBA", "BABABABAABBABABAAAAA", "BBBBBBABBABAAABAABAA", "AABAABBBBBAABABAABBA", "ABBBAABBBABAABABBBBB", "BABBBAABBABABABBAABA", "BBAABBBABBABBBBBABAA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAABAAAABAAABAAABAABAAABAABAABABAABABABAABABABABAABABABABABBAAAAAAAAAABBAAAAABBAAABBAABBABABAAAAABBABBABBABBABBBAAAAAAABABBBAABBABABABBAABABBBAABBBAAAABBBAABBBABAABABBBABABBABBBAABAABBBABABBBABBABBBABBBABBBABBBBAABBBBABAABBBBABBABABAAABABAAABBBBBAABABAABBABBBBBAABBABBBBBABAABBBBBABBABABBBABBBBBBAAAABBBBBBAABBBAAAABAABBBBBBABBABAAABAABAABBBBBBBAABBAABBBBBBBBABBBABBABBBBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> W = {"AAABBABBABAABBBBABAA", "BBABABAAAAAAAAABABAA", "AAABABABBBABBBAAABBB", "AAAAAAABAAAABBBBBBBA", "BBBBABAAABAAAAABABAA", "AAABABAAAAABAABAABBB", "AABBBBBBAAAABABBBABB", "AABAABABBBBAABABABBA", "BBABBABAAAAABAABBBAB", "ABABBABBAABABBABAAAA", "ABBBABABBBBAABAAAAAB", "ABBABBABBBABBABBBABA", "BBBAABBBAABBABABABAB", "AABAABABBBBABBABBBAB", "AABABAAABABBAAAAAAAB", "BAAAAABBBBBBABAAABBB", "BBBAABBAAAABBBAABBAB", "ABBBABABABBBBAABBAAA", "BAABAABBAABABAABBBBB", "BAAAABAAAABBAAABABBB"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAABAAAAABAAAABAAAABAAAABAABAABAABAABABAAAAABAABAABABAAABABABABABABABBAAAAAAABBAAABABBAABABAABBABABAAAAAAAAABABAABBABBAABABBABAAAABBABBABAAAAABAABBABBABAABBABBABBBAABBAAAABBBAABBABBBAABBBAABBABABABABBBABABABBBABABBBABBABBBABABBBABBBAAABBBABBBBAABAAAAABBBBAABABABBABBBBAABBAAABBBBABAAABAAAAABABAABBBBABAABBBBABBABBBABBBBBBAAAABABBBABBBBBBABAAABBBBBBBABBBBBBBBBBBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> W = {"SESOKNGVEIPTHDTQYCGL", "ZBEQXMFJIIWDQREPJBTI", "PMVRMUYFMAARZSZWHBBZ", "XZQIELSTGAANYSYEGTFG", "ZLMSAJHEJWXGYMDNDRSJ", "RUJWPANIYKMZATOSMQYR", "QIUXEBJFLYSIVYZBXAAS", "ZOGYWUJOPDNFTUGNERRL", "DSIIKVZSJBRHNGHFWJTQ", "EFMZIROSVXPFFRBDHAHT", "CUMNRYIOURBZXVYTSRMM", "MZCDKATTRNQXJWZOLCVD", "ZMVXTZKXIYGZKQLRFAFK", "XBUZTPCHBVVAZBAOEAWA", "HNPDLTSZEXYXOOTRPBPM", "WYYGBVITDPUAEPPMGQNA", "EAGSBDHNHXCVHYWGTKTG", "ZKKJMXZQTQWDLYHVVJIS", "OOIHUQOJSHFZBWCUOXVF", "LCPWKZAGCKWUXAJULMEF"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "CDEAEFGHLCMMNOOIHPDLPMPQIRSBDHNHSESIIKSOKNGTSUJUMNRUQOJSHFUVEIPTHDTQVRMUVWKWPANIWXBUXCVHXEBJFLXYCGLYFMAARYIOURBYKMYSIVYWGTKTGYYGBVITDPUAEPPMGQNAYZAGCKWUXAJULMEFZATOSMQYRZBEQXMFJIIWDQREPJBTIZBWCUOXVFZBXAASZCDKATTRNQXJWZEXYXOOTRPBPMZIROSVXPFFRBDHAHTZKKJMXZLMSAJHEJWXGYMDNDRSJZMVXTZKXIYGZKQLRFAFKZOGYWUJOPDNFTUGNERRLZOLCVDZQIELSTGAANYSYEGTFGZQTQWDLYHVVJISZSJBRHNGHFWJTQZSZTPCHBVVAZBAOEAWAZWHBBZXVYTSRMMZ";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> W = {"RTQFMQDHKTKJSQLJDUKC", "PXWRFCPCXARXCYPMBUSM", "BZSYBRSZJALPBYMKJLCI", "SVNBANGEZBDMPPZFJETE", "PZCTRYPFANMTXSPFRRUA", "OWFVPZMXQNOKKJDXOQUG", "XTLBDFHCIKHYZPKUXVIM", "JUKGBNWYJCLOSGNSFPBY", "HWGVASWLVBNGASVEFEBU", "RDKXGCJOOJPXFERNLIJG", "PNACIITWXZODGEZCSMTX", "LDZBNDISZOXUAUTOVTRP", "XBJKBRINZLHKBEWLQWMT", "VFPJCBHKYAJRAAANQLKU", "AFQYCBDGTODGPRJKJHWI", "APQDLSLKLHNKUWCLVAUE", "UPMJLWWVIYJPHYPFLMKV", "BJZHKJRFSKCNIPXVWYTM", "HKXCTMOLZVMFTDALHTTZ", "FLNDZRNTMRMMDEGRNSGW"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AABBFFHHJJKLDLNDOPNACIIPPPQDLQRDKRSLKLHNKSTQFMQDHKTKJSQLJDTUKCUKGBNUPMJLUVFPJCBHKVNBANGEWCLVAUEWFVPWGVASWLVBNGASVEFEBUWWVIWWXBJKBRINXCTMOLXGCJOOJPXFERNLIJGXTLBDFHCIKHXWRFCPCXARXCXYAJRAAANQLKUYCBDGTODGPRJKJHWIYJCLOSGNSFPBYJPHYPFLMKVYPMBUSMYYZBDMPPZBNDISZCTRYPFANMTXSPFRRUAZFJETEZHKJRFSKCNIPXVWYTMZLHKBEWLQWMTZMXQNOKKJDXOQUGZODGEZCSMTXZOXUAUTOVTRPZPKUXVIMZRNTMRMMDEGRNSGWZSYBRSZJALPBYMKJLCIZVMFTDALHTTZ";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> W = {"STZXFEWNGZPRDWPFWKWU", "CHBXPHDSJKSYTDDDTZBM", "FDRFLOUUTGKJNIWJTYIF", "UTNEOAMVOTBXBXVQJFWH", "TWHLIGDLZVWTROGGQGOJ", "KRIULTCKNEIVTJXJSRZZ", "GWJNZRVWVQWUWZIPKXGD", "KLKLJJRUKUBBSDVRJGLN", "FRLLDFLGBPPCSBFUETEJ", "BWVIIEMNEWYDHLNXGISB", "VNNTQBJZGLOGDUIDBTOT", "FACSYPRXEVLBHTQFRLFX", "ICAPJUMQAWHWPZBZDDBQ", "KSAURBXOUQPYOPWCAFPZ", "GVVUYGVODUFBZOPWOZDI", "YJLCBWGSXNHGYAJVBTER", "CPXTEIEPQVICEIQOEYMA", "LUCBHOPAJSCTHGPHNGYU", "BNXAFSXIKCQWNIPZOCZQ", "LUFOREHLHBAQEUCDHEEI"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BBCCFACFDFGGHBICAKKKLKLJJLLNPJPRFLORIRLLDFLGBPPCRSASBFSSTTUCBHOPAJSCTHGPHNGUETEJUFOREHLHBAQEUCDHEEIUKUBBSDULTCKNEIUMQAURBUTNEOAMUUTGKJNIVNNTQBJVOTBVRJGLNVTJVVUWHLIGDLWHWJNWJTWPWVIIEMNEWXAFSXBXIKCQWNIPXJSRXOUQPXPHDSJKSXTEIEPQVICEIQOEXVQJFWHYDHLNXGISBYGVODUFBYIFYJLCBWGSXNHGYAJVBTERYMAYOPWCAFPYPRXEVLBHTQFRLFXYTDDDTYUZBMZBZDDBQZGLOGDUIDBTOTZOCZOPWOZDIZQZRVWVQWUWZIPKXGDZVWTROGGQGOJZXFEWNGZPRDWPFWKWUZZZ";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> W = {"EYPAQSWXTTNXUEVRQJEZ", "MQIMOXXDTWMTWEBMVGKF", "NNHXLNXEYAKUOJXZBWMG", "HXFLFEDDSYSRYGNCJTFJ", "AMKWEWFKHSNZFJLRBMWZ", "INCUWZPSREBNLGTRZWYY", "XCDMUVMHIRYADYIGLFRH", "VMNGTQJQTAUOZKULLIQR", "FWZBZXALXJTLGXLOOGUD", "VBLLGJPLICNMDYPRJDGU", "XFYWONOGXEWBBIDTFZKC", "NYBSZOKOYRFGKXCYBPFF", "EETARNXUJJWWRAVDIWRU", "QFUWNRRXQGWVMCYUGKNP", "ROJMIXHGOUTNEDZAANLQ", "MTMMADLCTSGSKIXYNCGL", "FOISGYXOALUYPMRIHCJY", "FEHZZKVNFDFAODBSLRAE", "UFDPMWBRGOKGTOSTCHYD", "XPOEXUMCFTEWXJJNZXOE"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AEEEFEFFHHIMKMMNCNNHNOIQFQIMOROJMISGTARNTMMADLCTSGSKIUFDPMUUVBLLGJPLICNMDVMNGTQJQTAUOWBRGOKGTOSTCHWEWFKHSNWNRRWWXCDMUVMHIRXFLFEDDSXFXHGOUTNEDXLNXEXPOEXQGWVMCXUJJWWRAVDIWRUXUMCFTEWXJJNXXDTWMTWEBMVGKFXYADYAKUOJXYBSYDYIGLFRHYNCGLYPAQSWXTTNXUEVRQJEYPRJDGUYSRYGNCJTFJYUGKNPYWONOGXEWBBIDTFYXOALUYPMRIHCJYZAANLQZBWMGZBZFJLRBMWZKCZKULLIQRZOKOYRFGKXCYBPFFZPSREBNLGTRZWYYZXALXJTLGXLOOGUDZXOEZZKVNFDFAODBSLRAEZZ";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> W = {"HPPVDZRUWRQUAJBCXMFX", "DHLMATYRTBAQRFUVDOXH", "DDAPDRAOHLSZEBNWFQZF", "ACZZONCGMJTOFHIODUDO", "WBXGRFVAEFOPXJFDTEFT", "AHPPPWQMKHBSDHFYJWHU", "CTBVBIPNURMEUSCFCDMH", "VUIGIUKJKFOGNKUWSTTR", "OQRAVFEAIKEROYOEAMNW", "FAZCIELPWLVDCHRBYFTP", "BCERJPPKYOBUKEAIMQYE", "IFTYRQMXYYBMWLUXLOHK", "BNWEPEHTALPZWVHGCVIN", "LXYBXQKXJQCGVGKOBWOO", "RMXKPEZFDQTTGZORLOHK", "BHMIUPVCFVBDGBCYURDU", "PHPSLQBAUCZOLCNDCUND", "UWVEXEPWAWQCDKSUJENO", "SCCPKLXYRKPDHPIWNFRG", "AXZQGZEPMVBNFEMMGJJN"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAABBBCCCDDADEFAHHHHIFLLMAMINOPDPHPPPPPPQRAOHLRARJPPKRMSCCPKLSLQBASTBTTUCUPUVBIPNURMEUSCFCDMHVCFVBDGBCVDVFEAIKEROVUIGIUKJKFOGNKUWBWEPEHTALPWQMKHBSDHFWSTTRWVEXEPWAWQCDKSUJENOXGRFVAEFOPXJFDTEFTXKPEXXXYBXQKXJQCGVGKOBWOOYJWHUYOBUKEAIMQYEYOEAMNWYRKPDHPIWNFRGYRQMXYRTBAQRFUVDOXHYURDUYYBMWLUXLOHKZCIELPWLVDCHRBYFTPZEBNWFQZFDQTTGZFZOLCNDCUNDZORLOHKZQGZEPMVBNFEMMGJJNZRUWRQUAJBCXMFXZWVHGCVINZZONCGMJTOFHIODUDO";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> W = {"EAQGYPXVSQOMBBSFIBMK", "NUHMLIHJWNDGYPKBXAYL", "ORWWIWQQVHYRTHOGHQZR", "TAHSLPUSPXKUQOUPYCVY", "TSIEJYPRQWSUWMHPSDUE", "QTPBVZTFDBBIYYWWKKGZ", "EVNQMBLZJROVDOLPWAJK", "CIITHMQSUNDWMQCCAUXI", "GIAFVPNMKAZXOTIHCOUR", "ASDLSMUIVCNFJXYVAEHO", "PKBPCRCKYSABDMCPYJXJ", "DCCBYWXLKGQBLXFSXZMA", "GGKIAFTQSQUXRESQEKFA", "MUIQSFXSIQLKJRPMOOIQ", "MPQELVKMBHBGCNWVBMBZ", "IOGBEHPJAWOTZGRJBWYX", "WEKHTRGKQLZDSBRDUQXX", "BCLEDJAGMRZQSCQGCAGS", "RXFSNNYYELQUCYBJINHF", "DMEMFRBPBGCUKHCQRULE"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCCDCCBDEAEGGGIAFIIIKIAFLEDJAGMEMFMMMNOGBEHOPJAPKBPCPQELQGQRBPBGCRCKRRRSDLSMTAHSLPTHMQSTPBTQSQTSIEJUHMLIHJUIQSFUIUKHCQRULEUNDUSPUVCNFJVKMBHBGCNVNQMBLVPNMKAVWEKHTRGKQLWMQCCAUWNDGWOTWVBMBWWIWQQVHXFSNNXIXKUQOUPXRESQEKFAXSIQLKJRPMOOIQXYCVYPKBXAYLYPRQWSUWMHPSDUEYPXVSQOMBBSFIBMKYRTHOGHQYSABDMCPYJXJYVAEHOYWXLKGQBLXFSXYYELQUCYBJINHFYZDSBRDUQXXZGRJBWYXZJROVDOLPWAJKZMAZQSCQGCAGSZRZTFDBBIYYWWKKGZXOTIHCOURZZ";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> W = {"XFVAEUAIAWMVECBBLCHG", "MZGEKBIPZQAYTQBHFJJI", "QAMKZIPTAQOUZRFSRJFJ", "MAAWHRMBQAGGLEFAXAIY", "SBULURPDITTUJRDWLIXO", "MEQOYPNUMTCWIUDPKUPN", "VXELVGJBRYRUGVBSODGA", "BICCCGMHDRLKPDKLWDZY", "MMQKLVAQXVWZZASLFDND", "ECYKXWHGJBRVFQBZIGHQ", "JEMXJHCZZHUIZNEWIBSC", "KIQAMVILWUSCDWTEILGA", "MDPCGBHZNDSQKDLIASZU", "VHQQJTFXDSGVJWSBUDAZ", "FKNIFDWRNSCDCXKMYQJA", "PQBYVNBQUGZWVRMIGMCR", "ODUSHIUKNARKMFRLQQAJ", "MVXSVPZQOXXCHDRDEMBU", "BIHZRQPZSREMKSSAKIAV", "IEKJHTMWICVPHDXBIYNI"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BBECFICCCGIEIHJEKIKJHKMAAMDMEMHDMMMMMNIFDODPCGBHPQAMKQAMQBQKLQORLKPDKLSBTMULURPDITTUJRDUSHIUKNARKMFRLQQAJVAQVHQQJTFVILVVWDWHRMBQAGGLEFAWICVPHDWLIWRNSCDCWUSCDWTEILGAXAIXBIXDSGVJWSBUDAXELVGJBRXFVAEUAIAWMVECBBLCHGXJHCXKMXOXSVPXVWYKXWHGJBRVFQBYNIYPNUMTCWIUDPKUPNYQJAYRUGVBSODGAYVNBQUGYZGEKBIPZIGHQZIPTAQOUZNDSQKDLIASZQAYTQBHFJJIZQOXXCHDRDEMBUZRFSRJFJZRQPZSREMKSSAKIAVZUZWVRMIGMCRZYZZASLFDNDZZHUIZNEWIBSCZ";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> W = {"AOTARBTUNWHWZUPVFUVG", "SLSCBFHJXSGNOAOKHJMI", "BKANFMOCTGBIIYOLKUUF", "NOQGZZQHJVFVLZOOVUFS", "YKQKUDXCYBATDMDTUPXM", "AHACALRPQNGDYFGQROXI", "GXYKRNXDCVZWFIVXHFQP", "FMFAGPQUJUAXAFWATYRY", "UUNWLSZOTMGBVNSDUHZX", "VQSFFVZDEMTCLUYLLEQY", "HZHLVVGODEBQVSSVIJNS", "IBOYSRYWWLTJFYXDWPRY", "QIJGXPILDVGXKVLHHMWJ", "WNKDMVUTLJTOARNUXEPB", "DPBLFMGUXIYSCZYKNFQE", "RZQQKARDHCEOGVPUKIRH", "AQEHPCHRJXEGMKAGFYRG", "WNAWLIKCOVWOOFAJUDRH", "XMQBJVZBKGPSVVYQCVTI", "MTBVQDMFKATARKRGBFVV"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAABDFGHACAHIBKALMFAGMNFMNOCOOOPBLFMGPQEHPCHQGQIJGQRJRPQNGDRSLSCBFHJTARBTBTGBIITUJUAUNUUNUVQDMFKATARKRGBFVQSFFVVVWHWLSWNAWLIKCOVWNKDMVUTLJTOARNUWOOFAJUDRHWXAFWATXEGMKAGFXEPBXIXMQBJVXPILDVGXKVLHHMWJXSGNOAOKHJMIXYFGQROXIYKQKUDXCYBATDMDTUPXMYKRNXDCVYOLKUUFYRGYRYSCYSRYWWLTJFYXDWPRYYZBKGPSVVYQCVTIZDEMTCLUYLLEQYZHLVVGODEBQVSSVIJNSZOTMGBVNSDUHZQQKARDHCEOGVPUKIRHZUPVFUVGZWFIVXHFQPZXZYKNFQEZZQHJVFVLZOOVUFS";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> W = {"XXZKJPGSONSQDKTIZGYR", "ABPQWAVKDAGIHJDUWMLG", "IMFZLIRCNJYVVPCLEDBV", "MINMRQVYFDYPVYGVDOJX", "IZXJEXSKYBLNTBWOSFSL", "PEPDSIRAFPMZFPXEQZGI", "QYFQPBMTHLKHZIDSXXUB", "POCIIJPOJWSMRFUKDKQO", "FMEGAVYVZMRCYNFXWVUF", "AXWJGRGTKKKETBBLMESX", "SGYDRATAMXQGOKQMGAYF", "AHQKFJBOAYLTFBQDYOKV", "BJXQSUUQIVIMKDTJWUGX", "WXUUYNFSDYAJKFKZFKNI", "EVRIZYKOEPHPNKHTCVJY", "XBWJWOSTYQTZDWHHGIBS", "PLRNRFNZQGMGMZSDQDJU", "IPRJZLCYCTRFOYEBDBBP", "MQOIFSLXOJGALHNQQTQS", "VMOXSXFFUZRWQSFTLCES"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAABBEFHIIIJMEGAMFMIMNMPEPDPLPOCIIJPOJPPQKFJBOAQOIFQQRJRNRFNRQSGSIRAFPMSLVMOVRIVVWAVKDAGIHJDUWMLGWSMRFUKDKQOWXBWJWOSTXOJGALHNQQTQSXQSUUQIVIMKDTJWUGXSXFFUXUUXWJGRGTKKKETBBLMESXXXXYDRATAMXQGOKQMGAYFDYFQPBMTHLKHYFYLTFBQDYNFSDYAJKFKYOKVYPVYGVDOJXYQTYVZDWHHGIBSZFKNIZFPXEQZGIZIDSXXUBZKJPGSONSQDKTIZGYRZLCYCTRFOYEBDBBPZLIRCNJYVVPCLEDBVZMRCYNFXWVUFZQGMGMZRWQSFTLCESZSDQDJUZXJEXSKYBLNTBWOSFSLZYKOEPHPNKHTCVJY";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> W = {"FQRTCXUBNOVTQIQJOMCX", "OLWMHPTTHHHCODOHCCOU", "JVEHRQDANYNGIGDNLZTK", "EPOHGENIKSPNBRTPHUHZ", "PUKCOLVNJURTBOIGCCIA", "PEAFSSKXSOYCFWLTFEZB", "OTCMTKODDMXZKYLWSDCP", "RBPZMDKONQZWJBUCALGC", "GIILWNFOVMBJXAQMYTIJ", "FWUCBDQVTGZUIZUIDSRC", "BKMEFFEZHTFZQCIZTGPR", "KURXQJXBQAJVDCMPCDQW", "IGQWPCXNECLBDAWXOZMZ", "ZFGLVENKEXQBORAYXDBB", "NRVXBOAJBAEJTXNKLPQB", "QHOJHCDODIYFICLTLKZY", "YQPNAGZYTPHEXEQZZRZE", "EGKNWYNIPXNKAMTFRKDJ", "EPVAQROPFYYXCKXSCBUM", "TASHWHEEHHTKWKOUZYDN"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BEEEFFGGIGIIJKKKLMEFFENNOLOPEAFPOHGENIKPPQHOJHCDODIQQRBPRRSPNBRSSKTASHTCMTCTKODDMTPHUHUKCOLURVAQROPFVEHRQDANVNJURTBOIGCCIAVWHEEHHTKWKOUWMHPTTHHHCODOHCCOUWNFOVMBJWPCWUCBDQVTGWXAQMXBOAJBAEJTXNECLBDAWXNKLPQBXOXQJXBQAJVDCMPCDQWXSOXUBNOVTQIQJOMCXXYCFWLTFEYFICLTLKYNGIGDNLYNIPXNKAMTFRKDJYQPNAGYTIJYYXCKXSCBUMZBZFGLVENKEXQBORAYXDBBZHTFZKYLWSDCPZMDKONQZMZQCIZTGPRZTKZUIZUIDSRCZWJBUCALGCZYDNZYTPHEXEQZYZZRZEZZ";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> W = {"FBQCYCZYEKOYHCKEPLGRVNHWJHSCYZXGTWQTCARKGOQDKVRFQM", "PFWUHBGKMXHCJTYGPDPKLIPOSTOQSYWSVFQYPPMNNAUYPMTOVK", "HEWDGCKYDRKEDKAQEBNVCTQEXFBQFXIFIEOCKSYBTMJEMXHGUD", "RLCYEACNVUALPNSIHSCTWIALGGKPIKWEEWXVNDYEOHPQOBTQUQ", "MFNRISZJZELILMYHVHLEWTYWXPUOFTTNSTIHRAIPMRLDYIFNJO", "VWTCBWUPEFLMCMQKFXRASCGFNXKOTNEETJTKKMXMVVGVQPQIKF", "UKDHFYBLVTZGSZFSKWAYTLJCZXFRSNRXZVNVLPBGBKEBSTDGIO", "YTQOKVSOCHGUBGJFBGPCLIWZSSRHACHGPGCZYFYOTSEQQKHUNW", "CXADOYHQPGZBHQICGARNJJOPIXOYDCHUXWYOBZDJSUUIWMKKFD", "TIDRMIPSSURSQKDRNVLWNVLEBUOBGXKGCJCFVQOBWUAIWVKECF", "UGUXICANJITUJTRZRPQZUCJVXLAPGINTIDMABUUSWXNQPNHRAU", "FYLBEOUNIKIDHUMTLMQWFGAJYAXMUOPVKLFSORMXICDGEVDKBT", "CEFMKGWIDLEYZMYBZXPMKHBBJIUZCQZAJQLJSSCFMTSIHJZNKY", "ROSRZSFNKVFHVVYRSIOFSMUAADTQTEJKWRPAXMSNGYANDTCLYC", "HFCGAWGQGLVXOLLKENXYKIJSCMYCIRBGGMSCHFBAHXTEFFDAZE", "HQSYXKQGBYWEUPCJQXXHXTCBXEUWVENUGDNSKXFXKRYMJNVODA", "AZQIXJQNLMFXZNSEXCVWZMXTODYNNAADRJVZZCYHQDWAXFRKCB", "YQQHRTMXHUGCWPBRGLXQYLIFUQVYPQPDXICAWEEOBPYQRHVFGQ", "QXOEYBRZAUPSAVHJFNCKBFPXDYVIWVNBTVAVBWSGRLSDBXMRZM", "JSYETDNVDZELHTEYVLNCNWTPIDUWGBJSCEIVRYCKHNRNRHXFTE"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ACCEFBFFHEHFCGAHJMFMKGNPFQCQQRIRLCROSRSSSTIDRMIPSSUGUKDHFURSQKDRNUVLVWDGCKWGQGLVWIDLEWNVLEBUOBGWTCBWUHBGKMWUPEFLMCMQKFXADOXHCJTXICANJITUJTRXKGCJCFVQOBWUAIWVKECFXOEXOLLKENXRASCGFNXKOTNEETJTKKMXMVVGVQPQIKFXYBLVTYBRYCYDRKEDKAQEBNVCTQEXFBQFXIFIEOCKSYBTMJEMXHGUDYEACNVUALPNSIHSCTWIALGGKPIKWEEWXVNDYEOHPQOBTQUQYETDNVDYGPDPKLIPOSTOQSYHQPGYKIJSCMYCIRBGGMSCHFBAHXTEFFDAYLBEOUNIKIDHUMTLMQWFGAJYAXMUOPVKLFSORMXICDGEVDKBTYQQHRTMXHUGCWPBRGLXQYLIFUQVYPQPDXICAWEEOBPYQRHVFGQYTQOKVSOCHGUBGJFBGPCLIWYWSVFQYPPMNNAUYPMTOVKYXKQGBYWEUPCJQXXHXTCBXEUWVENUGDNSKXFXKRYMJNVODAYZAUPSAVHJFNCKBFPXDYVIWVNBTVAVBWSGRLSDBXMRZBHQICGARNJJOPIXOYDCHUXWYOBZDJSUUIWMKKFDZELHTEYVLNCNWTPIDUWGBJSCEIVRYCKHNRNRHXFTEZEZGSZFSKWAYTLJCZJZELILMYHVHLEWTYWXPUOFTTNSTIHRAIPMRLDYIFNJOZMYBZMZQIXJQNLMFXZNSEXCVWZMXTODYNNAADRJVZRPQZSFNKVFHVVYRSIOFSMUAADTQTEJKWRPAXMSNGYANDTCLYCZSSRHACHGPGCZUCJVXLAPGINTIDMABUUSWXNQPNHRAUZXFRSNRXZVNVLPBGBKEBSTDGIOZXPMKHBBJIUZCQZAJQLJSSCFMTSIHJZNKYZYEKOYHCKEPLGRVNHWJHSCYZXGTWQTCARKGOQDKVRFQMZYFYOTSEQQKHUNWZZCYHQDWAXFRKCB";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> W = {"ZESAKGFLYIUNAAPQPULYCXFZMFVEXAJAOKNHAQYBFUTTFQKGRB", "IMWJCSCPSMNETBGOZINCXACUFCYZXMRMIPPWUGIEISRWZGFWXU", "MKUFGDIBOVABURXMAUOYAWVAUKGNWAFDFEECFPIMJEQFFKEGHD", "OCSLAVVGOAIPVSAUHXIOPLMCSAVPMEWNOIIDRZEQHZZLPLYMXZ", "EUDJUFTICZNVYGNFYISAEQOZCBGENZTQBPYEDNPUIILGAWTWGU", "LMOVJKIKDWGYCHQRPXMHWLSRLUHISJKPHKSKYZQCGWSNYJGGLY", "XJPSVDXHNKPDIUTMJRUEATTNZHRJDRZXNIASFOFMAXKSYHNKGL", "KCMPMYSYNEUKNMRRPBPCPQQSDJFUNTDWUATMCHASSTKBGJNETD", "KWOYNDZCSVQHCKYVUHRSYVXBLAULEZWDKOXVZIDEKASRQDKOAB", "BPENHVFNDDRNDXTFAEYXJKNVLCMDAETSDBUQKVNYSCWBOQOFFW", "WGRVDEERDLKWENZZZIOWIBVGOBLHIFSZVQRSVDVJRJUKWIQGKK", "NLUWIQEUZFOLISIRXXQEYKQEHHJRJFFEAVGCJXGOALBNNGKXTZ", "MSGNWXMMHADWFLKRNZJOGXYDZHPQYOLQELVJLACGXWINNGJIAF", "HKBTUKGAVVYUUPHJHTZDPYEFSLPORNVYLBEYBCZKCOATDYPUNL", "IIXZIWZSQGESCMJIEQTWVAOYXFPETAIDYFHMCTSPTSNCRPDHEZ", "WSWXFEWGIMOZEPLDOYRRKZULUNGNCIUBOHDDCTQGPMQNRFAVNQ", "LUEXIYLILZQUWHRSTSTBVGELEXUQGLUMBMCSMLTVHKXVJZWLSA", "SXGELJVNBKKGZLWNBXMBRULWCTEEORPHTEEJRTLXYEIGAYMXTN", "OWTNYCYAFFPYRNDVJKERAKDWABRKKBWGHQTZCANRLYXPEGXLOE", "AIVXPCTZAINVFNWBAQRARQDBEQVBPDDMBHFPXTCFBGZPMLOVGK"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ABEHIIIIKBKCKLLMKMMMMNLOCOOPENHPMSGNSLASTUDJUEUFGDIBOUFTICUKGAUVABURVFNDDRNDVJKIKDVVGOAIPVSAUHVVVWGRVDEERDLKWENWGWIQEUWJCSCPSMNETBGOWOWSWTNWWXFEWGIMOXGELJVNBKKGXIOPLMCSAVPMEWNOIIDRXIXJPSVDXHNKPDIUTMJRUEATTNXMAUOXMMHADWFLKRNXPCTXTFAEXYAWVAUKGNWAFDFEECFPIMJEQFFKEGHDYCHQRPXMHWLSRLUHISJKPHKSKYCYAFFPYLILYNDYRNDVJKERAKDWABRKKBWGHQTYSYNEUKNMRRPBPCPQQSDJFUNTDWUATMCHASSTKBGJNETDYUUPHJHTYXJKNVLCMDAETSDBUQKVNYSCWBOQOFFWYZAINVFNWBAQRARQDBEQVBPDDMBHFPXTCFBGZCANRLYXPEGXLOEZCSVQHCKYVUHRSYVXBLAULEZDPYEFSLPORNVYLBEYBCZEPLDOYRRKZEQHZESAKGFLYIUNAAPQPULYCXFZFOLISIRXXQEYKQEHHJRJFFEAVGCJXGOALBNNGKXTZHRJDRZINCXACUFCYZIWZJOGXYDZHPQYOLQELVJLACGXWINNGJIAFZKCOATDYPUNLZLWNBXMBRULWCTEEORPHTEEJRTLXYEIGAYMXTNZMFVEXAJAOKNHAQYBFUTTFQKGRBZNVYGNFYISAEQOZCBGENZPMLOVGKZQCGWSNYJGGLYZQUWHRSTSTBVGELEXUQGLUMBMCSMLTVHKXVJZSQGESCMJIEQTWVAOYXFPETAIDYFHMCTSPTSNCRPDHEZTQBPYEDNPUIILGAWTWGUZULUNGNCIUBOHDDCTQGPMQNRFAVNQZWDKOXVZIDEKASRQDKOABZWLSAZXMRMIPPWUGIEISRWZGFWXUZXNIASFOFMAXKSYHNKGLZZLPLYMXZZZIOWIBVGOBLHIFSZVQRSVDVJRJUKWIQGKKZZZ";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> W = {"AGZKFRDUVSZOWGEVBHXOCPGBLMPPQPHJGTXBSZBEGLNYWXCHKD", "RPIQHTZWCMIHRCAPNUXNGHQQCKPNHLEXPWCUCBKUSLGUJUUJLU", "KAKAUTCXBDZQDKWSKOXBTNWDTTWUQEOKPGBJPCPQEFCCOWUXZY", "UMUJOKKGATKETNVHCFWDCCRABAWKTKUAUPIFINVFTVSIKQTLFI", "DLGETGRSZRWWVKGPBRSCLQLQEFPDUKEVZATDUMHTCQTSFMKLGO", "TJDTNPEAOVONEWHJTACYCGMKHZONKNYKMFZXZSWCEGOGFGFFLE", "VFRHHBBEBBZMZGFRPKJUKLGSTGGQCGXLCLNHVQMMHZFUOJMCUI", "EISIWKXBWQCCDEVVFCHBWXCNARMQBHVONNCFINLEQXOLBKELWJ", "BRNGFUYGXWZKVUKIGSGIDJMFQFEGCTQSFSJSTGKGUJIFDFVKHH", "TSKUWJDRHDUTBUXVMOLRNEOUYMVCFUECRVJEAXMHMQMFMAYLAB", "TMXFVJIQZNEYPNIGUMWILZRICKJVLUFODHWJUKQGSRAHAABYVE", "UHXDMFPQWKWPSCUVECRBVNLALKNXSOZFGLZHAOPEQRJKIEDAQS", "TOHUHZQELZKDKVDFWDTWYGBFONXPANYIHZEBIGEYQAHEOQCIIT", "HMSLOQLLBZQESRVWHICFTRKDZMZWPZZDHBMFTUSSVDMXLISFSM", "JUNMIVTGERUKQZYIPAYYDCBWSEAEMWCZPJIVLIDLAPYMOOKKZA", "OBQTPTPVVXOKLCACLFPMOTJSLWNUJUKQLOJTEZIZWRLFNIBRAM", "XECLLEBPGWUJEEXUANMZTAALFFDUZNLSNJJSWSJUMTZLYRPRRR", "TIVHFVVAZTPWRKQRGPDQRWPDKPCWJXKOWGSGDCIOSKLMKLTRPT", "EHBKUINQIPJPAMHKLMGRIROEUDRVAVEHPKAQSPHNTEIFGKRLNH", "TZYNRRKPTKAJGQRLMVFMBNSDXWXMCMQXZNDHUSAWPBGJNSQUCA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ABDEEGHBHIJKAKAKLGEMOBQRNGFRPIQHSISLOQLLBTGRSTITJDTMTNPEAOTOHTPTPTSKTTUHUHUINQIPJPAMHKLMGRIROEUDRUMUJOKKGATKETNUNMIUTCUUVAVEHPKAQSPHNTEIFGKRLNHVFRHHBBEBBVHCFVHFVONEVTGERUKQVVAVVWDCCRABAWHJTACWJDRHDUTBUWKTKUAUPIFINVFTVSIKQTLFIWKXBDXBWQCCDEVVFCHBWXCNARMQBHVONNCFINLEQXDMFPQWKWPSCUVECRBVNLALKNXECLLEBPGWUJEEXFVJIQXOKLCACLFPMOTJSLWNUJUKQLOJTEXOLBKELWJXSOXUANMXVMOLRNEOUYCGMKHYGXWYMVCFUECRVJEAXMHMQMFMAYLABZFGLZHAOPEQRJKIEDAQSZIZKFRDUVSZKVUKIGSGIDJMFQFEGCTQSFSJSTGKGUJIFDFVKHHZMZGFRPKJUKLGSTGGQCGXLCLNHVQMMHZFUOJMCUIZNEYPNIGUMWILZONKNYKMFZOWGEVBHXOCPGBLMPPQPHJGTXBSZBEGLNYWXCHKDZQDKWSKOXBTNWDTTWUQEOKPGBJPCPQEFCCOWUXZQELZKDKVDFWDTWYGBFONXPANYIHZEBIGEYQAHEOQCIITZQESRVWHICFTRKDZMZRICKJVLUFODHWJUKQGSRAHAABYVEZRWWVKGPBRSCLQLQEFPDUKEVZATDUMHTCQTSFMKLGOZTAALFFDUZNLSNJJSWSJUMTZLYRPRRRZTPWRKQRGPDQRWPDKPCWJXKOWGSGDCIOSKLMKLTRPTZWCMIHRCAPNUXNGHQQCKPNHLEXPWCUCBKUSLGUJUUJLUZWPZWRLFNIBRAMZXZSWCEGOGFGFFLEZYIPAYYDCBWSEAEMWCZPJIVLIDLAPYMOOKKZAZYNRRKPTKAJGQRLMVFMBNSDXWXMCMQXZNDHUSAWPBGJNSQUCAZYZZDHBMFTUSSVDMXLISFSM";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> W = {"KWRBHSSFBIKGRZQMZJPATQXKZZDIFOCOUPHEPSPVGBKAYXYDFF", "AOPXLARFFEPZGQTWZKIWQBPNOPUYLMNVHDDQNZIOMOEUXJNJSE", "JSPZHBOJMEMESPLUHRLTDEQFXFLAPYCVJPQIKVHFTUXINTHESH", "RKTEVYDHSMMFZEOXVZPOIPDKMJABLBJJZMIDRENSPUJZCSJQML", "PWDYUMFESHDMEHJWHHMOBOMICCESZCFQATUUAQOQHMFROZFFDW", "IQVLLDFZFBMFMQJVPODOYCIISDCUIWGSNJESBCIDJEDPABXSUZ", "HVQDWCJYMTXFXHGWNFNAXMNIRDGRUPWHDBPGDXMQTIHJDCYLXX", "ROYOJLSHUHBIYXCBRVONXPFUONMNKSIZPPZFPETOMUDKSVXLAJ", "KQCQRLOEKIOKIPOGQNVEQDDUKHMYIIGLBRKPKFWZWCRGHOWFLQ", "WQQIFUSUUKLMKYWFPOWAGYHZHSXRRHEQNHQHQYUNBMJRZPOAVP", "CCCSIFMGKZLYXOESWRKGVQKTXAXKLHZFFXRBKKZXWVLWUAVUPL", "OWGCVYWLUCRQVWXIWMVJSVJZUWICIXKHJPONGCRZUVXNIGIBXF", "TUPLDAHBAYEYFUTRNMNJEQIMYGOXQXMLFJCCPGJTJYNCIMUJBZ", "JEVRTZVFZOVPHNABGPIHNCLWZSKHGBHVYDNYTHBOCNLTYDWUCT", "LHUXGINBARASMWKEBBMBQJZJILGPQWGEUMPKXLYQFCLNSYKYZU", "MSULPEWFKWRTWRXAZEZZEMYSZFIDJWWZTBOQQXZTCQNJKIBJYW", "QRVUFXUJLXLIELIYNMMLVOQOPFFMJHYNFSGTATMORZGKGWCOBB", "ADWEPFMYRPDFEONQJBCXSDPGTLNPZNTVGSIKVYOMYKGLACEXAF", "CRACLGUGZURFAWDXCCKUCCNOHJMSLJHCKTGWECVXFIPPUEPFTR", "RWFGVVMXLYPKNHDPBNJEYPMNBWOMKGUXYZVWGQEBVTONRLYXFR"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AACCCCDHIJEJKKLHMOOPPQCQQQRACLGRKRLOEKIOKIPOGQNRORRSIFMGKSPSTETUGULPEUPLDAHBAUVEQDDUKHMVLLDFVQDVRTVUFVWCJWDWEPFMWFGVVMWFKWGCVWQQIFUSUUKLMKWRBHSSFBIKGRWRTWRXAXGINBARASMWKEBBMBQJXLARFFEPXLXUJLXLIELIYDHSMMFYEYFUTRNMNJEQIMYGOXQXMLFJCCPGJTJYIIGLBRKPKFWYMTXFXHGWNFNAXMNIRDGRUPWHDBPGDXMQTIHJDCYLXXYNCIMUJBYNMMLVOQOPFFMJHYNFSGTATMORYOJLSHUHBIYPKNHDPBNJEYPMNBWOMKGUXYRPDFEONQJBCXSDPGTLNPYUMFESHDMEHJWHHMOBOMICCESYWFPOWAGYHYWLUCRQVWXIWMVJSVJYXCBRVONXPFUONMNKSIYZCFQATUUAQOQHMFROZEOXVZEZFBMFMQJVPODOYCIISDCUIWGSNJESBCIDJEDPABXSUZFFDWZGKGWCOBBZGQTWZHBOJMEMESPLUHRLTDEQFXFLAPYCVJPQIKVHFTUXINTHESHZHSXRRHEQNHQHQYUNBMJRZJILGPQWGEUMPKXLYQFCLNSYKYZKIWQBPNOPUYLMNVHDDQNZIOMOEUXJNJSEZLYXOESWRKGVQKTXAXKLHZFFXRBKKZNTVGSIKVYOMYKGLACEXAFZPOAVPZPOIPDKMJABLBJJZMIDRENSPUJZCSJQMLZPPZFPETOMUDKSVXLAJZQMZJPATQXKZURFAWDXCCKUCCNOHJMSLJHCKTGWECVXFIPPUEPFTRZUWICIXKHJPONGCRZUVXNIGIBXFZUZVFZOVPHNABGPIHNCLWZSKHGBHVYDNYTHBOCNLTYDWUCTZVWGQEBVTONRLYXFRZWCRGHOWFLQZXWVLWUAVUPLZZDIFOCOUPHEPSPVGBKAYXYDFFZZEMYSZFIDJWWZTBOQQXZTCQNJKIBJYWZZ";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> W = {"QYAGJIPUFZJLLCTSSYINGRHLRQZHXTVLIASWEPIXXLUPIRNRXA", "QJIJRWUNPENJPOSEMBNNUMGHHPAWSTVCYOTGLRCKFIDOLIKZCY", "BQVNLNKQMIFBURAHMVIVAZUMNSOTCBGFLBERDXOBGAUQJFMTVO", "ICCCARVPUIEPOVHWGANHMVBKTRDFNPDWGMVJZKWFCFXGVGAMHU", "GLEUCBRPJEAUSVUIKOEUTYYHRKODPQXAEWWXBMETRKTTRBEIZP", "GUZSKDMRNLARELZUSUHUXBRTKFPYFXMFPHRVDCCJQXSMFFQSLQ", "TACEBTXSYDDVNERIJFDNOAEGALISCXUTTQXMRWLJBEGCMNRYNS", "EVQPIRITDRZZRSSRRUHPNFIYOELRZHKXTNYNNRTQLGKGAIHTEQ", "EYNTWSWBGOZCVEFDKKLGHXCOOGXZEWOOTSDMSGLMVOPIISRWHP", "IFDMREFVJETYKKHXPBQCZUUWYMEQVIWYESGKIRAGEJDXEHEOBR", "LYOFCUFZGPPZCTRDWELSKMCPRPWVKFQMWYSMATUKKQTUFMRPSK", "HAZVCCUOLMMOJBJKIFFTPQZLZYPBKPONWIXOWHOGNURUOQDCVK", "HDGJEZMFNFVTHNXENDLVLDNEEDTBPPBQZLEEPDGNACTXITIRQE", "NYXIHRXABVFNWAVJXFWFHVBJSEOJRMHBOBJDJCCKQXFEGAAZRY", "IALDIFAWJARMPJLUHQEQDFKRCSYTJIDMOCFUVMQMBXUCQAWSDL", "UPCJIBRJWBCAUUPXJXAQMDUFYJONUPTGLDVCGQFHWQCIEMSGXH", "DDAKSRSCMEPSIYSTMOHMFYJJNPPUXVANABHMTNYCPKRYISAJTP", "NMNKUBKHCXWJZUQMTUUKKRHJFIPEXOGZEFTUTZMSXVIWGDWKOX", "CKBIVDXFJLXRSNXAMKECLWWLYBVOZWPBWEPLQUIKDZKLCNUOXI", "NWWTBGKURUNCAPAUDCYAMAEOUZLLZYIKOVAHVFVTCQNSEUMDXS"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BCDDAEEGGHAHDGIAICCCAIFDJEKBIKLDIFALELMNMNKNNQJIJQQREFRRSRSCMEPSITACEBTUBKHCUCBRPJEAUPCJIBRJUSUVDVJETVNLNKQMIFBURAHMVIVAVPUIEPOVHVQPIRITDRVUIKOEUTWBCAUUPWGANHMVBKTRDFNPDWGMVJWJARMPJLUHQEQDFKRCSWUNPENJPOSEMBNNUMGHHPAWSTVCWWTBGKURUNCAPAUDCXFJLXJXAQMDUFXRSNXAMKECLWWLXSXWJYAGJIPUFYAMAEOUYBVOYDDVNERIJFDNOAEGALISCXUTTQXMRWLJBEGCMNRYJONUPTGLDVCGQFHWQCIEMSGXHYKKHXPBQCYNSYNTWSWBGOYOFCUFYOTGLRCKFIDOLIKYSTMOHMFYJJNPPUXVANABHMTNYCPKRYISAJTPYTJIDMOCFUVMQMBXUCQAWSDLYXIHRXABVFNWAVJXFWFHVBJSEOJRMHBOBJDJCCKQXFEGAAYYHRKODPQXAEWWXBMETRKTTRBEIZCVEFDKKLGHXCOOGXZCYZEWOOTSDMSGLMVOPIISRWHPZGPPZCTRDWELSKMCPRPWVKFQMWYSMATUKKQTUFMRPSKZJLLCTSSYINGRHLRQZHXTVLIASWEPIXXLUPIRNRXAZKWFCFXGVGAMHUZLLZMFNFVTHNXENDLVLDNEEDTBPPBQZLEEPDGNACTXITIRQEZPZRYZSKDMRNLARELZUMNSOTCBGFLBERDXOBGAUQJFMTVOZUQMTUUKKRHJFIPEXOGZEFTUTZMSXVIWGDWKOXZUSUHUXBRTKFPYFXMFPHRVDCCJQXSMFFQSLQZUUWYMEQVIWYESGKIRAGEJDXEHEOBRZVCCUOLMMOJBJKIFFTPQZLZWPBWEPLQUIKDZKLCNUOXIZYIKOVAHVFVTCQNSEUMDXSZYPBKPONWIXOWHOGNURUOQDCVKZZRSSRRUHPNFIYOELRZHKXTNYNNRTQLGKGAIHTEQ";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> W = {"OWLZZYGKTVTPASXQVSDXOSWHLYBLPEFKLGICMVDZDTUDOKQJPH", "FLJZKIUAFZOTCUJDLMXXLYVBWZYKDZZKFWRRCQRANHCTCJQTUA", "XUSOBBWNDFARZRVAFFWIOWROCACVLJVPRDTYDFTABHNGVKSILL", "FJIPTLOJEFTTJWNMALWEPADTBPHDEUDSJGJHYGMMAPLEDMCTVG", "GWOVGBLAYMRICCYVAHNKPEPKUGLPZCLEDGOZEOZMGXIPLFHXAK", "QPMEVXAWFEMBUUYRPROIZZMZESBBZVHCHLXLCXNIPNIAOUMVBX", "LIWSLAFLRGGEAVEREYXLETQTCVOLVCQXDMOLUXHWVTCJUSNAKZ", "EVIJBYEVRDWVDVVLZJXZFIJIRLTAVKZDXCPNEHXJQCZORYCBML", "WQLREGCHYPNWXQNTSMVHQVSRNGRXCPZPFEHQTQLBEIZCQQNXGN", "EQBMOFTDDBOVQOMPJEYYAQLPVRXGHCZJWVGYTGBUZVOPUIHDUU", "SYIJPWPJNBLAOARIYLOUWPAJPHXURTTFGQZFTVCVFKFXRNTWEF", "WWDMBTSTUCVXQSUMOZAYTYLITDTSHZTSFQHTVSBYDDUVBEPAHS", "FTWLRXCNDXLCANXVIHVCKNGWCZGHYIGHUIJRSTZNXGEWDYIZKQ", "KQQOQYFVAYBHMPYOUEBPIYEREXMEZCWXJRXYNCSBVZHDHPEJOR", "EPZKZGPVYGDSFAJAPHXMIVRWESEPYGBUYBBPCVQDOUMXLALUID", "VNAJDKDGLQNEXDEDICAKRXEOMKLRXZPIWTXLCMJVQNRDRZSBAK", "EVRGHKRQGRXSOSHVPYKUYPGJTBULVXCPIJIVKAQEKTXTMTBTWE", "JEVQLBEPUWAFRVZKSNZXFOICOJWOJUTYANSZNMGMFVVQYJXEIR", "WPCBFWYURDUDBXPVQQLRVCKUFQDNBZOQAYYIVMNJJFFOKLYZGG", "KQYCFZQVOWUJZFWJKUCYMJQVDVBUDUQMQCSCCDNXDNSOXFBSQE"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "EEEEFFFGJEJIKKLILJOPPQBMOFQPMEQQOQQSTDDBOTLOJEFTTJTVIJBVNAJDKDGLQNEVQLBEPUVQOMPJEVRGHKRQGRVWAFRVWLRWLWNMALWEPADTBPHDEUDSJGJHWOVGBLAWPCBFWQLREGCHWSLAFLRGGEAVEREWWDMBTSTUCVWXAWFEMBUUXCNDXDEDICAKRXEOMKLRXLCANXQSUMOXSOSHVPXUSOBBWNDFARXVIHVCKNGWCXYCFYEVRDWVDVVLYFVAYBHMPYGMMAPLEDMCTVGYIJPWPJNBLAOARIYKUYLOUWPAJPHXURTTFGQYMRICCYOUEBPIYEREXMEYPGJTBULVXCPIJIVKAQEKTXTMTBTWEYPNWXQNTSMVHQVSRNGRXCPYRPROIYURDUDBXPVQQLRVCKUFQDNBYVAHNKPEPKUGLPYXLETQTCVOLVCQXDMOLUXHWVTCJUSNAKYYAQLPVRXGHCZAYTYLITDTSHZCLEDGOZCWXJRXYNCSBVZEOZFTVCVFKFXRNTWEFZGHYIGHUIJRSTZHDHPEJORZJWVGYTGBUZJXZFIJIRLTAVKZDXCPNEHXJQCZKIUAFZKSNZKZGPVYGDSFAJAPHXMIVRWESEPYGBUYBBPCVQDOUMXLALUIDZMGXIPLFHXAKZNXGEWDYIZKQZOQAYYIVMNJJFFOKLYZGGZORYCBMLZOTCUJDLMXXLYVBWZPFEHQTQLBEIZCQQNXGNZPIWTXLCMJVQNRDRZQVOWUJZFWJKUCYMJQVDVBUDUQMQCSCCDNXDNSOXFBSQEZRVAFFWIOWROCACVLJVPRDTYDFTABHNGVKSILLZSBAKZTSFQHTVSBYDDUVBEPAHSZVOPUIHDUUZXFOICOJWOJUTYANSZNMGMFVVQYJXEIRZYKDZZKFWRRCQRANHCTCJQTUAZZMZESBBZVHCHLXLCXNIPNIAOUMVBXZZYGKTVTPASXQVSDXOSWHLYBLPEFKLGICMVDZDTUDOKQJPHZ";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> W = {"DAGZSXARZZNFNWLWOSLOHMQFISCWKSKSNYNGDLUYAMTXYAFLZU", "VZAMLDMAHZDSLNLUNUXPNJGWRXZTMURGFNPLGUTMOJOSBFUKDS", "SRGZGZDGTOVCEOMCIPNDAYDFOJCDCKNTSMOHJANMZPPUHOXUWC", "YMNSWKCHMZHQBMZULSWZCALZYFFZHKELMENWWPLLEEYQJKUKHX", "ECOWYKKNTPXUHIWQXQODVHPVINAWOUOJNHRYOGHDBBODDFBHHK", "GTQLHERTNLWZNNZROXWFYRZETSUCZKQIEPMZORAKQGUZOJPMGE", "FFHJNKWVQJAMNTEUZLCLWETAQVBIUBTNNOWWRFPYPGZEYBPOVV", "ISPLUHNTXXMRFKXEHXNKLBNVVEONWXJHOPMWGWCSKHWWNMFPUO", "MOISJXFNPOHSYMSVOQIKEGXTPMBPASWQHFYKGKWHEYAEPKFZBV", "KUJQYODJVUVPCPJWSLXEBJWBFPIJGWUWMVNQBLXRLSNCPUCPNS", "KRJHLQGOOHLVHBMMKCPMAMSWGXDVJGJHNBDIDYUDHCMLTUOIAK", "ZCEWLZIMAZCLGGJKGDDBKJZIVVBHDVPSTEIGSQIDVTIIASTUOC", "TEQWKDZBBGYGEROXLODKDOCEILHWCFLGRPOZPJRGADPLQQRYLW", "QZASHVSOQYWJHLRUNTQVYZUHIGSPZGKIIGPNJOFVOMQXPOERFJ", "RFXTKSGOGNSYPQRBVXKIBZPHLRJNXACQNOGZHRNIDIDTLYREHZ", "DLTARZNJPFQZBWPZPGWXROMWKWFMXKRKOQMIVBBBCTDYUOBAAJ", "PMTODJRDHBGSXNPRSFPYFJBMGSYVCBVUGUXNIHNNCDOAAVJJMP", "DXNROFSVNQDZHIBFOXGUAZZBDGRKKHNCMNGNXUJCHEKRTNQRUX", "MZQWISAXOGYZDGKLQGRCHKTEKJCSRFFBWWXHGQDRAMACXYBALQ", "MCLKPHHOWXVRKVJEUBTHYLKQMIKYSKBZQTWFDAAALMDQFTWYSR"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "DADDECFFGGHIJKKLMCLKMMNKOIOPHHOPMQRFRJHLQGOOHLSJSPLSRGTARTEQTODJRDHBGSTQLHERTNLUHNTUJQVHBMMKCPMAMSVWGWKDWVQJAMNTEUWWWXDVJGJHNBDIDXFNPOHSXNPRSFPXNROFSVNQDXTKSGOGNSXVRKVJEUBTHXXMRFKXEHXNKLBNVVEONWXJHOPMWGWCSKHWWNMFPUOYFJBMGSYKKNTPXUHIWQXQODVHPVINAWOUOJNHRYLKQMIKYMNSWKCHMYMSVOQIKEGXTPMBPASWQHFYKGKWHEYAEPKFYODJVUVPCPJWSLXEBJWBFPIJGWUWMVNQBLXRLSNCPUCPNSYOGHDBBODDFBHHKYPQRBVXKIBYSKBYUDHCMLTUOIAKYVCBVUGUXNIHNNCDOAAVJJMPZAMLDMAHZASHVSOQYWJHLRUNTQVYZBBGYGEROXLODKDOCEILHWCFLGRPOZBVZCEWLZDSLNLUNUXPNJGWRXZGZDGTOVCEOMCIPNDAYDFOJCDCKNTSMOHJANMZHIBFOXGUAZHQBMZIMAZCLGGJKGDDBKJZIVVBHDVPSTEIGSQIDVTIIASTUOCZLCLWETAQVBIUBTNNOWWRFPYPGZEYBPOVVZNJPFQZBWPZNNZPGWXROMWKWFMXKRKOQMIVBBBCTDYUOBAAJZPHLRJNXACQNOGZHRNIDIDTLYREHZPJRGADPLQQRYLWZPPUHOXUWCZQTWFDAAALMDQFTWYSRZQWISAXOGYZDGKLQGRCHKTEKJCSRFFBWWXHGQDRAMACXYBALQZROXWFYRZETSUCZKQIEPMZORAKQGUZOJPMGEZSXARZTMURGFNPLGUTMOJOSBFUKDSZUHIGSPZGKIIGPNJOFVOMQXPOERFJZULSWZCALZYFFZHKELMENWWPLLEEYQJKUKHXZZBDGRKKHNCMNGNXUJCHEKRTNQRUXZZNFNWLWOSLOHMQFISCWKSKSNYNGDLUYAMTXYAFLZUZ";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> W = {"SVFIVBECWUDQZPHLMFWUSFWDGYIZHKNLTSZRFATWPMJZOMYSTB", "RFRFKLEEUYXGDGNRNTKJYVWMKYZOQGAIQUCSAGRAPNJQFUPSBH", "LIZWAUCOORTZJCLOGSSUKBVHXWHNHXBITSKGYCICPBDMKMIURG", "YDEVJOWBVUQMHKTRZSBAEJLOALZMNRJWAWQNPXNBEOFLIGNOKY", "FWQKRZBNLMTGYVOEGJCNOYSHTAWOOXFJWNZUZAUCHSLCYCSKCE", "VBHEHPELZGZZEVZNUJKVRKDGPSTBYFIIZUTTCNYEWHOEGGHSVU", "XAREPHTDZAFTGHGWHLXLIVUMLCQDKOEYEBFLJJLZGHWIMLBGGE", "KSDTNXVKFXVXDIQUDBYRAZGCDZKCHEJGEXZKDIFGBVVTQHQPHS", "KUFGJKMCMGODIHMVJDFCCPFCOOMJWJKNRAIHNZYCGFGVNNKTGL", "VBYXZMIRUJCQOOMZXHEKPENYMTBNKQMMPOBTFLAAYXTGZIKFAO", "PTHFUXGKZRTFCSNYHDAIIZWYPJPSNYDRHXXMYKMCTXTOPQASCX", "GBAKMOQTTHVRNKFCPYLDHAMXWKZWHPEBLHOXNSCOQCTVLULWRS", "YAMQXVGHNFSEBZPDTQUZIUMMYYTBTUUMVBEXMIWMOHXIPADARN", "PUWVHWFZNGYGGLMCMTKBUXIVULUTYDXGWUVRDKVUMUJBSCTJLN", "CKCYFRUKFEISWRDFAZFHIXGUESMAFBEGSYSNWDLBNMHIDNLSQZ", "CCAKJLEDAOCQALCPIXIBZEHFRZKEGRTPPUMGIRUTBRSEAFDHRE", "GKTONFZLBGUPRRBSZHVJEXTMQLUDYMGFIMOUVYYJEDQONLLHEC", "XQVEXDFVEDUSIHGOYWGWQSRTPNWHKIHPMBGVXTRAYWETHAWRXA", "LCXFKIVRFLHZAFKFPUBOTQDQQKPEBFCBTGRPJUOCMGJDBCCVTO", "GGHSTJKRLDIODBMBASQALRGKESGAIWFRSSMJQITHFJCAEVKORQ"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "CCACFGBAGGGHKCKJKKKKLCLEDALIMOCOPPQALCPIQRFRFKLEESDSSTHFTJKRLDIODBMBASQALRGKESGAITNTONFTTHUFGJKMCMGODIHMUUUVBHEHPELVBVFIVBECVJDFCCPFCOOMJVRNKFCPWFRSSMJQITHFJCAEVKORQWJKNRAIHNWQKRWUDQWVHWFXAREPHTDXFKIVRFLHXGKXIBXQVEXDFVEDUSIHGOXVKFXVXDIQUDBYAMQXVGHNFSEBYDEVJOWBVUQMHKTRYFRUKFEISWRDFAYLDHAMXWKYRAYWGWQSRTPNWHKIHPMBGVXTRAYWETHAWRXAYXGDGNRNTKJYVWMKYXYZAFKFPUBOTQDQQKPEBFCBTGRPJUOCMGJDBCCVTOZAFTGHGWHLXLIVUMLCQDKOEYEBFLJJLZBNLMTGYVOEGJCNOYSHTAWOOXFJWNZEHFRZFHIXGUESMAFBEGSYSNWDLBNMHIDNLSQZGCDZGHWIMLBGGEZGZKCHEJGEXZKDIFGBVVTQHQPHSZKEGRTPPUMGIRUTBRSEAFDHREZLBGUPRRBSZHVJEXTMQLUDYMGFIMOUVYYJEDQONLLHECZMIRUJCQOOMZNGYGGLMCMTKBUXIVULUTYDXGWUVRDKVUMUJBSCTJLNZOQGAIQUCSAGRAPNJQFUPSBHZPDTQUZIUMMYYTBTUUMVBEXMIWMOHXIPADARNZPHLMFWUSFWDGYIZHKNLTSZRFATWPMJZOMYSTBZRTFCSNYHDAIIZSBAEJLOALZMNRJWAWQNPXNBEOFLIGNOKYZUZAUCHSLCYCSKCEZWAUCOORTZJCLOGSSUKBVHXWHNHXBITSKGYCICPBDMKMIURGZWHPEBLHOXNSCOQCTVLULWRSZWYPJPSNYDRHXXMYKMCTXTOPQASCXZXHEKPENYMTBNKQMMPOBTFLAAYXTGZIKFAOZYCGFGVNNKTGLZZEVZNUJKVRKDGPSTBYFIIZUTTCNYEWHOEGGHSVUZ";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> W = {"ZKAYKZCTLJAVVXLDDRROGPFBCPHGFPFMVDTYEPOIONJDVAONCZ", "FELFAUCNVPXVIAHZIRWWEUZVOKMCPAYPIPRDOFQKLDYNCBERAG", "TKWSSXJDRNMXEFGTNWMIIDRHCUYGEGVSCLJQEAUSZHICBZWBPH", "YEUMZCZLGVFADQOVFBCKTLGKFWJIIIGIUYLZDCVSYCSGKFBSIJ", "NAUUWUSXMOQBASJJESSARQNWOQSDZHRFVQILTKXBFAMLSPJCAD", "KWAPFNDJQZQOBTWDUBMKMAFKBDFBQJHOZGPRPGCZZNRJSSHFUB", "RAQAAZWCXEBDTLOVOEVGWZQNCIGZZRYWASRQJHBLLGRMRJEITC", "ZTRGPCPNTURFKKDIGDBGQNYZYWEQNXZJSNKNOFOWRBVYFCBXXO", "EBFGIRSSGDBYTFIMINKKKRPNXSCRMMERZTPBBOPHSFRMGPHCFQ", "RHVFWWDYRAIVAVVQRZFXJKNGTJQXUWUZTRVQGXFNMQJPFHYZVN", "DWTENWHYDSVXWCJWOEZTLSZNYKHWMYBWPQKNTTXOHDSPTACTTZ", "GJPYOOUEMFADXHJKYFAVKAQOITRHGKFVXGXNWVYNVIZQPJOENJ", "SRHTCTODRWOXYMIDNMELMPLWKZEOOCPXKLYIXIUVYFLJFIUJKJ", "QOMYGPIWBLGFVYKBZYHBSHPPOZRBHBBMSHBSWATLWGJUONBPIJ", "WVXYLAVZWSWRTPJHYKIBVIDVTPQPQFCCXYAKGBTPHNDSQARLPQ", "GNPIRRNNPXVPLRJYQYYQEGSDYUKVCOVGCLEXYLGUDPRXHWFJSG", "IISYSDKXQELOTWHFYUWUBIPCVJZUJTSZZPSUCRPRPTEADEHLUO", "KTURPYHTAKNESQZPCHSZDEOSORWKYKBBCUZPHUVYOIIUKQJUQQ", "DEPPVIXMTGNEHDJAFZMYNOZMLJZOWYJCWZVJARJZGFLSXRHAZV", "GTZUGRPFSZEUTIDGPLXHTQQUGXCIUQGOUQBPHHSLRWUGQRWIET"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "DDEBEFEFGGGGIIIJKKLFANANPIPPPQOMRAQAARHRRNNPRSRHSSGDBSTCTKTODRTTUCNURPUUVFVIVPWAPFNDJQWOWSSWTENWHWUSWVWWDXJDRNMXEFGTNWMIIDRHCUXMOQBASJJESSARQNWOQSDXMTGNEHDJAFXVIAHXVPLRJXXYDSVXWCJWOEYEUMYGEGVSCLJQEAUSYGPIWBLGFVYHTAKNESQYKBYLAVYMIDNMELMPLWKYOOUEMFADXHJKYFAVKAQOITRHGKFVXGXNWVYNVIYQYRAIVAVVQRYSDKXQELOTWHFYTFIMINKKKRPNXSCRMMERYUWUBIPCVJYYQEGSDYUKVCOVGCLEXYLGUDPRXHWFJSGZCZEOOCPXKLYIXIUVYFLJFIUJKJZFXJKNGTJQXUWUZHICBZHRFVQILTKXBFAMLSPJCADZIRWWEUZKAYKZCTLJAVVXLDDRROGPFBCPHGFPFMVDTYEPOIONJDVAONCZLGVFADQOVFBCKTLGKFWJIIIGIUYLZDCVSYCSGKFBSIJZMYNOZMLJZOWYJCWZPCHSZDEOSORWKYKBBCUZPHUVYOIIUKQJUQQZQOBTWDUBMKMAFKBDFBQJHOZGPRPGCZQPJOENJZTLSZNYKHWMYBWPQKNTTXOHDSPTACTTZTPBBOPHSFRMGPHCFQZTRGPCPNTURFKKDIGDBGQNYZTRVQGXFNMQJPFHYZUGRPFSZEUTIDGPLXHTQQUGXCIUQGOUQBPHHSLRWUGQRWIETZUJTSZVJARJZGFLSXRHAZVNZVOKMCPAYPIPRDOFQKLDYNCBERAGZVZWBPHZWCXEBDTLOVOEVGWZQNCIGZWSWRTPJHYKIBVIDVTPQPQFCCXYAKGBTPHNDSQARLPQZYHBSHPPOZRBHBBMSHBSWATLWGJUONBPIJZYWEQNXZJSNKNOFOWRBVYFCBXXOZZNRJSSHFUBZZPSUCRPRPTEADEHLUOZZRYWASRQJHBLLGRMRJEITCZZ";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> W = {"YETZSXUEIADIEOLLDRQNPHQHITFHQNYYZERGIHDUEAMXBWAHHQ", "RWNTMPBFIFANITQFSWKCRQSCXAVAXCHDTHQJFYGHGSHQYXPBBT", "NAPLHEBZSCKFRINBOTXOVTLHKKSHOHCKWLOMGYYISXPQBUNXWB", "KGLHRRPTBSYPXFSUGJRYAILQEKTJXODVPBTYNLENDVCTAEIXFR", "HECZDXLACGBOXMFHJGJKEPVYDTRBGDHVUTYMWLQXBDGQYUSIPG", "PXEBPABJPOMKDEJFDKFKEAQWEUYUQHXUKXWILOSVFIZHOPZRRA", "PWWHWJHPDYHATVTOPFYPLVFMSGKFNAYZPFAJKVALGNAABBKVAI", "CKDNLTPNHRPMDBPDOGYSSSEWKQBMTRNLPEDYTBRUXFNHOPZQRL", "PLLVHFZTDAMNDVGOHMWVPXJWRZMDUINKHXZGFDDMJHDKFJJOBA", "VEJFGIVINEBDCQXINICOQOFENNVBWFRJYXZUHKNNBKEIBUKGVN", "TQHUPVLRKCGPDHTFEGUQGGNAGBQTOVFYKOESLLHGZIJATUAUHG", "HONHPDINZQMNHDXSXFSCZBQXUNRRNVTKUANXNTFFVVZCWCNGJX", "ZZBPVPZNBVVCXIXDKOCTXWYBBQDTLECOFSILJEAFLIPIVUDFCE", "DNQFLPZGCKPOLDITFGHSMKUBZBXJAACZBUDASYBMBYFBWFAASR", "MXTMFQTSIFOKBWSKXGBTQKYBYPNEOYTLICEFBNOQTKVEUTACBW", "HZROWISLJQRPECJNJFCAUAJTYZFCNXLOABMYRXBFMWXKSZLVEZ", "SDPZWOWAYMFGWXWCUSPFJCHWLEDKIHSFCMUNMPHUZFDIMBOXFC", "ZMFGCRMBJYGJBXPRDDRUZPUVFAGYRSOFQOQDDKEXRRTHDDCFXX", "NDEXVOHFXIUCKFCKOFXWMMUEHWXIPAUXYEDPYGNRTCPKQDJQJX", "OGNOOIMVNAAVOEJXQXDUOHPOWPUMMBTXSVHWPXGQBCDXAXBLLK"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "CDHECHHKDKGLHMNANDENLNOGNONHOOIMPDINPLHEBPLLPPQFLPRRPRSDPTBSTPNHRPMDBPDOGTQHUPVEJFGIVHFVINEBDCQVLRKCGPDHTFEGUQGGNAGBQTOVFVNAAVOEJWNTMPBFIFANITQFSWKCRQSCWWHWJHPDXAVAXCHDTHQJFXEBPABJPOMKDEJFDKFKEAQWEUXINICOQOFENNVBWFRJXQXDUOHPOWPUMMBTXSVHWPXGQBCDXAXBLLKXTMFQTSIFOKBWSKXGBTQKXVOHFXIUCKFCKOFXWMMUEHWXIPAUXYBYEDPYETYGHGSHQYGNRTCPKQDJQJXYHATVTOPFYKOESLLHGYPLVFMSGKFNAYPNEOYPXFSUGJRYAILQEKTJXODVPBTYNLENDVCTAEIXFRYSSSEWKQBMTRNLPEDYTBRUXFNHOPYTLICEFBNOQTKVEUTACBWYUQHXUKXWILOSVFIYXPBBTYXYZDXLACGBOXMFHJGJKEPVYDTRBGDHVUTYMWLQXBDGQYUSIPGZGCKPOLDITFGHSMKUBZBXJAACZBUDASYBMBYFBWFAASRZHOPZIJATUAUHGZMFGCRMBJYGJBXPRDDRUZPFAJKVALGNAABBKVAIZPUVFAGYRSOFQOQDDKEXRRTHDDCFXXZQMNHDXSXFSCZBQXUNRRNVTKUANXNTFFVVZCWCNGJXZQRLZROWISLJQRPECJNJFCAUAJTYZFCNXLOABMYRXBFMWXKSZLVEZRRAZSCKFRINBOTXOVTLHKKSHOHCKWLOMGYYISXPQBUNXWBZSXUEIADIEOLLDRQNPHQHITFHQNYYZERGIHDUEAMXBWAHHQZTDAMNDVGOHMWVPXJWRZMDUINKHXZGFDDMJHDKFJJOBAZUHKNNBKEIBUKGVNZWOWAYMFGWXWCUSPFJCHWLEDKIHSFCMUNMPHUZFDIMBOXFCZZBPVPZNBVVCXIXDKOCTXWYBBQDTLECOFSILJEAFLIPIVUDFCEZ";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> W = {"ABBBAAAAAAABABBABBAABBABABABBBBBAAAABABBBBBAABAAAB", "BBBBBABBBBBBBAABAAAAAABAAABAAAABABABABBAAAAABBABBB", "BABAABAAABBBBBAAABBBBABBAAABAAABAAAAABBAABBABBBBAB", "AAABABAAAABABAAABBBBBBBAAAABBAABABBBBBBABBABABAABB", "BAAAABAAABBBBBABAAAABBABAAAAAABBABBABAABBBBAABABBA", "BBABABABBAAABBAABABBBBBABBBBAABAAABBBAABAAAABBBAAB", "BABBBAABBAAABAAABBBBAABBBBAAABAABBAAABAAAABABBAABB", "ABBBAABBABABBAAABBBBABBABAAABBAAAAAAAAABBAAABAABAB", "AAABBBABBBBAAABBBBBABAABAABAAABBBAAAABBBAAAABABABB", "ABBABBABABBABABBBABABBAABAAAABBBBAABBABBAAABABBBBB", "BBAAAABAABABBBABBAABAABABBABAAABABAAAABBBBBBBAABAA", "AABBAAAAAABBBBBAAABBABAAAAAABBABABBABBBABBAABBBBAA", "ABBBABABBBBAAAAABBAAABBBBABAAAABBABBBBBABBABABABBA", "ABBBABBABAABABAABAAABBBABABABBABBBBBAABBBBAABBABAB", "ABBABABAABBBBAABBBBBBABABBAAABAABABABBABAAAAABBAAB", "ABBBBAAAABBABABABAABAABBBAABABAAAAABABBBABBBBBBBAB", "BAABBBAAABABAABBABABBBBAAABAABAABBABBAABABBBABBBBB", "BBBAABAABBBABBAAABABAABAAAABBBBABBBBABBABBBBAAABBB", "ABBABABBABBABABAABABBAABAABABABAAABBBBAABBBBABBBAA", "ABAABAABBBBBAABABAABAABBABAABBAAABABABABAAABBABBAB"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAABAAAABAAABAABAABAABABAAAABABAAABABAABAAABABBAAAAAABBAAAABAABABBABABAABBABABABBAAABBAABABBABABBABBABABAABABBAABAABABABAAABBABBABABBABABBBAAAAAAABABBABBAABBABABABBBAAABABAABBABABBBAABAABBBAABBAAABAAABBBAABBABABBAAABBBABABBAABAAAABBBABABBBABBAAABABAABAAAABBBABBAABAABABBABAAABABAAAABBBABBABAABABAABAAABBBABABABBABBBABBBBAAAAABBAAABBBBAAAABBABABABAABAABBBAABABAAAAABABBBABBBBAAABAABAABBABBAABABBBABBBBAAABBBBAABBABBAAABABBBBAABBBBAAABAABBAAABAAAABABBAABBBBAABBBBAABBBBABAAAABBABBBBABBABAAABBAAAAAAAAABBAAABAABABBBBABBBAABBBBABBBBABBABBBBAAABBBBBAAAABABBBBBAAABBABAAAAAABBABABBABBBABBAABBBBAABBBBBAAABBBBABBAAABAAABAAAAABBAABBABBBBABBBBBAABAAABBBBBAABABAABAABBABAABBAAABABABABAAABBABBABBBBBAABBBBAABBABABBBBBABAAAABBABAAAAAABBABBABAABBBBAABABBABBBBBABAABAABAAABBBAAAABBBAAAABABABBBBBABBABABABBABBBBBABBBBAABAAABBBAABAAAABBBAABBBBBABBBBBBABABBAAABAABABABBABAAAAABBAABBBBBBBAAAABBAABABBBBBBABBABABAABBBBBBBAABAAAAAABAAABAAAABABABABBAAAAABBABBBBBBBAABAABBBBBBBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> W = {"ABBAAAABBBABBABBBABABAAABBBABBABABBBBABABBBABBBBBB", "BABAAABBABABBAAAAABBAABAABABAAABAABBABBAAAABABBBBA", "ABAABBBABBBAAAABABAABABABBBBAABABABBBABABBBAAABBAA", "BAABBAAAAABBAABBBAABABBBAABBAAAABBABBBAAABBAABABAA", "BAABABBABBAAAAAABAAAABAABBBBAAAAABBBABBBBABBBABABA", "ABBBBABAAAABABBBAABBBAAABAAABABBBBBBBBABABBABBBBAA", "ABBBAAABBAABBABBABAABBBBABBBABBBABAAAABBBAAABBBABB", "AAAABAAAAAAABAAAAAABAABABAAAABBABABAAABBBBBAABAABB", "BABABABBBBABAAABBBBABBABABBBABAAABBAAAAAAABBBBBABB", "AABABBABBBABBABABBBAABABBBBBAAAABBABBABAAAAAAABABB", "ABBBAABAAABBBABABBABABABAAABBABAABBAAAAABBBAABBAAA", "ABAABBABBABAABBAAABABBBBAABABABBAABAABAABABBAAAABB", "BABAAAAABBBBABBBAABBABBBABBAABBABBBABBABBAAABBBBBA", "AABABABABABAABABAABABABBABAAABBAABABAABABBAAAAAABB", "ABBAAABBAAAABABBAAAABBAABBABAABBAAABBBBAAABBBAABBB", "BBBBAABAABABAAABBAAABBBAABAABABAAABABABBAABAAABAAA", "AABABAAAAAABBBBAABBABABAABBABBBABBBBAABBABABAAAABA", "BBABBBABABBBABAABABABBBBBBAAABABAABAAABBAAAAAAABBA", "BABBBAABABABAABAABBBBBBABAAABBABBABABABABBABABBABA", "ABABBBABAAAABAAABBABABBAAAAABBAAAAABABBBABABBAABAB"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAABAAAAAAABAAAAAABAABAABAABAABAABABAAAAAABABAAAAABABAAAABABAAABABABABABAABABAABABABABABABABABABABBAAAAABBAAAABBAAABBAAAABABBAAAABBAABBAABBABAAABBAABABAABABBAAAAAABBABAABBAAABBABABAAABBABABBAAAAABBAABAABABAAABAABBABBAAAAAABAAAABAABBABBAAAABABBABBABAABBAAABABBABBABBBAAABBAABBABBABAABBBAABAAABBBAABABABAABAABBBAABABBBAABBAAAABBABBBAAABBAABABAABBBABAAAABAAABBABABBAAAAABBAAAAABABBBABABBAABABBBABABBABABABAAABBABAABBAAAAABBBAABBAAABBBABABBBABAABABABBBABBABABBBAABABBBABBABBBABABAAABBBABBABABBBABBBAAAABABAABABABBBBAAAAABBBABBBBAAABBBAABBBBAABAABABAAABBAAABBBAABAABABAAABABABBAABAAABAAABBBBAABABABBAABAABAABABBAAAABBBBAABABABBBABABBBAAABBAABBBBAABBABABAABBABBBABBBBAABBABABAAAABABBBBABAAAABABBBAABBBAAABAAABABBBBABAAABBBBABABBBABBBBABBABABBBABAAABBAAAAAAABBBBABBBAABBABBBABBAABBABBBABBABBAAABBBBABBBABABABBBBABBBABBBABAAAABBBAAABBBABBBBABBBBBAAAABBABBABAAAAAAABABBBBBAABAABBBBBABBBBBABBBBBBAAABABAABAAABBAAAAAAABBABBBBBBABAAABBABBABABABABBABABBABABBBBBBBBABABBABBBBAABBBBBBBBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> W = {"ABABBAABBBAAABBBBBBBAAABBAABBBABAABBABABABBBBABBBA", "ABBABBBAABAABABBBAABBBBBBBBABBAABAAAAAABABAAAABABB", "ABAABBAABBBAABBBABBBBAAABBAABAAABBBABAABABBBAABBAB", "ABABAAABBBBABABBAABABAABABBBBBBBBBBABBAABAAABAABBB", "BBAABAAABBBBBBAABBBABBAABABBBBBAABAAAABBBBAAABAABA", "BBBAAAABAABBBABABABAABABAABBAABABBBBABAABABBBABBBB", "AAABAABABAAABABBABBBABBAABBBAAABBABAAABABAABAAAABA", "BBABABABBBAABBBABBAABBBABBABABBAAAAAAABAABBABBBAAB", "BAAABBBABBBAABBBBABBAAABBAAABAAAAAAABBAABAAAAAABAB", "ABAABAAAABBABBBABABABABAABABBBABBBBBAAAABBBBBABABA", "BAAABBBBBABAAAAAAAAABABBABAABABBBBABABBBBAABAAABAA", "BBBBBBAAABBABABBBABBABBBABABABBBBBBAAABABAABBABABB", "BBABABAABAABBABBABABABAABBABBBBAAAABAABBABABBBBBBB", "BBABABAABBBABAABBAAABBBABABBBAAAABBABABAAABBBABABA", "BAABBBBBBABAAABABBBBBBBAAAAABBAABBAABAABBBAABBABBB", "BBBBAABBAAAAAABBBBBBBBABABBBABBABAAABAAABBABABABAB", "AAAAAABAABBBBBBBAAABBBABBBBAABAABABBABBABBBBBAABBA", "BAAABBBABABBBBABBBBAABAABAABAABAAAAABABAAAABBBBBAB", "AABABBAABABBBBBABBABAAAAABBBBBBBBBBBBAABABAABAABBA", "ABBAABAABABBAAAABABBBABBBABBBABAAAAAABAABBABBBBABA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAABAAABAAABAAABAABAAAABAABAABAABAABABAAABABAAABABABABBAABAAABBAABAABABBAAAABABBAABABBAABBAABBABABAABAABBABABAABBABABABBABBABABABAABBABBABBABBABBBAAAABAABBBAAABBBAABAABABBBAABBBAABBBAABBBABAABBAAABBBABABABAABABAABBAABABBBABABABABAABABBBABABBBAAAABBABABAAABBBABABABBBABABBBABBAABBBAAABBABAAABABAABAAAABABBBABBAABBBABBABABBAAAAAAABAABBABBBAABBBABBBAABBBABBBABBBABAAAAAABAABBABBBABBBABBBBAAAABAABBABABBBBAAABBAABAAABBBABAABABBBAABBABBBBAABBAAAAAABBBBABAABABBBABBBBABABBAABABAABABBBBABABBBBABBAAABBAAABAAAAAAABBAABAAAAAABABBBBABBBBAABAABAABAABAAAAABABAAAABBBBBAAAABBBBBABAAAAAAAAABABBABAABABBBBABABBBBAABAAABAABBBBBABABABBBBBABBABAAAAABBBBBABBBBBBAAABBABABBBABBABBBABABABBBBBBAAABABAABBABABBBBBBAABBBABBAABABBBBBAABAAAABBBBAAABAABABBBBBBABAAABABBBBBBBAAAAABBAABBAABAABBBAABBABBBBBBBAAABBAABBBABAABBABABABBBBABBBABBBBBBBAAABBBABBBBAABAABABBABBABBBBBAABBABBBBBBBBABABBBABBABAAABAAABBABABABABBBBBBBBABBAABAAAAAABABAAAABABBBBBBBBBBABBAABAAABAABBBBBBBBBBBBAABABAABAABBABBBBBBBBBBBBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> W = {"BABAAABBBAAAABABBAABAAABBBBBAABAABBBABAAAAABABBABB", "BBABABAAABBBABBBBBBBAAAAAAABBABBBABBBABAABABAAABBB", "BAAABABBABABAABBBBAABAAABBBBBBABBAABBBBABABAABAAAA", "AABAAAABAABAAABBAABBAAAAAABABAABBBBBAAAABBBAABABBA", "AABABABBBBABABBAAABAAABBABABBBBBBAAABABAAABAAAAABB", "ABBAAABBABABAAABBBBABBABABABAAAABABAAAAABAAABABBBB", "AAABABBBAAABAAAAABABBBBBAABABBBBAAAABBABBBBBABBABB", "AABABABAABBBBBBBBBABBAAABBAAAABBBBBABABAAABABAABBB", "BABBABABABBBABBBBABAAABAABBBABABBABBBABBBBABBAAAAA", "ABBBBBBABABABAABBBBBAAAAABBABBBAAABBAAABAAAAABBBBB", "BABBAAABABABAABABBABAABBABBBBAAAAABAAABABBBBAAAABB", "BBABAABAAAAAABABABAABBBABAABBABABAABBBAAABBABBABAB", "ABBAABABAAABBAABBABBABBBAAABBAAABBBABAABBBABBBBBAB", "ABBABBABBABABBABBBBAAAABBBBABABAAABBBAAAABBBBBBBAA", "ABABBAABBAABAAABBAABABAAABABBBABAABAAABBBBAAABABAB", "ABBABAABAABBBBABBBABABBAAAABABBABAABAAABBBBBBBBAAB", "ABAAABABBBBBBBABBABBBBABAABAAABBBBBABBAAABBAAABABA", "AABAAABBABABABBBABBAAABABBABABBBAAAABBAAAABABBAABA", "ABBBABBBAABBBBBABBBAAABABBBAABABABABAABBBABBBABBBB", "BBBBBBBBBABAABAABBAAAABBBBAABABBBBABBAAAAABBBBBBAB"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAABAAAABAAABAAABAAABAABAAABABAAABABABAABABABABABABABABABBAAABABABAABABBAAABBAABABAAABBAABBAAAAAABABAABBAABBAABAAABBAABABAAABABBAABBABAABAAAAAABABABAABBABAABAABBABAABBABABAAABBABABAAABBABABAABBABABABBABABABBABBABBABABBABBABBABBABBBAAAABABBAABAAABBBAAABAAAAABABBBAAABBAAABBBABAABAAABBBABAABBABABAABBBAAABBABBABABBBABAABBBABBAAABABBABABBBAAAABBAAAABABBAABABBBABBBAABBBABBBABBBABBBBAAAAABAAABABBBBAAAABBBBAAAABBBBAAABABABBBBAABAAABBBBABAAABAABBBABABBABBBABBBBABABAAABBBAAAABBBBABABBAAABAAABBABABBBBABBAAAAABBBBABBABABABAAAABABAAAAABAAABABBBBABBBABABBAAAABABBABAABAAABBBBBAAAABBBAABABBABBBBBAABAABBBABAAAAABABBABBBBBAABABBBBAAAABBABBBBBABBABBBBBABBBAAABABBBAABABABABAABBBABBBABBBBBABBBBBBAAABABAAABAAAAABBBBBBABABABAABBBBBAAAAABBABBBAAABBAAABAAAAABBBBBBABBAABBBBABABAABAAAABBBBBBBAAAAAAABBABBBABBBABAABABAAABBBBBBBAABBBBBBBABBABBBBABAABAAABBBBBABBAAABBAAABABABBBBBBBBAABBBBBBBBBABAABAABBAAAABBBBAABABBBBABBAAAAABBBBBBABBBBBBBBBABBAAABBAAAABBBBBABABAAABABAABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> W = {"AAABBBBBBBABBBBBAAABAABBAABBAABABBAAAABABBBBBBABBA", "BBABBAABBBBABBAAAAAABABAABBAABAABBBBBABBBAABBBBBAB", "AAAABABABABABABBBBAAABBABBBBABBBBBBBBBABBBAABBAABA", "BBABAAAABAAABBBBBAAABBBBBABBBABAABAABBBABBAAAABBBA", "BBBBBABBBBBAAABBAAAAABABBBBBBBAAAAABBBAAABAABAAABB", "BABBAAABABABBBABAABBAABBABAAABBBAAABBBBABABBBAAABA", "BAAAAAAAAAABAABBABABAABBABBBAAABBBABABAAAAABABBAAB", "ABABABABBBBAAAAABBAAAAABAAAABBBBBAABBABABAAAAABBBB", "AABAABABAABBBBBBBBAAAAAABBBBAAABBBBBABBAAABAABABBB", "BAAAAAABABABBBBBBBAABABAAABBABABBBABBBAAABABAABABA", "BAABAAABBBBBABABABABAAABAABBAABBABBBBABBBBBABBAAAA", "BBBBBABBBAABABABBBBAABBAAABAABAABBABBBBAABABABAAAA", "BBAABAABBBBAABABBBABBAABABBAABAABAABBBBAAABAAAAAAB", "BBABAABBAAABBABBAABBAABAAABBABAAAAABABAABBAAAAABAA", "BAABABABABABABBBABBBBBAABBABBAAABBBAABBAAAABAABABA", "BBBAABAAABBAABBBBBBAABBBBBBBAABAAABBABABBBBBAABABB", "BAABBABBABBBBABBBAABBABABBABABBAABBABAAABBABBAABAB", "AABBABBBAABABBBBBBABBABBBBAAAABBABBBABABAABBBBABBA", "BAAAAABABABBAAAAAABABAABAAAABBBAABABBAAAAABAAAAAAB", "ABABAAABBABBBABBBABBBBAABBBBAAABAAAAAAAAAABBABAABA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAABAAAAAAAAAABAAAAAABAAAAABAABAAABAABAABAABAABABAAABABAABABABABABABABABABABABABABABABABABABABBAAAAAABABAABAAAABBAAABABABBAABAABBABAAAABAAABBABAABBAAABBABABAABBABBAABBAABAAABBABAAAAABABAABBAAAAABAABBABBAABBABBABBABBABBABBBAAABBBAABAAABBAABBBAABABBAAAAABAAAAAABBBAABABBBABAABBAABBABAAABBBAAABBBABABAAAAABABBAABBBABBBABBBABBBBAAAAABBAAAAABAAAABBBBAAABBABBBBAABABBBABBAABABBAABAABAABBBBAAABAAAAAABBBBAABBBBAAABAAAAAAAAAABBABAABABBBBABABBBAAABABBBBABBAAAAAABABAABBAABAABBBBABBBAABBABABBABABBAABBABAAABBABBAABABBBBABBBBBAAABBBBBAABBABABAAAAABBBBBAABBABBAAABBBAABBAAAABAABABABBBBBABABABABAAABAABBAABBABBBBABBBBBABBAAAABBBBBABBBAABABABBBBAABBAAABAABAABBABBBBAABABABAAAABBBBBABBBAABBBBBABBBABAABAABBBABBAAAABBBABBBBBABBBBBAAABBAAAAABABBBBBABBBBBBAABBBBBBABBABBBBAAAABBABBBABABAABBBBABBABBBBBBBAAAAABBBAAABAABAAABBBBBBBAABAAABBABABBBBBAABABBBBBBBAABABAAABBABABBBABBBAAABABAABABABBBBBBBABBBBBAAABAABBAABBAABABBAAAABABBBBBBABBABBBBBBBBAAAAAABBBBAAABBBBBABBAAABAABABBBBBBBBBABBBAABBAABABBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> W = {"ABAABABBABABBAABABBABBBABBAABABBBABBAABBAAABAAABAA", "ABABABABBBABBABABBABABBAAABBABBBBABAAABBABBBABABAA", "ABABABBAABBAABABABAAAAABAAABABAAAABABBABABBBBAABBB", "AABBAABABABBBBAAAABBBAAAAABBBAAAABBABABAABABABABBA", "BBAABABBAABABAAAAAABBABBBAABABBBABABBAABBAAAAABAAB", "ABAAABABBAAAAAABBABAAABBBBBBBBBBAAAAAAAABABBAABBBB", "BABBABBAABAAAABBAAAABBAAAAAAABAAAABBBBAAABBABABAAA", "BAABBAAAABABBBBABAABABABBABAAAAABBAABABBBBAABAABBA", "AABBBBABBAAAAAAABBAAAABBAAAAABAAAAAABBAAABABBBAAAA", "AABAABBAABBBAABABBABBAAABABBBAAABBABBBAABAAABBBAAA", "BBBABBBAABBBABABBAAABBAAAAAAAAABBBABBAAABAAAABBABB", "BBAAABBBBBAAAABAABABABBBAAAAAAAABAABBBABAABAAABABB", "AAABABBBBBAAAAABABBAAAABBBABBBBAAAABBABAAAABABABAA", "AABABABBBABBABBBABABAAAAAABBAABAAAABBAABBBBABBABBB", "ABAABBAABAABAAAAAABBBBABBABABBAAAAABBAABBABBAABBBB", "BAAAABABABBBBBABBAABABAABBBABBBAABBAAABAAAAAAABABA", "AAABABAABAAABBAABBBBBAAABBAAABABBAABBBBBAABBAABABA", "BBABABBABBAABABAAAABABABABBBAAABABBAAAAABABAABAAAB", "ABAABBBAAABABBABBBAABBABBBBAABABABBBABBABAAAAAAAAA", "BAAABBBAAAABBBBBBAABAAABABBBABABABABBBABAABAABBBBB"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAABAAAABAAABAAABAABAABAABAABAABABAABAAABABABABABABABABABABABABABABBAAAAAABBAAAABABBAAABBAABAABAAAAAABBAABABABBAABABBAABABAAAAAABBAABBAABABABAAAAABAAABABAAAABABBAABBAABBABAAABBABABBAABABBABABBABABBABBAABAAAABBAAAABBAAAAAAABAAAABBABBAABABAAAABABABABBABBABBBAAAABBBAAABABBAAAAABABAABAAABBBAAABABBABBBAABABBABBAAABABBBAAABBABBBAABAAABBBAAABBBAABABBBAABBABBBABABBAABBAAAAABAABBBABBAABABBBABBAABBAAABAAABAABBBABBABABBABABBAAABBABBBABBABBBABABAAAAAABBAABAAAABBAABBBABBBAABBBABABBAAABBAAAAAAAAABBBABBAAABAAAABBABBBBAAAABBBAAAAABBBAAAABBABABAABABABABBABBBBAAABBABABAAABBBBAABABABBBABBABAAAAAAAAABBBBAABBBBABAAABBABBBABABAABBBBABAABABABBABAAAAABBAABABBBBAABAABBABBBBABBAAAAAAABBAAAABBAAAAABAAAAAABBAAABABBBAAAABBBBABBABABBAAAAABBAABBABBAABBBBABBABBBBBAAAAABABBAAAABBBABBBBAAAABBABAAAABABABAABBBBBAAAABAABABABBBAAAAAAAABAABBBABAABAAABABBBBBAAABBAAABABBAABBBBBAABBAABABABBBBBABBAABABAABBBABBBAABBAAABAAAAAAABABABBBBBBAABAAABABBBABABABABBBABAABAABBBBBBBBBBAAAAAAAABABBAABBBBBBBBBBBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> W = {"AABAAAABBAABAABBAAABABAAAABAAABBAAABBABBBBBBBAABAB", "AAAAAABBAABABBABBABBAABAAABBBABABABAABABAABAABBBBA", "BBABABBBBABBABAABAABAABABAABABAAABABABABAABBBABABB", "BBAABBBBBAABABAABBAAABBBBBBAABABABAABABBAABAAABAAA", "BBBBABBABBAAABABBABBBABABBBBAABABABABABBBBAABBABAB", "BBBBBBAAABAAAABAABBAABBAAAABBBAAAABBAAABBAAABBABBB", "BAAAAAABABAABAABAAAABAAABABABBBBAABBBBBAABABBAAABB", "AABBBABABAABABABABBBBBBBABBAAABAABABABAABABBAAABAB", "AAABBBAAABAAABBBABABBABBBABABBBAABABABABBABBAABBAB", "BABBBABAAABBBBBAAABABBABBAABABBABBBBAABAAAABABBABB", "BABBABABBABBAAAABBABAAABBAABAAABAAAABABBABAABBBABA", "BABABABABAAAABBBBAAABAAABBABAABAAAAAAAAABABAABBBAA", "ABBBBABAAABBBBAAAAAABAAABBBAAABABAAABBABAABABABBAB", "AABBABAAAABBBBABBABBABBABAAABAABBBABBAABABBBBBBBBA", "AAAABABABBAABBBBBAAABBBAAABBBBBAAAABABBABAABBBAABA", "ABAABABBBABBAAABBBAAABABBABABBABBAAABAAABABAABBBBB", "BBAABABAAAABBABBABABABAAABBBBBAABABAABAAABBBBBBBAB", "BBAAAABBBBABBBAAAAAAABAABAAABAAAABABBBABBABAABAABB", "ABBAABAABABBBBBABAABABABBAAABAAAAABABBABABBBAAAABA", "BBAAABBABBABAABAABABABAAABBABBBBBAAABBABBAABBABBBA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAABAAAAAABAAAABAABABAABAABAAAABAAABABABABABAAAABABABABABABABABBAAAABBAAABBAABAABABBAABAABBAAABABAAAABAAABBAAABBAABABAAAABBAABABBAABBAABBABAAAABBABABBABABBABBAAAABBABAAABBAABAAABAAAABABBABAABBABBABAABAABABABAAABBABBABABABAAABBABBABBAABAAABBABBABBBAAABAAABBBABAAABBBABABAABABABABBBABABABAABABAABAABBBABABBABBBABABBBAABABABABBABBAABBABBBABABBBABBAAABBBAAABABBABABBABBAAABAAABABAABBBBAAABAAABBABAABAAAAAAAAABABAABBBAABBBBAABBBBABAAABBBBAAAAAABAAABBBAAABABAAABBABAABABABBABBBBABBABAABAABAABABAABABAAABABABABAABBBABABBBBABBABBAAABABBABBBABABBBBAABABABABABBBBAABBABABBBBABBABBABBABAAABAABBBABBAABABBBBABBBAAAAAAABAABAAABAAAABABBBABBABAABAABBBBABBBBBAAABABBABBAABABBABBBBAABAAAABABBABBBBBAAABBABBAABBABBBABBBBBAAABBBAAABBBBBAAAABABBABAABBBAABABBBBBAABABAABAAABBBBBAABABAABBAAABBBBBAABABBAAABBBBBABAABABABBAAABAAAAABABBABABBBAAAABABBBBBBAAABAAAABAABBAABBAAAABBBAAAABBAAABBAAABBABBBBBBAABABABAABABBAABAAABAAABBBBBBBAABABBBBBBBABBAAABAABABABAABABBAAABABBBBBBBABBBBBBBBABBBBBBBBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> W = {"ABBBAABABAAAAAABABBAABBBAABABABBBABBABAABABABAABBB", "BBBBBBAABBAABBBBABBABABABBABABAABAABBBABAAABBAABAB", "BBABAABBBBAAAABAABABBBAAABBBABBABBAABABBAABAABAABA", "ABAABABAABBBAAAAABABBBBABAABABAABAABBBBAAAAAAAAAAA", "ABAAAAABABAAABAABABABABBAABAABABABABAABABBAABBBABA", "BBAAAAAABBBBAAABBBAAAAABAAAABBAABBAABAAABABABAAAAB", "BBBABBBAABAAAAABBABBABBABABBBABBBBBBBBABBBAABAAAAA", "AABABAAAAAABAAABABBBBAAAAABAABAAAAABABAABBAAAABAAB", "BBBAABABAAABAAAAABAAAAAABBBABAAAAABABABBABABBAABAA", "ABAAABABAABABBBBABBBBBABBABABBABABBAAAABBBBABBAAAA", "BAABBABBABBBAAABAABABBAABBABBAAAABBBAABABBABBABABA", "BAAAAABBAABBAABBAABBBABABBAABBBAABBBBABABBBBAAAABB", "ABBAAAAABBABAAABBBAABABBABBBBBBAAAABBBBBBABBBBABBB", "BBBBAAABBAAAABAAAABBAAABAABBBABBAABAABAAAAAAABBBBA", "AAABBBBBAAABBAAABABBBAAABBAABAAAABABBABABABBAABBAB", "BBBAABBBABBBAAAAABABAABBBABBBBBABABABAABBBABBBABAB", "BABAABABBBBABBABBABBBABBABBAAABABAABBAAABABAAAABAA", "ABAAAAAAAAABBABABABBAABABABBBABABABABBABAABAABBABB", "AAABBBAAAAABAAAAAAABAAABBBBBBBABBBAAABABBBBABABAAA", "AABABABAABABBAAAAABAAAAAAABBBBAABBBBBAABBBBBABABBA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAABAAAAAAAAABAAAAABAAAAABAAABAABAABABAAAAAABAAABABAAABAABABAABABAABABAABABABAABABABABABABABABBAAAAAABBAAAAABAAAAAAABBAAAAABBAABAABABABABAABABBAABBAABBAABBAABBABAAABBABAABBABABABBAABABABBABBABBBAAAAABAAAAAAABAAABBBAAAAABABBBAAABAABABBAABBABBAAAABBBAABABAAAAAABABBAABBBAABABAAABAAAAABAAAAAABBBAABABABBBAABABBABBABABABBBAABABBABBBAABBBABAAAAABABABBABABBAABAABBBABABABABBABAABAABBABBBABABBAABBBAABBBABABBBABBABAABABABAABBBABBBAAAAABABAABBBABBBAABAAAAABBABBABBABABBBABBBABBBBAAAAABAABAAAAABABAABBAAAABAABBBBAAAABAABABBBAAABBBABBABBAABABBAABAABAABABBBBAAABBAAAABAAAABBAAABAABBBABBAABAABAAAAAAABBBBAAABBBAAAAABAAAABBAABBAABAAABABABAAAABBBBAABBBBABAABABAABAABBBBAAAAAAAAAAABBBBABABBBBAAAABBBBABBABBABBBABBABBAAABABAABBAAABABAAAABAABBBBABBBBABBBBBAAABBAAABABBBAAABBAABAAAABABBABABABBAABBABBBBBAABBBBBABABABAABBBABBBABABBBBBABABBABBBBBABBABABBABABBAAAABBBBABBAAAABBBBBBAAAABBBBBBAABBAABBBBABBABABABBABABAABAABBBABAAABBAABABBBBBBABBBBABBBBBBBABBBAAABABBBBABABAAABBBBBBBBABBBAABAAAAABBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> W = {"BBAAAABBABABBABAAAABBBBAABBAAAABAAAABBBBAAAABABAAB", "AAAABAAABAABBBABBBBBBABAABAABBABABBAAAABAABAABBABA", "BABBABAABABBBAAAABBBABABBABBBBBAAABABBAABBABBBAABB", "BABBAABBBBABBBABBABABAABABAAAAAABAABABAABABBBAABAA", "BAABBABAAAAABAAABAABAABBBBABABBAAABABAAAABBBAABBBA", "BAABBABAAABABAAAAAABBAAAABBAABABBABBBBBABAAABBBAAA", "BBBAABABBABBBABABBABBBAABAAABABABAAABABBBAABBAABBA", "AAABBABABBAABBABAAABBAAAABAABBAABBBAABBABAAAABBAAA", "BABBAAABBBAAAAAABAABBABABABABAABAABBBAABABABBABBBB", "BBABBBBBABABBBAABBAAAAAAAAAABBBAABBBBAABBBAABBBAAB", "AAABABAAAABBBBBAABAABBAAAAABBBAABBBBBAABAAABAAABAA", "AABBBABBBAABAAABBABBBBBAABBBAABABBBABAAAAABAAAABAB", "AABBBABAAABAAAABBABABBBBBAAABABBABAAABBAABBBABBBBA", "ABAABBABBBABBBBABABBBAAABABAABAAABBAABBABAABAABBAB", "BAABAAABAAAABBBAABABBBABBAABBBBAAABAAAABABAABBAABB", "AAABBBABBBAABBBBAABABBBAAAABBBAAABBBAAAABABABBBBAB", "BBBABBABABAABABAABBBBAABABBBAABAABABBAABBBAAAABBAB", "BABBABBBBABBBBAABBABBBBBBBBBAAABBABABBBABBBBBBAABB", "BABBABAAABBBABBAAABABABBAABAAAABBBAABABBBBABBABBBB", "ABABBBABBBBAAAAABABBAABBABBBBABABBABBBAABBABBBABAA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAABAAABAABAAABAAAABAABAABAABAABABAAAABABABABABABABBAAAABBAAABBAABBABAAAAABAAABAABAABBABAAABABAAAAAABBAAAABBAABABBABAAABBABAABABBABABBAABBABAAABBAAAABAABBAABBABABBABAAAABBABBABBABBABBBAAAAAABAABBABABABABAABAABBBAAAABBBAABABABBABBBAABABBABBBAABABBBAABBABAAAABBAAABBBABAAABAAAABBABABBBABABBABBBAABAAABABABAAABABBBAABBAABBABBBABABBABBBABBAAABABABBAABAAAABBBAABABBBABBAABBBABBABABAABABAABBBABBBAABAAABBABBBABBBAABBBABBBABBBABBBBAAAAABABBAABBABBBBAAABAAAABABAABBAABBBBAABABBBAAAABBBAAABBBAAAABABABBBBAABABBBAABAABABBAABBBAAAABBABBBBAABBAAAABAAAABBBBAAAABABAABBBBABABBAAABABAAAABBBAABBBABBBBABABBABBBAABBABBBABAABBBBABABBBAAABABAABAAABBAABBABAABAABBABBBBABBABBBBABBBABBABABAABABAAAAAABAABABAABABBBAABAABBBBABBBBAABBABBBBABBBBBAAABABBAABBABBBAABBBBBAAABABBABAAABBAABBBABBBBABBBBBAABAABBAAAAABBBAABBBBBAABAAABAAABAABBBBBAABBBAABABBBABAAAAABAAAABABBBBBABAAABBBAAABBBBBABABBBAABBAAAAAAAAAABBBAABBBBAABBBAABBBAABBBBBBABAABAABBABABBAAAABAABAABBABABBBBBBBBBAAABBABABBBABBBBBBAABBBBBBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> W = {"BAAABBBBBABBABBBABAABBABABABABABBABABBBAAABBABABBB", "BBAABABBABBABAABBAABBAABBAAAAABBBBABAABBBABBBABBBB", "BABBABABBBAABBABBBBAABBBBBBAAAABAABBBABABBABBBAABA", "AAABAAAABBBAAAAAAABABABAAABBABBBAABBBAAAABBBBBBAAB", "BBAAAABAABBBABABAABBAAABBABBABBAAABAAABBAAAAAAAAAA", "BBBBBABBABABAAABABAAAABAABAAABABABBBABABBABABAABBB", "ABBBBBAABBAAAABABBBBBBBAABBAABBBBBABBBBBBBBABBBABB", "ABABABABAABBABABAAAAABBBBBBABBABAAABAABAAAABAABBBB", "BAABABAABBAABBBAABBBABAABABBBBBBABBBAABBABABABBAAB", "ABBAABBBABBABBBBBABAAAAABBABBABAABBBBABAABBABABAAA", "AAAAAABABAAAAABABABBBABBBAAABBBAAAAAAABAAAABBBBBBB", "ABBBBABAAABAAAAABABAAAAABABAAAAABAABAABBBAABBBBBBA", "AAABABBBABBAABAABABBBBAABABABBABBABBABAAAAABAABBBA", "BABABBABBAABABBABAAAAABBBABABBBBAABAAAAABABBABBABB", "BABBABBBABABBBAABBBAABBABABABABAABAABABBBBABBABBBA", "BAABABAAABABBAAAAAAABBAAAAABBBBBBABAAABBBBBBAABBAA", "AABBBAABBABABBBABABABBBBAABBAAABAABAABBAABABAABBBB", "BBAAAABAAAABBAAABABBBBAAAABBABABBBBBAABBBBBABABABA", "BBAAABBABAABAAAABAAABBBBBBAAAABABBBBAAAAABBAAAAAAB", "ABAAAABABABBBBAAABBBBBABAAABBAABAAAAABABABBABAAAAB"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAABAAAABAAAABAAABAABAABABAAAAABABAAABABAABABABABAABABABABABABABABABABABBAAAAAAABBAAAAABBAAAABAAAABBAAAABAABBAAABABBAAABBAABABBAABBAABBABAABAAAABAAABBABABAAAAABBABABBABBAABABBABAAAAABBABBABAABBAABBAABBAAAAABBABBBAAAAAAABABABAAABBABBBAABBABABBBAABBABBBAABBBAAAABBBAABBBABAABABBBABABAABBAAABBABBABBAAABAAABBAAAAAAAAAABBBABABABBBABABBBAABBBAABBABABABABAABAABABBBABABBBABBAABAABABBBABBABBBABBBAAABBBAAAAAAABAAAABBBBAAAABBABABBBBAAABBBBAABAAAAABABBABBABBBBAABABABBABBABBABAAAAABAABBBABBBBAABBAAABAABAABBAABABAABBBBAABBBBABAAABAAAAABABAAAAABABAAAAABAABAABBBAABBBBABAABBBABBBABBBBABBABBBABBBBBAABBAAAABABBBBBAABBBBBABAAAAABBABBABAABBBBABAABBABABAAABBBBBABAAABBAABAAAAABABABBABAAAABBBBBABABABABBBBBABBABABAAABABAAAABAABAAABABABBBABABBABABAABBBBBABBABBBABAABBABABABABABBABABBBAAABBABABBBBBBAAAABAABBBABABBABBBAABABBBBBBAAAABABBBBAAAAABBAAAAAABBBBBBAABBBBBBABAAABBBBBBAABBAABBBBBBABBABAAABAABAAAABAABBBBBBABBBAABBABABABBAABBBBBBABBBBBBBAABBAABBBBBABBBBBBBBABBBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> W = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> W = {"MMMMMMMMACMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMADMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMABMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMAAMMMMMMMMMMMMMMMMQXYZGGFBFDGMMMMMMMMMMMMM", "MMMMMMMMAXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMAYMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNMXMMMM", "MMMMMMMMMMMMMMMMMDSFASDMMMMMMMMMMMMMMMMMMMMNMYMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMVCXBFMMMMMNMZMMMM", "MMMMMMMMYXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNMQMMMM", "MMMMMMMMYYMMMMMMXDMMMMMMMMMMMMMMMMMMMMMMMMMNMAMMMM", "MMMMMMMMZMMMMMMMXBMMMMMMMMMCCCMMMMMMMMMMMMMNMBMMMM", "MMMMMMMMMMMMMMXCMMMMMMMMMMMMMMMMMMMMMMMMMMMNMBCMMM", "MMMMMMMMAMMMMMMMXAAMMMMMMMMMMMMMMMMMMMMMMMMNMBAMMM", "MMMMMMMMNMMMMMMMMMMMMXCVFDERMMMMMMMMMMMMMMMNMBBMMM", "MMMMMMMMZMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNMAXMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXXMMMMMMMNMAYMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXYMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMYYMMMMMMMMMMMMMM", "MMMMMMMMMMMMZFVBGRMMMMMMMMMMMMMMMMYXMMMMMMMMMMMMMM"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "MMMMMMMMAAMMMMMMMMABMMMMMMMMACMMMMMMMMADMMMMMMMMAMMMMMMMMAMMMMMMMMAMMMMMMMMMMMMMMMMMDMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNMMMMMMMMMMMMNMQSFASDMMMMMMMMMMMMMMMMMMMMNMVCXAAMMMMMMMMMMMMMMMMMMMMMMMMNMBAMMMXBFMMMMMNMXCMMMMMMMMMMMMMMMMMMMMMMMMMMMNMBCMMMXCVFDERMMMMMMMMMMMMMMMNMBBMMMXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXMMMMXXMMMMMMMNMAXXYMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMYMMMMMMMMMMMMMMYMMMMYMMMYXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNMQMMMMYYMMMMMMMMMMMMMMYYMMMMMMXDMMMMMMMMMMMMMMMMMMMMMMMMMNMAMMMMYZFVBGRMMMMMMMMMMMMMMMMYXMMMMMMMMMMMMMMZGGFBFDGMMMMMMMMMMMMMZMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNMAXMMMZMMMMMMMXBMMMMMMMMMCCCMMMMMMMMMMMMMNMBMMMMZMMMM";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> W = {"THMTHMTHMTHMTHM", "THMTHMTHMTHMTHMTHB", "THMTHMTHMTHMTHMTHM", "THMTHMTHMTHMTHM", "THMTHMTHMTHMTHMTHK", "THMTHMTHMTHZ", "THMTHMTHMTHMTHMTHN", "THMTHMTHMTHMTHMTHMTHMTHKTHMTHM", "THMTHMTHMTHMTHZ", "THMTHMTHMTHMTHMTHMTHMTHKTHMTHZ", "THMTHMTHMTHMTHMTHK", "THMTHMTHMTHM", "THMTHMTHMTHMTHMTHMTHMTHMTHMTHZ", "THMTHMTHMTHMTHMTHY", "THMTHMTHMTHMTHMTHMTHMTHKTHMTHM", "THMTHMTHMTHMTHBTHZ", "THMTHMTHMTHY", "THMTHMTHMTHMTHMTHY", "THMTHMTHMTHMTHMTHZ", "THMTHMTHMTHMTHBTHZ"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "THMTHMTHMTHMTHBTHMTHMTHMTHMTHBTHMTHMTHMTHMTHMTHBTHMTHMTHMTHMTHMTHKTHMTHMTHMTHMTHMTHKTHMTHMTHMTHMTHMTHMTHMTHKTHMTHMTHMTHMTHMTHMTHMTHKTHMTHMTHMTHMTHMTHMTHMTHKTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHMTHNTHTHTHTHTHTHTHTHTHTHYYYZZZZZZZ";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> W = {"ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> W = {"HURTSSOGOOD", "COMEONBABYMAKEIT", "PUTMEINCOACH", "IMERADYTOPLAY", "TODAYTODAY", "AAAAAAAAAAAAAAAAAAAAAAAA", "BKDFBDSKFNDSOND", "PUTMEINCOACHPUTMEINCOACHPUTMEINCOACH", "IMERADYTOPLAY", "GOGOGPERUPERUGOGO", "HURTSSOGOOD", "COMEONBABYMAKEIT", "PUTMEINCOACH", "IMERADYTOPLAY", "TODAYTODAY", "AAAAAAAAAAAAAAAAAAAAAAAA", "BKDFBDSKFNDSOND", "PUTMEINCOACHPUTMEINCOACHPUTMEINCOACH", "IMERADYTOPLAY", "GOGOGPERUPERUGOGO"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBCCGGHHIIIIKDFBDKDFBDMEMEMEMEOGOGOGOGOMEOMEONBABONBABPEPEPPPPRADRADRADRADRRSKFNDSKFNDSONDSONDTODATODAUPERUGOGOUPERUGOGOURTSSOGOODURTSSOGOODUTMEINCOACHPUTMEINCOACHPUTMEINCOACHPUTMEINCOACHPUTMEINCOACHUTMEINCOACHUTMEINCOACHUTMEINCOACHYMAKEITYMAKEITYTODAYTODAYTOPLAYTOPLAYTOPLAYTOPLAYYYYYY";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> W = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXS", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXR", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXQ", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXP", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXO", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXN", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXM", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXL", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXK", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXJ", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXI", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXH", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXG", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXF", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXE", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXD", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXB", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXC", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXAXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXBXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXCXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXDXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXEXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXFXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXGXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXHXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXIXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXJXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXKXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXLXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXMXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXNXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXOXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXPXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXQXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXRXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXSXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> W = {"CDE", "CDEB", "CDEBA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "CCCDDDEBAEBE";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> W = {"T", "TTTA", "TTTTTAA", "TTY", "Y", "TY", "TTTB", "TB", "B", "TTZ", "Z", "TT", "ATTTTTTTTA", "AATTTTA", "BTA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAABBTATBTTTATTTBTTTTATTTTTAATTTTTTTTATTTTTTTTYYYZZ";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> W = {"ZZZZZZZZZZZZZZZZZZZZXXXXXXXXXXXXXYYYYYYYYY", "ZZZZZZZZZZZZZZZZZZZZXXXXXXXXXXXXXYYYYYYYYYA", "ZZZZZZZZZZZZZZZZZZZZXXXXXXXXXXXXXYYYYYYYYYBA", "ZZZZZZZZZZZZZZZZZZZZXXXXXXXXXXXXXYYYYYYYYYBAB", "ZZZZZZZZZZZZZZZZZZZZXXXXXXXXXXXXXYYYYYYYYYBAAB", "ZZZZZZZZZZZZZZZZZZZZXXXXXXXXXXXXXYYYYYYYYY", "ZZZZZZZZZZZZZZZZZZZZXXXXXXXXXXXXXYYYYYYYYYA", "ZZZZZ", "ZZZZZZ", "ZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "A", "AA", "AABA", "AAB"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAABABZZZZZZZZZZZZZZZZZZZZXXXXXXXXXXXXXYYYYYYYYYAZZZZZZZZZZZZZZZZZZZZXXXXXXXXXXXXXYYYYYYYYYAZZZZZZZZZZZZZZZZZZZZXXXXXXXXXXXXXYYYYYYYYYBAABZZZZZZZZZZZZZZZZZZZZXXXXXXXXXXXXXYYYYYYYYYBABZZZZZZZZZZZZZZZZZZZZXXXXXXXXXXXXXYYYYYYYYYBAZZZZZZZZZZZZZZZZZZZZXXXXXXXXXXXXXYYYYYYYYYZZZZZZZZZZZZZZZZZZZZXXXXXXXXXXXXXYYYYYYYYYZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> W = {"FKJZKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKSHKSJ", "AKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJ", "AKJHKJHKSJAKJHKJHKSJZKJHKJHKSJAKJHKJHKSJAKJHKJHKSJ", "AKJHKJZKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJ", "AKJHKJHKSJAKJHKJHKSJAKJHKJZKSJAKJHKJHKSJAKJHKJHKSJ", "AKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJ", "AKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJ", "AKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJ", "AKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJ", "AKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJ", "AKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJ", "AKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJ", "AKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJ", "AKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJ", "VKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJ", "AKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJ", "AKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJ", "AKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJ", "AKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJ", "TKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJ"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAFKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJHKJKJKKKKKKKKKKKKKKKKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJSJSJSJSJSJSJSJSJSJSJSJSJSJSJSJTKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJVKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJZKJHKJHKSJAKJHKJHKSJAKJHKJHKSJZKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKSHKSJZKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJAKJHKJHKSJZKSJAKJHKJHKSJAKJHKJHKSJ";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> W = {"BBB", "BBBA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BBBABBB";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> W = {"ABAAA", "AABAA", "BAAAA", "AAABA", "AAAAB"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAABAAAABAAABAABAB";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> W = {"UIOWIUFXXIOUOWIEUWEOIRUSD", "KLJLGHLKAGPOQUILKDJFL", "LHJLHGOIURETOIULKSJDFLJDSF", "LHGLKJOIUPTYPOIQUER", "XXXXXXXXXXXXXXXXXXXXX", "SKFJJJJSKDJFLKJDSKJD", "AAAAAAAADDDDDDDDDDDDD", "KJDFJLSKDJF", "OUTOIWPQUEIRU", "SDLKFJLHOIGUQPIUR", "UUUUUUUUUUUUUUUU", "KFJDSLJFLKDSJFLKJSDF", "OQPPQUPQUPQIURE", "URIETYOIWEUROIEYTOWEUR", "UUURUIWOOWOPQPPPQREO", "KFJLKSDJFSDFSDFSDF", "OUOIUZIUXCVOIUXCVXOVU", "XLKNNVLKNKLCXNVKLXNVC", "OIURQPUREPUQRPOIUQIROQUREP", "LKJSLFKJLKDGAAAAOUQPTUR"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAADDDDDDDDDDDDDKFJDKFJKJDFJKLHGLHJLHGLJLGHLKAGLKJLKJLKLOIOIOIOOOPOQPPQQSDJFSDFSDFSDFSDLKFJLHOIGSKDJFSKFJJJJSKDJFLKJDSKJDSLFKJLKDGAAAAOSLJFLKDSJFLKJSDFUILKDJFLUIOUOIUPQUPQIUPTUQPIUQPTURETOIULKSJDFLJDSFUREURIETURQPUREPUQRPOIUQIROQUREPURURUTOIUUURUIUUUUUUUUUUUUUUUUUWIUFWOOWOPQPPPQREOWPQUEIRUXLKNNVLKNKLCXNVKLXNVCXXIOUOWIEUWEOIRUSDXXXXXXXXXXXXXXXXXXXXXYOIWEUROIEYPOIQUERYTOWEURZIUXCVOIUXCVXOVU";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> W = {"Z", "ZZA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZAZ";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> W = {"BT", "TOPCODER", "BETFAIR", "NSA", "LILLY"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BBELILLNSATFAIRTOPCODERTY";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> W = {"LASJDKLASJDLKASJDLASJDL", "ALSKDJLAKSDJKLASJDLKASJD", "AKLSJDLAJSDLKASJDLAKSDJLA", "AKSJDLAKSJDKLASJDLSAJDKLKLA", "AKLSJDDKSAJLJDJAKSJSJAJKASDJ", "LASJDKLASJDLKASJDLASJDLAKSJDA", "ALSKDJLAKSDJKLASJDLKASJDLKAJS", "AKLSJDLAJSDLKASJDLAKSDJLAKSJDLAK", "AKSJDLAKSJDKLASJDLSAJDKLKLALSDKLJASJDAJKSKDJAAAA", "AKLSJDDKSAJLJDJAKSJSJAJKASDJLASJDLASJLDJLKASJKDA", "AJSDKJALSDJALSKDJDSAJLALALALALAJSDDAKLSDJAKSDJLA", "ALSKDJAKLSDJALSJDLASJDLAKSDJWERALSKDLAKJSDLKASAA", "LASJDKLASJDLKASJDLASJDLAKSJDAKHSDKJASDHASKDJHUAH", "ALSKDJLAKSDJKLASJDLKASJDLKAJSDLKAJSDLKAJSLDKASDJ", "AKLSJDLAJSDLKASJDLAKSDJLAKSJDLAKSJDLKASJDKLASJDK", "AKSJDLAKSJDKLASJDLSAJDKLKLALSDKLJASJDAJKSKDJAAAA", "AKLSJDDKSAJLJDJAKSJSJAJKASDJLASJDLASJLDJLKASJKDA", "AJSDKJALSDJALSKDJDSAJLALALALALAJSDDAKLSDJAKSDJLA", "ALSKDJAKLSDJALSJDLASJDLAKSDJWERALSKDLAKJSDLKASAA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAJJKKKKKKKKKLALALALLLLLLLLLLLSDKJALSDJALSDKJALSDJALSJDDKSAJLJDJAKSJDDKSAJLJDJAKSJDDKSAJLJDJAKSJDKLASJDKLASJDKLASJDLAJSDLKASJDLAJSDLKASJDLAJSDLKASJDLAKSDJLAKSJDLAKSDJLAKSJDLAKSDJLASJDLAKSJDKLASJDLAKSJDKLASJDLAKSJDKLASJDLAKSJDLAKSJDLKASJDKLASJDKSJDLKASJDLASJDLAKSJDAKHSDKJASDHASJDLKASJDLASJDLAKSJDASJDLKASJDLASJDLSAJDKLKLALSDKLJASJDAJKSJDLSAJDKLKLALSDKLJASJDAJKSJDLSAJDKLKLASJDLSJSJAJKASDJLASJDLASJLDJLKASJKDASJSJAJKASDJLASJDLASJLDJLKASJKDASJSJAJKASDJSKDJAAAASKDJAAAASKDJAKLSDJALSJDLASJDLAKSDJSKDJAKLSDJALSJDLASJDLAKSDJSKDJDSAJLALALALALAJSDDAKLSDJAKSDJLASKDJDSAJLALALALALAJSDDAKLSDJAKSDJLASKDJHSKDJLAKSDJKLASJDLKASJDLKAJSDLKAJSDLKAJSKDJLAKSDJKLASJDLKASJDLKAJSKDJLAKSDJKLASJDLKASJDSLDKASDJSUAHWERALSKDLAKJSDLKASAAWERALSKDLAKJSDLKASAA";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> W = {"Z", "ZA", "ZAA", "ZB", "ZBB"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ZAAZAZBBZBZ";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> W = {"ACBAD", "BAC", "CBAD"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ABACBACBACDD";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> W = {"AB", "ABA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AABAB";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> W = {"CB", "CBA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "CBACB";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> W = {"B", "B", "BA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BABB";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> W = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> W = {"BB", "BBA", "BB", "BBA", "BBA", "BB", "BB"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BBABBABBABBBBBBBB";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> W = {"RY", "GDMLXUKWY", "CPRSKWGXU"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "CGDMLPRRSKWGXUKWXUYY";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> W = {"CBCA", "CB"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "CBCACB";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> W = {"BB", "BBA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BBABB";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> W = {"PJNEATFNOLWJTSQGWIDBHOXXERBXZEJSHZGYTMTMQWJUMSWST", "IEWEDZRNNQZFNJWQNOPVZYLPRZSJRZNIJXQOGGTMXLJOYY", "WRSZSXDYUCDOSFGAQJTKZVZNZTIGQIS", "JODKAHIMECBUHCQNUIEFDIVVABE", "NMCOZIHSUKJTJPHNWTMYWFLC", "WXPNJANENVPVCHCVIHVLXBUQVAKSWAASQAJLGENUZRKSZKJJ", "AKBFTQKZISJNDXQUPLMAWPWPBRGAO", "WZ", "SDLXWMINTNNAINQRAUDWMHILOLXYMIDLIOIDLBELVAGTYOHY", "QYYHUGQWIBFREGVY", "QVLTGUPRKCQWPLPNDZNSKXDMNPKF", "MGIJ", "XGFXTDRLJPEQLLYGVAFPNZNIMKETCRWFSENYOKCABGGAMCL", "JWYPILKGQROFBKAIZPXOVSHXZKJHXXRNCYTZKUJZBSANJS"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AIEJJKBFMGIJNMCODKAHIMECBOPJNEAQQSDLTFNOLTQKUHCQNUIEFDIVLTGUPRKCQVVABEWEDWJTSQGWIDBHOWPLPNDWRSWWWXGFXPNJANENVPVCHCVIHVLXBUQVAKSWAASQAJLGENUXTDRLJPEQLLXWMINTNNAINQRAUDWMHILOLXXERBXXYGVAFPNYMIDLIOIDLBELVAGTYOHYPILKGQROFBKAIYYHUGQWIBFREGVYYZEJSHZGYTMTMQWJUMSWSTZIHSUKJTJPHNWTMYWFLCZISJNDXQUPLMAWPWPBRGAOZNIMKETCRWFSENYOKCABGGAMCLZNSKXDMNPKFZPXOVSHXZKJHXXRNCYTZKUJZBSANJSZRKSZKJJZRNNQZFNJWQNOPVZSXDYUCDOSFGAQJTKZVZNZTIGQISZYLPRZSJRZNIJXQOGGTMXLJOYYZ";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> W = {"FECD", "FEBD"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "FEBDFECD";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> W = {"A", "ZZZZB"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AZZZZB";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> W = {"MCMAVSVAVFGLQUEWM", "LSRAFLECQDVUJCIHDYDIPXRMGHCMGBWYWWPCLANUKTLPDRPFH", "OIWYAPFTDFAFZHO", "UAGIZWCRMCEYOCZYXOJFWVLJBRYVJUCLY", "THLBRBMNRSZLWOWUHIWJDBEGXCKOCIRWG", "BXHDASKBNYH", "PUHATOVCCENZA", "APV", "KFABGCQL", "IHULMUHZELRVQGZXGBEVHEXOLVPOXIIHOHLSJWWMOLFBZVTIL", "EFOEAEHYTIIVBSZOUJUIFVJEEWMQSUUCF", "ABXTHHQENNIPNHUALHDHGVOFQLRUPGWYKKVLYIDZRKVRTMYVB", "YL", "VGYTALRSJIPWEM", "MRDMYWNQUYKCHACLCUANTDESKVHNPGAMJCRQ", "RMLKOQMZUCKCGHYFPZIPMWCGBPLBHKSYCN", "RMCTHWEBCCTVWZOCUCLLOTI", "KYHOVGQBGZCMKTTNUFNFHAQEYLJ"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AABBEFIHKFABGCKLMCMAMOEAEHOIPPQLRDMRMCRMLKOQMSRAFLECQDTHLBRBMNRSTHUAGIUHATOULMUHVCCENVGVSVAVFGLQUEVUJCIHDVWEBCCTVWMWWXHDASKBNXTHHQENNIPNHUALHDHGVOFQLRUPGWYAPFTDFAFYDIPXRMGHCMGBWYHOVGQBGYHYKKVLYIDYLYTALRSJIPWEMYTIIVBSYWNQUYKCHACLCUANTDESKVHNPGAMJCRQYWWPCLANUKTLPDRPFHZAZCMKTTNUFNFHAQEYLJZELRVQGZHOZLWOWUHIWJDBEGXCKOCIRWGZOCUCLLOTIZOUJUIFVJEEWMQSUUCFZRKVRTMYVBZUCKCGHYFPZIPMWCGBPLBHKSYCNZWCRMCEYOCZXGBEVHEXOLVPOXIIHOHLSJWWMOLFBZVTILZYXOJFWVLJBRYVJUCLY";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> W = {"A", "AB"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAB";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> W = {"B", "BA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BAB";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> W = {"BAA", "BAAA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BAAABAA";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> W = {"CAA", "CA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "CAACA";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> W = {"AZ", "AZZA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "AAZZAZ";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> W = {"RB", "RBA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "RBARB";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> W = {"DAB", "DA", "C"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "CDABDA";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> W = {"BAAC", "BA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "BAABAC";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> W = {"JIDDADCBDBEDBDBJEFBHCBEEBDCBACADBHEEDBJEFEJHBCECCD", "FHJBEDDAFDAIECCBEFDEDGIFJGBDBIBACFGADAHFAIAFJDFHHE", "GIIIGAJIGCAHAJGBDDBEJBHEADFHJDJCEHGHDDBJEGFCDEABDH", "BCIAHBFECICDBEJIGBICDDBCHECGHCBDDIBAGGGCFFEBFEHGDJ", "FAAFCGHDEDBADEECABHCCIBIABECECBCHCGBDCHJGDGBCDDEIF", "CGCBEACCBJIAHBDEEEFBFAAIFAIFFJIGCACGFFIFBFIIGGJJEB", "DDIHGJGFFCFEIHAEFGEDEHEGIEHGAIACHJJDHCFJCJIDFGIDIC", "DEBJDGJACBEFDBBEBIHEGEGBGDAFFCCHJCHECEACCCJCJGBADD", "HHICGBHHGDACDADJIBAFAJEEDFBHCAEHICCJDHHGAACJFFHGBC", "BDCDIBIJFFIDDHCFEABBHCHCJDGBBBHFICJCGBBFGHCDCBIDFE", "ICJEBFGBIGDHGJBIFIDHGFIHGJABIAIHFADGDCFJHBIFIEDIGB", "GFHJHFDDGEDJFGIIIFBAABHCAEDEAIGADGJFHGCIHAHFAJJFIB", "CHDGJDJBJAJDIABCDGFDGFBCBAIIGDEADCBAEJBHCHIEFBEHCB", "CJBHEFDIDJADCBCGJDBGEACEIBGCGJFHEBAHCBFGIJGGABHEDD", "DEEFAFGHIGBBBIAIHDDACCAIJDCBDHGDDBCICBCCGJCDDJHGFH", "ADABGFCACACIFJCDJFJFIGHJCHIIACDCEEJBCDFAIDIGFCBHFB", "EICGJJAADCFIHCFBADEBADEFDICHEHBIBCIEICEIJABIDEHDBA", "EAIGCECIIFFGEIFCHDDCIIFJEAFFCEIAJJFDBHAGIHHEJBCJEA", "GAGGGCBAJJEAAAAJABAHBAFFBBEJGAAICADAEECCHDHBACJHFB", "FBGIBAEBGIAEGCICHJFAAEDBIGFHHEFDIEHBFAJBAFBDAGGEEA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBCCCCDABDCDDDDDEAEBEEEFAAFAFBFCFFGAGCBEACCBGFCACACGFGGGCBAGGGGHDEDBADEECABHCCHDGHHHHHIAHBFECIBAEBGIAEGCIBIABECECBCHCGBDCHIBICDBEICGBHHGDACDADICGICHICIFIGBBBIAIGCECIHDDACCAIHGIIFFGEIFCHDDCIIFIIIGAIIJBEDDAFDAIECCBEFDEDGIFJBHEFDIDJADCBCGJCDJDBGEACEIBGCGJDCBDHGDDBCICBCCGJCDDJDGJACBEFDBBEBIHEGEGBGDAFFCCHJCHECEACCCJCJDJBJAJDIABCDGFDGFBCBAIIGDEADCBAEJBHCHIEFBEHCBJEAFFCEIAJEBFGBIGDHGJBIFIDHGFIHGJABIAIHFADGDCFJFAAEDBIGFHHEFDIEHBFAJBAFBDAGGEEAJFFIDDHCFEABBHCHCJDGBBBHFICJCGBBFGHCDCBIDFEJFHEBAHCBFGIJFJFIGHJCHIIACDCEEJBCDFAIDIGFCBHFBJGBADDJGBDBIBACFGADAHFAIAFJDFHHEJGDGBCDDEIFJGFFCFEIHAEFGEDEHEGIEHGAIACHJGGABHEDDJHBIFIEDIGBJHFDDGEDJFGIIIFBAABHCAEDEAIGADGJFHGCIHAHFAJHGFHJIAHBDEEEFBFAAIFAIFFJIBAFAJEEDFBHCAEHICCJDHHGAACJFFHGBCJIDDADCBDBEDBDBJEFBHCBEEBDCBACADBHEEDBJEFEJHBCECCDJIGBICDDBCHECGHCBDDIBAGGGCFFEBFEHGDJIGCACGFFIFBFIIGGJIGCAHAJGBDDBEJBHEADFHJDJCEHGHDDBJEGFCDEABDHJJAADCFIHCFBADEBADEFDICHEHBIBCIEICEIJABIDEHDBAJJDHCFJCJIDFGIDICJJEAAAAJABAHBAFFBBEJGAAICADAEECCHDHBACJHFBJJEBJJFDBHAGIHHEJBCJEAJJFIBJ";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> W = {"ZB", "ZBB", "ZBC"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "ZBBZBCZB";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> W = {"TT", "TT", "TTA", "TTA", "TTB", "TTB"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "TTATTATTBTTBTTTT";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> W = {"C", "CB", "CBA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "CBACBC";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> W = {"DD", "DDA"};
    StringInterspersal* pObj = new StringInterspersal();
    clock_t start = clock();
    string result = pObj->minimum(W);
    clock_t end = clock();
    delete pObj;
    string expected = "DDADD";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test103() == 0 ? ++passed : ++failed;
    test104() == 0 ? ++passed : ++failed;
    test105() == 0 ? ++passed : ++failed;
    test106() == 0 ? ++passed : ++failed;
    test107() == 0 ? ++passed : ++failed;
    test108() == 0 ? ++passed : ++failed;
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22675302&rd=13505&pm=8772
********************************************************************************
// SRM 414 -- RUNNING TO THE STRAIGHT!! 
#include<vector> 
#include<string> 
#include<algorithm> 
#include<cmath> 
#include<utility> 
#include<set> 
#include<queue> 
#include<map> 
#include<cstdlib> 
#include<cstdio> 
#include<cstring> 
#include<iostream> 
#include<sstream> 
using namespace std; 
 
#define REP(i,a,b) for(i=a;i<b;i++) 
#define rep(i,n) REP(i,0,n) 
 
class StringInterspersal { 
public: 
string minimum(vector <string> w) { 
  int i,j,k; 
  string res; 
 
  rep(i,w.size()) w[i] += 'Z'+1; 
 
  while(w.size()){ 
    sort(w.begin(),w.end()); 
    res += w[0][0]; 
    w[0].erase(w[0].begin()); 
    if(w[0].size()==1) w.erase(w.begin()); 
  } 
 
  return res; 
} 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/