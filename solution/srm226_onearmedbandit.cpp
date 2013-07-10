/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3443
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

class OneArmedBandit {
public:
    double progressiveJackpot(vector<string> wheels, string jackpotLine, vector<string> payoffTable);
};

double OneArmedBandit::progressiveJackpot(vector<string> wheels, string jackpotLine, vector<string> payoffTable) {
    double ret;
    return ret;
}


int test0() {
    vector<string> wheels = {"ABC", "ABC", "ABC"};
    string jackpotLine = "AAA";
    vector<string> payoffTable = {"BBB 5", "CCC 2"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 20.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> wheels = {"ABC", "ABC", "ABC"};
    string jackpotLine = "AAA";
    vector<string> payoffTable = {"AAB 4", "AA- 3", "AB- 2"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> wheels = {"ABC", "ABC", "ABC"};
    string jackpotLine = "AAA";
    vector<string> payoffTable = {"AA- 5", "A-- 2"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> wheels = {"ABC", "ABC", "BBC"};
    string jackpotLine = "AAA";
    vector<string> payoffTable = {"AAB 4", "AA- 3", "AB- 2"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> wheels = {"DABCDBCDCD", "BCDBDACDCD", "DCDADBCDBC", "DBDCABCDCD"};
    string jackpotLine = "AAAA";
    vector<string> payoffTable = {};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 10000.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> wheels = {"DABCDBCDCD", "BCDBDACDCD", "DCDADBCDBC", "DBDCABCDCD"};
    string jackpotLine = "AAAA";
    vector<string> payoffTable = {"AAAE 20"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 10000.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> wheels = {"CAACNABBBBBAVCYKEVBKFXZAHAFBMAKBGC", "NTEEAACDBKRDJRBNBBFBKADUGBGAVFSACD", "INFCBDWFKYGLMAABCDDCEAZFBBBYAATZSD", "DKABHGACDACJBYBBTFWDABYPCABFPRFIDW"};
    string jackpotLine = "WUWB";
    vector<string> payoffTable = {"R--R 875226", "V-RB 878070", "-N-- 28892", "IVK- 715659"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> wheels = {"ACADGBFBADPAHEHAZASBFYC", "BZFAACITNTGAACGYFPESCBA", "ODHAGHGHITFCECLAHDDARBU", "ZNADBCNPRUAFCDZBNUCAEAG"};
    string jackpotLine = "RPLQ";
    vector<string> payoffTable = {"-DAW 841846", "N--C 960900", "TAEZ 890087", "O-U- 971795"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> wheels = {"NHFAFCZR", "BBCUASOB", "GVDZUOLH", "GVBADXGD", "GEAAAMKA", "ANBVDHBF", "BABABEWB", "UHQHACDG", "ZOGCPGHA"};
    string jackpotLine = "IZQRO----";
    vector<string> payoffTable = {"-VFX-MIYL 952968", "A--ZFKYWK 682769", "P-R-EOA-- 469811", "GMFLXDVA- 166335", "BDTINZD-K 672251", "OO-IPUGX- 287188", "-JKSL--LK 957076", "-Y--WJNML 696511", "-KC----KC 718148"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> wheels = {"VAMEKGAHBAECHHIFIKCCAIGFZCE", "VBCADEFDKDPACPIQBAABGLBAADH"};
    string jackpotLine = "V-";
    vector<string> payoffTable = {"OB 340719", "-R 720557"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 27.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> wheels = {"EBZTHHQADAUMNGDEBQGDNONVHOCKZHBAQAEAEDBXTPVA", "FWCICTHDAIBHNBCSDHBJAFEUBMFJBEDCNBHADEDOJBLA", "BACAACGKBEBLEWDVBYFKWUBADFZHYUCMXBKDDAVPCRAH", "JDGCBBLCGCGHDVPBEAGDAGMAZCAIDEBPDGXDXBBDCWLB"};
    string jackpotLine = "OUDS";
    vector<string> payoffTable = {"-EQ- 527986", "BZIO 404356", "--TN 927123", "NH-I 33667"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> wheels = {"YFADGDDBQDEHCDETAAOACJDGEFJBMBGA", "CSCCCECBCUGWPMUFHJSECWDDCADNBPTA", "EPTCBHBHALOAVFAVBHAQPCCKAAEFADEE"};
    string jackpotLine = "Z-J";
    vector<string> payoffTable = {"GX- 908947", "XIR 516597", "-J- 80978"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> wheels = {"KUCMAMMDBDAWCFAJRHF", "CDFAIBBFKIBRRCEEDHQ", "HDBAOGBGTIAFDWIGGRB", "MCAQFBABDABPBVGGDTC", "AUADBHANFAAEWCDBDQB", "XRCFCFAHGAAAAQKADUI"};
    string jackpotLine = "---LWG";
    vector<string> payoffTable = {"-WK-NJ 846548", "-VG-X- 956924", "B----C 431591", "N-INR- 208602", "WUNQLS 727542", "DVGPH- 641147"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> wheels = {"VBZCQABMAEDAQ", "DTJAFPLMCHZPA", "LAFLBAMDEYDCG"};
    string jackpotLine = "ZHM";
    vector<string> payoffTable = {"PPR 216", "-AG 25", "-TF 81"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 494.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> wheels = {"TUKHSFADJQBFBBBYERRBABDAHVADNCWDABALCBBFBG", "EYDAAHABKSDAWBULTEUGCWOBFGHDCTBCAEGBCGBADB", "ABCHBOBWQHDCBEGAGXCPQGFTDKSAAQDTNXHRGGGIBG", "CQDEHMOAAGBQBWFGFBTBARYAHACHCELDLNGNAGVGGD", "DHDDGRBENFTODRDDGFUAAAKDWTBCGIKKHEHACFXASF"};
    string jackpotLine = "ET-EW";
    vector<string> payoffTable = {"NQ-YK 776410", "-DBUM 653917", "-SNNX 145265", "-K-IY 529648", "KMVJ- 670311"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 705291.5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> wheels = {"KACACEIBGCVDAKMACAAW", "CECMBDBJCLHFNDCBDDNB", "BYAGBJFDAGBHEGEFVXDR", "UDWFABFAHDXACICQHAEH", "EBHOCHABAHBDAUBZHHAB"};
    string jackpotLine = "KJ--Z";
    vector<string> payoffTable = {"Z-U-U 23", "YUBSA 142", "Q-AN- 92", "ZA-CX 133", "-BE-Z 125"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 3500.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> wheels = {"QSEUIQKAIQMFRMOSQFYLEZQGMWDERSCCSCLCKFEXPTDA", "DHPKVGMSAARPDUFVNJYJIECGNHDMBRJQKAEVESYUYXBZ", "ZTPIMKHJMRROCDWOZGTKYYFPPAUTAWTGIIIMFJLICZPG", "FHFFVZESQNYBLBQCYQNWCLSKVETYKHNUHGAAFVCQGHMW", "FMBMUZTKNFZSBLFHRQMFLEIJZYWVTVAARRGDWFQEZXGV", "YDDPIFCWAVUYBNNNRTEUQTPUDKBCKXGMGUQAJVNKSUGB"};
    string jackpotLine = "MZPMRC";
    vector<string> payoffTable = {"BNBDKB 768692", "KTOFFV 243825", "PRYZFI 217413", "EVEKKB 960345", "DQWGSE 773600", "MAOOHR 970763", "OQPWTW 961894", "YZIEIA 238531", "OSMNDD 597879", "NPOPDH 387727", "RNIZMK 976616", "RJLDPI 865911", "OBBHYK 106584", "FUJHYE 793724", "INXGUN 129617", "DGBJWC 127348", "KITCBU 947177", "ASWUYZ 651602", "HVDNUQ 93840", "OLFORB 923803", "OIUCSE 621396", "WSCPVO 462283", "CUWILG 951400", "FGFNZD 480817", "OWXNJF 565618"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 9.086862725E7;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> wheels = {"UQKJQXGRWNLSGQPPRKNYALFDEHVBFYAIUNHLYJ", "MAUJZJKYKXEAKLTXEPIRIRHFNGCGHNNBKDMEEW", "HGMXGGHYSMMKHCYMAKYOCQFMFBQINOAQJUDFWK", "ZZHXSULDRYGMWXPMPDLOPFZWHKEMCWFDUJXKKQ", "QFCXTJDNQJJMVHQJNUASMDPFABQILLBHTXBEQE", "THSSFLBEEDQHPAAZFUXZTMWCEPRTWZJTXGGJRR", "CTKMMXWGKJKQXMVGUPIFBMXQOSLSKQHQQAESKG", "JTKWJXDVHSFCIVCYCZIPQVDWJKJDPPNDYMREJY"};
    string jackpotLine = "FYJPJDTN";
    vector<string> payoffTable = {"CUWTFASE 406097", "GYCQMGVN 860264", "ILTIPFTD 945589", "DGIUAFXB 974300", "QLYVXODL 767613", "WWDLBOKF 921813", "NEJPRSPP 51676", "DXSRWPYR 117129", "VLLSHALC 89338", "FLBQJZCD 65680", "GLXVXJNS 990402", "XJBORZME 769154", "XAVJDIXM 400609", "XFDXJNWP 21886", "WRLUQYWT 383511", "ZMFJPFFM 158026", "HCFNDCEB 422791", "ZPPDPMFT 98875", "LDTSBMJT 447176", "ZCUQFUKZ 702783", "VEGUSYIC 50872", "MOQCVYFW 768005", "TPHMBJBU 900731", "KAMDKWIP 555637", "TYCMNILJ 821694", "JGMNVHGP 111939", "PLKOEAGD 982946", "ERNEZZZL 814928", "IJPCRRDW 499619", "OKCFBHLM 226059", "JZOMZJEC 367418", "HUCVLCCH 977765", "XVYSXFYO 162783", "WVNXNFZJ 707788", "WCOMEXTB 850477", "NVISQQCF 840876", "DDAUIRXM 799040"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 1.811441756293334E11;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> wheels = {"OPRQZPWUSJMJMPYLCHMYPHZCRLGEJ", "UBETAVAZNLFKYLZPCQWXOIGHAXFJK", "IKOABKHYIOLRCUBJWAFYHEBTUVBJK", "KICNBXMBWVSTTPWBYXGKWHQBZYCVQ", "SETUUDRFXNTFPKARVIAWYTTFGLDCU", "QUKUUSXDZLTVDYRHHAYHFXPWIOIWE", "XOZLRPKSAXSASOIZUYBBACZGJAAVR", "QWSTLPIRAVTHDLYTMXERRELIVTOYN", "BQGIBHPDPXBVENLREYLZOVWLQFJTX", "QSCMRGYRGPZGFQJGQMRMIIETRGKRW"};
    string jackpotLine = "PNBKXVPTIM";
    vector<string> payoffTable = {"FSFGFPWLUY 542461", "XFTWNTHWQH 398199", "ORJEOZMIDU 38409", "APDFCEFXFP 943977", "RTCRWOCFIT 923555", "ZYDZFDGAUC 483193", "WPAUVHGMYD 173907", "BMGXNADQXQ 515874", "QQMNJQTWNN 455346", "MZGTHALZBF 212576", "CVPOTUOATX 46251", "XIXCBEFZUI 818861", "IZIDWCRHZG 275429", "OSEPIKGMFG 447706", "BQZOXIDHNI 870815", "YSFHKIINEM 610915", "NZCTADGNXT 61004", "RRXKPOMRWM 578176"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0955917533859402E12;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> wheels = {"SAOGTFPEGWNWHUJGOTJDMQCKBIOEASTNDNBDKMQHGBSXHBO", "FCROQVYBESVLEKKUHLUYHUUJDQSYTQYYLLERLHQTMUTACVE", "LTSIPESMTMDGLNCCWFBKWETMEEXQCCQAJKSECEHLVNFXERL", "GLFIQFJENCOGAEZTFQDOIQDZXNANJUMIUZQCUNGJRRBFJPQ", "FIQJSUJKVXSFQVVRPSFXSAKFRHDFGHPDVBIRXXRYRTZVDJR", "AZLYPEFKBMQHMVXQLZYPBGAIJTLTCBYSIXYEPEUIGPERVFV", "SEGMGGAHBUXDWXISATOXYSXZQZYOTJEDOUFUXMFSWLHWCUF", "LOTNHJZHCUQNRMKVXLTJEFIAMLNOJTKADDAINVJLGXSOLRI", "LAEVDLVCJBPWEZLPNAVWWJVPWKFFFGAUTJXEHXDTJTQBIND", "MXRPDIIKJTUGGFRQCMAQCUKICZDXWNFKYONQNFIUEJSCGQT"};
    string jackpotLine = "MEICBHAKBI";
    vector<string> payoffTable = {"IARZUYALHB 646880", "UJGAMVAJNU 414338", "RUDSVBJFKG 183976", "VMJCIDPBCS 572329", "LVQQDUHBUP 249", "ETMQHTYFHD 63016", "ZPCGMWETBX 846657", "TKISKALILT 811472", "DSQUQTQKUH 771106", "TBHUUAGFHM 757526", "BNBBSYNGPJ 535126", "KFBMPWHTJJ 654732", "PAKWZCGUWA 983618", "OPLVCRCMFM 345144", "ZGNKCOEAOL 629497", "KDWUNRRRRH 661763", "QJDEPESNRK 840605", "EQNRPMXNIJ 10157", "WQKDYIPTFX 756112", "BNFINUMFMF 246297", "FXWNCAYGRU 749027", "ANTKKCOWCL 409010", "YLENREBVYF 544705", "GHYEZZANCJ 663470", "JVIISWFQEZ 699291", "LSNEBYNFUD 36375", "VUWPBRFLIM 421907", "ZCVXEZHCPW 158113", "YGOWSQENJD 992411", "FFKGGNPPUR 187971", "XILXBVDYAG 359322", "UOLPLWZDOL 620937", "FSDSAQXBWM 303774", "EPGUIZJRAE 64075", "VSBWCRQZCB 803193", "JGVRUGFOBB 749803", "PKRTVETPCV 704410", "LUPWTPDIGN 935434", "GOGOPUDYMK 77564", "LHQAODOEQU 849805", "MRMAICYTRT 592305", "MTTZDMRBMV 16875", "JJIGFLJJHP 512651", "DGCGJFKEYR 405299", "QCRDFMIRQD 438309", "XRNNHKJSRO 875135"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0273267907511158E14;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> wheels = {"XOHLAXTHQNCNMAUGERGDQQAMKRZJKTLJCYZPXZHLQGCHOXY", "INJULDJKYEEIIVFBRAGWOEBGZZEWVCNCZBPFTHBEKZHDBEC", "MFHINZZKZRJNUHVBEWHLGKOATIVFIRNDGWGEXLVVEPQBQUW", "UYFMJNTZLZAJENIRKROFMTSMFKEWYDZFTKUFFDPUYQXTEER", "NEGVPLDKYPGWCYYIPXKBIYFQPWOMJNHCXFDQEOQFSNARADL", "DXNBVNBUIOUKDQYTIMEPJCFJZPPTOYQYAJUVBQAQKWXEAZT", "DWBUAVMBLIKSFKLOYJIEONSQIPWTDQFMHOSUSUOOFPPGJBK", "NVCPQENTRKSVYWLBXDXYFXSGOULBJSXTWEUOYTZHLQXDPQB", "CEMXAIKKKIAEPEJFHMYXONCGVHMAVBANRMIGYWBQRKSENDW", "HZPBSILFHXBVMAFAMMTKTRSFTPBJREFCBEGYIKZUKJYZZTS"};
    string jackpotLine = "RAHWRNIZYI";
    vector<string> payoffTable = {"ZHTPBJXAFR 56242", "RRDBTSMYGU 479749", "LFMRTEWUTJ 574479", "WYFEZZFCOQ 600692", "IKHMVFERJU 60988", "BDJNKOYWOQ 411282", "NKUUIHWNBA 300356", "VZRNZJQUOZ 740620", "WZTCZOJSPU 483935", "QXITSDOFVQ 251194", "JVYGAFPSQC 932446", "FGKIETFRYQ 452567", "AGZBCGBTNK 84619", "USAVHFUALD 310573", "LJHEJCAEAC 252704", "MJZRVKKQEF 119518", "KRBRSHKRVH 80669", "SHSNKXICYW 669927", "DQMEBXQPQV 863185", "GJPTOEUWIA 233030", "ESLAAHTOLW 68866", "UPWSIDBTIZ 443166", "DQCKAOSYWB 391692", "IHQQTBBJIW 997963", "GQZRXBYWNR 92688", "SISLFEIEIL 896669", "GAPMMECTIB 292500", "DMHHHHIORQ 834918", "BAHUDFQUBJ 846847", "NJPKQZXJLN 364115", "OZPVXUPRNT 523514", "JJTVMHJFYI 635064"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 3.652717324403828E14;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> wheels = {"VXQJRHUCUYUOTNUUXCPU", "RFWBMVHDTCRGMBGTAJPM", "JFIQCWYYESZKAXRKNMNR", "QNVITINDKBXIDAQKXKBG", "JMDHUVBGMLSYCBGPAIQC", "FIUPHAOCNWVDQMSBUBMP", "TFRHZLBWSAHEFTBPUNKL", "LUOTJJFRGMRPYBTOKQNN"};
    string jackpotLine = "YPCGHSSU";
    vector<string> payoffTable = {};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 2.559999999999999E10;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> wheels = {"AZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "AZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ"};
    string jackpotLine = "AAAAAAAAAA";
    vector<string> payoffTable = {};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 9.7656249999999968E16;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> wheels = {"ABBBBBBBBBBBBBZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ABBBBBBBBBZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ABBBBBBBBBBBBZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ABBBBBBBZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ABBBBBBBBBBZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ABBBBBBBBBBZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ABBBBBBBBBBZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ABBBBBBBBBBZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ABBBBBBBBBBZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ", "ABBBBBBBBBBZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ"};
    string jackpotLine = "AAAAAAAAAA";
    vector<string> payoffTable = {"BBBBBBBBBB 999999", "BBBBBBBBBB 999999", "BBBBBBBBBB 999999", "BBBBBBBBBB 999999", "BBBBBBBBBB 999999", "BBBBBBBBBB 999999", "BBBBBBBBBB 999999", "BBBBBBBBBB 999999", "BBBBBBBBBB 999999", "BBBBBBBBBB 936532"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0195599996860522E11;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> wheels = {"AA", "AA"};
    string jackpotLine = "BB";
    vector<string> payoffTable = {"AA 10"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> wheels = {"AAA", "AAA", "AAA"};
    string jackpotLine = "AAB";
    vector<string> payoffTable = {"AAA 100"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> wheels = {"ABC", "ABC", "ABC"};
    string jackpotLine = "ZZZ";
    vector<string> payoffTable = {"AA- 5", "A-- 2"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> wheels = {"ALKBJADGIAERNNAERLKJGALKFGDAFOIUDOFUIGLKVJXCMVAKLA", "ALKBJADGIAERNNAERLKJGALKFGDAFOIUDOFUIGLKVJXCMVAKLA", "ALKBJADGIAERNNAERLKJGALKFGDAFOIUDOFUIGLKVJXCMVAKLA", "ALKBJADGIAERNNAERLKJGALKFGDAFOIUDOFUIGLKVJXCMVAKLA", "ALKBJADGIAERNNAERLKJGALKFGDAFOIUDOFUIGLKVJXCMVAKLA", "ALKBJADGIAERNNAERLKJGALKFGDAFOIUDOFUIGLKVJXCMVAKLA", "ALKBJADGIAERNNAERLKJGALKFGDAFOIUDOFUIGLKVJXCMVAKLA", "ALKBJADGIAERNNAERLKJGALKFGDAFOIUDOFUIGLKVJXCMVAKLA", "ALKBJADGIAERNNAERLKJGALKFGDAFOIUDOFUIGLKVJXCMVAKLA", "ALKBJADGIAERNNAERLKJGALKFGDAFOIUDOFUIGLKVJXCMVAKLA"};
    string jackpotLine = "----------";
    vector<string> payoffTable = {"---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999", "---------- 999999"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> wheels = {"ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    string jackpotLine = "AAAAAAAAAA";
    vector<string> payoffTable = {};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 9.7656249999999968E16;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> wheels = {"AB", "AB"};
    string jackpotLine = "CC";
    vector<string> payoffTable = {"-- 3"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> wheels = {"ABC", "ABC", "ABC"};
    string jackpotLine = "AAZ";
    vector<string> payoffTable = {"AA- 5", "A-- 2"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> wheels = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZ", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBZBBBB", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCZCCCCCCCCCCCCC", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBZBBBBBBBBBBBBBBBBB", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCZCCCCCCCCCCCCCCCCCCCC", "BBBBBBBBBBBBBBBBBBBBBBBBBBZBBBBBBBBBBBBBBBBBBBBBBB", "CCCCCCCCCCCCCCCCCCCCCCCZCCCCCCCCCCCCCCCCCCCCCCCCCC", "BBBBBBBBBBBBBBBBBBZBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "CCCCCCCCCCCCCCCCCCCCCZCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "DDDDDDDDDDDDDDDDDDDDDDDDZDDDDDDDDDDDDDDEDDDDDDDDDD"};
    string jackpotLine = "ZZZZZZZZZZ";
    vector<string> payoffTable = {};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 9.7656249999999968E16;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> wheels = {"A"};
    string jackpotLine = "B";
    vector<string> payoffTable = {"A 500"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> wheels = {"ABC", "ABC", "BBC"};
    string jackpotLine = "AAA";
    vector<string> payoffTable = {"AAB 4", "AA- 3", "AB- 2", "AA- 20", "AB- 30", "AC- 100"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> wheels = {"ABC", "ABC", "BBC"};
    string jackpotLine = "AAA";
    vector<string> payoffTable = {"AAB 4000", "AA- 3", "AB- 2"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> wheels = {"A"};
    string jackpotLine = "B";
    vector<string> payoffTable = {"A 2"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> wheels = {"AAA", "AAA", "AAA"};
    string jackpotLine = "BBB";
    vector<string> payoffTable = {"--- 10000"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> wheels = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB"};
    string jackpotLine = "BBBBBBBBBB";
    vector<string> payoffTable = {"ABABABABAB 10", "BABABABABA 20"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 9.7656241525742512E16;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> wheels = {"DABCDBCDCD", "BCDBDACDCD", "DCDADBCDBC", "DBDCABCDCD"};
    string jackpotLine = "DAAA";
    vector<string> payoffTable = {"DAAE 20"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 2500.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> wheels = {"ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "ABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    string jackpotLine = "AAAAAAAAAA";
    vector<string> payoffTable = {"AAAAAAAAAA 1"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 9.7656249999999968E16;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> wheels = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAABBBBBBBBBBAAAAAAAAAABBBBBBBBBBAAAAAAAAAA"};
    string jackpotLine = "AAAAAAAAAB";
    vector<string> payoffTable = {"AAAAAAAAAA 1"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> wheels = {"A"};
    string jackpotLine = "B";
    vector<string> payoffTable = {"A 10"};
    OneArmedBandit* pObj = new OneArmedBandit();
    clock_t start = clock();
    double result = pObj->progressiveJackpot(wheels, jackpotLine, payoffTable);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7460634&rd=6515&pm=3443
********************************************************************************
#include <string>
#include <vector>
using namespace std;
 
class OneArmedBandit
{
  double chanceWin( vector< string > wheels, string target )
  {
    int iReels = wheels.size( );
    double dChance = 1.0;
 
    for( int r = 0; r < iReels; ++r )
    {
      if( target[r] != '-' )
      {
        int iPoss = 0;
        for( int i = 0; i < wheels[r].length( ); ++i )
          if( wheels[r][i] == target[r] )
            ++iPoss;
        dChance *= ( double ) iPoss / ( double ) wheels[r].length( );
      }
    }
    return dChance;
  }
 
public:
  double progressiveJackpot(vector <string> wheels, string jackpotLine, vector <string> payoffTable)
  {
    double dExp = 0.0;
    for( int i = 0; i < payoffTable.size( ); ++i )
    {
      string target = payoffTable[i].substr(0,payoffTable[i].find(" "));
      string wins  = payoffTable[i].substr(payoffTable[i].find(" ")+1);
      double dLineValue = chanceWin( wheels, target ) * atof( wins.c_str( ) );
      dExp += dLineValue;
    }
    if( dExp >= 1.0 )
      return 0.0;
    if( chanceWin( wheels, jackpotLine ) == 0.0 )
      return -1.0;
    dExp = 1.0 - dExp;
    dExp /= chanceWin( wheels, jackpotLine );
    return dExp;
  }
};

********************************************************************************
*******************************************************************************/