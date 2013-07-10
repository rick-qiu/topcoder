/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7747
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

class GuitarConcert {
public:
    vector<string> buyGuitars(vector<string> guitarNames, vector<string> guitarSongs);
};

vector<string> GuitarConcert::buyGuitars(vector<string> guitarNames, vector<string> guitarSongs) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> guitarNames = {"GIBSON", "FENDER", "TAYLOR"};
    vector<string> guitarSongs = {"YNYYN", "NNNYY", "YYYYY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"TAYLOR"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> guitarNames = {"GIBSON", "CRAFTER", "FENDER", "TAYLOR"};
    vector<string> guitarSongs = {"YYYNN", "NNNYY", "YYNNY", "YNNNN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CRAFTER", "GIBSON"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> guitarNames = {"AB", "AA", "BA"};
    vector<string> guitarSongs = {"YN", "YN", "NN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> guitarNames = {"FENDER", "GIBSON", "CRAFTER", "EPIPHONE", "BCRICH"};
    vector<string> guitarSongs = {"YYNNYNN", "YYYNYNN", "NNNNNYY", "NNYNNNN", "NNNYNNN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BCRICH", "CRAFTER", "GIBSON"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> guitarNames = {"XSWLEJGJFPJTAPNEVYLNVIBGPARTRGSZVMFTJOFAPVKVNCQAJA", "JDIROLNQTU", "FHV", "MFTURTGHJYLLFWDIHZMSXDMUH", "YYZCFHNVLFMVPSHZMRGDWMGYDBHUAQPZRRLHHQKICQXN", "SFKPJZSCYTTZXTNSXOUJICOUBIW"};
    vector<string> guitarSongs = {"YYNYNYYN", "YYNYYYYY", "YYYYYNNN", "NYNYNYNN", "YNNNYNNY", "NNNNYNNY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FHV", "JDIROLNQTU"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> guitarNames = {"HZJUURQCL", "QJDHIOCQCSKEBNXYIVANPXPGGM", "FCCPBYPNSVYMIFNOY", "XKKHVWANSLUMAVY", "ORVVCFDREUOILZLFSMCSLKYPNMBLIGIMMTWHDZJEZKHYVKCT", "MMQIHIPUVTGXSRUAYYSO", "TOAGGWBAIQSYWOFGFXSNOWROEEQCNEQMZPQXPSEMCEWAXJICE"};
    vector<string> guitarSongs = {"YYNNYNYYNNNYNYYYNNNYNNNNYN", "YNNYNNYNNNYYYNYYNNNNYYNYYN", "NYNNYYNNYNNYYNYYNNYYYYNYYY", "YYYNYYNYNNNYYYNNYYYYYYNYYN", "YYNYNYYYNYYYNNNYYYNNNNYYNY", "YYNYNNYNNNNYYNYYYNNYNNNYYN", "NNNYNYNNNYNYYNNNYNNYYYYYYY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FCCPBYPNSVYMIFNOY", "ORVVCFDREUOILZLFSMCSLKYPNMBLIGIMMTWHDZJEZKHYVKCT", "XKKHVWANSLUMAVY"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> guitarNames = {"EHVOXGL", "PVTVREOPNMMPBNGAELMEZDWHRFEWAMDREYECSBHYYAKR", "PMZNMLXTDFNKJNPZSDYQWZ", "KWHPLTXGQFURCJIUWVVCBZSGZOZGMRMTEMYXSYDQVMYYW", "DUEUT", "HHJHMW", "XSW", "BUQKZ", "EUHFLWJFHZOBIFTK"};
    vector<string> guitarSongs = {"YNYNYYYYYYNNNYYYNYYYNNNNNYYNNNNNNYYYYYYNY", "YNNYNNYNNNNYYNNYYNNNNNNYYYYYNNYNYNNNYYYNY", "YNYNYNYNNNYNNYYYNYNNYYNNYNNYYYNNYYYYYNNYN", "YNYNYYYYNYYNNYNYYYYNNNNYYYYYYNNNNYYNYYNNN", "NYYYYYYNYYNNNNNNYNNYNNYYNNNYNYNNYYYYNYNYN", "NNYNYYNYNYNYNYNNNYNNYYNNYNNNNYYYNNYYNNYYY", "NNYNNYNNNYYYNNNYNNNNYYNYNYNYNNNYYYYNNYYNN", "NNYNYNNNNYNNNNNYYNNNNYNYYNNNNNNYYNYYYYNNY", "YYNYYNNYYNYYYNYYYYYNNYYYYYYYNNYNYNYYNYNNY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BUQKZ", "EHVOXGL", "EUHFLWJFHZOBIFTK", "PMZNMLXTDFNKJNPZSDYQWZ"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> guitarNames = {"TNGUWWJURXKCYJQODEZLSGVGREXTCM", "IYJBDGZCGARNZYWSHDJWZKBHTZVHZDXTYSE"};
    vector<string> guitarSongs = {"YNYNYNYYNYYYNNYNYYNNYNYYYNN", "NYYYNYYYNNNNYNNNYNYNYYNYYYN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"IYJBDGZCGARNZYWSHDJWZKBHTZVHZDXTYSE", "TNGUWWJURXKCYJQODEZLSGVGREXTCM"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> guitarNames = {"MAGAWPEMGYIYJPUWZCBE", "PGIJNQYGPZNOVZYAIJZJIOIBIFADU", "MFVUZRNMYVQVVDUT", "OZLSJDPELGLFKHKKUUPROQMXJBEANYUWHMZWMAMQTWTJHVB", "UXBVRBETNGRXQGDHFFFAGYZNVCKQIWYAJMRUBYLTDPBUMJSWJ", "VPVNLXZCMDYDGHXZPAGVXWJCDCWN", "ESGDUGDVHQAQKUQOQLBKRAUL", "EVQZYVTNQQJPGNXQLOIQ", "HTSRJXHAOCTZUXOST", "HGOIHDRWFQBFK"};
    vector<string> guitarSongs = {"YNNYYNNYNYNNYNY", "YNNYYNYNNNNYNNN", "NNNNYYYNYNYYYNN", "YNNYNYNNNYNNYYN", "YYYYYYNYYYNNNYN", "YNNYYYYNYNYNYYY", "NYNYNYNYNYYYYNN", "NNNNYNYNNNNNYNY", "NNYYYNYNYYNYNNY", "YNYYNNNYNNNYNNY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ESGDUGDVHQAQKUQOQLBKRAUL", "EVQZYVTNQQJPGNXQLOIQ", "UXBVRBETNGRXQGDHFFFAGYZNVCKQIWYAJMRUBYLTDPBUMJSWJ"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> guitarNames = {"FBOXHSBLGVDLESMXMVVGNWTGVZ", "BEDCTIHVGLOQSVVOYVDSASXJ", "QWELRUTXWNSIABQCGXQZAYCXCVUXUSHTZDKRUZXOBXZNYLQH", "UTCYDEJJSUHRUDRBWSFSCPDZG", "RMSMLDLEJGGPUURFI"};
    vector<string> guitarSongs = {"NYYYNYNYYYNNNNNYYNNYYNNNNNNN", "NYNNNNYYYYNNNNNNNNYNNYYYYYNN", "NNNYNNYYYNNNNYYNYYNYYNYYYNYY", "YNYNYYYYYYYNNNYNYNNNNYNNYYNY", "NNYYNNYYNNNYYNYYNYNYYNNNYYYN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BEDCTIHVGLOQSVVOYVDSASXJ", "QWELRUTXWNSIABQCGXQZAYCXCVUXUSHTZDKRUZXOBXZNYLQH", "RMSMLDLEJGGPUURFI", "UTCYDEJJSUHRUDRBWSFSCPDZG"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> guitarNames = {"SSEGPRQMTKBGFBCRRKEGJJMOHRBKBYPLTJWLYWMMAB", "GVFCZELUECYETGCEKRMFGNPZBBUZBJJAMQUFNRHSXKPALSB", "OUB", "XDTDCDLJSLXGJBCXQBQWOTXKCYWROBIEJRVBOQQ", "BGFSNQXYKCVQ", "EWSHSDWILYVBWVYALNRFYVXGCVMOSYQRTSCZDFY", "OTEICQWSGSTQHETOFG", "DULXAUA", "PDCRBPDKYNCSRYICZUGJAKGNZQSHNWC", "RDJNNDSUWNIZNPRVCYZWDKY"};
    vector<string> guitarSongs = {"YYNYNY", "YYNNYN", "YNYNNY", "YYNNNN", "NNYYYN", "NNNNYN", "NYNNNY", "NYYNNY", "YYYYYN", "YNYNNY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BGFSNQXYKCVQ", "SSEGPRQMTKBGFBCRRKEGJJMOHRBKBYPLTJWLYWMMAB"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> guitarNames = {"EDKLAUDKUQAZX", "ULMRYQBKQIEYKZHDVYZZHDRMVHBGJQAXTL", "SXSIZTCODVPQYIEFDBYNIEVAOWOAITCELLTCYQFRDGGCQWGYF", "RXXAYFQCNRIOOTZNKMCBEDEDFYHSWEFMFB"};
    vector<string> guitarSongs = {"NYYNYYYYYNYYYYYYN", "YNYYYNNYYNNYNYYYN", "NNNYYNNNNYNYYYNYN", "NYNYNNNYNYNYNNYNY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"EDKLAUDKUQAZX", "RXXAYFQCNRIOOTZNKMCBEDEDFYHSWEFMFB", "ULMRYQBKQIEYKZHDVYZZHDRMVHBGJQAXTL"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> guitarNames = {"SVSFKAUPEYKZNQRMHUOZWCHKLQAURTULYCCDITNL", "AUU", "UXXZDPTRWLNXQXJFOQFXIBODHHDNOYYKGBLZ", "GKO", "MEOPFMCSELQSFVZCPVZZIKDDHQCWEYJDHED", "QPGZNRNJR"};
    vector<string> guitarSongs = {"YNYYNYNNYNYNNYNNYNYYYYYNYYNNNYYNNYYNNYNYNNNNY", "YYYYYYYYNNYNNNYYYNNNYNYNYYNNYYYYNNYYYNNNNNNNN", "NNYYYYNYNNNYNYYNNYNNYNYYYYNNNNNNNYYNYNNYNNYNY", "YYNYYNNNNNNNNYYYNYNNYNNNYYNNYNNYYNYNNNNYNNYYN", "NNYYNYYYNYYNYYYYYNNYYNYYYNNNYYNNYYNYNYYYNNYYN", "NYNNNYNNNNYNYYYYNNYNYNNYNYYNYNYNYNNYNNNNNNYNN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AUU", "MEOPFMCSELQSFVZCPVZZIKDDHQCWEYJDHED", "QPGZNRNJR", "SVSFKAUPEYKZNQRMHUOZWCHKLQAURTULYCCDITNL", "UXXZDPTRWLNXQXJFOQFXIBODHHDNOYYKGBLZ"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> guitarNames = {"IITHNFLUIGJKIPMBTREQYXNJAVHVN", "DNRXGOEUMGQDOWQDPCJHT", "YYLPDI"};
    vector<string> guitarSongs = {"NYNNYNNNYYYNYYNNYN", "NNYYNNYNYNYNNYNYNN", "YNNNNYNNYYYYNYYYYY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DNRXGOEUMGQDOWQDPCJHT", "IITHNFLUIGJKIPMBTREQYXNJAVHVN", "YYLPDI"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> guitarNames = {"BDBZCNLEXNBTJHZHJSNJGEOJJHHNZP"};
    vector<string> guitarSongs = {"NNYNNNYNYNYNYNYYYNNNNYYNNYYNYYNYYNYNYYYNNN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BDBZCNLEXNBTJHZHJSNJGEOJJHHNZP"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> guitarNames = {"GE", "GFFVEIS", "ZROCYTAEHOSXXEEX", "QSTEYU", "CKSOKLOCQNQBCFUZFZIQOIKFRNUWMIXBUTFYAA", "YYRHGJUACVTLAUZQBLVEKANNVFCEDXSYH", "NTDUGJUGCRPM", "UUWSLTFRAKJO", "GASGCAWJ", "CMQJRYMFGIPAZCVIPHOCDQDCWDWPUUJQJHDF"};
    vector<string> guitarSongs = {"NNYNNNNNYNYNNYNYYNNYYYYNNYNNNYNNYY", "NNYNNYYYYYNNNNNYNYNYNNNYYNNNYYYNNY", "YYYNYNNYNYYNYYYNNYYYYYYYNYYYYNNNNY", "NNYYNYYNNNYYYYYYYYNNNYYNNNNYNYYNYY", "YYYNNYYYYNNYNYYYNYYNYYNNYYNNNYYNNN", "NNNNNYNNYYNNNNNNYYYYNNYYNYNYNNYNNN", "YNNNNNNYYYYYYNYYYNNYNNNNYNNYYNNNNY", "YYNNYNNNYYNYYYYNYYNNNYNYYNYNNNYNNY", "YNNYYNNNYYYYYNYNNNYYYYNYYYNYNNYNNY", "NYYYNYNYYYNYNNNYYYYNYYNYYYNYNNYYYN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CKSOKLOCQNQBCFUZFZIQOIKFRNUWMIXBUTFYAA", "CMQJRYMFGIPAZCVIPHOCDQDCWDWPUUJQJHDF", "ZROCYTAEHOSXXEEX"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> guitarNames = {"NFREBTTQKUBYPWCMDJ", "DM", "KIERWPXJUATBYANIQLMUDIKA", "IFIFFOTZJHYAU"};
    vector<string> guitarSongs = {"YY", "NY", "YY", "NN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"KIERWPXJUATBYANIQLMUDIKA"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> guitarNames = {"BMAPTJZXTQEHEGATWHDQQUQYRFMSOMEGIYJTXWATNJE", "AOSYYNIDTARKDYMSRRGYOXIJFJFT"};
    vector<string> guitarSongs = {"NNNYYYYNNYYNYNYNYNYNYNYNN", "YNYYNYNNNNYYNYYNYNYNNYYYN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AOSYYNIDTARKDYMSRRGYOXIJFJFT", "BMAPTJZXTQEHEGATWHDQQUQYRFMSOMEGIYJTXWATNJE"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> guitarNames = {"SJUNJYTLLCWBXBC"};
    vector<string> guitarSongs = {"YNNNNNNYNNYYYNYNYNYYYNYNNYNYNNYYNNYNNYYNNYNN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SJUNJYTLLCWBXBC"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> guitarNames = {"OYMWVVLN", "JHLCQBSQNK", "ETRHTEPRKGGZBWGVDWPCVRDEZ", "IRDZVGIXFLVWMARCFLLXCTQVWC"};
    vector<string> guitarSongs = {"YYYYNNYNNYYYYYYYYNYN", "YNNYNNYNYNNNNYNNNNYN", "NYYNYYNYNNYYYNYYNYYY", "NYNYNNYNYNYYNYYYNNYY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ETRHTEPRKGGZBWGVDWPCVRDEZ", "IRDZVGIXFLVWMARCFLLXCTQVWC", "OYMWVVLN"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> guitarNames = {"TOBYMLUQWCGABEYQ", "FKSWYHMAQGK", "MAUXTNDNDFPLQPGGWX", "YEVTVPCVSWJQBNDQSQJFPXJZYRGU", "KJBZNNHPSVPKAVGJB", "SZVLCSNHSUBALWHIGBJ", "IMOUWWLZDUCAHGKJWBSPVQVHAEHVZSYIYPWRMKYPVOBAKTQEP", "HPX", "KMDZUTWUDWQIJECGTYNTNIZGGLRDLVBQWUWBNEGBJKB", "UZQDPDUTRXVWVHUJFOREVHGNFPOIMGALBAVZXZFZTPKFHY"};
    vector<string> guitarSongs = {"NYNNNYYYYNNNNYYNNNYYYNNNNNYYNNNNNNYYNNNYNYNNY", "NYYNYYNYNNNYNNNYNNYYYNNNYNNNNYYYNYNNYNYYYYNYY", "YYNNNYNNNNNYNNNNNNYNYYYNYNNNYNNNNYYNYYNYYYNNY", "NYNYNNYYNYNYNYNYYYNNNNYNNYYYNNNYNYNYYYYYNYYYN", "NNYYNYYYYNNYYNYYYYYNYYYNYNNNYNYNYYNYNNYYYYNNN", "YYYYYYYNYYYYYNYYNYNYYYNYNNYNYYYNNNYNYNYYYYNYY", "NYYYNNYNNYYYYYYYNYNYNNYNYYNYNYYNYNYNNYNNNNYNY", "YYNYYYNYYNYYNNYYNYNYYNNYNYNYYYYNYYNYNYNYYNNNY", "NNNYNYNYYNNNNYYYNNYYNYYYNYYYNNYNYYNNYYNYNYYYN", "YYNYYYYYNYNYYNNYNYNYNNNNYYYNNNYNNNNYNYNYNYYYN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"KJBZNNHPSVPKAVGJB", "SZVLCSNHSUBALWHIGBJ", "YEVTVPCVSWJQBNDQSQJFPXJZYRGU"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> guitarNames = {"ZKXNDMOTXUCMDPPHQYXWFQENWDXMCGAJMPFTOEM", "YISGNSHRLBDFWAJMOHKIXYTBBDMAMBROW", "DQ", "MDAHCRDK", "ZYD", "YQLMSMAWEPWLCCOELBMHTOWINLTKXTH", "UWDBIDVWJRINUISLMVPNDTGNCOFNNNALOFYEQHJFVYGEMBLQT", "CMRTOHSVBWR", "DTSIDJYGBVMTCHALXCMRGZYMENPYOXALCDZDXJDYZUP", "ZUKSOCVHNXGOXJXXGWOJGQSTNGYQLWVNRNBJYSRNAEPTSFGUI"};
    vector<string> guitarSongs = {"YY", "YY", "NY", "NY", "NN", "YN", "YY", "YN", "YY", "NN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DTSIDJYGBVMTCHALXCMRGZYMENPYOXALCDZDXJDYZUP"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> guitarNames = {"PZDPKB", "HIJVXIFCMJRNKVEGAT", "FRFEQGZCJJTASBHATR", "ROYBSWTKEQFLBGFGIHHANCYWIAPVNBYUZPAJWLQLLWY"};
    vector<string> guitarSongs = {"YNNNNYYNNYNNYYYNNYNYNNNNNYNYYYYYNYYYYNNYNNNN", "YYYNNNNNNYYNYNNYNNNNNNYNYNNYNYNYNNYYYYNYYYYN", "NNYNYYYYNYYNYNYNNNNNYNNNNYYNYYYNYNNYYYYNNNYY", "NYNYYYYNNNNNNYYYNYYYYYNYNNNYYYNNYNNNNYYYNYYY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FRFEQGZCJJTASBHATR", "HIJVXIFCMJRNKVEGAT", "PZDPKB", "ROYBSWTKEQFLBGFGIHHANCYWIAPVNBYUZPAJWLQLLWY"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> guitarNames = {"HIQOVONSTUJVVNPYVQHNHPSEJYONFSZZDPUGXYA", "HHIGONML", "PZBXIVTTMJGVWPF", "VUNSTPGMFKKEMSVHNAFDYCGAANSAZOWNXGCTSIXFLLQT"};
    vector<string> guitarSongs = {"NNNYNNN", "YYNYNYY", "YYYNNNN", "NYYYYYN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HHIGONML", "VUNSTPGMFKKEMSVHNAFDYCGAANSAZOWNXGCTSIXFLLQT"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> guitarNames = {"HYYYPCGIKDGEEOHZJPDATVOAYIKPSHSBXQP", "SND", "KBUNSILPPBZL", "VAHBQFFSXKYFBWWWUCKELJKWK", "BKZVLOORVVQYJJWADZHJXCKAVUZJNDEELFZBQLWBIA"};
    vector<string> guitarSongs = {"YNYNNYYNYNYYYYYNY", "NNNNYYNYNNYNNNNYY", "NNNNNNNNNNYYYYYNY", "YYYYNNNNYYNYNYYYN", "YNYNNNNYYNNNNNNYN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HYYYPCGIKDGEEOHZJPDATVOAYIKPSHSBXQP", "SND", "VAHBQFFSXKYFBWWWUCKELJKWK"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> guitarNames = {"SXV", "ELOOM"};
    vector<string> guitarSongs = {"NNYNYNNYNNYYNNNYNNYNYNYYYNYYYN", "NYNNNYNYYYYNYNNYNYYNNNYNNYYYNY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ELOOM", "SXV"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> guitarNames = {"TYANZPRMTECRXJIQAUAIVOGJQVRXLQQQUIQEJVXKKSAZTAHS", "NBQENHHZOOHBVKCRANVLKDPUMUPCVYLKECHCKAKGEO", "GDG", "ADT", "IZEXPIQUWHYMXCKQRAENUNAQXNNOBTQTQIKQPSMDZSTTN"};
    vector<string> guitarSongs = {"YNNN", "YYNY", "NNNY", "YNYY", "YNYY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ADT", "NBQENHHZOOHBVKCRANVLKDPUMUPCVYLKECHCKAKGEO"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> guitarNames = {"HKXPEBIZICNDEPNSKREAWIPNVYXBAFUIDKUUYXYVAOVBFQ", "FEL", "QNZVOBSKEPWXZTXXOUQCYDVD", "CNHOIXWYRQPRFHREOXXJTQVSSEDPORZWNG", "SIVTQIBNRMKNNGDTCIRBGCN", "HYKFRMNSXLLGOWNNZRDVXTYHGNDRONV"};
    vector<string> guitarSongs = {"NNNYNYY", "YNNNYYN", "YYYYNYY", "YYNNNYN", "NYNNNYN", "YNYYNNY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FEL", "QNZVOBSKEPWXZTXXOUQCYDVD"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> guitarNames = {"NEJYTISLKWOAHIW", "NHZKCFESSPHQBDHVHO", "BMQYFMNNOXKZUFWSBVPWVJVWPTFFJVPCTLXMKEELJL", "NCESZYJDZJCFUYVRBWMAPGVFDMADNHTJPLDUUOSASPBBHPTVW", "XOVPRCS"};
    vector<string> guitarSongs = {"NNNN", "YYNY", "YNNN", "YNYY", "YNYY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NCESZYJDZJCFUYVRBWMAPGVFDMADNHTJPLDUUOSASPBBHPTVW", "NHZKCFESSPHQBDHVHO"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> guitarNames = {"XIUWNOYOB", "WDPIVQMSWSNF", "UFQCVRSET", "ZHCZXYLUZFRODWXLFGMHNTQQWNVTVT", "HSDK"};
    vector<string> guitarSongs = {"NNNYYNYYNNYYYNNNYYNNYYYNYYNNNNNNYNNNYNYYYNY", "NYNNYYYYNYNNYYYNNNNNYNYNNNYNYYNYNNYNYYYYNNY", "YYYYNYNNNYNYYNYNYNYYYNNNNNNYNYYNYYNYYNNNYNN", "NNNNNNNYNNYYNNYYNNYYNYNNNNNYNYNNNYYYNNYYYYN", "NYNYYNYYNNYYNNNNNYYYNNYYNYNNNNNYYNNYYNNNNNN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HSDK", "UFQCVRSET", "WDPIVQMSWSNF", "XIUWNOYOB", "ZHCZXYLUZFRODWXLFGMHNTQQWNVTVT"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> guitarNames = {"JRSSHSNJUIZJIAKLPWGTWTKKDJMGCLLYEKMTCMCTIWLUZ"};
    vector<string> guitarSongs = {"YYYNNNYYNYNNNNYYY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JRSSHSNJUIZJIAKLPWGTWTKKDJMGCLLYEKMTCMCTIWLUZ"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> guitarNames = {"IQOGAWMHEQIGTHGQJGAEIJHKGZDOCHKHH", "JWPAAHTMR", "JYBWMCYLYAMECOXHHAETXTULDOSXVTKTILMOT", "RJLAWXVGJJJQPFKFSPMVHGWQYLICHJOZIDLYPSROYDXRFVM", "VKPOSQI", "OMGNYENTGIEBMOCLJPWEQMQXATNVWXTMTOFCLLHKWBJERRHLK", "YNDAMCFCUOAPZHAOOQEATUIIBNJUCUIBQAC", "QPMHBDDQT", "MSPNHVFNELYCYGJTHSCIAJQTGXAHQDLOEEYQEGEH"};
    vector<string> guitarSongs = {"NYYYYY", "YYYNYN", "NYYNYN", "YYYYNY", "NNYYYY", "YYNYNN", "NYYNNN", "NYNYYY", "YNYNNY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"IQOGAWMHEQIGTHGQJGAEIJHKGZDOCHKHH", "JWPAAHTMR"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> guitarNames = {"VWNYQ", "WBDVRVQQBDQEFUGTTB", "PGDXQMDRZQCWYGTSGDTNCNJGKXTYKTQOEYBMVHCYS", "IIVEOXZPUQVJHSDXJDRQWXGOKUWKULJFWESWGFBBFNFFQGJ", "LAXPZEDODUPZSAAMO", "IARLACBVNQMSGMFDHEPNDYQLBQDYHTEUTAJEDCEQFQTJGVDV", "BFHSCKRGRAIQFWGWCRUSUQRGJVDNNBCUYSH"};
    vector<string> guitarSongs = {"YNYYYYNNNYYYYNYYYYYNNNN", "YNNNNNYNNNYNNYYNNNYYNYN", "NYYNYNNYNYNNNNNNNYYYYNY", "YNYYNNYNYYNNYYYNYNNYYNN", "YNYYNNYYNYNNNYYNYNNNYYY", "YYNYYNNNNNNYYYNYYYNYNNN", "NNNNNYNYYNNNNNNYNYNYNNY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BFHSCKRGRAIQFWGWCRUSUQRGJVDNNBCUYSH", "IARLACBVNQMSGMFDHEPNDYQLBQDYHTEUTAJEDCEQFQTJGVDV", "IIVEOXZPUQVJHSDXJDRQWXGOKUWKULJFWESWGFBBFNFFQGJ", "WBDVRVQQBDQEFUGTTB"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> guitarNames = {"USYSCHXQW", "GUIPMWPPUFYXMWIJLKSOHRW"};
    vector<string> guitarSongs = {"YNN", "NYY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"GUIPMWPPUFYXMWIJLKSOHRW", "USYSCHXQW"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> guitarNames = {"KOPXUTWVMQHKSUSVPXPLVKNYMCKFOZJOOZIXZXRJK", "FLCJ", "YFECIJQXNONYSXYPTBGUZ", "PWPIHQWULUQMXLZMPUOIYJSNVCSZZIPYJRNXSAJRZEPGLGVZ", "XMEIRUAGUBSZKVLCYBVC", "YCRQVHVDWZLZLJVRSGR"};
    vector<string> guitarSongs = {"YYNYNNNY", "NNNNNYNN", "NNNNNYNN", "YYNYNNNY", "NYYNYYNN", "NYYYNYYN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"KOPXUTWVMQHKSUSVPXPLVKNYMCKFOZJOOZIXZXRJK", "XMEIRUAGUBSZKVLCYBVC", "YCRQVHVDWZLZLJVRSGR"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> guitarNames = {"AGTXSRYWMJLVNBCEXOPSRWXZP", "MFLDXBJTEHORSFRPSUJLXWPH", "SXNBJSUQMKMCCAIJEISVXUYUOZZEKSPBPJQCCBULIAN", "ITDMLKLBUXLVIMWBSDWVSCZMGGIJWCEH", "PXTRAJDGQPQVARTVZQZIBXP"};
    vector<string> guitarSongs = {"YYYYNYYYNNYYNYNYYYYNNNNN", "NNYNYNYNYYNYNYYNNNNYYNYN", "NYYNYNNYNNNNNYNYNYNYNYYN", "YYNNYYYNNYNNNNYNNYYNNYYN", "NNNYYNYNNNYYNNYYNYYYNYNY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AGTXSRYWMJLVNBCEXOPSRWXZP", "MFLDXBJTEHORSFRPSUJLXWPH", "PXTRAJDGQPQVARTVZQZIBXP"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> guitarNames = {"UDLFGQRKJZ", "QCGSEZARMWJPYOFXPV", "GEJBS", "SZQMBKEDGHTKFVPTKKNTDNFLYMXIYWPAADXKARBB", "VMFJCBAIBEIQA", "CWIQOCRRTPRRKBDQEIKBD", "RZZ", "LMWUPWBOZRYWEIZC", "SHADFTDAIATDJVGDGXLYDMAWEWASRUVJEQHS", "KLLVWVME"};
    vector<string> guitarSongs = {"YYYNNYYNNNYYYNYNYN", "NNNNNNNNYYNYYNYNYN", "NYNNNYNNYYNNNNNNNY", "YNNNNNNNNYNYNNNNNN", "YYYNNYNYYNYYNNYYNN", "YNYYNNYNNYNNNNNYYY", "NYYNNNYNYNNYYYYYYY", "NNYNYYNYNYYNYYYYYN", "YYYYNYNNNYNNNYYYYN", "YNNNNNNYYYYYNYNNYN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CWIQOCRRTPRRKBDQEIKBD", "LMWUPWBOZRYWEIZC", "RZZ"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> guitarNames = {"KPRLM", "QRZITXYSHKQDDVOHCBJBSD", "GNIUT", "ASQRWVMLALHWTMYBPFJIPMVFVTJJWLJQLXTOAXPCE", "CNYODETFHEHDNMBJZIVZJVFIJBFWGHXDCTKISYAW", "WUFQPZTYHWFOHFOSGRPBGDRZEXTOSJIPQXJHFOFXPTJLMA", "LLLPDLBTGMBLVPMWSEMGZKFKPOMP", "GATKUYZCSE", "IQORKYWXZYAYIZKKZJBZUUDMWOZ", "AQSQEFHVAVYYGCZPQMRCWZH"};
    vector<string> guitarSongs = {"NNYNNYY", "NNNYYNY", "YYYYNNN", "YNNNNYN", "NNYNYNY", "YNYNYNY", "YYNYNYY", "YYNYNYN", "YYYNNYN", "NNYNYYY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AQSQEFHVAVYYGCZPQMRCWZH", "GATKUYZCSE"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> guitarNames = {"UOCIYRYYEHG", "DRKHSCQCOAQIDHOSGEMINWGCBWP", "IICJ", "ANJYMCPQRWUVHFPTMVNNFRIKHAIPMKHFAXNCGKMNTXY", "EPTWYZFEGNJSFHHPMVSZQUVJBMMCGNWEZCIDJ", "ENMDDZRWJRDGTFUR", "ESLSZMVMFBWVMTFOJHLDNDIKQWYBGBRKYCHFH"};
    vector<string> guitarSongs = {"NNNYNNNNYYYNNYNNN", "YNNNYNNNNNNYYYYYY", "YYYYNNYYYNYYNNNYN", "YYYYYNNYNNNNNNNYY", "YYYNNNNNYNNYYYYNY", "YYNYNYNNYYYNNYNYN", "NNNNNYYNNYNNYNYNN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DRKHSCQCOAQIDHOSGEMINWGCBWP", "ENMDDZRWJRDGTFUR", "IICJ"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> guitarNames = {"XIJYPAIXFJ", "HBGECZXYJNLYRRPLDPXYMQIFPZRZHVTMXQUIYQ", "IXQMYKJBKGZNDASKGVWTKOKJKUIVOUAX"};
    vector<string> guitarSongs = {"YYNYYYYYYYNNNNYYYYYNYNNNNNYYNNNYNYYYNYYYNYYNYYYNY", "YYYYNNYNYNNNNNNYYYNYYNYYYYYNNYNNNYYYYYNNYNNYNNYYN", "NNYYYNNYYNYNNNNYYYNYNNYYYYNYYYNYNYNYNYYYYNNNNYYYN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HBGECZXYJNLYRRPLDPXYMQIFPZRZHVTMXQUIYQ", "IXQMYKJBKGZNDASKGVWTKOKJKUIVOUAX", "XIJYPAIXFJ"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> guitarNames = {"FDGYFPMIUKYBTWDKOYVPMOGUQVWWXZAQBM", "NATLIC", "IPBMZRFAEXTZNZPEUEQSYMCPQFQXDUCRTKISSHYQUNPZKHEYFH", "BCNIEYDYTYVLKDLRYEAATSZUKCDSHHFZAUUIDB", "DNPZJJEF", "TTZLKNCRKQAZTDYXEYKZCFLMGRLNJUCFIB", "QSXDLIYHYNSLKHNGADBYHNEICIAOYRVNMLWUSDGJCENISPCXJS", "HZGIOAAXBQLDKFIDWJVMYANDMJXPPBYZLOWYWWGAJYV"};
    vector<string> guitarSongs = {"NYYNNNYYNNNYYNYNNYNYNYNNNYYNYYNYNNNNNNNNNNY", "YNYYYYYNYYNNYYYYYNYYNYNYNYYYYNNYNNYYYNYYNNY", "YYYNNYNNNNYYYNNNYNNNYYYNNNNYNNNYNNNYNNNNNYY", "NYYYYYNYYYNYNYNYYNYYNYYYYYNYYNYNNNNYYYNYNYY", "NNYYYYYYYYNYNNNNYNNNNYNYYYYNYNYNYYYNNYNNYNY", "YYNYNYYNNYYNYYYYYYYYNNYYYNNNNNNYNYYYYNYNNNY", "NYNNNYYYYNYNYNNNYYYNNNNYNYNYNYNNYNNYYNYNNYY", "YNNNNNYYNYYNNNYYYNNYYYNNYYYYYYYNNNYYYNNYYYY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DNPZJJEF", "HZGIOAAXBQLDKFIDWJVMYANDMJXPPBYZLOWYWWGAJYV", "TTZLKNCRKQAZTDYXEYKZCFLMGRLNJUCFIB"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> guitarNames = {"REAZRMFQKXCTWCXXRRAPFETVDOIUDRNODMHTYYUAKZSDLYMFMZ", "XKHDRMFSMJMRXGFAQHDVUQSKKJKLK", "EDLY", "YLBXSKDZFUUFXMP", "KFLWGCWTKOQNBEYMWDGUKWFEJ", "ZEQGLXDJUOHUEEOHFBWHDVRJRCXQUROAOZBUZIBUFXWK"};
    vector<string> guitarSongs = {"NYYNYYNNNNYYYNNYYYNYY", "NNYYNNNNNYNYNNYYNNNYN", "YYNYNYNNYNYYNYYYYNYNY", "YYNYYNNNNYNNYNNNYNYNY", "NYNNNYYYNYNYYNNYYNYNN", "NNYNYYYYNNNYYNYYNNNNY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"EDLY", "KFLWGCWTKOQNBEYMWDGUKWFEJ", "REAZRMFQKXCTWCXXRRAPFETVDOIUDRNODMHTYYUAKZSDLYMFMZ"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> guitarNames = {"QQQQASNCWIIRSSHTEAUXNFLKCOIYRUUSUX", "LQGOGHTK", "MGC", "YETRNSDSIHLXHJXQVWCJMUOIPXUQAXOJNTTHYNSFQLP", "OROVSCJXAMVPKUBVENPYSXDZ", "NVACDSZLZSQJXRCTTICRALJVFVHJSHBPFXQICVILQKFJJO", "MDGPXSJDNSORFPLNYXLJZ", "FZASFZKMRZPABQWCSHCLXZOCNSUMOZHJKZRZFYVHCZW", "MTITSITGHQPSBL", "BSS"};
    vector<string> guitarSongs = {"NNYNNNNYNYYYYNYYYYNYY", "YYNYNYYYNYYYYNYYYYYNN", "YYYYYNNNYYNYNNYNYYNNY", "YNYNNYYNYYNNNYNNYYNYN", "YNYYYYNYNYYNYYNYNYYYY", "NNNYYYNNNYNYNNYYNNYNN", "NNYNNYYYNYNNYYYNNYYNY", "YYYYNNNYNNNYYNYYYNNNY", "NYYYYYNYNNYNNYNYYNNYY", "NNNYNYYNYYNYNYYYYYNYN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BSS", "FZASFZKMRZPABQWCSHCLXZOCNSUMOZHJKZRZFYVHCZW", "OROVSCJXAMVPKUBVENPYSXDZ"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> guitarNames = {"POTZZICWBYR", "PYKCHPEBJFYMGPGQLIOIJUCKWOQJLTA", "QSOAUTCTRLFHPIEU", "DARCKLJHCIKXFNPQBNUDXWWVPDHYWRXIQVK", "LVRWVOJOCNMTJHTZ", "TIAXXLDTLYDQBMGLYWFWBLDHV", "CPZHCJJJECAM", "UMJLDIGWADLBQXZKKIYWVRGTFECIIFAWLUEQJHBFKYHKDW"};
    vector<string> guitarSongs = {"NNN", "YYN", "YNY", "NNN", "NYY", "NNY", "YYN", "NYY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CPZHCJJJECAM", "LVRWVOJOCNMTJHTZ"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> guitarNames = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAJ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAI", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAH", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAG", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAF", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAE", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAD", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAC", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    vector<string> guitarSongs = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> guitarNames = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAJ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAI", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAH", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAG", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAF", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAE", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAD", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAC", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    vector<string> guitarSongs = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> guitarNames = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAJ", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAI", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAH", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAG", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAF", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAE", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAD", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAC", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    vector<string> guitarSongs = {"NNYNYNYYYNYNNYYNYNNYYNYNNNYNNYYYNYNNNNNNYYYNNNYNYY", "NNNNYNYNYYYYNNYNYNNYYNNYNYNNNNNYNNNNNNNYYNYNNNYNNN", "YYNYYNYNNNNYYNNNNYYYNNNNNNYYYYYNNNYNNYNYNNNYNNNYNN", "YNYNNNNYNYNYNNNNYYNNYYYYNYNYNYNNYYYYYYNNYYNYYYYNNN", "NYNYYYNNNYNNYYNNYYYNYYYYNYYNNNNYNYYNYYYYNNNNYYNNNY", "YNNNNYNYNYYNYNYYYNNNYYYNNYNYNYYYNYYYNNYNYNYNYNYYNN", "YYNNYYYYNNYNNNYYYYYNNYNYNYYNNNNNNYNNNYYYNYNYNYNYYY", "NNYNNNNNNYNYNNYNNYNYYNNNYYYYNNYNYYNYYNYNNNNNYNYYYN", "YYYYNYYNNNYNNYYNNNNYYNNNYYYYYNYYYYYYYNNNYYNYYYNYNY", "NYNNNYNYYNNYNNYYNNNYNNYYNYNNNNYNYNNNNYYYNNNNYNYNYN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAD", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAE"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> guitarNames = {"JJ", "II", "HH", "GG", "FF", "EE", "DD", "CC", "BB", "AA"};
    vector<string> guitarSongs = {"YNNNNNNNNN", "NYNNNNNNNN", "NNYNNNNNNN", "NNNYNNNNNN", "NNNNYNNNNN", "NNNNNYNNNN", "NNNNNNYNNN", "NNNNNNNYNN", "NNNNNNNNYN", "NNNNNNNNNY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA", "BB", "CC", "DD", "EE", "FF", "GG", "HH", "II", "JJ"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> guitarNames = {"GIBSON", "FENDER"};
    vector<string> guitarSongs = {"NNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> guitarNames = {"AA", "BB", "CC", "DD", "EE", "FF", "GG", "HH", "II", "JJ"};
    vector<string> guitarSongs = {"NNNNNNNNNNNYNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA", "BB", "CC", "DD", "EE", "FF", "GG", "HH", "II", "JJ"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> guitarNames = {"AA", "BB", "CC", "DD", "EE", "FF", "GG", "HH", "II", "JJ"};
    vector<string> guitarSongs = {"YYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYNYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYNYYYYYYYYNNNNNNNNNNNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNNNNNYNNNNNN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JJ"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> guitarNames = {"AA", "BB", "CC", "DD"};
    vector<string> guitarSongs = {"YNN", "NYN", "YNY", "NYY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA", "DD"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> guitarNames = {"AAA", "BBB", "ZZZ"};
    vector<string> guitarSongs = {"YNN", "NYY", "YYY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ZZZ"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> guitarNames = {"AA", "BB", "CC", "DD", "EE"};
    vector<string> guitarSongs = {"YNNNN", "NYYNN", "NYNYN", "NNYNY", "NNNYY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA", "BB", "EE"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> guitarNames = {"AA", "BB", "CC", "DD"};
    vector<string> guitarSongs = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYNN", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA", "BB", "CC", "DD"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> guitarNames = {"AA", "DD", "BB", "CC"};
    vector<string> guitarSongs = {"YNN", "NYY", "YYN", "NNY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA", "DD"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> guitarNames = {"IRQFSURNZCZSQFQQIXKY", "CHFNSTWKKSWKDKARYTPP", "ZKWYHVIDMWWJBKGBMCMY", "YHDHFPOFFZRPHUYSKGGX", "LSYNVNITEZEWGRRSGPTS", "GCYMEHBHLNQFWPNFIPLS", "GVBFVVIQCGMVNNQJTLIN", "LAHQIZZREMJQDALLBSRJ", "ZLFFBVRIYEMXHXHFOKXV", "WQMQXVRNCEHAUZOAVCON"};
    vector<string> guitarSongs = {"YYYYYNYYNNNYNNNNYNNYYNYYYNYYNYYNYNNNNYYNNYNYNYYYYY", "YYYYYNYNYNYNNNYNYNYYNNYNNNNYNNYNYNNNNNNNNYNNNYNYNY", "YYYYYYNNNYNNYNYNNYNYNNYYYNYNYYNNNYNYYYYNYNYYNNNYYY", "NNYYYYNNNNYNYYYYYYNYYYNYYYNNYNNYYYNYYYNYYNNNNYYNYN", "YNYYYYNYNYNYNNNNYYYYNNYNNNNYNYNNNYYYYYYNYYNNYYNNNN", "NYYNYYNYNYYNNNNYYYNNNYYNNYYNYYNYYYYYYNYNNNNNNYNNNY", "YNNNNNNNYNYNYYNNNNNYNYNNYYNNNYNNNYYYNYYNNNNNNNNYNN", "NYYYNNNYYNNYNNNYNNNNYYYNNYNNNNYYNYNNNYYYYYNNNNNNNN", "NNNYNYYYNNYNYNYNYNYYNYNYYNYYYYYNNYNNNNYYYYNNNYYYNY", "YNNNNYYYNNYNYNYNNNNYNNYYNYNNYYYNNNNYYYNYNYNNNNYNNY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CHFNSTWKKSWKDKARYTPP", "LSYNVNITEZEWGRRSGPTS", "YHDHFPOFFZRPHUYSKGGX", "ZKWYHVIDMWWJBKGBMCMY"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> guitarNames = {"AA", "BB", "CC", "DD"};
    vector<string> guitarSongs = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNYNNNNN", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNNNNNNYNN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BB", "CC"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> guitarNames = {"JJ", "II", "HH", "GG", "FF", "EE", "DD", "CC", "BB", "AA"};
    vector<string> guitarSongs = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYYYYYNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNYYYYYNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNYYYYYNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNYYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "YYYYYNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA", "BB", "CC", "DD", "EE", "FF", "GG", "HH", "II", "JJ"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> guitarNames = {"AA", "BB", "CC"};
    vector<string> guitarSongs = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNYN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA", "BB"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> guitarNames = {"AA", "BB", "CC", "DD", "EE", "FF", "GG"};
    vector<string> guitarSongs = {"YNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYN", "YNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYYYNYNYNYNYYYN", "NNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYN", "YNYNYNYNYNYYYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYN", "YNYNNNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYN", "YNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYYYY", "YNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNYNNNYNYNNNYNYNYN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BB", "DD", "FF"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> guitarNames = {"AA", "BB", "CC", "DD"};
    vector<string> guitarSongs = {"YNYN", "YNNY", "NYYN", "NYNY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA", "DD"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> guitarNames = {"AA", "AB"};
    vector<string> guitarSongs = {"NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY", "YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA", "AB"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> guitarNames = {"BA", "NA", "AA", "XA"};
    vector<string> guitarSongs = {"YYNN", "NNYY", "YNYN", "NYNY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA", "XA"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> guitarNames = {"AA", "BB", "CC", "DD"};
    vector<string> guitarSongs = {"YNNN", "NYNN", "NNYN", "NNNY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA", "BB", "CC", "DD"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> guitarNames = {"BB", "AA"};
    vector<string> guitarSongs = {"YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY", "YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYNNN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BB"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> guitarNames = {"AA", "BB", "CC", "DD"};
    vector<string> guitarSongs = {"YYNN", "YYYN", "NNNY", "NNYY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA", "DD"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> guitarNames = {"AA", "BB"};
    vector<string> guitarSongs = {"YNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN", "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA", "BB"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> guitarNames = {"CC", "AB", "CA"};
    vector<string> guitarSongs = {"YYN", "NYY", "NYY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AB", "CC"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> guitarNames = {"AA", "BB", "CC", "DD"};
    vector<string> guitarSongs = {"YNN", "YYN", "NNY", "NYY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA", "DD"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> guitarNames = {"AA", "BB", "CC"};
    vector<string> guitarSongs = {"YYNN", "YNYN", "NYNY"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BB", "CC"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> guitarNames = {"RVQIEETNUPH", "MBWKOUCOIVJZHFHUMSHURZDJNJZMKUEAOPSNKRYZKZJEQ"};
    vector<string> guitarSongs = {"NNNNNNNNNNNNNYNYYNNYNNYNYNNYNYNNNNNNYNNYNY", "YYNNNNNNYNNYNNYYYNNYNNNNYNNNNYNYNYNYNNYNNN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MBWKOUCOIVJZHFHUMSHURZDJNJZMKUEAOPSNKRYZKZJEQ", "RVQIEETNUPH"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> guitarNames = {"AA", "BB", "CC", "DD", "EE"};
    vector<string> guitarSongs = {"NYNNN", "NYYNN", "NNNYY", "NNYYY", "YNNNN"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA", "DD", "EE"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> guitarNames = {"AA"};
    vector<string> guitarSongs = {"Y"};
    GuitarConcert* pObj = new GuitarConcert();
    clock_t start = clock();
    vector<string> result = pObj->buyGuitars(guitarNames, guitarSongs);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AA"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7442498&rd=10781&pm=7747
********************************************************************************
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <list>
#include <queue>
#include <deque>
#include <cctype>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>
#include <numeric>
using namespace std;
 
typedef vector < string > VS;
 
typedef vector <int > VI;
#define REP(i,n) for (int i=0; i<n; ++i)
#define FOREACH(it,x) for(__typeof((x).begin()) it=(x.begin()); it!=(x).end(); ++it)
#define FOR(i,p,k) for (int i=p; i<=k; ++i)
#define PB push_back
#define ALL(x) x.begin(),x.end()
#define SIZE(x) (int)x.size()
 
    class GuitarConcert
        { 
        public: 
        vector <string> buyGuitars(vector <string> guitarNames, vector <string> guitarSongs){ 
          int n=SIZE(guitarNames);
          int m=SIZE(guitarSongs[0]);
          vector<string> res=guitarNames;
          sort(ALL(res));
          int best=0;
          int ile=1<<n;
          REP(mask,ile){
            int acc=0;
            REP(j,m) REP(i,n) if (((1<<i)&mask) && guitarSongs[i][j]=='Y'){
              acc++;
              break;
            }
            VS kand;
            REP(i,n) if ((1<<i)&mask) kand.PB(guitarNames[i]);
            sort(ALL(kand));
            if (acc>best || acc==best && (SIZE(kand)<SIZE(res) || SIZE(kand)==SIZE(res) && kand<res)) res=kand,best=acc;
          }
          return res;
        } 
        
 
         }; 
 
    
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/