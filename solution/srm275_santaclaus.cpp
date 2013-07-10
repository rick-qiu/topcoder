/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3468
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

class SantaClaus {
public:
    vector<int> exchange(vector<string> value);
};

vector<int> SantaClaus::exchange(vector<string> value) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> value = {"ABCDE", "ABCDE", "ABCDE", "ABCDE", "ABCDE"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> value = {"ABC", "BCD", "ZAB"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 26};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> value = {"BCAAA", "ADEAA", "AAXYA", "AAAKL", "EAAAD"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> value = {"VWAAA", "ADEAA", "AAXYA", "AAAKL", "EAAAD"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> value = {"VWAAA", "ADEAA", "AAXYA", "AAAKL", "EAAZD"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 23};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> value = {"BAA", "AKL", "EAD"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> value = {"CCCABCCCABCCCCCBAAACCACAACBAC", "BBCACACAAACCBBACACCBABAACACCC", "BAABCCCAAACBABBAAAAAACBCCACCA", "BBBAAABBAAABBBBCBACCACBABAABB", "BCAABAACCACABABCBCABBBCBCACBA", "BABBCBABCBACCBABBCCBCAABBBACA", "BBBCBAACCABAABACCACABABBBACBB", "ACBCCAACAAAAACBABACBCCAABCAAA", "CCABABCABCACCCACCBABCBAACBCBB", "CBBCBABACBACCBCCCCCBACBBACCBB", "ACBBBCBCCCBAABACBACABBABCBBCC", "BCACBBCCACBABCCCCACABCBBACBCA", "BCBAAAABACBABCBCBACABBBCBABBC", "AACCCBCBBBABCBCBBCCCCBBBAACAC", "ABACBAACBACCAAACBABACBBBBBBCC", "CBAAAACCACCCCCAACCBAAACCAACAB", "BBCCCCCBAAAACAABBABABBCACCCBB", "BCCACBBCCBBBCBBBBACCBCBBBBCCC", "BACCAACCBBAAACBCCCABAACCCBAAC", "CBACCAAABBBABBCCAABCABCCCBCAA", "CCAABBCABAABBCCBBBACBACBCCBBA", "CCCBBCACCBCACBBBBABAABBACCCCB", "BACBBBCABBCBCCAACBCCCCBABBCBB", "CCCCCCACCAABCCCABCABAACBCACCC", "ABBBACCACABACAAACBAABBCBABBAC", "CBBABCBCCABBBBBBBBABCCACBABCB", "BAABAABABBCBCBCCCACCCABACCBAB", "BAACBCACAACBBCCCAABCBCCCCBCAB", "BACAAACAABCCBCACAACBBCCCACAAA"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> value = {"KLY", "PDX", "GQE"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 32};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> value = {"DHFEB", "IAMIA", "FHCGC", "DJJJL", "ADDDH"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 17};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> value = {"OALKL", "MJCKK", "KNKMD", "PMJOJ", "LCEHP"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> value = {"OBOM", "TNFS", "BTQT", "FIDO"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 9};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> value = {"JDIKAE", "EHBANE", "KCPNLF", "FJHOKK", "OAKJMB", "OEHOPL"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> value = {"OBOM", "NNFS", "BRQT", "FIDO"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> value = {"NANL", "MMIR", "AQPS", "FIDO"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> value = {"VMAGECACKAGBAPAEHKPGCNOGLHQFINIIFN", "EWAKCCHKGBHEHEFBBMKGKPOKDQKNKGNDOB", "KQTAAIIDPLDJFLOGIEQFHAOAEPGJMCBMHC", "NFKYLHJHEDQBLOKGBEOEABKHABLGLDIKMF", "AKHLUDAMDKHEIMLHMCMKQJIHCQJQLQJJFM", "HNGJEVEHGPJQEGHGJJNJLMJJAGGICNAIMI", "LIBEDISIGFEKAIIDHBLHIGJECDADDKCDNJ", "KLQHIQKSJLPJNIMIFIEGLKIPPBGNLMOOCN", "FJDMBQHQVJHENKGDJOBBHFEIQMJFMJIJJJ", "CBGFOLOHHSDBPPAOECHBBKMQICPPGGFHNH", "EQBAEFHHEJRDHAHLGDBGEIGJOLGGOOLJKH", "FBEMNABOQMPRMPHEHHCLQDIMLPICMFCCMC", "LJJBLQKALBEKRGJMFHHGDBCGIKAGHAJQFI", "KOKNMPEEFNCHETNJOMLDFQLCLDKNHMMLMH", "IAEQHGIPJGAQMQSJGCPHMLGCKJJDIBFLNH", "MNMKIDBDPBFQDPNTBMHALAFNBJKCMKJGNC", "GDEMBKOQEHJOQDGCRDJFPIFACBEAFMLLOG", "GAPQCDPPCMGHGEEHCONQHFCKJAIPBJHEKF", "PEGGKJKMCBAQIPCPKDTKOIAMIBEICMKMJA", "MLBKBOQPIIAOBNQQHCBPHEMHJCMLFBAILA", "OLPMALJMHMQCDNHKEJMNPGDCLNLEDJCMMJ", "GIBDLFJLGMKBBAAFNDHKKOQHPLLNDKOOOB", "FJQOECDLCNMBIGQGDJGKIBPGDIKPFKGOAC", "MMBKDOCDCHLMACEJJLEODOLRLQBDANDLNK", "PLICPLILEOEIHGNJNMQEIFFQSQQNHGMKNC", "HENNJKKANJIBKIGPADHQDMFOERFNJJACEF", "DGMEMOHPPKIEHBODAPDMGBENEIPFHQKIBK", "FBDBLAHEOGHBCDFIDDJPBFJMPQMSCDCFDA", "AONPCOJAKKHKOJMKIHGLCPPLDQGGOGADPN", "NNOQHMAAAIHKFBKIEAPGPMLCIPLFBQCCMK", "MELIIDIGPFBGNCIPHDEOAGJCPDDFIQPKIK", "MABPJCCJEJLHFNIKAGPDKALMHJBFENONBJ", "CEDBJCECPKEEJLENKMCNBJQMMHNJFPGEPJ", "EMGFEOMDKPDBJJQFDQLHPIBAQHOOMLGGOP"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 1};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> value = {"LBECAADAAAEFFBGHEBHAABHDHCEEEDAEFAADBCCGFHGG", "EJCHEDGGBBCGHCFAABBCEAFHFHDGHADCACHEEACEABFE", "CDJBDGBCGBCBBBEGADFEEEGEDGDCDEBBAGBHBHEDAADA", "ECBLBADCBCGFFEAFBBAAACGAHGGAHAFCAGGAHFDCABBB", "AHBCKEDEFBEFHEEECGDCBABCCFBCHDGGEFGABBGHHGFH", "GCDCHLCEHDGADGDDAHDBGEDDGFFFBFEECEFEFGFBFFAB", "DGGFHALEAEEADGECDGHFBADBGHAADHFBDBDCEEAEHBBG", "HCEGHDHJGEHAAABBCBHHAAEBAEBBCEHEAFHCFBAEGDAE", "CGDFDDAAMEDFDHCADDEBECDBCEDHAFFAEADBFFHBECFE", "GFGHBBFCCJAEFHHCDGBFFDGHGCDHAEBDBFGEBFBGHEBG", "EDFBHDDAEFLGGBACDGHHDEEEBHDAEEAAADCFCGBFFCAA", "FFBGBBGDDEAKHCAEAGGCEGDGGEBCFFHHEACBGFCHABFA", "GFAAEGEGHGFAIHHCDFCGHAGAEAFGBGEHFAEECCACEDDG", "FHBABBCDDCHCDIACGCDDFEHCAHEBEACHBDDCDAAGCCGF", "GFHFAFACGCGEDEHDGAFDAEFDBECHFBBGCBAEFFACGBBC", "AFDACCGAFCGFDGDJBEBFAFAFDCACFGGFDCFHHAGCAAFF", "GGEAEBDBCHDHDHBFLCEAAECBBCCDAEABCDDAGFGCCFDA", "DHFHHDFCCCADDHHFDLGHEBHAAFBBBHCBEBEEEGBHFGHA", "BFFHCADCBAECEDDDBFKHBBEDECFCCDCCFDDFHDGHGGHB", "ADGBHGFCDECHFFEEEBFJADFEBBBDBGFHFAHBCGDFCFGH", "CBFDHAGCAHDCGFEHDEHHLHEDAAEFGEDCHGEGFDBCHGGH", "ACAHAHDHAHDEAFEEEBAHBIHCDEEAACHGGAAEEGEABBFB", "DHACGHHDDGCGDDBHFHDAEDHBACGCEAABHFCDCBCFGCHH", "CEFHBABAAGFEFCHGDEAFGFFICAFGEDCEHGCECCBEFADC", "BGAAAEHEDDHEBGHAGEGDGDGEHFDBCAABCDFBHGCCFBAH", "FDEAFFCCHBBCBEGAFGGEDEDBGIFHDAHDGDHBADBHEBDE", "CBFEFCEDDADEEFFAECDAFBBEGFIECBFGEDBDDEGBCBCE", "EACHGECAFFDAEFFGAHDABAHGGDAHAHGECFBABECABEEF", "ACFFABCCCDEGEFEFEBHGGBBHEDDBJHECCGBDBEDBDCEH", "GCDBBEBADDFFEFDFDGDEFGAFADACCKFHDFDAGADBHEHH", "FDAFAECCHBDAAAAFGHGBCBHFDACEAGHCDFGCFDCAGFEC", "DDEEDEGFFHEBAAAFHCCFAAGGGCEBHDBIFFFEBDECABAE", "FDAAAHBHDAABBFHAEHHFGGDEAEAHAAFCIFEDEFACDEDH", "GDCAEBADGCBFHDEBEEGEFFBDGBFBDFFFAKDFDBFFGHHB", "HDDHCFDGEAACAAGAHFADHFGEDGDCBHFAGBHDFBFFEADA", "GGBDFFABCCHDDACBAAHGFAADHBHHFBFHFGHHEFAEAGDG", "HCHHBFECECHGBEEEGACGAGAEFEDACFDGEGHBHDGFCEFE", "EHCEDAHFFFFFABBGHGFECCAEBEGDHAEABHBBBIEFEHDF", "FDCADAFCAADFBGBCEABFFCCEGCDCHAEBAHBECGFDFBHC", "FAAGBEBFACGCDACHDDDGABEFEHEFAHEDDBGCHFBICHEC", "HECEEGAEFACEGFBDEGCDFFBEFGDGEFFAEGBHAFFGGAAH", "ADDHBDAEBGBDDACEDHEHBHHDEACCEADDCEBHDCCABGHG", "HDFHHCCBAEDEAFBGGEEFCFDFBGFHECAHCDEFDDFAEEHD", "DHECFBFHGBHGEHGEGBFGHDFDDGAGHDCGBGEHGHBAGDHI"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 1};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> value = {"MABAFFCEEAIEHI", "CJAAECDDEEBAGE", "ABKABBGHEEGGIF", "CEFHBGEADEEDDE", "GDAGJHIFCABFFA", "DBIFAIDBGBBCCC", "BIAGEIIFIHACHD", "GBBFDFGIDAECDI", "GBBABECHGBHGDF", "BAFGAICBDHBFFD", "ECFADFDECCHABF", "FHGAICADEGGIHC", "HDHDIAAAGCFHGE", "EDDDCIHGGIFHEI"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 1};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> value = {"VGFNEHFJIHBKJLMCNKBAHILIHKKAH", "AQDDBGAABDFDEEDBGHAEAKJJJFHNA", "DFUGFIMMMHFGAJBNHIEKMKDKCCDCA", "DCJREHFJHMNHLLECDKHJEBGGKGFIC", "LFNLOACGDJEELDEHDDDNAEIDMKGDG", "ABEKMQABMLEHKJCGBGICBLLFJEKEM", "EIFKNJODJFIFDFDBMLBADFBEJIHBG", "IKGFICLOHAJDELKBLJMABLNGNDBHJ", "HLBCHGFCQEHBNAEEBLDJHGFILHNCC", "GBJBBBFKBOFHCJEEJIHEJGMJFBJNC", "AJGHHIGIJLOLIEFFIKKHJILLCENFH", "JLLJDKIKLIBNENAAHAMFAIBJMADFK", "MMJHFFIECFJIOBKNHEHHFHKBHBFCG", "JKLGMDJFFDLEHOCGHMDDFHBGBHGEF", "EEKKJNMHNLAELDPAKFFNJFIEKCIGJ", "DCJHKKHNNIEDDMANEJGLFLGBCALLK", "LCLDGHAEKHHKDFBMMIAFJHDHHDMJB", "HHECCGMNNAMANFCIIOLJDMBKLHBKD", "GDIDGMFAKFCBNDIHKGMFGJGKLFLDE", "LLDHGKGGGMBLLIDFMIMPEJKNGALLH", "JFGFIKLDKCHDNLCGFMLNMJCIFJGIE", "FBKDDHAEHMKIMCFIBKKMGMCKNDJEF", "BBBKMLKDKDAMHHNCCNNIBNNHKBKLF", "LMDKLLEJCJLDFICMFNIFBAAMDBAHG", "HFNDMIJDMKCMBFECJEMJFGFLNAMCI", "KCKGGNDBAALIJDIDBGBIEAINHJIHE", "BCJNLAFJGCALHDDBCAAKMLFDKCMNK", "HDGFFNCBNBHLMEKEGBBDBEGKIHFLA", "DNNNCGJFHJIHMLMGKJDMICMKALKAM"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 1};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> value = {"NAIDKGGHDGBCEAJB", "KQAEIGGLGAGDFALD", "HHNCJFGFFFAFIFJL", "CHGLGAAHFEBHEGFC", "JABFNEBFHFLHAEDE", "CIKIENCKFIHEBGGE", "ILEGDEJJFEFJFAIC", "KGGADBBKDACIAACA", "JAHBJABKJCACGCHC", "CHLIKDCBLLALHDID", "ILALCJGAELJGIFBF", "JBGIJIFJJDALIEIG", "BIEHBLLHIHGKLCBF", "ELJFFIJHLKDEGGLI", "AIAJGKHKDGABFBKE", "HFBKEKGBHCHIGDJH"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 1};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> value = {"BAAAAAB", "BBAAAAA", "ABBAAAA", "AABBAAA", "AAABBAA", "AAAABBA", "AAAAABB"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> value = {"HAAAAAG", "HHAAAAA", "AHHAAAA", "AAHHAAA", "AAAGHAA", "AAAAHHA", "AAAAAKH"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 1};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> value = {"ZPXQDHLPTS", "MZVJXMGAVJ", "QGOYGSXJHT", "JLNUWCRLWC", "RXTIJZWAWS", "RQYWRHLVSO", "FTNEPHNDZK", "LVTVVFFHJS", "VBLGJHRAEZ", "GFCBYNVLQZ"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 26};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> value = {"XGAIEWTAQU", "KZSWKKPFQO", "MYVJMHJOXU", "VMBZNVKWJY", "BJVQZMDDLX", "LWTACZSVIV", "JUYJKKZUAO", "JXXKYDAVEP", "JFQDWGWJUM", "KKJVZHYXRZ"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 3};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> value = {"ZDAKLCLBII", "MZEUNCBYKF", "SYZLJXGSFW", "RWLZFQTROH", "UEUKUMIEKG", "GKNGLZXTGK", "XUZBZZZZBN", "VPZFFMWZQW", "VFOFRMKCZW", "SUSSCGDFIZ"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> value = {"VWAAA", "ADEAA", "AAXYA", "AAAKL", "EAAAD"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 5};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> value = {"ABCDEFGHIJKLOASDFSADFASDFSADFIUSAFIUKSAFHJKSAHFKDH", "DSGFJKFKGHSGJSAFJAFAOSDFJDHIASFHJSAHDGFUISAGFEGYAF", "GFIJODSIFGJOESADOFHJSAFKSAJHDFKJAHSFIUEWHICXNIUAEN", "GHFJDSGHJDSFGADSOFIJASODFIJWALFKDLSAFJLSAFKDJLSAFJ", "SADFHKSADFJNUEHUIEWFHEASKFHKAJSDFHKAFHEKUASFHEKSAH", "SADFIKUAGHSFKDHJSAFHSAKUFHUIEWHFIAFHKASFHIAFHEIKAF", "AKSFHAFHKAEFHKZUSFHEKASUFHEKAJSNFICKANCKUAENCUKSZF", "DEFGHIJKLOASDFSADFASDFSADFIUSAFIUKSAFHJKSAHFKDHSDS", "GFJKFKGHSGJSAFJAFAOSDFJDHIASFHJSAHDGFUISAGFEGYAFSA", "JODSIFGJOESADOFHJSAFKSAJHDFKJAHSFIUEWHICXNIUAENSDF", "FJDSGHJDSFGADSOFIJASODFIJWALFKDLSAFJLSAFKDJLSAFJSD", "DFHKSADFJNUEHUIEWFHEASKFHKAJSDFHKAFHEKUASFHEKSAHSD", "FIKUAGHSFKDHJSAFHSAKUFHUIEWHFIAFHKASFHIAFHEIKAFSDF", "FHAFHKAEFHKZUSFHEKASUFHEKAJSNFICKANCKUAENCUKSZFSFD", "SADFIKUAGHSFKDHJSAFHSAKUFHUIEWHFIAFHKASFHIAFHEIKAF", "AKSFHAFHKAEFHKZUSFHEKASUFHEKAJSNFICKANCKUAENCUKSZF", "DEFGHIJKLOASDFSADFASDFSADFIUSAFIUKSAFHJKSAHFKDHSDS", "GFJKFKGHSGJSAFJAFAOSDFJDHIASFHJSAHDGFUISAGFEGYAFSA", "JODSIFGJOESADOFHJSAFKSAJHDFKJAHSFIUEWHICXNIUAENSDF", "FJDSGHJDSFGADSOFIJASODFIJWALFKDLSAFJLSAFKDJLSAFJSD", "DFHKSADFJNUEHUIEWFHEASKFHKAJSDFHKAFHEKUASFHEKSAHSD", "FIKUAGHSFKDHJSAFHSAKUFHUIEWHFIAFHKASFHIAFHEIKAFSDF", "FHAFHKAEFHKZUSFHEKASUFHEKAJSNFICKANCKUAENCUKSZFSFD", "SADFIKUAGHSFKDHJSAFHSAKUFHUIEWHFIAFHKASFHIAFHEIKAF", "AKSFHAFHKAEFHKZUSFHEKASUFHEKAJSNFICKANCKUAENCUKSZF", "DEFGHIJKLOASDFSADFASDFSADFIUSAFIUKSAFHJKSAHFKDHSDS", "GFJKFKGHSGJSAFJAFAOSDFJDHIASFHJSAHDGFUISAGFEGYAFSA", "JODSIFGJOESADOFHJSAFKSAJHDFKJAHSFIUEWHICXNIUAENSDF", "DJDSGHJDSFGADSOFIJASODFIJWALFKDLSAFJLSAFKDJLSAFJSD", "DFHKSADFJNUEHUIEWFHEASKFHKAJSDFHKAFHEKUASFHEKSAHSD", "FIKUAGHSFKDHJSAFHSAKUFHUIEWHFIAFHKASFHIAFHEIKAFSDF", "FHAFHKAEFHKZUSFHEKASUFHEKAJSNFICKANCKUAENCUKSZFSFD", "GFJKFKGHSGJSAFJAFAOSDFJDHIASFHJSAHDGFUISAGFEGYAFSA", "JODSIFGJOESADOFHJSAFKSAJHDFKJAHSFIUEWHICXNIUAENSDF", "FJDSGHJDSFGADSOFIJASODFIJWALFKDLSAFJLSAFKDJLSAFJSD", "DFHKSADFJNUEHUIEWFHEASKFHKAJSDFHKAFHEKUASFHEKSAHSD", "FIKUAGHSFKDHJSAFHSAKUFHUIEWHFIAFHKASFHIAFHEIKAFSDF", "FHAFHKAEFHKZUSFHEKASUFHEKAJSNFICKANCKUAENCUKSZFSFD", "GFJKFKGHSGJSAFJAFAOSDFJDHIASFHJSAHDGFUISAGFEGYAFSA", "JODSIFGJOESADOFHJSAFKSAJHDFKJAHSFIUEWHICXNIUAENSDF", "FJDSGHJDSFGADSOFIJASODFIJWALFKDLSAFJLSAFKDJLSAFJSD", "DFHKSADFJNUEHUIEWFHEASKFHKAJSDFHKAFHEKUASFHEKSAHSD", "FIKUAGHSFKDHJSAFHSAKUFHUIEWHFIAFHKASFHIAFHEIKAFSDF", "FHAFHKAEFHKZUSFHEKASUFHEKAJSNFICKANCKUAENCUKSZFSFD", "GFJKFKGHSGJSAFJAFAOSDFJDHIASFHJSAHDGFUISAGFEGYAFSA", "JODSIFGJOESADOFHJSAFKSAJHDFKJAHSFIUEWHICXNIUAENSDF", "FJDSGHJDSFGADSOFIJASODFIJWALFKDLSAFJLSAFKDJLSAFJSD", "DFHKSADFJNUEHUIEWFHEASKFHKAJSDFHKAFHEKUASFHEKSAHSD", "FIKUAGHSFKDHJSAFHSAKUFHUIEWHFIAFHKASFHIAFHEIKAFSDF", "FHAFHKAEFHKZUSFHEKASUFHEKAJSNFICKANCKUAENCUKSZFSFD"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 38};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> value = {"YAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZ", "ZYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AZYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAZYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAZYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAZYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAZYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAZYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAZYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAZYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAZYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAZYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAZYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAZYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAZYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAZYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAZYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAZYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAZYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAZYAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAZYAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAZYAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAZYAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAZYAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAZYAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAZYAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAZYAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAZYAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAZYAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAZYAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAZYAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZYAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZYAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZYAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZYAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZYAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZYAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZYAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZYAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZYAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZYAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZYAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZYAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZYAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZYAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZYAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZYAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZYAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZYA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZY"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 1};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> value = {"ABCDEFG", "ABCDEFG", "ABCDEFG", "GFEDCBA", "ABCDEFG", "AAAAAAA", "ZZZZZZZ"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 6};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> value = {"ZTMVIEDIVTFOPUYWTBLYKVTTBXGPYUYTVOCLZDAORHMNEOFJHX", "XZJRTYQMVUYTFWBXAUPNPBJXPXEMXWJADYUFEABDMLUEQAQKRM", "KBZPEUXVKBBPBIHBNVPQRZVLLHCRPOTJCHQJYBRJNCEIDLMHHR", "KRRZPMIFAMWHWESLATHLPEPLJIIPUJWBUZDGWASTVWNERYNJVR", "PRKIZORGTOLQMSSBBRRXJGQIKSDFLDBGDCOMNJXMDDIZLNKEZA", "VJIFOZMNZHMCJVAIMYAJRXMMOCWYKAGGKPNZFSCMHWMUBGYHNQ", "JQIBUPZDGAPRDTZJYGPFRKECNGDXGIGEWCSPMHDMRQURQKIIZT", "JMSEVLVYQPDBSJZSYMJTKBJUSZMPPQBWGSUQJBGFHAOVSILFRE", "NGWDNMPUZKSNOWLBXJVESOGZRCYWSGTEKALVNNOHFPSCLMTYOF", "GJVQRUYMUZHZPAZYVIUANGGMZJFXNEBNMJUSRQIDPXIJWBZQYS", "QSRYHEQHXMZXSRIKXEKGDVOARPXPKBLVHFYBEJPCYFGXLHFQMS", "NEPGQXRMXJJZOGYARGHBKXFMELIBCOFBNSYZNZUFSVTIRHVHTE", "KMDDKHIUONBAZAINDHGKKQEVGDHTDHAOUPDKVYDSPHQLXUBFES", "FLGYDRSTFXUKVZQXYHKMPWVYWDBPQBWRYFNLRIFWXWPZLAVUQK", "WTYPMSXBZYQXHCZIDKTLOXPXIFGUHOSHVKJRTMAFIWRSBIMWRQ", "QEBYRJGVVPRGIDMZVAFVLFJXSTQUSIPNFCOUKCNHKWSCHWTIYK", "AEFTNTVENYRHSRAHZXRMDTCIYIBCFKRTWRHZLASQQKBZDDYRWM", "SNWCEDZGQSZMKCHZLZMGBHOXJAWTVMYSSCURCQOFQNMNELGDIA", "ZAFSBKZKLADUNRBREUZZPHFQFZWBGHAZQYNNFUWLRUDKOJCKPC", "WFRSQSGSCNZNBGEJLAQZKKQLBRTFTMZNGLLOJPKHYBANMNMWGA", "LAGTNPVTEEZYXKKTOBQCYMTXHEIQQBNTQXDVAMSBSXMPOXJIKV", "FDJJZFJFJVSFXYXXBECWDZNNPLMTQRWHRZZWDOQEKDITIZOMCG", "EOXESVJYPRQLYMYZHAPIYWZIEZQLGBFVIFILJASUAOHVANCTUN", "AQCGUORWYTMVPQEABLHLFLGZJJNIJMHLNGOCKQFKCTAYXQPSFW", "TTHQRDUFQZWCMIINRAQIDPRCZOEQYKVLAAQSYIOTRIQCCNFNRW", "VJCDRCRLVBVWNJLYRDPPHCCCHYWOBMHNTPYGUSESCJVDSJJTIC", "IPZXSDSMXHOHZDAJFRNOQWTSGRYWRGIKMCMTOSQLPSXINQVUZJ", "QQDVBTBQJODDNUCQHVZHYVBOFXNZZTRFWUFNBPXQURWNKGTMGX", "QYWYOAXFZZPURGVFLDWJFEJNVVVJZOVSHNHEZOIOZXVVZVVWYF", "HLCQFZJNDIOIPJNBWMARWDTZCNWRGZBDMMBGZLFDBCVVHSYKEY", "FIZSLJDFBIKTRZQWEFLIAEHRJPAANXZHIBEPOIHGCAVPPZBMZG", "EPOXQRBDVNJKXVCNMWLETZRRPTLPTYJZBVAYLFPFFPGPFWRCUQ", "SOJASGLCQVRMZBLUXECFHORUPSZOMGJOZMORSYWKZFENNEAMIB", "WZNMCHVBRKDXWQXOKXNOBIDBJPRABZDEVZGESQVKDCGOMALEBG", "VTEKKJAARYHBJTMUPKGMGIEORTIHDBOVUNZRAADINJHHJHJYOK", "HSMTYRVOJAJBKKSLYDQHSTTVQUOLVQLXHCWZNYFZKWMDAHDHQT", "GREXRDQECJIXNTUXBOXMKZXMANUJYJDWWQSGZFUPGDJEUDAKDK", "DZUUSLYILPSMCVMEQIPKIZBYZENNRAHRVEPIEZPHWKPJJZNVDK", "BVBSXAIWIAIZLEUYAYUTIPCPIPIAHBTVBEYMURYGNGRETLLOFS", "RPHPVHXIOVCYTFGYQYSFRENKUKQKNHSBKBGAELKZNGNMFWLRXZ", "WCAQNHRWRDLNJXCNIIZAYFOCFNNTKSTBKHTEEBICZJYLCSOJKK", "ZCOWPHNUTUGLOPECEYUGDRJVELSIMGBCLPYCZECXHYSWDSNTEQ", "YNAAUVRHTZSZXSNMMPIDSNBXWGONCTRDVVNEJIZAEZZPAYUGRK", "JQJWHBEMJYCLQICGQXUFMEZDAIOBTFWVRYOPKRMXKBFZPEBRLA", "KWRHQGZJVVGKWPDMJICSKYEVZITMLYWIIPLRVNCGDMSVZONGYT", "SFICDOSLXWXGSCXKHKUAWGCZWZAASDCLEJQKPRGIZEXMLZHYTG", "GSBHNIJMANMJRPPPEAUGMNGSKXKRVLDNNYEEODALTGWZUMYCAA", "JVJJPFKFXZNTSGFBXNYAVDXLDPIEUVVOQJSIPSMUPSWBWUQZZU", "DHXSTFNSYXVJKMTOQFVDIECFUIJOZPNYFUKCFONAXASPDWKPZL", "YFERHIQVRFAOVVOMIZMSHZPGCLQJWMGWEDXPZPTKTQPTCOAVCZ"};
    SantaClaus* pObj = new SantaClaus();
    clock_t start = clock();
    vector<int> result = pObj->exchange(value);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 1};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=156592&rd=8072&pm=3468
********************************************************************************
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
using namespace std;
 
typedef long long i64;
typedef vector<int> VI;
typedef vector<string> VS;
#define REP(i,n) for(int _n=n, i=0;i<_n;i++)
#define FOR(i,a,b) for(int i=(a),_b=(b);i<=_b;i++)
 
class SantaClaus  {
  public: vector <int> exchange(vector <string> value);
};
 
vector <int> rst;
int n;
int r[60][60][60];
 
vector <int> SantaClaus ::exchange(vector <string> v) 
{  
  rst.resize(2,0);
  n=v.size();
  REP(i,n) REP(j,n) r[i][j][1]=v[i][j]-v[i][i];
  FOR(t,2,n+1)
  {
    REP(i,n) REP(j,n)
    {
      r[i][j][t]=-10000000;
      REP(k,n) r[i][j][t]>?=r[i][k][t-1]+r[k][j][1];
    }
    REP(i,n)
    {
      if(r[i][i][t]>0)
      {
        rst[0]=t;
        rst[1]>?=r[i][i][t];
      }
    }
    if(rst[0]>0) return rst;
  }
  return(rst);
}
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/