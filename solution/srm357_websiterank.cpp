/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6406
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

class WebsiteRank {
public:
    long countVotes(vector<string> votes, string website);
};

long WebsiteRank::countVotes(vector<string> votes, string website) {
    long ret;
    return ret;
}


int test0() {
    vector<string> votes = {"C A B"};
    string website = "C";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> votes = {"A B C D", "B C D", "C D"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> votes = {"A"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> votes = {"A B", "B A"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> votes = {"A B C D E F", "B A", "C B", "D B"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> votes = {"AA", "AB AA", "AC AB AA", "AD AC AB AA", "AE AD AC AB AA", "AF AE AD AC AB AA", "AG AF AE AD AC AB AA", "AH AG AF AE AD AC AB AA", "AI AH AG AF AE AD AC AB AA", "AJ AI AH AG AF AE AD AC AB AA", "AK AJ AI AH AG AF AE AD AC AB AA", "AL AK AJ AI AH AG AF AE AD AC AB AA", "AM AL AK AJ AI AH AG AF AE AD AC AB AA", "AN AM AL AK AJ AI AH AG AF AE AD AC AB AA", "AO AN AM AL AK AJ AI AH AG AF AE AD AC AB AA", "AP AO AN AM AL AK AJ AI AH AG AF AE AD AC AB AA", "AQ AP AO AN AM AL AK AJ AI AH AG AF AE AD AC AB AA", "AR AQ AP AO AN AM AL AK AJ AI AH AG AF AE AD AC AB", "AS AR AQ AP AO AN AM AL AK AJ AI AH AG AF AE AD AC", "AT AS AR AQ AP AO AN AM AL AK AJ AI AH AG AF AE AD", "AU AT AS AR AQ AP AO AN AM AL AK AJ AI AH AG AF AE", "AV AU AT AS AR AQ AP AO AN AM AL AK AJ AI AH AG AF", "AW AV AU AT AS AR AQ AP AO AN AM AL AK AJ AI AH AG", "AX AW AV AU AT AS AR AQ AP AO AN AM AL AK AJ AI AH", "A AX AW AV AU AT AS AR AQ AP AO AN AM AL AK AJ AI", "B A AX AW AV AU AT AS AR AQ AP AO AN AM AL AK AJ", "C B A AX AW AV AU AT AS AR AQ AP AO AN AM AL AK AJ", "D C B A AX AW AV AU AT AS AR AQ AP AO AN AM AL AK", "E D C B A AX AW AV AU AT AS AR AQ AP AO AN AM AL", "F E D C B A AX AW AV AU AT AS AR AQ AP AO AN AM AL", "G F E D C B A AX AW AV AU AT AS AR AQ AP AO AN AM", "H G F E D C B A AX AW AV AU AT AS AR AQ AP AO AN", "I H G F E D C B A AX AW AV AU AT AS AR AQ AP AO AN", "J I H G F E D C B A AX AW AV AU AT AS AR AQ AP AO", "K J I H G F E D C B A AX AW AV AU AT AS AR AQ AP", "L K J I H G F E D C B A AX AW AV AU AT AS AR AQ AP", "M L K J I H G F E D C B A AX AW AV AU AT AS AR AQ", "N M L K J I H G F E D C B A AX AW AV AU AT AS AR", "O N M L K J I H G F E D C B A AX AW AV AU AT AS AR", "P O N M L K J I H G F E D C B A AX AW AV AU AT AS", "Q P O N M L K J I H G F E D C B A AX AW AV AU AT", "R Q P O N M L K J I H G F E D C B A AX AW AV AU AT", "S R Q P O N M L K J I H G F E D C B A AX AW AV AU", "T S R Q P O N M L K J I H G F E D C B A AX AW AV", "U T S R Q P O N M L K J I H G F E D C B A AX AW AV", "V U T S R Q P O N M L K J I H G F E D C B A AX AW", "W V U T S R Q P O N M L K J I H G F E D C B A AX", "X W V U T S R Q P O N M L K J I H G F E D C B A AX", "Y X W V U T S R Q P O N M L K J I H G F E D C B A", "Z Y X W V U T S R Q P O N M L K J I H G F E D C B"};
    string website = "Z";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 562902742346880;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> votes = {"MYSITE OTHERSITE ANOTHERSITE THIRDSITE"};
    string website = "MYSITE";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
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
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "B C D E F G H I J K L M N O P Q R S T U V W X Y Z", "C D E F G H I J K L M N O P Q R S T U V W X Y Z BA", "D E F G H I J K L M N O P Q R S T U V W X Y Z BA", "E F G H I J K L M N O P Q R S T U V W X Y Z BA BB", "F G H I J K L M N O P Q R S T U V W X Y Z BA BB BC", "G H I J K L M N O P Q R S T U V W X Y Z BA BB BC", "H I J K L M N O P Q R S T U V W X Y Z BA BB BC BD", "I J K L M N O P Q R S T U V W X Y Z BA BB BC BD BE", "J K L M N O P Q R S T U V W X Y Z BA BB BC BD BE", "K L M N O P Q R S T U V W X Y Z BA BB BC BD BE BF", "L M N O P Q R S T U V W X Y Z BA BB BC BD BE BF BG", "M N O P Q R S T U V W X Y Z BA BB BC BD BE BF BG", "N O P Q R S T U V W X Y Z BA BB BC BD BE BF BG BH", "O P Q R S T U V W X Y Z BA BB BC BD BE BF BG BH BI", "P Q R S T U V W X Y Z BA BB BC BD BE BF BG BH BI", "Q R S T U V W X Y Z BA BB BC BD BE BF BG BH BI BJ", "R S T U V W X Y Z BA BB BC BD BE BF BG BH BI BJ BK", "S T U V W X Y Z BA BB BC BD BE BF BG BH BI BJ BK", "T U V W X Y Z BA BB BC BD BE BF BG BH BI BJ BK BL", "U V W X Y Z BA BB BC BD BE BF BG BH BI BJ BK BL BM", "V W X Y Z BA BB BC BD BE BF BG BH BI BJ BK BL BM", "W X Y Z BA BB BC BD BE BF BG BH BI BJ BK BL BM BN", "X Y Z BA BB BC BD BE BF BG BH BI BJ BK BL BM BN BO", "Y Z BA BB BC BD BE BF BG BH BI BJ BK BL BM BN BO", "Z BA BB BC BD BE BF BG BH BI BJ BK BL BM BN BO BP", "BA BB BC BD BE BF BG BH BI BJ BK BL BM BN BO BP BQ", "BB BC BD BE BF BG BH BI BJ BK BL BM BN BO BP BQ BR", "BC BD BE BF BG BH BI BJ BK BL BM BN BO BP BQ BR BS", "BD BE BF BG BH BI BJ BK BL BM BN BO BP BQ BR BS BT", "BE BF BG BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU", "BF BG BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV", "BG BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW", "BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW BX", "BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW BX BY", "BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW BX BY BZ", "BK BL BM BN BO BP BQ BR BS BT BU BV BW BX BY BZ CA", "BL BM BN BO BP BQ BR BS BT BU BV BW BX BY BZ CA CB", "BM BN BO BP BQ BR BS BT BU BV BW BX BY BZ CA CB CC", "BN BO BP BQ BR BS BT BU BV BW BX BY BZ CA CB CC CD", "BO BP BQ BR BS BT BU BV BW BX BY BZ CA CB CC CD CE", "BP BQ BR BS BT BU BV BW BX BY BZ CA CB CC CD CE CF", "BQ BR BS BT BU BV BW BX BY BZ CA CB CC CD CE CF CG", "BR BS BT BU BV BW BX BY BZ CA CB CC CD CE CF CG CH", "BS BT BU BV BW BX BY BZ CA CB CC CD CE CF CG CH CI", "BT BU BV BW BX BY BZ CA CB CC CD CE CF CG CH CI CJ", "BU BV BW BX BY BZ CA CB CC CD CE CF CG CH CI CJ CK", "BV BW BX BY BZ CA CB CC CD CE CF CG CH CI CJ CK CL", "BW BX BY BZ CA CB CC CD CE CF CG CH CI CJ CK CL CM", "BX BY BZ CA CB CC CD CE CF CG CH CI CJ CK CL CM CN"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 9006443887137061;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "Z BA BB BC BD BE BF BG BH BI BJ BK BL BM BN BO BP", "BQ BR BS BT BU BV BW BX BY BZ CA CB CC CD CE CF CG", "CH CI CJ CK CL CM CN CO CP CQ CR CS CT CU CV CW CX", "CY CZ DA DB DC DD DE DF DG DH DI DJ DK DL DM DN DO", "DP DQ DR DS DT DU DV DW DX DY DZ EA EB EC ED EE EF", "EG EH EI EJ EK EL EM EN EO EP EQ ER ES ET EU EV EW", "EX EY EZ FA FB FC FD FE FF FG FH FI FJ FK FL FM FN", "FO FP FQ FR FS FT FU FV FW FX FY FZ GA GB GC GD GE", "GF GG GH GI GJ GK GL GM GN GO GP GQ GR GS GT GU GV", "GW GX GY GZ HA HB HC HD HE HF HG HH HI HJ HK HL HM", "HN HO HP HQ HR HS HT HU HV HW HX HY HZ IA IB IC ID", "IE IF IG IH II IJ IK IL IM IN IO IP IQ IR IS IT IU", "IV IW IX IY IZ JA JB JC JD JE JF JG JH JI JJ JK JL", "JM JN JO JP JQ JR JS JT JU JV JW JX JY JZ KA KB KC", "KD KE KF KG KH KI KJ KK KL KM KN KO KP KQ KR KS KT", "KU KV KW KX KY KZ LA LB LC LD LE LF LG LH LI LJ LK", "LL LM LN LO LP LQ LR LS LT LU LV LW LX LY LZ MA MB", "MC MD ME MF MG MH MI MJ MK ML MM MN MO MP MQ MR MS", "MT MU MV MW MX MY MZ NA NB NC ND NE NF NG NH NI NJ", "NK NL NM NN NO NP NQ NR NS NT NU NV NW NX NY NZ OA", "OB OC OD OE OF OG OH OI OJ OK OL OM ON OO OP OQ OR", "OS OT OU OV OW OX OY OZ PA PB PC PD PE PF PG PH PI", "PJ PK PL PM PN PO PP PQ PR PS PT PU PV PW PX PY PZ", "QA QB QC QD QE QF QG QH QI QJ QK QL QM QN QO QP QQ", "QR QS QT QU QV QW QX QY QZ RA RB RC RD RE RF RG RH", "RI RJ RK RL RM RN RO RP RQ RR RS RT RU RV RW RX RY", "RZ SA SB SC SD SE SF SG SH SI SJ SK SL SM SN SO SP", "SQ SR SS ST SU SV SW SX SY SZ TA TB TC TD TE TF TG", "TH TI TJ TK TL TM TN TO TP TQ TR TS TT TU TV TW TX", "TY TZ UA UB UC UD UE UF UG UH UI UJ UK UL UM UN UO", "UP UQ UR US UT UU UV UW UX UY UZ VA VB VC VD VE VF", "VG VH VI VJ VK VL VM VN VO VP VQ VR VS VT VU VV VW", "VX VY VZ WA WB WC WD WE WF WG WH WI WJ WK WL WM WN", "WO WP WQ WR WS WT WU WV WW WX WY WZ XA XB XC XD XE", "XF XG XH XI XJ XK XL XM XN XO XP XQ XR XS XT XU XV", "XW XX XY XZ YA YB YC YD YE YF YG YH YI YJ YK YL YM", "YN YO YP YQ YR YS YT YU YV YW YX YY YZ ZA ZB ZC ZD", "ZE ZF ZG ZH ZI ZJ ZK ZL ZM ZN ZO ZP ZQ ZR ZS ZT ZU", "ZV ZW ZX ZY ZZ BAA BAB BAC BAD BAE BAF BAG BAH BAI", "BAJ BAK BAL BAM BAN BAO BAP BAQ BAR BAS BAT BAU", "BAV BAW BAX BAY BAZ BBA BBB BBC BBD BBE BBF BBG", "BBH BBI BBJ BBK BBL BBM BBN BBO BBP BBQ BBR BBS", "BBT BBU BBV BBW BBX BBY BBZ BCA BCB BCC BCD BCE", "BCF BCG BCH BCI BCJ BCK BCL BCM BCN BCO BCP BCQ", "BCR BCS BCT BCU BCV BCW BCX BCY BCZ BDA BDB BDC", "BDD BDE BDF BDG BDH BDI BDJ BDK BDL BDM BDN BDO", "BDP BDQ BDR BDS BDT BDU BDV BDW BDX BDY BDZ BEA", "BEB BEC BED BEE BEF BEG BEH BEI BEJ BEK BEL BEM", "BEN BEO BEP BEQ BER BES BET BEU BEV BEW BEX BEY"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> votes = {"R B", "U Q B F", "Q", "B K", "O F K", "F R", "K Q F"};
    string website = "O";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> votes = {"JR GC", "HB", "SX JR", "TV HB BS", "HR JR", "BS", "ER SX NB", "CM", "QS SX ER CM", "GC", "NB HB GC", "OM HB TV BS"};
    string website = "QS";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> votes = {"CM AL", "IE XT", "FY", "QO FY", "AL QO", "ZS", "HY ZS UW", "XT AL", "PN FY", "HR XT PN QI", "WV", "CU HR", "UW AM", "QI UW NB", "AM FY HY HR QI NB", "NB WV", "GP IE WV", "LI IE QO AL WV"};
    string website = "HR";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> votes = {"FI KV WE WQ DB", "VX IJ JR", "IJ DB", "OO FI", "KT NR DB", "NR FI IJ MF WX", "JR FI VX", "KV IJ KT DB", "YK FI OO WE WX", "WE OO DB OR", "WQ KV", "MF OO NR WQ", "DB FI WE", "NX NR", "PF KV", "OR KT KV WE NX", "EA KT WQ PF", "MP YK DB NX", "WX VX NR MF EA"};
    string website = "MP";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> votes = {"BI", "QF", "KK BJ", "ZW", "VO BI KK ZW", "VW KK", "BJ", "HJ BI VO", "UH QF VO VW"};
    string website = "UH";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> votes = {"A B", "B C D", "C B D", "D B C"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "B C D E F G H I J K L M N O P Q R S T U V W X Y Z", "C D E F G H I J K L M N O P Q R S T U V W X Y Z AA", "D E F G H I J K L M N O P Q R S T U V W X Y Z AA", "E F G H I J K L M N O P Q R S T U V W X Y Z AA AB", "F G H I J K L M N O P Q R S T U V W X Y Z AA AB AC", "G H I J K L M N O P Q R S T U V W X Y Z AA AB AC", "H I J K L M N O P Q R S T U V W X Y Z AA AB AC AD", "I J K L M N O P Q R S T U V W X Y Z AA AB AC AD AE", "J K L M N O P Q R S T U V W X Y Z AA AB AC AD AE", "K L M N O P Q R S T U V W X Y Z AA AB AC AD AE AF", "L M N O P Q R S T U V W X Y Z AA AB AC AD AE AF AG", "M N O P Q R S T U V W X Y Z AA AB AC AD AE AF AG", "N O P Q R S T U V W X Y Z AA AB AC AD AE AF AG AH", "O P Q R S T U V W X Y Z AA AB AC AD AE AF AG AH AI", "P Q R S T U V W X Y Z AA AB AC AD AE AF AG AH AI", "Q R S T U V W X Y Z AA AB AC AD AE AF AG AH AI AJ", "R S T U V W X Y Z AA AB AC AD AE AF AG AH AI AJ AK", "S T U V W X Y Z AA AB AC AD AE AF AG AH AI AJ AK", "T U V W X Y Z AA AB AC AD AE AF AG AH AI AJ AK AL", "U V W X Y Z AA AB AC AD AE AF AG AH AI AJ AK AL AM", "V W X Y Z AA AB AC AD AE AF AG AH AI AJ AK AL AM", "W X Y Z AA AB AC AD AE AF AG AH AI AJ AK AL AM AN", "X Y Z AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO", "Y Z AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO", "Z AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP", "AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP AQ", "AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP AQ AR", "AC AD AE AF AG AH AI AJ AK AL AM AN AO AP AQ AR AS", "AD AE AF AG AH AI AJ AK AL AM AN AO AP AQ AR AS AT", "AE AF AG AH AI AJ AK AL AM AN AO AP AQ AR AS AT AU", "AF AG AH AI AJ AK AL AM AN AO AP AQ AR AS AT AU AV", "AG AH AI AJ AK AL AM AN AO AP AQ AR AS AT AU AV AW", "AH AI AJ AK AL AM AN AO AP AQ AR AS AT AU AV AW AX", "AI AJ AK AL AM AN AO AP AQ AR AS AT AU AV AW AX", "AJ AK AL AM AN AO AP AQ AR AS AT AU AV AW AX", "AK AL AM AN AO AP AQ AR AS AT AU AV AW AX", "AL AM AN AO AP AQ AR AS AT AU AV AW AX", "AM AN AO AP AQ AR AS AT AU AV AW AX", "AN AO AP AQ AR AS AT AU AV AW AX", "AO AP AQ AR AS AT AU AV AW AX", "AP AQ AR AS AT AU AV AW AX", "AQ AR AS AT AU AV AW AX", "AR AS AT AU AV AW AX", "AS AT AU AV AW AX", "AT AU AV AW AX", "AU AV AW AX", "AV AW AX", "AW AX", "AX"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 562902742346880;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> votes = {"C A B"};
    string website = "C";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X", "B C D E F G H I J K L M N O P Q R S T U V W X Y", "C D E F G H I J K L M N O P Q R S T U V W X Y Z", "D E F G H I J K L M N O P Q R S T U V W X Y Z AA", "E F G H I J K L M N O P Q R S T U V W X Y Z AA", "F G H I J K L M N O P Q R S T U V W X Y Z AA BB", "G H I J K L M N O P Q R S T U V W X Y Z AA BB", "H I J K L M N O P Q R S T U V W X Y Z AA BB CC", "I J K L M N O P Q R S T U V W X Y Z AA BB CC DD", "J K L M N O P Q R S T U V W X Y Z AA BB CC DD EE", "K L M N O P Q R S T U V W X Y Z AA BB CC DD EE FF", "L M N O P Q R S T U V W X Y Z AA BB CC DD EE FF GG", "M N O P Q R S T U V W X Y Z AA BB CC DD EE FF GG", "N O P Q R S T U V W X Y Z AA BB CC DD EE FF GG HH", "O P Q R S T U V W X Y Z AA BB CC DD EE FF GG HH", "P Q R S T U V W X Y Z AA BB CC DD EE FF GG HH II", "Q R S T U V W X Y Z AA BB CC DD EE FF GG HH II", "R S T U V W X Y Z AA BB CC DD EE FF GG HH II JJ", "S T U V W X Y Z AA BB CC DD EE FF GG HH II JJ KK", "T U V W X Y Z AA BB CC DD EE FF GG HH II JJ KK LL", "U V W X Y Z AA BB CC DD EE FF GG HH II JJ KK LL", "V W X Y Z AA BB CC DD EE FF GG HH II JJ KK LL MM", "W X Y Z AA BB CC DD EE FF GG HH II JJ KK LL MM NN", "X Y Z AA BB CC DD EE FF GG HH II JJ KK LL MM NN", "Y Z AA BB CC DD EE FF GG HH II JJ KK LL MM NN OO", "Z AA BB CC DD EE FF GG HH II JJ KK LL MM NN OO PP", "AA BB AAB AAC AAAA AAE AAF AAG AAH AAI AAJ AAK", "BB CC BBB BBC BBBB BBE BBF BBG BBH BBI BBJ BBK", "CC DD CCB CCC CCCC CCE CCF CCG CCH CCI CCJ CCK", "DD EE DDB DDC DDDD DDE DDF DDG DDH DDI DDJ DDK", "EE FF EEB EEC EEEE EEE EEF EEG EEH EEI EEJ EEK", "FF GG FFB FFC FFFF FFE FFF FFG FFH FFI FFJ FFK", "GG HH GGB GGC GGGG GGE GGF GGG GGH GGI GGJ GGK", "HH II HHB HHC HHHH HHE HHF HHG HHH HHI HHJ HHK", "II JJ IIB IIC IIII IIE IIF IIG IIH III IIJ IIK", "JJ KK JJB JJC JJJJ JJE JJF JJG JJH JJI JJJ JJK", "KK LL KKB KKC KKKK KKE KKF KKG KKH KKI KKJ KKK", "LL MM LLB LLC LLLL LLE LLF LLG LLH LLI LLJ LLK", "MM NN MMB MMC MMMM MME MMF MMG MMH MMI MMJ MMK", "NN OO NNB NNC NNNN NNE NNF NNG NNH NNI NNJ NNK", "OO PP OOB OOC OOOO OOE OOF OOG OOH OOI OOJ OOK", "PP QQ PPB PPC PPPP PPE PPF PPG PPH PPI PPJ PPK", "QQ RR QQB QQC QQQQ QQE QQF QQG QQH QQI QQJ QQK", "RR SS RRB RRC RRRR RRE RRF RRG RRH RRI RRJ RRK", "SS TT SSB SSC SSSS SSE SSF SSG SSH SSI SSJ SSK", "TT UU TTB TTC TTTT TTE TTF TTG TTH TTI TTJ TTK", "UU VV UUB UUC UUUU UUE UUF UUG UUH UUI UUJ UUK", "VV WW VVB VVC VVVV VVE VVF VVG VVH VVI VVJ VVK", "WW XX WWB WWC WWWW WWE WWF WWG WWH WWI WWJ WWK", "XX XXA XXB XXC XXXX XXE XXF XXG XXH XXI XXJ XMX"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 94935281916;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "B C D E F G H I J K L M N O P Q R S T U V W X Y Z", "C D E F G H I J K L M N O P Q R S T U V W X Y Z AA", "D E F G H I J K L M N O P Q R S T U V W X Y Z AA", "E F G H I J K L M N O P Q R S T U V W X Y Z AA AB", "F G H I J K L M N O P Q R S T U V W X Y Z AA AB AC", "G H I J K L M N O P Q R S T U V W X Y Z AA AB AC", "H I J K L M N O P Q R S T U V W X Y Z AA AB AC AD", "I J K L M N O P Q R S T U V W X Y Z AA AB AC AD AE", "J K L M N O P Q R S T U V W X Y Z AA AB AC AD AE", "K L M N O P Q R S T U V W X Y Z AA AB AC AD AE AF", "L M N O P Q R S T U V W X Y Z AA AB AC AD AE AF AG", "M N O P Q R S T U V W X Y Z AA AB AC AD AE AF AG", "N O P Q R S T U V W X Y Z AA AB AC AD AE AF AG AH", "O P Q R S T U V W X Y Z AA AB AC AD AE AF AG AH AI", "P Q R S T U V W X Y Z AA AB AC AD AE AF AG AH AI", "Q R S T U V W X Y Z AA AB AC AD AE AF AG AH AI AJ", "R S T U V W X Y Z AA AB AC AD AE AF AG AH AI AJ AK", "S T U V W X Y Z AA AB AC AD AE AF AG AH AI AJ AK", "T U V W X Y Z AA AB AC AD AE AF AG AH AI AJ AK AL", "U V W X Y Z AA AB AC AD AE AF AG AH AI AJ AK AL AM", "V W X Y Z AA AB AC AD AE AF AG AH AI AJ AK AL AM", "W X Y Z AA AB AC AD AE AF AG AH AI AJ AK AL AM AN", "X Y Z AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO", "Y Z AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO", "Z AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP", "AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP AQ", "AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP AQ AR", "AC AD AE AF AG AH AI AJ AK AL AM AN AO AP AQ AR AS", "AD AE AF AG AH AI AJ AK AL AM AN AO AP AQ AR AS AT", "AE AF AG AH AI AJ AK AL AM AN AO AP AQ AR AS AT AU", "AF AG AH AI AJ AK AL AM AN AO AP AQ AR AS AT AU AV", "AG AH AI AJ AK AL AM AN AO AP AQ AR AS AT AU AV AW", "AH AI AJ AK AL AM AN AO AP AQ AR AS AT AU AV AW AX", "AI AJ AK AL AM AN AO AP AQ AR AS AT AU AV AW AX AY", "AJ AK AL AM AN AO AP AQ AR AS AT AU AV AW AX AY AZ", "AK AL AM AN AO AP AQ AR AS AT AU AV AW AX AY AZ BA", "AL AM AN AO AP AQ AR AS AT AU AV AW AX AY AZ BA BB", "AM AN AO AP AQ AR AS AT AU AV AW AX AY AZ BA BB BC", "AN AO AP AQ AR AS AT AU AV AW AX AY AZ BA BB BC BD", "AO AP AQ AR AS AT AU AV AW AX AY AZ BA BB BC BD BE", "AP AQ AR AS AT AU AV AW AX AY AZ BA BB BC BD BE BF", "AQ AR AS AT AU AV AW AX AY AZ BA BB BC BD BE BF BG", "AR AS AT AU AV AW AX AY AZ BA BB BC BD BE BF BG BH", "AS AT AU AV AW AX AY AZ BA BB BC BD BE BF BG BH BI", "AT AU AV AW AX AY AZ BA BB BC BD BE BF BG BH BI BJ", "AU AV AW AX AY AZ BA BB BC BD BE BF BG BH BI BJ BK", "AV AW AX AY AZ BA BB BC BD BE BF BG BH BI BJ BK BL", "AW AX AY AZ BA BB BC BD BE BF BG BH BI BJ BK BL BM", "AX AY AZ BA BB BC BD BE BF BG BH BI BJ BK BL BM BN"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 9006443887137061;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> votes = {"AA AB AC AD E F G H I J K L M N O P Q R S T U V W", "AB A B C D E F G H I J K L M N O P Q R S T U V W", "AC A B C D E F G H I J K L M N O P Q R S T U V W", "AD A B C D E F G H I J K L M N O P Q R S T U V W", "AE AF AG AH E F G H I J K L M N O P Q R S T U V W", "AF A B C D E F G H I J K L M N O P Q R S T U V W", "AG A B C D E F G H I J K L M N O P Q R S T U V W", "AH A B C D E F G H I J K L M N O P Q R S T U V W", "AI AJ AK AL AM AN H I J K L M N O P Q R S T U V W", "AJ A B C D E F G H I J K L M N O P Q R S T U V W", "AK A B C D E F G H I J K L M N O P Q R S T U V W", "AL A B C D E F G H I J K L M N O P Q R S T U V W", "AM A B C D E F G H I J K L M N O P Q R S T U V W", "AN A B C D E F G H I J K L M N O P Q R S T U V W", "AO AP AQ AR AS AT H I J K L M N O P Q R S T U V W", "AP A B C D E F G H I J K L M N O P Q R S T U V W", "AQ A B C D E F G H I J K L M N O P Q R S T U V W", "AR A B C D E F G H I J K L M N O P Q R S T U V W", "AS A B C D E F G H I J K L M N O P Q R S T U V W", "AT A B C D E F G H I J K L M N O P Q R S T U V W", "AU AV AW AX AY AZ H I J K L M N O P Q R S T U V W", "AV A B C D E F G H I J K L M N O P Q R S T U V W", "AW A B C D E F G H I J K L M N O P Q R S T U V W", "AX A B C D E F G H I J K L M N O P Q R S T U V W", "AY A B C D E F G H I J K L M N O P Q R S T U V W", "AZ A B C D E F G H I J K L M N O P Q R S T U V W", "BA BB BC BD E F G H I J K L M N O P Q R S T U V W", "BB A B C D E F G H I J K L M N O P Q R S T U V W", "BC A B C D E F G H I J K L M N O P Q R S T U V W", "BD A B C D E F G H I J K L M N O P Q R S T U V W", "BE BF BG BH E F G H I J K L M N O P Q R S T U V W", "BF A B C D E F G H I J K L M N O P Q R S T U V W", "BG A B C D E F G H I J K L M N O P Q R S T U V W", "BH A B C D E F G H I J K L M N O P Q R S T U V W", "BI BJ BK BL BM BN H I J K L M N O P Q R S T U V W", "BJ A B C D E F G H I J K L M N O P Q R S T U V W", "BK A B C D E F G H I J K L M N O P Q R S T U V W", "BL A B C D E F G H I J K L M N O P Q R S T U V W", "BM A B C D E F G H I J K L M N O P Q R S T U V W", "BN A B C D E F G H I J K L M N O P Q R S T U V W", "BO BP BQ BR BS BT H I J K L M N O P Q R S T U V W", "BP A B C D E F G H I J K L M N O P Q R S T U V W", "BQ A B C D E F G H I J K L M N O P Q R S T U V W", "BR A B C D E F G H I J K L M N O P Q R S T U V W", "BS A B C D E F G H I J K L M N O P Q R S T U V W", "BT A B C D E F G H I J K L M N O P Q R S T U V W", "BU BV BW D E F G H I J K L M N O P Q R S T U V W", "BV A B C D E F G H I J K L M N O P Q R S T U V W", "BW A B C D E F G H I J K L M N O P Q R S T U V W", "BX AA AE AI AO AU BA BE BI BO BU XX YY ZZ WW KK"};
    string website = "BX";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 1128;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> votes = {"B C D E F G H I J K L M N O P Q R S T U V W X Y Z", "AB BB CB DB EB FB GB HB IB JB KB LB MB NB OB PB QB", "RB SB TB UB VB WB XB YB ZB AC BC CC DC EC FC GC HC", "IC JC KC LC MC NC OC PC QC RC SC TC UC VC WC XC YC", "ZC AD BD CD DD ED FD GD HD ID JD KD LD MD ND OD PD", "QD RD SD TD UD VD WD XD YD ZD AE BE CE DE EE FE GE", "HE IE JE KE LE ME NE OE PE QE RE SE TE UE VE WE XE", "YE ZE AF BF CF DF EF FF GF HF IF JF KF LF MF NF OF", "PF QF RF SF TF UF VF WF XF YF ZF AG BG CG DG EG FG", "GG HG IG JG KG LG MG NG OG PG QG RG SG TG UG VG WG", "XG YG ZG AH BH CH DH EH FH GH HH IH JH KH LH MH NH", "OH PH QH RH SH TH UH VH WH XH YH ZH AI BI CI DI EI", "FI GI HI II JI KI LI MI NI OI PI QI RI SI TI UI VI", "WI XI YI ZI AJ BJ CJ DJ EJ FJ GJ HJ IJ JJ KJ LJ MJ", "NJ OJ PJ QJ RJ SJ TJ UJ VJ WJ XJ YJ ZJ AK BK CK DK", "EK FK GK HK IK JK KK LK MK NK OK PK QK RK SK TK UK", "VK WK XK YK ZK AL BL CL DL EL FL GL HL IL JL KL LL", "ML NL OL PL QL RL SL TL UL VL WL XL YL ZL AM BM CM", "DM EM FM GM HM IM JM KM LM MM NM OM PM QM RM SM TM", "UM VM WM XM YM ZM AN BN CN DN EN FN GN HN IN JN KN", "LN MN NN ON PN QN RN SN TN UN VN WN XN YN ZN AO BO", "CO DO EO FO GO HO IO JO KO LO MO NO OO PO QO RO SO", "TO UO VO WO XO YO ZO AP BP CP DP EP FP GP HP IP JP", "KP LP MP NP OP PP QP RP SP TP UP VP WP XP YP ZP AQ", "BQ CQ DQ EQ FQ GQ HQ IQ JQ KQ LQ MQ NQ OQ PQ QQ RQ", "SQ TQ UQ VQ WQ XQ YQ ZQ AR BR CR DR ER FR GR HR IR", "JR KR LR MR NR OR PR QR RR SR TR UR VR WR XR YR ZR", "AS BS CS DS ES FS GS HS IS JS KS LS MS NS OS PS QS", "RS SS TS US VS WS XS YS ZS AT BT CT DT ET FT GT HT", "IT JT KT LT MT NT OT PT QT RT ST TT UT VT WT XT YT", "ZT AU BU CU DU EU FU GU HU IU JU KU LU MU NU OU PU", "QU RU SU TU UU VU WU XU YU ZU AV BV CV DV EV FV GV", "HV IV JV KV LV MV NV OV PV QV RV SV TV UV VV WV XV", "YV ZV AW BW CW DW EW FW GW HW IW JW KW LW MW NW OW", "PW QW RW SW TW UW VW WW XW YW ZW AX BX CX DX EX FX", "GX HX IX JX KX LX MX NX OX PX QX RX SX TX UX VX WX", "XX YX ZX AY BY CY DY EY FY GY HY IY JY KY LY MY NY", "OY PY QY RY SY TY UY VY WY XY YY ZY AZ BZ CZ DZ EZ", "FZ GZ HZ IZ JZ KZ LZ MZ NZ OZ PZ QZ RZ SZ TZ UZ VZ", "WZ XZ YZ ZZ AAB BAB CAB DAB EAB FAB GAB HAB IAB", "JAB KAB LAB MAB NAB OAB PAB QAB RAB SAB TAB UAB", "VAB WAB XAB YAB ZAB ABB BBB CBB DBB EBB FBB GBB", "HBB IBB JBB KBB LBB MBB NBB OBB PBB QBB RBB SBB", "TBB UBB VBB WBB XBB YBB ZBB ACB BCB CCB DCB ECB", "FCB GCB HCB ICB JCB KCB LCB MCB NCB OCB PCB QCB", "RCB SCB TCB UCB VCB WCB XCB YCB ZCB ADB BDB CDB", "DDB EDB FDB GDB HDB IDB JDB KDB LDB MDB NDB ODB", "PDB QDB RDB SDB TDB UDB VDB WDB XDB YDB ZDB AEB", "BEB CEB DEB EEB FEB GEB HEB IEB JEB KEB LEB MEB", "NEB OEB PEB QEB REB SEB TEB UEB VEB WEB XEB YEB"};
    string website = "B";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "B D E Y XC XD XE XF XG XH XI XJ XK XL XM XN XO XP", "C D E Y O AU AV AW AX AY AZ BA BB BC BD BE BF BG", "D F G Y O BL BM BN BO BP BQ BR BS BT BU BV BW BX", "E F G Y O CC CD CE CF CG CH CI CJ CK CL CM CN CO", "F H I Y CS CT CU CV CW CX CY CZ DA DB DC DD DE DF", "G H I Y DJ DK DL DM DN DO DP DQ DR DS DT DU DV DW", "H J K Y EA EB EC ED EE EF EG EH EI EJ EK EL EM EN", "I J K Y ER ES ET EU EV EW EX EY EZ FA FB FC FD FE", "J L M Y FI FJ FK FL FM FN FO FP FQ FR FS FT FU FV", "K L M Y FZ GA GB GC GD GE GF GG GH GI GJ GK GL GM", "L N O Y GQ GR GS GT GU GV GW GX GY GZ HA HB HC HD", "M N O Y HH HI HJ HK HL HM HN HO HP HQ HR HS HT HU", "N P R Y HY HZ IA IB IC ID IE IF IG IH II IJ IK IL", "O P R Y IP IQ IR IS IT IU IV IW IX IY IZ JA JB JC", "P Q S Y JG JH JI JJ JK JL JM JN JO JP JQ JR JS JT", "R Q S Y JX JY JZ KA KB KC KD KE KF KG KH KI KJ KK", "Q T U Y KO KP KQ KR KS KT KU KV KW KX KY KZ LA LB", "S T U Y LF LG LH LI LJ LK LL LM LN LO LP LQ LR LS", "T V W Y LW LX LY LZ MA MB MC MD ME MF MG MH MI MJ", "U V W Y MN MO MP MQ MR MS MT MU MV MW MX MY MZ NA", "V X AB NE NF NG NH NI NJ NK NL NM NN NO NP NQ NR", "W X AB NV NW NX NY NZ OA OB OC OD OE OF OG OH OI", "X AD AC OM ON OO OP OQ OR OS OT OU OV OW OX OY OZ", "AB AD AC PD PE PF PG PH PI PJ PK PL PM PN PO PP PQ", "AC AE AF PU PV PW PX PY PZ QA QB QC QD QE QF QG QH", "AD AE AF QL QM QN QO QP QQ QR QS QT QU QV QW QX QY", "AE AG AH RC RD RE RF RG RH RI RJ RK RL RM RN RO RP", "AF AG AH RT RU RV RW RX RY RZ SA SB SC SD SE SF SG", "AG AI AJ SK SL SM SN SO SP SQ SR SS ST SU SV SW SX", "AH AI AJ TB TC TD TE TF TG TH TI TJ TK TL TM TN TO", "AI AK AL TS TT TU TV TW TX TY TZ UA UB UC UD UE UF", "AJ AK AL UJ UK UL UM UN UO UP UQ UR US UT UU UV UW", "AK AM AN VA VB VC VD VE VF VG VH VI VJ VK VL VM VN", "AL AM AN VR VS VT VU VV VW VX VY VZ WA WB WC WD WE", "AM AO AP WI WJ WK WL WM WN WO WP WQ WR WS WT WU WV", "AN AO AP WZ XA XB XC XD XE XF XG XH XI XJ XK XL XM", "AO AR AS XQ XR XS XT XU XV XW XX XY XZ YA YB YC YD", "AP AR AS YH YI YJ YK YL YM YN YO YP YQ YR YS YT YU", "AR AT AU YY YZ ZA ZB ZC ZD ZE ZF ZG ZH ZI ZJ ZK ZL", "AS AT AU ZP ZQ ZR ZS ZT ZU ZV ZW ZX ZY ZZ AAA AAB", "AT AW AX AAF AAG AAH AAI AAJ AAK AAL AAM AAN", "AU AW AX AAR AAS AAT AAU AAV AAW AAX AAY AAZ", "AW AZ BA ABD ABE ABF ABG ABH ABI ABJ ABK ABL", "AX AZ BA ABP ABQ ABR ABS ABT ABU ABV ABW ABX", "AZ BB BC ACB ACC ACD ACE ACF ACG ACH ACI ACJ", "BA BB BC ACN ACO ACP ACQ ACR ACS ACT ACU ACV", "BB BD ACY ACZ ADA ADB ADC ADD ADE ADF ADG ADH", "BC BD ADK ADL ADM ADN ADO ADP ADQ ADR ADS ADT", "BD ADV ADW ADX ADY ADZ AEA AEB AEC AED AEE AEF"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 1157633182;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> votes = {"AA AB BG CC DA EJ FU GM HE IJ JN KU LC MI NO OC", "AB AC BR CW DR EP FQ GC HM ID JQ KV LC MI NB OA", "AC AD BR CN DJ EP FW GC HU IC JS KM LK MQ NE OS", "AD AE BB CB DI EB FR GM HA II JL KJ LE MT NS OD", "AE AF BK CD DG EM FK GE HR IY JK KM LK MM NG OP", "AF AG BD CF DF EA FW GS HB IP JN KA LP MO NY OJ", "AG AH BC CA DK EC FI GR HQ IO JF KW LG MY NB OB", "AH AI BP CV DQ EF FG GK HE IF JE KE LW MA NB OU", "AI AJ BP CG DV EU FE GH HW IK JC KI LD MN NX OO", "AJ AK BY CH DT EW FR GA HY IQ JJ KK LI MO NF OV", "AK AL BU CF DF EI FQ GV HX IY JB KK LT MS NE OF", "AL AM BT CI DC ER FL GO HG IW JJ KY LH MB NU OY", "AM AN BW CL DM EP FC GA HO IV JC KT LW MB NQ OA", "AN AO BG CJ DD EY FU GT HW IB JH KQ LC MP NP OX", "AO AP BV CG DB EO FB GY HB IO JW KE LP ME NP OX", "AP AQ BF CI DT EK FX GF HP IA JV KH LF MA NB OU", "AQ AR BD CV DN EL FK GQ HA IV JR KH LA MQ NX OR", "AR AS BL CX DJ EQ FD GX HU IY JV KR LR MJ NH OU", "AS AT BJ CS DJ EA FW GF HK IB JP KD LT MY NX OJ", "AT AU BP CL DJ EG FG GX HN IW JX KO LW MD NA OE", "AU AV BY CU DS EA FI GE HL IY JX KA LT MR NG OK", "AV AW BI CF DW EE FA GL HJ IJ JH KL LD MI NG OM", "AW AX BT CT DD ET FF GG HB IU JJ KS LP MS NW OQ", "AX AY BN CJ DM EN FR GD HO IS JR KR LC MO NU OO", "AY BA BM CH DV EY FW GY HE ID JW KY LM MA NJ ON", "BA BB BU CD DO EG FN GR HV IX JX KO LQ MD NX OB", "BB BC BK CQ DQ EK FL GH HB IW JP KU LX ML NJ OL", "BC BD BM CB DQ ES FB GX HN ID JV KA LC MS NO OJ", "BD BE BH CH DT EA FD GB HL II JU KO LX MF NS OG", "BE BF BX CK DO EF FM GL HK IM JA KK LW MD NO OG", "BF BG BU CQ DH ES FS GR HO IH JB KW LI MI NY OE", "BG BH BF CB DU EU FE GH HE IK JK KW LG MC NX OU", "BH BI BD CA DM EE FN GE HH IF JM KB LR MQ NI OR", "BI BJ BW CD DM EG FG GY HP IB JX KG LC MJ NF OK", "BJ BK BL CQ DS ET FY GS HS II JV KU LP MA NT OP", "BK BL BH CD DP EM FB GS HA IC JP KR LN MI NS OC", "BL BM BB CF DC ED FY GV HS IV JH KW LQ MP NX ON", "BM BN BH CR DP EF FE GA HT IU JQ KO LI ML NK OJ", "BN BO BB CB DG EQ FY GQ HG IQ JR KM LB MW NV OK", "BO BP BU CR DV EK FU GL HT IX JB KH LD MS NH OG", "BP BQ BN CM DU EM FK GI HU IF JQ KY LQ MG NH OQ", "BQ BR BY CD DE EG FD GI HY IY JS KW LQ MY NO OC", "BR BS BY CX DN EF FI GA HC IE JQ KN LM MN NP OP", "BS BT BA CV DT EO FD GD HX IX JC KV LP MY NG OO", "BT BU BX CV DL ES FR GF HR IL JK KW LG MN NT OL", "BU BV BP CT DP ES FJ GX HV ID JC KU LK ME NB OV", "BV BW BQ CP DJ ES FM GJ HS IR JA KT LW MJ NH OJ", "BW BX BI CQ DW EP FD GL HM IC JA KG LV MP NX OU", "BX BY BS CQ DI EN FE GV HU IU JM KM LA MK NS OW", "BY CA BS CU DU EA FQ GM HT IK JX KU LA MO NI OO"};
    string website = "AA";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 716;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> votes = {"A B", "B A"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> votes = {"A B C D E F G H I J L M N O P Q R S T U V W X Y Z", "B C D E F G H I J L M N O P Q R S T U V W X Y Z", "C D E F G H I J L M N O P Q R S T U V W X Y Z AA", "D E F G H I J L M N O P Q R S T U V W X Y Z AA BB", "E F G H I J L M N O P Q R S T U V W X Y Z AA BB CC", "F G H I J L M N O P Q R S T U V W X Y Z AA BB CC", "G H I J L M N O P Q R S T U V W X Y Z AA BB CC DD", "H I J L M N O P Q R S T U V W X Y Z AA BB CC DD EE", "I J L M N O P Q R S T U V W X Y Z AA BB CC DD EE", "J L M N O P Q R S T U V W X Y Z AA BB CC DD EE FF", "L M N O P Q R S T U V W X Y Z AA BB CC DD EE FF GG", "M N O P Q R S T U V W X Y Z AA BB CC DD EE FF GG", "N O P Q R S T U V W X Y Z AA BB CC DD EE FF GG HH", "O P Q R S T U V W X Y Z AA BB CC DD EE FF GG HH II", "P Q R S T U V W X Y Z AA BB CC DD EE FF GG HH II", "Q R S T U V W X Y Z AA BB CC DD EE FF GG HH II JJ", "R S T U V W X Y Z AA BB CC DD EE FF GG HH II JJ LL", "S T U V W X Y Z AA BB CC DD EE FF GG HH II JJ LL", "T U V W X Y Z AA BB CC DD EE FF GG HH II JJ LL MM", "U V W X Y Z AA BB CC DD EE FF GG HH II JJ LL MM NN", "V W X Y Z AA BB CC DD EE FF GG HH II JJ LL MM NN", "W X Y Z AA BB CC DD EE FF GG HH II JJ LL MM NN OO", "X Y Z AA BB CC DD EE FF GG HH II JJ LL MM NN OO PP", "Y Z AA BB CC DD EE FF GG HH II JJ LL MM NN OO PP", "Z AA BB CC DD EE FF GG HH II JJ LL MM NN OO PP QQ", "AA BB CC DD EE FF GG HH II JJ LL MM NN OO PP QQ RR", "BB CC DD EE FF GG HH II JJ LL MM NN OO PP QQ RR SS", "CC DD EE FF GG HH II JJ LL MM NN OO PP QQ RR SS TT", "DD EE FF GG HH II JJ LL MM NN OO PP QQ RR SS TT UU", "EE FF GG HH II JJ LL MM NN OO PP QQ RR SS TT UU VV", "FF GG HH II JJ LL MM NN OO PP QQ RR SS TT UU VV WW", "GG HH II JJ LL MM NN OO PP QQ RR SS TT UU VV WW XX", "HH II JJ LL MM NN OO PP QQ RR SS TT UU VV WW XX YY", "II JJ LL MM NN OO PP QQ RR SS TT UU VV WW XX YY ZZ", "JJ LL MM NN OO PP QQ RR SS TT UU VV WW XX YY ZZ", "LL MM NN OO PP QQ RR SS TT UU VV WW XX YY ZZ", "MM NN OO PP QQ RR SS TT UU VV WW XX YY ZZ", "NN OO PP QQ RR SS TT UU VV WW XX YY ZZ", "OO PP QQ RR SS TT UU VV WW XX YY ZZ", "PP QQ RR SS TT UU VV WW XX YY ZZ", "QQ RR SS TT UU VV WW XX YY ZZ", "RR SS TT UU VV WW XX YY ZZ", "SS TT UU VV WW XX YY ZZ", "TT UU VV WW XX YY ZZ", "UU VV WW XX YY ZZ", "VV WW XX YY ZZ", "WW XX YY ZZ", "XX YY ZZ", "YY ZZ"};
    string website = "B";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 281449223692672;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W", "X Y Z BA BB BC BD BE BF BG BH BI BJ BK BL BM BN", "BO BP BQ BR BS BT BU BV BW BX BY BZ CA CB CC CD", "CE CF CG CH CI CJ CK CL CM CN CO CP CQ CR CS CT", "CU CV CW CX CY CZ DA DB DC DD DE DF DG DH DI DJ", "DK DL DM DN DO DP DQ DR DS DT DU DV DW DX DY DZ", "EA EB EC ED EE EF EG EH EI EJ EK EL EM EN EO EP", "EQ ER ES ET EU EV EW EX EY EZ FA FB FC FD FE FF", "FG FH FI FJ FK FL FM FN FO FP FQ FR FS FT FU FV", "FW FX FY FZ GA GB GC GD GE GF GG GH GI GJ GK GL", "GM GN GO GP GQ GR GS GT GU GV GW GX GY GZ HA HB", "HC HD HE HF HG HH HI HJ HK HL HM HN HO HP HQ HR", "HS HT HU HV HW HX HY HZ IA IB IC ID IE IF IG IH", "II IJ IK IL IM IN IO IP IQ IR IS IT IU IV IW IX", "IY IZ JA JB JC JD JE JF JG JH JI JJ JK JL JM JN", "JO JP JQ JR JS JT JU JV JW JX JY JZ KA KB KC KD", "KE KF KG KH KI KJ KK KL KM KN KO KP KQ KR KS KT", "KU KV KW KX KY KZ LA LB LC LD LE LF LG LH LI LJ", "LK LL LM LN LO LP LQ LR LS LT LU LV LW LX LY LZ", "MA MB MC MD ME MF MG MH MI MJ MK ML MM MN MO MP", "MQ MR MS MT MU MV MW MX MY MZ NA NB NC ND NE NF", "NG NH NI NJ NK NL NM NN NO NP NQ NR NS NT NU NV", "NW NX NY NZ OA OB OC OD OE OF OG OH OI OJ OK OL", "OM ON OO OP OQ OR OS OT OU OV OW OX OY OZ PA PB", "PC PD PE PF PG PH PI PJ PK PL PM PN PO PP PQ PR", "PS PT PU PV PW PX PY PZ QA QB QC QD QE QF QG QH", "QI QJ QK QL QM QN QO QP QQ QR QS QT QU QV QW QX", "QY QZ RA RB RC RD RE RF RG RH RI RJ RK RL RM RN", "RO RP RQ RR RS RT RU RV RW RX RY RZ SA SB SC SD", "SE SF SG SH SI SJ SK SL SM SN SO SP SQ SR SS ST", "SU SV SW SX SY SZ TA TB TC TD TE TF TG TH TI TJ", "TK TL TM TN TO TP TQ TR TS TT TU TV TW TX TY TZ", "UA UB UC UD UE UF UG UH UI UJ UK UL UM UN UO UP", "UQ UR US UT UU UV UW UX UY UZ VA VB VC VD VE VF", "VG VH VI VJ VK VL VM VN VO VP VQ VR VS VT VU VV", "VW VX VY VZ WA WB WC WD WE WF WG WH WI WJ WK WL", "WM WN WO WP WQ WR WS WT WU WV WW WX WY WZ XA XB", "XC XD XE XF XG XH XI XJ XK XL XM XN XO XP XQ XR", "XS XT XU XV XW XX XY XZ YA YB YC YD YE YF YG YH", "YI YJ YK YL YM YN YO YP YQ YR YS YT YU YV YW YX", "YY YZ ZA ZB ZC ZD ZE ZF ZG ZH ZI ZJ ZK ZL ZM ZN", "ZO ZP ZQ ZR ZS ZT ZU ZV ZW ZX ZY ZZ BAA BAB BAC", "BAD BAE BAF BAG BAH BAI BAJ BAK BAL BAM BAN BAO", "BAP BAQ BAR BAS BAT BAU BAV BAW BAX BAY BAZ BBA", "BBB BBC BBD BBE BBF BBG BBH BBI BBJ BBK BBL BBM", "BBN BBO BBP BBQ BBR BBS BBT BBU BBV BBW BBX BBY", "BBZ BCA BCB BCC BCD BCE BCF BCG BCH BCI BCJ BCK", "BCL BCM BCN BCO BCP BCQ BCR BCS BCT BCU BCV BCW", "BCX BCY BCZ BDA BDB BDC BDD BDE BDF BDG BDH BDI", "BDJ BDK BDL BDM BDN BDO BDP BDQ BDR BDS BDT BDU"};
    string website = "X";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> votes = {"A B", "B A", "C A D", "D C"};
    string website = "C";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP", "BA BB BC BD BE BF BG BH BI BJ BK BL BM BN BO BP", "CA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP", "DA DB DC DD DE DF DG DH DI DJ DK DL DM DN DO DP", "EA EB EC ED EE EF EG EH EI EJ EK EL EM EN EO EP", "FA FB FC FD FE FF FG FH FI FJ FK FL FM FN FO FP", "GA GB GC GD GE GF GG GH GI GJ GK GL GM GN GO GP", "HA HB HC HD HE HF HG HH HI HJ HK HL HM HN HO HP", "IA IB IC ID IE IF IG IH II IJ IK IL IM IN IO IP", "JA JB JC JD JE JF JG JH JI JJ JK JL JM JN JO JP", "KA KB KC KD KE KF KG KH KI KJ KK KL KM KN KO KP", "LA LB LC LD LE LF LG LH LI LJ LK LL LM LN LO LP", "MA MB MC MD ME MF MG MH MI MJ MK ML MM MN MO MP", "NA NB NC ND NE NF NG NH NI NJ NK NL NM NN NO NP", "OA OB OC OD OE OF OG OH OI OJ OK OL OM ON OO OP", "PA PB PC PD PE PF PG PH PI PJ PK PL PM PN PO PP", "QA QB QC QD QE QF QG QH QI QJ QK QL QM QN QO QP", "RA RB RC RD RE RF RG RH RI RJ RK RL RM RN RO RP", "SA SB SC SD SE SF SG SH SI SJ SK SL SM SN SO SP", "TA TB TC TD TE TF TG TH TI TJ TK TL TM TN TO TP", "UA UB UC UD UE UF UG UH UI UJ UK UL UM UN UO UP", "VA VB VC VD VE VF VG VH VI VJ VK VL VM VN VO VP", "WA WB WC WD WE WF WG WH WI WJ WK WL WM WN WO WP", "XA XB XC XD XE XF XG XH XI XJ XK XL XM XN XO XP", "YA YB YC YD YE YF YG YH YI YJ YK YL YM YN YO YP", "ZA ZB ZC ZD ZE ZF ZG ZH ZI ZJ ZK ZL ZM ZN ZO ZP", "AAA AAB AAC AAD AAE AAF AAG AAH AAI AAJ AAK AAL", "BAA BAB BAC BAD BAE BAF BAG BAH BAI BAJ BAK BAL", "CAA CAB CAC CAD CAE CAF CAG CAH CAI CAJ CAK CAL", "DAA DAB DAC DAD DAE DAF DAG DAH DAI DAJ DAK DAL", "EAA EAB EAC EAD EAE EAF EAG EAH EAI EAJ EAK EAL", "FAA FAB FAC FAD FAE FAF FAG FAH FAI FAJ FAK FAL", "GAA GAB GAC GAD GAE GAF GAG GAH GAI GAJ GAK GAL", "HAA HAB HAC HAD HAE HAF HAG HAH HAI HAJ HAK HAL", "IAA IAB IAC IAD IAE IAF IAG IAH IAI IAJ IAK IAL", "JAA JAB JAC JAD JAE JAF JAG JAH JAI JAJ JAK JAL", "KAA KAB KAC KAD KAE KAF KAG KAH KAI KAJ KAK KAL", "LAA LAB LAC LAD LAE LAF LAG LAH LAI LAJ LAK LAL", "MAA MAB MAC MAD MAE MAF MAG MAH MAI MAJ MAK MAL", "NAA NAB NAC NAD NAE NAF NAG NAH NAI NAJ NAK NAL", "OAA OAB OAC OAD OAE OAF OAG OAH OAI OAJ OAK OAL", "PAA PAB PAC PAD PAE PAF PAG PAH PAI PAJ PAK PAL", "QAA QAB QAC QAD QAE QAF QAG QAH QAI QAJ QAK QAL", "RAA RAB RAC RAD RAE RAF RAG RAH RAI RAJ RAK RAL", "SAA SAB SAC SAD SAE SAF SAG SAH SAI SAJ SAK SAL", "TAA TAB TAC TAD TAE TAF TAG TAH TAI TAJ TAK TAL", "UAA UAB UAC UAD UAE UAF UAG UAH UAI UAJ UAK UAL", "VAA VAB VAC VAD VAE VAF VAG VAH VAI VAJ VAK VAL", "WAA WAB WAC WAD WAE WAF WAG WAH WAI WAJ WAK WAL"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP", "AAA AAB AAC AAD AAE AAF AAG AAH AAI AAJ AAK AAL", "ABA ABB ABC ABD ABE ABF ABG ABH ABI ABJ ABK ABL", "ACA ACB ACC ACD ACE ACF ACG ACH ACI ACJ ACK ACL", "ADA ADB ADC ADD ADE ADF ADG ADH ADI ADJ ADK ADL", "AEA AEB AEC AED AEE AEF AEG AEH AEI AEJ AEK AEL", "AFA AFB AFC AFD AFE AFF AFG AFH AFI AFJ AFK AFL", "AGA AGB AGC AGD AGE AGF AGG AGH AGI AGJ AGK AGL", "AHA AHB AHC AHD AHE AHF AHG AHH AHI AHJ AHK AHL", "BA BB BC BD BE BF BG BH BI BJ BK BL BM BN BO BP", "BQ BR BS BT BU BV BW BX BY BZ AQ AR AS AT AU AV", "CA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP", "DA DB DC DD DE DF DG DH DI DJ DK DL DM DN DO DP", "DU DV DW DX DY DZ CQ CR CS CT CU CV CW CX CY CZ", "EA EB EC ED EE EF EG EH EI EJ EK EL EM EN EO EP", "FA FB FC FD FE FF FG FH FI FJ FK FL FM FN FO FP", "FY FZ EQ ER ES ET EU EV EW EX EY EZ DQ DR DS DT", "GA GB GC GD GE GF GG GH GI GJ GK GL GM GN GO GP", "GS GT GU GV GW GX GY GZ FQ FR FS FT FU FV FW FX", "HA HB HC HD HE HF HG HH HI HJ HK HL HM HN HO HP", "IA IB IC ID IE IF IG IH II IJ IK IL IM IN IO IP", "IW IX IY IZ HQ HR HS HT HU HV HW HX HY HZ GQ GR", "JA JB JC JD JE JF JG JH JI JJ JK JL JM JN JO JP", "JQ JR JS JT JU JV JW JX JY JZ IQ IR IS IT IU IV", "KA KB KC KD KE KF KG KH KI KJ KK KL KM KN KO KP", "LA LB LC LD LE LF LG LH LI LJ LK LL LM LN LO LP", "LU LV LW LX LY LZ KQ KR KS KT KU KV KW KX KY KZ", "MA MB MC MD ME MF MG MH MI MJ MK ML MM MN MO MP", "NA NB NC ND NE NF NG NH NI NJ NK NL NM NN NO NP", "NY NZ MQ MR MS MT MU MV MW MX MY MZ LQ LR LS LT", "OA OB OC OD OE OF OG OH OI OJ OK OL OM ON OO OP", "OS OT OU OV OW OX OY OZ NQ NR NS NT NU NV NW NX", "PA PB PC PD PE PF PG PH PI PJ PK PL PM PN PO PP", "QA QB QC QD QE QF QG QH QI QJ QK QL QM QN QO QP", "QW QX QY QZ PQ PR PS PT PU PV PW PX PY PZ OQ OR", "RA RB RC RD RE RF RG RH RI RJ RK RL RM RN RO RP", "RQ RR RS RT RU RV RW RX RY RZ QQ QR QS QT QU QV", "SA SB SC SD SE SF SG SH SI SJ SK SL SM SN SO SP", "TA TB TC TD TE TF TG TH TI TJ TK TL TM TN TO TP", "TU TV TW TX TY TZ SQ SR SS ST SU SV SW SX SY SZ", "UA UB UC UD UE UF UG UH UI UJ UK UL UM UN UO UP", "VA VB VC VD VE VF VG VH VI VJ VK VL VM VN VO VP", "VY VZ UQ UR US UT UU UV UW UX UY UZ TQ TR TS TT", "WA WB WC WD WE WF WG WH WI WJ WK WL WM WN WO WP", "WS WT WU WV WW WX WY WZ VQ VR VS VT VU VV VW VX", "XA XB XC XD XE XF XG XH XI XJ XK XL XM XN XO XP", "YA YB YC YD YE YF YG YH YI YJ YK YL YM YN YO YP", "YW YX YY YZ XQ XR XS XT XU XV XW XX XY XZ WQ WR", "ZQ ZR ZS ZT ZU ZV ZW ZX ZY ZZ YQ YR YS YT YU YV"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> votes = {"AA BY BZ CA CB UD CD CE CF CG CH CI CJ CK CL CM CN", "AB CO CP CQ CR CS CT CU CV CW CX CY CZ DA DB DC DD", "AC DE DF DG DH DI DJ DK DL DM DN DO DP DQ DR DS DT", "AD DU DV DW DX DY DZ EA EB EC ED EE EF EG EH EI EJ", "AE EK EL EM EN EO EP EQ ER ES ET EU EV EW EX EY EZ", "AF FA FB FC FD FE FF FG FH FI FJ FK FL FM FN FO FP", "AG FQ FR FS FT FU FV FW FX FY FZ GA GB GC GD GE GF", "AH GG GH GI GJ GK GL GM GN GO GP GQ GR GS GT GU GV", "AI GW GX GY GZ HA HB HC HD HE HF HG HH HI HJ HK HL", "AJ HM HN HO HP HQ HR HS HT HU HV HW HX HY HZ IA IB", "AK IC ID IE IF IG IH II IJ IK IL IM IN IO IP IQ IR", "AL IS IT IU IV IW IX IY IZ JA JB JC JD JE JF JG JH", "AM JI JJ JK JL JM JN JO JP JQ JR JS JT JU JV JW JX", "AN JY JZ KA KB KC KD KE KF KG KH KI KJ KK KL KM KN", "AO KO KP KQ KR KS KT KU KV KW KX KY KZ LA LB LC LD", "AP LE LF LG LH LI LJ LK LL LM LN LO LP LQ LR LS LT", "AQ LU LV LW LX LY LZ MA MB MC MD ME MF MG MH MI MJ", "AR MK ML MM MN MO MP MQ MR MS MT MU MV MW MX MY MZ", "AS NA NB NC ND NE NF NG NH NI NJ NK NL NM NN NO NP", "AT NQ NR NS NT NU NV NW NX NY NZ OA OB OC OD OE OF", "AU OG OH OI OJ OK OL OM ON OO OP OQ OR OS OT OU OV", "AV OW OX OY OZ PA PB PC PD PE PF PG PH PI PJ PK PL", "AW PM PN PO PP PQ PR PS PT PU PV PW PX PY PZ QA QB", "AX QC QD QE QF QG QH QI QJ QK QL QM QN QO QP QQ QR", "AY QS QT QU QV QW QX QY QZ RA RB RC RD RE RF RG RH", "AZ RI RJ RK RL RM RN RO RP RQ RR RS RT RU RV RW RX", "BA RY RZ SA SB SC SD SE SF SG SH SI SJ SK SL SM SN", "BB SO SP SQ SR SS ST SU SV SW SX SY SZ TA TB TC TD", "BC TE TF TG TH TI TJ TK TL TM TN TO TP TQ TR TS TT", "BD TU TV TW TX TY TZ UA UB UC UD UE UF UG UH UI UJ", "BE UK UL UM UN UO UP UQ UR US UT UU UV UW UX UY UZ", "BF VA VB VC VD VE VF VG VH VI VJ VK VL VM VN VO VP", "BG VQ VR VS VT VU VV VW VX VY VZ WA WB WC WD WE WF", "BH WG WH WI WJ WK WL WM WN WO WP WQ WR WS WT WU WV", "BI WW WX WY WZ XA XB XC XD XE XF XG XH XI XJ XK XL", "BJ XM XN XO XP XQ XR XS XT XU XV XW XX XY XZ YA YB", "BK YC YD YE YF YG YH YI YJ YK YL YM YN YO YP YQ YR", "BL YS YT YU YV YW YX YY YZ ZA ZB ZC ZD ZE ZF ZG ZH", "BM ZI ZJ ZK ZL ZM ZN ZO ZP ZQ ZR ZS ZT ZU ZV ZW ZX", "BN ZY ZZ AA AB AC AD AE AF AG AH AI AJ AK AL AM AN", "BO AO AP AQ AR AS AT AU AV AW AX AY AZ BA BB BC BD", "BP BE BF BG BH BI BJ BK BL BM BN BO BQ BR BS BT BU", "BQ BV BW BX BY BZ CA CB CC CD CE CF CG CH CI CJ CK", "BR CL CM CN CO CP CQ CR CS CT CU CV CW CX CY CZ DA", "BS DB DC DD DE DF DG DH DI DJ DK DL DM DN DO DP DQ", "BT DR DS DT DU DV DW DX DY DZ EA EB EC ED EE EF EG", "BU EH EI EJ EK EL EM EN EO EP EQ ER ES ET EU EV EW", "BV EX EY EZ FA FB FC FD FE FF FG FH FI FJ FK FL FM", "BW FN FO FP FQ FR FS FT FU FV FW FX FY FZ GA GB GC", "BX GD UD GF GG GH GI GJ GK GL GM GN GO GP GQ GR GS"};
    string website = "BX";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "B AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP", "C AR AS AT AU AV AW AX AY AZ BA BB BC BD BE BF BG", "D BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW BX", "E BZ CA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO", "F CQ CR CS CT CU CV CW CX CY CZ DA DB DC DD DE DF", "G DH DI DJ DK DL DM DN DO DP DQ DR DS DT DU DV DW", "H DY DZ EA EB EC ED EE EF EG EH EI EJ EK EL EM EN", "I EP EQ ER ES ET EU EV EW EX EY EZ FA FB FC FD FE", "J FG FH FI FJ FK FL FM FN FO FP FQ FR FS FT FU FV", "K FX FY FZ GA GB GC GD GE GF GG GH GI GJ GK GL GM", "L GO GP GQ GR GS GT GU GV GW GX GY GZ HA HB HC HD", "M HF HG HH HI HJ HK HL HM HN HO HP HQ HR HS HT HU", "N HW HX HY HZ IA IB IC ID IE IF IG IH II IJ IK IL", "O IN IO IP IQ IR IS IT IU IV IW IX IY IZ JA JB JC", "P JE JF JG JH JI JJ JK JL JM JN JO JP JQ JR JS JT", "Q JV JW JX JY JZ KA KB KC KD KE KF KG KH KI KJ KK", "R KM KN KO KP KQ KR KS KT KU KV KW KX KY KZ LA LB", "S LD LE LF LG LH LI LJ LK LL LM LN LO LP LQ LR LS", "T LU LV LW LX LY LZ MA MB MC MD ME MF MG MH MI MJ", "U ML MM MN MO MP MQ MR MS MT MU MV MW MX MY MZ NA", "V NC ND NE NF NG NH NI NJ NK NL NM NN NO NP NQ NR", "W NT NU NV NW NX NY NZ OA OB OC OD OE OF OG OH OI", "X OK OL OM ON OO OP OQ OR OS OT OU OV OW OX OY OZ", "Y PB PC PD PE PF PG PH PI PJ PK PL PM PN PO PP PQ", "Z PS PT PU PV PW PX PY PZ QA QB QC QD QE QF QG QH", "AA QJ QK QL QM QN QO QP QQ QR QS QT QU QV QW QX QY", "AB RA RB RC RD RE RF RG RH RI RJ RK RL RM RN RO RP", "AC RR RS RT RU RV RW RX RY RZ SA SB SC SD SE SF SG", "AD SI SJ SK SL SM SN SO SP SQ SR SS ST SU SV SW SX", "AE SZ TA TB TC TD TE TF TG TH TI TJ TK TL TM TN TO", "AF TQ TR TS TT TU TV TW TX TY TZ UA UB UC UD UE UF", "AG UH UI UJ UK UL UM UN UO UP UQ UR US UT UU UV UW", "AH UY UZ VA VB VC VD VE VF VG VH VI VJ VK VL VM VN", "AI VP VQ VR VS VT VU VV VW VX VY VZ WA WB WC WD WE", "AJ WG WH WI WJ WK WL WM WN WO WP WQ WR WS WT WU WV", "AK WX WY WZ XA XB XC XD XE XF XG XH XI XJ XK XL XM", "AL XO XP XQ XR XS XT XU XV XW XX XY XZ YA YB YC YD", "AM YF YG YH YI YJ YK YL YM YN YO YP YQ YR YS YT YU", "AN YW YX YY YZ ZA ZB ZC ZD ZE ZF ZG ZH ZI ZJ ZK ZL", "AO ZN ZO ZP ZQ ZR ZS ZT ZU ZV ZW ZX ZY ZZ AAA AAB", "AP AAD AAE AAF AAG AAH AAI AAJ AAK AAL AAM AAN AAO", "AQ AAQ AAR AAS AAT AAU AAV AAW AAX AAY AAZ ABA ABB", "AR ABD ABE ABF ABG ABH ABI ABJ ABK ABL ABM ABN ABO", "AS ABQ ABR ABS ABT ABU ABV ABW ABX ABY ABZ ACA ACB", "AT ACD ACE ACF ACG ACH ACI ACJ ACK ACL ACM ACN ACO", "AU ACQ ACR ACS ACT ACU ACV ACW ACX ACY ACZ ADA ADB", "AV ADD ADE ADF ADG ADH ADI ADJ ADK ADL ADM ADN ADO", "AW ADQ ADR ADS ADT ADU ADV ADW ADX ADY ADZ AEA AEB", "AX AED AEE AEF AEG AEH AEI AEJ AEK AEL AEM AEN AEO"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 744;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> votes = {"A B C D", "B C D", "C D"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> votes = {"A B C D E F G H I J K L N O P Q R S T U V W X Y", "B A C D E F G H I J K L N O P Q R S T U V W X Y", "C A B D E F G H I J K L N O P Q R S T U V W X Y", "D A B C E F G H I J K L N O P Q R S T U V W X Y", "E A B C D F G H I J K L N O P Q R S T U V W X Y", "F A B C D E G H I J K L N O P Q R S T U V W X Y", "G A B C D E F H I J K L N O P Q R S T U V W X Y", "H A B C D E F G I J K L N O P Q R S T U V W X Y", "I A B C D E F G H J K L N O P Q R S T U V W X Y", "J A B C D E F G H I K L N O P Q R S T U V W X Y", "K A B C D E F G H I J L N O P Q R S T U V W X Y", "L A B C D E F G H I J K N O P Q R S T U V W X Y", "M A B C D E F G H I J K L N O P Q R S T U V W X Y", "N A B C D E F G H I J K L O P Q R S T U V W X Y", "O A B C D E F G H I J K L N P Q R S T U V W X Y", "P A B C D E F G H I J K L N O Q R S T U V W X Y", "Q A B C D E F G H I J K L N O P R S T U V W X Y", "R A B C D E F G H I J K L N O P Q S T U V W X Y", "S A B C D E F G H I J K L N O P Q R T U V W X Y", "T A B C D E F G H I J K L N O P Q R S U V W X Y", "U A B C D E F G H I J K L N O P Q R S T V W X Y", "V A B C D E F G H I J K L N O P Q R S T U W X Y", "W A B C D E F G H I J K L N O P Q R S T U V X Y", "X A B C D E F G H I J K L N O P Q R S T U V W Y", "Y A B C D E F G H I J K L N O P Q R S T U V W X"};
    string website = "M";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T", "B C D E F G H I J K L M N O P Q R S T U", "C D E F G H I J K L M N O P Q R S T U V", "D E F G H I J K L M N O P Q R S T U V W", "E F G H I J K L M N O P Q R S T U V W X", "F G H I J K L M N O P Q R S T U V W X Y", "G H I J K L M N O P Q R S T U V W X Y Z", "H I J K L M N O P Q R S T U V W X Y Z AB", "I J K L M N O P Q R S T U V W X Y Z AB BB", "J K L M N O P Q R S T U V W X Y Z AB BB CB", "K L M N O P Q R S T U V W X Y Z AB BB CB DB", "L M N O P Q R S T U V W X Y Z AB BB CB DB EB", "M N O P Q R S T U V W X Y Z AB BB CB DB EB FB", "N O P Q R S T U V W X Y Z AB BB CB DB EB FB GB", "O P Q R S T U V W X Y Z AB BB CB DB EB FB GB HB", "P Q R S T U V W X Y Z AB BB CB DB EB FB GB HB IB", "Q R S T U V W X Y Z AB BB CB DB EB FB GB HB IB JB", "R S T U V W X Y Z AB BB CB DB EB FB GB HB IB JB KB", "S T U V W X Y Z AB BB CB DB EB FB GB HB IB JB KB", "T U V W X Y Z AB BB CB DB EB FB GB HB IB JB KB LB", "U V W X Y Z AB BB CB DB EB FB GB HB IB JB KB LB MB", "V W X Y Z AB BB CB DB EB FB GB HB IB JB KB LB MB", "W X Y Z AB BB CB DB EB FB GB HB IB JB KB LB MB NB", "X Y Z AB BB CB DB EB FB GB HB IB JB KB LB MB NB OB", "Y Z AB BB CB DB EB FB GB HB IB JB KB LB MB NB OB", "Z AB BB CB DB EB FB GB HB IB JB KB LB MB NB OB PB", "AB BB CB DB EB FB GB HB IB JB KB LB MB NB OB PB QB", "BB CB DB EB FB GB HB IB JB KB LB MB NB OB PB QB RB", "CB DB EB FB GB HB IB JB KB LB MB NB OB PB QB RB SB", "DB EB FB GB HB IB JB KB LB MB NB OB PB QB RB SB TB", "EB FB GB HB IB JB KB LB MB NB OB PB QB RB SB TB UB", "FB GB HB IB JB KB LB MB NB OB PB QB RB SB TB UB VB", "GB HB IB JB KB LB MB NB OB PB QB RB SB TB UB VB WB", "HB IB JB KB LB MB NB OB PB QB RB SB TB UB VB WB XB", "IB JB KB LB MB NB OB PB QB RB SB TB UB VB WB XB YB", "JB KB LB MB NB OB PB QB RB SB TB UB VB WB XB YB ZB", "KB LB MB NB OB PB QB RB SB TB UB VB WB XB YB ZB AC", "LB MB NB OB PB QB RB SB TB UB VB WB XB YB ZB AC BC", "MB NB OB PB QB RB SB TB UB VB WB XB YB ZB AC BC CC", "NB OB PB QB RB SB TB UB VB WB XB YB ZB AC BC CC DC", "OB PB QB RB SB TB UB VB WB XB YB ZB AC BC CC DC EC", "PB QB RB SB TB UB VB WB XB YB ZB AC BC CC DC EC FC", "QB RB SB TB UB VB WB XB YB ZB AC BC CC DC EC FC GC", "RB SB TB UB VB WB XB YB ZB AC BC CC DC EC FC GC HC", "SB TB UB VB WB XB YB ZB AC BC CC DC EC FC GC HC IC", "TB UB VB WB XB YB ZB AC BC CC DC EC FC GC HC IC JC", "UB VB WB XB YB ZB AC BC CC DC EC FC GC HC IC JC KC", "VB WB XB YB ZB AC BC CC DC EC FC GC HC IC JC KC LC", "WB XB YB ZB AC BC CC DC EC FC GC HC IC JC KC LC MC"};
    string website = "B";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 2251602250981365;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> votes = {"AA AB AC", "AB AC AD", "AC AD AE", "AD AE AF", "AE AF AG", "AF AG AH", "AG AH AI", "AH AI AJ", "AI AJ BA", "AJ BA BB", "BA BB BC", "BB BC BD", "BC BD BE", "BD BE BF", "BE BF BG", "BF BG BH", "BG BH BI", "BH BI BJ", "BI BJ CA", "BJ CA CB", "CA CB CC", "CB CC CD", "CC CD CE", "CD CE CF", "CE CF CG", "CF CG CH", "CG CH CI", "CH CI CJ", "CI CJ DA", "CJ DA DB", "DA DB DC", "DB DC DD", "DC DD DE", "DD DE DF", "DE DF DG", "DF DG DH", "DG DH DI", "DH DI DJ", "DI DJ EA", "DJ EA EB", "EA EB EC", "EB EC ED", "EC ED EE", "ED EE EF", "EE EF EG", "EF EG EH", "EG EH EI", "EH EI EJ"};
    string website = "AC";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 9615053951;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "B Z BB CC DD EE FF GG HH II JJ KK LL MM NN OO PP", "C QQ RR SS TT UU VV WW XX YY ZZ AB AC AD AE AF", "D AH AI AJ AK AL AM AN AO AP AQ AR AS AT AU AV", "E AW AX AY BA BC BD BE BF BG BH BI BJ BK BL BM", "F BN BO BP BQ BR BS BT BU BV BW BX BY BZ CA CB", "G CD CE CF CG CH CI CJ CK CL CM CN CO CP CQ CR", "H CS CT CU CV CW CX CY CZ DA DB DC DF DG DH DI", "I DJ DK DL DM DN DO DP DQ DR DS DT DU DV DW DX", "J DY DZ EA EB EC EF EG EH EI EJ EK EL EM EN EO", "K EP EQ ER ES ET EU EV EW EX EY EZ FA FB FC FD", "L FE FG FH FI FJ FK FL FM FN FO FP FQ FR FS FT", "M FU FV FW FX FY FZ GA GB GC GD GE GF GH GI GJ", "N GK GL GM GN GO GP GQ GR GS GT GU GV GW GX GY", "O GZ HA HB HC HD HE HF HG HI HJ HK HL HM HN HO", "P NOT ENOUGH TO KILL YOU QUESTION MARK", "Q THEN YOU HAVE DISSECTED THE CONSTRAINTS", "R CAREFULLY", "S ACCEPT MY COGRARTULATIONS FOR BEING SUCH", "T AAAAAAAA GOOD CODER", "U EXCLAMNATION MARKKK", "V HEHEHE", "W HOHOHO", "X YAY", "Y OYY"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 265;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> votes = {"A AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP", "B AQ AR AS AT AU AV AW AX AY AZ BA BB BC BD BE BF", "C BG BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV", "D BW BX BY BZ CA CB CC CD CE CF CG CH CI CJ CK CL", "E CM CN CO CP CQ CR CS CT CU CV CW CX CY CZ DA DB", "F DC DD DE DF DG DH DI DJ DK DL DM DN DO DP DQ DR", "G DS DT DU DV DW DX DY DZ EA EB EC ED EE EF EG EH", "H EI EJ EK EL EM EN EO EP EQ ER ES ET EU EV EW EX", "I EY EZ FA FB FC FD FE FF FG FH FI FJ FK FL FM FN", "J FO FP FQ FR FS FT FU FV FW FX FY FZ GA GB GC GD", "K GE GF GG GH GI GJ GK GL GM GN GO GP GQ GR GS GT", "L GU GV GW GX GY GZ HA HB HC HD HE HF HG HH HI HJ", "M HK HL HM HN HO HP HQ HR HS HT HU HV HW HX HY HZ", "N IA IB IC ID IE IF IG IH II IJ IK IL IM IN IO IP", "O IQ IR IS IT IU IV IW IX IY IZ JA JB JC JD JE JF", "P JG JH JI JJ JK JL JM JN JO JP JQ JR JS JT JU JV", "Q JW JX JY JZ KA KB KC KD KE KF KG KH KI KJ KK KL", "R KM KN KO KP KQ KR KS KT KU KV KW KX KY KZ LA LB", "S LC LD LE LF LG LH LI LJ LK LL LM LN LO LP LQ LR", "T LS LT LU LV LW LX LY LZ MA MB MC MD ME MF MG MH", "U MI MJ MK ML MM MN MO MP MQ MR MS MT MU MV MW MX", "V MY MZ NA NB NC ND NE NF NG NH NI NJ NK NL NM NN", "W NO NP NQ NR NS NT NU NV NW NX NY NZ OA OB OC OD", "X OE OF OG OH OI OJ OK OL OM ON OO OP OQ OR OS OT", "Y OU OV OW OX OY OZ PA PB PC PD PE PF PG PH PI PJ", "Z PK PL PM PN PO PP PQ PR PS PT PU PV PW PX PY PZ", "AAA AAB AAC AAD AAE QA QB QC QD QE QF QG QH QI QJ", "AAF AAG AAH AAI AAJ QK QL QM QN QO QP QQ QR QS QT", "AAK AAL AAM AAN AAO QU QV QW QX QY QZ RA RB RC RD", "AAP AAQ AAR AAS AAT RE RF RG RH RI RJ RK RL RM RN", "AAU AAV AAW AAX AAY RO RP RQ RR RS RT RU RV RW RX", "AAZ ABA ABB ABC ABD RY RZ SA SB SC SD SE SF SG SH", "ABE ABF ABG ABH ABI SI SJ SK SL SM SN SO SP SQ SR", "ABJ ABK ABL ABM ABN SS ST SU SV SW SX SY SZ TA TB", "ABO ABP ABQ ABR ABS TC TD TE TF TG TH TI TJ TK TL", "ABT ABU ABV ABW ABX TM TN TO TP TQ TR TS TT TU TV", "ABY ABZ ACA ACB ACC TW TX TY TZ UA UB UC UD UE UF", "ACD ACE ACF ACG ACH UG UH UI UJ UK UL UM UN UO UP", "ACI ACJ ACK ACL ACM UQ UR US UT UU UV UW UX UY UZ", "ACN ACO ACP ACQ ACR VA VB VC VD VE VF VG VH VI VJ", "ACS ACT ACU ACV ACW VK VL VM VN VO VP VQ VR VS VT", "ACX ACY ACZ ADA ADB VU VV VW VX VY VZ WA WB WC WD", "ADC ADD ADE ADF ADG WE WF WG WH WI WJ WK WL WM WN", "ADH ADI ADJ ADK ADL WO WP WQ WR WS WT WU WV WW WX", "ADM ADN ADO ADP ADQ WY WZ XA XB XC XD XE XF XG XH", "ADR ADS ADT ADU ADV XI XJ XK XL XM XN XO XP XQ XR", "ADW ADX ADY ADZ AEA XS XT XU XV XW XX XY XZ YA YB", "AEB AEC AED AEE AEF YC YD YE YF YG YH YI YJ YK YL", "AEG AEH AEI AEJ AEK YM YN YO YP YQ YR YS YT YU YV", "AEL AEM AEN AEO AEP YW YX YY YZ ZA ZB ZC ZD ZE ZF"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> votes = {"B D", "C D", "A B", "D A"};
    string website = "C";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "B C D E F G H I J K L M N O P Q R S T U V W X Y Z", "C D E F G H I J K L M N O P Q R S T U V W X Y Z", "D E F G H I J K L M N O P Q R S T U V W X Y Z AA", "E F G H I J K L M N O P Q R S T U V W X Y Z AA BB", "F G H I J K L M N O P Q R S T U V W X Y Z AA BB", "G H I J K L M N O P Q R S T U V W X Y Z AA BB CC", "H I J K L M N O P Q R S T U V W X Y Z AA BB CC", "I J K L M N O P Q R S T U V W X Y Z AA BB CC DD", "J K L M N O P Q R S T U V W X Y Z AA BB CC DD EE", "K L M N O P Q R S T U V W X Y Z AA BB CC DD EE FF", "L M N O P Q R S T U V W X Y Z AA BB CC DD EE FF", "M N O P Q R S T U V W X Y Z AA BB CC DD EE FF GG", "N O P Q R S T U V W X Y Z AA BB CC DD EE FF GG HH", "O P Q R S T U V W X Y Z AA BB CC DD EE FF GG HH", "P Q R S T U V W X Y Z AA BB CC DD EE FF GG HH", "Q R S T U V W X Y Z AA BB CC DD EE FF GG HH", "R S T U V W X Y Z AA BB CC DD EE FF GG HH", "S T U V W X Y Z AA BB CC DD EE FF GG HH", "T U V W X Y Z AA BB CC DD EE FF GG HH", "U V W X Y Z AA BB CC DD EE FF GG HH", "V W X Y Z AA BB CC DD EE FF GG HH", "W X Y Z AA BB CC DD EE FF GG HH", "X Y Z AA BB CC DD EE FF GG HH", "Y Z AA BB CC DD EE FF GG HH II JJ KK LL MM NN OO", "Z AA BB CC DD EE FF GG HH II JJ KK LL MM NN OO", "AA BB CC DD EE FF GG HH II JJ KK LL MM NN OO PP", "BB CC DD EE FF GG HH II JJ KK LL MM NN OO PP", "CC DD EE FF GG HH II JJ KK LL MM NN OO PP", "DD EE FF GG HH II JJ KK LL MM NN OO PP", "EE FF GG HH II JJ KK LL MM NN OO PP"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 12792610945;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "Z AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP", "AQ AR AS AT AU AV AW AX AY AZ BA BB BC BD BE BF BG", "BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW BX", "BY BZ CA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO", "CP CQ CR CS CT CU CV CW CX CY CZ DA DB DC DD DE DF", "DG DH DI DJ DK DL DM DN DO DP DQ DR DS DT DU DV DW", "DX DY DZ EA EB EC ED EE EF EG EH EI EJ EK EL EM EN", "EO EP EQ ER ES ET EU EV EW EX EY EZ FA FB FC FD FE", "FF FG FH FI FJ FK FL FM FN FO FP FQ FR FS FT FU FV", "FW FX FY FZ GA GB GC GD GE GF GG GH GI GJ GK GL GM", "GN GO GP GQ GR GS GT GU GV GW GX GY GZ HA HB HC HD", "HE HF HG HH HI HJ HK HL HM HN HO HP HQ HR HS HT HU", "HV HW HX HY HZ IA IB IC ID IE IF IG IH II IJ IK IL", "IM IN IO IP IQ IR IS IT IU IV IW IX IY IZ JA JB JC", "JD JE JF JG JH JI JJ JK JL JM JN JO JP JQ JR JS JT", "JU JV JW JX JY JZ KA KB KC KD KE KF KG KH KI KJ KK", "KL KM KN KO KP KQ KR KS KT KU KV KW KX KY KZ LA LB", "LC LD LE LF LG LH LI LJ LK LL LM LN LO LP LQ LR LS", "LT LU LV LW LX LY LZ MA MB MC MD ME MF MG MH MI MJ", "MK ML MM MN MO MP MQ MR MS MT MU MV MW MX MY MZ NA", "NB NC ND NE NF NG NH NI NJ NK NL NM NN NO NP NQ NR", "NS NT NU NV NW NX NY NZ OA OB OC OD OE OF OG OH OI", "OJ OK OL OM ON OO OP OQ OR OS OT OU OV OW OX OY OZ", "PA PB PC PD PE PF PG PH PI PJ PK PL PM PN PO PP PQ", "PR PS PT PU PV PW PX PY PZ QA QB QC QD QE QF QG QH", "QI QJ QK QL QM QN QO QP QQ QR QS QT QU QV QW QX QY", "QZ RA RB RC RD RE RF RG RH RI RJ RK RL RM RN RO RP", "RQ RR RS RT RU RV RW RX RY RZ SA SB SC SD SE SF SG", "SH SI SJ SK SL SM SN SO SP SQ SR SS ST SU SV SW SX", "SY SZ TA TB TC TD TE TF TG TH TI TJ TK TL TM TN TO", "TP TQ TR TS TT TU TV TW TX TY TZ UA UB UC UD UE UF", "UG UH UI UJ UK UL UM UN UO UP UQ UR US UT UU UV UW", "UX UY UZ VA VB VC VD VE VF VG VH VI VJ VK VL VM VN", "VO VP VQ VR VS VT VU VV VW VX VY VZ WA WB WC WD WE", "WF WG WH WI WJ WK WL WM WN WO WP WQ WR WS WT WU WV", "WW WX WY WZ XA XB XC XD XE XF XG XH XI XJ XK XL XM", "XN XO XP XQ XR XS XT XU XV XW XX XY XZ YA YB YC YD", "YE YF YG YH YI YJ YK YL YM YN YO YP YQ YR YS YT YU", "YV YW YX YY YZ ZA ZB ZC ZD ZE ZF ZG ZH ZI ZJ ZK ZL", "ZM ZN ZO ZP ZQ ZR ZS ZT ZU ZV ZW ZX ZY ZZ AAA ABA", "ACA ADA AEA AFA AGA AHA AIA AJA AKA ALA AMA ANA", "AOA APA AQA ARA ASA ATA AUA AVA AWA AXA AYA AZA", "BAA BBA BCA BDA BEA BFA BGA BHA BIA BJA BKA BLA", "BMA BNA BOA BPA BQA BRA BSA BTA BUA BVA BWA BXA", "BYA BZA CAA CBA CCA CDA CEA CFA CGA CHA CIA CJA", "CKA CLA CMA CNA COA CPA CQA CRA CSA CTA CUA CVA", "CWA CXA CYA CZA DAA DBA DCA DDA DEA DFA DGA DHA", "DIA DJA DKA DLA DMA DNA DOA DPA DQA DRA DSA DTA", "DUA DVA DWA DXA DYA DZA EAA EBA ECA EDA EEA EFA"};
    string website = "DUA";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> votes = {"A B", "B C", "C A", "D A"};
    string website = "D";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> votes = {"NH DL DR HN SU YN LY CF SD QZ UR OH ZB WA OS CJ", "CE U IY UG VA LF VO VU DB KU ST VP LN LI RM YU", "PW WF HJ IQ US UJ LX MV MK HQ BD MO DR QX OX FV", "RR XW C NT KD WS JN NE IO CG JV UB NP CK TX DL", "YP BG ND TI WR ZB HF JC GR II VQ KI ZF LP RG RY", "KN SK FR UR QE PF IX YS SN TV SU GC WF NT KP VW", "QC XT QG MT XW XM WX EN FU TP PY GC FF IG ZC QU", "Q EU MN QU VB VL PM NO QI JI UT XC GK JL NE FF", "ZS Z DB XE XX IR EA RM YP LE XT GV KH PQ IN QD", "CD J LE YQ PV ZU OY G VP CN YK CA LZ MQ HF LR", "NP LJ IV MO UA NX FD SP ZC CW M JJ TO KB ZM VS", "KK LS VK F MO KJ BN IE MW ZX LG MN TN LO BF EW", "VL NT YW JJ SW SN JN WV UB QJ EC TK ND OM GE IO", "PU TU TZ RH BY GV SH OG HV FW HU TJ HB MQ PX VX", "MP I OT FC JV LO G CR DA EI XD QD SV DH YR JR", "YD TS Y C BQ UH PK JL E XE DW IH KX TT EE XM UB", "UA DQ DW GQ HP JQ JH ES ZU DE JB ZN MV HF TG OV", "IJ UW JD YV FJ KJ WA JF SQ HZ CZ XX FL YC RX KD", "BZ YN PC KQ JG YJ QL JA CP O JP PK IV DX EF SG", "ZV NI RC FE YT NC PM RK VB SL QJ BO RP IG MT UQ", "HV BV FH RB BG VS BD DV XI LV UH GE PS YN YK QQ", "MX PM WW LR DQ MI ED YR FV UM BH XL DU OB SB MR", "QY YK DT TH VE FY YE SN RT SM YR IO SB YD ZE EY", "NQ XC RR RG JL VU RA QI RI SH OV WE GI GX IW YJ", "GJ NR RQ BO TP PU UB LJ IG TU TX H RX UD GI GP", "RF XZ XW BS UW PY SB NG IF HY JL PQ OV TJ NZ WH", "HA GR XV BR WL SY NA FU NU HZ HD FR CC ON NJ UK", "MH WC IL CF PF VR KK XE GE BC NB P QD JI HP WU", "IF JH UI BD XJ C OX FJ IH VR IN XX KC CX LM WJ", "C TX YO PH QQ KA NN XX LD BR YM BG KZ HE YB UH", "RN TL WM OW UP MM VH CW ID DV T TH GS MF PQ GU", "HE OE XE YX ZG KR WU KJ MI VG MS YK DM LV SR UZ", "FG QF JW ZV CR GF DT LW KA FP FD QT RU UT YP B", "JZ VT YY JG HN VS UR UX SA HJ UJ VN UG OC RO ZM", "EI BK J GZ IS ED SW SS JS XZ KN CO TV JD DR DU", "FY CP OC ON ZJ IU JL RK RF DU NZ LM RX FN MA WF", "IA NM DE QS RP XC JK CJ VC VA FZ OX ED JR TT LD", "MG IY ZR LQ RS JC EC JZ NY SB WN FV YQ JQ DC GQ", "XC HJ XI PT EL HV SC ZN CV YB PM IA HS KI TD TZ", "TG TW GR MA EA KT VZ RZ DW TP YW CM DF DB KF BJ", "HN RC OV QK JE PL UH IH FZ DJ QH XP MD JN RL SU", "VN VM EP SP ON IL NG NJ LZ RN QK WE SW BW EU JY", "QS WG UE HF QO DN NE TX UP DM RM GS OB KA O JP", "FM FD DG TZ OQ QM IK Q HZ ZX WU V BT CQ LV TN", "YX HB S PL LQ OZ KK GG SL CZ OA GM MZ OP RD TN", "TS UJ OO JL KV WY KB TW XX HX VT T LQ HO UG KN", "PR WB BA BI LA LK IQ DL PL XS KZ CK MH DF WZ HC", "XO LN QN JM JO BQ EK HL KP E IE WF HS DN GS YM", "ZO IU W LQ VH KO QD KS IG BC OF UO EH LE CS CY", "WS UH NM GG VX RW OT HO SA WY DU V BN LO J CD"};
    string website = "DN";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X", "B Y Z AA AB AC AD AE AF AG AH AI AJ AK AL AM AN", "C AO AP AQ AR AS AT AU AV AW AX AY AZ BA BB BC BD", "D BE BF BG BH BI BJ BK BL BM BN BO BP BQ BR BS BT", "E BU BV BW BX BY BZ CA CB CC CD CE CF CG CH CI CJ", "F CK CL CM CN CO CP CQ CR CS CT CU CV CW CX CY CZ", "G DA DB DC DD DE DF DG DH DI DJ DK DL DM DN DO DP", "H DQ DR DS DT DU DV DW DX DY DZ EA EB EC ED EE EF", "I EG EH EI EJ EK EL EM EN EO EP EQ ER ES ET EU EV", "J EW EX EY EZ FA FB FC FD FE FF FG FH FI FJ FK FL", "K FM FN FO FP FQ FR FS FT FU FV FW FX FY FZ GA GB", "L GC GD GE GF GG GH GI GJ GK GL GM GN GO GP GQ GR", "M GS GT GU GV GW GX GY GZ HA HB HC HD HE HF HG HH", "N HI HJ HK HL HM HN HO HP HQ HR HS HT HU HV HW HX", "O HY HZ IA IB IC ID IE IF IG IH II IJ IK IL IM IN", "P IO IP IQ IR IS IT IU IV IW IX IY IZ JA JB JC JD", "Q JE JF JG JH JI JJ JK JL JM JN JO JP JQ JR JS JT", "R JU JV JW JX JY JZ KA KB KC KD KE KF KG KH KI KJ", "S KK KL KM KN KO KP KQ KR KS KT KU KV KW KX KY KZ", "T LA LB LC LD LE LF LG LH LI LJ LK LL LM LN LO LP", "U LQ LR LS LT LU LV LW LX LY LZ MA MB MC MD ME MF", "V MG MH MI MJ MK ML MM MN MO MP MQ MR MS MT MU MV", "W MW MX MY MZ NA NB NC ND NE NF NG NH NI NJ NK NL", "X NM NN NO NP NQ NR NS NT NU NV NW NX NY NZ OA OB", "Y OC OD OE OF OG OH OI OJ OK OL OM ON OO OP OQ OR", "Z OS OT OU OV OW OX OY OZ PA PB PC PD PE PF PG PH", "AA PI PJ PK PL PM PN PO PP PQ PR PS PT PU PV PW", "AB PX PY PZ QA QB QC QD QE QF QG QH QI QJ QK QL", "AC QM QN QO QP QQ QR QS QT QU QV QW QX QY QZ RA", "AD RB RC RD RE RF RG RH RI RJ RK RL RM RN RO RP", "AE RQ RR RS RT RU RV RW RX RY RZ SA SB SC SD SE", "AF SF SG SH SI SJ SK SL SM SN SO SP SQ SR SS ST", "AG SU SV SW SX SY SZ TA TB TC TD TE TF TG TH TI", "AH TJ TK TL TM TN TO TP TQ TR TS TT TU TV TW TX", "AI TY TZ UA UB UC UD UE UF UG UH UI UJ UK UL UM", "AJ UN UO UP UQ UR US UT UU UV UW UX UY UZ VA VB", "AK VC VD VE VF VG VH VI VJ VK VL VM VN VO VP VQ", "AL VR VS VT VU VV VW VX VY VZ WA WB WC WD WE WF", "AM WG WH WI WJ WK WL WM WN WO WP WQ WR WS WT WU", "AN WV WW WX WY WZ XA XB XC XD XE XF XG XH XI XJ", "AO XK XL XM XN XO XP XQ XR XS XT XU XV XW XX XY", "AP XZ YA YB YC YD YE YF YG YH YI YJ YK YL YM YN", "AQ YO YP YQ YR YS YT YU YV YW YX YY YZ ZA ZB ZC", "AR ZD ZE ZF ZG ZH ZI ZJ ZK ZL ZM ZN ZO ZP ZQ ZR", "AS ZS ZT ZU ZV ZW ZX ZY ZZ AAA AAB AAC AAD AAE AAF", "AT AAG AAH AAI AAJ AAK AAL AAM AAN AAO AAP AAQ AAR", "AU AAS AAT AAU AAV AAW AAX AAY AAZ ABA ABB ABC ABD", "AV ABE ABF ABG ABH ABI ABJ ABK ABL ABM ABN ABO ABP", "AW ABQ ABR ABS ABT ABU ABV ABW ABX ABY ABZ ACA ACB", "AX ACC ACD ACE ACF ACG ACH ACI ACJ ACK ACL ACM ACN"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 768;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "Z BA BB BC BD BE BF BG BH BI BJ BK BL BM BN BO BP", "BQ BR BS BT BU BV BW BX BY BZ CA CB CC CD CE CF CG", "CH CI CJ CK CL CM CN CO CP CQ CR CS CT CU CV CW CX", "CY CZ DA DB DC DD DE DF DG DH DI DJ DK DL DM DN DO", "DP DQ DR DS DT DU DV DW DX DY DZ EA EB EC ED EE EF", "EG EH EI EJ EK EL EM EN EO EP EQ ER ES ET EU EV EW", "EX EY EZ FA FB FC FD FE FF FG FH FI FJ FK FL FM FN", "FO FP FQ FR FS FT FU FV FW FX FY FZ GA GB GC GD GE", "GF GG GH GI GJ GK GL GM GN GO GP GQ GR GS GT GU GV", "GW GX GY GZ HA HB HC HD HE HF HG HH HI HJ HK HL HM", "HN HO HP HQ HR HS HT HU HV HW HX HY HZ IA IB IC ID", "IE IF IG IH II IJ IK IL IM IN IO IP IQ IR IS IT IU", "IV IW IX IY IZ JA JB JC JD JE JF JG JH JI JJ JK JL", "JM JN JO JP JQ JR JS JT JU JV JW JX JY JZ KA KB KC", "KD KE KF KG KH KI KJ KK KL KM KN KO KP KQ KR KS KT", "KU KV KW KX KY KZ LA LB LC LD LE LF LG LH LI LJ LK", "LL LM LN LO LP LQ LR LS LT LU LV LW LX LY LZ MA MB", "MC MD ME MF MG MH MI MJ MK ML MM MN MO MP MQ MR MS", "MT MU MV MW MX MY MZ NA NB NC ND NE NF NG NH NI NJ", "NK NL NM NN NO NP NQ NR NS NT NU NV NW NX NY NZ OA", "OB OC OD OE OF OG OH OI OJ OK OL OM ON OO OP OQ OR", "OS OT OU OV OW OX OY OZ PA PB PC PD PE PF PG PH PI", "PJ PK PL PM PN PO PP PQ PR PS PT PU PV PW PX PY PZ", "QA QB QC QD QE QF QG QH QI QJ QK QL QM QN QO QP QQ", "QR QS QT QU QV QW QX QY QZ RA RB RC RD RE RF RG RH", "RI RJ RK RL RM RN RO RP RQ RR RS RT RU RV RW RX RY", "RZ SA SB SC SD SE SF SG SH SI SJ SK SL SM SN SO SP", "SQ SR SS ST SU SV SW SX SY SZ TA TB TC TD TE TF TG", "TH TI TJ TK TL TM TN TO TP TQ TR TS TT TU TV TW TX", "TY TZ UA UB UC UD UE UF UG UH UI UJ UK UL UM UN UO", "UP UQ UR US UT UU UV UW UX UY UZ VA VB VC VD VE VF", "VG VH VI VJ VK VL VM VN VO VP VQ VR VS VT VU VV VW", "VX VY VZ WA WB WC WD WE WF WG WH WI WJ WK WL WM WN", "WO WP WQ WR WS WT WU WV WW WX WY WZ XA XB XC XD XE", "XF XG XH XI XJ XK XL XM XN XO XP XQ XR XS XT XU XV", "XW XX XY XZ YA YB YC YD YE YF YG YH YI YJ YK YL YM", "YN YO YP YQ YR YS YT YU YV YW YX YY YZ ZA ZB ZC ZD", "ZE ZF ZG ZH ZI ZJ ZK ZL ZM ZN ZO ZP ZQ ZR ZS ZT ZU", "ZV ZW ZX ZY ZZ"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> votes = {"AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP AQ", "AR AS AT AU AV AW AX AY AZ BA BB BC BD BE BF BG BH", "BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW BX BY", "BZ CA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP", "CQ CR CS CT CU CV CW CX CY CZ DA DB DC DD DE DF DG", "DH DI DJ DK DL DM DN DO DP DQ DR DS DT DU DV DW DX", "DY DZ EA EB EC ED EE EF EG EH EI EJ EK EL EM EN EO", "EP EQ ER ES ET EU EV EW EX EY EZ FA FB FC FD FE FF", "FG FH FI FJ FK FL FM FN FO FP FQ FR FS FT FU FV FW", "FX FY FZ GA GB GC GD GE GF GG GH GI GJ GK GL GM GN", "GO GP GQ GR GS GT GU GV GW GX GY GZ HA HB HC HD HE", "HF HG HH HI HJ HK HL HM HN HO HP HQ HR HS HT HU HV", "HW HX HY HZ IA IB IC ID IE IF IG IH II IJ IK IL IM", "IN IO IP IQ IR IS IT IU IV IW IX IY IZ JA JB JC JD", "JE JF JG JH JI JJ JK JL JM JN JO JP JQ JR JS JT JU", "JV JW JX JY JZ KA KB KC KD KE KF KG KH KI KJ KK KL", "KM KN KO KP KQ KR KS KT KU KV KW KX KY KZ LA LB LC", "LD LE LF LG LH LI LJ LK LL LM LN LO LP LQ LR LS LT", "LU LV LW LX LY LZ MA MB MC MD ME MF MG MH MI MJ MK", "ML MM MN MO MP MQ MR MS MT MU MV MW MX MY MZ NA NB", "NC ND NE NF NG NH NI NJ NK NL NM NN NO NP NQ NR NS", "NT NU NV NW NX NY NZ OA OB OC OD OE OF OG OH OI OJ", "OK OL OM ON OO OP OQ OR OS OT OU OV OW OX OY OZ PA", "PB PC PD PE PF PG PH PI PJ PK PL PM PN PO PP PQ PR", "PS PT PU PV PW PX PY PZ QA QB QC QD QE QF QG QH QI", "QJ QK QL QM QN QO QP QQ QR QS QT QU QV QW QX QY QZ", "RA RB RC RD RE RF RG RH RI RJ RK RL RM RN RO RP RQ", "RR RS RT RU RV RW RX RY RZ SA SB SC SD SE SF SG SH", "SI SJ SK SL SM SN SO SP SQ SR SS ST SU SV SW SX SY", "SZ TA TB TC TD TE TF TG TH TI TJ TK TL TM TN TO TP", "TQ TR TS TT TU TV TW TX TY TZ UA UB UC UD UE UF UG", "UH UI UJ UK UL UM UN UO UP UQ UR US UT UU UV UW UX", "UY UZ VA VB VC VD VE VF VG VH VI VJ VK VL VM VN VO", "VP VQ VR VS VT VU VV VW VX VY VZ WA WB WC WD WE WF", "WG WH WI WJ WK WL WM WN WO WP WQ WR WS WT WU WV WW", "WX WY WZ XA XB XC XD XE XF XG XH XI XJ XK XL XM XN", "XO XP XQ XR XS XT XU XV XW XX XY XZ YA YB YC YD YE", "YF YG YH YI YJ YK YL YM YN YO YP YQ YR YS YT YU YV", "YW YX YY YZ ZA ZB ZC ZD ZE ZF ZG ZH ZI ZJ ZK ZL ZM", "ZN ZO ZP ZQ ZR ZS ZT ZU ZV ZW ZX ZY ZZ AA AB AC AD", "AE AF AG AH AI AJ AK AL AM AN AO AP AQ AR AS AT AU", "AV AW AX AY AZ BA BB BC BD BE BF BG BH BI BJ BK BL", "BM BN BO BP BQ BR BS BT BU BV BW BX BY BZ CA CB CC", "CD CE CF CG CH CI CJ CK CL CM CN CO CP CQ CR CS CT", "CU CV CW CX CY CZ DA DB DC DD DE DF DG DH DI DJ DK", "DL DM DN DO DP DQ DR DS DT DU DV DW DX DY DZ EA EB", "EC ED EE EF EG EH EI EJ EK EL EM EN EO EP EQ ER ES", "ET EU EV EW EX EY EZ FA FB FC FD FE FF FG FH FI FJ", "FK FL FM FN FO FP FQ FR FS FT FU FV FW FX FY FZ GA", "GB GC GD GE GF GG GH GI GJ GK GL GM GN GO GP GQ GR"};
    string website = "AA";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 337;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> votes = {"NO KC BE PA ZA WB YK PT IS VS QZ FH EP NL AF KB KX", "WN OD PI BL ZC FA YM UG CV SU ES RN FC DB HA YE RI", "IF AM WZ HW JX QC MC IQ FZ GL ZF FP CZ EX LU VT BC", "OL BZ ED UD NK UU DK DL OC EF HH MV TW WY KH YW JM", "LE YT EM WR MR QE WG NZ HK VF VN EA IF NO QL UX WN", "UX IP GC JT PE UN XD BB IE KI RS QU YL ZV EL XC IB", "EG LE AL CR VO SA AR LH GI NM VM MK NX AC VV KV XE", "JZ", "KK", "QL SB YC SD WP BG TK TS SZ KF YG VA LA UH DD QH KN", "WC", "NM IC GF GA GW IN DA DH FF YH NS PH WF KQ XY PY YY", "NZ RA YQ IM WQ MO YF MY NF PW TX VI CF GM YR JN SO", "HT ZU YN WU JJ HP HS RD ST PC NW RZ YB BF TO CL ET", "EM AU CC TF KA KZ OR NT JO ZQ XL HV PV RC OY AK YS", "VV GS RJ IG EI RW TR BV NJ EH FS WJ NC XH VU ML MA", "XE AN HB FG MB LV JF JY PP CE IU XA MF TD DY EN CQ", "HK JW DS CB UI GG UP LI GV VG UO UE HL SP WL DJ CM", "QE XN AE TY TQ US RF DI VR EE IW LY TB GP OQ JP WI", "VN LL RU ZS ZM HY QY II FQ FM CU OP SE LT KL LM IY", "PQ", "GI VW JK XZ XQ RP GZ SL PL TA XW JC JG FR IZ GQ KG", "PG ZJ XS LW CX EU HE LC KY PU ZN FN NR RH HC VQ OO", "VO OV AZ SR HO YJ DE QS UW NU JV LB AX VZ XP AT EW", "YT GR QW AY AP TT WO ZG OH UV CN LN TV DU LR FJ RL", "WG SC XF AV OI JS QI FO ON CH BU CD QN SG MJ PJ UK", "WR SN OF WW BM TL PZ RY PO DM DX GN QT LK KW ZL CA", "EK VC DP WA IK ZY MH PK KR KJ DW VX JH XG CK XU GK", "KV BJ TN CG NP XR DN VE MS SF VY FE MD YX XT OU DR", "VF TH QG HJ WK MN XX WD TP YA BQ BN OM ZH YV HX OB", "CR GH BR PB HU BX EB FT MG OX OZ FL PS SS NQ AI BH", "ZW", "NX EY EZ RX RR LD UF BA RT KT JL SK PN BT NV MP PD", "EA YZ FI FY ZK CT ID KO KD LZ QM MT YI NH HD NA JR", "MQ", "PX PM VD VK WH AD ZX RE AO UZ UJ DT LJ NE WX IR QK", "MK KS KM ZO RV FU QQ UL IA CS DG ZP AG TG AJ CI GT", "VM BD BI TE JQ BK MI VH HN OS UA JB NI SI IJ MX ER", "LH TJ UY CW MZ VP ZI SM XO QD LX LP EV PR TC HF BY", "AC LS DF GE HQ DZ WV CY XI TI LF IH IL UC ZR ZB SJ", "YP SV EO RK QR OK QP SH DV AB WE GO OA RQ ND JA BP", "MR IX ZZ AS OT HM NN ZT XM HR DC LO FK MM UT HG OW", "CO", "AL EK YP PX HT KU CO ZW PQ WC JZ GU EC AA MQ KK WT", "GU", "SA EQ FB MU RG JE KE RM XB GB VJ YU QV RB GX UQ XV", "EC", "AA", "AR ZE NB SY PF SX YO EJ DO BW CJ TM HI CP SQ QX WS", "KU HZ WM NY RO XJ JU VB QF IT AH KP LQ"};
    string website = "EG";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 605;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> votes = {"A HC TD MZ HE IF CV SF KE IE HJ BG CH YW OS AK GW", "B CX PX OA WF VQ TW TK YH MD CA XC KF HA G MH FY", "C EW KU SL FC KI LU UF XX IS SS HR CW SX DG PO VR", "D PZ QS ZW HT BZ QO GM GF MU TT UT SH UQ XG OZ HK", "E BL NZ KE GB FG AV VN PY LA ER ES NM YB SP PU FN", "F PS Q TM O TH TG KK MJ XO TK SM BK FR QP WR UL DW", "G RT QW RY ZQ DL FW ST MG NN BB VK RM CS CU AD KA", "H FX QE NT FD NF XV LR XK YR MY JD OC BS AL AN LH", "I IZ AC CF E OX JN KE NH XD WX DN HQ ZI CE GN VR", "J ND CU GA UJ VR KN PJ JR FY IL LH AT F YB UF VK", "K MM OX EE DL RV OV EG AI KH RO ZK JI OJ RA SG ZM", "L YW YK NO MS NJ YJ HU BC ZS JR YF IX AK DV WZ HN", "M NF GJ EN JR XL TV NS ME CZ SC IX CL DM ON RP PI", "N QL PO RN NW YW RR UM ZL LK ZI DN YH OQ L UK KI", "O MK BC RY WH PO RS DP SV UU BN ZK AK OR JC AY LT", "P OM PY LX OF MX GK PR KX RF ZK LF TB AR FC FJ QA", "Q UU OP FO DK DA MD UI OM TT ZE CP HE DC V XW ET", "R OW VR JJ YD YU PQ DV HA RC KK ZQ HF VA OH BD MX", "S OS LR FE EM MK CB NA HR HO OV SF CJ BG FN EO UV", "T XC LR FP NM PC DX IP BG RF VG XJ MK OX QX YX GB", "U TE JD GX QZ ZU PF QQ IV IT DF TI MN EU AK QR IQ", "V VW ZM KW DG DH WZ LK LM WO DZ JV QS FR XH JC JP", "W ZZ OS BQ AK NA OP LH BV PF UW U GM NB XP QJ IN", "X I VO AM IH KV OB FB IQ OK XH WC N NS TZ RB NO IR", "Y RV W KX BY ZM MV GI XZ JF PY VL JK LG LJ LD VU", "Z IY FD D XV XT GF BN XI MQ XR KQ RW YS NF PX OE", "AA IA QK RO NH YS UJ BQ QO JZ RP KG KZ XR RT LB IR", "AB GN HJ VG KR UK DP SL VH SI SB SO DC XL PP MX AH", "AC DB U QA HZ IO NH MD UT EU SS EI SM LG EK MS KI", "AD BU ZJ JX TN OF KH XT FR MZ MS PL EO LC IT HV RC", "AE NQ VW TS CN QS RW KJ G GC CF MV CQ QL CJ JF AX", "AF FC TP YJ SH LJ CM ME XT JJ OF TV KZ RJ FD DK NT", "AG FD GH RM PS JA TW HJ QH QP II Y PT IW MX ME WX", "AH LT VO FZ XN IQ NY AJ OR WF SV BA GP TQ QO CE ZI", "AI RI FN BR HA UZ NE OF UI TM PJ RE QV CD CX VB FJ", "AJ JQ KH HN WO OF JK FW ZY GI XF NH LM AD XT I SI", "AK FR HX OE TO EM NY NZ FC MS EF XT WN ZZ BZ XR P", "AL HI YX ZL TR YL OU LS KL AD EZ FH FX JC MD ML SZ", "AM FZ VN EA NG TV KH JT PA KZ AU VY TG CR RX LN NJ", "AN UU AD VV IM WC ZX LX LG UG BG ZL TN LQ WB YW HS", "AO AM SU PF CF UV EQ MX G GU NW DN YB ZN GC VC NT", "AP AY Y CX FJ RY WH GT VT LS YM GO UD YR PZ ZO YA", "AQ GJ TU OK IO LJ SD QE AO RC KZ ES BR HW GS EB MH", "AR DS JM SB UF DD CH ET RH HN BR EJ OO CC TA XB LC", "AS SR ZJ QB VQ DD QT HN NR GU ZM PV QW TI CZ WP NV", "AT BI VW JQ W V VX FZ LZ WK WN DN FA RD PA CL MY", "AU IS EL FV CN MJ KX KD XJ BJ TG LX FF OO PE SG JF", "AV MJ EL LE VP HT TN ZG DN IE MG ON PX MF KC ZT EE", "AW TG AY EE QN MN NN XT WL WO VP VA DU YT QR V ZD", "AX GQ IY EV QM KU GA VU YN ZZ AB RZ JM FI AZ OQ MX"};
    string website = "AB";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 193;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> votes = {"A B C D E F G H I J K L N M O P Q R S T U V W X Y", "B C D E F G H I J K L N M O P Q R S T U V W X Y Z", "C D E F G H I J K L N M O P Q R S T U V W X Y Z AA", "D E F G H I J K L N M O P Q R S T U V W X Y Z AA", "E F G H I J K L N M O P Q R S T U V W X Y Z AA BB", "F G H I J K L N M O P Q R S T U V W X Y Z AA BB CC", "G H I J K L N M O P Q R S T U V W X Y Z AA BB CC", "H I J K L N M O P Q R S T U V W X Y Z AA BB CC DD", "I J K L N M O P Q R S T U V W X Y Z AA BB CC DD EE", "J K L N M O P Q R S T U V W X Y Z AA BB CC DD EE", "K L N M O P Q R S T U V W X Y Z AA BB CC DD EE FF", "L N M O P Q R S T U V W X Y Z AA BB CC DD EE FF GG", "N M O P Q R S T U V W X Y Z AA BB CC DD EE FF GG", "M O P Q R S T U V W X Y Z AA BB CC DD EE FF GG HH", "O P Q R S T U V W X Y Z AA BB CC DD EE FF GG HH II", "P Q R S T U V W X Y Z AA BB CC DD EE FF GG HH II", "Q R S T U V W X Y Z AA BB CC DD EE FF GG HH II JJ", "R S T U V W X Y Z AA BB CC DD EE FF GG HH II JJ KK", "S T U V W X Y Z AA BB CC DD EE FF GG HH II JJ KK", "T U V W X Y Z AA BB CC DD EE FF GG HH II JJ KK LL", "U V W X Y Z AA BB CC DD EE FF GG HH II JJ KK LL MM", "V W X Y Z AA BB CC DD EE FF GG HH II JJ KK LL MM", "W X Y Z AA BB CC DD EE FF GG HH II JJ KK LL MM NN", "X Y Z AA BB CC DD EE FF GG HH II JJ KK LL MM NN OO", "Y Z AA BB CC DD EE FF GG HH II JJ KK LL MM NN OO", "Z AA BB CC DD EE FF GG HH II JJ KK LL MM NN OO PP", "AA BB CC DD EE FF GG HH II JJ KK LL MM NN OO PP QQ", "BB CC DD EE FF GG HH II JJ KK LL MM NN OO PP QQ RR", "CC DD EE FF GG HH II JJ KK LL MM NN OO PP QQ RR SS", "DD EE FF GG HH II JJ KK LL MM NN OO PP QQ RR SS TT", "EE FF GG HH II JJ KK LL MM NN OO PP QQ RR SS TT UU", "FF GG HH II JJ KK LL MM NN OO PP QQ RR SS TT UU VV", "GG HH II JJ KK LL MM NN OO PP QQ RR SS TT UU VV WW"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 68729002277;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> votes = {"AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP AQ", "AR AS AT AU AV AW AX AY AZ AAA AAB AAC AAD AAE AAF", "BA BB BC BD BE BF BG BH BI BJ BK BL BM BN BO BP BQ", "BR BS BT BU BV BW BX BY BZ BAA BAB BAC BAD BAE BAF", "CA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP CQ", "CR CS CT CU CV CW CX CY CZ CAA CAB CAC CAD CAE CAF", "DA DB DC DD DE DF DG DH DI DJ DK DL DM DN DO DP DQ", "DR DS DT DU DV DW DX DY DZ DAA DAB DAC DAD DAE DAF", "EA EB EC ED EE EF EG EH EI EJ EK EL EM EN EO EP EQ", "ER ES ET EU EV EW EX EY EZ EAA EAB EAC EAD EAE EAF", "FA FB FC FD FE FF FG FH FI FJ FK FL FM FN FO FP FQ", "FR FS FT FU FV FW FX FY FZ FAA FAB FAC FAD FAE FAF", "GA GB GC GD GE GF GG GH GI GJ GK GL GM GN GO GP GQ", "GR GS GT GU GV GW GX GY GZ GAA GAB GAC GAD GAE GAF", "HA HB HC HD HE HF HG HH HI HJ HK HL HM HN HO HP HQ", "HR HS HT HU HV HW HX HY HZ HAA HAB HAC HAD HAE HAF", "IA IB IC ID IE IF IG IH II IJ IK IL IM IN IO IP IQ", "IR IS IT IU IV IW IX IY IZ IAA IAB IAC IAD IAE IAF", "JA JB JC JD JE JF JG JH JI JJ JK JL JM JN JO JP JQ", "JR JS JT JU JV JW JX JY JZ JAA JAB JAC JAD JAE JAF", "KA KB KC KD KE KF KG KH KI KJ KK KL KM KN KO KP KQ", "KR KS KT KU KV KW KX KY KZ KAA KAB KAC KAD KAE KAF", "LA LB LC LD LE LF LG LH LI LJ LK LL LM LN LO LP LQ", "LR LS LT LU LV LW LX LY LZ LAA LAB LAC LAD LAE LAF", "MA MB MC MD ME MF MG MH MI MJ MK ML MM MN MO MP MQ", "MR MS MT MU MV MW MX MY MZ MAA MAB MAC MAD MAE MAF", "NA NB NC ND NE NF NG NH NI NJ NK NL NM NN NO NP NQ", "NR NS NT NU NV NW NX NY NZ NAA NAB NAC NAD NAE NAF", "OA OB OC OD OE OF OG OH OI OJ OK OL OM ON OO OP OQ", "OR OS OT OU OV OW OX OY OZ OAA OAB OAC OAD OAE OAF", "PA PB PC PD PE PF PG PH PI PJ PK PL PM PN PO PP PQ", "PR PS PT PU PV PW PX PY PZ PAA PAB PAC PAD PAE PAF", "QA QB QC QD QE QF QG QH QI QJ QK QL QM QN QO QP QQ", "QR QS QT QU QV QW QX QY QZ QAA QAB QAC QAD QAE QAF", "RA RB RC RD RE RF RG RH RI RJ RK RL RM RN RO RP RQ", "RR RS RT RU RV RW RX RY RZ RAA RAB RAC RAD RAE RAF", "SA SB SC SD SE SF SG SH SI SJ SK SL SM SN SO SP SQ", "SR SS ST SU SV SW SX SY SZ SAA SAB SAC SAD SAE SAF", "TA TB TC TD TE TF TG TH TI TJ TK TL TM TN TO TP TQ", "TR TS TT TU TV TW TX TY TZ TAA TAB TAC TAD TAE TAF", "UA UB UC UD UE UF UG UH UI UJ UK UL UM UN UO UP UQ", "UR US UT UU UV UW UX UY UZ UAA UAB UAC UAD UAE UAF", "VA VB VC VD VE VF VG VH VI VJ VK VL VM VN VO VP VQ", "VR VS VT VU VV VW VX VY VZ VAA VAB VAC VAD VAE VAF", "WA WB WC WD WE WF WG WH WI WJ WK WL WM WN WO WP WQ", "WR WS WT WU WV WW WX WY WZ WAA WAB WAC WAD WAE WAF", "XA XB XC XD XE XF XG XH XI XJ XK XL XM XN XO XP XQ", "XR XS XT XU XV XW XX XY XZ XAA XAB XAC XAD XAE XAF", "YA YB YC YD YE YF YG YH YI YJ YK YL YM YN YO YP YQ", "YR YS YT YU YV YW YX YY YZ YAA YAB YAC YAD YAE YAF"};
    string website = "QA";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> votes = {"A", "B N S U", "C N", "D I M T", "E B", "F Q T", "G F O U X Z", "H", "I J L Q", "J N R U", "K J M S V Y", "L B D P R", "M J K", "N I W Z", "O N", "P S W", "Q F", "R L N", "S A Y", "T A C G", "U Y", "V", "W I M", "X T", "Y E", "Z J V"};
    string website = "Z";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U W V X Y", "Z AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP", "AQ AR AS AT AU AV AW AX AY AZ BA BB BC BD BE BF BG", "CA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP CQ", "DA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP CQ", "EA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP CQ", "FA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP CQ", "GA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP CQ", "HA CB FC GD GE CF CG CH CI CJ CK CL CM CN CO CP CQ", "IA CB CC HD HE CF CG CH CI CJ CK CL CM CN CO CP CQ", "JA CB CC ID IE CF CG CH CI CJ CK CL CM CN CO CP CQ", "KA CB CC JD JE CF CG CH CI CJ CK CL CM CN CO CP CQ", "LA CB CC KD KE CF CG CH CI CJ CK CL CM CN CO CP CQ", "MA CB CC LD LE CF CG CH CI CJ CK CL CM CN CO CP CQ", "NA CB CC MD ME CF CG CH CI CJ CK CL CM CN CO CP CQ", "OA CB CC ND NE CF CG CH CI CJ CK CL CM CN CO CP CQ", "PA CB CC OD OE CF CG CH CI CJ CK CL CM CN CO CP CQ", "QA CB CC PD PE CF CG CH CI CJ CK CL CM CN CO CP CQ", "RA CB CC QD QE CF CG CH CI CJ CK CL CM CN CO CP CQ", "SA CB CC RD RE CF CG CH CI CJ CK CL CM CN CO CP CQ", "TA CB CC SD SE CF CG CH CI CJ CK CL CM CN CO CP CQ", "UA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP CQ", "WA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP CQ", "VA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP CQ", "XA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP CQ", "YA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP CQ", "ZA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP CQ"};
    string website = "ZA";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> votes = {"AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP AQ", "AB AR AS AT AU AV AW AX AY AZ BA BB BC BD BE BF BG", "AC BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW", "AD BX BY BZ CA CB CC CD CE CF CG CH CI CJ CK CL CM", "AE CN CO CP CQ CR CS CT CU CV CW CX CY CZ DA DB DC", "AF DD DE DF DG DH DI DJ DK DL DM DN DO DP DQ DR DS", "AG DT DU DV DW DX DY DZ EA EB EC ED EE EF EG EH EI", "AH EJ EK EL EM EN EO EP EQ ER ES ET EU EV EW EX EY", "AI EZ FA FB FC FD FE FF FG FH FI FJ FK FL FM FN FO", "AJ FP FQ FR FS FT FU FV FW FX FY FZ GA GB GC GD GE", "AK GF GG GH GI GJ GK GL GM GN GO GP GQ GR GS GT GU"};
    string website = "AA";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 177;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> votes = {"AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP AQ", "AR AS AT AU AV AW AX AY AZ BA BB BC BD BE BF BG BH", "BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW BX BY", "BZ CA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP", "CQ CR CS CT CU CV CW CX CY CZ DA DB DC DD DE DF DG", "DH DI DJ DK DL DM DN DO DP DQ DR DS DT DU DV DW DX", "DY DZ EA EB EC ED EE EF EG EH EI EJ EK EL EM EN EO", "EP EQ ER ES ET EU EV EW EX EY EZ FA FB FC FD FE FF", "FG FH FI FJ FK FL FM FN FO FP FQ FR FS FT FU FV FW", "FX FY FZ GA GB GC GD GE GF GG GH GI GJ GK GL GM GN", "GO GP GQ GR GS GT GU GV GW GX GY GZ HA HB HC HD HE", "HF HG HH HI HJ HK HL HM HN HO HP HQ HR HS HT HU HV", "HW HX HY HZ IA IB IC ID IE IF IG IH II IJ IK IL IM", "IN IO IP IQ IR IS IT IU IV IW IX IY IZ JA JB JC JD", "JE JF JG JH JI JJ JK JL JM JN JO JP JQ JR JS JT JU", "JV JW JX JY JZ KA KB KC KD KE KF KG KH KI KJ KK KL", "KM KN KO KP KQ KR KS KT KU KV KW KX KY KZ LA LB LC", "LD LE LF LG LH LI LJ LK LL LM LN LO LP LQ LR LS LT", "LU LV LW LX LY LZ MA MB MC MD ME MF MG MH MI MJ MK", "ML MM MN MO MP MQ MR MS MT MU MV MW MX MY MZ NA NB", "NC ND NE NF NG NH NI NJ NK NL NM NN NO NP NQ NR NS", "NT NU NV NW NX NY NZ OA OB OC OD OE OF OG OH OI OJ", "OK OL OM ON OO OP OQ OR OS OT OU OV OW OX OY OZ PA", "PB PC PD PE PF PG PH PI PJ PK PL PM PN PO PP PQ PR", "PS PT PU PV PW PX PY PZ QA QB QC QD QE QF QG QH QI", "QJ QK QL QM QN QO QP QQ QR QS QT QU QV QW QX QY QZ", "RA RB RC RD RE RF RG RH RI RJ RK RL RM RN RO RP RQ", "RR RS RT RU RV RW RX RY RZ SA SB SC SD SE SF SG SH", "SI SJ SK SL SM SN SO SP SQ SR SS ST SU SV SW SX SY", "SZ TA TB TC TD TE TF TG TH TI TJ TK TL TM TN TO TP", "TQ TR TS TT TU TV TW TX TY TZ UA UB UC UD UE UF UG", "UH UI UJ UK UL UM UN UO UP UQ UR US UT UU UV UW UX", "UY UZ VA VB VC VD VE VF VG VH VI VJ VK VL VM VN VO", "VP VQ VR VS VT VU VV VW VX VY VZ WA WB WC WD WE WF", "WG WH WI WJ WK WL WM WN WO WP WQ WR WS WT WU WV WW", "WX WY WZ XA XB XC XD XE XF XG XH XI XJ XK XL XM XN", "XO XP XQ XR XS XT XU XV XW XX XY XZ YA YB YC YD YE", "YF YG YH YI YJ YK YL YM YN YO YP YQ YR YS YT YU YV", "YW YX YY YZ ZA ZB ZC ZD ZE ZF ZG ZH ZI ZJ ZK ZL ZM", "ZN ZO ZP ZQ ZR ZS ZT ZU ZV ZW ZX ZY ZZ BAA BAB BAC", "BAD BAE BAF BAG BAH BAI BAJ BAK BAL BAM BAN BAO", "BAP BAQ BAR BAS BAT BAU BAV BAW BAX BAY BAZ BBA", "BBB BBC BBD BBE BBF BBG BBH BBI BBJ BBK BBL BBM", "BBN BBO BBP BBQ BBR BBS BBT BBU BBV BBW BBX BBY", "BBZ BCA BCB BCC BCD BCE BCF BCG BCH BCI BCJ BCK", "BCL BCM BCN BCO BCP BCQ BCR BCS BCT BCU BCV BCW", "BCX BCY BCZ BDA BDB BDC BDD BDE BDF BDG BDH BDI", "BDJ BDK BDL BDM BDN BDO BDP BDQ BDR BDS BDT BDU", "BDV BDW BDX BDY BDZ BEA BEB BEC BED BEE BEF BEG", "BEH BEI BEJ BEK BEL BEM BEN BEO BEP BEQ BER BES"};
    string website = "BEH";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "Z AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP", "AQ AR AS AT AU AV AW AX AY AZ BA BB BC BD BE BF BG", "BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW BX", "BY BZ CA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO", "CP CQ CR CS CT CU CV CW CX CY CZ DA DB DC DD DE DF", "DG DH DI DJ DK DL DM DN DO DP DQ DR DS DT DU DV DW", "DX DY DZ EA EB EC ED EE EF EG EH EI EJ EK EL EM EN", "EO EP EQ ER ES ET EU EV EW EX EY EZ FA FB FC FD FE", "FF FG FH FI FJ FK FL FM FN FO FP FQ FR FS FT FU FV", "FW FX FY FZ GA GB GC GD GE GF GG GH GI GJ GK GL GM", "GN GO GP GQ GR GS GT GU GV GW GX GY GZ HA HB HC HD", "HE HF HG HH HI HJ HK HL HM HN HO HP HQ HR HS HT HU", "HV HW HX HY HZ IA IB IC ID IE IF IG IH II IJ IK IL", "IM IN IO IP IQ IR IS IT IU IV IW IX IY IZ JA JB JC", "JD JE JF JG JH JI JJ JK JL JM JN JO JP JQ JR JS JT", "JU JV JW JX JY JZ KA KB KC KD KE KF KG KH KI KJ KK", "KL KM KN KO KP KQ KR KS KT KU KV KW KX KY KZ LA LB", "LC LD LE LF LG LH LI LJ LK LL LM LN LO LP LQ LR LS", "LT LU LV LW LX LY LZ MA MB MC MD ME MF MG MH MI MJ", "MK ML MM MN MO MP MQ MR MS MT MU MV MW MX MY MZ NA", "NB NC ND NE NF NG NH NI NJ NK NL NM NN NO NP NQ NR", "NS NT NU NV NW NX NY NZ OA OB OC OD OE OF OG OH OI", "OJ OK OL OM ON OO OP OQ OR OS OT OU OV OW OX OY OZ", "PA PB PC PD PE PF PG PH PI PJ PK PL PM PN PO PP PQ", "PR PS PT PU PV PW PX PY PZ QA QB QC QD QE QF QG QH", "QI QJ QK QL QM QN QO QP QQ QR QS QT QU QV QW QX QY", "QZ RA RB RC RD RE RF RG RH RI RJ RK RL RM RN RO RP", "RQ RR RS RT RU RV RW RX RY RZ SA SB SC SD SE SF SG", "SH SI SJ SK SL SM SN SO SP SQ SR SS ST SU SV SW SX", "SY SZ TA TB TC TD TE TF TG TH TI TJ TK TL TM TN TO", "TP TQ TR TS TT TU TV TW TX TY TZ UA UB UC UD UE UF", "UG UH UI UJ UK UL UM UN UO UP UQ UR US UT UU UV UW", "UX UY UZ VA VB VC VD VE VF VG VH VI VJ VK VL VM VN", "VO VP VQ VR VS VT VU VV VW VX VY VZ WA WB WC WD WE", "WF WG WH WI WJ WK WL WM WN WO WP WQ WR WS WT WU WV", "WW WX WY WZ XA XB XC XD XE XF XG XH XI XJ XK XL XM", "XN XO XP XQ XR XS XT XU XV XW XX XY XZ YA YB YC YD", "YE YF YG YH YI YJ YK YL YM YN YO YP YQ YR YS YT YU", "YV YW YX YY YZ ZA ZB ZC ZD ZE ZF ZG ZH ZI ZJ ZK ZL", "ZM ZN ZO ZP ZQ ZR ZS ZT ZU ZV ZW ZX ZY ZZ AAA AAB", "AAC AAD AAE AAF AAG AAH AAI AAJ AAK AAL AAM AAN", "AAO AAP AAQ AAR AAS AAT AAU AAV AAW AAX AAY AAZ", "ABA ABB ABC ABD ABE ABF ABG ABX ABI ABJ ABK ABL", "BBA BBB BBC BBD BBE BBF BBG BBX BBI BBJ BBK BBL", "CBA CBB CBC CBD CBE CBF CBG CBX CBI CBJ CBK CBL", "DBA DBB DBC DBD DBE DBF DBG DBX DBI DBJ DBK DBL", "EBA EBB EBC EBD EBE EBF EBG EBX EBI EBJ EBK EBL", "FBA FBB FBC FBD FBE FBF FBG FBX FBI FBJ FBK FBL", "GBA GBB GBC GBD GBE GBF GBG GBX GBI GBJ GBK GBL"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "B BA BB BC BD BE BF BG BH BI BJ BK BL BM BN BO BP", "C BR BS BT BU BV BW BX BY BZ CA CB CC CD CE CF CG", "D CI CJ CK CL CM CN CO CP CQ CR CS CT CU CV CW CX", "E CZ DA DB DC DD DE DF DG DH DI DJ DK DL DM DN DO", "F DQ DR DS DT DU DV DW DX DY DZ EA EB EC ED EE EF", "G EH EI EJ EK EL EM EN EO EP EQ ER ES ET EU EV EW", "H EY EZ FA FB FC FD FE FF FG FH FI FJ FK FL FM FN", "I FP FQ FR FS FT FU FV FW FX FY FZ GA GB GC GD GE", "J GG GH GI GJ GK GL GM GN GO GP GQ GR GS GT GU GV", "K GX GY GZ HA HB HC HD HE HF HG HH HI HJ HK HL HM", "L HO HP HQ HR HS HT HU HV HW HX HY HZ IA IB IC ID", "M IF IG IH II IJ IK IL IM IN IO IP IQ IR IS IT IU", "N IW IX IY IZ JA JB JC JD JE JF JG JH JI JJ JK JL", "O JN JO JP JQ JR JS JT JU JV JW JX JY JZ KA KB KC", "P KE KF KG KH KI KJ KK KL KM KN KO KP KQ KR KS KT", "Q KV KW KX KY KZ LA LB LC LD LE LF LG LH LI LJ LK", "R LM LN LO LP LQ LR LS LT LU LV LW LX LY LZ MA MB", "S MD ME MF MG MH MI MJ MK ML MM MN MO MP MQ MR MS", "T MU MV MW MX MY MZ NA NB NC ND NE NF NG NH NI NJ", "U NL NM NN NO NP NQ NR NS NT NU NV NW NX NY NZ OA", "V OC OD OE OF OG OH OI OJ OK OL OM ON OO OP OQ OR", "W OT OU OV OW OX OY OZ PA PB PC PD PE PF PG PH PI", "X PK PL PM PN PO PP PQ PR PS PT PU PV PW PX PY PZ", "Y QB QC QD QE QF QG QH QI QJ QK QL QM QN QO QP QQ", "Z QS QT QU QV QW QX QY QZ RA RB RC RD RE RF RG RH", "BA RJ RK RL RM RN RO RP RQ RR RS RT RU RV RW RX RY", "BB SA SB SC SD SE SF SG SH SI SJ SK SL SM SN SO SP", "BC SR SS ST SU SV SW SX SY SZ TA TB TC TD TE TF TG", "BD TI TJ TK TL TM TN TO TP TQ TR TS TT TU TV TW TX", "BE TZ UA UB UC UD UE UF UG UH UI UJ UK UL UM UN UO", "BF UQ UR US UT UU UV UW UX UY UZ VA VB VC VD VE VF", "BG VH VI VJ VK VL VM VN VO VP VQ VR VS VT VU VV VW", "BH VY VZ WA WB WC WD WE WF WG WH WI WJ WK WL WM WN", "BI WP WQ WR WS WT WU WV WW WX WY WZ XA XB XC XD XE", "BJ XG XH XI XJ XK XL XM XN XO XP XQ XR XS XT XU XV", "BK XX XY XZ YA YB YC YD YE YF YG YH YI YJ YK YL YM", "BL YO YP YQ YR YS YT YU YV YW YX YY YZ ZA ZB ZC ZD", "BM ZF ZG ZH ZI ZJ ZK ZL ZM ZN ZO ZP ZQ ZR ZS ZT ZU", "BN ZW ZX ZY ZZ BAA BAB BAC BAD BAE BAF BAG BAH BAI", "BO BAK BAL BAM BAN BAO BAP BAQ BAR BAS BAT BAU BAV", "BP BAX BAY BAZ BBA BBB BBC BBD BBE BBF BBG BBH BBI", "BQ BBK BBL BBM BBN BBO BBP BBQ BBR BBS BBT BBU BBV", "BR BBX BBY BBZ BCA BCB BCC BCD BCE BCF BCG BCH BCI", "BS BCK BCL BCM BCN BCO BCP BCQ BCR BCS BCT BCU BCV", "BT BCX BCY BCZ BDA BDB BDC BDD BDE BDF BDG BDH BDI", "BU BDK BDL BDM BDN BDO BDP BDQ BDR BDS BDT BDU BDV", "BV BDX BDY BDZ BEA BEB BEC BED BEE BEF BEG BEH BEI", "BW BEK BEL BEM BEN BEO BEP BEQ BER BES BET BEU BEV", "BX BEX BEY BEZ BFA BFB BFC BFD BFE BFF BFG BFH BFI"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 738;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> votes = {"ZK KX AZC ABS ANJ MK NC EW XN AHN LI ABL AMT ARV", "KX AZL AWR ADF APP ATQ QU ACR JL AFC LD ANY H ADY", "AZC RE AKP AVZ OM AJX XK EZ AUE AN YU AFS EV AIO", "ABS AYO AWO RD APK AHI ZB SM ASC AJQ AOM GQ MI ADS", "ANJ JX GP VK APT GO AJD AS YQ LF AXL AQS KJ CR QA", "MK TK AOL NR AOY AHJ FH ABE IR KG AWE AON AHU AVG", "NC ABM UV AWJ ACT JM OL AXR GZ AHM AST QV ADQ RQ", "EW ATD TD PS DM YN AQQ QW KE Q TB WR PP MX PQ AEG", "XN FW HN ALK YZ VR ANN NH BG ANZ ZI MU AI KQ ANK", "AHN ASA ARK AVT MR UN DO TU AXP AEW AXW GF TN TY", "LI OY HY FK JH AUC ACU ADA TI MO HG UZ BR PJ ANB", "ABL AWT AOB AZU ZO ARH SJ AIF UC AEB AJ GA AGW AKT", "AMT WM AXN ND TW AKY HZ AZR AYG AGB I YL AIC JU", "ARV AOK AOC AQV WQ ARS AVH XD KY AYE TO ACO JQ APE", "AZL UQ JO AUD AHZ AJM LN ARI AFF PW PF BX RU AWL", "AWR AQN YW GN EB EA HU EJ YG WK WG FF ARQ ZN AFR", "ADF ATA IQ AOQ JN AZF MH PK WI AUR VI ATG CU GD", "APP ACL ASV AIN SO AB VQ AZA AXC LR AYY AIA AJK", "ATQ NE L DL SC QL RK AWH ALR ANM AEK AUJ YE LT ZH", "QU PV AHL VH NJ AWF FC ATU IG AGQ XL AFB AXD FR", "ACR F NP ABV ADM ARP APN AXO LW AFQ WD AX AKR AKL", "JL OG CC ATB XU MT AGE CG ATF PE ARW APQ SP ZX AZO", "AFC ARA TZ Y KA LU RM ABJ AER NQ ALZ BM OX LX AFK", "LD FD AXI HX EY GR QK AZD VB AEI VV AJL AWI AMM", "ANY ALH AOJ OH AMB AVM AKV AWP MC OC ARB AAX NB", "H AZI AEZ YT APH ZY AXJ ASL CQ DF ANT ZS NZ ADD", "ADY ABK ADX AYL ALS BY ABC AQU ANG WU NO MW AGO", "RE AUP WA YF TT AYA DC CN AZQ AQC XZ AOE GV GU FV", "AKP MG CT AZN AFA AIQ AFE AHT AAV ASY JF OW CO AAI", "AVZ AQL IT ER ABR TH LQ ATW AIV WF AAP DB AL ABG", "OM UE LK LG HH ABQ DH AAE EH AHW AYI AXU DX AQI", "AJX GG AET AZH AEL AIL BZ AAA AFJ AXF AZM AES LS", "XK AFZ UY QP KN ASW ASF ALW BK AYU KB JE QQ AEF", "EZ APL AQW EK UW YV AMF HF AOW ASM QH ALV QJ KF", "AUE AYB PG ACX ASH AME AGJ AA AMW AQX JV CW AWN", "AN ATE AEY JI KH AKZ CD ABW X BJ FQ RC XP AVF AUG", "YU AVX AUV AWQ JA MS RZ ACF KC PD AFH IZ AYP AKX", "AFS ALB WS ABH AFN ST DT AMJ XQ LY GY AFY AGT AEO", "EV TM AHP AAK SU J AZW AYK SQ IY UL AWB DS ADB AAZ", "AIO AAL AUQ WN AVU NM WO LL ATX UA QO ALO ADV AHR", "AYO AGY ASB AKI VX EC ART CL FE VO G APY AOD APC", "AWO UH IU ARR IJ AVJ ACE EL VA AJB AEQ ARG RP XF", "RD YS AW AT ZT ACH AAC AHY ML ASQ ACP ACW ACB ANE", "APK AQK HW ANR U AXG UU BO SN AVI AEV BC AK AIZ", "AHI WX UM AEA ABD AJT AJE BD QT ATR SA JK APM K", "ZB KM AVN DJ APV GM TG AUL ATO AMC TX AXM M ANA", "SM ARN ACK ALG ON APX JS AAT AMP AOF ALN AXV ACM", "ASC ARY CM V AGC EE ANV ADC NU FY AEP OS KR AXK", "AJQ AIW ARX AHE ADU XH KK VS AGH MM FA FX MZ AY", "AOM TA AMX EU AXE AIU OI AZP XB APW AWU SD AOU AVD"};
    string website = "AVD";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "Z AA BA CA DA EA FA GA HA IA JA KA LA MA NA OA PA", "QA RA SA TA UA VA WA XA YA ZA AB BB CB DB EB FB GB", "HB IB JB KB LB MB NB OB PB QB RB SB TB UB VB WB XB", "YB ZB AC BC CC DC EC FC GC HC IC JC KC LC MC NC OC", "PC QC RC SC TC UC VC WC XC YC ZC AD BD CD DD ED FD", "GD HD ID JD KD LD MD ND OD PD QD RD SD TD UD VD WD", "XD YD ZD AE BE CE DE EE FE GE HE IE JE KE LE ME NE", "OE PE QE RE SE TE UE VE WE XE YE ZE AF BF CF DF EF", "FF GF HF IF JF KF LF MF NF OF PF QF RF SF TF UF VF", "WF XF YF ZF AG BG CG DG EG FG GG HG IG JG KG LG MG", "NG OG PG QG RG SG TG UG VG WG XG YG ZG AH BH CH DH", "EH FH GH HH IH JH KH LH MH NH OH PH QH RH SH TH UH", "VH WH XH YH ZH AI BI CI DI EI FI GI HI II JI KI LI", "MI NI OI PI QI RI SI TI UI VI WI XI YI ZI AJ BJ CJ", "DJ EJ FJ GJ HJ IJ JJ KJ LJ MJ NJ OJ PJ QJ RJ SJ TJ", "UJ VJ WJ XJ YJ ZJ AK BK CK DK EK FK GK HK IK JK KK", "LK MK NK OK PK QK RK SK TK UK VK WK XK YK ZK AL BL", "CL DL EL FL GL HL IL JL KL LL ML NL OL PL QL RL SL", "TL UL VL WL XL YL ZL AM BM CM DM EM FM GM HM IM JM", "KM LM MM NM OM PM QM RM SM TM UM VM WM XM YM ZM AN", "BN CN DN EN FN GN HN IN JN KN LN MN NN ON PN QN RN", "SN TN UN VN WN XN YN ZN AO BO CO DO EO FO GO HO IO", "JO KO LO MO NO OO PO QO RO SO TO UO VO WO XO YO ZO", "AP BP CP DP EP FP GP HP IP JP KP LP MP NP OP PP QP", "RP SP TP UP VP WP XP YP ZP AQ BQ CQ DQ EQ FQ GQ HQ", "IQ JQ KQ LQ MQ NQ OQ PQ QQ RQ SQ TQ UQ VQ WQ XQ YQ", "ZQ AR BR CR DR ER FR GR HR IR JR KR LR MR NR OR PR", "QR RR SR TR UR VR WR XR YR ZR AS BS CS DS ES FS GS", "HS IS JS KS LS MS NS OS PS QS RS SS TS US VS WS XS", "YS ZS AT BT CT DT ET FT GT HT IT JT KT LT MT NT OT", "PT QT RT ST TT UT VT WT XT YT ZT AU BU CU DU EU FU", "GU HU IU JU KU LU MU NU OU PU QU RU SU TU UU VU WU", "XU YU ZU AV BV CV DV EV FV GV HV IV JV KV LV MV NV", "OV PV QV RV SV TV UV VV WV XV YV ZV AW BW CW DW EW", "FW GW HW IW JW KW LW MW NW OW PW QW RW SW TW UW VW", "WW XW YW ZW AX BX CX DX EX FX GX HX IX JX KX LX MX", "NX OX PX QX RX SX TX UX VX WX XX YX ZX AY BY CY DY", "EY FY GY HY IY JY KY LY MY NY OY PY QY RY SY TY UY", "VY WY XY YY ZY AZ BZ CZ DZ EZ FZ GZ HZ IZ JZ KZ LZ", "MZ NZ OZ PZ QZ RZ SZ TZ UZ VZ WZ XZ YZ ZZ AAA BAA", "CAA DAA EAA FAA GAA HAA IAA JAA KAA LAA MAA NAA", "OAA PAA QAA RAA SAA TAA UAA VAA WAA XAA YAA ZAA", "ABA BBA CBA DBA EBA FBA GBA HBA IBA JBA KBA LBA", "MBA NBA OBA PBA QBA RBA SBA TBA UBA VBA WBA XBA", "YBA ZBA ACA BCA CCA DCA ECA FCA GCA HCA ICA JCA", "KCA LCA MCA NCA OCA PCA QCA RCA SCA TCA UCA VCA", "WCA XCA YCA ZCA ADA BDA CDA DDA EDA FDA GDA HDA", "IDA JDA KDA LDA MDA NDA ODA PDA QDA RDA SDA TDA", "UDA VDA WDA XDA YDA ZDA AEA BEA CEA DEA EEA FEA"};
    string website = "IDA";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "B C D E F G H I J K L M N O P Q R S T U V W X Y", "C D E F G H I J K L M N O P Q R S T U V W X Y AA", "D E F G H I J K L M N O P Q R S T U V W X Y AA AB", "E F G H I J K L M N O P Q R S T U V W X Y AA AB", "F G H I J K L M N O P Q R S T U V W X Y AA AB AC", "G H I J K L M N O P Q R S T U V W X Y AA AB AC AD", "H I J K L M N O P Q R S T U V W X Y AA AB AC AD", "I J K L M N O P Q R S T U V W X Y AA AB AC AD AE", "J K L M N O P Q R S T U V W X Y AA AB AC AD AE", "K L M N O P Q R S T U V W X Y AA AB AC AD AE AF", "L M N O P Q R S T U V W X Y AA AB AC AD AE AF AG", "M N O P Q R S T U V W X Y AA AB AC AD AE AF AG", "N O P Q R S T U V W X Y AA AB AC AD AE AF AG AH", "O P Q R S T U V W X Y AA AB AC AD AE AF AG AH", "P Q R S T U V W X Y AA AB AC AD AE AF AG AH", "Q R S T U V W X Y AA AB AC AD AE AF AG AH", "R S T U V W X Y AA AB AC AD AE AF AG AH", "S T U V W X Y AA AB AC AD AE AF AG AH", "T U V W X Y AA AB AC AD AE AF AG AH", "U V W X Y AA AB AC AD AE AF AG AH", "V W X Y AA AB AC AD AE AF AG AH", "W X Y AA AB AC AD AE AF AG AH", "X Y AA AB AC AD AE AF AG AH", "Y AA AB AC AD AE AF AG AH", "AA AB AC AD AE AF AG AH", "AB AC AD AE AF AG AH", "AC AD AE AF AG AH", "AD AE AF AG AH", "AE AF AG AH", "AF AG AH", "AG AH"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 4294956544;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> votes = {"A D", "B A", "C B", "D C"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X", "B AB AC AD AE AF AG AH AI AJ Z AK AL AM AN AO AP", "C BC BD BE BF BG BH BJ BK BL BM BN BO BP BQ BR", "D CC CD CE CF CG CH CJ CK CL CM CN CO CP CQ CR", "E DC DD DE DF DG DH DJ DK DL DM DN DO DP DQ DR", "F EC ED EE EF EG EH EJ EK EL EM EN EO EP EQ ER", "G FC FD FE FF FG FH FJ FK FL FM FN FO FP FQ FR", "H GC GD GE GF GG GH GJ GK GL GM GN GO GP GQ GR", "I HC HD HE HF HG HH HJ HK HL HM HN HO HP HQ HR", "J IC ID IE IF IG IH IJ IK IL IM IN IO IP IQ IR", "K JC JD JE JF JG JH JJ JK JL JM JN JO JP JQ JR", "L KC KD KE KF KG KH KJ KK KL KM KN KO KP KQ KR", "M LC LD LE LF LG LH LJ LK LL LM LN LO LP LQ LR", "N MC MD ME MF MG MH MJ MK ML MM MN MO MP MQ MR", "O NC ND NE NF NG NH NJ NK NL NM NN NO NP NQ NR", "P PC PD PE PF PG PH PJ PK PL PM PN PO PP PQ PR", "Q OC OD OE OF OG OH OJ OK OL OM ON OO OP OQ OR", "R QC QD QE QF QG QH QJ QK QL QM QN QO QP QQ QR", "S RC RD RE RF RG RH RJ RK RL RM RN RO RP RQ RR", "T SC SD SE SF SG SH SJ SK SL SM SN SO SP SQ SR", "U TC TD TE TF TG TH TJ TK TL TM TN TO TP TQ TR", "V UC UD UE UF UG UH UJ UK UL UM UN UO UP UQ UR", "W VC VD VE VF VG VH VJ VK VL VM VN VO VP VQ VR", "X WC WD WE WF WG WH WJ WK WL WM WN WO WP WQ WR", "Y XC XD XE XF XG XH XJ XK XL XM XN XO XP XQ XR", "Z YC YD YE YF YG YH YJ YK YL YM YN YO YP YQ YR", "AP ZC ZD ZE ZF ZG ZH ZJ ZK ZL ZM ZN ZO ZP ZQ ZR"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 400;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> votes = {"AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP", "AQ AR AS AT AU AV AW AX AY AZ BA BB BC BD BE BF", "BG BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV", "BW BX BY BZ CA CB CC CD CE CF CG CH CI CJ CK CL", "CM CN CO CP CQ CR CS CT CU CV CW CX CY CZ DA DB", "DC DD DE DF DG DH DI DJ DK DL DM DN DO DP DQ DR", "DS DT DU DV DW DX DY DZ EA EB EC ED EE EF EG EH", "EI EJ EK EL EM EN EO EP EQ ER ES ET EU EV EW EX", "EY EZ FA FB FC FD FE FF FG FH FI FJ FK FL FM FN", "FO FP FQ FR FS FT FU FV FW FX FY FZ GA GB GC GD", "GE GF GG GH GI GJ GK GL GM GN GO GP GQ GR GS GT", "GU GV GW GX GY GZ HA HB HC HD HE HF HG HH HI HJ", "HK HL HM HN HO HP HQ HR HS HT HU HV HW HX HY HZ", "IA IB IC ID IE IF IG IH II IJ IK IL IM IN IO IP", "IQ IR IS IT IU IV IW IX IY IZ JA JB JC JD JE JF", "JG JH JI JJ JK JL JM JN JO JP JQ JR JS JT JU JV", "JW JX JY JZ KA KB KC KD KE KF KG KH KI KJ KK KL", "KM KN KO KP KQ KR KS KT KU KV KW KX KY KZ LA LB", "LC LD LE LF LG LH LI LJ LK LL LM LN LO LP LQ LR", "LS LT LU LV LW LX LY LZ MA MB MC MD ME MF MG MH", "MI MJ MK ML MM MN MO MP MQ MR MS MT MU MV MW MX", "MY MZ NA NB NC ND NE NF NG NH NI NJ NK NL NM NN", "NO NP NQ NR NS NT NU NV NW NX NY NZ OA OB OC OD", "OE OF OG OH OI OJ OK OL OM ON OO OP OQ OR OS OT", "OU OV OW OX OY OZ PA PB PC PD PE PF PG PH PI PJ", "PK PL PM PN PO PP PQ PR PS PT PU PV PW PX PY PZ", "QA QB QC QD QE QF QG QH QI QJ QK QL QM QN QO QP", "QQ QR QS QT QU QV QW QX QY QZ RA RB RC RD RE RF", "RG RH RI RJ RK RL RM RN RO RP RQ RR RS RT RU RV", "RW RX RY RZ SA SB SC SD SE SF SG SH SI SJ SK SL", "SM SN SO SP SQ SR SS ST SU SV SW SX SY SZ TA TB", "TC TD TE TF TG TH TI TJ TK TL TM TN TO TP TQ TR", "TS TT TU TV TW TX TY TZ UA UB UC UD UE UF UG UH", "UI UJ UK UL UM UN UO UP UQ UR US UT UU UV UW UX", "UY UZ VA VB VC VD VE VF VG VH VI VJ VK VL VM VN", "VO VP VQ VR VS VT VU VV VW VX VY VZ WA WB WC WD", "WE WF WG WH WI WJ WK WL WM WN WO WP WQ WR WS WT", "WU WV WW WX WY WZ XA XB XC XD XE XF XG XH XI XJ", "XK XL XM XN XO XP XQ XR XS XT XU XV XW XX XY XZ", "YA YB YC YD YE YF YG YH YI YJ YK YL YM YN YO YP", "YQ YR YS YT YU YV YW YX YY YZ ZA ZB ZC ZD ZE ZF", "ZG ZH ZI ZJ ZK ZL ZM ZN ZO ZP ZQ ZR ZS ZT ZU ZV", "ZW ZX ZY ZZ"};
    string website = "ZZ";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> votes = {"AX AW AV AU AT AS AR AQ AP AO AN AM AL AK AJ AI AH", "AW AV AU AT AS AR AQ AP AO AN AM AL AK AJ AI AH AG", "AV AU AT AS AR AQ AP AO AN AM AL AK AJ AI AH AG AF", "AU AT AS AR AQ AP AO AN AM AL AK AJ AI AH AG AF AE", "AT AS AR AQ AP AO AN AM AL AK AJ AI AH AG AF AE AD", "AS AR AQ AP AO AN AM AL AK AJ AI AH AG AF AE AD AC", "AR AQ AP AO AN AM AL AK AJ AI AH AG AF AE AD AC AB", "AQ AP AO AN AM AL AK AJ AI AH AG AF AE AD AC AB AA", "AP AO AN AM AL AK AJ AI AH AG AF AE AD AC AB AA Z", "AO AN AM AL AK AJ AI AH AG AF AE AD AC AB AA Z Y", "AN AM AL AK AJ AI AH AG AF AE AD AC AB AA Z Y X W", "AM AL AK AJ AI AH AG AF AE AD AC AB AA Z Y X W V", "AL AK AJ AI AH AG AF AE AD AC AB AA Z Y X W V U T", "AK AJ AI AH AG AF AE AD AC AB AA Z Y X W V U T S", "AJ AI AH AG AF AE AD AC AB AA Z Y X W V U T S R Q", "AI AH AG AF AE AD AC AB AA Z Y X W V U T S R Q P", "AH AG AF AE AD AC AB AA Z Y X W V U T S R Q P O N", "AG AF AE AD AC AB AA Z Y X W V U T S R Q P O N M", "AF AE AD AC AB AA Z Y X W V U T S R Q P O N M L K", "AE AD AC AB AA Z Y X W V U T S R Q P O N M L K J", "AD AC AB AA Z Y X W V U T S R Q P O N M L K J I H", "AC AB AA Z Y X W V U T S R Q P O N M L K J I H G", "AB AA Z Y X W V U T S R Q P O N M L K J I H G F E", "AA Z Y X W V U T S R Q P O N M L K J I H G F E D", "Z Y X W V U T S R Q P O N M L K J I H G F E D C B", "Y X W V U T S R Q P O N M L K J I H G F E D C B A", "X W V U T S R Q P O N M L K J I H G F E D C B A CV", "W V U T S R Q P O N M L K J I H G F E D C B A CV", "V U T S R Q P O N M L K J I H G F E D C B A CV CU", "U T S R Q P O N M L K J I H G F E D C B A CV CU CT", "T S R Q P O N M L K J I H G F E D C B A CV CU CT", "S R Q P O N M L K J I H G F E D C B A CV CU CT CS", "R Q P O N M L K J I H G F E D C B A CV CU CT CS CR", "Q P O N M L K J I H G F E D C B A CV CU CT CS CR", "P O N M L K J I H G F E D C B A CV CU CT CS CR CQ", "O N M L K J I H G F E D C B A CV CU CT CS CR CQ CP", "N M L K J I H G F E D C B A CV CU CT CS CR CQ CP", "M L K J I H G F E D C B A CV CU CT CS CR CQ CP CO", "L K J I H G F E D C B A CV CU CT CS CR CQ CP CO CN", "K J I H G F E D C B A CV CU CT CS CR CQ CP CO CN", "J I H G F E D C B A CV CU CT CS CR CQ CP CO CN CM", "I H G F E D C B A CV CU CT CS CR CQ CP CO CN CM CL", "H G F E D C B A CV CU CT CS CR CQ CP CO CN CM CL", "G F E D C B A CV CU CT CS CR CQ CP CO CN CM CL CK", "F E D C B A CV CU CT CS CR CQ CP CO CN CM CL CK CJ", "E D C B A CV CU CT CS CR CQ CP CO CN CM CL CK CJ", "D C B A CV CU CT CS CR CQ CP CO CN CM CL CK CJ CI", "C B A CV CU CT CS CR CQ CP CO CN CM CL CK CJ CI CH", "B A CV CU CT CS CR CQ CP CO CN CM CL CK CJ CI CH", "A CV CU CT CS CR CQ CP CO CN CM CL CK CJ CI CH CG"};
    string website = "AX";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 9167133879507071;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> votes = {"A B C D E", "B C E", "C D E", "D E"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> votes = {"A AY CW EU GS IQ KO MM OK QI SG UE WC YA ZY ABW", "B AZ CX EV GT IR KP MN OL QJ SH UF WD YB ZZ ABX", "C BA CY EW GU IS KQ MO OM QK SI UG WE YC AAA ABY", "D BB CZ EX GV IT KR MP ON QL SJ UH WF YD AAB ABZ", "E BC DA EY GW IU KS MQ OO QM SK UI WG YE AAC ACA", "F BD DB EZ GX IV KT MR OP QN SL UJ WH YF AAD ACB", "G BE DC FA GY IW KU MS OQ QO SM UK WI YG AAE ACC", "H BF DD FB GZ IX KV MT OR QP SN UL WJ YH AAF ACD", "I BG DE FC HA IY KW MU OS QQ SO UM WK YI AAG ACE", "J BH DF FD HB IZ KX MV OT QR SP UN WL YJ AAH ACF", "K BI DG FE HC JA KY MW OU QS SQ UO WM YK AAI ACG", "L BJ DH FF HD JB KZ MX OV QT SR UP WN YL AAJ ACH", "M BK DI FG HE JC LA MY OW QU SS UQ WO YM AAK ACI", "N BL DJ FH HF JD LB MZ OX QV ST UR WP YN AAL ACJ", "O BM DK FI HG JE LC NA OY QW SU US WQ YO AAM ACK", "P BN DL FJ HH JF LD NB OZ QX SV UT WR YP AAN ACL", "Q BO DM FK HI JG LE NC PA QY SW UU WS YQ AAO ACM", "R BP DN FL HJ JH LF ND PB QZ SX UV WT YR AAP ACN", "S BQ DO FM HK JI LG NE PC RA SY UW WU YS AAQ ACO", "T BR DP FN HL JJ LH NF PD RB SZ UX WV YT AAR ACP", "U BS DQ FO HM JK LI NG PE RC TA UY WW YU AAS ACQ", "V BT DR FP HN JL LJ NH PF RD TB UZ WX YV AAT ACR", "W BU DS FQ HO JM LK NI PG RE TC VA WY YW AAU ACS", "X BV DT FR HP JN LL NJ PH RF TD VB WZ YX AAV ACT", "Y BW DU FS HQ JO LM NK PI RG TE VC XA YY AAW ACU", "Z BX DV FT HR JP LN NL PJ RH TF VD XB YZ AAX ACV", "AA BY DW FU HS JQ LO NM PK RI TG VE XC ZA AAY ACW", "AB BZ DX FV HT JR LP NN PL RJ TH VF XD ZB AAZ ACX", "AC CA DY FW HU JS LQ NO PM RK TI VG XE ZC ABA ACY", "AD CB DZ FX HV JT LR NP PN RL TJ VH XF ZD ABB ACZ", "AE CC EA FY HW JU LS NQ PO RM TK VI XG ZE ABC ADA", "AF CD EB FZ HX JV LT NR PP RN TL VJ XH ZF ABD ADB", "AG CE EC GA HY JW LU NS PQ RO TM VK XI ZG ABE ADC", "AH CF ED GB HZ JX LV NT PR RP TN VL XJ ZH ABF ADD", "AI CG EE GC IA JY LW NU PS RQ TO VM XK ZI ABG ADE", "AJ CH EF GD IB JZ LX NV PT RR TP VN XL ZJ ABH ADF", "AK CI EG GE IC KA LY NW PU RS TQ VO XM ZK ABI ADG", "AL CJ EH GF ID KB LZ NX PV RT TR VP XN ZL ABJ ADH", "AM CK EI GG IE KC MA NY PW RU TS VQ XO ZM ABK ADI", "AN CL EJ GH IF KD MB NZ PX RV TT VR XP ZN ABL ADJ", "AO CM EK GI IG KE MC OA PY RW TU VS XQ ZO ABM ADK", "AP CN EL GJ IH KF MD OB PZ RX TV VT XR ZP ABN ADL", "AQ CO EM GK II KG ME OC QA RY TW VU XS ZQ ABO ADM", "AR CP EN GL IJ KH MF OD QB RZ TX VV XT ZR ABP ADN", "AS CQ EO GM IK KI MG OE QC SA TY VW XU ZS ABQ ADO", "AT CR EP GN IL KJ MH OF QD SB TZ VX XV ZT ABR ADP", "AU CS EQ GO IM KK MI OG QE SC UA VY XW ZU ABS ADQ", "AV CT ER GP IN KL MJ OH QF SD UB VZ XX ZV ABT ADR", "AW CU ES GQ IO KM MK OI QG SE UC WA XY ZW ABU ADS", "AX CV ET GR IP KN ML OJ QH SF UD WB XZ ZX ABV ADT"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> votes = {"A B C", "B C D", "C D"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> votes = {"A B", "B C", "C A"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> votes = {"HELLO C D E", "C D E HELLO", "D C E HELLO", "E C D HELLO"};
    string website = "HELLO";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W Z X", "B C D E F G H I J K L M N O P Q R S T U V W Z X", "C D E F G H I J K L M N O P Q R S T U V W Z X", "D E F G H I J K L M N O P Q R S T U V W Z X", "E F G H I J K L M N O P Q R S T U V W Z X", "F G H I J K L M N O P Q R S T U V W Z X", "G H I J K L M N O P Q R S T U V W Z X", "H I J K L M N O P Q R S T U V W Z X", "I J K L M N O P Q R S T U V W Z X", "J K L M N O P Q R S T U V W Z X", "K L M N O P Q R S T U V W Z X", "L M N O P Q R S T U V W Z X", "M N O P Q R S T U V W Z X", "N O P Q R S T U V W Z X", "O P Q R S T U V W Z X", "P Q R S T U V W Z X", "Q R S T U V W Z X", "R S T U V W Z X", "S T U V W Z X", "T U V W Z X", "U V W Z X", "V W Z X", "W Z X", "Z X", "X AA BB CC DD", "AA BB CC DD X", "BB CC DD X", "CC DD X", "DD EE FF GG HH II JJ KK LL MM NN OO", "OO AAA BBB CCC DDD EEE FFF GGG", "GGG HHH III JJJ KKK LLL MMM NNN", "NNN AAAA AAAB AABA AABB ABAA ABAB ABBA ABBB", "ABBB XXX YYY ZZZ QQQ"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 335544320;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP AQ", "BA BB BC BD BE BF BG BH BI BJ BK BL BM BN BO BP BQ", "CA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP CQ", "DA DB DC DD DE DF DG DH DI DJ DK DL DM DN DO DP DQ", "EA EB EC ED EE EF EG EH EI EJ EK EL EM EN EO EP EQ", "FA FB FC FD FE FF FG FH FI FJ FK FL FM FN FO FP FQ", "GA GB GC GD GE GF GG GH GI GJ GK GL GM GN GO GP GQ", "HA HB HC HD HE HF HG HH HI HJ HK HL HM HN HO HP HQ", "IA IB IC ID IE IF IG IH II IJ IK IL IM IN IO IP IQ", "JA JB JC JD JE JF JG JH JI JJ JK JL JM JN JO JP JQ", "KA KB KC KD KE KF KG KH KI KJ KK KL KM KN KO KP KQ", "LA LB LC LD LE LF LG LH LI LJ LK LL LM LN LO LP LQ", "MA MB MC MD ME MF MG MH MI MJ MK ML MM MN MO MP MQ", "NA NB NC ND NE NF NG NH NI NJ NK NL NM NN NO NP NQ", "OA OB OC OD OE OF OG OH OI OJ OK OL OM ON OO OP OQ", "PA PB PC PD PE PF PG PH PI PJ PK PL PM PN PO PP PQ", "QA QB QC QD QE QF QG QH QI QJ QK QL QM QN QO QP QQ", "RA RB RC RD RE RF RG RH RI RJ RK RL RM RN RO RP RQ", "SA SB SC SD SE SF SG SH SI SJ SK SL SM SN SO SP SQ", "TA TB TC TD TE TF TG TH TI TJ TK TL TM TN TO TP TQ", "UA UB UC UD UE UF UG UH UI UJ UK UL UM UN UO UP UQ", "VA VB VC VD VE VF VG VH VI VJ VK VL VM VN VO VP VQ", "WA WB WC WD WE WF WG WH WI WJ WK WL WM WN WO WP WQ", "XA XB XC XD XE XF XG XH XI XJ XK XL XM XN XO XP XQ", "YA YB YC YD YE YF YG YH YI YJ YK YL YM YN YO YP YQ", "ZA ZB ZC ZD ZE ZF ZG ZH ZI ZJ ZK ZL ZM ZN ZO ZP ZQ", "AAA AAB AAC AAD AAE AAF AAG AAH AAI AAJ AAK AAL", "ABA ABB ABC ABD ABE ABF ABG ABH ABI ABJ ABK ABL", "ACA ACB ACC ACD ACE ACF ACG ACH ACI ACJ ACK ACL", "ADA ADB ADC ADD ADE ADF ADG ADH ADI ADJ ADK ADL", "AEA AEB AEC AED AEE AEF AEG AEH AEI AEJ AEK AEL", "AFA AFB AFC AFD AFE AFF AFG AFH AFI AFJ AFK AFL", "AGA AGB AGC AGD AGE AGF AGG AGH AGI AGJ AGK AGL", "AHA AHB AHC AHD AHE AHF AHG AHH AHI AHJ AHK AHL", "AIA AIB AIC AID AIE AIF AIG AIH AII AIJ AIK AIL", "AJA AJB AJC AJD AJE AJF AJG AJH AJI AJJ AJK AJL", "AKA AKB AKC AKD AKE AKF AKG AKH AKI AKJ AKK AKL", "ALA ALB ALC ALD ALE ALF ALG ALH ALI ALJ ALK ALL", "AMA AMB AMC AMD AME AMF AMG AMH AMI AMJ AMK AML", "ANA ANB ANC AND ANE ANF ANG ANH ANI ANJ ANK ANL", "AOA AOB AOC AOD AOE AOF AOG AOH AOI AOJ AOK AOL", "APA APB APC APD APE APF APG APH API APJ APK APL", "AQA AQB AQC AQD AQE AQF AQG AQH AQI AQJ AQK AQL", "ARA ARB ARC ARD ARE ARF ARG ARH ARI ARJ ARK ARL", "ASA ASB ASC ASD ASE ASF ASG ASH ASI ASJ ASK ASL", "ATA ATB ATC ATD ATE ATF ATG ATH ATI ATJ ATK ATL", "AUA AUB AUC AUD AUE AUF AUG AUH AUI AUJ AUK AUL", "AVA AVB AVC AVD AVE AVF AVG AVH AVI AVJ AVK AVL", "AWA AWB AWC AWD AWE AWF AWG AWH AWI AWJ AWK AWL"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> votes = {"A B C D E F G H I", "B A I H", "C B H I", "D B", "H I", "I H"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP", "AAA AAB AAC AAD AAE AAF AAG AAH AAI AAJ AAK AAL", "ABA ABB ABC ABD ABE ABF ABG ABH ABI ABJ ABK ABL", "ACA ACB ACC ACD ACE ACF ACG ACH ACI ACJ ACK ACL", "ADA ADB ADC ADD ADE ADF ADG ADH ADI ADJ ADK ADL", "AEA AEB AEC AED AEE AEF AEG AEH AEI AEJ AEK AEL", "AFA AFB AFC AFD AFE AFF AFG AFH AFI AFJ AFK AFL", "AGA AGB AGC AGD AGE AGF AGG AGH AGI AGJ AGK AGL", "AHA AHB AHC AHD AHE AHF AHG AHH AHI AHJ AHK AHL", "BA BB BC BD BE BF BG BH BI BJ BK BL BM BN BO BP", "BQ BR BS BT BU BV BW BX BY BZ AQ AR AS AT AU AV", "CA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP", "DA DB DC DD DE DF DG DH DI DJ DK DL DM DN DO DP", "DU DV DW DX DY DZ CQ CR CS CT CU CV CW CX CY CZ", "EA EB EC ED EE EF EG EH EI EJ EK EL EM EN EO EP", "FA FB FC FD FE FF FG FH FI FJ FK FL FM FN FO FP", "FY FZ EQ ER ES ET EU EV EW EX EY EZ DQ DR DS DT", "GA GB GC GD GE GF GG GH GI GJ GK GL GM GN GO GP", "GS GT GU GV GW GX GY GZ FQ FR FS FT FU FV FW FX", "HA HB HC HD HE HF HG HH HI HJ HK HL HM HN HO HP", "IA IB IC ID IE IF IG IH II IJ IK IL IM IN IO IP", "IW IX IY IZ HQ HR HS HT HU HV HW HX HY HZ GQ GR", "JA JB JC JD JE JF JG JH JI JJ JK JL JM JN JO JP", "JQ JR JS JT JU JV JW JX JY JZ IQ IR IS IT IU IV", "KA KB KC KD KE KF KG KH KI KJ KK KL KM KN KO KP", "LA LB LC LD LE LF LG LH LI LJ LK LL LM LN LO LP", "LU LV LW LX LY LZ KQ KR KS KT KU KV KW KX KY KZ", "MA MB MC MD ME MF MG MH MI MJ MK ML MM MN MO MP", "NA NB NC ND NE NF NG NH NI NJ NK NL NM NN NO NP", "NY NZ MQ MR MS MT MU MV MW MX MY MZ LQ LR LS LT", "OA OB OC OD OE OF OG OH OI OJ OK OL OM ON OO OP", "OS OT OU OV OW OX OY OZ NQ NR NS NT NU NV NW NX", "PA PB PC PD PE PF PG PH PI PJ PK PL PM PN PO PP", "QA QB QC QD QE QF QG QH QI QJ QK QL QM QN QO QP", "QW QX QY QZ PQ PR PS PT PU PV PW PX PY PZ OQ OR", "RA RB RC RD RE RF RG RH RI RJ RK RL RM RN RO RP", "RQ RR RS RT RU RV RW RX RY RZ QQ QR QS QT QU QV", "SA SB SC SD SE SF SG SH SI SJ SK SL SM SN SO SP", "TA TB TC TD TE TF TG TH TI TJ TK TL TM TN TO TP", "TU TV TW TX TY TZ SQ SR SS ST SU SV SW SX SY SZ", "UA UB UC UD UE UF UG UH UI UJ UK UL UM UN UO UP", "VA VB VC VD VE VF VG VH VI VJ VK VL VM VN VO VP", "VY VZ UQ UR US UT UU UV UW UX UY UZ TQ TR TS TT", "WA WB WC WD WE WF WG WH WI WJ WK WL WM WN WO WP", "WS WT WU WV WW WX WY WZ VQ VR VS VT VU VV VW VX", "XA XB XC XD XE XF XG XH XI XJ XK XL XM XN XO XP", "YA YB YC YD YE YF YG YH YI YJ YK YL YM YN YO YP", "YW YX YY YZ XQ XR XS XT XU XV XW XX XY XZ WQ WR", "ZQ ZR ZS ZT ZU ZV ZW ZX ZY ZZ YQ YR YS YT YU YV"};
    string website = "ZQ";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> votes = {"AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP", "AQ AR AS AT AU AV AW AX AY AZ BA BB BC BD BE BF", "BG BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV", "BW BX BY BZ CA CB CC CD CE CF CG CH CI CJ CK CL", "CM CN CO CP CQ CR CS CT CU CV CW CX CY CZ DA DB", "DC DD DE DF DG DH DI DJ DK DL DM DN DO DP DQ DR", "DS DT DU DV DW DX DY DZ EA EB EC ED EE EF EG EH", "EI EJ EK EL EM EN EO EP EQ ER ES ET EU EV EW EX", "EY EZ FA FB FC FD FE FF FG FH FI FJ FK FL FM FN", "FO FP FQ FR FS FT FU FV FW FX FY FZ GA GB GC GD", "GE GF GG GH GI GJ GK GL GM GN GO GP GQ GR GS GT", "GU GV GW GX GY GZ HA HB HC HD HE HF HG HH HI HJ", "HK HL HM HN HO HP HQ HR HS HT HU HV HW HX HY HZ", "IA IB IC ID IE IF IG IH II IJ IK IL IM IN IO IP", "IQ IR IS IT IU IV IW IX IY IZ JA JB JC JD JE JF", "JG JH JI JJ JK JL JM JN JO JP JQ JR JS JT JU JV", "JW JX JY JZ KA KB KC KD KE KF KG KH KI KJ KK KL", "KM KN KO KP KQ KR KS KT KU KV KW KX KY KZ LA LB", "LC LD LE LF LG LH LI LJ LK LL LM LN LO LP LQ LR", "LS LT LU LV LW LX LY LZ MA MB MC MD ME MF MG MH", "MI MJ MK ML MM MN MO MP MQ MR MS MT MU MV MW MX", "MY MZ NA NB NC ND NE NF NG NH NI NJ NK NL NM NN", "NO NP NQ NR NS NT NU NV NW NX NY NZ OA OB OC OD", "OE OF OG OH OI OJ OK OL OM ON OO OP OQ OR OS OT", "OU OV OW OX OY OZ PA PB PC PD PE PF PG PH PI PJ", "PK PL PM PN PO PP PQ PR PS PT PU PV PW PX PY PZ", "QA QB QC QD QE QF QG QH QI QJ QK QL QM QN QO QP", "QQ QR QS QT QU QV QW QX QY QZ RA RB RC RD RE RF", "RG RH RI RJ RK RL RM RN RO RP RQ RR RS RT RU RV", "RW RX RY RZ SA SB SC SD SE SF SG SH SI SJ SK SL", "SM SN SO SP SQ SR SS ST SU SV SW SX SY SZ TA TB", "TC TD TE TF TG TH TI TJ TK TL TM TN TO TP TQ TR", "TS TT TU TV TW TX TY TZ UA UB UC UD UE UF UG UH", "UI UJ UK UL UM UN UO UP UQ UR US UT UU UV UW UX", "UY UZ VA VB VC VD VE VF VG VH VI VJ VK VL VM VN", "VO VP VQ VR VS VT VU VV VW VX VY VZ WA WB WC WD", "WE WF WG WH WI WJ WK WL WM WN WO WP WQ WR WS WT", "WU WV WW WX WY WZ XA XB XC XD XE XF XG XH XI XJ", "XK XL XM XN XO XP XQ XR XS XT XU XV XW XX XY XZ", "YA YB YC YD YE YF YG YH YI YJ YK YL YM YN YO YP", "YQ YR YS YT YU YV YW YX YY YZ ZA ZB ZC ZD ZE ZF", "ZG ZH ZI ZJ ZK ZL ZM ZN ZO ZP ZQ ZR ZS ZT ZU ZV", "ZW ZX ZY ZZ AAA AAB AAC AAD AAE AAF AAG AAH AAI", "AAJ AAK AAL AAM AAN AAO AAP AAQ AAR AAS AAT AAU", "AAV AAW AAX AAY AAZ ABA ABB ABC ABD ABE ABF ABG", "ABH ABI ABJ ABK ABL ABM ABN ABO ABP ABQ ABR ABS", "ABT ABU ABV ABW ABX ABY ABZ ACA ACB ACC ACD ACE", "ACF ACG ACH ACI ACJ ACK ACL ACM ACN ACO ACP ACQ", "ACR ACS ACT ACU ACV ACW ACX ACY ACZ ADA ADB ADC"};
    string website = "AB";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "B C D E F G H I J K L M N O P Q R S T U V W X Y Z", "C D E F G H I J K L M N O P Q R S T U V W X Y Z", "D E F G H I J K L M N O P Q R S T U V W X Y Z AA", "E F G H I J K L M N O P Q R S T U V W X Y Z AA BB", "F G H I J K L M N O P Q R S T U V W X Y Z AA BB CC", "G H I J K L M N O P Q R S T U V W X Y Z AA BB CC", "H I J K L M N O P Q R S T U V W X Y Z AA BB CC DD", "I J K L M N O P Q R S T U V W X Y Z AA BB CC DD EE", "J K L M N O P Q R S T U V W X Y Z AA BB CC DD EE", "K L M N O P Q R S T U V W X Y Z AA BB CC DD EE FF", "L M N O P Q R S T U V W X Y Z AA BB CC DD EE FF GG", "M N O P Q R S T U V W X Y Z AA BB CC DD EE FF GG", "N O P Q R S T U V W X Y Z AA BB CC DD EE FF GG HH", "O P Q R S T U V W X Y Z AA BB CC DD EE FF GG HH II", "P Q R S T U V W X Y Z AA BB CC DD EE FF GG HH II", "Q R S T U V W X Y Z AA BB CC DD EE FF GG HH II JJ", "R S T U V W X Y Z AA BB CC DD EE FF GG HH II JJ KK", "S T U V W X Y Z AA BB CC DD EE FF GG HH II JJ KK", "T U V W X Y Z AA BB CC DD EE FF GG HH II JJ KK LL", "U V W X Y Z AA BB CC DD EE FF GG HH II JJ KK LL MM", "V W X Y Z AA BB CC DD EE FF GG HH II JJ KK LL MM", "W X Y Z AA BB CC DD EE FF GG HH II JJ KK LL MM NN", "X Y Z AA BB CC DD EE FF GG HH II JJ KK LL MM NN OO", "Y Z AA BB CC DD EE FF GG HH II JJ KK LL MM NN OO", "Z AA BB CC DD EE FF GG HH II JJ KK LL MM NN OO PP", "AA BB CC DD EE FF GG HH II JJ KK LL MM NN OO PP QQ", "BB CC DD EE FF GG HH II JJ KK LL MM NN OO PP QQ RR", "CC DD EE FF GG HH II JJ KK LL MM NN OO PP QQ RR SS", "DD EE FF GG HH II JJ KK LL MM NN OO PP QQ RR SS TT", "EE FF GG HH II JJ KK LL MM NN OO PP QQ RR SS TT UU", "FF GG HH II JJ KK LL MM NN OO PP QQ RR SS TT UU VV", "GG HH II JJ KK LL MM NN OO PP QQ RR SS TT UU VV WW", "HH II JJ KK LL MM NN OO PP QQ RR SS TT UU VV WW XX", "II JJ KK LL MM NN OO PP QQ RR SS TT UU VV WW XX YY", "JJ KK LL MM NN OO PP QQ RR SS TT UU VV WW XX YY ZZ", "KK LL MM NN OO PP QQ RR SS TT UU VV WW XX YY ZZ AB", "LL MM NN OO PP QQ RR SS TT UU VV WW XX YY ZZ AB AC", "MM NN OO PP QQ RR SS TT UU VV WW XX YY ZZ AB AC AD", "NN OO PP QQ RR SS TT UU VV WW XX YY ZZ AB AC AD AE", "OO PP QQ RR SS TT UU VV WW XX YY ZZ AB AC AD AE AF", "PP QQ RR SS TT UU VV WW XX YY ZZ AB AC AD AE AF AG", "QQ RR SS TT UU VV WW XX YY ZZ AB AC AD AE AF AG AH", "RR SS TT UU VV WW XX YY ZZ AB AC AD AE AF AG AH AI", "SS TT UU VV WW XX YY ZZ AB AC AD AE AF AG AH AI AJ", "TT UU VV WW XX YY ZZ AB AC AD AE AF AG AH AI AJ", "UU VV WW XX YY ZZ AB AC AD AE AF AG AH AI AJ", "VV WW XX YY ZZ AB AC AD AE AF AG AH AI AJ", "WW XX YY ZZ AB AC AD AE AF AG AH AI AJ", "XX YY ZZ AB AC AD AE AF AG AH AI AJ"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 6737249656664311;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> votes = {"BB AA", "CC AA BB", "DD AA BB CC", "EE AA BB CC DD", "FF AA BB CC DD EE", "GG AA BB CC DD EE FF", "HH AA BB CC DD EE FF GG", "II AA BB CC DD EE FF GG HH", "JJ AA BB CC DD EE FF GG HH II", "KK AA BB CC DD EE FF GG HH II JJ", "LL AA BB CC DD EE FF GG HH II JJ KK", "MM AA BB CC DD EE FF GG HH II JJ KK LL", "NN AA BB CC DD EE FF GG HH II JJ KK LL MM", "OO AA BB CC DD EE FF GG HH II JJ KK LL MM NN", "PP AA BB CC DD EE FF GG HH II JJ KK LL MM NN OO", "QQ BB CC DD EE FF GG HH II JJ KK LL MM NN OO PP", "RR CC DD EE FF GG HH II JJ KK LL MM NN OO PP QQ", "SS DD EE FF GG HH II JJ KK LL MM NN OO PP QQ RR", "TT EE FF GG HH II JJ KK LL MM NN OO PP QQ RR SS", "UU FF GG HH II JJ KK LL MM NN OO PP QQ RR SS TT", "VV GG HH II JJ KK LL MM NN OO PP QQ RR SS TT UU", "WW HH II JJ KK LL MM NN OO PP QQ RR SS TT UU VV", "XX II JJ KK LL MM NN OO PP QQ RR SS TT UU VV WW", "YY JJ KK LL MM NN OO PP QQ RR SS TT UU VV WW XX", "ZZ KK LL MM NN OO PP QQ RR SS TT UU VV WW XX YY", "A LL MM NN OO PP QQ RR SS TT UU VV WW XX YY ZZ", "B MM NN OO PP QQ RR SS TT UU VV WW XX YY ZZ A", "C NN OO PP QQ RR SS TT UU VV WW XX YY ZZ A B", "D OO PP QQ RR SS TT UU VV WW XX YY ZZ A B C", "E PP QQ RR SS TT UU VV WW XX YY ZZ A B C D", "F QQ RR SS TT UU VV WW XX YY ZZ A B C D E", "G RR SS TT UU VV WW XX YY ZZ A B C D E F", "H SS TT UU VV WW XX YY ZZ A B C D E F G", "I TT UU VV WW XX YY ZZ A B C D E F G H", "J UU VV WW XX YY ZZ A B C D E F G H I", "K VV WW XX YY ZZ A B C D E F G H I J", "L WW XX YY ZZ A B C D E F G H I J K", "M XX YY ZZ A B C D E F G H I J K L", "N YY ZZ A B C D E F G H I J K L M", "O ZZ A B C D E F G H I J K L M N", "P A B C D E F G H I J K L M N O", "Q B C D E F G H I J K L M N O P", "R C D E F G H I J K L M N O P Q", "S D E F G H I J K L M N O P Q R", "T E F G H I J K L M N O P Q R S", "U F G H I J K L M N O P Q R S T", "V G H I J K L M N O P Q R S T U", "W H I J K L M N O P Q R S T U V", "X I J K L M N O P Q R S T U V W"};
    string website = "J";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 34349252688;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> votes = {"AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP", "AO AP AQ AR AS AT AU AV AW AX AY AZ BA BB BC BD", "BC BD BE BF BG BH BI BJ BK BL BM BN BO BP BQ BR", "BQ BR BS BT BU BV BW BX BY BZ CA CB CC CD CE CF", "CE CF CG CH CI CJ CK CL CM CN CO CP CQ CR CS CT", "CS CT CU CV CW CX CY CZ DA DB DC DD DE DF DG DH", "DG DH DI DJ DK DL DM DN DO DP DQ DR DS DT DU DV", "DU DV DW DX DY DZ EA EB EC ED EE EF EG EH EI EJ", "EI EJ EK EL EM EN EO EP EQ ER ES ET EU EV EW EX", "EW EX EY EZ FA FB FC FD FE FF FG FH FI FJ FK FL", "FK FL FM FN FO FP FQ FR FS FT FU FV FW FX FY FZ", "FY FZ GA GB GC GD GE GF GG GH GI GJ GK GL GM GN", "GM GN GO GP GQ GR GS GT GU GV GW GX GY GZ HA HB", "HA HB HC HD HE HF HG HH HI HJ HK HL HM HN HO HP", "HO HP HQ HR HS HT HU HV HW HX HY HZ IA IB IC ID", "IC ID IE IF IG IH II IJ IK IL IM IN IO IP IQ IR", "IQ IR IS IT IU IV IW IX IY IZ JA JB JC JD JE JF", "JE JF JG JH JI JJ JK JL JM JN JO JP JQ JR JS JT", "JS JT JU JV JW JX JY JZ KA KB KC KD KE KF KG KH", "KG KH KI KJ KK KL KM KN KO KP KQ KR KS KT KU KV", "KU KV KW KX KY KZ LA LB LC LD LE LF LG LH LI LJ", "LI LJ LK LL LM LN LO LP LQ LR LS LT LU LV LW LX", "LW LX LY LZ MA MB MC MD ME MF MG MH MI MJ MK ML", "MK ML MM MN MO MP MQ MR MS MT MU MV MW MX MY MZ", "MY MZ NA NB NC ND NE NF NG NH NI NJ NK NL NM NN", "NM NN NO NP NQ NR NS NT NU NV NW NX NY NZ OA OB", "OA OB OC OD OE OF OG OH OI OJ OK OL OM ON OO OP", "OO OP OQ OR OS OT OU OV OW OX OY OZ PA PB PC PD", "PC PD PE PF PG PH PI PJ PK PL PM PN PO PP PQ PR", "PQ PR PS PT PU PV PW PX PY PZ QA QB QC QD QE QF", "QE QF QG QH QI QJ QK QL QM QN QO QP QQ QR QS QT", "QS QT QU QV QW QX QY QZ RA RB RC RD RE RF RG RH", "RG RH RI RJ RK RL RM RN RO RP RQ RR RS RT RU RV", "RU RV RW RX RY RZ SA SB SC SD SE SF SG SH SI SJ", "SI SJ SK SL SM SN SO SP SQ SR SS ST SU SV SW SX", "SW SX SY SZ TA TB TC TD TE TF TG TH TI TJ TK TL", "TK TL TM TN TO TP TQ TR TS TT TU TV TW TX TY TZ", "TY TZ UA UB UC UD UE UF UG UH UI UJ UK UL UM UN", "UM UN UO UP UQ UR US UT UU UV UW UX UY UZ VA VB", "VA VB VC VD VE VF VG VH VI VJ VK VL VM VN VO VP"};
    string website = "QF";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> votes = {"A B C", "B C D", "C D", "Z"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> votes = {"AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP AQ", "AR AS AT AU AV AW AX AY AZ BA BB BC BD BE BF BG BH", "BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW BX BY", "BZ CA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP", "CQ CR CS CT CU CV CW CX CY CZ DA DB DC DD DE DF DG", "DH DI DJ DK DL DM DN DO DP DQ DR DS DT DU DV DW DX", "DY DZ EA EB EC ED EE EF EG EH EI EJ EK EL EM EN EO", "EP EQ ER ES ET EU EV EW EX EY EZ FA FB FC FD FE FF", "FG FH FI FJ FK FL FM FN FO FP FQ FR FS FT FU FV FW", "FX FY FZ GA GB GC GD GE GF GG GH GI GJ GK GL GM GN", "GO GP GQ GR GS GT GU GV GW GX GY GZ HA HB HC HD HE", "HF HG HH HI HJ HK HL HM HN HO HP HQ HR HS HT HU HV", "HW HX HY HZ IA IB IC ID IE IF IG IH II IJ IK IL IM", "IN IO IP IQ IR IS IT IU IV IW IX IY IZ JA JB JC JD", "JE JF JG JH JI JJ JK JL JM JN JO JP JQ JR JS JT JU", "JV JW JX JY JZ KA KB KC KD KE KF KG KH KI KJ KK KL", "KM KN KO KP KQ KR KS KT KU KV KW KX KY KZ LA LB LC", "LD LE LF LG LH LI LJ LK LL LM LN LO LP LQ LR LS LT", "LU LV LW LX LY LZ MA MB MC MD ME MF MG MH MI MJ MK", "ML MM MN MO MP MQ MR MS MT MU MV MW MX MY MZ NA NB", "NC ND NE NF NG NH NI NJ NK NL NM NN NO NP NQ NR NS", "NT NU NV NW NX NY NZ OA OB OC OD OE OF OG OH OI OJ", "OK OL OM ON OO OP OQ OR OS OT OU OV OW OX OY OZ PA", "PB PC PD PE PF PG PH PI PJ PK PL PM PN PO PP PQ PR", "PS PT PU PV PW PX PY PZ QA QB QC QD QE QF QG QH QI", "QJ QK QL QM QN QO QP QQ QR QS QT QU QV QW QX QY QZ", "RA RB RC RD RE RF RG RH RI RJ RK RL RM RN RO RP RQ", "RR RS RT RU RV RW RX RY RZ SA SB SC SD SE SF SG SH", "SI SJ SK SL SM SN SO SP SQ SR SS ST SU SV SW SX SY", "SZ TA TB TC TD TE TF TG TH TI TJ TK TL TM TN TO TP", "TQ TR TS TT TU TV TW TX TY TZ UA UB UC UD UE UF UG", "UH UI UJ UK UL UM UN UO UP UQ UR US UT UU UV UW UX", "UY UZ VA VB VC VD VE VF VG VH VI VJ VK VL VM VN VO", "VP VQ VR VS VT VU VV VW VX VY VZ WA WB WC WD WE WF", "WG WH WI WJ WK WL WM WN WO WP WQ WR WS WT WU WV WW", "WX WY WZ XA XB XC XD XE XF XG XH XI XJ XK XL XM XN", "XO XP XQ XR XS XT XU XV XW XX XY XZ YA YB YC YD YE", "YF YG YH YI YJ YK YL YM YN YO YP YQ YR YS YT YU YV", "YW YX YY YZ ZA ZB ZC ZD ZE ZF ZG ZH ZI ZJ ZK ZL ZM"};
    string website = "YW";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> votes = {"A B", "B C"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> votes = {"B C D E F G H I J K L M N O P Q R S T U V W X Y Z", "AB BB CB DB EB FB GB HB IB JB KB LB MB NB OB PB QB", "RB SB TB UB VB WB XB YB ZB AC BC CC DC EC FC GC HC", "IC JC KC LC MC NC OC PC QC RC SC TC UC VC WC XC YC", "ZC AD BD CD DD ED FD GD HD ID JD KD LD MD ND OD PD", "QD RD SD TD UD VD WD XD YD ZD AE BE CE DE EE FE GE", "HE IE JE KE LE ME NE OE PE QE RE SE TE UE VE WE XE", "YE ZE AF BF CF DF EF FF GF HF IF JF KF LF MF NF OF", "PF QF RF SF TF UF VF WF XF YF ZF AG BG CG DG EG FG", "GG HG IG JG KG LG MG NG OG PG QG RG SG TG UG VG WG", "XG YG ZG AH BH CH DH EH FH GH HH IH JH KH LH MH NH", "OH PH QH RH SH TH UH VH WH XH YH ZH AI BI CI DI EI", "FI GI HI II JI KI LI MI NI OI PI QI RI SI TI UI VI", "WI XI YI ZI AJ BJ CJ DJ EJ FJ GJ HJ IJ JJ KJ LJ MJ", "NJ OJ PJ QJ RJ SJ TJ UJ VJ WJ XJ YJ ZJ AK BK CK DK", "EK FK GK HK IK JK KK LK MK NK OK PK QK RK SK TK UK", "VK WK XK YK ZK AL BL CL DL EL FL GL HL IL JL KL LL", "ML NL OL PL QL RL SL TL UL VL WL XL YL ZL AM BM CM", "DM EM FM GM HM IM JM KM LM MM NM OM PM QM RM SM TM", "UM VM WM XM YM ZM AN BN CN DN EN FN GN HN IN JN KN", "LN MN NN ON PN QN RN SN TN UN VN WN XN YN ZN AO BO", "CO DO EO FO GO HO IO JO KO LO MO NO OO PO QO RO SO", "TO UO VO WO XO YO ZO AP BP CP DP EP FP GP HP IP JP", "KP LP MP NP OP PP QP RP SP TP UP VP WP XP YP ZP AQ", "BQ CQ DQ EQ FQ GQ HQ IQ JQ KQ LQ MQ NQ OQ PQ QQ RQ", "SQ TQ UQ VQ WQ XQ YQ ZQ AR BR CR DR ER FR GR HR IR", "JR KR LR MR NR OR PR QR RR SR TR UR VR WR XR YR ZR", "AS BS CS DS ES FS GS HS IS JS KS LS MS NS OS PS QS", "RS SS TS US VS WS XS YS ZS AT BT CT DT ET FT GT HT", "IT JT KT LT MT NT OT PT QT RT ST TT UT VT WT XT YT", "ZT AU BU CU DU EU FU GU HU IU JU KU LU MU NU OU PU", "QU RU SU TU UU VU WU XU YU ZU AV BV CV DV EV FV GV", "HV IV JV KV LV MV NV OV PV QV RV SV TV UV VV WV XV", "YV ZV AW BW CW DW EW FW GW HW IW JW KW LW MW NW OW", "PW QW RW SW TW UW VW WW XW YW ZW AX BX CX DX EX FX", "GX HX IX JX KX LX MX NX OX PX QX RX SX TX UX VX WX", "XX YX ZX AY BY CY DY EY FY GY HY IY JY KY LY MY NY", "OY PY QY RY SY TY UY VY WY XY YY ZY AZ BZ CZ DZ EZ", "FZ GZ HZ IZ JZ KZ LZ MZ NZ OZ PZ QZ RZ SZ TZ UZ VZ", "WZ XZ YZ ZZ AAB BAB CAB DAB EAB FAB GAB HAB IAB", "JAB KAB LAB MAB NAB OAB PAB QAB RAB SAB TAB UAB", "VAB WAB XAB YAB ZAB ABB BBB CBB DBB EBB FBB GBB", "HBB IBB JBB KBB LBB MBB NBB OBB PBB QBB RBB SBB", "TBB UBB VBB WBB XBB YBB ZBB ACB BCB CCB DCB ECB", "FCB GCB HCB ICB JCB KCB LCB MCB NCB OCB PCB QCB", "RCB SCB TCB UCB VCB WCB XCB YCB ZCB ADB BDB CDB", "DDB EDB FDB GDB HDB IDB JDB KDB LDB MDB NDB ODB", "PDB QDB RDB SDB TDB UDB VDB WDB XDB YDB ZDB AEB", "BEB CEB DEB EEB FEB GEB HEB IEB JEB KEB LEB MEB", "NEB OEB PEB QEB REB SEB TEB UEB VEB WEB XEB YEB"};
    string website = "VEB";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> votes = {"AA AAY AAZ AAA AAB AAC AAD AAE AAF AAG AAH", "AB ABY ABZ ABA ABB ABC ABD ABE ABF ABG ABH", "AC ACY ACZ ACA ACB ACC ACD ACE ACF ACG ACH", "AD ADY ADZ ADA ADB ADC ADD ADE ADF ADG ADH", "AE AEY AEZ AEA AEB AEC AED AEE AEF AEG AEH", "AF AFY AFZ AFA AFB AFC AFD AFE AFF AFG AFH", "AG AGY AGZ AGA AGB AGC AGD AGE AGF AGG AGH", "AH AHY AHZ AHA AHB AHC AHD AHE AHF AHG AHH", "AI AIY AIZ AIA AIB AIC AID AIE AIF AIG AIH", "AJ AJY AJZ AJA AJB AJC AJD AJE AJF AJG AJH", "AK AKY AKZ AKA AKB AKC AKD AKE AKF AKG AKH", "AL ALY ALZ ALA ALB ALC ALD ALE ALF ALG ALH", "AM AMY AMZ AMA AMB AMC AMD AME AMF AMG AMH", "AN ANY ANZ ANA ANB ANC AND ANE ANF ANG ANH", "AO AOY AOZ AOA AOB AOC AOD AOE AOF AOG AOH", "AP APY APZ APA APB APC APD APE APF APG APH", "AQ AQY AQZ AQA AQB AQC AQD AQE AQF AQG AQH", "AR ARY ARZ ARA ARB ARC ARD ARE ARF ARG ARH", "AS ASY ASZ ASA ASB ASC ASD ASE ASF ASG ASH", "AT ATY ATZ ATA ATB ATC ATD ATE ATF ATG ATH", "AU AUY AUZ AUA AUB AUC AUD AUE AUF AUG AUH", "AV AVY AVZ AVA AVB AVC AVD AVE AVF AVG AVH", "AW AWY AWZ AWA AWB AWC AWD AWE AWF AWG AWH", "AX AXY AXZ AXA AXB AXC AXD AXE AXF AXG AXH", "AY AYY AYZ AYA AYB AYC AYD AYE AYF AYG AYH", "AZ AZY AZZ AZA AZB AZC AZD AZE AZF AZG AZH", "BA BAY BAZ BAA BAB BAC BAD BAE BAF BAG BAH", "BB BBY BBZ BBA BBB BBC BBD BBE BBF BBG BBH", "BC BCY BCZ BCA BCB BCC BCD BCE BCF BCG BCH", "BD BDY BDZ BDA BDB BDC BDD BDE BDF BDG BDH", "BE BEY BEZ BEA BEB BEC BED BEE BEF BEG BEH", "BF BFY BFZ BFA BFB BFC BFD BFE BFF BFG BFH", "BG BGY BGZ BGA BGB BGC BGD BGE BGF BGG BGH", "BH BHY BHZ BHA BHB BHC BHD BHE BHF BHG BHH", "BI BIY BIZ BIA BIB BIC BID BIE BIF BIG BIH", "BJ BJY BJZ BJA BJB BJC BJD BJE BJF BJG BJH", "BK BKY BKZ BKA BKB BKC BKD BKE BKF BKG BKH", "BL BLY BLZ BLA BLB BLC BLD BLE BLF BLG BLH", "BM BMY BMZ BMA BMB BMC BMD BME BMF BMG BMH", "BN BNY BNZ BNA BNB BNC BND BNE BNF BNG BNH", "BO BOY BOZ BOA BOB BOC BOD BOE BOF BOG BOH", "BP BPY BPZ BPA BPB BPC BPD BPE BPF BPG BPH", "BQ BQY BQZ BQA BQB BQC BQD BQE BQF BQG BQH", "BR BRY BRZ BRA BRB BRC BRD BRE BRF BRG BRH", "BS BSY BSZ BSA BSB BSC BSD BSE BSF BSG BSH", "BT BTY BTZ BTA BTB BTC BTD BTE BTF BTG BTH", "BU BUY BUZ BUA BUB BUC BUD BUE BUF BUG BUH", "BV BVY BVZ BVA BVB BVC BVD BVE BVF BVG BVH", "BW BWY BWZ BWA BWB BWC BWD BWE BWF BWG BWH", "BX BXY BXZ BXA BXB BXC BXD BXE BXF BXG BXH"};
    string website = "AA";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> votes = {"AAA BAA CAA DAA EAA FAA GAA HAA IAA JAA KAA LAA", "YBA ZBA ACA BCA CCA DCA ECA FCA GCA HCA ICA JCA", "WDA XDA YDA ZDA AEA BEA CEA DEA EEA FEA GEA HEA", "UFA VFA WFA XFA YFA ZFA AGA BGA CGA DGA EGA FGA", "SHA THA UHA VHA WHA XHA YHA ZHA AIA BIA CIA DIA", "QJA RJA SJA TJA UJA VJA WJA XJA YJA ZJA AKA BKA", "OLA PLA QLA RLA SLA TLA ULA VLA WLA XLA YLA ZLA", "MNA NNA ONA PNA QNA RNA SNA TNA UNA VNA WNA XNA", "KPA LPA MPA NPA OPA PPA QPA RPA SPA TPA UPA VPA", "IRA JRA KRA LRA MRA NRA ORA PRA QRA RRA SRA TRA", "GTA HTA ITA JTA KTA LTA MTA NTA OTA PTA QTA RTA", "EVA FVA GVA HVA IVA JVA KVA LVA MVA NVA OVA PVA", "CXA DXA EXA FXA GXA HXA IXA JXA KXA LXA MXA NXA", "AZA BZA CZA DZA EZA FZA GZA HZA IZA JZA KZA LZA", "YAB ZAB ABB BBB CBB DBB EBB FBB GBB HBB IBB JBB", "WCB XCB YCB ZCB ADB BDB CDB DDB EDB FDB GDB HDB", "UEB VEB WEB XEB YEB ZEB AFB BFB CFB DFB EFB FFB", "SGB TGB UGB VGB WGB XGB YGB ZGB AHB BHB CHB DHB", "QIB RIB SIB TIB UIB VIB WIB XIB YIB ZIB AJB BJB", "OKB PKB QKB RKB SKB TKB UKB VKB WKB XKB YKB ZKB", "MMB NMB OMB PMB QMB RMB SMB TMB UMB VMB WMB XMB", "KOB LOB MOB NOB OOB POB QOB ROB SOB TOB UOB VOB", "IQB JQB KQB LQB MQB NQB OQB PQB QQB RQB SQB TQB", "GSB HSB ISB JSB KSB LSB MSB NSB OSB PSB QSB RSB", "EUB FUB GUB HUB IUB JUB KUB LUB MUB NUB OUB PUB", "CWB DWB EWB FWB GWB HWB IWB JWB KWB LWB MWB NWB", "AYB BYB CYB DYB EYB FYB GYB HYB IYB JYB KYB LYB", "YZB ZZB AAC BAC CAC DAC EAC FAC GAC HAC IAC JAC", "WBC XBC YBC ZBC ACC BCC CCC DCC ECC FCC GCC HCC", "UDC VDC WDC XDC YDC ZDC AEC BEC CEC DEC EEC FEC", "SFC TFC UFC VFC WFC XFC YFC ZFC AGC BGC CGC DGC", "QHC RHC SHC THC UHC VHC WHC XHC YHC ZHC AIC BIC", "OJC PJC QJC RJC SJC TJC UJC VJC WJC XJC YJC ZJC", "MLC NLC OLC PLC QLC RLC SLC TLC ULC VLC WLC XLC", "KNC LNC MNC NNC ONC PNC QNC RNC SNC TNC UNC VNC", "IPC JPC KPC LPC MPC NPC OPC PPC QPC RPC SPC TPC", "GRC HRC IRC JRC KRC LRC MRC NRC ORC PRC QRC RRC", "ETC FTC GTC HTC ITC JTC KTC LTC MTC NTC OTC PTC", "CVC DVC EVC FVC GVC HVC IVC JVC KVC LVC MVC NVC", "AXC BXC CXC DXC EXC FXC GXC HXC IXC JXC KXC LXC", "YYC ZYC AZC BZC CZC DZC EZC FZC GZC HZC IZC JZC", "WAD XAD YAD ZAD ABD BBD CBD DBD EBD FBD GBD HBD", "UCD VCD WCD XCD YCD ZCD ADD BDD CDD DDD EDD FDD", "SED TED UED VED WED XED YED ZED AFD BFD CFD DFD", "QGD RGD SGD TGD UGD VGD WGD XGD YGD ZGD AHD BHD", "OID PID QID RID SID TID UID VID WID XID YID ZID", "MKD NKD OKD PKD QKD RKD SKD TKD UKD VKD WKD XKD", "KMD LMD MMD NMD OMD PMD QMD RMD SMD TMD UMD VMD", "IOD JOD KOD LOD MOD NOD OOD POD QOD ROD SOD TOD", "GQD HQD IQD JQD KQD LQD MQD NQD OQD PQD QQD RQD"};
    string website = "GZA";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> votes = {"AA AB AC AD", "AB AC AD AE", "AC AD AE AF", "AD AE AF AG", "AE AF AG AH", "AF AG AH AI", "AG AH AI AJ", "AH AI AJ BA", "AI AJ BA BB", "AJ BA BB BC", "BA BB BC BD", "BB BC BD BE", "BC BD BE BF", "BD BE BF BG", "BE BF BG BH", "BF BG BH BI", "BG BH BI BJ", "BH BI BJ CA", "BI BJ CA CB", "BJ CA CB CC", "CA CB CC CD", "CB CC CD CE", "CC CD CE CF", "CD CE CF CG", "CE CF CG CH", "CF CG CH CI", "CG CH CI CJ", "CH CI CJ DA", "CI CJ DA DB", "CJ DA DB DC", "DA DB DC DD", "DB DC DD DE", "DC DD DE DF", "DD DE DF DG", "DE DF DG DH", "DF DG DH DI", "DG DH DI DJ", "DH DI DJ EA", "DI DJ EA EB", "DJ EA EB EC", "EA EB EC ED", "EB EC ED EE", "EC ED EE EF", "ED EE EF EG", "EE EF EG EH", "EF EG EH EI", "EG EH EI EJ", "EH EI EJ FA"};
    string website = "AC";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 3298897010137;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> votes = {"QA RA SA TA UA VA WA XA YA ZA", "RA SA TA UA VA WA XA YA ZA", "SA TA UA VA WA XA YA ZA", "TA UA VA WA XA YA ZA", "UA VA WA XA YA ZA", "VA WA XA YA ZA", "WA XA YA ZA", "XA YA ZA", "YA ZA", "ZA A", "A B C D E F G H I J K L M N O P Q R S T U V W X Y", "B C D E F G H I J K L M N O P Q R S T U V W X Y Z", "C D E F G H I J K L M N O P Q R S T U V W X Y Z", "D E F G H I J K L M N O P Q R S T U V W X Y Z", "E F G H I J K L M N O P Q R S T U V W X Y Z", "F G H I J K L M N O P Q R S T U V W X Y Z", "G H I J K L M N O P Q R S T U V W X Y Z", "H I J K L M N O P Q R S T U V W X Y Z", "I J K L M N O P Q R S T U V W X Y Z", "J K L M N O P Q R S T U V W X Y Z", "K L M N O P Q R S T U V W X Y Z", "L M N O P Q R S T U V W X Y Z", "M N O P Q R S T U V W X Y Z", "N O P Q R S T U V W X Y Z", "O P Q R S T U V W X Y Z", "P Q R S T U V W X Y Z", "Q R S T U V W X Y Z", "R S T U V W X Y Z", "S T U V W X Y Z", "T U V W X Y Z", "U V W X Y Z", "V W X Y Z", "W X Y Z", "X Y Z", "Y Z", "Z"};
    string website = "QA";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 8589934848;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> votes = {"A B C D E"};
    string website = "C";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> votes = {"A B C D E F G H I J K L M N", "O P Q R S T U V X Z AA AB AC AE AF", "AG AH AI AJ AK AL AM AN AO AP", "AQ AR AS AT AU AV AX AZ BA BB BC BD", "BE BF BG BH BI BJ BK BL CA CB", "CC CD CE CF CG DA DB DC DE DF DG DH DI DJ", "DH DK DL DM DN DO DP DQ DR DS DU DX", "EA EB"};
    string website = "EA";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "AA BB CC DD EE FF GG HH II JJ KK LL MM NN OO PP", "QQ RR SS TT UU VV WW XX YY ZZ Z", "AAA BBB CCC DDD EEE FFF GGG HHH III JJJ KKK LLL", "MMM NNN OOO PPP QQQ RRR SSS TTT UUU VVV WWW XXX", "YYY ZZZ AAAA BBBB CCCC DDDD EEEE FFFF GGGG HHHH"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> votes = {"A B C", "B E", "C E", "D E F", "E C", "F"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "B C D E F G H I J K L M N O P Q R S T U V W X Y Z", "C D E F G H I J K L M N O P Q R S T U V W X Y Z AA", "H I J K L M N O P Q R S T U V W X Y Z AA AB AC AD", "O P Q R S T U V W X Y Z AA AB AC AD AE AF AG AH AI", "P Q R S T U V W X Y Z AA AB AC AD AE AF AG AH AI", "Q R S T U V W X Y Z AA AB AC AD AE AF AG AH AI AJ", "R S T U V W X Y Z AA AB AC AD AE AF AG AH AI AJ AK", "S T U V W X Y Z AA AB AC AD AE AF AG AH AI AJ AK", "L M N O P Q R S T U V W X Y Z AA AB AC AD AE AF AG", "M N O P Q R S T U V W X Y Z AA AB AC AD AE AF AG", "D E F G H I J K L M N O P Q R S T U V W X Y Z AA", "E F G H I J K L M N O P Q R S T U V W X Y Z AA AB", "T U V W X Y Z AA AB AC AD AE AF AG AH AI AJ AK AL", "I J K L M N O P Q R S T U V W X Y Z AA AB AC AD AE", "J K L M N O P Q R S T U V W X Y Z AA AB AC AD AE", "K L M N O P Q R S T U V W X Y Z AA AB AC AD AE AF", "F G H I J K L M N O P Q R S T U V W X Y Z AA AB AC", "G H I J K L M N O P Q R S T U V W X Y Z AA AB AC", "N O P Q R S T U V W X Y Z AA AB AC AD AE AF AG AH", "U V W X Y Z AA AB AC AD AE AF AG AH AI AJ AK AL AM", "V W X Y Z AA AB AC AD AE AF AG AH AI AJ AK AL AM", "W X Y Z AA AB AC AD AE AF AG AH AI AJ AK AL AM AN", "X Y Z AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO", "Y Z AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO", "Z AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP", "AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP AQ", "AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP AQ AR", "AC AD AE AF AG AH AI AJ AK AL AM AN AO AP AQ AR AS", "AD AE AF AG AH AI AJ AK AL AM AN AO AP AQ AR AS AT", "AE AF AG AH AI AJ AK AL AM AN AO AP AQ AR AS AT AU", "AF AG AH AI AJ AK AL AM AN AO AP AQ AR AS AT AU AV", "AG AH AI AJ AK AL AM AN AO AP AQ AR AS AT AU AV AW", "AH AI AJ AK AL AM AN AO AP AQ AR AS AT AU AV AW AX", "AI AJ AK AL AM AN AO AP AQ AR AS AT AU AV AW AX AY", "AJ AK AL AM AN AO AP AQ AR AS AT AU AV AW AX AY AZ", "AK AL AM AN AO AP AQ AR AS AT AU AV AW AX AY AZ BA", "AL AM AN AO AP AQ AR AS AT AU AV AW AX AY AZ BA BB", "AM AN AO AP AQ AR AS AT AU AV AW AX AY AZ BA BB BC", "AN AO AP AQ AR AS AT AU AV AW AX AY AZ BA BB BC BD", "AO AP AQ AR AS AT AU AV AW AX AY AZ BA BB BC BD BE", "AP AQ AR AS AT AU AV AW AX AY AZ BA BB BC BD BE BF", "AQ AR AS AT AU AV AW AX AY AZ BA BB BC BD BE BF BG", "AR AS AT AU AV AW AX AY AZ BA BB BC BD BE BF BG BH", "AS AT AU AV AW AX AY AZ BA BB BC BD BE BF BG BH BI", "AT AU AV AW AX AY AZ BA BB BC BD BE BF BG BH BI BJ", "AU AV AW AX AY AZ BA BB BC BD BE BF BG BH BI BJ BK", "AV AW AX AY AZ BA BB BC BD BE BF BG BH BI BJ BK BL", "AW AX AY AZ BA BB BC BD BE BF BG BH BI BJ BK BL BM", "AX AY AZ BA BB BC BD BE BF BG BH BI BJ BK BL BM BN"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 9006443887137061;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> votes = {"A B CA DA E F GA H I J K LA M N P Q R S T V W X Y", "B E F G H M N O P Q R S T Y", "C E F G H I J K L P Q R S T U", "D B C G H I J K L M N O", "E B J K L M N O R S T U V W X Y", "F C D E T U V W", "G B C D E K L M N O P Q R U V W X Y", "H B C D E K L M O P Q R S T", "I D E FA G K LA M N O P Q R S T U V W X Y", "J K L M N O P QA R S T U V", "K D E F G H I O P Q R SW X Y", "L B F G H I J O PA Q R S T U V X Y", "M B F G H I J K RA S T U V W X Y", "N F GA HA I J Q R S T U V W X Y", "O B C D FA G HA I J KA L R S T U V Y", "P B G H I J K L M N Q R S T U V W X Y", "Q B I JA KA L M VA W X Y", "R E F G H I J K L M N O U V W X Y", "S B C I J K L M N O P Q W X Y", "T Y", "U MA N O PA Q R S TA", "V G H IA J K L M N O P Q R S X Y", "W I J KA L MA N OA P Q RA S T U V", "X M N O P Q R Y", "Y B", "Z B CA D E FA G I JA K L MA N O V W X Y", "AA V W X Y", "BA E F G H M N O P Q R S T Y", "CA E F G H I J K L P Q R S T U", "DA B C G H I J K L M N O", "EA B J K L M N O R S T U V W X Y", "FA C D E T U V W", "GA B C D E K L M N O P Q R U V W X Y", "HA B C D E K L M O P Q R S T", "IA D E FA G K L M N O P Q R S T U V W X Y", "JA K L M N O P Q R S T U V", "KA D E F GA H IA O P Q R SW X Y", "LA B F G H I J O P Q R S T U V X Y", "MA B F G H I J K R S T U V W X Y", "NA F G H IA J Q R S T U V W X Y", "OA B C D F G H I J KA L R S T U V Y", "PA B GA H I J K L M N Q R S T U V W X Y", "QA B I J K L MA V W X Y", "RA E F G H I J K L M N O U V W X Y", "SA B C I J K L M N O P Q W X Y", "TA Y", "UA M N OA PA Q R S T", "VA G H I J K L M N O P Q R S X Y", "WA I J K L M N O P Q R S T U V", "XA M N O P Q R Y"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 51;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> votes = {"AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP AQ", "AR AS AT AU AV AW AX AY AZ BA BB BC BD BE BF BG BH", "BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW BX BY", "BZ CA CB CC CD CE CF CG CH CI CJ CK CL CM CN CO CP", "CQ CR CS CT CU CV CW CX CY CZ DA DB DC DD DE DF DG", "DH DI DJ DK DL DM DN DO DP DQ DR DS DT DU DV DW DX", "DY DZ EA EB EC ED EE EF EG EH EI EJ EK EL EM EN EO", "EP EQ ER ES ET EU EV EW EX EY EZ FA FB FC FD FE FF", "FG FH FI FJ FK FL FM FN FO FP FQ FR FS FT FU FV FW", "FX FY FZ GA GB GC GD GE GF GG GH GI GJ GK GL GM GN", "GO GP GQ GR GS GT GU GV GW GX GY GZ HA HB HC HD HE", "HF HG HH HI HJ HK HL HM HN HO HP HQ HR HS HT HU HV", "HW HX HY HZ IA IB IC ID IE IF IG IH II IJ IK IL IM", "IN IO IP IQ IR IS IT IU IV IW IX IY IZ JA JB JC JD", "JE JF JG JH JI JJ JK JL JM JN JO JP JQ JR JS JT JU", "JV JW JX JY JZ KA KB KC KD KE KF KG KH KI KJ KK KL", "KM KN KO KP KQ KR KS KT KU KV KW KX KY KZ LA LB LC", "LD LE LF LG LH LI LJ LK LL LM LN LO LP LQ LR LS LT", "LU LV LW LX LY LZ MA MB MC MD ME MF MG MH MI MJ MK", "ML MM MN MO MP MQ MR MS MT MU MV MW MX MY MZ NA NB", "NC ND NE NF NG NH NI NJ NK NL NM NN NO NP NQ NR NS", "NT NU NV NW NX NY NZ OA OB OC OD OE OF OG OH OI OJ", "OK OL OM ON OO OP OQ OR OS OT OU OV OW OX OY OZ PA", "PB PC PD PE PF PG PH PI PJ PK PL PM PN PO PP PQ PR", "PS PT PU PV PW PX PY PZ QA QB QC QD QE QF QG QH QI", "QJ QK QL QM QN QO QP QQ QR QS QT QU QV QW QX QY QZ", "RA RB RC RD RE RF RG RH RI RJ RK RL RM RN RO RP RQ", "RR RS RT RU RV RW RX RY RZ SA SB SC SD SE SF SG SH", "SI SJ SK SL SM SN SO SP SQ SR SS ST SU SV SW SX SY", "SZ TA TB TC TD TE TF TG TH TI TJ TK TL TM TN TO TP", "TQ TR TS TT TU TV TW TX TY TZ UA UB UC UD UE UF UG", "UH UI UJ UK UL UM UN UO UP UQ UR US UT UU UV UW UX", "UY UZ VA VB VC VD VE VF VG VH VI VJ VK VL VM VN VO", "VP VQ VR VS VT VU VV VW VX VY VZ WA WB WC WD WE WF", "WG WH WI WJ WK WL WM WN WO WP WQ WR WS WT WU WV WW", "WX WY WZ XA XB XC XD XE XF XG XH XI XJ XK XL XM XN", "XO XP XQ XR XS XT XU XV XW XX XY XZ YA YB YC YD YE", "YF YG YH YI YJ YK YL YM YN YO YP YQ YR YS YT YU YV", "YW YX YY YZ ZA ZB ZC ZD ZE ZF ZG ZH ZI ZJ ZK ZL"};
    string website = "YW";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "B C D E F G H I J K L M N O P Q R S T U V W X Y Z", "C D E F G H I J K L M N O P Q R S T U V W X Y Z BA", "D E F G H I J K L M N O P Q R S T U V W X Y Z BA", "E F G H I J K L M N O P Q R S T U V W X Y Z BA BB", "F G H I J K L M N O P Q R S T U V W X Y Z BA BB BC", "G H I J K L M N O P Q R S T U V W X Y Z BA BB BC", "H I J K L M N O P Q R S T U V W X Y Z BA BB BC BD", "I J K L M N O P Q R S T U V W X Y Z BA BB BC BD BE", "J K L M N O P Q R S T U V W X Y Z BA BB BC BD BE", "K L M N O P Q R S T U V W X Y Z BA BB BC BD BE BF", "L M N O P Q R S T U V W X Y Z BA BB BC BD BE BF BG", "M N O P Q R S T U V W X Y Z BA BB BC BD BE BF BG", "N O P Q R S T U V W X Y Z BA BB BC BD BE BF BG BH", "O P Q R S T U V W X Y Z BA BB BC BD BE BF BG BH BI", "P Q R S T U V W X Y Z BA BB BC BD BE BF BG BH BI", "Q R S T U V W X Y Z BA BB BC BD BE BF BG BH BI BJ", "R S T U V W X Y Z BA BB BC BD BE BF BG BH BI BJ BK", "S T U V W X Y Z BA BB BC BD BE BF BG BH BI BJ BK", "T U V W X Y Z BA BB BC BD BE BF BG BH BI BJ BK BL", "U V W X Y Z BA BB BC BD BE BF BG BH BI BJ BK BL BM", "V W X Y Z BA BB BC BD BE BF BG BH BI BJ BK BL BM", "W X Y Z BA BB BC BD BE BF BG BH BI BJ BK BL BM BN", "X Y Z BA BB BC BD BE BF BG BH BI BJ BK BL BM BN BO", "Y Z BA BB BC BD BE BF BG BH BI BJ BK BL BM BN BO", "Z BA BB BC BD BE BF BG BH BI BJ BK BL BM BN BO BP", "BA BB BC BD BE BF BG BH BI BJ BK BL BM BN BO BP BQ", "BB BC BD BE BF BG BH BI BJ BK BL BM BN BO BP BQ BR", "BC BD BE BF BG BH BI BJ BK BL BM BN BO BP BQ BR BS", "BD BE BF BG BH BI BJ BK BL BM BN BO BP BQ BR BS BT", "BE BF BG BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU", "BF BG BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV", "BG BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW", "BH BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW BX", "BI BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW BX BY", "BJ BK BL BM BN BO BP BQ BR BS BT BU BV BW BX BY BZ", "BK BL BM BN BO BP BQ BR BS BT BU BV BW BX BY BZ CA", "BL BM BN BO BP BQ BR BS BT BU BV BW BX BY BZ CA CB", "BM BN BO BP BQ BR BS BT BU BV BW BX BY BZ CA CB CC", "BN BO BP BQ BR BS BT BU BV BW BX BY BZ CA CB CC CD", "BO BP BQ BR BS BT BU BV BW BX BY BZ CA CB CC CD CE", "BP BQ BR BS BT BU BV BW BX BY BZ CA CB CC CD CE CF", "BQ BR BS BT BU BV BW BX BY BZ CA CB CC CD CE CF CG", "BR BS BT BU BV BW BX BY BZ CA CB CC CD CE CF CG CH", "BS BT BU BV BW BX BY BZ CA CB CC CD CE CF CG CH CI", "BT BU BV BW BX BY BZ CA CB CC CD CE CF CG CH CI CJ", "BU BV BW BX BY BZ CA CB CC CD CE CF CG CH CI CJ CK", "BV BW BX BY BZ CA CB CC CD CE CF CG CH CI CJ CK CL", "BW BX BY BZ CA CB CC CD CE CF CG CH CI CJ CK CL CM", "BX BY BZ CA CB CC CD CE CF CG CH CI CJ CK CL CM CN"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 9006443887137061;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> votes = {"AA AB AC AD AE AF AG AH AI AJ AK AL AM AN AO AP", "AO AP AQ AR AS AT AU AV AW AX AY AZ BA BB BC BD", "BC BD BE BF BG BH BI BJ BK BL BM BN BO BP BQ BR", "BQ BR BS BT BU BV BW BX BY BZ CA CB CC CD CE CF", "CE CF CG CH CI CJ CK CL CM CN CO CP CQ CR CS CT", "CS CT CU CV CW CX CY CZ DA DB DC DD DE DF DG DH", "DG DH DI DJ DK DL DM DN DO DP DQ DR DS DT DU DV", "DU DV DW DX DY DZ EA EB EC ED EE EF EG EH EI EJ", "EI EJ EK EL EM EN EO EP EQ ER ES ET EU EV EW EX", "EW EX EY EZ FA FB FC FD FE FF FG FH FI FJ FK FL", "FK FL FM FN FO FP FQ FR FS FT FU FV FW FX FY FZ", "FY FZ GA GB GC GD GE GF GG GH GI GJ GK GL GM GN", "GM GN GO GP GQ GR GS GT GU GV GW GX GY GZ HA HB", "HA HB HC HD HE HF HG HH HI HJ HK HL HM HN HO HP", "HO HP HQ HR HS HT HU HV HW HX HY HZ IA IB IC ID", "IC ID IE IF IG IH II IJ IK IL IM IN IO IP IQ IR", "IQ IR IS IT IU IV IW IX IY IZ JA JB JC JD JE JF", "JE JF JG JH JI JJ JK JL JM JN JO JP JQ JR JS JT", "JS JT JU JV JW JX JY JZ KA KB KC KD KE KF KG KH", "KG KH KI KJ KK KL KM KN KO KP KQ KR KS KT KU KV", "KU KV KW KX KY KZ LA LB LC LD LE LF LG LH LI LJ", "LI LJ LK LL LM LN LO LP LQ LR LS LT LU LV LW LX", "LW LX LY LZ MA MB MC MD ME MF MG MH MI MJ MK ML", "MK ML MM MN MO MP MQ MR MS MT MU MV MW MX MY MZ", "MY MZ NA NB NC ND NE NF NG NH NI NJ NK NL NM NN", "NM NN NO NP NQ NR NS NT NU NV NW NX NY NZ OA OB", "OA OB OC OD OE OF OG OH OI OJ OK OL OM ON OO OP", "OO OP OQ OR OS OT OU OV OW OX OY OZ PA PB PC PD", "PC PD PE PF PG PH PI PJ PK PL PM PN PO PP PQ PR", "PQ PR PS PT PU PV PW PX PY PZ QA QB QC QD QE QF", "QE QF QG QH QI QJ QK QL QM QN QO QP QQ QR QS QT", "QS QT QU QV QW QX QY QZ RA RB RC RD RE RF RG RH", "RG RH RI RJ RK RL RM RN RO RP RQ RR RS RT RU RV", "RU RV RW RX RY RZ SA SB SC SD SE SF SG SH SI SJ", "SI SJ SK SL SM SN SO SP SQ SR SS ST SU SV SW SX", "SW SX SY SZ TA TB TC TD TE TF TG TH TI TJ TK TL", "TK TL TM TN TO TP TQ TR TS TT TU TV TW TX TY TZ", "TY TZ UA UB UC UD UE UF UG UH UI UJ UK UL UM UN", "UM UN UO UP UQ UR US UT UU UV UW UX UY UZ VA VB", "VA VB VC VD VE VF VG VH VI VJ VK VL VM VN VO VP"};
    string website = "MK";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 256;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> votes = {"A B", "C D A", "F D", "B C", "E F", "D E"};
    string website = "C";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> votes = {"A B E", "B C D", "C A", "D A E", "E B"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> votes = {"AA BV BW BX BY BZ CA CB", "AB CC CD CE CF CG CH CI", "AC CJ CK CL CM CN CO CP", "AD CQ CR CS CT CU CV CW", "AE CX CY CZ DA DB DC DD", "AF DE DF DG DH DI DJ DK", "AG DL DM DN DO DP DQ DR", "AH DS DT DU DV DW DX DY", "AI DZ EA EB EC ED EE EF", "AJ EG EH EI EJ EK EL EM", "AK EN EO EP EQ ER ES ET", "AL EU EV EW EX EY EZ FA", "AM FB FC FD FE FF FG FH", "AN FI FJ FK FL FM FN FO", "AO FP FQ FR FS FT FU FV", "AP FW FX FY FZ GA GB GC", "AQ GD GE GF GG GH GI GJ", "AR GK GL GM GN GO GP GQ", "AS GR GS GT GU GV GW GX", "AT GY GZ HA HB HC HD HE", "AU HF HG HH HI HJ HK HL", "AV HM HN HO HP HQ HR HS", "AW HT HU HV HW HX HY HZ", "AX IA IB IC ID IE IF IG", "AY IH II IJ IK IL IM IN", "AZ IO IP IQ IR IS IT IU", "BA IV IW IX IY IZ JA JB", "BB JC JD JE JF JG JH JI", "BC JJ JK JL JM JN JO JP", "BD JQ JR JS JT JU JV JW", "BE JX JY JZ KA KB KC KD", "BF KE KF KG KH KI KJ KK", "BG KL KM KN KO KP KQ KR", "BH KS KT KU KV KW KX KY", "BI KZ LA LB LC LD LE LF", "BJ LG LH LI LJ LK LL LM", "BK LN LO LP LQ LR LS LT", "BL LU LV LW LX LY LZ MA", "BM MB MC MD ME MF MG MH", "BN MI MJ MK ML MM MN MO", "BO MP MQ MR MS MT MU MV", "BP MW MX MY MZ NA NB NC", "BQ ND NE NF NG NH NI NJ", "BR NK NL NM NN NO NP NQ", "BS NR NS NT NU NV NW NX", "BT NY NZ OA OB OC OD OE", "BU OF OG OH OI OJ OK OL", "BV OM ON OO OP OQ OR OS"};
    string website = "AC";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> votes = {"A B", "B E D", "G H", "I E", "E F J", "F G", "H F", "J"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> votes = {"A B C D E F G H I J K L M N O P Q R S T U V W X Y", "B C D E F G H I J K L M N O P Q R S T U V W X Y Z", "C D E F G H I J K L M N O P Q R S T U V W X Y Z", "D E F G H I J K L M N O P Q R S T U V W X Y Z SO", "E F G H I J K L M N O P Q R S T U V W X Y Z AA", "F G H I J K L M N O P Q R S T U V W X Y Z FT OV", "G H I J K L M N O P Q R S T U V W X Y Z ZB KD JA", "H I J K L M N O P Q R S T U V W X Y Z OS AC OD", "I J K L M N O P Q R S T U V W X Y Z UO LS BA UM", "J K L M N O P Q R S T U V W X Y Z CB CY WD IQ NM", "K L M N O P Q R S T U V W X Y Z KQ VQ VC IR BO", "L M N O P Q R S T U V W X Y Z VS KU BP YJ FW QH", "M N O P Q R S T U V W X Y Z UL VC HK VV HT PR UD", "N O P Q R S T U V W X Y Z NT MU SV DK NC GN HP", "O P Q R S T U V W X Y Z JU YI WM AN DC KV EO FR", "P Q R S T U V W X Y Z SX PR YH MU RZ QD OS GE KM", "Q R S T U V W X Y Z YK ZP SB WZ DJ YJ VU SM PL", "R S T U V W X Y Z IU TW KF XY GG LG CE FS RE PP", "S T U V W X Y Z EF WO NR LX DU RY LR GC VN MX LJ", "T U V W X Y Z UD IY VU BQ GB LR AT VM WG UH WM", "U V W X Y Z OK BZ DE SS PZ LY PG XV UL AW UY UX", "V W X Y Z ER GM AT QB XM BH DH SQ LX WC ZX IC CC", "W X Y Z IO RV XO GW OU JQ LG GQ XZ BG YH ML MM", "X Y Z IY OX EN BX HE LH FW MA AT FZ NP WR TG JP", "Y Z BO BA VY CC MO GC HB WX CR QA GV WM TQ LA JO", "Z Y JF FW LX SN GH RA GX CB TE SR AL ZT VW XO UY", "PY LP EP ZL LM QP KH RB LG QQ BO YR ZD ZQ CK XK", "GZ JG XG KF DA BH IG WI DL GS WN ZL NF LP JM UP", "SX JK HD VU TJ CI BQ FO MW YF ZO FK NP SI DN WC", "TW IQ GA AW TI AO NC ZA SY TN FM ZM CZ YB HS ON", "YT BY RK FD HZ QT KQ QL VW IK SM SH SL JV QW TH", "SV SN KN SP AA ER WF VN UD AG TM KJ ZT OB BO DG", "YL EW VA NX IE WT TI BY XL VU CD OP OW KV KC RM", "YY YX XF ZW BX ZZ ST QC QR EO DL VB PI ME BT CJ", "JD OJ PE BE AN KA EZ LX LY AP DV JZ GC AA EY IH", "DD OA LP EY QM JX ZY DZ PH NM KL OI FE QJ HC EP", "SO FI FT GS HV FE BH OO DP QU AU HJ TK ZD KA FX", "VN KP GC LO FU VD CA VF PH VY VL PX VT YF NQ PN", "WD SF GO KQ ZG NH VW LK TK MO SZ BT HG WL EV RY", "TH SN BF OR RP YL NY UR BM CB CD AV VH AA ZF VE", "AE AJ FQ YJ BA BV MB CA KY TF BZ KT NY KA ON WY", "KN OK JI IZ TS WE CE WR ED VR NW HC OU II DF DN", "IX ZF QA CI QI ZY NN PW DG WP KI QC GR VW UI CX", "UE OG WR UM PD VV QB MT KS ZY DQ OE RW OM OD GP", "AZ PB JL SW SY JN FW JP QM ZA NI HH WA XS UD PX", "EG DA VY CX ZD II YB VA XD QU XT AC NO FI SR SI", "ZN DZ JX SG KN AH SC BX RS OC MG IS NV EF ML IA", "MB XH PK AW CY QO VE PP DW FF VZ BF JS PH VK RS", "ZF DA TM MJ YC TK IG KM JV CH LZ NI GS LJ NK ER", "IA GC IS SC IM NB SY AW JG TF PE PP KD EL KR SM"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 391655800;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> votes = {"AA AAA AAB AAC AAD AAE", "BA BAA BAB BAC BAD BAE", "CA CAA CAB CAC CAD CAE", "DA DAA DAB DAC DAD DAE", "EA EAA EAB EAC EAD EAE", "FA FAA FAB FAC FAD FAE", "GA GAA GAB GAC GAD GAE", "HA HAA HAB HAC HAD HAE", "IA IAA IAB IAC IAD IAE", "JA JAA JAB JAC JAD JAE", "KA KAA KAB KAC KAD KAE", "LA LAA LAB LAC LAD LAE", "MA MAA MAB MAC MAD MAE", "NA NAA NAB NAC NAD NAE", "OA OAA OAB OAC OAD OAE", "PA PAA PAB PAC PAD PAE", "QA QAA QAB QAC QAD QAE", "RA RAA RAB RAC RAD RAE", "SA SAA SAB SAC SAD SAE", "TA TAA TAB TAC TAD TAE", "UA UAA UAB UAC UAD UAE", "VA VAA VAB VAC VAD VAE", "WA WAA WAB WAC WAD WAE", "XA XAA XAB XAC XAD XAE", "YA YAA YAB YAC YAD YAE", "ZA ZAA ZAB ZAC ZAD ZAE", "AB ABA ABB ABC ABD ABE", "BB BBA BBB BBC BBD BBE", "CB CBA CBB CBC CBD CBE", "DB DBA DBB DBC DBD DBE", "EB EBA EBB EBC EBD EBE", "FB FBA FBB FBC FBD FBE", "GB GBA GBB GBC GBD GBE", "HB HBA HBB HBC HBD HBE", "IB IBA IBB IBC IBD IBE", "JB JBA JBB JBC JBD JBE", "KB KBA KBB KBC KBD KBE", "LB LBA LBB LBC LBD LBE", "MB MBA MBB MBC MBD MBE", "NB NBA NBB NBC NBD NBE", "OB OBA OBB OBC OBD OBE", "PB PBA PBB PBC PBD PBE", "QB QBA QBB QBC QBD QBE", "RB RBA RBB RBC RBD RBE", "SB SBA SBB SBC SBD SBE", "TB TBA TBB TBC TBD TBE", "UB UBA UBB UBC UBD UBE", "VB VBA VBB VBC VBD VBE", "WB WBA WBB WBC WBD WBE", "WBA AA"};
    string website = "WBA";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> votes = {"A B C", "C A B", "B A C", "D E F", "E F D", "F E D", "G H I C F", "H G I", "I G H"};
    string website = "H";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> votes = {"CB BC BA AB", "CD BC BA AB", "DC BC BA AB", "DE DC CD CB", "ED DC CD CB", "EF DC CD CB", "FE EF ED DE", "FG EF ED DE", "GF EF ED DE", "GH GF FG FE", "HG GF FG FE", "HI GF FG FE", "IH HI HG GH", "IJ HI HG GH", "JI HI HG GH", "JK JI IJ IH", "KJ JI IJ IH", "KL JI IJ IH", "LK KL KJ JK", "LM KL KJ JK", "ML KL KJ JK", "MN ML LM LK", "NM ML LM LK", "NO ML LM LK", "ON GH HG HI IH IJ JI JK KJ KL LK LM ML MN NM NO", "OP HG HI IH IJ JI JK KJ KL LK LM ML MN NM NO ON", "PO HI IH IJ JI JK KJ KL LK LM ML MN NM NO ON OP", "PQ IH IJ JI JK KJ KL LK LM ML MN NM NO ON OP PO", "QP IJ JI JK KJ KL LK LM ML MN NM NO ON OP PO PQ", "QR JI JK KJ KL LK LM ML MN NM NO ON OP PO PQ QP", "RQ JK KJ KL LK LM ML MN NM NO ON OP PO PQ QP QR", "RS KJ KL LK LM ML MN NM NO ON OP PO PQ QP QR RQ", "SR KL LK LM ML MN NM NO ON OP PO PQ QP QR RQ RS", "ST LK LM ML MN NM NO ON OP PO PQ QP QR RQ RS SR", "TS LM ML MN NM NO ON OP PO PQ QP QR RQ RS SR ST", "TU ML MN NM NO ON OP PO PQ QP QR RQ RS SR ST TS", "UT MN NM NO ON OP PO PQ QP QR RQ RS SR ST TS TU", "UV NM NO ON OP PO PQ QP QR RQ RS SR ST TS TU UT", "VU NO ON OP PO PQ QP QR RQ RS SR ST TS TU UT UV", "VW ON OP PO PQ QP QR RQ RS SR ST TS TU UT UV VU", "WV OP PO PQ QP QR RQ RS SR ST TS TU UT UV VU VW", "WX PO PQ QP QR RQ RS SR ST TS TU UT UV VU VW WV", "XW PQ QP QR RQ RS SR ST TS TU UT UV VU VW WV WX", "XY QP QR RQ RS SR ST TS TU UT UV VU VW WV WX XW", "YX QR RQ RS SR ST TS TU UT UV VU VW WV WX XW XY", "YZ RQ RS SR ST TS TU UT UV VU VW WV WX XW XY YX"};
    string website = "YZ";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 92118727288;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> votes = {"A B C D", "B C D", "C D E"};
    string website = "A";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> votes = {"AA AB AC AD AE AF AG AH AI AJ AK", "AM AN AO AP AQ AR AS AT AU AV", "BG BH BI BJ BK BL BM BN BO BP", "BQ BR BS BT BU BV BW BX BY BZ", "AW AX AY AZ BA BB BC BD BE BF", "ASD ASDF GEW GEQR HTEQ AW TRW DSA GAFD HT"};
    string website = "AA";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> votes = {"HELLO C E", "C D E", "D C E HELLO", "E C D"};
    string website = "HELLO";
    WebsiteRank* pObj = new WebsiteRank();
    clock_t start = clock();
    long result = pObj->countVotes(votes, website);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10766&pm=6406
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
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
#include <cctype> 
#include <string> 
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <queue> 
#include <stack> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
 
using namespace std; 
 
typedef long long int64; 
typedef unsigned long long uint64; 
#define two(X) (1<<(X)) 
#define twoL(X) (((int64)(1))<<(X)) 
#define contain(S,X) (((S)&two(X))!=0) 
#define containL(S,X) (((S)&twoL(X))!=0) 
const double pi=acos(-1.0); 
const double eps=1e-11; 
template<class T> inline void checkmin(T &a,T b){if(b<a) a=b;} 
template<class T> inline void checkmax(T &a,T b){if(b>a) a=b;} 
template<class T> inline T sqr(T x){return x*x;} 
typedef pair<int,int> ipair; 
 
const int maxsize=1500; 
 
class WebsiteRank 
{ 
public: 
  int n; 
  bool G[maxsize][maxsize],R[maxsize][maxsize]; 
  int deg[maxsize]; 
  int64 ID[maxsize]; 
  map<string,int> M; 
  int index(string s) 
  { 
    if (M.find(s)==M.end()) 
      M[s]=(++n); 
    return M[s]; 
  } 
  int64 countVotes(vector <string> votes, string website) 
  { 
    n=0; 
    M.clear(); 
    int dest=index(website); 
    memset(G,false,sizeof(G)); 
    for (int i=0;i<votes.size();i++) 
    { 
      istringstream sin(votes[i]); 
      string headstr,str; 
      sin>>headstr; 
      for (;sin>>str;G[index(str)][index(headstr)]=true); 
    } 
    for (int i=1;i<=n;i++) G[i][i]=true; 
    memcpy(R,G,sizeof(R)); 
    for (int k=1;k<=n;k++) 
      for (int i=1;i<=n;i++) 
        for (int j=1;j<=n;j++) 
          R[i][j]=R[i][j] || R[i][k] && R[k][j]; 
    for (int i=1;i<=n;i++) 
      for (int j=1;j<=n;j++) 
        if (G[i][j] && R[j][i]) 
          G[i][j]=false; 
    memset(deg,0,sizeof(deg)); 
    for (int i=1;i<=n;i++) 
      for (int j=1;j<=n;j++) 
        if (G[i][j]) 
          deg[j]++; 
    for (int i=1;i<=n;i++) ID[i]=1; 
    for (int step=1;step<=n;step++) 
      for (int i=1;i<=n;i++) if (deg[i]==0) 
      { 
        deg[i]=-1; 
        for (int j=1;j<=n;j++) if (G[i][j]) 
          ID[j]+=ID[i],deg[j]--; 
      } 
    return ID[dest]; 
  } 
};

********************************************************************************
*******************************************************************************/