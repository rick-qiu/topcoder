/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10013
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

class BarbarianInvasion {
public:
    int minimalDetachment(vector<string> countryMap, vector<int> detachmentSize);
};

int BarbarianInvasion::minimalDetachment(vector<string> countryMap, vector<int> detachmentSize) {
    int ret;
    return ret;
}


int test0() {
    vector<string> countryMap = {"ABA", "A*A", "AAA"};
    vector<int> detachmentSize = {1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> countryMap = {"CCCC", "-BAC", "-*AC", "--AC"};
    vector<int> detachmentSize = {5, 20, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> countryMap = {"A----A", "-AAAA-", "-AA*A-", "-AAAA-", "A----A"};
    vector<int> detachmentSize = {9, 8, 2, 5, 3, 2, 1, 2, 6, 10, 4, 6, 7, 1, 7, 8, 8, 8, 2, 9, 7, 6, 5, 1, 5, 10};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> countryMap = {"-A-----", "-BCCC*-", "-A-----"};
    vector<int> detachmentSize = {1, 5, 10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
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
    vector<string> countryMap = {"WANNABRUTEFORCEMEHUH", "ASUDQWNHIOCASFIUQISA", "UWQD-ASFFC-AJSQOOWE-", "-----*Y--AVSSFIUQISA", "UWQD-ASFFC-AJSQOOWE-", "JUFDIFD-CHBVISBOOWE-", "WANNABRUTEFORCEMEHUH"};
    vector<int> detachmentSize = {87, 78, 20, 43, 30, 12, 9, 18, 57, 93, 32, 60, 64, 9, 69, 74, 74, 78, 12, 81, 63, 57, 48, 8, 44, 95};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 218;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> countryMap = {"OY-Y", "WEIX", "-*YN", "OJWR"};
    vector<int> detachmentSize = {27, 16, 13, 55, 25, 66, 64, 52, 4, 34, 9, 58, 56, 16, 9, 79, 55, 20, 49, 1, 83, 28, 1, 31, 13, 81};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> countryMap = {"E-BBCDFCE--CCEC", "D-EC-EA--CCA--A", "B-DFC-BD---E-FE", "----CE--ECABBDD", "-A---BBDFA-ED-E", "FD---B-A-C-*E--", "---BCABDD-BCCBE", "BA---CAABBCCD-E", "-E---CBCCDEC-FE", "FD-BEFEB---C--F"};
    vector<int> detachmentSize = {64, 5, 84, 22, 20, 57, 53, 9, 64, 97, 92, 54, 24, 27, 47, 59, 4, 22, 81, 68, 32, 92, 18, 95, 75, 79};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> countryMap = {"EEJH", "KU-O", "B*YZ", "-BOC"};
    vector<int> detachmentSize = {875, 1042, 1627, 893, 287, 304, 1774, 1607, 1220, 474, 2, 433, 32, 954, 1200, 574, 711, 1238, 1674, 482, 355, 1849, 197, 273, 1285, 516};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 3724;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> countryMap = {"--HPLEDGU-LVXDZ---E-WURCQ-", "-E-DM--L---HFTT--D*-H-SEDS", "P-DJQYN---MM--XYG-HAB-AISA"};
    vector<int> detachmentSize = {6, 6, 31, 77, 89, 97, 39, 53, 57, 67, 36, 92, 47, 46, 84, 4, 38, 98, 94, 44, 78, 40, 3, 72, 100, 52};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 142;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> countryMap = {"IAV-AHSLK-ROWFLXUTMSOU", "MAC-BHGGTOGZ--NAJA-MS-", "-UBYY-V-YNJMGQT-CBTLGU", "KCEJAH-MDXD-AZHPWMXJBD", "F-TFDOBIBTVLCMYK-JXN-D", "DA*RWVQAOLWWVYZXBEACEN", "HIOZCLC-AJGGJPJPZKC-W-", "JNGWVPVUYXWMQM-MTIAIBR", "DS-ASPJODCOSJWF-URQR-L", "XLLQK-IFMOFQUOTZNBO-IF", "AL-V-YXANUFBYB-TPTCJ-S"};
    vector<int> detachmentSize = {2, 1, 1, 3, 1, 3, 7, 4, 2, 6, 4, 8, 6, 7, 7, 9, 6, 8, 5, 9, 7, 5, 4, 7, 4, 1};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> countryMap = {"IAV-AHSLK-R", "OWFL*UTMSOU", "MAC-BHGGTOG", "Z--NAJA-MS-", "-UBYY-V-YNJ"};
    vector<int> detachmentSize = {6, 7, 9, 1, 1, 7, 4, 2, 7, 4, 1, 2, 3, 1, 3, 9, 4, 2, 8, 2, 9, 1, 8, 3, 5, 8};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> countryMap = {"IITPU---DS---C-EA-Z--ZII", "---NAMA--QU--NK-FH-OYN--", "RRA---U--E-D--JGCZ--F--O", "D-R-FYM--PY--YUWS-J--N--", "--DP--VU-X------DW---DAB", "-I---D-X-J-----C---FT--C", "-GM-W--J----BMFTT-X-----", "--OJE-XAL-CNT---HKO---PH", "VJ-W-K--X--SHR--PRN--VU-", "DL---HK-Q---DO--NHZV-Z-J", "BP----D-CV-K-Z--YC--EVF-", "WK--Q-VV-B--T----EE--AO-", "FYG-DAF-U--RE-------F-K-", "-------IH---H-HPP--C-MC-", "LBIS-OK-----KCR-SD-RQA--", "---K-M--S-R------MH-ET--", "N---R*JW-H-X-----N--Y-D-", "K---SA-------A-A---W-H--", "-S-U--LQ----M---VIUYY--J", "-FLQ---J---U-RHOGW-VY---", "-HZ-------Z----VT-MI---D", "---UP---M--R-WP-A--D----", "JV---N--G-S----OR-L-UDQG", "--OK-----U-B-H--------M-"};
    vector<int> detachmentSize = {1100, 815, 1400, 1232, 1592, 792, 984, 321, 579, 592, 438, 392, 1915, 759, 628, 1035, 600, 572, 891, 1676, 1257, 308, 987, 1901, 779, 1327};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> countryMap = {"D-XFCXYWL-RSQA", "O-XD---YGB-USI", "V-VM-PJKB-QVNR", "LW-A-CFPTMTDLB", "TUJ-EWIJ-S-BIQ", "--YTMSETBXPEFI", "HUKPJSJTAGLREU", "BRUE--RJ---P-Z", "HUIHFNJNN--BBW", "IBQC-XL-STNUHR", "JDV-MSQ---PZIJ", "U-A-WFZ-IHIO-U", "KSA-PHG-RZJ-WW", "NMGHIMNK-BKYTS", "CE--BDNHMFZIIJ", "Z-CSHPB-EOAU-M", "FYKQI--ABBNCOY", "VZFG-U-TI-J---", "-PL-KSRPF-ZILQ", "UPIXBXBP--UO--", "SJW--RCAXY-*WC", "PGQXDORP-VBMSY", "FJ-BYS--PXT-DP", "E-RHYGGS-SKKFS", "SROG----Z-T-NH", "X-M-D-RLS----I"};
    vector<int> detachmentSize = {1135, 1407, 1499, 1, 201, 384, 1604, 1940, 840, 400, 1902, 1001, 1827, 918, 344, 1393, 1726, 742, 1616, 1953, 1137, 878, 1317, 1082, 167, 1219};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 3488;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> countryMap = {"GLRLU--IV-XHZM-OO-TDDH-BLBWNA-", "D-QHI-MB-TQFTN--JIP-F-IKOCSIXK", "-ZFGG-EWKUHWWPM-YKWH-FWH-O-LXK", "PLWPETBSXHDL-FOACXDFNWAQOSTUX-", "YP-YRQ-KBFL----FQRAPTUQQM-RK-B", "CIC-JDBYYK--YK-BGY-K-QQ-B--WYU", "H-F-WTW-HUJDUDRG-Y-JYVRSOJGKDU", "-TLG--TAOLWMM-Q-XK--ABD-XMD-PR", "B-SLQHCFZF-LZTAQ-Q-WCKK-R-BA-N", "S-DEZWVOHKRV-QVAQFJHYJPWERVXCD", "-T--EC--LKW-C-AZA-PS--WG-NO-SG", "D--OF-HKASLYRFII*VYR-ZXDNHCZTC", "D-YA--HACN-OQ-GLR-QMDARUFAJETF"};
    vector<int> detachmentSize = {628, 1628, 1429, 495, 540, 1570, 805, 629, 297, 377, 513, 87, 824, 771, 49, 1806, 228, 1719, 112, 1377, 1699, 1414, 1545, 245, 565, 1768};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 3209;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> countryMap = {"BVNFA-MCQL-QM-UT-ZTYKK-GWB", "-GDNLHKEWNXRLSIHX-W-CNCB-I", "CQLVWMQRTPS-SLNEGE-JJRDTZK", "BD-BIQ-CUNWAF-P-CXWCFZHPBT", "EBTQTQDZHL-OQJOK-TIBO-R--E", "DTADQ-ZB---UBEFFUH-USW--FF", "OSDDTPQVKESGWA-WSNMBQK-OJB", "P---OYMRKP-HVSZCS-R-VTZNFM", "WKDGTO-ZJUBASJWGUATUK--B-L", "ZGXQXHM-ZC-OG--NE-QFY--COJ", "ZBBXKBPGCHIW-HS-UPVX-ND-QQ", "B-XB-ECDUFQGYIEAUCCQ-CVZ-T", "YO-NNJHVTVJCTN-FZDL-JHQRHZ", "QDZ-T-NIAR-B-HS-OQ-YXWLUUS", "YCIGRXIFYJ--AQGJMRPPMOVSRH", "-U-PRFKQ-LMOBCY-XAFKNYC-WD", "L-IE--X-ISYZEJNW--OPMC*GM-", "-WRFDP-ULOCGE--NZO-HZLCLOO", "GNYLZ-M-X-QU-NA-HVFEEOOTCT", "J-VASYARG--HCWA--RZHKGCINS", "P-WCD-OPF-IYC-COB-JCZ-OL-I"};
    vector<int> detachmentSize = {11, 84, 88, 35, 46, 7, 3, 58, 33, 61, 25, 68, 69, 39, 35, 41, 21, 24, 21, 1, 94, 56, 93, 39, 17, 22};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 267;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> countryMap = {"D-XFCXYWL-RSQAO-XD---YGB-USIV-VM-PJKB-QVNRLW-A-CFP", "TMTDLBTUJ-EWIJ-S-BIQ--Y*MSETBXPEFIHUKPJSJTAGLREUBR", "UE--RJ---P-ZHUIHFNJNN--BBWIBQC-XL-STNUHRJDV-MSQ---"};
    vector<int> detachmentSize = {490, 595, 1250, 1840, 5, 1755, 1334, 324, 1527, 1811, 535, 482, 497, 906, 1594, 1248, 650, 1135, 35, 1748, 910, 454, 372, 1659, 1080, 1520};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 2767;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> countryMap = {"RG-T-B-PIMAFEITWFJFO-LE--LXDMUVCG-GY-YILFRXEISNFDX", "LSA-BLHR---L-QVHCDPXBIJWZTLWPBK-ZXDK*MFM-IAQGL--BV", "CI-V---N-E-XAZC-CVX-KDYK-BWPQ-JBFHV--UNVLO-NBUXE-O"};
    vector<int> detachmentSize = {209, 1003, 1553, 1857, 1329, 1785, 613, 1862, 983, 1915, 121, 771, 19, 599, 551, 567, 1020, 1159, 1167, 391, 341, 589, 201, 1279, 486, 75};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 140;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> countryMap = {"Q-HO----CW---U-N--WGES-O---F--T", "HZ--N---BLDY--LA-DIYZ-------CL-", "ZN-TG-G-SZPQUNCE--Q--W-V-KIM-F-", "----WCL--B-K-RF--MB-BPBEN-CW--K", "---B-----C-G-RMQX---K----P--QPV", "-X-S-UDEOD---A--E-Z-L-U-HLU---B", "---ST---V-Q-B-XV--YY-----TK-VT-", "AZ----LBI-KX----G-AEWJK-UA-Q---", "---JW-NA---F-WNOX-T-LLONO--X-M-", "--NOAOY----RJB--------J--O---Y-", "U-DIODV-MKGT--K-I-S---D-FBJ--IZ", "K-CGC-Y----OJN---M---B--LL-L-M-", "BZJ--PU-M--B-T---Q---T--XAH-L--", "K------W--CFB-V--C-O-RI-----M-Z", "EK-HU------XK-EQS----H-EV--KHNQ", "W----LKJ--W-V---U---Q--N-LNBDWG", "-BR-S-CY-G-YQOPFPB--C------THY-", "NL-IKHG---BRGFRNC-FKI---W--KJ-F", "--W--EBFD*AX--Y-S---ODO-AY-PP-F", "-EG---MW--TF-ZW-Z--CI-R----EV--", "--DAB--CSAOW-----PA--P--YK----Q", "JY-NS-W-V--L-HS-KE-N-----ROEO--", "M--U-I---D-REALW-N-----OOG--S-F", "---J---M--JAA-N----Q--LE---BQOU", "-KSM-N---Y-Y--FMH-RXC-OQP-GSUO-", "EGCHK--TINXB--X-HWE-FUFA--Z-A--", "-MD-HY----AQO-N--O-GW--O----N-O", "-W-U-D--D---SQP---RH-G----MF--B", "-ONC--E---XX-J--E-IXO-NG-B-H-F-", "ZBAF-HMM--KHTCL-V-G-S-P-MWS--FF", "-WQ-FIR--KUWR-B-X-Z---X-ZF-SV--"};
    vector<int> detachmentSize = {547, 1558, 450, 1007, 1824, 709, 585, 734, 202, 758, 1098, 1146, 1845, 373, 283, 1768, 1384, 1542, 1468, 385, 1442, 244, 898, 1313, 1928, 1911};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 898;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> countryMap = {"QGUPWH-BJZVZTQF-OG-M-T-YRWT-KDUB-", "O-QC-OV--IQ-TOP-NQSBQF-XBPX-OWMM-", "CYCLRH-R--JH-JLM--TZ-FWJZT-R-WN-Z", "FI----VZ-QSKBCKUJCIYDPVECSFYZ-JYQ", "I-GVWUH-YA-OGI-H-AYYPFVEEBSXQCJ-E", "D---QOFWOUEHDGQH-DHMIBTFWJS-V-OBX", "-P-WCZKFE-FZOZUT-ZLAJSINH-SAO--ID", "---HJF--OM-WZLGW--PQUZQASZIGQC-Y-", "-MR-ZOI--K-O--K*CHQ-NXNNPHBR-YSNC", "-DO-NJI---O-VZG-RXCZVE-MJ-GZKAQ-J", "UKOQCG----EWZC-GPN-Q-NI-CNRW-MX-W", "X-SQSDRPUOAY-G-MN-RCD-TUMM--Z-D-N", "GMP-YJPEMKRRVJU-SYICK-YDZMB-PIHK-", "--OVAC-ZHGKRDCBAJXMBE-KHLB-RBB-J-", "NTOB--F-QJLFUMWH--BEDDYEU-ZZ-FBTX", "W-ZYB-VYCOULE-JIE-HHAGXAFFBUA-Y-H", "LJWE--KT-SCIUMLG-P--HNKNTFEA-DD-X", "PLEA-DL-FNBDC-ZC-R-JQAJ-ODOGQH-XU", "RGITY-D-RA-K-V-HGMAZNZP--S-MZ-OG-", "OKBXOZZQ-EYHA-EMNFV-CJATMET--TFE-", "WPV--GG-TIKB-YIZACG-WYLANWRB-IWJH", "EZWJEQWW-HRYUGVOMTXXORIDD-XZ-KYTJ", "OJMV-VB-LH-XUHGDRSRKUXHUOX-MUP-GS", "IE-TD-N-YOCODPDACQCFO--DNR-ACGDRR", "SIIAY---VR---MK-M-IXUL-QUNQSO-BXK", "-XFJ-CQ--TXY-TFEHYRWFHHYICRVYK-VS", "-XOYRPWWZO-C-F-A----A-GG-MKHG--NE", "H-DWJOET-J-RID--DHPILAMWQ--HORHPD", "ZFJBVYBIHN-GCHEGBOFKDN-SX---LO-GA", "K-PX-AK-AYMMF-NO-EU-SSDB-LH-MDMZQ", "L-XJK-AI-CV-NM-AHOH-DXE--TCD-J-NH", "OSOY-MXW-A-TZN-HILVNUSOZ-LQVOJVSX", "KR--W-GAD-----QLRK-GA--QXGX-FTZQH", "-L-VMHNV--CYCHVEGKIX-JHLRJ--OKEO-", "ZNJI-A-PZZLY-ANLSZCUJMIWK-LXKDD-G", "LW----VNLT--GVQTPP-T-FPWOXL-ESKQX", "HYR-KETVHC--WMFMIYYVTXX-TRLJAHMXK", "JE-WQ-PKBY--NHWICHORJZWJTQUFPUJBO", "DQ-QKQXTY-BLXBDQCKWCPD-PFCTM-RVS-", "CDZLCCWJDX-ZY--ZMSJN-GTB---SHVG-U", "-U--PNUGTL-XM--MOF--NYVR-J-IEAQ-F", "PIWICQB--Z-XDEH-EWXWAOD-QI-EQK---"};
    vector<int> detachmentSize = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
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
    vector<string> countryMap = {"NQKIGPMHXHTQGAZZADWELPOYISJQOAYADXRYWH-MVHHJ", "BIBQP-SWWADNJVCUQMHAMBGPV-PVYOJ-JAYXWGLMRDDE", "EUHZFCOZTFGAEHCNNCIGINOZYKDWOKSNKZBESMKMWP-E", "KAWMLOKLQHSKFCAMQOACNUTBAUKKHLOY-ZTIHE-EGBHN", "VSIMKA-ZUEWBHLYYKNCVRRERRIRT*KWZUXZALDVVD-IN", "PAYCLUYLVBAYLZMOGSOFVIFMJQYGLOFCDQLXYUHGJMLE", "XWZIFBUS-MSGUBJLSVUXBBICHYCLOXCHKBOGLTZIMCXA", "PDOEQHNQEOIEGJXKJDKXCCLBLCJKWTBSVJLHXGPLKITW", "GXOGKUUY-EEMUHUGGAVMWDKQIENHH-RISOOUATNGCGJT", "CTDEQYWIOQQQQBJG-IUNNFMYVRQCFDGYLVNRYEEVWQGW", "ZLMQ-CO-OUTLSWCYJUOBZGBPNYNEEMKSXYDZKZRVCHWX", "ILXHIGVRZWULLUYIM-IVJS-ATKYQDLRBMCUXGMFGMHRN", "NCZOORUJBLHZAVTGCFOSYZOX-ELRQQPDIGIOMPCGOEEI", "ZVMSIJUPSJHVDZEHPPKEBXSWABSRVXCIYTSUF-RTPQGY", "PE-UXMDPUJK-XXTIPKATRBYBSOXAUF-SVJIVJT-VNUWT", "FOKBSUHUQQALWJDRSGYMSBHBTNMBK-XWSNLVDTTJQQVL", "IMWR-MMADLDOEGNOTUEBACPW-QJLRLCADZJBHABLISYU", "TIRUQPYBAC-NCHCYRXDXUEPWPXIDFJHOFKYNKTFIRNGM", "YFQLOBVDMVQTWCVUXBHMCVAJPELTBEURDYMFIQTZQAOC", "BXFTQWYJMPNZACWDKZHAGFPRYWVBTTJOAGGBEUKABJKS", "UD-XSG-VWYGQFDMAEOMIDQFARQBAZZTROTRUV--UYCEX", "PLJGQKIQRHDOJJQUTIOJIJQFPTXFCVBNGMZMOSBGVQRP", "ATR-A-FPRLHKWLUA-ZVZ-WYEQBHPXERBIXCFWJAYQLUH", "IKHUXCFAJYMNITGS-JAELWVSXTGCIHCRVPNAKCXSPUGL", "ZUHBIKAAOYGTAJPYINHFHDBEDNBFMBBLWSLFUUVDSO-A", "WPOSTHATXE-OOAJDKTHIKYMIRJ-YKAJTBWSMEUTZFB-S", "FTDUVW-BMXNIYRHHATKVTZDLQOAEYZ-XYBIKPNZ-EGVH", "FZD-XR-YYKNCLKNSXERUMBORHKCUCBEEMULJWSSKBTWM", "O-QAEBG-KQERC-HJFETRMGMFJIVSIEHZMGYBSFVNVJBT", "LAQGGGBNBUUZBEMWAKRJTTOHLICUNALASUEZBUQQHCSQ", "S-ISTZFTENKRSWRFOJFWZWOWASMBRTXQMSKMFJGCMSNG", "HBXDFNBATFFJJBWLABRHO-MMAIUYPISDKBAMCCEPSMML", "GYSCQAAXHYCATIOHGTBVHXXMNBJCOLXGHWZBMCVEUNIO", "BRORWGZQ-EPDN-VUEEKGNOIIFNPLLEVYGPHOSIWDMHWQ", "FVDPRXKKOTVFBEPYDTAKCWVBQVBOZKNMXQR-KYTJFWGH", "NFGDRUOAWUGGDHZ-KTTGUE-CO-LZLVEE-HGFGZDNKMRI", "XZOWBWDFAIEWZEY-TNALLFMESSNENELCVRBM-LYCIUTZ", "QR-TYBCQSLNUUTTKQWRBRYHIRUTFDEVYNTHSYTLIBOLC", "SDEAMQAX-NFOIIBZSPB-WSDXNZHQALBGHXGSXZGEFOMH", "ZHNFULZSCOFGDSUWUVSSSIOWQXWNDJLGXLKKEW-DAGFO", "KHBAKGIMWFENZXAASQTAGZYVPZZPNGYOHUBZZIJXHGJZ"};
    vector<int> detachmentSize = {476, 1594, 1250, 1577, 937, 1569, 1519, 1909, 662, 665, 14, 1215, 1053, 616, 501, 148, 590, 1132, 1477, 1698, 522, 1570, 756, 1544, 69, 1006};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 4836;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> countryMap = {"-IDXLDBDXUYT-XWFT-JYZ--JWAQ--EDNGOSQCTAMQYH--DBC", "QMNUIIHFQAL-XB-FMD-FXG--QCT--JWTIODR--GFDWX-P-AW", "Q-LOM---ZAESP-K-UKYV-YL---IBWGJXYUFAMXJBG----E--", "-GVKS-UL-K-Q--RRMFKOS-ZR-WIK-CNMVP-F-IBEPWFR-CZV", "B-NQS--P-A--DHFADZF-IFNGG-O----EAMJ-RNKX-PLYXNXM", "-TK-JUJ-KRNBRBAV--YORD--JYY-MPC-K-SQ---TWTT-----", "QA---P--KLB--L-----IXPEC-Y---N-DF-X-OGBU-J-M-ZS-", "C-HNJKD--D---NPC-EV---POKWLOKXLSX-NI--IY-UYDZ-WN", "POHO--RNLCPEHNL-Z-ROSJIYEWLC-WH-L-NHBRHVHDRAKORW", "DFASEHCZQU--T--WTPAPU--X-DB-EG-ZQ-M-WWV-EBGBID--", "TW-Y-PDYSOMDHDZP-C-BA---RBFEXIEJRNTW-K-CVMJMWHNJ", "NYIFO--QU-V---R-AP-NIPO-GT---U-H-NEZN-N-WV-HV--B", "-GSTU--WZSFHYWHCL--NZNO----ZM-BEIGMW-D--B-VDNQMO", "-FVAAOU-EF-CUH-HOUDLWHZ-GZO-HRZ-IJQGOV-EX--YHCXA", "IU-TJXAHU-ZGSTZQM-PKSKWN-FJG-MJ-OV-W-S-FHY--TWIS", "SD-BBQUILNH----BDFTG-OL-DK-CG-J--RSW-S--LBI-P--L", "-SB-W----BIL--FDEI-C-GTW-RFF-SCKBQ-B-BP-VAM-J-T-", "ZKVNL--OYTMAZ-D-A-JLLEZEHXHSULBSH-ZB-B-R-KB-MWIB", "KYQU-ROO---PONLAU-DFOW--WWBXR-ZGJZQZ-UKT-UWG--T-", "MIZAQD-IYOASGRXDZXUD-SZ--MKUJQF-ZEJG-U--RWI-VMWH", "-YE-TPMF-KV-UBZ-BVPIB--CZ-DV-F---RWMLG----EWFH-A", "UYQ-TALOWVT-KSTRXAY-DK----TEYYC--XQDTT-LADO-LJWK", "--BK-LH-RJ--HNYKNVKKR---MAH-R-RC-NUMKQH-FA-MXBIL", "ZOM-NJSC-XY--LU--FXN-D---EZ-NA--DRRAQW-CFFMVZTTO", "E-H-MBNUMT--JRHFSRTEHYEKFI-QSYPCKS---W--GLP--SYP", "-J-IUBDGWBL--B-U-NZLHYDMZHNA---V-I-M-GU-ZRW-EJMB", "E-YYYMNX-EPBTTWNT-UH-CVS-CUL-D--U-B-GZ-GZ-U-P-OS", "H--VLRYJA-I-O-ZUMB-GOHO-WSE-RWIOA-BZP--L-H--TRSX", "GXFCE-FS-KDMJC--DXCT-TAG-B-CFQO-AZOUXYVPYE-Q--I-", "EGDUQHL-W-ZBQOX----A--ADY-DIUW--Q-GPW--QEO-UW-UZ", "UEZO--URR-TBXZS-UJ--J-XM-YX-XMEDMTTCPMFHUF-ZRE-Y", "ZQWQ--FRA-ICIYVRFWM-VITKEA-L------S-RH--XC-BMLKA", "HTZ-MW-R-ICDD--ZOTYB-BXLLOQNMGO-NBFIQVLC-I--IES-", "ET-O-Q-S-NUM--GSYW--DZ*RIT-H---YDGQK--O--U-RTX--", "GHM-OZ-JJRID---VKK---X-P--YUR--CJFTTR-B-XAZZ--I-"};
    vector<int> detachmentSize = {46, 60, 77, 35, 17, 57, 40, 1, 92, 3, 34, 39, 90, 7, 35, 59, 30, 60, 21, 42, 56, 89, 90, 26, 51, 63};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 149;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> countryMap = {"NNFE-SBQHSCKRAQXJIPGPBSX-XSQHSYXV", "TBJ-ZTTPEYHAJELMHAJMTMNMDULSRMJGW", "DQ-TIRPVDHYYZYRR-GUB-WDABFOWSTIOE", "ENLXG-TOSZPCKFWIDRAR-CMMTGJCYS-VW", "RYOKT-Q-JYVVFMPBKWFQTUVYXFFGYPJCP", "R-NU--H-FRRPFPPXCZHOEOBUAV-UKHFKL", "-UIRCMIGXKYDDZ-WORDWDMDC--SMYYNKG", "-BLLLILQSARZI-ZNSUAMVNYRT-EA-FDXT", "CATVMLCSDYEUGXO-SSIZYLCNGKVRQEVLG", "-BUKL-KTXFXFLQHAOTZWKMROURPJE-RIM", "LZGDRMSLLTAXEHPNCXHHDGGNQUFEOFSDF", "LPGAGZIWWQQB-WFHW-JLIPDUY*-ZMRJ-F", "FXNISVHBHD--DTHXCKHMLW-QVJUAHRDVG", "UPVUUURQWKEHGEOMKYBMZCSHBR-S-UXDQ", "ZHNOCTFSUPMC-LQFCZ-OUMRYVWOITHNET", "JQKVYKKJ-EMJ-AJYALMQ-UEERGQU-ZIKI", "ISPOWYCHUPEYVWISWSQFCTCF-KTWYXW--", "TZHVFBOOZZH-IXJYJONMYXCVOGG-FPYQQ", "IDXIPJPCEVLXBITNOATCDJHKGFGTOLBHZ", "WHVBHXOXW-OLPKDGFYPPJUY-FNPXNM-NU", "LINJEZOPXGJEJMDTTUNCKLTOXZFAUXYIP", "LRBGMGJMXJVCKPRQQJW-ZKMTJFHSLY-YG", "IZZAWTQL-LDJ-BWGMXRKWBVFCHRCZPD-X", "Z-MTHRTNTCGUYFDSWNN-CLBFGRYZLODA-", "K-P-MOUZEOEZR-ZMZETHHP-YRPH-MYMRQ", "MAFDDURAHERXLT-FU-YTKJAASUEO-SWKI", "ZCL-DJXTKBFVOUBUEDHPDYZYH-KMCVVZU", "-TOQVVK-OCEUHJBKQA-Y-PEMNURFXCIBQ", "WEMR-KBMMRSTJWIVCDISMAZTCNGPVEYUH", "DYJKAXOFXXBQZTFWCFRO-ZXXX-YVBYLZY", "VWGXGBEHV-BTUYUWBIACTJXAKMOGDIJZA", "IQJPLPQD-AO-OSALW-CEJS-NPZKSBYTHX"};
    vector<int> detachmentSize = {2, 1, 2, 2, 1, 1, 1, 1, 2, 2, 1, 1, 1, 2, 2, 2, 1, 1, 2, 2, 2, 2, 1, 2, 1, 1};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> countryMap = {"G-SLFFEKVXPJIJTYNF-IUVT", "QTVNGOEMVEAKMTXMN-NRUQO", "HL-DFNST-WYQNRBKFNIYTKZ", "-FKIMKACKQBJJUWYQUWSGKQ", "I-VPQDVSXWIPUUYSCPESUEZ", "NU-PJUISATQYGVJGJ-ZIUUP", "MPC--ATGHDV-RKSUMNZMLCQ", "GX-Y-OBYAPRO-YSQWPJFEDD", "AYXPRRJ-AOLKVBHIPUUDXXV", "AR*ABAVPPGYWVWTRKSN-TXQ", "U-FFDW-O-OLOBISATAJ-QWK", "VWLU-SZYMMYHEMTFWOEH-HP", "TPCUJ-CWIWTVSDIVXIHDSVS", "V-OEDEEUNCEXSIKNUEBNXUL", "BPWFDNSGJ-CP-EZ-BTAGXVB", "SEXFUQTEAMUEOQTDURMAKFN", "ANTDUXELCOJJJBVOOFOOREN", "JHJEGTLPVATSMWYXAAMRPLW", "J--YX-R-OCSKLGJWGCZNLCO", "TFMM-SFYURFNS-AHUANOLDD", "WPLYMEVORMMHLQOPRADYHCP", "ZRDTZTGBRK-WKBDLJZ-WEMB", "RNYFBSMGWACC-FDZRYRHOHO", "LZJCUCXLCOQEMR-FL-QBTZF", "XWOOSBICHCANGTOCORRMFQT", "DUPIKFFZOAANSPHYCQLSQIM", "ABX-LZPGNQ-SQVPZJAIBJZE", "U--RYYJYNLQE-GFHPHWCYHS", "OFXBRWRBEDLQZVMSOAEKWJ-", "JIVGZHJAYATCLVPI-XPJCP-", "DCURCWRBZ-XRJNTFQ-FZJLZ", "RCMUZH-YLAGVNIEEDAIVI--"};
    vector<int> detachmentSize = {509, 367, 364, 600, 644, 365, 456, 540, 679, 541, 587, 536, 599, 572, 628, 524, 520, 492, 399, 572, 333, 330, 589, 492, 442, 620};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 1858;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> countryMap = {"CXB--SRVLUWCIUMDA-MARATIMNSP", "-XBLZHPH-EH-ZZTVC--DUNHNH-TN", "DZSGHVDNHDM-GLJQX-GKDC-TLZCO", "UXKZJHWVS-KKBKPRJ-IILVCGU-VC", "LOBBCJIIM--BEOEUE-TQ-EN-QCFZ", "MABIE-EQYBOVRHICCVRY-FFPJAVC", "TBBGBWWFGGNDHS----SXGLT-NG-T", "-RD-DSOKKCFKWDCMAKJ-THGFTH-F", "-R-XHKDIY*X-D-PCTL-KDOUYJLOS", "IBO-RODHAXEIQDLHKLLJBDTQFOQ-", "STPCOWL-WFXQJQ-YNMWAA-AA-COR", "GP-AB-MIF-CZFDX-OXN-L-HT-UI-", "MV-PCJT-JRUOD-AFC-SU-OZUIVWT", "CJQTG-PBSBTJGN--LLK-SCEWEHV-", "TPP---WPF-JYATS--IWG-SM----T"};
    vector<int> detachmentSize = {73, 9, 67, 82, 1, 62, 6, 23, 62, 3, 84, 13, 76, 41, 31, 92, 77, 84, 6, 97, 49, 85, 7, 70, 43, 77};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 250;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> countryMap = {"DNMDMEXPITCGLKBQZZJHKEUUIXCXBFDBTNKCT-YSPCNIT", "NKHYSZUPAGPLHKTESRD*THPYLJRWJCJFIVPDQFACV-JWC", "QVQGGMNDVM-HND-GDJYZQOV-REEGFJCKBQZUMJVGDVBN-", "TEHPAMOGQGVI-RBBHWEQQ-PZXWYLYKBNLNPY-NFJTZTCL", "HMZLWRRGLXTTMWT-WHIXBSOYVITNBSKQXZYEQHGJR-ZC-"};
    vector<int> detachmentSize = {734, 856, 779, 15, 338, 33, 34, 357, 468, 653, 205, 192, 388, 587, 994, 786, 841, 192, 384, 601, 691, 800, 390, 810, 820, 928};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 1901;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> countryMap = {"BCVJO-CBYGEDMIGJVVAVD-OZDRLOVSWJRWO", "RQUDHGMDCCTSTORSXRZFPQNLQB-OJSXAXGJ", "-WM--RX-NSGWIDEFK--YH-MLNJNNOMIHZJC", "GEIKUHRKFAUFXZAOTSYQEEBXIFIQAFQXEP-", "OLLCWOMUBYHLB-KFKCRENCUIA-DHDAKYT-L", "K-JJLNANZRUYNIXAMRIAE-XJNGAAHLOEEWX", "IBPENZVNIWYLUSQZK-WEETZ--DMCFBU--NK", "BLOVZGWGNDYMIW-TQYKYDPMPTXLTQQP-BWK", "SC-WTIFJK-OMUGRZ-WKBWHGIRZVERMAVFMN", "NICKLY-KEV-NTSISMGEGA-TXBOKWADOZBIL", "LVSZNAEDGBFIBZNMWCS-MLLWFJ-YVSEKL-H", "PKICQ--*JVUCOZDREBTF--Z-CJIUFAQ-O-S", "HYCWO-NUKNQWNILNDEKSNGENOPZDBGLPYGA", "JNBWTTDZJ--LPBYHFRWFYYCCISEBNBL-ZIE", "--PMA-VZGGQ-VMVCTOSL--ZBKXZ-WSZGFXS", "DHIAPHRXJQDZDJNOPFLSHGLXKHHJXYE-HEE", "JBWZWWF-QUJMLJRSM-NUCCAMV-TOJZP-EQM", "UB-CLVRYSKBFSCBDUCBXNQEN-VFPJPDIGJZ", "HH-NS-CAOUROZDYDLPTINZDKXYQIRHMEMMI", "XHOKYFICBZOHMJF-BKWQZIEDFJAOFUWJGOF", "REOYAXGGPIDQLZUGWCHNVMNEGUONFUXBTF-", "SP-LZZDWUUHZLJHHDDAB-OCTMCMFCZXNQBK", "---RCHQSJG-WGTZWQOIBXGBXKHRCDILLPYF", "UFSB-XW-TH-XOV-WTUNHBBY-APFT-EGHZID", "FTB-MCVIYPJUFF-I-TQVOIMJYN-XC-NFZMW", "AWYH-ER-MJFBRQPKHQLGTIDQDSWYRRLBTCH", "OXXU-TUETSGZM-NSXLZ--IASFAXUSYSFBBW", "XIVNEWJSD--PQUTCSQ-DQHSG-V-OOFDDLNN"};
    vector<int> detachmentSize = {1699, 7016, 7998, 9899, 5584, 3210, 3518, 3865, 8214, 3280, 7769, 1220, 7107, 2318, 8719, 2604, 734, 828, 7331, 9709, 2890, 6216, 4365, 1780, 5867, 4190};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 16069;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> countryMap = {"PHQGHUMEAYLNLFDXFIRCVSCXGGBWKFNQDUXWFNFOZVSRTK", "JPREPGGXRPNRVYSTMWCYSYYCQPEVIKEFFMZNIMKKASVWSR", "ENZKYCXFXTLSGYPSFADPOOEFXZBCOEJUVPVABOYGPOEYLF", "PBNPLJVRVIPYAMYEHWQNQRQPMXUJJLOOVAOWUXWHMSNCBX", "COKSFZKVATXDKNLYJYHFIXJSWNKKUFNUXXZRZBMNMGQOOK", "ETLYHNKOAUGZQRCDDIUTEIOJWAYYZPVSCMPSAJLFVGUBFA", "AOVLZYLNTRKDCPWSRTESJWHDIZCOBZCNFWLQIJTVDWVXHR", "CBLDVGYLWGBUSBMBORXTLHCSMPXOHGMGNKEUFDXOTOGBGX", "PEYANFETCUKEPZSHKLJUGGGEKJDQZJENPEVQGXIEPJSRDZ", "JAZUJLLCHHBFQMKIMWZOBIWYBXDUUNFSKSRSRTEKMQDCYZ", "JEEUHMSRQCOZIJIPFIONEEDDPSZRNAVYMMTATBDZQSOEMU", "VNPPPSUACBAZUXMHECTHLEGRPUNKDMBPPWEQTGJOPARMOW", "ZDQYOXYTJBBHAWDYDCPRJBXPHOOHPKWQYUHRQZHNBNFUVQ", "NQQLRZJPXIOGVLIEXDZUZOSRKRUSVOJBRZMWZPOWKJILEF", "RAAMDIGPNPUUHGXPQNJWJMWAXXMNSNHHLQQRZUDLTFZOTC", "JTNZXUGLSDSMZCNOCKVFAJFRMXOTHOWKBJZWUCWLJFRIMP", "MYHCHZRIWKBARXBGFCBCEYHJUGIXWTBVTREHBBCPXIFBXV", "FBCGKCFQCKCOTZGKUBMJRMBSZTSSHFROEFWSJRXJHGUZYU", "PZWWEIQURPIXIQFLDUUVEOOWQCUDHNEFNJHAIMUCZFSKUI", "DUBURISWTBRECUYKABFCVKDZEZTOIDUKUHJZEFCZZZBFKQ", "DPQZIKFOBUCDHTHXDJGKJELRLPAXAMCEROSWITDPTPCCLI", "FKELJYTIHRCQAYBNEFXNXVGZEDYYHNGYCDRUDMPHMECKOT", "RWOSPOFGHFOZQVLQFXWWKMFXDYYGMDCASZSGOVSODKJGHC", "WMBMXRMHUYFYQGAJQKCKLZNAYXQKQOYZWMYUBZAZCPKHKT", "KYDZIVCUYPURFMBISGEKYRGZVXDHPOAMVAFYRARXSVKHTQ", "DIHERSIGBHZJZUJXMMYSPNARAEWKEGJCCVHHRJVBJTSQDJ", "OOTGPKNFPFYCGFIEOWQRWWWPZSQMETOGEPSPXNVJIUPALY", "YNMKMNUVKLHSECDWRACGFMZKGIPDFODKJMJQWIQPUOQHIM", "VFVUZWYVIJGFULLKJDUHSJAFBTLKMFQRMYJFJNHHSSQCTY", "DTEAMDCJBPRHTNEGYIWXGCJWLGRSMEAEARWTVJSJBAOIOJ", "LWHYPNVRUIHOSWKIFYGTYDHACWYHSGEWZMTGONZLTJHGAU", "HNIHREQGJFWKJSMTPJHAEFQZAAULDRCHJCCDYRFVVRIVUY", "EEGFIVDRCYGURQDREDAKUBNFGUPROQYLOBCWQXKZMAUSJG", "MHCMHGDNMPHNQKAMHURKTRFFACLVGRZKKLDACLLTEOJOMO", "NXRQYJZGINRNNZWACXXAEDRWUDXZRFUSEWJTBOXVYNFHKS", "TCENAUMNDDXFDMVZCAUTDCCKXAAYDZSXTTOBBGQNGVVPJG", "OJOGLMKXGBFCPYPCKQCHBDDZWRXBZMQRLXVOBTWHXGINFG", "FRCCLMZNMJUGWWBSQFCIHUBSJOLLMSQSGHMCPHELSOTFLB", "GSFNPCUZSRUPCHYNVZHCPQUGRIWNIQXDFJPWPXFBLKPNPE", "ELFJMTKUQPZOMWNLMBUPMKTLPTNDMPDS*DSGVFPENEMWBO", "RIFSUQHCESKMKHSSMVNONWAFXWHGBIBABVQOPQFOVIUSSQ", "FQWEHTXDZUJTLNTXMRJXXWTLGGKYTBIOLYDNILQADOJSKK", "VFXAHHJMBOCLJARINTDWCLDVDXROPBYJZWYYOJUOTHWMLV", "RGLFZDZDBTUBXUOFFVNCRSWSAZNMOIJOIVVGOBQPNCKWVN", "HKEBMTDHVYGKJISUXHATMUUDQBHMKNHFXAXQXKJLZZQTSJ", "FAEEDFUUJKOLXJOQKDVFEPVLHVHRWTFDUKXFFJPSSWYXLI", "JJHEVRYXOZBAFPFMOWGRGONUATDQLAHYGGYLJDDJHMLTED", "ZLODSRKEUTGTNKNTARJKPXINOVGZDTHUNWOOXVJJMPSVKN"};
    vector<int> detachmentSize = {30338, 21641, 23258, 19047, 2352, 9658, 479, 25302, 32683, 18990, 10002, 15568, 4422, 16895, 6135, 18008, 12361, 16742, 22194, 23699, 23188, 20178, 4042, 31357, 23941, 1847};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 72540;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> countryMap = {"FZJDGAUGCXDYJPKPWBYIFLCSFE-ALIYJTAEEWXLMH-EECIUOGT", "DEWNKFHYANSQKXPMQZCFBQMMTGKNOOGSJUFXSJBEIVIHCDGYPS", "WVJUJUMQ-ALEKUKLAHCXNJL-UXURBRVEXZIGBNOCIQLTVXURT-", "STBXPGYKAMVXVSFWFIIYNQEX-VGNQUOPQ-KDMNUNHLGTYAZQHD", "BIAAJEWVATVYCWRVYQBVDZOUQFUDS-EAIVANNABNGNBOHFFRPE", "JCRXCLKRDQOKYDLFV-NRBNHNQZ-RIGVVALTSOVYXJWPUKZMNSP", "KMTZOCGLKDQXBIU-GHAWQBFQOHLKCCVBUPDS-APJBXWNBX-CFP", "LSBVJLENTPUWRYPIRDSHLCWPQZASMFIV-USYZBPTHEESYSUUZX", "TPYOWCAQQCTOJTAJBXCJAQDGXQEHDDIQNCY-SYGWXSCTZTYJCA", "R-MUDOJOTULJTDLYKYAYZVJPC-WFBHZFAQLWMOXLRHNGIDDVSM", "MDPGPJBIXSTKJPGQFVTTEQWSMJVI-KFPBSDUO-XYZRSHEEPCVH", "XIICVGREJEDHNMBFKLYTOGOWFNBNMOMBJKCPBTWE-ZOYVSKEDU", "W-HKYGHMRBGUPDDPBJUHRBLUDEPQRL-OHOQCAHBYGXN-BPMCVH", "DVDRMJSTCRDVYYNVDLCG-BASHAFTNYZLWUOWYHLTFBILEGSCRE", "WHTBZEIVLTUOTTZEENMVWYOMV-XTCYWLAXWNATDLBYBYEKVIRL", "CXLYWLPCSQDXQOAKVHUOLGPQUBROZFDOQUDXYBPIEZBVWQMHQE", "HUNGPVKLH-VNLIIAQPVUOZJHAMMKRIWSHWZMBVRGJWZCLSPAXU", "STJW-VDOLAELVFCT-DMNRUK-MMYSOBFRKYSQL-KSAOMOOVTEEJ", "-WXZYWACCTGXVSDYIPGVJIMYODACGDYWGSVTRRDIGBFBHFOT-W", "ESGDDUPGOHIILBKEOCXGEHUSHGJOMUOPP-IYRPMWTGHD-KVTQW", "HRWGGLAHAPUBEYBLKLSHLSVIAVQHEMABNCJIONH-EVQMNMSSHG", "IPSHCIJGYBJBSQYKYPFMKFXSQQIRSUTADGSTUARVOGNRSAIKBP", "RXHQ-SBTAPVAFIRJXZWTIBRBF-SWUCKNYFTEIXWOTYUZHZIQQN", "CBWDEZNPXSZXY--HDLNVTNMDWWBSSPN-FZSUGDMGQHSABFAGOW", "AFRUYUDVTZYBOFRDREWFUYRRQVS-ILCEOGQFRHJ-PRBMMMOEXU", "PCDVJWFYVTUF-Y-PXLXXLU-DQOBKNEVJFQBETWSSRTHNFLLL-I", "UEGLBFWHRJGQUHTDITMFFPEQQFOLQWMWFXKSWVGHMZK-HXDKNG", "XW-PTRETNZHO-WZFETTMGRW-DDNCRVKFXPZPPROMVITEUFVEYI", "XWSEQGQNLUZFUIBCHJJQNRT-KYLSI-GBCGOVFCXMFPVUHWWNCA", "-YPBTEDZITVDSUGUMJEDHB-JSCBINUKMVBIQANKFXUPPLRPXYO", "EB-GQQIH-*GOGCULYLKRR-VNOIEQMUBMNPYQTLNLGRESALOVZM", "-BAWZPKYTBCQKLLGMRYL-VLWQLLKJ-RCLNJDIGEWZQIEWNWLVF", "VERKOPRHFXAXVEG-RGXNNHMBKNBHGGTKIYGNUGETHJHADIWFCQ", "THNNCCWIUB-MXOQINPY-QQIHWUXLQOQWQBGAWF-PUQYLPKSYMY", "MBFVDMCXSDSWOZ-LHVTAZNXDNUYVDVHFZUIMHRGWLOFCJYDQ-Y", "LVXENCKNDFNLYPWK-QDORYRELPEBFRQGRUIZBCWOFAAWOHBEBG", "IWXHDHIZWKBQVMUHIUDAAMSDEAGZAEKJKQNQHRPPPOTUBJAYBJ", "IFJNLHBRPMBMCUPAGWLLFWUOUOWNMYPACGIKQPGQAXFMRPNTIW", "XNKIIP-FWIVTWZO-CVTPZNXIFBVMUCFGGJPMMWVGXESPDDNHVK", "JJFEGRBGAKTFRVIJWLK-HCERJCNNJTIOQSHCVMBKOADOFR-FIS", "YBKHSGICDWOJGHQLHLBSAFAHGGQKZLZVBVFKXLXOVBNWKAOVQM", "ABQKJAGNPRROMOSH-SYVQKQ-KPBDGIJNAPJWGSG-HREMVLKFQH", "IHZGMYRSWPPCDFFICHBNLHVEVSIKKPPPHEEDGEKSBZP-BOFSZK", "OQIUGONZEQLPUXKFXJKJOBCQOUYHLSOY-GDLNVPUPVTWYFTWGY", "ZI-TCHFRVGKQQFHDLYEAMOHOINMBKCOGBCIVDVMAXRGNPFZLZD", "FKVDJWJXECSTPEDEEBSEXVRQRJNEKTLNQSEXQBLJYWYPHHVZRW", "PRYBVVSEPSUFZPVAVMKCGJF-PNPKODT-TDFIDRLQRTESQODYXE", "UGWQIBULTCPHRSCPRQFDEYMARAJPLWTAAM-OYPERCDEVRUHAZC", "-PNXHZEMTHKHK-XGIP-JGYKPC-RQRRMVYYSCPL-JSIINVBDVCK", "TWDVBHJCZ-LVDTK-ERBAUVPPGEEOMLIZJKCERUPJVXKVGTCUJF"};
    vector<int> detachmentSize = {822496, 680577, 650386, 958034, 932745, 889162, 841205, 718459, 248790, 457773, 632776, 273585, 732705, 437655, 817313, 466741, 504430, 579771, 714292, 741622, 743810, 425257, 740702, 441762, 351650, 526761};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 2263404;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> countryMap = {"WZLFJZMMVQDUHDDXOZPKTFKWQYOFWGHAUKEGNPOEOIFXPSGGFM", "ARQLSYRWYGLPHGPTOMLEYKONZHBDVTMINOPJGMOLSMKBLAWULV", "PTELCRPSVPBQFFJDUYWHMKMDOYDCLRUTOBRGWVWZASWKINSTBL", "VHZZGTGKNUGATXDMEISCEVMSOECKPOCORNWAOIOSXFVQLPRFUH", "PRVXPMYGJZXWLFVCRTMVEIRFMQRQNJCOXEKMHCJJQZAOSNGLKZ", "SKOZNSXAMISAMUWCKTARTKZLAGYOHKEDQCMMKPKLFLVSVKGLUB", "MAKBSNGOQOIFOOUDGBKZTITUVTSWAZLIDUEMMYSMGIEADLVODI", "OKBRVCLWZVDJIJTKUWNNUPPOMCGLDZQJXJWBHQSEKPRKAKOMLZ", "UPOGAXDFHYVEDBBZKLINLTBPRVUJXPCYTPXYPLATHFWHIFNSZT", "HVWDFPTZDDWQICFRHCKTPLJHXNLXKRALYSNPYRARMQIQJEYFBX", "GIPQADYKTNFFSXWWMCRZFWOPQGPLJXEIEFCGTLIEBVFEWLKNEK", "FWOINUCGUYRPCOFEUKJNQBISMNXVPWMADFMJGYRHJJQNXQCMJI", "QYMYXEQSYBIJGYPTXHTZVLEQQQTNLESSPGQTCAFQBCXEIJHWGY", "ZXPLWALOJZMMSPWOIYJIUTZTBTBQLSAPYRRIAWEFYOCYIFUGZP", "IVPQIUDKIDESWKHOMHUSMFVJAFYQONWUQBCVJUYJKBMAPEOZAD", "ARZDNWCHTLKHGGGBMYNCAYXUTCDDSCVURLBWVXWZUTFIYYWCGP", "BJGVOPERIZTYFPDQLZCAOVJETWYLEZXYCFGZVWAMGMCLXMXGTN", "ECANSHMWDHODOEQVORJCADEJEHOHTIYULWDVRQZWRSAGCDHZFN", "JBENOLFMYDYTBCTMTOBIAJCJBIKHPZWBTJHLZYNLXKEHCIXZWE", "HNKVKHCSZCWNTKUKPCCUMJBUFQXFQGSFKRLRRCUYGMNSFFOKMA", "BUUQTALQFKXWPBMJAJPDKOGESINXDHVUHVTABDZLQCEXLXQAGY", "CQHAJOPIKIFWVVKLGJBCLPGGCKUUOYCSQXZTBDYDFVYEWATRGB", "XYCRNESWZDQMIFCBNRLNGYGQEUSUVQRLMNQFGSTUVNTZWQOGJD", "LCQDFRGQPEVWYGJLPEYKFYFWZHMBSQFOKONMTQHNFJSOBEBPCH", "SVXOIADNHYEZGGIOYFUNMAAXVLKDZEDRVVNFUKJHYSQUHKGBTL", "PXGDJDSRAGHPNJXFFXUFFAOEIBXYXWHFXPMCFUUIUGMLWDAUGR", "WNHBVVKZNEIBXYHMUAMRLLTOGKBJVNTYWSNWBMDIJZDBOCPGYW", "KHHZRMJWIXNCRNLLYLRVIJOWHCRXCIOAGISLHIRZSIHREFUMUX", "QQTAAYWQLGCXRFIPYRSWFFAAYBUBODDBLUDBLLOZCQWZCLAVPI", "GFZUAJQZHEXGSFHCSGWIPFZPSWAILYNFJSKQCHETABQYYZAAAN", "NUFGPZMBNPKUEQDACSAIUTSXRWJEYZICYTFPBGLDTDFAPJTPPH", "ZQDSCUUDANETNVAVZKMBEBLETOKYKIMMQPAOKASMNNXQEMHLEJ", "JYBDKTBVEIBAITCXBSLRGEPSKCUJWZGWMVACKOAUSZLIMBIWYI", "BYGTNZSGDZDPACMPBJWFRDLKONAJJIJGCMNSTKSSJJQUIZFRIY", "CLHBKSBITVQSKUEXYZXBNMSKMCUCHONEWFDJJUSAHWKMIHIBWV", "GBSODRDPXOVQFNZMTSISJTHSQVIUFEBZJXCGOHPMRDUGMZJULX", "TBHJKBKCFGWRQRNCMPRGURRVEXFAXGZKYSTBHOJUPHGBNINRIO", "FOGLGACQDKDKBZIXKPGMIWTBYXERTUUUGSLNFBWNECUGQJTZVQ", "VDZYOLQQQBGNUALLHXOHQFEUPXYOJMTPLEQBWVNOHNZSXYESZX", "FMGYVDDAGWQLCDOJYJWIZNVHTHRKOJRRZMVUGWWHTPTHJTUCPB", "TGQKMDJAFHIMYRCEBPABYHOTKZWOAPSUAJCEWSSVXQQEZPCDHL", "PJGMLZKLIMZEHTMDAKYIAQWKSVLEMQTIKNYWVRNUBIYHJQDMCZ", "MXUSRTFAGXHQMIKWCYVWJOPGWPEHJJNQRYMXYYSUGYPOXTHTXU", "MVNHDUQWNGXWGJDERFWVUQLGXZARSWJVHXAPMWANLJWABNVFVB", "ISSLWDPLBSVSELFOGWFDEYECNOZHOPNRNHPSKYTEYFGTVYPDIZ", "ISGLWYVUOIGDUPWMTIPOJKHCUKMCQFRTCALBMDUTKECRSXLYEB", "FOBEMYPKUXVJZIWJDFGTSMLBVLXMPGGBETBOZJABXEJNGOWQCY", "ALCMLKJAUBXUPEXNCFBCQTRUMKBMPKETMQZSQHJEMTRPZSMVDS", "BBUINTSEDOZCITFFFON*FWIXTFBEUWJKXJTMLIOADRSGEKPYWP", "RCNNJBKTGOTSJZFIQKYCWUVXEDKTDADBZSKPMJPVQPWAOIDUIC"};
    vector<int> detachmentSize = {352283, 455464, 536486, 724289, 84527, 808503, 356209, 453116, 197997, 441771, 757162, 461144, 226563, 724850, 931677, 597160, 236048, 29696, 580085, 475995, 985280, 677935, 346009, 663497, 655704, 808385};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 2606325;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> countryMap = {"WZLFJZMMVQDUHDDXOZPKTFKWQYOFWGHAUKEGNPOEOIFXPSGGF", "MARQLSYRWYGLPHGPTOMLEYKONZHBDVTMINOPJGMOLSMKBLAWU", "LVPTELCRPSVPBQFFJDUYWHMKMDOYDCLRUTOBRGWVWZASWKINS", "TBLVHZZGTGKNUGATXDMEISCEVMSOECKPOCORNWAOIOSXFVQLP", "RFUHPRVXPMYGJZXWLFVCRTMVEIRFMQRQNJCOXEKMHCJJQZAOS", "NGLKZSKOZNSXAMISAMUWCKTARTKZLAGYOHKEDQCMMKPKLFLVS", "VKGLUBMAKBSNGOQOIFOOUDGBKZTITUVTSWAZLIDUEMMYSMGIE", "ADLVODIOKBRVCLWZVDJIJTKUWNNUPPOMCGLDZQJXJWBHQSEKP", "RKAKOMLZUPOGAXDFHYVEDBBZKLINLTBPRVUJXPCYTPXYPLATH", "FWHIFNSZTHVWDFPTZDDWQICFRHCKTPLJHXNLXKRALYSNPYRAR", "MQIQJEYFBXGIPQADYKTNFFSXWWMCRZFWOPQGPLJXEIEFCGTLI", "EBVFEWLKNEKFWOINUCGUYRPCOFEUKJNQBISMNXVPWMADFMJGY", "RHJJQNXQCMJIQYMYXEQSYBIJGYPTXHTZVLEQQQTNLESSPGQTC", "AFQBCXEIJHWGYZXPLWALOJZMMSPWOIYJIUTZTBTBQLSAPYRRI", "AWEFYOCYIFUGZPIVPQIUDKIDESWKHOMHUSMFVJAFYQONWUQBC", "VJUYJKBMAPEOZADARZDNWCHTLKHGGGBMYNCAYXUTCDDSCVURL", "BWVXWZUTFIYYWCGPBJGVOPERIZTYFPDQLZCAOVJETWYLEZXYC", "FGZVWAMGMCLXMXGTNECANSHMWDHODOEQVORJCADEJEHOHTIYU", "LWDVRQZWRSAGCDHZFNJBENOLFMYDYTBCTMTOBIAJCJBIKHPZW", "BTJHLZYNLXKEHCIXZWEHNKVKHCSZCWNTKUKPCCUMJBUFQXFQG", "SFKRLRRCUYGMNSFFOKMABUUQTALQFKXWPBMJAJPDKOGESINXD", "HVUHVTABDZLQCEXLXQAGYCQHAJOPIKIFWVVKLGJBCLPGGCKUU", "OYCSQXZTBDYDFVYEWATRGBXYCRNESWZDQMIFCBNRLNGYGQEUS", "UVQRLMNQFGSTUVNTZWQOGJDLCQDFRGQPEVWYGJLPEYKFYFWZH", "MBSQFOKONMTQHNFJSOBEBPCHSVXOIADNHYEZGGIOYFUNMAAXV", "LKDZEDRVVNFUKJHYSQUHKGBTLPXGDJDSRAGHPNJXFFXUFFAOE", "IBXYXWHFXPMCFUUIUGMLWDAUGRWNHBVVKZNEIBXYHMUAMRLLT", "OGKBJVNTYWSNWBMDIJZDBOCPGYWKHHZRMJWIXNCRNLLYLRVIJ", "OWHCRXCIOAGISLHIRZSIHREFUMUXQQTAAYWQLGCXRFIPYRSWF", "FAAYBUBODDBLUDBLLOZCQWZCLAVPIGFZUAJQZHEXGSFHCSGWI", "PFZPSWAILYNFJSKQCHETABQYYZAAANNUFGPZMBNPKUEQDACSA", "IUTSXRWJEYZICYTFPBGLDTDFAPJTPPHZQDSCUUDANETNVAVZK", "MBEBLETOKYKIMMQPAOKASMNNXQEMHLEJJYBDKTBVEIBAITCXB", "SLRGEPSKCUJWZGWMVACKOAUSZLIMBIWYIBYGTNZSGDZDPACMP", "BJWFRDLKONAJJIJGCMNSTKSSJJQUIZFRIYCLHBKSBITVQSKUE", "XYZXBNMSKMCUCHONEWFDJJUSAHWKMIHIBWVGBSODRDPXOVQFN", "ZMTSISJTHSQVIUFEBZJXCGOHPMRDUGMZJULXTBHJKBKCFGWRQ", "RNCMPRGURRVEXFAXGZKYSTBHOJUPHGBNINRIOFOGLGACQDKDK", "BZI*KPGMIWTBYXERTUUUGSLNFBWNECUGQJTZVQVDZYOLQQQBG", "NUALLHXOHQFEUPXYOJMTPLEQBWVNOHNZSXYESZXFMGYVDDAGW", "QLCDOJYJWIZNVHTHRKOJRRZMVUGWWHTPTHJTUCPBTGQKMDJAF", "HIMYRCEBPABYHOTKZWOAPSUAJCEWSSVXQQEZPCDHLPJGMLZKL", "IMZEHTMDAKYIAQWKSVLEMQTIKNYWVRNUBIYHJQDMCZMXUSRTF", "AGXHQMIKWCYVWJOPGWPEHJJNQRYMXYYSUGYPOXTHTXUMVNHDU", "QWNGXWGJDERFWVUQLGXZARSWJVHXAPMWANLJWABNVFVBISSLW", "DPLBSVSELFOGWFDEYECNOZHOPNRNHPSKYTEYFGTVYPDIZISGL", "WYVUOIGDUPWMTIPOJKHCUKMCQFRTCALBMDUTKECRSXLYEBFOB", "EMYPKUXVJZIWJDFGTSMLBVLXMPGGBETBOZJABXEJNGOWQCYAL", "CMLKJAUBXUPEXNCFBCQTRUMKBMPKETMQZSQHJEMTRPZSMVDSB"};
    vector<int> detachmentSize = {303715, 496679, 704665, 659116, 172929, 121425, 519021, 912943, 75800, 318752, 706230, 197290, 200411, 188324, 531750, 495838, 236694, 211795, 826579, 303902, 870809, 700068, 202285, 44484, 180465, 761159};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 1179731;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> countryMap = {"X---T---RK-O-NUI----QQYQ--P---G---MH-DQM-DYLH--TY", "YZRD--H-M-NASMLQ-ODLDG---O----F-F-RC--S--MXY-VKSG", "II-X--YSH---H-L-WK----KE----Z----U-H--XL---M-JANL", "----LD-M--YVZXBC---XEPW--X-JF---L-I-NW----L-XW--U", "-LE---XO-AN-NC--UR-AQ-MH-K-U-N-D--R-U-H-NN---VD--", "GY-NY-YIC--Z-BHQGBW--WB-O-BJH-M-NE-FCJ---RZ--MIX-", "BZBN-UA--EREP-QNU-IR--DMDN--CY--H--Z---K----RUC--", "YEU---NJ--EP-U--ZI---A-OX--Z--P-SN-FI-D-VYY-ZW---", "K-XOB--MLSD-P-AQJI--L-A-N-K---M-MR-ACM--TC-YK--G-", "V-Q--BSF--A-B---D-GK---JA--BD---B-O-XGT---P--YJ-A", "-I-PX-ID---Q-RVZW-B-------TSWH-BY-N-MH--OEWJZ---T", "--SDBLC--J-U---BR-Y-NKII----O-EV-GB-M-N-P--C----G", "F-Q----X--IMHW--K---EXN-X-----PSGGH--KY--LR--X--K", "A-J-DE-LYCAE--RA-N--VOFDR-YYS--OTTK-MN---U-ODJI--", "Q-FUKU-UGKJ---VSJFX---V-GKR----GU-FOTW--LN---J-T-", "--K--BCS-XOVK---VL---ZG--GQMS----M-D--S--KJYLRT-P", "O-KOUXVX-K--SX----ROE-G--I---R----C--UZ--IL---Z--", "SNK--VO-K-Z----RZ-LXA-K-AWONV---Y-M-PG--D---R-S--", "W--X--MY--KH-GBK-STNHDD--HW--WP----XS-RVXLJ---N-Y", "P-XTHL---VWZ---EYO-TP-D---ADYTR-OZ----KKJW-WI----", "XNBU-G---E--TE--W----ZHTE-VZ-----VI-OK-PR------R-", "KG-JR--A-UU-U--PK-W-BLJ-T-VF-R-WY--WQW--L--XPM--K", "MM-KYMMZS--K-LIGWJ-S----QH----WLRSH--MAH--I-ST-GZ", "H-RTX-D-E--Z-GFD-NV---G---JU-JIGNQ-ZRWY--B--JI--I", "SM-PWR-R-P-X---STJ---JI------ZJ-W-V-HR--HETH---FW", "BKE--KULMJJAKB-EDO-G--DF-M-HCQ---GBT---PZ--L-U---", "OFKN-Y-----F--J---J-LHH-CJSAU-MS-S-V---GDIQ-HI-V-", "-N-----WF-N-BK-J-VE---J----Y--X-----HDQ-TOIPTQG-A", "UFT-*--G-K-JEC-CF--P-Z-LSN----UZS---OB-QOJB----OS", "-JF-U--L-G--YNF--KZS-OYCVDXLUGK----VTEYVRMHBVM-X-", "O-MOY--BIMLX-NX--TROZH--FFL-CM-NK-SUMZQXISJ-R--CC", "-KPJ-L-MEN-J-EEOB--------E-ZV-DZHZOD---HRA--IXS-V", "-VJTY----C--V-K--WK----J-K-IQ---ZR-WM---OSZMS-V--", "A-DQJHU---VK-CANNER-B---OK-FH-W---WBHE-MB-MS-SM--", "Z--A-E-TOT-D-XZK-E-NW--FK-----ZS-SEY-Q-DQ--XHVJ-Z", "B--LB---Q-U-Z-TT-AJQ-DSDGFAVXYM---U---ENY--D--YHI", "POEWCV-Q---ZFN-AU-X------BQU--KF-O--A--CFIT-T-X--", "-H--Z-------SJC--G--E---Y-KVT-FEG--RK-I--U-Q-----", "X-U-NJF------PFP-ZC----W-V-G-B-MO-D--P-------Z--X", "JP--LNA-O---T-Y--J-M--Z-R-QQJ-TW----EEDR-G-XWUYUD", "A---W-T---HA-RCP---VH-PM---KT-YI-OHER---X------QN", "ZG--H-D--J-VXD----Y-O---KDWDU-VOFD-J-D-H--DQSS-X-", "SQGO--U--Q---U---HM-JD-E-L-A--BJ-LWV-------M-A-JM", "--IV--------QS-MSS-EL-ZRA---QVKST-XEFF-YQ-C---N-F", "ANOR--B---K---C--FZRK-R-GJJD-------QCL-QPQ-L-BQ-Z", "----D---K-E---UX-QRLIKNNTU---J-GRQ----NS----WA---", "---D--I---LPC-DZD-J-F-Y-F--Q-LT----DOCV-C--X-Q-XW", "LK--BMR-F--KHQRZWAAA--X-EF----G-X-RB-----D--IUF--", "J-J-WST-X-------HEMWJVG--B-E--K---ZU-BK-CSQK-NQ-R", "---RA--HW---H---L-L-E---KNS-----YG---I----BB-----"};
    vector<int> detachmentSize = {591, 402, 49, 285, 19, 639, 67, 413, 244, 224, 361, 451, 985, 563, 473, 809, 425, 119, 74, 992, 348, 442, 406, 244, 21, 176};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> countryMap = {"HQAHQHNOWSSHVDXRETFJCMZLXUUHMDDJLGLQSYMVKCKXEIABX", "STBMWQZJKMXZSFYVSPJYLXOLOMXMJTKTSUHGTJSVITZCYCIQP", "PXOYCGLVHLPMWLVJQMQPULLRXUYHCURTKJHQIEVNASKMJWQYQ", "SDXCFKWEKJHMZRPEMDINAWZNPPPDOLHJDPNWUJRETDVMAZQLO", "ISPNIVNDNPPLEBDLJIKYUKPFCRFNURIIICATTGFYHTFBKMQAH", "MECULQKTEIXXDMMHHVDPQMCXNSSDOVUZVPTVDQCFTEOSSDOHC", "ILNFGDBIXFDKAVYUJGFCOJAARFLDTYZSWVJVFLBRJMCKTMYON", "HHOYJLKPQHMBMENVZNDAPQZKKSOEUKKWEUFPDBTCIQZXNKEHF", "GPPASVDIAZKJSEELPMFJGOWKSYXJCEMWAARFKIDLHVZSJSVES", "GCOXKJAORXHSUADEGMXMFWZKBZYZWQGBXPAMAJALTHHDDIBLL", "LIPLTUASIJYFDEEVIXFYNVYIDDXSQJRAJNWTPLADHSAOKQHYI", "WSAUEFCPLHVIWSJMPKBREBGWCWOZQLNYRYZWNOXXMITRATBFG", "AICPUWLWAZLAGXITCXLXSBWFTMXVXRUYHQWBOPVBAEYIVACQK", "IRDWFUEVTBIYUCSWIOWYAATGOPVCUCIFTHUSHLINKHJAPIFCQ", "BJRFFPUGUDABIUZUBUQIMBFRROQTUSSNWZRMXIJJTAZHFIMWB", "WNTJUMLHXMJDDICGVIOPWNXOWNEBNKPMANGGMOKHVHLFPYPYK", "TGNVORNPVIYHIGZNNOJHJNLIAAWLHEBNVMVSJJGEEALFNBLPR", "AAMUYXTBNLXUWWTTNNPNDSOXTTPUWEYZCXVSYTJVSKYZQMXFK", "JOUIYMLIWHRHWDEDLSDUNBJLMSLWXDWHQHSJSLAAGHAGFBKSR", "VIYNITGJDDSOOYJIICMZVXAJLHBHWGJVFIYGCLAMGGSCMDDUR", "IVUPUBFUEQAWKXVZIXZIRATCEGRBEHGPTXAYDLUQNMWGZSNXH", "UFNIWVXGOSCIZUPIYDAQJBHFPITGHFEGUXTQLAVZCGOWHDZJB", "IBJYAYESMLXBFAZPUKIZPYRPYAMAECVLHLAVTESQQOSCZZFDG", "JRCRMKWSNOXKSTPAYUXEPJCKNAXUVNXTSQCOXCFZTYMDNDIAU", "HOOMDLYBTZJPIMYTRWCPMHXLKYSAWYYJWEUCWLSRQZSCJATCA", "NVREEWFJYLPNTKLDKKTTFHDGUTHTGMJGDYCFFQDGTHWBXENEJ", "UBMNJSWWKFUELCKWQTIQYAUHCEWGETNEJVRUHRIXNMVFLRNVX", "MGYGUTPHYVDBVEDLUOKSGTVEQXSLYCZMNIETKTHAEHKMXNNAL", "XSTASRRTTOPXVNGPDZBFCANYNTUGBSPSFIMJIJYQWNCWWOLDL", "NIXZWOVVOCPXWGGGCWAXZOQMFSTZYVXUNUEXIXJFFEHCJIRFG", "NXAOORGRAGISJGNRNYOONJSPHDMOVSLVXZZOWWEDGOPXMBQGC", "PIOZWRKXHAYLQBEYSGUVOTZIGOCJKXUINNLLBLVDJPNELWKBU", "APBIVZZLSKSZSTHWSACEIYWSONNMSDSWWJOIGTWMRPVYSCRYT", "CVWHMLXOZVPGYKDLVYLKAVRTBEDHIOCNMXVLCMFSZZAWCMCML", "CLICGXTKCPDVGYSNYZREMGNXDUFIAGAQZPAGGKLUVVBRWBLDE", "OVNRYILSYEJPJIOCTHHXFYJEDJAUPIFHZCIRXQTQLQTCXRURX", "YFLDFXELSPCZLBBSM*BANHQNADSOVINAZSYHKRHGGBCJOSTKO", "HZWTEWDNCQASZYWNWTYOVXWYGCBADTRQHUEBNGDHBFACTJSMR", "GCTXPFWRMZQJVROVBIFLWWVJNPGXTUUPUWSBDSCASFPBUGWCI", "XSHKUUDQLLWKOTGZVVVGVVVPINUPOQFPMKAUVJPLIDRPIDOSY", "SHBUJZVWYYVTSPBOXDDBOHJVBPUSHMAKGDFNRYWSDIVKGDFQH", "PVKVFHNCUMGOITFZSMPUHIYWZPZWYVOCLGSKRDRFWPTOQIAZZ", "OHMJRKAVUOLTBJZPTPZLKGHWDCUEZHJURFRJFLATAWRTPAPTG", "ZYNYARDOEGOWPXAQRPHZHRGAEYJFQFDRJMSVXNTDAKZHUYBTL", "DHLOLFEKGNESATRQORXZBXDTQFEKWQCREXUPQBQEMEZOPHJSW", "NYKWXXJMZVJUSNJZRCKOXSITZDPAJQKOLGUEBHSINLKIZBBBM", "VPBNFHHSPXLAYQCTJASWCFWMSETVNLDXZTPXSCDQIJPJZEOEC", "GOIGKXGBPYEXNYVTXFJMDEUWQOTUXMVAJXHIMKVEFEAIKYMAU", "JRPSTMTUJORWBURXUNXXTKZDVOCJPCBZTIBBURLXYYCUMQZEK", "VEOSYRJAREDQXOUBEOHJCJTCWYUVNTXVMRWUMKYHJERUFMCYG"};
    vector<int> detachmentSize = {899606, 715060, 780885, 80064, 397688, 244855, 874103, 892684, 512322, 625113, 556809, 88741, 134078, 402597, 690922, 997684, 680257, 545990, 75358, 356309, 730070, 560394, 856667, 433865, 775507, 82499};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 2098131;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> countryMap = {"DIAICRPVKFSELFSXRUETEGGVNBUQEIFLGPDAZQQWGQQGOGQXRK", "CZQWKOYBHJVPKKEMYZDPNMXFZQMCVNPMYYCNMEZJJHDIXCEZSE", "RNYFRCMYIAXMCBEDXEYZWQIXPAFOEVTXKSUQOMLLMAWSPBGDQK", "RXEAELCLWAHMJMCWNKTWTZZYVGAWLRCARQTBKKOTSBBEVQQLOC", "RCQZBZPHEYCEAEKNUQKVEIYLRQNINXCOCYNOOKMFJVORXCKMWX", "CCWANIIBJLAKOCNDOEGOQVRJYWCMBJMFCIZJJCICOCWCJEYEQU", "XZSNNFEUYNPXZHJARGHSOWWFERZYIGGEQCDYXOMKFNYTMYVLVR", "BFITEKEDKRFMDSNDKPDMCJFFCQBZXENUYJCXCYVMXPFBDXXRFN", "JPEJXLKYMMMHYHFKOEZIADEVLVZYEKHTVRQIXKKKAOCTDGSYFP", "HJKZDTZJWRDDROAFOVEKXJKCPEYWPXBHKOZHZSTLPARQPLWYTZ", "HZKTSFQUIQYGEAEGTUHTLDIFBECSAGDBQTOPKVMIHBRSRHOFQF", "MQSGDAYCFNICOKMFKZSPKGWCWDAXGSQEWODTKECQSXZGXEWZDN", "SBFFUSOJRJUECPXDPLCNQGVFFKISXCKDTMFXCGTNJWFPXDGKIO", "FKXHPOTYCMYBVUDESETRPSHRAVUGRMECXKXAIKYXPMXJSQEMCO", "IGSEHFCNUUQUSOGLBTCSHBWYZKNRPVVMOMLSTQHPXELFIPWRGW", "ALGJLBSXLWMQMGVQVGBRHKAYPSOTEECKDFAOZAKGHBBDQUWHTP", "FPXEHHRJKOCGQTFACDJEGVJVCJMYZUIWCJFXFHRWDBOGTSBOKK", "AOFYJYXZNQISCFTZXCAMAVRDDUHYMYRTOLUAXDTYERMACMEYMA", "BQJZTWGJBYRNFQVGEJVSMSJFMCEDIZNLLUMRBTJWZYVTXFFRPC", "PLLUEHQBWZZESFVSQUARMRLFQAETVNPWVFAVZRGFETRYFGNQJC", "MNAFVQDQKJKXXHGGEKFYWAZVQDMNKEWVZJVWTISWQKHYJIDAII", "LJDVZCXNTEIVSEQKVWHFGKCAHLHXBEQZKSRZXBBSWNZNLIUSAB", "YHXNEMLSJJFXLYCNCBZCLGIBJDHYXRBYTHJWNRXVHTEICOJRSN", "MOZGXDUWDBTYTBTUMLMGLYQDPMQHOGETJFSQKUCIYXZHUFNGMS", "ITAGTSGSSXESMPITPNMSNEAPNZFHNQDJNVZJJGKVXRQRWSLVJZ", "UBHIMHKQJRWRXMGRQHIYMJBZCJACFSZSAZYLFWJITMJQDBXSTO", "FXSONMKQPTHCUQXIVRDVVNOYHSKWZBQNQIOKHIICVAAJRFPDYX", "ZWOYGBWTITLKJTXDJPFJWCCBFFQZQPESZTRONJWQKCTDCUOQPO", "APIPURNLUPNFBPWYWHXQJNMYXCTROEXALHJCQVSRKOGVEZREPF", "YEBLHPYEXMWQWUWYWDZJVKSUCKVVGAEZXSJJOQBGJYZEVPNXQV", "MJJXWETOVUPKDOAUDNYIRFFNSDOVOVCWMFXSSBDPFDZDMRBEFI", "RBIYWCHGZPVPQEGIKKLGHQDUJQIIZAUCOZHKXKBQZTHGAKMHTP", "ZDPBIAXZFXJXGDJTD*QFDGCTMVSHSCTXMSKCEXMCXGCEZGTWRR", "VSDUFVNECPXNGEUFULQIYCAFCWSCPCHRVASTIKHEPKRQTNBYDX", "HGONCKLRJIRWRLHEWRRKXUVGZIXOHWEYVKYCBZZGIJLCYIMPRC", "NKIAUIJTQUOWETABSAJCQGHHIJKGASWFWGHUWIRSCNNNJOQHTO", "CXDYJXIROAYNJOVQAEULOJKDXXLCTLFUEFWOLDNGVODPJYJWUG", "ZHZHGMNNTBYSPUKONQGABXHCXZDEWACSACFJLIXLWZPXDPNWRT", "HBCVCILTHVZYLSNSXEJXYQBGONGZXXNXBYQHPZAXQMNFPRACWL", "DUIZKNOIMPCKBNVWGZXEYAGWJLIZMNYHCVAJDDRHBRMBULXKRN", "EJGXOKFVUCBSSZCCOJUTVQXGHFVKSRPTVWAMJFTENWWBKQTGFN", "VYCLGWHIJOGQPDOQIEYYPHLZFHYSBXZDLTEOLCYHHTLQFNVHCU", "TJKYLKBLMTTWWLUFANDZAMKEMJMZSTCQVEEMCYIMWAFCYXJEES", "ATEWRZEZUKMQASNBOHMTYMZKFWZTJOHNXKFUZCEBYBZKOUQSOU", "WABOUECPPJWSFHVREUJDDXRCHTSZMZCBRRHQECWYQSQZIPOCNW", "KEIDVYEBXJKKXBQHKIMKAEFKRNSNZSOBLYOJTLKWUQHSUBGFQR", "TBJDGQENNWLTIELSIHUNBFXUXAAWHWKLLXYPQJYSGBUKRSUXWM", "UYDSEVBEXZNLYIJWLWCMTJZKLRGYIBQRWDCITHCVVYONNYQNPU", "HLUIKTPBHVMDPGEOSVJDWWHZUQPFZZXOJKZNGXJOWASSEGEPWG", "UDOQNVTUYIJPPLBCYYDIDPFWZHASMQUWDNWMVJGCWQUOLRGJWY"};
    vector<int> detachmentSize = {427, 773, 624, 115, 650, 701, 789, 231, 631, 586, 990, 200, 786, 997, 728, 824, 404, 838, 542, 397, 663, 405, 971, 722, 125, 910};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 1709;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> countryMap = {"ARQPJFUNANLSYDODXALZGYSUDZAYJNUJWNQSIIAHMZDGQPDYQV", "FRXCBSEOWRQBUQBUHYVYKOGHNMPCIIVKJPXPLNEHVMFOTHULYN", "CFKQBAHGPESVDMGNZXPDTKSVTPSQTACOAYVZSEGKDAPMQMZKQL", "OWYSPPJBBGWKPUOOHNYJSNBUYXIHRHMAFVENAIYMJKTAKIHMMS", "AFUQQQWKXSMXYDRWVWAVPJWEFLFYIBTOWNOHQKXVQUTKVLBJZY", "NLGSAPUTTTJAWMADWDHZUAXZGFQGWOEHSPHCSBPHAGOCEDMBNZ", "NQJXIFTNKKZDSXVWZKLAHRNIKSPBFDVDEYQSOQWCMKADDQHFUX", "CAJVWCMRILNURNDIVHKILGELADDWUBZRIHAFHNSGZADNKVPJEE", "FNGDYRIRFXETVMJTGNGMRXOQRFAEXMEEEBOYJHOUJIKIHOFXIT", "XKQZSHSPJSNVPBIDIVBNNCRPWUEQAGYDGRTIRVPMQSABKAIKAA", "UJIOWNJDBNGASCCZBNCDJSWNSBQHRTOHDERDVFRLIZPYGMADXH", "MQTJWDEEOYMZWYGZRJPUWMMVHYTIMGDBMYJUJVBAIMSNOKVWUH", "TJMMHXYKXSUPYMOPDXLBJCZOKXWWDRIISQZCNCPUXUVOWOKDTD", "WGZJDAESAGMWOJRCNMBTVTHTPEGZHGEYEYRGQLVYDEVACNRIBG", "WAZVEDZNOVDHPQGILAKSWGLRLLMHILZSYNTFVQRVEIMAVOSQRA", "IXDYHUVYZYGZQGTKALEZGIGPHUCCDVJOTVXGCOSWUSDQGAXYPR", "WUJLJVCWPVSUMMKULMKEPZDGYACRNUFYWIJKSOQTLZZDCFLERD", "BGTGCZDCANXPSEVPFXCPQNAITVMYFXKTMDJKGJRLPPRSETXVQI", "YYKMXQZQTQTPWFTXTGYXZCULRKDGDCBYKUSSHZGLLQFHFZMLYW", "QIHAHFONFAKMEZJHHGKVDMGPLSBXKJDSTNKYQPHEQEDBTGVDMV", "AAZKVVWMDMCXOKTMZBOEYEGCUFTTGGPKMNTLRJDYCUEWPKANWN", "GORTCYUMIQUVXPGRGTBELQBIKJZILNXZSEKYXQTVZGPXBIYLBH", "FXGXSTKFEBOSJLEVKZWYUKQEZVXDKGKRDUYDMSQUIWIIDANEBW", "ZFDHWEQDNLMCKQVLFIBGHASBEMEDRXEBTWSHDMTGUKDXSOHZGS", "ZNHJBNUFZYOUSQBCAVOLJAHALWGEBWTXNPYGMXQOCQEYLHYUOF", "IFODEMNRIKNAPNQXUTVXRZOSRZEZNNGWKNPLYGYPIGBMESJOLF", "EQEGMVDBTGYLERVPCQYEYQDLRHRFZFORNBAXULZQUDUDYTKKWV", "PAEVJCEBMRMBWNGIRKOTLMGBVQJKNQXOZMFNTUTLZYQFPOFXQD", "RDZPHLXSTVGCGKQIYFMIHBQFFKWRASZFZNIYGAIJHAUSTMCOZL", "VHPHSDQMYIUHRGVXWEOCTXBBAPNGSOFHRRPQRLPTFFPKHDZETZ", "MGNZLLWNPUAGMRTFMCTIQTPBGVPCASSXGJQOQYWHVKTDHUWZFJ", "CDVWOLUVXZWCNBHLDSBITGBUEABMVCADGYNEHPSXKUAUYMRCAN", "KRTTPTNHWUYNIGIIUAIPUBXBJYEFMLKWFCAOLDEYLMMOAMQGKF", "WLXLXVQAVHLKDLXAXIACVKLZIRWYLTRHGJUOTGTVAZCXQJZRRT", "OWLJKOUDCNAJLJAHGHECZAJHYPUWLQJEINJHPGEAKKTECHXWBW", "DPBMLRFPBPDOWFJNQFCHVCZUTUPPRPBBMTXXQGEILNZTGTZEOJ", "CQHIEDPCFWHTVHWXWFKAGEZGDYGBPWERMRQCIVBJNVPEMNSTYN", "PDPUOXQFCDJVWCBFJEKVDOEZQBYPVHOPVYDCFRACXPPBHJUNCA", "ENFNBHOWIZQTLXYFPBRWUEMISGIXWLSRKTRJDQPSJSABGTMERV", "PIJDNONTOGLMCUWRKNOYRISBTKLGCAGMIGRFRBQTXYHQJVAYHT", "GMTROPBNODQVACRPPLDBAAPQUDGKBZHQQOHCPEBVVFDYWZDWBJ", "ARQKBENCFE*JZVPEQTPRCAGGEZYNFVXNNINGOUGVYIDHGYJYFS", "TDXUHYDQSEIZZRVLTHPCXCSUQUKCINGPAVZJFJOHKBIHOCYMQR", "OOGNBNHHBYHBYYAXMQQHVMVYJGHLCBYPJEHUEQIDDZAYWQSOTO", "TBHYIJTBDWTBALCECNJOWUBKHHSQKUVPESAQENZGBYQZZITAWH", "RCWXPBKQBNCVBUPAUYLYZELBGJEPNIFOYMIHHBPXFWKIHHBMPV", "YGPVZAFLSOIKVNZAQREPSCPIZBJAAMUADQFQSBDQSFUGYBAUBD", "ERMLMEUNKALVCSENWVSGVKTEDTECRQQSOICUPKDXGWDGITZBRQ", "HQETPFQKVDRDUONFZWEOTJPPZEJCWBNNZABWVAZCYINNQHHKMS", "XLLZCSIRYQSHAEVHYUVNJPNKPLTZDFDKPMEEVYMVRMUSJPSESQ"};
    vector<int> detachmentSize = {568380, 556870, 573895, 583136, 591598, 601728, 605077, 621181, 569355, 590674, 557876, 656715, 557461, 653329, 581793, 608967, 575043, 566363, 582666, 655171, 630480, 636549, 657078, 630661, 566515, 648687};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 2326670;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> countryMap = {"BRMHFSWROKMECPUDGWATMDUNZHGRZHMVEAJBJMSZRPNJHYNTGI", "BYGSRJYUVAYPGQZZPZCHTFAAVERTDHBNKYEAUJEHGFCDDSEYLH", "NKLQXGUWENSFELKNBPWPOSPJCFQGUHRIXNCWLSNLFFQMVXYIYR", "GLJNXWBPPNNGPLFXGFHICVCOKDDKTIMYVGZUQITHTODEHFWVVI", "PCIDTADCVIICSEVCARSNQZRQUBEWFTXSSTPYRMITXKODIOIMCN", "VIPLFXQTKILRSGMFJPFIJIBSVKBRGZBTOTRJACUFXLCXSPWMYV", "BJKTMPOQUEVSPABYBIIFYQAZWLLADOBFWCXAHXFXUBJAZXBKHV", "GRZFDSTHILZXLNQVIQVGCXEIAXZTDKBCVVLPPUACJPYVZJCDJV", "NGHAHEIAEDWPCJRUKWPGJXRRQTDVOLMCZMXQCPDEWDHMTIXZUV", "CFEYQGUIXYDLNTJEBADGDDILKHXYBWRUGKIJZQEKEVMZFFKHLM", "AOPSHKKCOCJOCZMATXUJLJKZRWOLQKMGMWQRBWIRGDHHGOVOBV", "QOQLLKQYGDITCGVULZLGPBDDCBWSLAUCCLWLPGZPIWTZHJJLBY", "LZATSWUDEMPPCANVERGLUQFUAYLNMBVVSJOPUNDXOXDCBBIROS", "WYJKCHLAGUQQDEHNUXPQUQQICBXAVELOXAIRDCDPONKCLLJSJV", "HBCUIXXADFQMZBWHBZUDVYYOSCHPUUHJYALODDBDGFBFADSVIV", "QMHHOLCUDHJRJTLASKNWIIRZTAPAXXDKGIAUHBOYWVFFDQZXNY", "QHSJZGHJDAIXJLDHCTJFFFLRNEYBYCLHTIISMCTEIGLWOOYCJW", "QEDTKCSXGNIAWZYEZZRCRGTFGMZPBXFWSNNVMPYWWNTCXRLXET", "TXFSLIFKTZIXZMSDNWXWOJHTIPMMIUBPHQWOKVKUZKTRHTZFCU", "WXGDKPQKKEQZPLGGMBLOVPWZPADOGRURIKGAHSCWVYPYETBGLV", "IJOKDUDZPDVWYGXTBYDNYJJCCDWAIUATPUNFDMYFWDSWXLCFWB", "NLRJXMUBRKPKMXPTGEXETLNQWFQVMGWXTFLIJUTYHHOBKPJDHC", "GRMOMINGFASZBDJHEGACLUGXWJQGHFXTIVKWOYVXPVAKUMVNKT", "BSTQQJQWTFYCWWDPMMALJRZQJWGEASKVOSKNJVZKKXBSCJUINF", "LCZPJVOTEJRYLLESJMVFFAPSVNWWAKSYERAPTDETXKKUFDBQFP", "FDCECHUGBBBLBUXSIVXPCKUZOYUYNIJVMOTZUHOIKVVHYCOJAK", "AMOSIOAMKIYZKCZSTQTAJATBXBZASZYNITERBKRANKEAELNJSQ", "JYOTSHFEDLCBNMNFZBYCTSICSBDKXQVOYCSMOTNNRNJBOQAMQC", "LIQXQNSDQLMQTZNCJYEGXSRSIBBYLXBOZOURNYUFVMAINJRXLW", "NZIIFEJFZFJNEAKPBYKLKZVIBKSVZRIEQZAKJURPWGZYUKERWX", "WHHUUDIMJCUGROOLMVBQUEIYASTTOORBGXKNLYCGYDJVCXACBS", "PURLPHGNTBYFRLBJGOLSLSORQZVNDTZVVLBOGLQQCEWKXKCVRQ", "TOXTWPQPQOOLVTDGZIXTZXBLLCEHGHOHVDHPBGZUPEVTMCKUZZ", "KIEXFOMREDRNQWACBNIWTDOZRVZZXEJMCASHWEPLZYZFWGUEZU", "KOCSJBFCNERVKDACKNOJQLDSJDQDRTKTCNBAJCHIFXHDFLDAVL", "ZPBDQXCLFWIHMFNBGLQUCIRDMWPAZUYQMGXNPUWTMWCOXIAXBO", "FTIVJNNYBPQJGAYDFECOLYRHOGNROJWKROYZALGQTBZEHJKNZZ", "NPQKAZGCJAUQRQVRSVXMFTVACCVBDXCOBAHGGUNIQABILEHLNT", "EQJCPYFRGUDOAKJ*JIZOAWPWLQFHNMUASXZPGFIUHELYTNNQLG", "DIUWHNTALAQYMPOSFZVLBOFBHSIHQHYPFVPQOAGHPVWVCOODYR", "RWVZXULFHRSAYFQCBGGZNREARNPOIAKPKIKNUOEQZCRSKVKEOB", "QSCULWSYHLKMVGVRLBANESIDEBVORGYKJLKUETDMSCULYBIZNM", "QSDGJIIHEWTEFEXRDQQZGQCPBQJJXBLHQIPHKRXQSGGEBSTKKW", "HFFTOUOAVOAOMSAAQMHZPHGJTURWEZEVUTRJHWIONLSPNSJISX", "DYOEBPYDMPFSPZXIKMFUZAJZAOFMBZAINLBLVAQOHUFMZJEWCP", "FZTEKMEVRVEKRTUSSXLHPUPIZSYUBAZJXBIAWOPSDGLBTAIFVZ", "OIDQINOCNONSCAVAFVBUGGUOXPSKIRVRQCKBFWJEVLULGSQXLA", "QXDVYPNQFPKJYHFOGRGNAOFSTHXSBDOFCHSIHSFCGICBECITBC", "YCVIZYYBJDVNNJIDRQPFMPLIHZHSRIGPPURNSFJBJQRVHAQWXO", "VPWFNFXYSUJAHOFNTYMBJYPCPXZYAFGLTRCYIAGNPDNEUOGVFO"};
    vector<int> detachmentSize = {777147, 777814, 778481, 779148, 779815, 780482, 781149, 781816, 782483, 783150, 783817, 784484, 785151, 785818, 786485, 787152, 787819, 788486, 789153, 789820, 790487, 791154, 791821, 792488, 793155, 793822};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 3143939;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> countryMap = {"GYRKFFEKUWOIIISWMEYISTRPSTMGNDLTDAJLSVMMZMQSPNHKYD", "EMQSYVXPMPBJFMHWSJXZFKILKACJOBIISUWPTVRGJPHZTOODTR", "VVIOTSWRCOERSEXMTYOISHRARPWGTJFIZXITTOLOCZZASFGCTZ", "QJRSLMYLLBOFVYXYNAWAOQNYWRPUOIEECDAWWOQPIZANKJUBHH", "OTTDVWUAQCABATOOFWVTURQJRMZSVPTZEFDUYNZNKNBIRASAIY", "PVJTVKTZRXWLLWHELRFVNDHYHOROCSJYBVHURTQCHTVHHDRUQU", "ZNEDDETMCDVRHKMTEBMVSLBOVFDMRFIZCOZEXZBSAFVUBRDVFS", "OSDALTENPSCTPLAJFMAMSDTVEKCNIIIBTNNENNQEMIGIDFSLOT", "ARRLVWVAALQOLVJZYWWZQZNBRJKFIUGCXMKCNSFLMZRFWSPEMQ", "ZAGTAMNLDCUOLWLETNQLMHKPNOPADXGCOXQDRXSFBQJZVJBDKI", "XYVDLAPMWEBRLGUACCZEDXQWQHNHNKXJBSCVLCNPELQZFLZOBS", "XFWVNN*AICHCAMFSNCNQQLFPSCSOHJEEXNAAMROHXCPKRPHLAB", "VYKXOFMPYRPTOXIAHBJXDTZYQWXIXMKPEZFEGOGVCWGQNFVBQU", "QBDDLPXULRNAEJVJZJIUFXGJAXASBKTOHZVOICOZCBSQCVQBXY", "VPIMSFPZFXIKXQBLSXGYWKAFTMIDDDAHTHYZCHMCCTWCJPYPSO", "TRVNNLFRAASLIUNCILXWTSIMSKIAKJGNQTRBCYTKVZSJSKQMTT", "YMOQASIRHIDUEBKRCXFPTIBHZWEKSITTTWPKLEKXMSPVOMLSXK", "IAYZLOMIESNSMLWOOTKSITPFFWIIXVFTFVAAKGSVUQTUNXDOLS", "BXEGCNODVMVDHNZMBVJCTBUMUNZWZLVXLKUPSVMAAOUXBCIARE", "GQIQSQUXAQMPIRSGGQQZMDSSNJOYNSMUIOBZANQKJGPDTXWSRQ", "OWMPKJLCAKTNUMXOWFSATZRBBDWZRIOKXJTOYMYDOSQZGYDQQH", "RPTCAKYJURKVUEARVQUUKDWMIEMYWECGSAGGFZHZUASNRKZLID", "FUKZCBYHXCDUGCSQFTVODYCYXBIDSYYUJFDLOBYHTCESNKNVMG", "YFZDNPCHBZMAVBTBBBMADWUXQGMGULVWVMXGZAPPXOKOMPGHGG", "RMLGFAUVNVGPUIPSCIZBOMIGWKDDBGYDQLTNTSUZSWRDWNYQYU", "MGPROECPHZENHTWWJMBSSWLDTVLDPPCBXMWISGBGABKMPSOPRP", "OYJWVLFAYGRUSZHWRVXAGFTWEFEKNNIMSYXIKCCIRUPNTATXPB", "VXQGLPZAKPVWTOYIHZORRXUIECPODCXOQAQREXBEZKUDWKYXAD", "FTVKASTIXQFQBNXMQDKJTDBGIWABMDWYHOCGORAVTHJQDDHZCY", "KRVIOVVMHUVZKJGYVISEFPPCRQAINNIFFVPZHLGBQBLKRSPXKK", "MZFIWIALXLOMJYFJRCFVVHSFESUQNGJJNQLWTJXKFBUMGPBMVU", "YEIFNLYSYWNUQHPRBXPAFRMJXSUICWYDKNWBCGQEHXAIQJZCEK", "YYYDHOYGJKHHLMCYEYKJZTNNCODBIUWMTQVBQOMTZTALUEXKDL", "UYWAMPGVANRBUPJPUYSGYKMXEYVDQQUOMASNEFAOYBTYTRNAUQ", "PVUKLARHPSVKKUYXOHGEBMOKSCBWCHBZKEUBASRXTTTRWPMNOD", "HFLGTVPYOOJAMJBVPDWMKXVUNXTQVKYHWQBEWGJIQEIXMUZQMG", "YRAPCFOGAZXREWQQXJCBPCWKFQXSJGGYNOHQLWIJOSRPTILUQM", "ZFNZVOSRMWHGVXNFWHNLZZFDGVYJVLVSYJPRDDWGKUTZWLPVYT", "ALLJGOMATGYSEESYXKXVBPMCSGQDIMKXYUGIBZFNRMERTPOKDH", "TKABJVKTLGQBSKDFPUKNWZEWPIXJPGEVIPCUOJSTUCPFPFQVAW", "CUFJMUWKCHFBAKGGPDFAEWSQITBUHECVSCWONKYPMSGZZZOTAC", "KAVLNNJSLASKKOCXNJYTIWWJGYSLGVUEKHGUFCLCJIVPBNLMFR", "OFWYNXGEKCGDIVUYRJMHBLZRHEJWPDUETRCAUHTFFFIIHZEOKU", "QCYDOHSVJFABJOOHCHHJQRUHVYQXLKGFVGKBLOIALUOVGCFFES", "GVATCKFOELNDTPTJBJOUKXQXKJOZHORLWTIDDQFIYXEQPNWEYQ", "ZYDGYJCTGZRAGWDUNGDHEZKMOXVXLRGOHVOIYHUTUDMSAMGVVA", "PSCWZKIXMPPUPJSXUFYVBIECLGXLNLUEQWZKLDOKVELRZBDUMR", "CHXRSFNZYRNBOANWTJDKXVFWQFXVYEDGOZRKXRKYOXPTZFDIQG", "KXUPJKQKVLYTTMENAVQYXCPBPIYMSZMLVGIWCPCDNLOKZFXFNP", "NVUAVZJQUXLJPHFWRLYXGFMISYVPFTMRAOAUAOLSYFSSJFDONT"};
    vector<int> detachmentSize = {1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 4000000;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> countryMap = {"ASRQJFVNAOLTZDPDXAM-GZTVD-AZJNUJWORTIIAHN-DGRPDYRW", "FSYCBSEOXRQBVQBVHZVZLOHHOMQCIJWKJQYQMOEIWMFOTHVMZN", "CFKRBAHHQESVDMGO-YPDUKTWUPTRUACOAZW-TEHLDAPNQM-KQL", "PXZTQQJBBHXKPVPPHNZJSNBVZYIISHNAFWFOAIZMJKUAKJINMS", "AFVRRQXLYTMYZDSXWXAWQKXFGLFZJBUOXOOHRKYWRUUKWLBK-Z", "NLGTAQUUUUKAXNADXDI-VAYZHFQGWPFHSQICSBPIAHOCEDMBN-", "OQJYIFUOKL-DTXWX-KLAHROJKTQBFDWDEZRSPRXCMLADDRHFVY", "CAJWXCNRIMNVRODIWHLILHELADDWVB-SIHAFIOTG-BEOKWQJEE", "GNHDZSISGYEUWNJUGOGMSXPRRFAEXNFEEBPZKHOVJJLJHOFYJU", "YKR-SHTQJTOWQBIDJWBOOCSQXVFQAHZEHRUJSWQMRTABLAJKAA", "VJIPXOKDBNHATCC-BOCDKTXOTBRISTPHDESEWFSLI-QZHNADXH", "MRUKXDFFOZN-XZG-SJQVWNNWIZTJMHDBMZKVJWBAJMSOPKWWVI", "UKNMHYZKYSVQZNPQEYMBKC-PKYXWDSJITQ-CNCPVYVWPXOKDUD", "WG-JDAETAGNXPKSCOMBUWUHUQEG-HGEZEZSGQLWZDEWACOSIBH", "XA-WEE-NOWDHQRGIMAKTXGMSLLMHIL-SZOUFWRRVFINAWPTRSA", "JYDZHUWZ-ZG-RGUKAMEZGJGPHVCCDVJOTWXGCPTXVSDQGAYZPS", "XUKMJWCXQWTVNNLVMNKEQZDGZACSOUFZXJKLTPRUL--DCFMESD", "BGUGC-DCAOYPTFWQFYCQRNAJUVMZFYKUNEJKHKSLQPRTEUXVRI", "ZZLMYR-RURUQWFUYUGZY-CVMRKDGECBZKUSTH-GMMRGIF-NMZX", "RIHAHFPNGAKME-KHHGKWDMGPLTBYLJDSTNKZRQHEREDBUHVDNW", "BA-LWVXNDMCYPKUN-BPEZEGCVFUUGHQKMOULSJDZCUEXPKAOXO", "GORUCZUNIQVWYPHRHUBEMRBIKJ-IMOY-SEKZYRUV-GQYBIZLBI", "FYGXTULFEBOSJLEWK-XZVLRE-WYDLGLRDUZDNTRVJWIJDANEBX", "-FDHXERDOMMCKRWMFJBGIATBEMEDRYEBTXTIDNUHVKDYTOI-GS", "-OHKBNVF-ZOVTRBCBWPMJAHAMXGEBXTYNPZGNYRPCQEZLHZVOF", "JFPEEMNRJLOAQNQYVTVYS-OTS-E-OOGXKOQLZGZQIGBMFTJOMF", "EREGMWDCTGZLFSVPCRZFZRDMRHSG-GPSNBBYVM-RVDVDZUKKXW", "QAFVJCEBNRMBXOGJSKPULMHBWRJLNRYO-NGNTVULZZRFPOFYQD", "SD-PHMYTUWGCGLRIZFNIHBQFFLWSAT-F-OJZGAIJHAVSTNCP-M", "WIPITDRNZIVHRHWYWFPDUYBBAQOGTPFHRRPQSMQUFFPKHD-FU-", "MHNZMLXNQVAGMSUFNCUIRUQBHWPCASTYGJQPRZXHWLUDIVX-FK", "CEVXPLVWY-XCNBILDTBJUGBUFABMWCADGZNEHQTYKVAVZMSCAN", "LSUTQUOHXVZNIHIIVAIPVBYBJZEGMLKXFCAPLDFZMMMPANRGKF", "XMYMYWQAWHLKDLYAYIACWLL-ISXZMURHGKVOUGUWA-DYRK-SRU", "OXLJLPVDCNAKMJAHGIED-AJHZQUWMRJEJOJHPGFAKKUECHYXBX", "DQBMLSFQBPDOXGKORFDHWD-VTVQQSQBBNUYYRGEJLN-UGT-EOJ", "CQHJEDQCGXHTWHXYXFKAGE-GDZGBPXESNRQCIWBJOVQENOTUZO", "PEQVOYRFCDJWXCBFKEKWDPE-QCZQWHPQWZDCGSACYQQBIKVOCA", "EOFOBHPXI-RUMYZFQCSXVFMJTGJYXLTSKUSKDQQSJSABGUMESW", "QJKDNPOUOGMMCUXSKOPZRISBTKMGCAGNIGRGRBRUYZHRKWAZIT", "GNUSPPBOODQVACRQQMECAAPRUDGKB-IRQPICPFBWWGDZX-DXBK", "ARQLBEOCFE*J-VQERUQSCAGGE-ZNFWYNOJNHPVGVZIDHHZJZFT", "UDYVIZDRTEI--RWMUHQCXCTVQULCJNGQAW-JFJPIKBIIPDYNQS", "OOGNBNHIBZIBZZAYMQRHWMVZKGILCBZPJEHVERIDD-AZXRTPUP", "UBHZJKUBDXUBALCEDOJPXVBKHHTQKVWPETAREN-GBZR--IUAXI", "SCXYPBLRBNCWBUQAVZLZ-ELBHKFPNIFPZMIHHBQYFXKIHIBMQW", "ZHQV-AFLSPJKWO-ARSEQTCPI-CJAAMUADRFRTBDRSGVGZBAUBD", "ESMLMEVOKALWCTEOXWSGWKUFDUFCSRQSPICVPLDYHXDGIT-BRQ", "HREUQFQLWDSEVPNF-XEPTKQQ-FJCXBON-ABXWA-CYJONRHHLMT", "YMM-CTISZQTHAEWHZVVNKQNKPMU-DFELQNFEVZMWSNUSJQTESQ"};
    vector<int> detachmentSize = {998101, 997391, 994187, 993509, 997533, 991380, 990293, 993275, 997520, 998570, 991293, 998462, 997259, 991258, 997318, 991689, 990420, 996888, 998669, 998695, 992195, 996875, 990617, 993412, 995914, 995545};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 3982348;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> countryMap = {"WKYVNQKFKY-OJG-YHZFUVXIGY-DA-FFXGU-OMD", "N-FJHSOVPHGHE*ZHABYNHSY-ICNYUIR--QROUL", "SZKNET-AULHA-BPVM-IOMNILFBUPSPBZA--KLN", "-PCZ-OYVVKPZSQD-OEVHN-BUJMEXKPA-FNRSCS", "HELVMWFEFSNAPTQYAEZJTGZQKP-TXXTGTFSBFV", "KEWTJJX-ESZ-ZN--VRESB-WMB-O-AD-KBDJYOM", "U-XTBN-CJPO--HIHRD-VN-ZTOQCRIC--MUOZ--", "GQGGGYMI-ZAIU-NCS-WSEHQPV-TEVRZDIZIP--", "HC--HO--BVQVLV-FORCGE-RDRBJD--HXPZUEGD", "RBAIATFEKOKZGBHYNKH-FQCPAX-Y-QYYDDL--Y", "ZDQJN-EMP-M---WKE-XAASNV-LWHTHTST-IOBE", "-AEQSX-H-TWOI-NHKKHDG-MYJIMVUQG-JDOHX-", "LDSFV-TSN-PZWJ-V-MCYJOYFOIZZYTZW-UXRON", "-XJZC-ISF-RUGJN--QADPDTQMFZJVZNLNTLHFZ", "TIKIIKMKPE-ZFTD-QR-CPHYY-CCAUWPZNFRCCC", "-OILCDPPS-ZH-VL-A-XMBP-IKWWZ--YUOZVZ--", "FAMWP-PZYFYBZ-HRADKNHSJIUD--NWRPQGCX-U", "GFNNY-EW-IQSHECCSVDGM-JAPREL-DTUYCDTHG"};
    vector<int> detachmentSize = {15945, 19068, 19345, 19766, 17876, 6677, 2986, 14222, 4608, 19168, 7096, 11370, 15672, 746, 5090, 10984, 1270, 2262, 10362, 19868, 11238, 9466, 7827, 13823, 5384, 18795};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 58725;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> countryMap = {"M-AM-MWY---M-E--H-IOEU-S---MTGFQSKSZ-", "-T-REQ-GOAC---BT---PRU---J---YP-S-XSX", "T-UP-Q---MK-O--N--E-DO-YZ-X-DKT-LSYT-", "S-Q-T-Z-ST----MD---RPLZNH-WA-QUP-----", "G-DIQ-HRPMU--YGTFNVA--WZZYFWSLPFYW--P", "-G-F-TA--SXN-ZWN-VFVZYSGCFSPO*--RZIE-", "JV--NNODB--JI-M-ICQT-BMUHD-R-Q-GO--GU", "ULL-FZ-UE-W--GW----Z--F-EI-HX--FXLDNS", "VJJGCN-JFRA---OKIEYOAB-JSG------O-ISC", "-OUEQ-U-XVLLW-PTRY-LUDTHV--WFAZ--RQ-Y", "H-QR-G-IYGC-EN---WRHMJKZZA--FNA-QP-GH", "RYTJOKX-R---PEHT-AA-IROFRM---P--H-KDW", "-ROAX--M--AGHLT-UJ--QC-----KC-ZAUAOBT", "-LMFFNBTSROZS--B-NP-JFHG-N-J-W--OFF--", "-P-APW--YTAFM-AXR-M-N--A-GJDYTM-O--QT", "ZRC-IDL-E-W--SW-----VW--TN--A-CIJAODY", "--S-B-SBJ-N-E-S--C-I-U------M--DXY-BB", "H-O-BD-RN-F-I-H--CN--D--OW--AA-LXZ-E-", "DNI-M--MTNWRMPAZNID-DP-IJY-J-GBBN---B", "-ZNUCJ--X-----W---T-OOO-B-LINU-B-V-P-", "USM-UPFFNDK-NWY-V-W-WHCVRYUAVKKUXQM-L", "SIY-Z-Q-KW-Y-VY-N-LNK-WWWOMPVSOAA-TLG", "CV-U--OPKHGASIVCTY-BAU----CWS------WW", "YWE-X---Z--H--E-----P--Q---U-JQOY-O-U", "TO-L-L-GHGT-F-WBOTT-S--G-L-M-P-SBAJMB", "LIBR---O-WN-KOGF-XW-OONDU---APSMDM-KP"};
    vector<int> detachmentSize = {67, 187, 51, 22, 88, 3, 100, 47, 53, 141, 17, 100, 26, 28, 161, 133, 64, 166, 158, 118, 158, 13, 46, 162, 32, 129};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 261;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> countryMap = {"A--YOI-VBWS--GXF-BS-K---G-B-OV-P-W--NNALU-FJ-YF---", "J--DB-GW---B--C-L---RXLMWTZEMO-QPY-ZTVHM-TIX-L-S-V", "EIQ-CAMLZH--GUKW--YF-Q---Y---AEXB----HKRGAYU-T-Q-S", "Y---ZZPCCL-QY-XXLV-P-VB---NM-MUBI-IWAN-TPR-AQOMUT-", "AI---Z-R--T--G----A-ZQ-IJSI-OC-W-WWL-Q-----Q-RCQ--", "VSK-AZ----PA-UBF-FM--A--LI-J-XHM-YMD-CYMBLWDGFTBV-", "W-P-NJ-WQR-F-----QRAM-WOQ-ZCIG-FG---X--ETRBGF-LJ--", "EAP--DU-NSV--VFN-MRNSLGSBFF--B--NLAIMW-J-BGVQ-ZPGH", "JVKF--N-J-G--UO-KVKT--X--IAG-UHHGCX-PLW-OOROMWI-O-", "-R---M-ZO-W-ZCNGO-CWVE-Z--H-BK-GL--O--ZU--BBRBOQAA", "-PNX-WQEBVKB-ED-CWDFQ--W-C-M--XMFG-G-I-SN-Z-LUAE-M", "T--P-FHIX-U---J--OZ--UU-M--OTLGBT-P-P-CBOT-WXQ---M", "-PUTL--Q---Z-UXZG-TCPD-YQ---F-ON---DVDY----X-*RF-F", "-K-OEBG-AKU-XP-EVTC---L-ZHK-LJH-H--J-S--GH-ADV-NCL", "-A--GG-VW-GLZ-KNSBQ--KS-SRTLNR---V-I----HNUA-X---A", "O-F-L-----J--K-QASG-KOKYM-DDF-OX---KEY----F-KB--Y-", "--PSO-E-Z---UUR-TUQGZ-GK-AD-V-I--OPR-X--S--FDISG-F", "BK-KD-FEBW-Y-I-ZI-EZ-VBO--T-I-Q-UGPQKP-SZY--G----N", "--RT-------Z-J---J---D-T-QFKGEC-Q---M-KTT-JMI-US--", "-NMBMJYVJBQUH-PLMKQ-FTKYS-C-ROF--VQ--ZMH-GFC-L-EU-", "BA-R---UGTE-XQ-U-CYG-HKE-I--KLZRTW-S-PF-E-H-YRAW-W", "KW--E--UMZ---YL-L-CHT-CNQO-NTV---HR------JZ-CN-SBM", "I-K---RIGCW-OSH-Q----R-H---FRKR-F--FU---O-NOGAVGC-", "-JFL-H-GVSTEQ--SIOCKMB-BHTGF--HB---MGU-L-QF--XM-J-", "-WMPBV-I--X---CEB-YSOAMAS-JHC---VY-JU--XD-H-RL--WI", "OIYGHTV-ORWBZVZ-------X---H-WWK-QWZS-K-ZNKCTI-OWSI", "H-GJT-FD-K-SH--YD--H--GS-L-J-JX-VDB--S---F-F--QQ--", "ZAH-PEHDU-UC-WKO-RX-RULC--ORV--W-UJV---S---IYWI--F", "-F-YMS----JEJR-N-IUNLC-JIR--B--I-VO-KANPLA---UEX-T", "-MYM-F-U-M-M-K---IXE--CCAYWK-XIL--Y--TZ-IIYQMF-I--", "TLV-TS-VZ-AJT--IUD-N--ZCL-YEB---JOZX---L-R-GM---IP", "DG--XS-----EVBMSG-CO-JC-HBCT-DAFJ-VGMZ--Q-A--T-DAV", "R---Z-WL---VNKNN-ANY-B-BO-GJUSQ-IDAYRFI-STTXBU-KQJ", "-S-S--ZA-MSRFS-A-NBD-RS-N---S--MKP-W-K--A-E--P----", "W-RPRY-FEVBPTPALKMHE-APL-Z--T-PGOVPMYKIARR-HEM--D-", "GZCUS-IYCYFX-JPW-IEL-E----ZZ-ZBCU----JHOSV--K--HWO", "D-LOGGZEJ-L--L---IRBKG-KF-KCY-H-U--DM-COW-ZHUW---W", "YGZ-X--IEFO--DCIPGQ-FXH--D-Z-LYZ--FEJ-AE-YZCMP-VDA", "HWIWCLX-N---T--IZD---HTO-KO--S--Q--QF-Z-P-ACJ-TH--", "ZOPFVXW-XJTTD---QWY--N-C-QTKEAJUMK-J-B----M-Q-B-M-", "KU--XYCWWGZ-AE-ZZTGDAAY--GKQC-M--XMDYHC--JF---E-BQ", "B--RCHVDJHIO--ZH--Z-EAKKH--VI--VVOVLX-K--NFLK-O-J-", "-E--M-F--HM----T-LZE-D--Z-RDOVJZA--PIPXMQCMMXE-U--", "XXKVDVLMC-MB--A-U--M-U--QJMSEC-YOGL-H-NFF-B----X-Y", "-BL-OP-CF--CASEHEWOX--BQML--Q--YH-B-GV-KC----N-B-M", "-E--YCR-CVD-C-ZB--S--HSCKQHYVNJX-TNMLCZ-I-QNLMCTZ-"};
    vector<int> detachmentSize = {6804, 9035, 10789, 115, 2302, 4897, 7785, 6388, 3813, 4436, 9383, 5939, 10891, 255, 7157, 7532, 1756, 6586, 7905, 1032, 6552, 3684, 10917, 837, 3984, 44};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 5695;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> countryMap = {"ARQPJFUNANLSYDODXALZGYSUDZAYJNUJWNQSIIAHMZDGQPDYQV", "FR-----------QBUHYVYKOGHNMPCIIVKJPXPLNEHVMFOTHULYN", "CFKQBAHGPESV-MGNZXPDTKSVTPSQTACOAYVZSEGKDAPMQMZKQL", "OWYSPPJBBGWK-UOOHNYJSNBUYXIHRHMAFVEN----------HMMS", "AFUQQQWKXSMXY-RWVWAVPJWEFLFYIBTOWNOH-KXVQUTKVLBJZY", "NLGSAPUTTTJAWMADWDHZUAXZGFQGWOEHSPHC--PHAGOCEDMBNZ", "NQJXIFTNKKZDSX-WZKLAHRNIKSPBFDVDEYQ-OQWCMKADDQHFUX", "CAJVWCMRILNURNDI---ILGELADDWUBZRIH-FHNSGZADNKVPJEE", "FNGDYRIRFXETVMJTGNG-RXOQRFAEXMEEEB-YJHOUJIKIHOFXIT", "XKQZSHSPJSNVPBIDIVBN-CRPWUEQAGYD-RTIRVPM-SABKAIKAA", "UJIOWNJDBNGASCCZBNCDJSWNSBQHRT-HDERDVFRL-ZPYGMADXH", "MQTJWDEEOYMZWYGZRJPUWMM-HYTI-GDBMYJUJVBA-MSNOKVWUH", "TJMMHXYKXSUPYMOPDXLBJCZO-X-WDRIISQZCNCPUXUVOWOKDTD", "WGZJDAESAGMWOJRCNMBTVTHTPE-ZHGEYEYRGQLV-DEVACNRIBG", "WAZVEDZNOVDHPQGILAKSWGLRLLMHILZSYNTFVQR-EIMAVOSQRA", "IXDYHUVYZYGZQGTKALEZGIGPHUCCDVJOTVXGCOS-USDQGAXYPR", "WUJLJVCWPVSUMMKULMKEPZDGYACRNUFYWIJKSOQTLZZDCFLERD", "BGTGCZDCANXPSEVPFXCPQNAITVMYFXKTMDJKGJ-LPPRSETXVQI", "YYKMXQZQTQTPWFTXTGYXZCULRKDGDCBYKUSSHZ-LLQFHFZMLYW", "QIHAHFONFAKMEZJHHGKVDMGPLSBXKJDSTNKYQP-EQEDBTGVDMV", "AAZKVVWMDMCXOKTMZBOEYEGCUFTTGGPKMNTLRJ-YCUEWPKANWN", "GORTCYUMIQUVXPGRGTBELQBIKJZILNXZSEKYXQTVZGPXBIYLBH", "FXGXSTKFEBOSJLEVKZWYUKQEZVXDKGKRDUYDMSQUIWIIDANEBW", "ZFDHWEQDNLMCKQVLFIBGHASBEMEDRXEBTWSHDMTGUKDXSOHZGS", "ZNHJBNUFZYOUSQBCAVOLJAHALWGEBWTXNPYGMXQOCQEYLHYUOF", "IFODEMNRIKNAPNQXUTVXRZOSRZEZNNGWKNPLYGYPIGBMESJOLF", "EQEGMVDBTGYLERVPCQYEYQDLRHR-ZFORNBAXULZQUDUDYTKKWV", "PAEVJCEBMRMBWNGIRKOTLMGBVQJ---XOZMFNTUTLZYQFPOFXQD", "RDZPHLXSTVGCGKQIYFMIHBQFFKWR-SZFZNIYGAIJHAUSTMCOZL", "VHPHSDQMYIUHRGVXWEOCTXBBAPNGS-FHRRPQRLPTFFPKHDZETZ", "MGN-LLWNPUAGMRTFMCTIQTPBGVP-ASSXGJQOQYWHVKTDHUWZFJ", "CDVWOLUV---CNBHLDSBITGBUEAB-VCADGYNEHPSXKUAUYMRCAN", "KR-TPTNHWUYN-GIIUAIPUBXBJYE-MLKWFCAOLDEYLMMOAMQGKF", "WLX-XVQAVHLKDLXAXIACVKLZIRW-LTRHGJUOTGTVAZCXQJZRRT", "OW-JKOUDCNAJLJA-GHECZAJHYPUWLQJEINJHPGEAKKTECHXWBW", "DPBMLRFPBPDOWFJNQ-CHVCZUTUPP-PBBMTXXQGEILNZTGTZEOJ", "CQ-IEDPCFWHTVHWXWFK-GEZGDYGB-RERMRQCIVBJNVPEMNSTYN", "PD-UOXQFCDJVWCBFJEKVDOEZQBYP-HRPVYDCFRACXPPBHJUNCA", "EN----------------R--------R-L------------------RV", "PI-DNONTOGSAGFRGDSFKLYSRRRLG-AGMIGRFRBQTXYHQJVAY-T", "---ROPBN--Y--CRPPLDBRRRRUDGK-ZHQQOHCPEBVVFDYWZD-BR", "A------RFX*QZVPEQTPRCAGGE-YN-QXNNINGOUGVYIDHGY-YFR", "TDXU-YDQSEI------------RRRR-I-GPAV--FJOHKBIHOCY-QR", "OOGN-NHHBYHBYYAXMQQHVMVYJGRLC-YPJEHUEQIDDZAYWQ--TR", "T-------DWTBAL-----RRRQWRRR-KUVPESAQENZGBYQZZIT-WR", "RCW-PBKQR-----PAUYLYZELBG-EPNIFO----HBPXFWKIHH--PR", "YGP-ZAFLSOIKVRRRRRRRRRRRRXXXAMUAD--QSBDQSFUGYB-UBR", "ERM-MEUNKALVCSENWVSGVKT-R------------KDXGWDGIT-BRR", "HQETPFRRRRRRRRRFZWEOT-PPZ---WBNN--BWVAZCYINNQHHKMR", "--------------------RRRRRRRRD----MEEVYMVRMUSJPSESQ"};
    vector<int> detachmentSize = {568380, 556870, 573895, 583136, 591598, 601728, 605077, 621181, 569355, 590674, 557876, 656715, 557461, 653329, 581793, 608967, 575043, 1221, 582666, 655171, 630480, 36549, 657078, 630661, 566515, 648687};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 1163611;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> countryMap = {"AAAAAAAA----------AAAA------------AAAAAAAAAAAA", "AA------AASGSAAAA-CCCC-AAAAAAAAAA-AAA-A--AAAAA", "AA-AAAAEDWDFYTIQW-AAAC-AAAAAAAAAA-A--AAA-AAAAA", "AA-AAAA-AADSXESAA-AAACAAAAAAAAAAA-A-AAAA-AAAAA", "AAA-G-----------Y-AAACAAAAAAAAAAA-AAAAAAAAAAAA", "AAA-A-AAAAAAAAAAAAAAACA----AAAAAA-AAAAAA-AAAAA", "AAA-F-CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC---CCCA", "AAA-A-AAAAAAAAAAAAAAAAAAAAAA---A-AAAAAAAA-A-A-", "----U--------------Z---AAAAAAAAAA-AAAAAAAA-AA-", "-AAAAAAA-AAAAAA-AACAAA-AAAAAAAAAA--AAAAAAAAAA-", "-AAAAA*AUAAAAAAZAACAAAVAAAAAAAAA-A-AAAAAAA-AA-", "-AAAAAAA-AAAAAA-AACAAA-AAAAAAAAA--AAAAAAAA--AA", "----Y-------W------Z---AAAAAAAAAA-AAAAAAAAAAAA", "-AAAAAA-AAAAAAAAAAAAAAA-----------------------", "-AAAAAA-AAAAAAAAAAAAAAAAAAAAAAAAA-AAAAAAAAAAAA", "-AAAAAA-AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "---W---AAAAAAAAAAAAAAAAAAAAAAAAA--AAAAAAAAAAAA", "-AAAAA-AAAAAAAAAAAAAAAAAAAAAAAAAA-AAAAAAAAAAAA", "---W---AAAAAAAAAAAAAAAAAAAAAAAAAA-AAAAAAAAAAAA", "CC-A---AAACAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "CAAAAA----CAAAAAAAAAAAAAAAAAAAAA-AAAAAAAAAAAAA", "CAAAAAAAAACAAAAAAAAAAAAAAAAAAAAA-AAAAAAAAAAAAA", "CAAAAAAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "CAAAAAAAAACAAAAAAAAAAKJKHKHKLKGHGKLAAAAAAAAAAA", "CAAAAAAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "CAAAAAAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "CAAAAAAAAACAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "CCCCCCCCC----------AAAAAAAAAAAGGJGJKLGAAAAAAAA", "AAAAAAAAAWAAAAAAAA-AAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAA-AAAAAAAAYYYYYYYYYYYYYYAAAAAAAAAAAAAA", "AAAAAAAAA-AAAAAAAA-AAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAA-AAAAAAAA-AAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAA----------AAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAW", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA-", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA-", "AAAAAAAASADAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAWNHVQWAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA--", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAACCCCCCCCCAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAW-W--AAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA-AAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAE--AAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA-AAAAA-AAAAAAAA", "AAAAAAAAAAAAAAAFFFFFFFFFFFAAA-AAAAAAA-AAAAAAAA", "AAAAAAAAAAAAAF----EFE---A-A-AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    vector<int> detachmentSize = {568380, 556870, 1, 583136, 591598, 601728, 605077, 621181, 569355, 590674, 557876, 656715, 557461, 653329, 581793, 608967, 575043, 566363, 582666, 655171, 630480, 36549, 12895, 124891, 127895, 24189};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 709170;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> countryMap = {"BXOFA-NDRM-SN-WV--V-KL-GYC-HDOMHLEYOZSM", "TII--Y-DPCC-JCSMXYNSTUQU-UMPEHE-KKSDV-L", "BD-BJR-CWPYBF-Q-CZYCG-IRCVECVRUSD-IM-QR", "KPL-VJBP-S--EDVAER--C---WBFGGWI-WTZ--FG", "QTEDVQRXLFUHYA-YUPNBSL-PKBR---P-NTMQ-IY", "U-CU-T-WU-OFNYLDHVQ--KWCAUKYHWAVWL--B-M", "-HZSZIN--C-PH--OE-RG---DQJ-BB-LBRHCIJY-", "HT-WQX--OE-SRC-ZB-ECDVFRH-IFAWCCR-CY--V", "-Q-OOKIXVXKCVO-*-EM-KHRTI-RD--U-OIAS-B-", "IU-PR--ZYMWWU-DIGTZJF-K--ASGKNSQQOPXUTH", "-W-QSFLR-NNPBC---AFLO-D-YEM-JF--Z-JU--E", "KOY--PRNDXGO--YTGDQ-WMQCHE--O-P-H-MCMPP", "HO-M--N-Z-SV-OA-IXGEFPPVCVK-XAU-ASG--ID", "ZA--T-HLGCJOUR-YCD-PQG-J-D-CQB-KC--PM-J", "--D--MQCBVMWJZZOMPHIHA-U-OFH-IS---GDIKE", "JTBMEDMU-D-S--EMOOLDT-GZHJCI---Y-NU--Y-", "YG-OA-ZSCY--B-EGCKVIHE-ZVVEF-BBVLOXB--E", "P--OEAYTLCQKRFFZVSRV-DQ-AY-A--C-H----HM", "XIMXTSBSD-GK--FKYY-JTM-NZ----SE-NZBXTZ-", "-TP-OHGPMWAISMXLJHKZQ-LYRE-XAPUOXIRNOE-", "XA-JPYR-TEFDVWTEDVA-KQVAWJ----G-EFJ---D", "VPHN-EMLA-MR--QAS-ML-OVRG-S-NLWYJAA-TG-", "--AGIJ-A-QH-WE-EG--HRXFOQNCIMZU-H-LW-FQ", "-OHBUCJPWXDATACGTBP---LZQGGK-M----UGRVS", "YEJEWPPPPB--SOCNNB-YYX-GKLLKCVR-UY-XG-Y", "DB-WEPOAHG-JH--TT--DMDFGBHHDY-IIA--MV-K", "-UDYLYBDZDI-K--XBZH-KUGJ--AVKMHCA--RC-F", "-FJPTNVEU-IULCTCS-FWPUDH-IXCA-PW--Y-LPO", "NAUHHPDTXXAOO-VUVD--DZ--Y---KSTO---L-IW", "PZ---NMGX--VABTDV-BRRNRZVFL---G-ZRNXZNI", "O-YUBP-KHSHHM--QF-V--IP-QI-NEBZLPOG-U-F", "HWY-VAQN--RQOKR--C--BTCYUDEAO-UNNVA---P"};
    vector<int> detachmentSize = {689, 853, 248, 226, 264, 65, 939, 73, 468, 429, 162, 999, 50, 422, 801, 23, 116, 637, 592, 45, 278, 119, 303, 720, 380, 593};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 638;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> countryMap = {"P-OLMK-JOWIUQWQOXIT-ACGXKW-IXZAFWJSF", "BVVY-GXZFOQWKKFEMF-YGA-ZLKTBWLEARPY-", "GBCD-C-FXSM-BUM-M-LZC-VGQ-W--NLWJYKQ", "-HSPDGNCY-ET---GBHXFJRH-RPLDO-AEAPNN", "-I-Z-AKQKJV-DYO-HRQZ---JNOMOJ-W-Z-TU", "VL-WZK--SLFIVNL-ICQIIMRDRYSN--FUQVZS", "MOYYLGGS-AUAKUYTW-HP-DRG-Z-EVIMH-IQM", "UOSPDFRQ-TRINHACLLD-CPEY--ZFNCDLFLYI", "LLJVG-PZPMHDQCX--E-YIGMPUG-LQP-AJQRA", "B--ADJUT-NQNTFUIWTLM-TOWBZHE--LAND-S", "A-D---YOH-WSAUQ-IK-KW-GXPWGH-ZLQBWW-", "P---MHZ--JQGSUP-UKYVAN--QVLT-N-QMWJF", "DDU-E-DMBI-CXPLB-W---DEESOK-A-BLHESI", "SKFZJSAPISBYGIQLCMAQN--R-NXVLKOHTGNI", "P-MQZPOI--QELSONVR-JC-AQN-Q-GV-PSJPR", "-UFRKDH-HIX--NLEALGFVO-GDGGB--ZAPCDZ", "XEGWDT--YPBEYPHOTBTDLCSMJE-T-HAQ-PPO", "KDLWX-P-CGY-WXJGBOJVXNYVDBBTDSTNTNL-", "T-FUVNAZI-S-LQ-HB-UAM--RY-U-LHMWNQAO", "XV-E--XD-FCV---XSVMGHS--T-Z--DL--CZD", "VUWJBOFTWVQOJ-FIGMU--LHOXNISPZ-NO-YI", "XJG-EHJ--CDRR-EMLBPL-I-UVKYMUC-AFR-O", "-VOLI-M-LE*WJAXWH-FBEAAXCFCK-LWNQ-BY", "JZDCIDQ--DFCCKSQXFNCMT----IF-YJX-HJR", "AIEBURIOG--WBWICSETE-X-ARPOGBPMOI-AY", "ELEMEP-P-T-DFYQKTGJYVOYNJUH-AA-YV--E", "T--W-KGGVK-GM-RFFDJGYRESWI--KK-KHDCQ", "C-UJ--SK-BRCD-V-EN-CS-PW-EC--H-C-RDW", "M-MW--WZ--LKFULKEXPAU-RWNHIUW--RI-EU", "MO-NH-TXULJLD--LBN-KTC-DCPA----KR-XT", "-HBE-M--UNR--WLHX-H-E-XXTVEVBMZM-A-C"};
    vector<int> detachmentSize = {609, 161, 220, 569, 900, 744, 460, 820, 997, 161, 1000, 183, 469, 258, 264, 694, 309, 957, 511, 433, 379, 254, 17, 590, 575, 267};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 618;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> countryMap = {"WOMP-PVE-LV-NB-J---E", "K--MKNWSOLFKK-JHP--W", "BE-K--MPP-YGZI-DMVKG", "JGWRXQ-UYEROYGC--SZR", "KFYN--CRX*N--JS-M-S-", "TBFGG-OL--D-DY--RR-A", "AMJT-NV--P--XF-YUSBM", "HJ-C--KHU-KDZHERUUHM", "-FGQZOI-A--ZIPB--QOT", "PNLI-RWYZG-MNV-SUNJD", "YJ-EJLD-H---K-HSVZF-", "LKPGZGF-IQ-ETYQJ-VAR", "UGS--V-BOUGG-SMO--Q-", "DFVWRHC-D-XES-MEQMCQ", "L-PUXR-C-HL-WX-NFJJR", "-A-JLUQX--VWPFENHJZ-", "HNG-NQAF-VVCUU-WU-HL"};
    vector<int> detachmentSize = {96882, 90320, 19358, 82732, 80637, 88638, 43236, 34294, 49732, 86156, 1186, 84308, 49312, 92789, 49312, 14324, 27420, 32881, 73865, 91069, 7266, 60052, 98451, 84652, 3991, 58948};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 69753;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> countryMap = {"-ZUYAC-ZMJDC-B--G-KSOS-M-EE-PJ-EF-R-F-I--E--I--J-", "IRPEO-U---HJAC--QM-YA-MPNPDL--Y-V-JSOPSTH---ZYYLB", "YV-ZMJ--AWCFGW--B-RPKNY-SKWUREXH-PM-BMMXPYBOY---P", "-J-N-N----G---AYQK-EM-Q--JZ-KKDISB-TWFZF--OFO--BL", "TNPJQG-N------G-GQPFGABCF-YF-Z-QG--VM-WJ--W-DN-O-", "-WGSVV-E-FOQ--GNORNP--LF-XM-CFGNYSEMF-VKPL-X-A--W", "JBKVNE-W-Z-OGZ-WY-VTPV--TR--SY----S--Q-HYBMT-----", "G--QG-OD--TQ-YNSWQS--HYM-W---VPN-RF-NKNLV-CXVFFIE", "---LAHWM-K-AN--D----V-F--LJ-KA-OTS-K--KGRBNJ-IRTD", "--X-UQNL-SZVHW-W-A-Y-M-IOSEOHKD-Q---WM--SNGXGX-ZU", "--H-R---JOI-HO---PQ---A-QKMDR--GCDQNVINR-N-EFWA-X", "W-JF-----ZZVC-BKD-UQIJL--L-E---BBLQMBX-R-PCU-PAAZ", "R-----ATA--JX-XG-SNZPB---K--AN-I-P-T-FYC-W-G-XB-H", "DQAXJPP--JL--O-Z----IRC-I--R---KKW--------HU-XX-S", "Y--Z-HU-MIMZX-EEND-X--UUCW---MO--YPCZZC-QBC-E-ESG", "--RYG-Y--SQ--FWM-TKQ-PFB-JC----YNI-T-VE-TBF----RY", "ITM-M-SX--VN-CFSTKO-PBSGK-X------VATH--I--TMD-D-U", "A-M-H-N-J-XPEE--GT-W-ZZ-A-----WNA--ES--T--L-M-PWW", "WDCQ-RYSKDDY---GD-Q--ZO-FG-CPW--Q--QOKK-MLC--GIH-", "-Y---SI--QG-ZQFB-----G---GMPK-DYZMDL---P-----N-X-", "P-Q--T-AI-O-CF-EVS----JD--WYW--NLH-J-U-V-EOU-M-FS", "PJ-UC-QJ-YW-TL--YJ---W-L-E-GN-GF-DMTK-BY-RF-O-TL-", "R-KGO-D-J-ZO-QPHY--DRYFHID--B-BO----H-LN-HK---K--", "OW-SFO--RD--AO-Z-RA-NZ-CA--FA-ZM----WWDADW--EBXT-", "--NTN-ALZLQHT-YB-L-WIC-P---ITI-B----G-GM-GDW-MF-G", "U-X-VXTLHW-L-ZN-J-XD--X-E-RW--------K-HP-UD--YT-D", "----UMS-V-UMA--H-F-XNEQAJ-UNS--NLJGPW-QODE-Y----O", "NAZ---TS-Z---YW-IKEN-FFLVZY--S-KHVCSE-C--BWX-X-NS", "MU------O--F-AOVH--*GK-UOESH--OEC--WXQQPR-A-DYW-Y", "--ZR-PA--VZR-YCUW--CCP--BD---X--Y-P-FA-PUWT-EHZ-W", "AXHNS-BV--VVNH--FW-M-YJ--MY----M---L-G--G-QLA---V", "DJ--I-HI-IEJ-RTP-L--X-FH--R-Y-UWTP--I-RR-IV-NGVHF", "SAHJEK-DPVDOXYTY-KL-C-V-XETSDE--W---BJO-MLSBUCZF-", "-WOOYK--N-H-FJK--ST-IAMOW--W--GQI-E--RV-WV-TI-DEO", "G-NI-TP---I--Q--JY---V--VZ----TOFS-W--K-D---FXZZH", "--N-VH--HZDBBG-NE-DS-DIXLJA---YT---TCJ-V-G--WHQRW", "--VNQ-TDEX-IADZCG--X-PZCJ-MIVBJ-VAXM----JA--OBVM-", "--CJQD-GT-----CBOD--C-XQ---J-D---RORKP---PRRLLLIY", "-YIJ-P--BK-Y--FM-A-TO-GP-YZEVRJ-R--CLF-PKNCK--ADL", "-X--BY---VB-HDHFHHVTXVOIZRIGD-G-X-AM-XI-QV-KGHTYF", "P-BKZUA-G-U-ES-L--S---GN-AEKF-BXTC--A-SIT-EA-R-K-", "---MN--G-EEN-C--FTPRPWIYC--N--TUT-BCZOQAKJ--EE-Y-"};
    vector<int> detachmentSize = {66450, 87026, 91632, 7612, 95660, 77806, 77238, 21175, 32237, 36368, 3155, 89287, 94100, 2530, 49, 87767, 7066, 76490, 44382, 53607, 23428, 53099, 12117, 4496, 32166, 18573};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 22259;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> countryMap = {"---------------------------------UIQWUWQYOOQ------", "-QWEERTYTPUQWUPEQWOPQWYOP------------------Q------", "-E----------------------W--QWEERTYTPUQWUPEQWOPQWY-", "-QWUOEQWPOQWUIEYQWIEPET-W--E----------------------", "----------------------T-Y--QWUOEQWPOQWUZCYQWIEPET-", "-UWQEOQWIEWQTYEQWOTRQOQ-R-----------------------T-", "-E----------------------E--UWQEOQWIEWQTYEQWOTRQOQ-", "-OIPOPUOUOWUQEUQWPPEUQP-I--E----------------------", "----------------------W-I--OIPOPUOUOWUQEUQWPPEUQP-", "-QWIOEUQWIOEUQWOEIOQWUR-I-----------------------W-", "-W----------------------I--QWIOEUQWIOEUQWOEIOQWUR-", "-WQIEUQWIOEUQWOEYOQWOWQ-W--W----------------------", "----------------------T-T--WQIEUQWIOEUQWOEYOQWOWQ-", "-UWQEOQWIEWQTYEQWOTRQOQ-R-----------------------T-", "-E----------------------T--UWQEOQWIEWQTYEQWOTRQOQ-", "-OIPOPUOUOWUQEUQWPPEUQP-T--E----------------------", "----------------------W-I--OIPOPUOUOWUQEUQWPPEUQP-", "-QWIOEUQWIOEUQWOEIOQWUR-W-----------------------T-", "-W----------------------T--UWQEOQWIEWQTYEQWOTRQOQ-", "-WQIEUQWIOEUQWOEYOQWOWQ-T--E----------------------", "---------------------TT-Q--OIPOPUOUOWUQEUQWPPEUQP-", "UWQEYQUIQWUXIQWOEYQWIOI-P-----------------------W-", "------------------------W-UWQEYQUIQWUQIQWOEYQWIOI-", "-QWEERTYTPUQWUPEQWOPQWYO*OO-----------------------", "-E----------------------W--QWEUQEUQWIOEUQWIEOQTQQ-", "-QWUOEQWPOQWUIEYQWIEPET-W-QWWWWWQWQWQWRQWRQWRQW-R-", "----------------------T-Y-QWWWWWQWQWQWRQWRQWRQW-R-", "-UWQEOQWIEWQTYEQWOTRQOQ-R-QWWWWWQWQWQWRQWRQWRQW-RS", "-E----------------------E-QWWWWWQWQWQWRQWRQWRQW-RQ", "-OIPOPUOUOWUQEUQWPPEUQP-I-QWWWWWQWQWQWRQWRQWRQW-RX", "----------------------W-I-QWWWWWQWQWQWRQWRQWRQW-R-", "-QWIOEUQWIOEUQWOEIOQWUR-I----------QWE-Q-WQW-Q----", "-W----------------------I---QWEQWEQWEQWEQWEQWEQW--", "-WQIEUQWIOEUQWOEYOQWOWQ-W----T-Z------------------", "----------------------T-T-WQIOEQWUEIQWUEIOQWUEIQO-", "-UWQEOQWIEWQTYEQWOTRQOQ-R-------------------W-----", "-E----------------------T-QQPOUQPOOQWUQOPWUQPRQWR-", "-OIPOPUOUOWUQEUQWPPEUQP-T-W-----------------------", "----------------------W-I-WQEIWUEQUIOQUQOQQIIQIQI-", "-QWIOEUQWIOEUQWOEIOQWUR-W-----------------------O-", "-W----------------------T-WQEIQOWEUQWOUQUIWOUWIOQ-", "-WQIEUQWIOEUQWOEYOQWOWQ-T-W-----------------------", "---------------------TT-Q-WIQOIQWUQIOQWUIQOQIWOWW-", "UWQEYQUIQWUZIQWOEYQWIOI-P----------------------QQ-", "---GFGHGF-R-------------WQWRQTZQWQWTQQXWQTQWYYYYC-", "------ASFASFASQWTQQU------------------------------"};
    vector<int> detachmentSize = {1000000, 1000000, 38955, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 1000000, 31685, 1000000, 31465};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 126080;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> countryMap = {"--R-U-W-WW--Z-OCFPDXWV-QRY-TLMJEB-DZPU-N-RZ-U--K--", "FIUQRR---LV---E-YDOQ-----C--D---ZRJYW--CXB--GO--AI", "--JJTBJYD--XML--IJYZB-ZX-SAYCOHSGEXL-C-I---E---MBJ", "WFEUG--ZY----VT-K-YMFKUD------YMAGJW-R-HKJ-ZDT-SO-", "HF---BS-HXKW--CPGVJAS-T-JSF--F-Y-IHOMYYVCBFK---M--", "L-YZ------Y----S-G--QZ-OTXRGCWS---T-MD--XXV-RQB-C-", "QFP-Y-J-D--BNKIOV--LKACFAH-B-BW--CCA-B-RWOG-UY-DFR", "SQKSSIJNW-FE--I-GGCTRDKJBYN-ODZC--U-RI-AE--XY-ESCR", "-LA--DXUQVOK-OLR-A-OVR---EG--OVAJTI---XU--YDZ-AAX-", "-WR-DI--W-OHPM-W-W-T-I--OUZYSJT--LZTUBHDGODVSW-Y-V", "-VJCYU-SV----BFRTB-AN-H-GII-E-R--SL---CT-KIRFW-P-V", "-M-ZVHOPS--KU-C---Z-WE-NJ-XAGR-CR-RS-ZIS---B-FOVEM", "-KSYIDSMNZG-V-F--OF---FYN--WCVD-VSYU-D--DSSTJ--DAW", "LPRC-A-X-QZ-Q-GII--GWFAWQYV--HWV-A-WSWIDQ-ZWX-KV--", "LFW-FOVFFPY-HE-FODNKZWK--ILPVBIV-DWHKY-QMT-Q-AI--U", "EI-I-O-WXXZGF-A--QY-VISI-DI-O-Q-S-Q--XG--C-X-P-X-R", "KZL-R--C-E-CUM--ZJ-ZTHRIM--UGN-YR----WAE-WFJPKYOCZ", "UNF---E----K-FZM-K-GYZW-UJUD-KQ-LXXSAOHA-SMXQB-KG-", "--NHGWCC-TF--WN--HQP-E-W-LARI--G-EN---E-M-MZ-E--L-", "MHM-JC-ZN-EKDKMZ-GB-XUZKA---S-DL-EY-YI-BUF-CNR--LF", "B-AJPIRXFYK--UAZ-LJSNQ-ZCQ---XHFU--RNS--YJ--F-GSFF", "GZEH-YBRSUSV-M----W-IQRVF-H-VYO--OMOAV-EJCUV-RTI-E", "D--D-IIRF--H-F-N-C-LLYLQH-VZZ-ARSVYX--LMUR-ZJ-Z-O-", "L-LA-OA-SIW----KIA-Y---V--Z----Y-RPI-JDWKDTLTTRE-E", "Z-M-X--XJMGC-S-RBSVVSGQ--WWC-NQG-O--DL-G-UP-DKWZOT", "FE-SJSEQ-AR--VJ-BT-TDPTZ----VTWHV-HZSMCJP-G--P---B", "-H-WT---ZHETWZBWHR-JVP--BNGIHTXK-DLCCWX-C--E---NE-", "NO-EOSR-NV-CM-DE--WF---RQ-BG-EIUBPGE--ZIWS--DS--D-", "Z-MNWZ-TE-TBEWFKUI-XZR-JC--EF-WTTRPPX-O-PSREL-RPTH", "-D-D-GR-I-GYGJDL--MPJPG-EAJW--UWV-NH-YSW-VRA---X-O", "ZKEPYKJ-JXQS-RGOCLF---VL-HKGTEF-U----KF-QX--------", "L-BH--J-FRTJ-PIRFB-N-S-FMKK--WOT-G-QPWUYW-HRSJ-AL-", "M-NJM-YFHN-RIBEQCB----H-YJ-ZYRRV----NRX-XGWSKMB-E-", "IN-YUDFU-J---KY-RSBW-DXV*--WQW-TXJ-LTGBA--RMP-G--J", "E-A--CDTE-JJKR-UL-N--GSJR--NTE-R--KAFYZ-I--GJT-MJF", "-S----YYVSSZUFCQS--AB-M-CQFBPVE-EYYBPFWRM--F-IM-ZQ", "DUO--A--A-Z-H-D-W--OCJABSR--NY-ZQPH-WY-LXB-U-----Z", "IKFRSC--KAPISL--I-FMR--MCZX--WXVTFZ---LLOUB-----BS", "OYUGI-G-FRS---ZY--UJF------CM---VQVFH--RYX-FT-P-B-", "--MUBISQG---EYHFRO-KGMQPPPPW--L-XPV-K-JPI-OHXP-GI-", "-RM-B----DOYSUIG--M-ENT-JHHFG-Q-U-GE-WM--OV-H-AHTN", "-BZQ--WH--RM-JBZBQ-E-VJAKQXW-VRGG-Z-WC--FG-QCZ-W-L", "-XTPOKJS--YK-LEV-CC-L--BX-F-NNMSF-T-VZDHXCO--NQUJG", "---MG---XJ-SSSQ-BY--VD-VE-------OYYNP-PXQXN--GS-EE", "-Y--ZN-I-RT-YS--J-N--J-Z-OS-K-MF-AS----IBA-N-HJ---", "--GZP-W-J-FC-EVXPAD-WYR--EJ--D-VMBG--E--HYTBAR-WA-", "-A-GE-K-RCPBMNJSMX-HH----F-BIXTAWBW-AU-NFW-GXIY---", "DIBE-ZJYNUBXXKGAK-TYZBCF-TIB-YUW--AYSTAKAGIR-EDQ-Q", "J---ZYS-S-EVBZN-H-FVVSUOGQGMUHJ-RC-Q--RB-B-E-A-BCD", "-KVYHQ--IDHMOGLH-JI-LQ--C--XEHW-ZBU-OD--VU-DN-KE-B"};
    vector<int> detachmentSize = {494, 16, 402, 980, 816, 164, 73, 475, 937, 35, 614, 813, 23, 376, 514, 381, 471, 189, 521, 879, 542, 861, 689, 205, 278, 438};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 294;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> countryMap = {"QKJLULPDUIPXJBWHVTZDHYYIHJQNKIDHHVGFKSTQBCXHVSJLLU", "RESFXCJPHEHEPMQLYPRCMKREBWXNSMHERJUYBMRNJXTGNUIXNT", "NBEEEZKIXTCYCRVTMMTAAJGNVJPZVLTUQEWRONBJFGTCVXHFOX", "HCSFDMOOFIZDELSKGVAVTSGLBYTLKOLJIGYMQRSEZJJPWNPKGC", "RGUDGICVFVUWHVFNPSEVHHLESEEZGMWCNRLHUPAMOENUTPXAKO", "EETNIKXULYCEPQMFBZCVRDNTJDMJCLITLPRMUBVFIVQQUJDHGM", "WATGIOLRXVPQLEDJFGSYFJESJMAEXPPBOOWQPWFILFZXFVUXLI", "MWAVMYMDHITXBPZWBPWCPSSFHXIERBQDEBWTZIEIOLABQJCHLX", "ISGQDEATZPWRBEQGEQAJMKRLATNRKDVZYKCCSDMTWOIGHDKRHS", "FDWZZEAITSZYRUDKWTZATLWQLIAAYZHGWYOCMDHQFSJMZJNPPV", "RJPXJQQZWFYMFKGYLAJTAZIROSHEUZIUJLHIGESQGMNRREUQXG", "TJMGCHSUSTSNMIONICEYVUXBIIXZEAHBZXRYNFTTITVJRBMCQM", "QJYTVKOOVTRQWRBKEQHQEHVBKASPUYSYZUHKJZIHAAMVRRBTRC", "MWDFHFCSAOQPWOLQGMEGJQLDRRJHOCTHVKVYBMAMORQKMUXKMQ", "DWDCTXSZWDEZIAHJCTMQWDYGJUWSALEDTHKJZLYENEAILVZKWR", "FMABIXBDDDIHYXQCOCFQAMBWAGERVINQRMESIWCCJWXEIQBEFR", "BEZUCGVQODIZTLRWQOAXIUYEYFHMDKPRNMYEDAFVYZSPZHXOWQ", "YCEZHPSHYZHWZUOQHFZWRSPVFEUDMQDBYXTMACQSHLMBSEDHEM", "NACHNVOAZRYMLMKWMKEKTDPIHMVYSWPXPDDCKNOGXFFIZHHNBF", "SJKERRNSLQRAURDANLSLGQCBYOBWKXOZOSYWEUTCPAWFNQJOWP", "CGEAWNTJFHSKHDPEAPJFRRGQRYYUJEJSREDYPLGGCBIFOTDOKG", "KNPUOUGMPBRXYPJKWPUMKPVAEXAVPQUBUIDDUVAXCLXXIUROSU", "OWEWVXPZUSQISXVRABRQBGMSZHEWPVXDDRXBSEDYROMUQWGPGA", "QBVTDIEKKTTBUFCBVZBCVXFECHKNBLDYIOYRIVQCGPGNGQYNZA", "CZKJTXWVWGUUPPFVKXQXZZZNJWNEKDISLAAAAKZULQZBNCRVAA", "VXNKCPBCQYADTWAVETWJFKIYOEBJPXGIFEXQRVPVRTOEMTNEXI", "TUJIZTFLRNZZPASZKRXJKXEUKMYJYAKBIHKPTJFWWEFDWPBKSI", "ICVDGODAMZOCRZMUMGBJIYEBJWVYVKNBMYJMPFDIQKNGQTMFHP", "ZUIGGRHYAVVOBCUFIPVQFROCLUSEDWGKTPRLVPSWQAMLNBWVWM", "XJEVLFDQBPSEUUZJAGTDQPIPPWYLTJDBKNPERVLKKEDJQKZAFK", "QDMILTRIHMGYFDPALOKUJEKTNVHCIIRKCIYDURYDULSXPLZRIY", "RRKCOBURORKFGSRFMVOTHKMIBXELXINUNSXXLPGOKUVPWPNRPK", "RLEXBZLSMQTTJUTDQBDJAYRMKYYSKMBRWDZNXDCNAJISSXTAZO", "NBZOLKRGWKZGDHLOXAFSCSQ*YSDKVCVZVXVWYRSEULYKGBRVOH", "USMCZTXCEYIQYIHCBFFNLGTASONGCHQNTBSACCXAJSQHYBDFTI", "MMFPTCJPGSAKXHNQAXBYIOWMLLUOBKJAXCGYOKETMNEXIFUNDU", "SQKZKDLXFMISHEYEOOSFMQIJXXCNJXCFTEJXAASFMKTVTOYQXZ", "LTIUVBIWUUGSKIENFZMXLITITRVOHJETRIRKEHPIZUXNWYDQEH", "TRTETQTSOKNBPRUVSSNXDAPRZKLMNBHTMKCJDMDOFULDQGVXTO", "BXALKHOICZSWEWAWQWUDYDSLBLAEWNTBVSOGZVATVBHKZFDNXE", "HOZSVSCABKMXFSQYOXJIRLBIEYRNIGRFWTZYCFSDYYZKNASAFN", "CNZSXRNUHPXITDJRWNQUYDDCGXGHDNHGEJAMFOTPGYSIXRMTOA", "PJQYYGROSJVFCTOHPFIPEPCGMXAIZSBJWGUTJRABALNIQBWNXL", "HUFPHTHPWCIVPWJLSDJXQEPFOIPNIKEAPPPNGXPQNAOAOEOOBZ", "HDSOSCLKSCYZMBWEUKRZVGSKUSBICFFUVYLYTCEFJCAJHLEFCJ", "OYQCRXQBOSBCFRKERUJXWWGYEURWQWFQEXOADTBMLZDMXSOIED", "FNRWAZDENICSNSSQCJZCECAKLDGASQNPMQAQMTASLUHGJQTAEJ", "WWXPCSGGUEQRJQMIYEZGWWJJEROYSFZLFRFAIVOWKZGDZVWSGQ", "IWNIREKHNHLIDPCPABFZLOZPHOIOZVCREYCBLYBJEGIGWURHLY", "ANGALMSYANQHLJLBDXQKCFWTBSEGBEPHJXHDMABJIOVCEDGXZS"};
    vector<int> detachmentSize = {11729, 75592, 16076, 58716, 38141, 98822, 42197, 75843, 2263, 50085, 28975, 74505, 65797, 95471, 45532, 47599, 69766, 26024, 90570, 24717, 43554, 99180, 8372, 38924, 16716, 31866};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 164008;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> countryMap = {"I-OFKB-KD-F-OYQY-D-OJSD-JH-BSN-O-AIH--STL-HHE", "O-XL-FH-VQJL-BV--Q-ZU--DJC-UU-KQWYYL-P-J--OCH", "O-ONDFK-Z---P-P-T--ASGQ-RSALE-VOT-----C--G--O", "KDVXDO-S---------C-ZJ-RBU----I-INO-V-H---KW--", "XZ--QFTV-VLRK--A--LGBNBAQH--A---E-----C-G-W--", "I-G--HAN-AWVACWKWBYMJJ-YHQD--DTQ-F-XQ-FTI--W-", "CWLW----NK--AS--W---P-Z-Q-UW-ZRU--XEKSRE--CN-", "-KLA--CI-XMTQED-D-YF--AZQC--VC--DJZS-B-PSHW-Y", "----ZO-G-MSE-Z--B-UIO------CZ-LGH--------Z-X-", "EA--D-WO-BOC-EPA-FK--HLFFO-WD----K---D----PEB", "--U-FXOX--SO-FS-Q-B---QZD--JCL-JA-S-UX-S-LVKO", "GE--TVFYKZPCO---QPYL-J---H---UO-N-QIYC-E-X---", "---MHGYD-M-NND-L-GPHGMVUCIRS--XKX-IVCWTXUCQRE", "ZB--G--X---RGG---MQ-LLU-CK-YFGZBP-M-DS-GGY--S", "-XMX-EAMC-L-W-C-UE-MF-E-TP--E-F---V-FSDJ-BA-M", "BJ-V--S--X--MS-JCO*HK-D-H-M-B-HO-S--X---HHVU-", "--XU----D--SB--VB-GTC-C-HR-O-TE-R--TZE--G--YB", "R-M-YSLZ--C-X-JFY--F--BZOH-C---UL-HM-VJZ-RSL-", "-WSOOA-Z--X-PLAUUQ-N--M--TC--KP--ES-ZB----P--", "-EXTBHT-IE--FUW--R-UU--XBJ-R---S-R-AXUYY--HGQ", "------BDD-K---G-NYL-ONU-YGAEKF--L-----FNJCJCM", "JY---G-JFG-YKXMOOSCQIXE-LIM--MKOXU-XYY-N--ZV-", "-KMF-R----L--KLSALAZ-CI-BTRS-LS--NA--MHUACWEQ", "OWVL-H--TWU--LKNZ-NENPK-COD---R-YITRJ----N---", "-AFK---B--XKW--BOQCY--M---B-AY-AJN-P----ND-CJ", "----DQV-I-HO--X----L-N--VDC-EH-WY-------MFTV-", "-WUG--C--ZV-J---JGUK-N-ACJAJX-BJ----F----DXI-", "F-H-I--------NSEHXL-I-MO-Y-BUUUXG--YEF-Q-I---", "-J---Z-S--S--F-XCQVH-QJ-CH------MVJSTS-O-HJSC", "I-L-OK--M-GN-UJIZH--JYS--U-I-R---KLT-R-L-FRWL", "---Y--H-V-MX---JH--VK---FFVE--RI-Z-YY-XU-N-H-", "J-H-N---H-K-WS--I-NCEMOP-W---R-T-N-LBEKY-JD-V", "IZ--L--VEA---C-IG-N--F--K-UPHGMC-P-EDNW-QU-CN", "-AWRJ--ZZT-Z--XHD-L--NM-YKXKE-T-SQ----WXNH-T-", "DTWY---TVSK-H-ARX--V-CA--YR--CD-RSSKT--T--S--"};
    vector<int> detachmentSize = {375961, 361667, 990064, 664167, 101739, 422349, 481786, 343527, 128341, 332184, 258595, 184115, 843783, 937365, 614458, 319651, 166671, 835516, 490856, 834982, 409705, 812387, 217073, 792943, 157481, 664773};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 618006;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> countryMap = {"--------------------------------------------------", "----XXXXXXIIIILLLLLKLLLLLLILIIPIIIIILILILLILILILIL", "----A--------------K----------P-P----O------------", "--DD*BTTTTTEEEEEEEEK-----------PPPPPPOPPPPPPPPPPPP", "--D-C--------------K-----------------O------------", "--D-YYYYYYYWWW-----K-----------------O------------", "--D----------W-----CZECH-------------OOOOOOOOOOOOO", "--DDXDDDD----W---------IRELAND--------------O-----", "----X--------V---------------GERMANY--------O-----", "----X--------B-------------------V----------O-----", "----X--Q-----Y-------------------X----------O-----", "-LLLLLLQLL--WPPPWW---ABRACADABRADT----FFFF--O-----", "----X--Q-----W---I---D-----------T----F--F--O-----", "----X--Q--WWWQWERW---EVICEUKNOWNOT----FFFFOOO-----", "----O--Q-----W-------------------T----F--F--------", "----K--Q----SDBGIQ---X-FILES-----T----FFFF--------", "----X--Q----I----S---YYY------IIIIIIII--O---------", "----X--Q----I----W----W----------T------O---------", "----X--Q----IISIIQ----TRYTRYTRYTRY------OOOOO-----", "----XGGQ------S------------------T-----------O----", "-----R--------S-------YYYYYYY---TTRRRRRRRRRTRTERER", "-----R----QSSSSSSSS---Y-----Y---U------Z----------", "-----R-------U----S---YYYYYYY---K------Z---Z------", "RRRRRR-------PYQWXB-------Y-----K------ZZZZZ------", "-----RYYYYYYY--V----------Y-----J------Z---Z------", "--X-X--X-XX----VVVVVV-----Y-----J------Z---Z------", "--ASDUGIOQW----V---E---JJJJJJJJJJ------ZZZZZ------", "--AS--DQWHYGDIQW---T---J---J---J-------Z---Z------", "------U------------U---J---J---J-------Z---Z------", "------U------------I---J---J---J-------ZZZZZ------", "------U------------JJJJJJJJJJJJJ------------------", "------U------------I----------J-------------------", "------U------------I---------AAAA----CCC--DDD--EEE", "------U------------I---------A--A-BB-C-C--D-D--E--", "------U------------N---------A--A-BB-C-C--D-D--E--"};
    vector<int> detachmentSize = {528117, 991957, 974012, 679897, 949565, 30624, 316380, 274615, 253406, 345777, 939727, 528429, 855043, 600087, 211717, 535265, 252140, 167923, 250084, 351128, 890515, 723231, 702541, 251131, 465187, 967422};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 839336;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> countryMap = {"--------------------------------------------------", "----XXXXSDJBGJBHDGQODWXZCNCZXNCBZXNCZXMILLILILILIL", "----W--------------K----------P-P----O------------", "--DW*WBTTTTTTTTTTTTK-----------PPPPPPOPPPPPPPPPPPP", "--D-W--------------K-----------------O------------", "--D-WWWWWWWWWW-----K-----------------O------------", "--D----------W-----AAAAA-------------OOOOOOOOOOOOO", "--DDXDDDD----W---------IRELAND--------------O-----", "----X--------V---------------GERMANY--------O-----", "----X--------B-------------------V----------O-----", "----X--Q-----Y-------------------X----------O-----", "-LLLLLLQLL--WPPPWW---ABRACADABRADT----FFFF--O-----", "----X--Q-----W---I---D-----------T----F--F--O-----", "----X--Q--WWWQWERW---EVICEUKNOWNOT----FFFFOOO-----", "----O--Q-----W-------------------T----F--F--------", "----K--Q----SDBGIQ---X-FILES-----T----FFFF--------", "----X--Q----I----S---YYY------IIIIIIII--O---------", "----X--Q----I----W----W----------T------O---------", "----X--Q----IISIIQ----TRYTRYTRYTRY------OOOOO-----", "----XGGQ------S------------------T-----------O----", "-----R--------S-------YYYYYYY---TTRRRRRRRRRTRTERER", "-----R----QSSSSSSSS---Y-----Y---U------Z----------", "-----R-------U----S---YYYYYYY---K------Z---Z------", "RRRRRR-------PYQWXB-------Y-----K------ZZZZZ------", "-----RYYYYYYY--V----------Y-----J------Z---Z------", "--X-X--X-XX----VVVVVV-----Y-----J------Z---Z------", "--ASDUGIOQW----V---E---JJJJJJJJJJ------ZZZZZ------", "--AS--DQWHYGDIQW---T---J---J---J-------Z---Z------", "------U------------U---J---J---J-------Z---Z------", "------U------------I---J---J---J-------ZZZZZ------", "------U------------JJJJJJJJJJJJJ------------------", "------U------------I----------J-------------------", "------U------------I---------AAAA----CCC--DDD--EEE", "------U------------I---------A--A-BB-C-C--D-D--E--", "------U------------N---------A--A-BB-C-C--D-D--E--"};
    vector<int> detachmentSize = {187686, 198736, 143690, 120045, 137346, 197883, 148660, 147655, 182300, 162671, 115073, 177839, 129538, 113047, 114636, 190063, 157395, 196537, 160276, 139599, 174133, 122261, 139988, 187131, 162894, 193697};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 466184;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> countryMap = {"--------------------------------------------------", "----XXXXSDJBGJBHDGQODWXWCNCWXNCBZXNCZXMILLILILILIL", "----W--------------K----------P-P----O------------", "--DW*WBTTTTTTTTTTTTK---PEONE---PPPPPPOPPPPPPPPPPPP", "--D-W--------------K---HSREP---------O------------", "--D-WWWWWWWWWW-----K-------GGHSDHGF--OOO----------", "--D----------W-----AAAAA----------EDC--OOOOOOOOOOO", "--DDXDDDD----W---------IRELAND------BA------O-----", "----X--------V---------------GERMANY-SDASC--O-----", "----H--------B---LABYRINTHHHHH---V-----CZX--O-----", "----X--Q-----Y-------------------X-----W----O-----", "-LLLLLLQLL--WPPPWW---ABRACADABRADQ----FFFF--O-----", "----X--Q-----W---I---D-----------T----F--F--O-----", "----X--Q--WWWQWERW---EVICEUKNOWNOR----FFFFOOO-----", "----O--Q-----W-------------------Z----F--F--------", "----K--Q----SDBGIQ---X-FILES-----T----FFFF--------", "----X--Q----I----S---YYY------IIIIIIII--O---------", "----X--Q----I----W----W----------T-T----O---------", "----X--Q----IISIIQ----TRYTRYTRYTRY-UFU--OOOOO-----", "----XGGQ------H------------------T-----------O----", "-----R--------S-------YYYYYYY---TTRRRRRRRRRTRTERER", "-----R----QSSSSSSSS---Y-----Y---U------Z----------", "-----R-------U----S---YYYYYYY---K------Z---Z------", "RRRRRR-------PYQWXB----Z--Y-----K------ZZZZZ------", "-----RYYYYYYY--W-------Z--Y-----J------Z---Z------", "--X-X--X-XX----VVVVVV--Z--Y-----J------Z---Z------", "--ASDUGIOQW----V---E---ZZZJJJJJJJ------ZZZZZ------", "--AS--DQWHYGDIQW---T---J---J---J-------Z---Z------", "------U------------U---J---J---J-------Z---Z------", "------U--SADSGI----I---J---J---J-------ZZZZZ------", "------U-----DFVGFD-JJJJJJJJJJJJJ------------------", "------UOUWQ--SA----I----------J-------------------", "------U---SFASFAS--I---------AAAA----CCC--DDD--EEE", "------U-------W----I---------A--A-BB-C-C--D-D--E--", "------U-------Q----N---------A--A-BB-C-C--D-D--E--"};
    vector<int> detachmentSize = {107308, 114383, 111633, 109041, 107117, 106980, 106784, 106929, 112696, 113515, 110595, 108377, 108174, 108432, 112084, 113720, 109936, 106822, 114529, 108191, 112235, 112558, 111884, 110814, 112026, 106888};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 427385;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> countryMap = {"--------------------------------------------------", "----XXXXSSSSSSSSSGQODWXWCNCWXNCCZXNCZXMILLILILILIL", "----W--------------K----------P-P----O------------", "--DW*WTTTTTTTTTTTTTK---PEONE---PPPPPPOPPPPPPPPPPPP", "--D-W--------------K---HSREP---------O------------", "--D-WWWWWWWWWW-----K-------GGHSDHGF--OOO----------", "--D----------W-----AAAAA----------EDC--OOOOOOOOOOO", "--DDXDDDD----W---------KKKKKKK------BA------O-----", "----X--------V---------------GERMANY-SDASC--O-----", "----H--------V---LABYRINTHHHHH---V-----CZX--O-----", "----X--Q-----Y-------------------X-----W----O-----", "-LLLLLLQLL--WPPPWW---ABRACADABRADQ----FFFF--O-----", "----X--Q-----W---I---D-----------T----F--F--O-----", "----X--Q--WWWQWERW---EVICEUKNOWNOR----FFFFOOO-----", "----O--Q-----W-------------------Z----F--F--------", "----K--Q----SDBGIQ---X-FILES-----T----FFFF--------", "----X--Q----I----S---YYY------IIIIIIII--O---------", "----X--Q----I----W----W----------T-T----O---------", "----X--Q----IISIIQ----TRYTRYTRYTRY-UFU--OOOOO-----", "----XGGQ------H------------------T-----------O----", "-----R--------S-------YYYYYYY---TTRBBBBBBRRTRTERER", "-----R----QSSSSSSSS---Y-----Y---U------Z----------", "-----R-------U----S---YYYYYYY---K------Z---Z------", "RRRRRR-------PYQBBB----Z--Y-----K------ZZZZZ------", "-----BBBBBBYY--W-------Z--Y-----J------Z---Z------", "--X-X--X-XX-B--VVVVVV--Z--Y-----J------Z---Z------", "--ABBUBBBB-B---V---E---ZZZJJJJJJJ------ZZBBZ------", "--AS--DQWHBBBIQW---T---J---J---J-------Z---Z------", "------B------------U---J---J---J-------Z---Z------", "------U--SADSGI----I---J---J---J-------ZZZZZ------", "------U-----DFVGFD-JJJBBBBBBBJJJ------------------", "------BOUWQ--SA----I----------J-------------------", "------U---SBBBFAS--I---------AAAA----CCC--DDD--EEE", "------U-------W----B---------A--A-BB-C-C--D-D--E--", "------U-------Q----N---------A--A-BB-C-C--D-D--E--"};
    vector<int> detachmentSize = {108343, 103610, 106951, 107112, 107410, 107925, 106937, 106929, 107540, 107673, 106930, 106930, 108254, 108176, 106930, 108503, 107738, 107541, 195955, 108356, 108220, 107134, 107712, 108992, 108306, 106888};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 427634;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> countryMap = {"--------------------GF-------RE------SA-----------", "----XXXXSDJBGJBHDGQODWXZCNCZXNCBZXNCZXMILLILILILIL", "----W--------------K----------P-P----O------------", "--DW*WBTTTTTFQTTTTTK---PEONE---PPPPPPOPPPPPPPPPPPP", "--D-W--------------K---HSREP---------O------------", "--D-WWWWWFSDFD-----K-------GGHSDHGF--OOO----------", "--D----------W-----AAAAA----------EDC--OOOOOOOOOOO", "--DDXDDDD----W---------IRELAND------BA------O-----", "----X--------V---------------GERMANY-SDASC--O-----", "----X--------B---LABYRINTHWEFWEFSDFX---CZX--O-----", "----X--Q-----Y-------------------X-----W----O-----", "-LLLLLLQLL--WPPPWW---ABRACADABRADT----FFFF--O-----", "----X--Q-SD--W---I---D-----------T----F--F--O-----", "----X--Q--WWWQWERW---EVICEUKNOWNOT----FFFFOOO-----", "----X--Q--W------W---E-I-------NOT----FFFFOOO-----", "----X--Q--WWWQWERW---ESFAFFKNOWNOT----FFFFOOO-----", "----O--Q-----W-------------------T----F--F--------", "----K--Q----DASDASD--X-FILES-----T----FFFF--------", "----X--Q----I----S---YYY------IIIIIIII--O---------", "----X--Q----I----W----W----------T------O---------", "----X--Q----IISIIQ----TRYTRYTRYTRY------OOOOO-----", "----XGGQ------S------------------T-----------O----", "-----SJIDHSODJ-UGHSDUAFAUIOFY---TTRRRRRRRRRTRTERER", "-----R----QSSSSSSSS---Y-----Y---U------Z----------", "-----R-------U----S---YYYYYYY---K------Z---Z------", "RRRRRR-------PYQWXBASDASDAS-----K------ZZZZZ------", "-----RYYYYYYY--V-------Z--Y-----J------Z-Q-Z------", "--X-X-CXZCCWEFWFSDSD---F-SDF----J------ZQW-Z------", "--ASDUGIOQW----ASDAS---ZZZJJJJJJJ------WDZZZ------", "--AS--DQWHYGDIQW---T-D-J---J---J-------Q---Z------", "------U------------U---ASD-J---J------QW---Z------", "------U--SADSGI----I---J---A---J------DZZZZZ------", "------U-----DFVGFD-JJJJJJJJJJDJJ-----QD-----------", "------U--WQ--SA----I----------JAS-QWD-------------", "------U---SFASF----I---------AAAA-DASCCC--DDD--EEE", "------U------------I---------A--A-BB-D-C--D-D--E--", "------U------------N---------A--A-BB-C-C--D-D--E--", "------U---SFASF----I---------AAAA----CCC--DDD--EEE", "------U------------I---------A--A-BB-C-C--D-D--E--", "------U------------N---------A--A-BB-C-C--D-D--E--", "------U---SFASF----I---------AAAA----CCC--DDD--EEE", "------U------------I---------A--A-BB-C-C--D-D--E--", "------U------------N---------A--A-BB-C-C--D-D--E--"};
    vector<int> detachmentSize = {147763, 133880, 108898, 162964, 165719, 176271, 146905, 132148, 153420, 194508, 149464, 150916, 116651, 131434, 186747, 179974, 158268, 115194, 193636, 138486, 173888, 158595, 121887, 175014, 126796, 114028};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 487548;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> countryMap = {"--------------------GF-------RE------SA-----------", "----XXXXSDJBGJBHDGQODWXZCNCZXNCBZXNCZXMILLILILILIL", "----W--------------K----------P-P----O------------", "--DW*WBTTTTTFQTTTTTK---PEONE---PPPPPPOPPPPPPPPPPPP", "--D-W--------------K---HSREP---------O------------", "--D-WWWWWFSDFD-----K-------GGHSDHGF--OOO----------", "--D----------W-----AAAAA----------EDC--OOOOOOOOOOO", "--DDXDDDD----QQQQ------IRELAND------BA------O-----", "----X--------V--QQ-----------GERMANY-SDASC--O-----", "----X--------B---LABYRINTHWEFWEFSDFX---CZX--O-----", "----X--Q-----Y-------------------X-----W----O-----", "-LLLLLLQLL--WPPPWW---ABRACADABRADT----FFFF--O-----", "----X--Q-SD--W---I---D-----------T----F--F--O-----", "----X--Q--WWWQWERW---EVICEUKNOWNOT----FFFFOOO-----", "----X--Q--W------W---E-I-------NOT----FFFFOOO-----", "----X--Q--WWWQWERW---ESFAFFKNOWNOT----FFFFOOO-----", "----O--Q-----W-------------------T----F--F--------", "----K--Q----DASDASD--X-FILES-----T----FFFF--------", "----X--Q----I----S---YYY------IIIIIIII--O---------", "----X--Q----I----W----W----------T------O---------", "----X--Q----IISIIQ----TRYTRYTRYTRY------OOOOO-----", "----XGGQ------S------------------T-----------O----", "-----SJIDHSODJ-UGHSDUAFAUIOFY---TTRRRRRRRRRTRTERER", "-----R----QSSSSSSSS---Y-----Y---U------Z----------", "-----R-------U----S---YYYYYYY---K------Z---Z------", "RRRRRR-------PYQWXBASDASDAS-----K------ZZZZZ------", "-----RYYYYYYY--V-------Z--Y-----J------Z-Q-Z------", "--X-X-CXZCCWEFWFSDSD---F-SDF----J------ZQW-Z------", "--ASDUGIOQW----ASDAS---ZZZJJJJJJJ------WDZZZ------", "--AS--DQWHYGDIQW---T-D-J---J---J-------Q---Z------", "------U------------U---ASD-J---J------QW---Z------", "------U--SADSGI----I---J---A---J------DZZZZZ------", "------U-----DFVGFD-JJJJJJJJJJDJJ-----QD-----------", "------U--WQ--SA----I----------JAS-QWD-------------", "------U---SFASF----I---------AAAA-DASCCC--DDD--EEE", "------U------------I---------A--A-BB-D-C--D-D--E--", "------U------------N---------A--A-BB-C-C--D-D--E--", "------U---SFASF----I---------AAAA----CCC--DDD--EEE", "------U------------I---------A--A-BB-C-C--D-D--E--", "------U------------N---------A--A-BB-C-C--D-D--E--", "------U---SFASF----I---------AAAA----CCC--DDD--EEE", "------U------------I---------A--A-BB-C-C--D-D--E--", "------U------------N---------A--A-BB-C-C--D-D--E--"};
    vector<int> detachmentSize = {999477, 999338, 999088, 999629, 999657, 999762, 999469, 999321, 999534, 999945, 999494, 999509, 999166, 999314, 999867, 999799, 999582, 999151, 999936, 999384, 999738, 999585, 999218, 999750, 999267, 999140};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 3996872;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> countryMap = {"-------ASYSADGGQWID---DGI--GIDQWG----SA-----------", "----XXXXSDJBGJBHDGQODWXZCNCZXNCBZXNCZXMILLILILILIL", "----W--------------K----------P-P----O------------", "--DWYWBTTTTTFQTTTTTK---PEONE---PPPPPPOPPPPPPPPPPPP", "--D-W--V-----------K---HSREP---------O------------", "--D-WWWWWFSDFD-----K-------GGHSDHGF--OOO----------", "--D-----V----W-----AAAAA----------EDC--OOOOOOOOOOO", "--DDXDDDD----QQQQ------IRELAND------BA------O-----", "----X--------V--QQ-----------GERMANY-SDASC--O-----", "----X------VVV---LABYRINTHWEFWEFSDFX---CZX--O-----", "----X--Q--VV-Y--------W----------X-----W----O-----", "-LLLLLLQLLV-WPPPWW---ABRACADABRADT----FFFF--O-----", "----X--Q-SD--W---I---D-----------T----F--F--O-----", "----X--Q--WWWQWERW---EVICEUKNOWNOT----FFFFOOO-----", "----X--Q--W------W---E-I-------NOT----FFFFOOO-----", "----X--Q--WWWQWERW---ESFAFFKNOWNOT----FFFFOOO-----", "----O--Q-----W-------Q*Q------FF-T----F--F--------", "----K--Q----DASDASD--XQFILES---F-T----FFFF--------", "----X--Q----I----S---YYY------IIIIIIII--O---------", "----X--Q----I----W----W-------F--T------O---------", "----X--Q----IISIIQ----TRYTRYTRYTRY------OOOOO-----", "----XGGQ------S------------F-----T-----------O----", "-----SJIDHSODJ-UGHSDUAFAUIOFY---TTRRRRRRRRRTRTERER", "-----R----QSSSSSSSS---Y-----Y---U------Z----------", "-----R-------U----S---YYYYYYY---K------Z---Z------", "RRRRRR-------PYQWXBASDASDAS-----K------ZZZZZ------", "-----RYYYYYYY--V-------Z--Y-----J------Z-Q-Z------", "--X-X-CXZCCWEFWFSDSD---F-SDF----J------ZQW-Z------", "--ASDUGIOQW----ASDAS---ZZZJJJJJJJ------WDZZZ------", "--AS--DQWHYGDIQW---T-D-J---J---J-------Q---Z------", "------U------------U---ASD-J---J------QW----------", "------U--SADSGI----I---J---A---J------DZZZZZ------", "------U-----DFVGFD-JJJJJJJJJJDJJ-----QD-----------", "------U--WQ--SA----I----------JAS-QWD-------------", "------U---SFASF----I---------AAAA-DASCCC--DDD--EEE", "------U----F-------I---------A--A-BB-D-C--D-D--E--", "------U----FF------N---------A--A-BB-C-C--D-D--E--", "------U---SFASF----I---------AAAA----CCC--DDD--EEE", "------U------------I---------A--A-BB-C-C--D-D--E--", "------U------------N---------A--A-BB-C-C--D-D--E--", "------U---SFASF----I---------AAAA----CCC--DDD--EEE", "------U------------I---------A--A-BB-C-C--D-D--E--", "------U------------N---------A--A-BB-C-C--D-D--E--"};
    vector<int> detachmentSize = {527014, 145310, 211707, 314515, 890652, 88405, 630959, 847092, 15519, 360531, 900524, 480174, 292503, 705206, 843360, 261278, 856300, 379553, 149626, 937567, 956919, 575520, 109516, 552575, 338253, 681058};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 1088573;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> countryMap = {"QPKUMBEZQUCLWYHEBNUJNFW--N------------------------", "QOFZVNGERDDMLNPGAMNGFRZ--G------------------------", "KTFLGXAFTCGSZEXFTBURRYLFDM------------------------", "YJSLKYBWSRQYLEPQCUFQKKE--C------------------------", "NONEWBABVFQEEIVFRNQXEGU--M------------------------", "NPWUTNHQGKNHVVFHJBPJHZB--J------------------------", "JTEKVURHJWFMUBVLXHMFXPU--W------------------------", "PWYVMLPGVNHMZCQIMFMDLIQ--U------------------------", "HVSYDPGBSUKXOJRFWHGKDPV--I------------------------", "EONWLXLAVJHVLBXRXQAAVAM--H------------------------", "IGFRVJLXACXLPIPFYGNNLKK--E------------------------", "JQRARGDJYPHYZSDMPIFUKDM--X------------------------", "CTMOQPAQPMMNZPIAZCICHWV--P------------------------", "ECWTETRMYZETJXMPUXDQEQF--J------------------------", "QKNNRYYHXAYXQMKMFPRTDSA--F------------------------", "SBWZCCEXVCRNYYTHDLZUFWY--O------------------------", "RLFMIGJAIBWMDREMYONKZVI--P------------------------", "KZIKZIYZWQUKGWWDSRMBHTM--A------------------------", "TIGJKPOQLDSFBEYFRMRYCWA--X------------------------", "JGXHWUOIJVJAJWEVXZBBMVI--U------------------------", "MVBYFZDTDWLRBTWPYRXDLYP--X------------------------", "VMBYYFGUASBWZSGGCQCPZMY--D------------------------", "FIQDKKDFZYWTCZGKFOVVDZF--C------------------------", "-------------------------A------------------------", "-------------------------F------------------------", "RFHIBAADOPSFNALXAFHBCKAOX*QHHPKWPIEKOCEWUIWGLMGHOK", "-------------------------P------------------------", "-------------------------T-AVOVGYOHXPRZEAMWUCXQFLQ", "-------------------------S-ZDLWXQTXFQKGYZIWRASGYFG", "-------------------------U-EVFCTNLICFHJOIXXYTMBGIA", "-------------------------C-LOHPYTEPNZHGWGPRPRPGZXB", "-------------------------J-EUTAGLBAKDVSTWKKEWSOIVH", "-------------------------Y-SPFJTBSDLFUVTVJRCWAZBUL", "-------------------------K-PSMKRLWRZTUECYNSFMNJBSI", "-------------------------J-YDDSKKZUKZQTIUSKHMJFGZG", "-------------------------P-OVFKQEJCAQDIGDADKBTAEJO", "-------------------------I-ZLSAZUUURLOCTNJEMWPBZOO", "-------------------------V-MTFFBOUTVBLEMWQXWOJGIWZ", "-------------------------A-KELBGYYTOKEPOHTYHFLWDIR", "-------------------------A-BYYRLJLVFBRTYVAFQCFSVAU", "-------------------------P-PSIGZPEFHLRPPMJCXVDLIIO", "-------------------------R-ICVOYYQMNELYIZSRNQYNBZT", "-------------------------N-PTPWMTRBCAHZWOQLJFNDDYD", "-------------------------S-DZSARUAEFQTZZTOQWUSFZUH", "-------------------------V-ZIHMZODOQCAMBCNSYNMZJLW", "-------------------------Y-ABEADEILNACTQMPBNFDGCYN", "-------------------------Q-UIGXEMCEJZJREDCFZBWTVYS", "-------------------------Z-ZHOJYZFYADTOLTVXRRDCJKG", "-------------------------G-MYXPYGRNWURCJWPYOPHPLDE", "-------------------------I-PWDGIYISNTXNNIYIBBYNBPV"};
    vector<int> detachmentSize = {878121, 256331, 411615, 593109, 236130, 331796, 191892, 632386, 442870, 36544, 859482, 722744, 7770, 843791, 794461, 634280, 32584, 644833, 987099, 882291, 324778, 131771, 73324, 235589, 418921, 972853};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 283713;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> countryMap = {"-HDR-X-YUNOB--N-QUAPJOR-CT--UCW--R-GW-X-MVIJXQFYJN", "NBSZ-SVSDQDT-ZXD-RER-P--NOB-EDKONODSWXS-YH-IVLGZSV", "-YL--FXGKOX--VK-GYW-N-F--XF-EU-ZKCBYG--QNMQNSDDPON", "EHREHVIR-IOXR-YIYRSVPKXSHUPALWRWX---FJXSV------AKD", "-SDG--VFGHAWH-GVYVKVLT-FYF-WUDEMHVTAU-FU-WBRFXRCZN", "OLZXDY-PUW---EZAGWALDK--XSJUVVYGPT-XVFBOYAILJ-Y-GM", "UYP-VYMVUHPYIYYUHEMYTGCIYWR-Y-PEQ-CI-BOGSNP-HFOOBK", "GW-AZY-LHBSPKLWVZ-EIM-RGDPFCFWNQ-OVGECL-KJJGWR--VF", "MDBC-VYPUTQRQXNSI-TQ-WFNNADGKYB-WHAJV-BW-FI-NO-U-C", "BQZ-GRESEA-DNI-UF-MHXCRZ-SAPIQ-AWM-F-JMGUDKV--PV-K", "KOP-U-UKTCXE---JWXGNYZBZL-G-TCBLFY-NUFYD---LPQNDNM", "-VT-O-PNJ-WQ-HDCJRLT-K-WHKSPQ-OBN-YWSZBLXBZEKKXAWL", "C---OUSRKN-YTFLKM-----M-G-CKL--KTN-PYBLJFWZNSJ-BKB", "SKRG-L-JX-IHYBASVS-WWEWJAXCCCPPCBZHJ-MX-O-SX-ICD-T", "FNU--DR-KEK-W-VIRLBREDNT-YUN-DLIF-PVWGZLG-U-CCJBMK", "U--RSTCKIKQZ--IE-H-K-YINFF-OJ-VDOFAWLXFU-DZC-CXQE-", "BCRDU-DTPXG-IW-XD-TXPUAPMRHGUYHNIXMEY-G---KBP-NKNR", "-VIZZ--LURMY-YX-ABL-WTF-KM-ZH-M-ENCZYWDX-KBX-FE-G-", "MVHS-ZHIC-CJG--NEZ--IVEE-JNUE-EDRC---LZFODXTQVLDW-", "QLPQ-R-D-J-J-YUE-K-M-JA--KN-E--R-Y-JLN-KFGZZ---LIL", "L-U-ASTKIK-EDDGSCVZORZANHW---OJZ--SQXA-RQOB--M--JB", "--ITDTB--SL--ETE-L-MFDGV-DOXCFJ-I----JZSOQJWGXERJV", "M-XERKWH-G-ZXZ-TNA-NWAAPFLEGUCDZLO-FU-Z-Q--RW-TLC-", "HMRB----K-S-P-G-BSCIQAGTK--OPTDWTCUW-BVBPJ-OYHVIP-", "BC-HJW-----JTD--BIZGKRSVG-WVFRW-JNVW-GQ-RNBBIGTZ-K", "EUXW-W--RXQGYRSGGL-HXLUCNRMIWOVPKWYOKYJJU-YUMJRY-T", "L-B---VDC----OZUDIECMLGP-BVBNGFS-V--BWJT-JNMXDEQN-", "CMY--V-S-FKLL---HUERDQ-KFEXV-MCGQR-WQYJOR-MMXGZS-A", "KAPEJAV-L-OOUOJCXHG-EWL-VASO-J-QLBC-CN-UCMD-KJ-H-X", "UIK-M-DO-XBPJJOTMPNYHGILPMEUTOEFE-HN-D-MU--TNFBJF-", "MIUW-HUD-EH---QJ-VBCQX-RY-RDSMWWZ--QAD-L--HYI-OY-J", "SI--KDPMHVBH-DCVKFE-VBSQ-SUF-DT-J-PC-WBCFCWBBBYYSO", "-O-YZOKTGTUWZS--K-QM-K---HLAYY-ZI-DDQ-HM-T-M-UW-XV", "N-VDP-YPFJ---PI-FZ-UUPWWGLNZEK-KGXQH-I-SOGECHCQKWM", "---HPR-W-XGFKL-LQDMM-HR-G-ISQLRDB-H-KL-R-DXCPDK---", "-A-RNSV-KJBKR--JP-VB--F-QMSOPKQ--MLN-PERAM---YNLGC", "W-XTRMPC-S-ATK--QMQOP-RZOJIBF-CMXE-EIUJG-W-I-K-WLN", "YTO-XVMMMSTPMVA--IMS-DGRCUGFDJFIXL-D-MAJVHMD-ER-MT", "BDF-PLKOKL-LMSGE--ABAQMC---RODEEVWNYYAN-W-YML-BJ-B", "-S-KI-UX-OB--IFWME-LEIA-G--GCN-JZTRGNXBH-L-H-ZRG-X", "-OVJYNJH-H-K-SMOQ-JIOQ--RLJDDFB-G-TBN-OZ-H-AZPWNPY", "-VGH-LXIF-PP--DIS--QD-GXRQZVJVIV-VO---FF-W-NVK--TO", "GHCXSRJZWYS-AB-K-RXO--JAGMP-O-JQTM--WMVHFRMTJY-MY-", "B--N-WBPIYFAYHSK-DY-YJOUEK--HHKYVTF-H-MZFLHGLG-FIW", "I-UF-EAMCYBFGUG-KZEMKLEGOCHK-AZF--S-YF-TZ--RLY--B-", "CQZK-J-P-D-IOEEHM-KYPPZXOU-LUNK-AYHQWE*R-SH-XVPYNN", "LOIHWWQWL-ZFKEAI-EGE-MSHLI-AG-QBVSEX-T--UFHYOSV-TL"};
    vector<int> detachmentSize = {29103, 10084, 693, 10533, 17313, 26100, 6162, 11048, 22406, 15291, 17570, 29960, 32629, 22140, 21229, 27581, 32472, 21779, 27441, 18457, 22149, 29445, 24746, 16126, 7211, 4699};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 35770;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> countryMap = {"RJL-UV-QBGY--WNLHMVTJJ-BO--B-Y-ME-OIMHLYOAXVBCPOW-", "S-KWG-NBQ-RZ-S-JL--BM-N-BE-QV-AQC-U--B-W-GTGZJFVK-", "-URGMIKQ-BSLDWUKD-VIVZ-S-NWZEBS--QWCTSZR-UP----WZA", "RSVJSMZMN-CY-R--G---QDX--A-PWVTA-FSD-MBIVTPI--GC-H", "-YJQ-C--J-IE-KDWVLZE--LO--BDL-OC-VB-SPJEI-G--P-RK-", "-MAEBZTQFCQIFLXLOKCS---C-Q-CN-QMLDKOFL-YB--CYCK-H-", "-PGNDXWL----YDUZDKX--U-V-LMLUO-SRETZK-GKIG-ZCYEPM-", "-LLBFR-GEFA---EMR--S-SNTTUXHVP-QXZSW-DAK-N-OV-WRTW", "OI-UA-C-QMBBPUCVI-D-BPY-ER-IUSBNWFQA-GAVKKVZGH-PUL", "-XFE---FQ--I-RGQ-ZQ---K--DZ-MFQW-E---NVC--B--NTM-H", "-ZMFN-KD-DDQQ-MWGU----ZQAQGKED-S-LOHISGCPIMO-NF-RN", "SKCL--PDHPEWOO-KQTPTJZZ--FNP-YXCDDA-DCK--ONVLK-X--", "FL--SEAU--CVRABVZU-IMG-A--CJ-B*AUO-IUWZXJ-JYIEKZW-", "YL--IYJ-FK-ULZLCTZGXFEQ--PPHHRGDR-QB-N-RVOGJK-B---", "-T-EP-HRCI---TVNGZM-VF--T-IDDI---BLST--Q-I-UXTQ--J", "URX-TP-TXKF-CBHFG-----BTTP--TBHMD---E-LEKDYTJZCECD", "-U---O-OCGNGIPNJT-QB-OYAALXILRZ--E--M-ZZ-BOO--A-QS", "-YPDAMSO-TNWF---EKSISJJX--J--AQR--JREW-WEQA-NUUWHB", "GOCNU--VBT-COUSQHO-V-GBFJ-U-X-PNRAU-YUQEUAV-D-LQI-", "---DPCWT---VGNUHIVQ--M--X-YXIB-OQC--ECSMEG---ZMNN-", "LYM--F-MONIC---BQN---V--G-I--H-KNQDL-B----S-ON---F", "-XEFSIO-JE-XE-Y-VZNX-Y---RS-ZLTQW-SA-RVXIB-PTWOTX-", "T-IW----S-T-J-OJXZMBJY-L--LKDIJY-QD-IKKIXB-Z-IG-EP", "Y---N-ZU-SOMJMCQFKV--VOAC--L-Q--RLHQ-DRO-R-RFVS-QG", "SU-YAL--M-CFY-S-HIERTRO-SJV-F-L-PXGBJ-LW-N----NV--", "CP-MK-I-LA--Y----E--V-CGE-L--B-SXI-NKBQL-CSM-AKIXB", "KY-FS-IAQI-HF-CT-KYGDDR-B-PKFPG-E--BWDT------OJ-HW", "AUB-H---CYSPRJ-AG-G-EMAU-J-Z--ZMW-ELBVIS-E--OJXQ-K", "CEH--NBESJY-ZIJPJ-----JM-SCFJEUME-HSIB-YQHYZCO--LO", "-T-K-B---EQRA-SK-S-T-GKJ---KG-P--Q-YQ-GVMMOCZ--PJZ", "-----RM-QWV--SC-DDZSDHFJS---CPKZMJ-KKZUQJA-BG--TR-", "--UA-QMCCM-HK-Q-JVDE-RSO-SLBGA--UD--M--CS-BUWJMZOK", "-C--IVYH-F-WIWB--ML-EZLW-CSJMB-URND-XI-GAXAKOVDM--", "IO-Y-SQACDGA--P-WW-BA-L--VJN-I---P-WCXI-EOO-R----E", "-BFYVX-KD-O-DILIZZFWIDAX-OV-K-QYN-OSA-QSB---JL-FN-", "C-MA-LY--W-N--ITYOL-NFTE-ESIVGSL-HZ-FQRS-YR--OQ---", "FVO-ZU-OAVHN-SDE----T-F-ZHHGUD--BH---AQ-J-MWIKBLOE", "---DMPL-DG--GP---M--EPDPNSBE-----B-L-GMV-UDCIZH-RO", "LGTT--JCBVKEWAZHT-A-MT-ULZSX--TW-MS-H-S-H--L--WEX-", "---XWSAOQKARRR--GLY-JG-BDXRRZK-YAEOEIVI-GZI-XVM-BY", "-AC-H--R-V-VW-M--CRBEK-W-QSCSR--JSXRJLI---RF--B--G", "CXNUZ--HSJ-JIZ-P--FOAIWZCASZZN-E--DMG-QXQLF---D-PP", "BML-RN-C-O--SXSLW-D-X---Y-DKS--FUEVYA--Z-A----K-BD", "PK--AZNR--UVQ-L-RM-K-BTXGHX-QM-----OWNP-DW--VZVQY-", "YFEZ---WP---PU--P-NGVZYGS--P-----IL-VPTQ-KLVI--B-H", "FW--MQ---U-CO-PS--L--Z-GW-ZJSS-LACJC-EESD-HN-TQHA-", "-Z-ZPC-TB--C-YN-E-OAW-W--H--S-U---H-----TM---YF---", "X-GEU-Z--GFL-HEHJ---UNZTFXPTXYQFP---SOEQOFDLD-R--D", "DF---RIW-R-ROW-I----EZ--TKK-KXH-QY--UYZ-RE--W-R-SL"};
    vector<int> detachmentSize = {984494, 525560, 620382, 459707, 168316, 450697, 687542, 751804, 825332, 427136, 464516, 594313, 684607, 503934, 361388, 33690, 807840, 188085, 310273, 632286, 530029, 237621, 67721, 168229, 685092, 35920};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 1175220;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> countryMap = {"-DHUS-EO-G-I-IRDN-ILH-N-RMQOGNJNC-BMOVV---MGKGDD--", "-AY--BR-H---N-MIHEGSOP--HETDMQLNXPLURXKA-JDG-T-HJP", "DIUP-ODYS-UHNH--L-P---QLB-YJE-NOYLHGC---IBD-B-Q--F", "-QU-U-KGUDOSRMIKHDGQ--WPUN--AWT-LOI-U-XS-LY-A--GV-", "UHD-K-Y-YVKGFH-GYRWRB-P-CDWPDDHJSXJ-----J-UEWVK-UB", "W-T---T-IMD-UX--VJ-LWEEHRMJ-BDKV-ZV-BWS------GE-V-", "QML-Y-CFQW---U--ZWBSAUGZMOG-B-YPB--WVNVEZYOB-P-Z-X", "-YFX---V---CILRF-C-GX--JXW-N-O-E-AAAY-G-RXM--BOXRQ", "--A-WQGR-LZ--KA-B--FA---LZXYDEPR-E---YCQY-K-QSG--F", "-E--ZK-V-ZZWOXB--C-BW----PSJDRZ--FYWF-Q-ZX-QEHFO--", "MEISQN-NJ-U-EZOA--KW-K-JVHVMBJ-XH-VISUVEZW--PXRD-D", "-SYQRAAI-ZERE-YVN-LH-TQX-U-HT-YG-Z-QVQ-SIBX-JUC-VU", "-WF-P--YN-REMX-JMYD-FYGU---T-EJZYM--SLUEP----RW-DQ", "BN-C-EV-WLR-QHZ-W--L-C-UL-QHD-LCY-WMDIZXFPN---K-Z-", "I--UK-NQ-FG-TML-LV-BQDD--EKSY--I-U-J-VQ--BQLTGFM--", "---V-MXV-GN-KY-C-UAQWEPLA-LQC-J-C-ZI-NR-IELPAZ-WTJ", "-OPNFZLBJ-Y-Q-PM-MPQQX-A-HRVOSXB-W-F-JG-A---PBIIQF", "Q---VRKVI-FFVQ-KL*F-JX---K---X-X----LK---RH--ZKW-U", "CHVIOJK-I-AUCWCAHT--ZZ-JB---I-JVIZ--ZKMW--JE-M-BIB", "AKTJ-GKZZP-U-NMMUI--PN-IEJ--N-CE-JID-TFX-ZY-Y---K-", "WOVIQK-P-NAVJWK-IRY-NVDOPAO-LJ-VBK-Y-EQWDU-AC-SPN-", "-SGAE--B-G-QKTG-OJ-ED-BPWSKVXYJXNKHAD--UKAA-F-D-QX", "CQP-A-J-L--OOUWY-FWN--CWS--IUE-RXSFBX--LIQM-XQ--O-", "-S-EQZ--BFHEJZTJ---QGH-GYO-VZ-SWJ-GJXOEKMEA-NSO--S", "EP--IZA--Y-ZB-CW--FJ-OAPAL--OT--PR--SK-WUEYOCLJ-SJ", "RH-MLJ-ICRA---FNMXUQMTZ-V----WWECOC-OOCMM--P-P--EZ", "J-TVX-TX-W-KP--BZDB-Q-JJH--K-F--HW--S----OBOUFZI-G", "-O--B--XR--KOWVVGR-I-Z-I-L---CY-JYF-Y-HCWOGOWHF-FU", "S-QR-FR-R--KQ-ZTD-DTXX--P-KYVYF--ADRME-HOVQ-EQFJ-N", "D-P-OSUNP--EF-S-DJ-SJOP-DE-G-Y-KSVUAYNE-RHG-F-GMWK", "-OSO-A-TMMYFVDIUB-BK-IDJYIXO----L-T-AGDTKF--GJE-OW", "-TYVY-AYY--JO-U-FQGV-HUDU-PJHWFGA-P-C--BM-J-F-MW-I", "---Y-NYBXYCM-E-OQ----EH--EQTJP-----WDKW-MLCV--GOV-", "BEZOV-K--EWGBW-OV-USM-OPC-CYI--B-----EA-PHC--HX--R", "--NDL-FRVS-XR-AKN-M-BH-XMA-FQTUZGMVK-HX----GG-JLZ-", "SQN-TDKXTZI-RO-BYIYG-SSVJ-SA--OADXG-T-BR--Y-C-XU-J", "G--SPG--ZPXMKNC-T--EW-XV--JUZ--W--UITIIXVBXQ-KZRVA", "-CPG---WH---------SS---CQB---M--RHU-CHNL---T----WP", "PZO--E-------YVXFFWZIEZBHW-ZEFG-F-QZ-C-PFP-T-B-EBQ", "-SFC-LEJSQ---B--PTQKGDON-B---S-Q-GK-CPQNEEE-U-A-AU", "-T--HXA-FMMFKW--TPJBWOETVZM-T----S-M-DNC-SYKQVMTOQ", "CK-E-C-HVTQ----WEMFY-LG--ZZQ-PL----YA-LIS--Y-L--A-", "-MQ-ONO--UIHEQGM-VKN-L-BF--VT-SUT-MT--N-BRAFWZPAS-", "--NCG--MM-JUHL-YHE-CAKVG-YAE---EWBB-WV-NNH-X-WF-NC", "-EVDNG--II--WC-VVSTHXHGGBRGHFTVR--MW-ASSV--CNB--CL", "LCRH-ST-F-T--WDH-ZZRWIC-Z-AT-H-A-RKEOM-BTF-TCAROVW", "PN---JEFNOTSHBJE--ZQ-XR--V---V-CDQC-JA-MFIDOB-B-O-", "--CGXD--ZRLPDUC-F-XX-T--D-X-VXDGXFJBJYP--OJR-AEK-O", "RSJTD-YZHC-EXE-MGSZCVX-UGKFWU--L--Y-D---NMBDNOH--C"};
    vector<int> detachmentSize = {445044, 799910, 37595, 789454, 550290, 227016, 744379, 498138, 318888, 951624, 944775, 29247, 176716, 502704, 751750, 542956, 815178, 144837, 319432, 185055, 565547, 192036, 951335, 420876, 98497, 931515};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 618034;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> countryMap = {"--XCVFX--DJ---Q-T--LC-Y-ZKCUZPKP-Y-YDODHF-ZL--WL-Z", "JWJTOSFMJG-RM-AJTL--VWAW-AQHXDQ-KW-----TRFRUD--EL-", "--P--XK-AK-NDLYG-SRSV-SR-LKH-M-Z-N-HSWK-G-W-U--FL-", "--MX--Q-----GY-GL--IQUIW-P----QW---SL-DZBSIQHA-D--", "-AK--Z-LRE-Y--KRSQ--NWS--HQE-MBFJE-D-VQ-VRR-CNNGZS", "WM-B-PBN---Q-LCN-RE-U-WPQA-ZSWL-GG--D--DKV-JGC-NZM", "-V--O-XN-OXKQX-ZF-IR-A-JQ-T-V--XR-ZRUIO--H--DB-UEJ", "E---VSTVNOB--ZP---ZFOMOA-LFOI-TYGPRFNU-VQZF--B--T-", "SVGE-ZBJEOPR-IIC-CQNYFBYL--G-IAWDNN---FWQ---EYABDP", "-FJ-TE-YOMRR-HF-ZQ-OD---BEKK--TJG-Y--CRVNCY-BHF-VQ", "WSEW-ADN-JZCUC--KGAYVWEGFUAOP-BT-T-ULBCG-H-JBW-Q--", "---LKG-JBVARM-NIRDJ-BO-TWKGE-G-MPDJ------PCTN-RKW-", "-JKMYAG-FL-Q-GSRBMFME--E---V-KQ---MMDWVBARBNEBZP--", "C-P-AUGM--TXEY-IKU-AD--YVOSECWGZEXTFOCD-NA---JA--I", "TO-SF-W-HHNR-ZZ---MO-RFZQC-JYTAAWG---URAIOEOGNKORN", "TBS-NR-FT-TALQKUGZNQ---NZJJ-UQ-YVJKCC--X-ZG--XGONW", "U-WWDSMXBSKWE-I-ZFOWLT--IQ-IAZLHGMCQ-LK-ZE-JEQADW-", "C--FCV-TO-GZT--OL--VVGLBJB-GW-YP*UJTG---GLI-J-KEJJ", "HBNWRFO--VGDUN-VKNB-X--EQO-JA-LWKPGG-CB-RII---J-J-", "IIM-PUJ-ETODSOA--DNJM--KAC-IU-L----IWOAHNMO-B-BW-R", "PP-B--NM-GQ--NQ-HQS-IZ-PHAVAUWC-SUVOXV-L--TIFAB---", "V-XLZY--WBWPB-RAT-NXCT-WIWD-VTN-PWHH--BMXTIJSAHN--", "Q-N--DT-DGJVWRAYBXYZA-J-Z--I--DQ-EMON-RR-EZ-P--OHT", "UZ--XFTMCGQFJ-RI----KCXFAZZ-MTXFLK--MYRO-FFQXI----", "PFUM-JKZQXQD-HV-DMIKWSHXOSMFWGIRPI-DW--OPW-J-KQHKE", "WPI----OYV-E-O--JUT-QQPV--K--LZIEFH-YOWRTKK-KL---O", "PZ-WQ--F---VGVC--LNQY-C-W-IYZRE---ZGSCFVTYK--JOLT-", "-ZV-YQ-T-ZOPM---V--WOIJVY--ZXNIEI--VBYVA-N-KYBI-UN", "CUBWHBH---LL-GFUFTAUHTE---LO--USJBYK---S-C-O-FF-O-", "PGT-WG--XQ-PLL-UI--BZ-ZV--AZ--QKBYIMALQ-EDH-W-Q---", "A-U--WORW-OMB-B-A---ITTCJPLJKE-GS-U--HS-SV-CO-E-QR", "-UL-QGNQE-GMZOOF-KZA-RFXKVS-X-FJSYRRN---M-M-SZGZZ-", "P-LPMPQURQ-SN-S-HBODHLG-MAI--KH--H-VHX-NGGWIL-D-ZU", "DNJ-X--HT--YBDW-ILTHJ-MM--FFE----BCUNR-MU--BM-FBHD", "UX-PSE-RL-D-K--D-NUIJ--OBIH-MZC-CH-EMKE-DVLUDAHO-V", "----SHBP----PCEZHYFFXO-O---LIN-J--L---VLT-N-T-D-SZ", "ZBVTSPKX-WJ--J-DFXXDYWU-HZ-OIUU-IRR--TMCBJINYARCTU", "YP-UJ-RJRZKD--RS-D-I---LF-RGCLHS---WWRKENMCNHOR-UI", "--KSR--G-VBNAUB-NQMYBPP--R-W-X-LRNE-D-DX-W-H--G-OF", "N-IJPVLW-W-VLEXL--K-YHL-GZ-IZ--WXVL--EAI-O-OL-F-MQ", "VS--ZBFEGMBOO-L-L-UME--BALAGSQUYQ--W-B-EF---ZW-Q--", "-KB-IQW-Z--UAQDK-C-J--C--NY-RK-XRGTSWR-TZKBMJRXPU-", "---VA-O--L-JO-CZ---FNS-SE----R-KIGF-S-R--C-R-SC-QY", "KMBLO-HNCWKAWK-NEQWG-KAMJ-ASTJQ-P--L-TR-VDGK-B-DJ-", "H--U-LX-F-K--OURWE-I--WL-RX-GZT-X--HU---ION--IC-D-", "-AF-GBOCBTXTA---R--B-B-RHYHXSL-ZNK-DBHS---XL-TN-G-", "-B-O-TSM-F--NJJSSP--RLOZWZFKT---G--M-WWYYNDSYIZLKK", "-PD--Q-Y-ZSS-W-KLILZ-OR-XHIS-YEAUFQY-ZOJ--DY-AVJH-", "---XDKHCR-U-P-E-CSTM-L--EXUUNQHYVII--LF-XE-JHW-IPE"};
    vector<int> detachmentSize = {89659, 994075, 110477, 429180, 328433, 153290, 688087, 304, 545538, 831705, 732153, 753891, 950341, 57003, 777869, 312081, 358760, 58012, 289086, 691107, 735978, 101081, 913631, 671400, 860661, 867077};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 2468299;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> countryMap = {"ITGXRYRJMCTGJUXMVFKTVMBFCFGDCHLJLNKPNGWDEWGLRNNXZX", "WFCLJGJSQRRFBVNKFFINUNNOUFANEQKVIOQIFNMBUMCTBFMDDE", "CQLAYODMDPCNCXOHFVMIGUGXJIMTAMWLXODSVVDEQLTZISXEST", "MLVFHMAPZDYFRSAFLHQLODOEPKAWDJLQSAZIYAEKCMEJLEDZBE", "YAMVFNDFHDYNGAMAJGHLVUKXVNNTAUJVHDDJCYTCKRHQTQYVLN", "ZASUHJCJKTTKWTAHUSMTUFAMNIFVLDWUKVRBCGVPYTRSQYFBCC", "GRIOFBRSSWPCMQLZOESLAGBVGPGZGONUNTFOHOUIFRFPMBPNRC", "QPHABGQEDKFPOKQUKXCMGVWYKVBFFATSOLYHEKZWRFRCEYEVFE", "GXBGEXSTQJPBWKDXJTDYTKTNENUFGXZFVOPTQCQYPAPDMJBRBR", "WUHRAXWKNPPYVTIVAIVCLDMJVJEGNIQNCKXHLXYBVJEDOXNIKN", "CHJZNKSDCRPHIVRYJKGHTCQHEKZOIYKESOLEUUNXXKCDKCJEHU", "MUEOHFXINAMTLMZNUKDDIZFCECQSXRRAYZYCJARAIJVEISZLPQ", "QNWKNZSZGHFRBLSFUALLTFHZAWQQVMDTWYTKPXGWVESDTEPIYB", "OZSSTHZOHLOPJCWDSUGJASDQADNYUUSWZVOCEABVKCCPMAPFAZ", "ZIDKQEZEAQVKVDXLJCNZOMGZCQILNGMURKSLVVQEWCTAEWNBNE", "ARSAKSGWGPIIYBXYOFWZFISUEEHGSQGHCLDKCCBBSMJLWJMANM", "WVQZOUUQHTVUGBNUCSUFUOPIABPRINPJUKXWTJOZZPPEZJIGPC", "WCFORLYMICRMIBOOT*FGBULQMFUGRTVUQFYLTFDTEFGPGKNFOO", "LVYJWISXFKPXBHBKXNJLJWWTOXJCLMHHOSBMPPHNTDOOYKOUJM", "MJPXBXIHXZCOGRFSXDUEZWQLZPCRRTUAXUGMWBYHNKGQCKSXDS", "EVTYYEJOEWFUDMDTTZDWZVKPBJKPXTGIYKEEXULYESUPDIDVAT", "OXJJICZNCQZCHWMTGXKCUNVGICLTHUEYAXHYTUAPJGNXNACYUG", "MJDPMRXHMEVXKVCYNXYRTMIJQUGRDHQJBKOMBNQQOFTKHRTQXZ", "DKHTYROCJYPMPFEKREPVQRJVYXQQYUVWJGFKHZYKOVUPWILGLN", "UEADEEQZKRDMBKOVEVDPOESGJTJQODQPZZOIOQUESXPYELGAUP", "RNYOKUNXJNFXMTXRKNSFNMQIUZJYSUJLRXGPMVWOGTILWTDFLZ", "ZEPTGHBUUAFPDLPTTFNYTGXLBGQTUQKUJGYIZLCVFHTBVDQISS", "GYCZTHASYACCLHMADJIVZGZHBENVKOIIGSEJZEJVBTMYGHCEOD", "FFZXVOXXWYMTMGKKPFWRLCICQDVCFEVKTRZRDCKKCVFBWYMKCF", "OTLLRTWMWSNIARTUXZYLIUILJHSTHUZHLXBEWSXQUBQDITQBCM", "FNVZZPHZKMDYCHYLYVEJVLNHKCFJSRIUBGNWOMDLQZQHFDYXGN", "CXBCEYMPMGKVYLZUGEMYBACLRRVOLEQQUHOGQBHQXELWFHRLFJ", "IFBHLRBUISHXUIUQQCWGSKLUZKHIJAEFKFTHFRKKZVRKELAJEZ", "MCPMDKRSLHKQBQKTSQPMWHHWLTFVGZMSSFTKWNNSEGWBFKVMPK", "TEWCRZFVKGZKLDQEDWJQLZQZMVCESRODOMBHVEENHAGXTGBCRV", "RQXBFFDNVGRYXLLMWIPHWZGACVNWWYABHZOPHITGFKAIVCFFMX", "EBEHMHCGLOCNZSNETZTVRBRYVEZXTTXXPHIMBPYWKUBCNDDWNM", "VRYMTOQDXCYPQFCXIAGYFMVRKLSUZTBZTHADMVHDHNNJVLJSYL", "BYLYEMMDLGSWSGNARXOBBQFXZHYGBIQBPYNXMWQXLNXIVCULKZ", "SXBBKGMKPYCJPGKHUKEXTWGHVQHPXEQNLHDGGPSFSJBYPWQETR", "BWEACHSEVWRGVVQKMSQZZPSBFZTDBIVVPBXSJVXGXNLDIHOEMV", "DPLYMOMLCVROLUVHQNDAORJHTESLENQISMNUKDBMCFCAHJZSKF", "FPFRIMEZGRUFJIQESEZWFEYLPLPWELEZTAAREHFECOSOWLCKQC", "AEZYTMOMLDZLYPMKDAQBYACDHBOZCCUENOCVXNYAKLXJTLJTHO", "ZXZZDQDGKRADISZAOUZEXFALDQEYCDLXKCCYMTUKROVRELOEZE", "GBEENMJIGCHHXUNVUOUDYKNSCKBODZHBSFEFSSQCTNKWIDSQHT", "KJVBGNGFPHGTEMSLRFXSEPWOLMFACWPFVEDHRPQIKASGPMADNO", "LNHTUCFZAPMPLDZCCJCKPEFJZGSMNDBNPRAMGZZOWSEYNOEMML", "LKWKUHCFDPEOSYYABTLKZRXLRXABNNIQDAHRKDLBSPTNMZPDWK"};
    vector<int> detachmentSize = {582951, 506552, 205779, 388640, 448975, 307572, 534367, 828826, 15092, 236026, 336560, 228007, 746096, 534770, 305497, 174711, 498439, 16305, 363713, 689484, 999916, 811654, 964665, 307276, 771351, 492739};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 1895539;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> countryMap = {"TFR-CA-M--I-D-XAD-CVCLOO-MFIXFQ-V-CHADM-GFMU-VAO-P", "HRN-Z-R-FMC-RRSX-GL--IXWXF--Y-SH-VWS-LRTMFJG--RVRY", "INJGZYELTIN-CIPSMZJ--AZ-UUCT-ZLUZSTVPRPVHGL--BEO-P", "XLWNPHLRUZDPPMFMK-MJH-X-PPAJ-T-GRBV--OJ-KOFEO-IGG-", "RBODOVM-JQYKOYC--RFU-UEFWDRP-DGT-PE-VBNOZ-ZIB-HX-Y", "UB-ISKYHD-KXUMRAQSUHQN-H-A-CYUXEPCLXCFP-NT--MQGFP-", "-SMO-SXLC-PW-KDLZVQ---AYLSFCIZT--K-TIBZZ-VYJAWTYQG", "HEXV-IAJ---OJAQ-S-FW-SF--PKXN-AZYPQWB-KIUWUQHPX-AK", "WJJ-AIJ-ATROWX-CH-EIEDJIZ-DXFGFHRR-UGL-KHRU-U--JUY", "P-TD-LJL-BCE-WOXKUW-OWJEBFB-EEKJGOH-CAWQA-W--W-K-T", "--TEFXSUWPLL-FLM-WOAWPURYEWSIV-GMCWRAAUB-L-FTMYBZK", "N-QJ-BUTCQFCEZWEGNE-ANCSLN-GF-ZYGUUEGLZGMADKSCUUNN", "S-DVJDQMAVYIGSO-CB-M-TUY-PZUSTDEIOKXOH--M-WQXYZJTO", "LX-QGLFK---KFKWT-R-H-T--XG-VEFP-ACA-N--FMQQYS-XHTI", "--B-GDHBG---T---Q--QRMXDROJJNXB-LSY-YBVCAWW-TTQVTS", "UYH-E-EMZA--WJ-MEFALDVDN-MFAR-JFURGQXPAYE--XFQNUJN", "DG-ISBLSEAKEDD---VUFJOW-RJ-YDNL-OS-JAVIIO---E-U-OM", "E-VTUXYTLGFOOWQ-CJHFVRT-LD-DKYTKSPN-ZY--OPEVMTSY-Y", "LM--T-N-A-F-AWXZYHTUUIVQ-VGYOGLVNR-WZJ--Q-OFCNVGT-", "FSHOI-CYJCTT-PH*GBZQ--BKFVB-PQSIBAIKBILGAOYCWUJEKE", "G-OG-KFHNOVW-TREET-XXIREH-BQWKVTKML-SVQYOG-VIQCKAD", "-CKV-QROS-KSWKCUZIDTNSA-Z-YIRGLCG-CHQR-JANFEORB-Q-", "D-BSFCZDWOO-RTDVMFJAOOM-YFBNJV-R-PIIYQH-TBFEHPOPOK", "PQYXHEPW-WEUHUYLV---Z-RBMZKVL-BZ-QA-JHYNZHNZIEYGHS", "J-FVPWGINPJGH-NL--PQ--PUQMMUG-PDAVTUYDJVRW-G-VIOZB", "YK-VM--FFFPE-N-MXM-MV-CUVPNXIX--A---EZYWRKLYA-H--Q", "WQMHHC-XKE-ISBXJSGYZGBMHQG-LU-VFIDOAYIFMVTIY-QO-HX", "FVZONZCEZMZJ-WFC-CTHYB-LG-C--ZQHMRKOSJ-AN-Y-JV-WKC", "P--KV-UK-VZ-O-IREEMUE-SK-E-PKWDYHA--A-CO-TNX-GGE-Q", "XG--V-HHAXEABMDPI-B-TKXTAL-WBXYPEJCNID-QXN-SCNYKFC", "L-LVKNTXEDONGVXPDLOD-EWZJGEO-NALUCMTGYYFLDR--HIW-M", "JYBVWTDFOBONWZFYMZNJ-IEHMUXN-OVHS-QJMP-YPD-CYV-IKQ", "RGN--PFOTZRBOET-X-MMTRSCTLH-LQCOX-SB-R-EP-KSLP-FFW", "JULQ--EAY--DABH-NX-A-TDEI---CFR-LMEYXKXCIWF-F-YNAV", "-LIMYWAFVBOJU-L-YL-L-JTSVOPWSL-EBKYBHDUTDTTFFM-QXQ", "D-P-MLRF-P-ADGPRWGXJLBBRGJIRPSD-TIE---OZ-UEAAHEEVT", "PE--MM-NPYE--P-HBOZ-CODGNOJIMYHBUAZ-R-CZ-E--VQCMA-", "ETVQ-OD-CPSQTQ-KORTKX--PHGNTYOARJESWBTIMEOLYEL--NH", "NPA---CHAWW-PY--UMLYLI--MRXUXFG-QJ--SOYHEVWT-W-OG-", "-RZLKKPTVHM-Q-XLFKOFMA-FW-OBB-OJ-P--X-VWJU-SSUTCMY", "MCT-CILDXA-HC--WA--CRMZU-DY-NAPSN-PNYAVSFMPGZ--MN-", "PTSGUHLGWWURB-M-RTCMHFX-NXWUM-IJ--JNULF--J--FRYDNF", "-F-MVRXJXMKXPSNSVJ-JTE-YPXFM--ZGV--FS-D-LUTIMAQFSG", "BHJCCUGZF-WYNQPU-RTTIFIYLWYUOSKHBVLRM-L-KZ-CEWESXQ", "ANILK-P-V-OHXHWE--C----OAHNDM-EP-NHNUMORFA-UI-ZCR-", "NKJEGQHMDOTJ--MRZ-ZTSOXSZVQLQJR-QB-VKTBD-UKTIQF--V", "-EZTM-G-UTUUTK-DN--DEBEKILT--LXQRZP-IEBUGQ-AE-O-QC", "IW--KGG-C--SREBINT-JN--HVCFPTWCM--ADJOM-RQRYKRHB-I", "UZUMPY--VTGNPVHCN-PXKZXJLINGJBMYUXZVJVUNSX-ETUVSVY", "L-ACTWW-HCBTACLDKULGZQCBVD--CQ-RGN-WWIKUBSSNUQLAQZ"};
    vector<int> detachmentSize = {999353, 999087, 999010, 999198, 999465, 999110, 999590, 999451, 999645, 999301, 999134, 999196, 999999, 999652, 999279, 999842, 999612, 999590, 999808, 999544, 999508, 999434, 999895, 999229, 999765, 999420};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 3997926;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> countryMap = {"PDFFRBP--UMJILLQ--DMREXKIGZ--A-LH-GUYBACJBJDOWCMCG", "---MK-GQC-U-EFDZLSUVSEWYA--BEO-IU-UALLTQ-VZJ-AGKFQ", "XZBQWGEOCXH-XDVYYLHJSSXRMTSHL-VWE-PBZ-JHYXL-OY--DW", "-HJ-NTRK-YZP-YTDJYORJHFUXIU-GD--SPDXBQJEUQMOAMPVWV", "CU-R--B--FX-H--PJ-SCRHCA-MNWN-AZ-YW-VYHBKKYJQIMPFI", "MCL-UR-UL-LSHBW-LWMWJQ---OMQKH--CVUKOBKPDYIUDRE-AL", "DIFDMA--EEVYP--TD-IZOBVMC-VPQBG-AVTCIN-IJARQWQOGD-", "KVKB-HQDYRR-QVRRC--PP-SDTQPCYEVM-XSBUDC---YTYYK-P-", "EEDN-JFCIFDQJTI-GTEP-RIU-SBOFIB-P--NQSEVTCDV--SCED", "CB--V-LAQOQGGFQGDE--AZGU-UI-CNAYM--AQK-ATHNCYCTKEM", "KLJSUNOTGOIDWMBBCKPKT-JU--XAA-OWATQGRY-NIVN-FLOVCO", "E-RP-YZPW-YWX-IDKNMZIZZWAMZXWMTHGZSSOBEB--LO-Q-LHV", "QIRQGGXV-ZOYUPW-PVJLY-STQG-NP-YJHEO--ELCJ-VN-PIWCU", "-PQ-XNCR-GMUVC-JYXSC-O-C-ORTWXVUB-ESUQN-SZCNO-AKMJ", "USEHAYAFDFTR---GMOEJCVTOQSQIZBAAS-YXO-EHQCIWXIB---", "VN-TTMQ--D-GGDBTGOJ--NKWVAIBTZJK--OO-DOZVRYI-O-IFN", "-M-LG-OMBWUVLOQXUD-JDE-BOFIW-LH--E-NOBDCEVRFHGNY-A", "KWIX-GJW-R-S-GT-A-L-NWGWYO-S-MFRSXJB-QWXF-UMJXZ--T", "RF-EU-OKM-NXSKYV-T--YGWSAQPBK--HRFIQVNEDORPBGUPLXC", "--W-K-XJCQL-WDTD--AJ-PA-W-F-L-AU--XFB--PXP-GQH-MXP", "CPGDEQE-S-BVZBJ-TNIMB--A--ZOMVQ-TZI-W-PBRR-U--FAVF", "AWRTQS-LCZHES-P-PWUIG-HA*LL-GZ-XR-X--GFYQHLEU---RL", "YUT--UZDJQSPXFDNE-AUBTMSTNFBREJZ--EEKTD-BAJ-KODXBS", "I-MVW-PSZSX-ZZU-A-ROTZ-W-PIQWORBDLJVJMHUDVRRTJDDZD", "SIBA--IQ-W-NHSZ-J-GQQIV-SZQNPFNXL-RULJBCY-JGJRS-XT", "GRANPGRAKPSVOQT-UTKC-BD-HIPNCVHP-YAWKCVQD---T-VYKI", "YRH-BFY-IZ--GHUTM-UGAYNT-QUZYKEDSWWPDM--XUS-H-VLEW", "-KOJELPOM--PY-K-L--RAUKIQJX-RBTCF-N-VEOXVRWBAKGH--", "-F-YE-BS-ZIOJ-MJMRHPANQ-BEJRPZBQ-YFNTXNMRXSXGWUX-I", "E-UOU-PT-WE--FRHJLCCTSJYTM-YLQPRFD-OGWPW-ANAVW-PXW", "TX--GYAGS-WT-PIUY-E-AERSPECDP-IZ-U-LJQQWFE-LKGU--W", "MOQNBHZ---W-GNBISPJZVE-EMDXOX--CAOP-F-S-SC--W-CWLT", "EQ-HYBEBHXELSRAPVN-NT--C-RHP--TMND-RH-KLOMW-EU--XG", "NIULZTOMUMKQN--J-JKX-YF-DXKHFQXVKWABQIQLXIQSD-DMOT", "-AHHNG-HFC-P--ECLL-ZBGYUV-QWTSCGFKX-EMT-BOPCZAZIRG", "YU--E--QBHTBUIZIEYEL-D-MBQQSLTW--A-DEAL-XHO-X-IOZH", "DHOGQB-WF-DOMSWTOCF-W-EGV-VWK--RIOMACFKT-MALQP--LC", "KHIW-ZWBE-XLMNTUEJQCMDT-DLJDXSOCNOWE-UPA-BO-AKDO-W", "ZKACSWTF--CKKTJ-XR-QZLN-MYD-GTBDMGMT-JBVSAKJASJ-UN", "BTTXLICG----HXJUYJMX-WDANC-WAFQJE-F-UJNFROZ-KT-JUS", "GLTUSFPCWMUBUUDN-S--QQ-Z-HYCQPEJTOIC-WEFFTN--SALUO", "-JAU-LI-J-PNFLUS--LUYL-LJVL-E-KFVCBG-ZCPKZ-RDRED-E", "NY-VUGBCHZUZOO-JOWDQNMGNHHLFOXOH-KEFNZV-BCZJE-SIJH", "TGVG--UHSN-DUI-KLZJOITPJ-YUXWIOOURA-MV-E-AT-EG-MI-", "CPBAXKP--UL-G-Q-NKDCUHEIAIXDJF-EO-B---N-RQHGVUK-OP", "Z-N---BTB-XATYQ-ECBYPPDB-DM-K-S-JCV--GETKZA-TGRG-E", "DC-XYSC-PW-BCRRHPZTFRSYV--OC--GVLJKH-DFMEZKIKCGAPJ", "Y-ZJBVSMBPUBLD-GPZO-MKYKRQF-P-CU-YPQ-BZVDFJXRMBFGB", "FMQMFJGK-BF-LFJY-VXQMTBQUUILIZ--VSQI-EAP-ZRSDZ-IRX", "OIYR--IWLABK-I--VHDSFUQYT-ZZXDEV-JTL-FC--KLFEO-D-B"};
    vector<int> detachmentSize = {999571, 999942, 999954, 999028, 999711, 999178, 999282, 999146, 999100, 999541, 999084, 999434, 999468, 999017, 999808, 999031, 999650, 999583, 999866, 999914, 999431, 999741, 999595, 999580, 999015, 999334};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 2997919;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> countryMap = {"PPT----JJPLBUSXQXIL--B-KAXDK-FGHEP-IR--NFH-BRX-YS-", "-BKO-YQ-JPJUGRKBN--KAU-HM-DSOZDGE-NS-UN-TBJSG-C-TZ", "QFJETS-HYBCW--K---KD-JZNVX--CYKCTT--IWIMCISXSCQ-LY", "BAWKDAOML-RG-TEQZ--ZOQ--JT-Y--BQRG-UIUVRP-LZ-IZHPZ", "UHRY-HOQJXHYMIIG-Z-GWPS-WRUWS-V-EWW-UMVDKXL-TWKW-L", "-VLMF-DBRQMLTSWYTKRUBQSMPAP-MNFCRQ-LYN-MNRJ---EJAW", "PTR-BKB-RCVES-WVKFKOGWKGRDNUEJR-ZKETE-UAYMEMROZOXO", "IXVKH-KWKR---HLIXSKUUE-U---QSBZV-SWEHAKUW-OE-RME-T", "-JMQNYNSCNOXHYMECZODZD--SGKIIYVJZVVPHQYT-D-EIW-IGO", "L-NMQTFNJ----W--ZBZ-WFZW-W--XLOGG-KYQMVXPT-ZA--NNP", "-Y-DP---RBPEOUXR-VH--YRFPVUW-EUAGDBFD-WHOW-C-W--XG", "LCBKJP-B-FRBM-EKN-TZLLVJHAVHI-DJJ-YWMSX-HI-QJR--YM", "JF--OJOEWQNXJ-NFXPKAH--CI-QAG-A-DSG-U----QNYMR-QNR", "-RQYAUFL-XJIRXZ-UUU-KPAVRNWAPGBSEQXATNOYYZIIQV-S-D", "QSL-NYUWAGTO-ZGZOEELT-KNEFPXKTYJNVZ-XK-FGMCNBXKNRO", "LNZI-DXEAAU-Y--QSZ-KHTUP-GDAMJG-OLC-WYWQICX--B-TUH", "-PHGBYNO-JKH-IWBUIGLEM-BMZGA-IAXH--AMBECSVYQDMFN-X", "-X-UJUZZ-K---Y-D-HEZJIPSHAPXQYEBRPWRR-OMHOTTDQNLZY", "--ERBUCZRUS-NV---E-XH-SXRP-T-BNJZQDFE--CXHGCYL-RDD", "KSL--ALVH-YO-MTCXP-MV---LZ-TH-BCOBW-WCZIKTH-QK-EMI", "-GXWMGZB-URU-WM-OOHFLV-VJ---ARMMKFOXS-BCTZFTO--CHW", "TNDKSQXU-JKYGJ--IW-KYJEYP-OH-G--FEFN--WZDBYB--LB--", "QSMYHM-ORFYWKDTDKL-PX-XJMURNGTGQEOYJ-KMPCD---TQ-WM", "DGG-UQVO-NBMEJBAFMJL-M-GEJ-DCY-CRS-DAJ-UGT--VXOUH-", "GHQOFVZBXHHHOZRN-JADNLQPN-RFEDHFLJGV-UKPV--VVW-OFS", "-C--XXCH--XOOCNVXQ--AZLTIWIPXN-ZMZGNZNVSPZ-QI--MNU", "KWFYYVR-QCIHNA-ITJGC-YKFKSF-SCCN-BSGHIXC-PY-PIOKHT", "GQHD-----RFNHGMVBGAP-DOZO-INV-T-UYYEPSPVVDSEUIP-TP", "IXV-FGCTRGJHPQYEXNLHIJDREDGW-YVPTILWG-HMPJEPFP-R-M", "GLJI-BK-SY-IJDVLG-VLFTGGNH-VDBKZUR-BXILOOFEY-PQJTC", "BS--TO-DWJJFVGLOXDYGH-E-Y-KZR-FSBDYDHW-RIAZ-GMZIWM", "HWQIC-ILP-DEUTFSUZ-WYPBHXNT-LEKLHNMLOTNWDW--W-LGXY", "-W-NF-MP-WOPD-GO-H--JB--FEXICHWJRCIGNK-Y-JTANA-KWZ", "-KLPT-Y--L-MZPXRMOXCPMQB--QQYAZVOIQ--IUAMKAAAFUW-H", "KYVF-RT-PMNZWEYODRQAKXEV-QFBJBOXHKPFAWJVFIEN-TKW--", "YH-NOL-ZBJIXLMGIGRGC-FULJOW-IA-SFYJDF-R-G-UHTSCMAG", "R-HMVGKQ-FEOXBDFJMKIOMSM-TWAMRXYXCI-VTJ-ZONY--YQ-I", "JG-UV--WXZJS-ST-AYZ-I-U-HGE--V-TBDMEODDVMWZ-MK-OTD", "-DTL-KSX-RVCJCUO-TSDTYDTXGT-R--NJK-S-CATAJS-E*-XID", "Y-HOK-XPHKPBJNMQFTHIGXGU-TEMT-JUYPTQC-ICGCWUBPCTMZ", "ZQQNN-Z-TTYCHLKHPURO--SMFQEEWSPF--FWALGUYYZWDVG-FY", "JPFIM--HT-BGZTCZHN-JGOWUVOA-ADBN-U--TQLM-NY-XS----", "-PS-OGT-TANB-JPFEIKXQKITC-WEGU-VB-A-SPPU-PYVXD-LSK", "V---SOP-LNDIOOCF-DSRET-JEFIL-B-UXFA-KYAFQN-NGVEKB-", "OMFGL--H---ZDL--EFHUDQLUIK-AVWZ-BFVOEJ-UKSZGJ-CSWA", "PWQPV-QJV-QZFALRQLG---RQ--TO-EVWHO-TJGKRTSKTPRJY-B", "OY-LDWTMHL-AMLUHAMOVGFH-ILS--XODESSLH-SPUYZUPDWZ-T", "RMRHIMOO-H--WYLK-XITBERQCVOYG-QEVGN-FA-QXIOYWIZ-QE", "ON-TJ-QNHO-HDQC-JQU-LQEERX-TVHSVUEORSOPWQKXCRXOVAA", "JTOVVZBBGOU-KY-BSXIYPC-M-HDA--WAVLWIQJ-L-RCDQQGMFE"};
    vector<int> detachmentSize = {96644, 91057, 98457, 99438, 98278, 93873, 95920, 98809, 95387, 96567, 95378, 90808, 97114, 93908, 91656, 90586, 92970, 95011, 93411, 93152, 93783, 92263, 94462, 99995, 98841, 91000};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 181643;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> countryMap = {"PWLMMBYYEJHM-AIWKYT-T-OXKVOUWXFIC-Q--Q-GTPZSEH-GA-", "DGADFXSEPWBNAVU-E-SV-LUJJSH-PV-IT-NABU--LZH--HLOJJ", "E-VAN---QLKPMX-MLYR-ZPQCKCWGKKEC-XBRJ-WD--V-OAQRHD", "CMLYYOMRFLT-ERSU-IN-XB-PZDSAWAFIDWCSP-VK-UB-RLUW-G", "YQ-YT-MCWA-IJ-Z-DOYKHJNK-CQ-BF-XMUFJZ-ACARD-Y-ZAMP", "--FP-WRAOBPTYJOUTKKKSPOBK-CY-RI-ME--H--NA-KU-C--BS", "MABZ---OTREMAVK-Z-KZCNQXE-FD-XHSLSXWWJISOQC-STVB-S", "I--JQFKKXX-YP--NCCJSEFCBJJYAXH-DQ-IJC-G-ZU-QAVDTWM", "OQHNPW-NHONCLXHGRIIBFKYHMORV-XE-ZTAK-EZL-TYKHH-PAH", "VSLRHJACBXKJEBTANB-R-DNJ-V--QGVV-WNME-VB-TOCDHEOAF", "BNIQRTJGG-FON-O--T-QD-JUUF--SYBPZT-GUJNEY---ZFTVL-", "RGQPBKG----PZ-UIZJE-TU-KIN-ML-MJQWWOGKXT*Q-VBMDLTQ", "JNOJGSDEY-HZDPOPINM-RIV-SK-FNLWA-TNWKNMMZ-JCA-OQ-U", "KONVOMQT-I-WULDCD-H-MQFMY--TVRD--N-H-P-K-AUFYDLOHA", "OQ-NIKEFRSXHRW--SSQTGOA-C-KSTMRMD----OTFX-HNWVAFV-", "VMIZM-KNED-A--UJTP-RZ-V-YJE-WY-NMR-STI-AE-QNKAFPOF", "CGD-FN--XEJWGXD--QLGRQ-L-O-FY--MEIZVS-DGASSQPWIFVY", "X-VZ-O-XS-R-FCKQJJ-VGQLY-HEUHO-FYAOIKJCGURMP-KWSQW", "T-WCKMRBVXCOH-EVVE-WFXTQLVGYTWNVWQP-EYBMWHGBEW-NCT", "VDUYRBJATKHM-PWICIXDFSU-WBU-ALVHNMJFNVBQJGJHEXH-QV", "D---KXRFJAXUQYWYVQVW---LWSG-JYMZTN-Y--GNVX--W-FSLI", "IBTTP-NN-BIYLF-XGQDAOIJDDSK-T-VE-KTNBYMUUFX-N-RDSY", "GKZOD-OQ-MQGT--MSFBLKYJ-KRFXXXTSHKEU--ASJ-WTPFBW--", "H-MBHIFYRBLDMCASOLSAUYT--YENQ-UF-YNLTSBGROHCIEO-QD", "QSBYV-WMP-L-ACIRL-NIN-YRUXGSQVNNCAH--CPLM-D-D-PZYT", "PYE---IS-TEBG-Z-UTFOZ-TCLSCEVYLB----GWSOAN-IEGDLT-", "UA-I-VQLHKMP-JZ-SDXP-I-RIITOM-X-UY-KMXWMVNX-IV-YLV", "-II-XYCNGDEUYYW-YYQHF-W-BBZGGYDA----LCNLGYOMSA--QC", "HCOTNETIRHZSY---FV-LIGAJO--OSPJNGNHOBJ-XPED--CKPPN", "YPAIHBV--KC-QPKAMTZMLP-I-U-ZJ---LARVXKC-E---RM-WOY", "J-OBCTTQJFGTGTYOQ-OMDUV-AOXDHZZBLEW--TJSYQZVACD-ZT", "M-XYFU--WRV-M-M-XWHOU-SS--K---AJQIM-Z-KH-P-ZE-SWL-", "-QQ-ZCAAUTMELDUFUIAMTPRSXP-LZ-CNGWZG-UAU-OICEUOMLY", "-ZP-NRJ-WWU-HEOMGOA-A-P-MJD-CXY-SRQQQSA-K--VTXOSJL", "YR-PRNRVJL-BOSZ-JD-NGRRMF-VMKLYG--U--IAULUVTM--VED", "MHR-TWPUPNBWEQZXNQ-ODEKM-DEELXCP-TEOXJRXMF-RIEA--Y", "PNA-XEWLGSOSSGEKJIX-VKFYAH-KHHR-QYJ--C-DH-RGC--CSM", "CAKITDWARUW--REPPNOMHLNUCREH-SKGY-RP-PQINQJNFHWGPG", "CCXWSCOT-XWIWAIYFCVBHSZWAESAM-VNLI--IAGCS-KZGUSK-J", "DGQAMTS-LUORMSN-ML-BC-IAHE-HENPBEOYAM-JQGZOBNR-IVQ", "QPVIMHWULMWLNHHZF-FLRJKHLNUAHQYA-HTXBVNJVVCW-JO-PB", "AOY-LCEYMOXIHISRB---DECZY-IPUEBDCW-LAPF-JPFSLXACRO", "-UAIF-GIVWACSTQ-EIEW-S-A-LJYTGXXTVWVSB-EOP-B--W--L", "XR-AOSQTYRVUNWF-H-EQER-WEWNVYCLJTYCIZNMLCRVZONUDE-", "-HHMTQRTNLKJTKRH-T-AD-UQICC-KTK-OPPUYRFLL-CXHGYANM", "FDZHRJAFZM--TI-PWI-EKV-UBGG-XZPL-ZFMPMPDUMKRAB-GCW", "NWJCKTI-YBFDXS-UZYMYZ-I--BII-DZ-YNSGTUWPNYG-JJT--M", "AAN-NFXQVDM-RPK---HELTQ--M-LXD-BORW-TB-XWSOR-FAJJS", "PRZVNXLVOFTYH-PO-OTK-S--EKD--TFRZ-SNZSCOZWKEDE--JQ", "QOJ-LOASYX-TMIAA--CB-GOHJARQT-FF-JYH-TMCBJ-HESCNUB"};
    vector<int> detachmentSize = {91362, 98617, 93044, 90459, 90318, 95587, 90567, 98974, 95710, 93438, 92916, 95202, 90440, 96177, 90611, 96342, 94353, 92641, 93711, 98965, 91739, 93998, 93229, 99703, 90066, 96068};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 279471;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> countryMap = {"J-MP-DHZYENZNNJ-OEKJVOZMNM-TNKOPDSFMOQZLJBT-HJXVYU", "UL--OWSFITZXJ-JVPK-TMIMJSMUDW-RMXFEUV-HUYZK-MRDNB-", "KZBN-D--UN-CMLZXKH-DLQXCOUVDGGUTMLFMT-VK-LGO-B-TZZ", "BIRPK-QBEYXVC-KF-SEVK-OJEF-GVFASYLQHAGZXTZCXIDESNV", "W-ERROWYUXJONGESFXPFAUOUHU-QWNED--SE---GNGYHFZDZ-U", "WO-XXTEYMEC-B-OKLLRW---NCSBY-POR-GC-OE-H-DYZFOUIP-", "TQI-TZPVRH-FXLMQ-L--EJH-TXMQYT-ASBV-MLECEHDRA-T-LV", "MO-KMF--G--PG-IGH--LR--EYD-SKHILGLRZLIVJOJUY-O*PQT", "UKSTKJ-JZUSS-VLARF-CUNPRWAMWWR-RLFOUURUAYHQ-RDR-SY", "EUIGMAJSDUDYTPFLBYVYGOTCAT-C-YPBC---CGDLJKPRX---RD", "-QL-FZEBNAHSANITRMREDQV-YR--PAELWF-EBJZCXXCM-NJ-M-", "------WQFURAFAYOLFQA-EA--VBOL-OWNLRFD-AA-FLIH-OZYL", "-E-DMB-JQMQ-GPEK-EEEB-R-WKCO-L-UBUKN-LXDLBPLTNNMCW", "Z-MRKMESQZU-VAQUNITZMNJ-SUNDRWTGPZZFOC-GKVMC-XTFHH", "PQEJWKVYZK-OGNHYVRJ-ZBUDDFPHFP-FDQ-V--HRAV-LGS-UWA", "DXPAYT--HO-O-ZAG-COTVFO-LB-OMWQNN-ADBMXRXBYYDYHHUH", "EDQ-LZTVDELTONKCB-NEUEKQ-YYMPEN-O-NABKCGI-CR-R-XOZ", "CBD---WQGLU-EDPCKVPDUIULUNSLEZL-T--PIDDSWDA-WWD-NP", "EYRCR-UJWAPMU---MJQF-QYDPWTBLI-VTN--DLJNKPMW---WVF", "RVEK-IS-NAUOM-VLPBRY---XTVEXPSK-NYL-NAU---BF-W-O-A", "NX-UO-ZRFW--KX-AIGEMM-ZK-VMSG-MBAI-I-GQRUVGX-TIKKP", "E-ANI-IFNLELQMZY-GACQAUOX-I-J-Y--OTSLWHEU---O-RTVR", "E-VRMIXOHTPQJC--BAM--BTC-FFHYC-Q-OGRLJZINR-V-OOW--", "KXVU-MOKDFKPKVBCQOEXZFHJTWO-ZHSC-F--JTNOSTMZLZJR-Q", "-LSA-C-LDOI-KB-GIYZ-R-PX-YRHJI-IGATOJ-KBZCIRHAMB-O", "AXXTRWBFQCT-KXDL-QICBIUAJ-FOQX-GX-HCXPPVKZRHUR-SKH", "BWIQVLRCRPCOJCFQWSLQBCBVOP-AGT-AFO-DOLD-HYOBJ-LATY", "GDD-MBE--WYMVQWHZVSYMPVQDGR-XVAVPEH-OSCDZO-NJOB-IJ", "V-YLMKKTF-CKGLRIMK-KJ-X-MR-QQN--VZDBZWC-QI-J-HRMDT", "YOUQR-BZECYSKSANRT-NBIY-Y-OHDHRUQWKDR-SHDDL--N-HJY", "HMMS-HOTFDP-OYMBGZTQBSJ-YSIT-MCRE-YLYMWISDGJB-LFKV", "CRJST-UIJ-O-WNEZOTHVFPP-BOM-M-V-EKMR-RPAJ-JEJQU-WT", "-SBIHLFXIETOEVAT-FO-SYZFGQRPUV-G--H-JJW-L--FIR-DGQ", "ZGLLFWBOQHN-IKL--OU-KEXJAVPFK-FRWZPDPCSLJNKATCH-WI", "VTRJJUD-WNEMNYNHGLOBJMFR-AH--P-JASOH-QI-OX-FYXAVWY", "N-NEME-BT-SYMWLDUUMS--DI-SGQHPU-QFEIERLOO-Q-ISIC-K", "KRI----RDPJFP-MZY-UTQPBIKVO-SJPQVCUGNYLENZQCZNTI-F", "GGEUWHIXW--INNU-RCJEUTTRH-EIHXTJGLF-FFABBW-CFDQVUB", "--T-FQQCYYEDXOMO-SZZVRPESSITLB-QGLJERQXQQZLBPPSSSD", "Q-R-F-CJ-ANXBHACWWVRSLEGCQAETY--OSRH--B-O-KYWUH-YW", "LYXG-RAG-PZKXPSP-WWDAIVFGFSECEMBYQHJZ-V-RV-WQTWTAN", "AZUXPDQWZJ--ESJEN--OW-ZKS-OZCHIC-HX-GBZV-NSV-UPNH-", "AOWMLSONBVOD-RV--YI-V-V-JYLI-RUXIPLBEGNWUKAGD-E-EZ", "Q-G-VTP-A-V-GAIAA-PQILARM---TEZP-YJTDIERVH-BLBMAMQ", "NPURYF-PCS-HX-YNBIGHPGONKIT-AH-PLWNGFPSNEV--VTWJXG", "XWFY-A--CI-OFOBPZJMYKCA-P-PNNSM-LYGPK-WRKSLCG---RM", "CRKGEP-TSX-DJDGMLB-Y-RLXFEHBQPBV--LTDCE-PJ-IS--WYV", "SSRHUXWM-WBNM-RPO-FYUJKVYAYVVFQZSV-R-EK-ZYIU-IF-FD", "MXUIAPJVJXS-WIQSZ-VLJTZ-LGAX-DJBJJASZCQWMI-J-IDQA-", "-KLWGZ--ZRH-W-SEKMC-FAFU-NN-IYZ-XUVBVH-IAXBBM-YZ-K"};
    vector<int> detachmentSize = {986024, 363402, 970644, 509067, 704207, 552508, 257258, 790628, 394319, 502149, 729383, 194048, 909805, 80651, 849837, 423411, 869804, 146936, 954002, 410507, 851163, 935232, 75629, 781042, 223661, 374438};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 980854;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> countryMap = {"PDCOBVBGQ-DDMXLGGDQWB-ASP-LV-VPBJZ-KAVWQ-V-K-MRMTB", "AV---UHGHXS----UIACVIW-RWHVLAQHLI-RWFXVM--HCIO--ZK", "BV--DCPZOSDV-FFXNSZPVUC-CGNQGFENJO-MOSPH-NFNIKNSLE", "ZQFTW-LC-FTKZCSVTFCWKOH-XOMMFQET-AN-B-MQTPYXLHBESS", "J--NRVTF-SQDKVBX-KB-MAU-EDRAV-JPBZO--OZLRQMXMA-TLE", "RLV--MGDKH-ASG-H-FQVGHDNDI-F--MAFYJSUMSO-DIT--XF--", "H-F-PSPNH--U-IBXHX-I-NL-AOZ-CCX-VGO-EKL-Q--VMPQ-AP", "KLLMZJJM-V-RQXAON-CKN-FE-P-SDFLGA-SWEB-KHPPMAISKCE", "Z-SPBPGMRDNBOHCYMXJ--WQK-L-NVS-CEHQL--T-EU-V-AUWSR", "JEH-XPVINALSSP--BHLFNHRKVQ--TKCWN-Z-HUO-VUE-N---RO", "V-XYN-ZBNC--KGELV-THJLPAUFL-CM--X-ZUSR--TBE-QPJKFF", "SPWIBMN-BXQT--QBFOGTHBWCLR-IMG-PHKLZYBSA--ORXEHX-F", "M-XKV---GHRA-UN--QPGZ-GEYZ-RKFYQ-RMBJISQN-LCV-XBXJ", "-IMYWXUL-PVDPHBU-DXDUUAHPZXK-CGV--OE-QZEAQASXLR-YQ", "KLT-AO-GDPPPPOMOF-GQG-SS-GPJM-BIW-NDEZ--VNCBGHK-ZX", "-XAAVNAKU-YJ-YWQ-UOLNQNWZG---XLTDJLZOOU----PXBMFR-", "XO-MQ-RVIN-B-MMWONZ--RXQLGVJC-MDZCEBSWOVSTANNWXZFW", "C-OTEDDCXD-LZDEYXJHVY-VSULCGO-SUBEMMU-NYULFVOEHCGJ", "PEZAWSB--TDHEGH-R-HRITJVDFWOP---WS-Q-VTPQ-QOKBHNR-", "HYNIQBGTZ-AYPA-XI-STFLBBCEPSLQPMGF-LDHOWKRH-UAABS-", "IYYZRHEMG-LF-PSKMRT-W-G-RQFQUYJE-R-TOGOZF-A-F-LMGJ", "-ST-ZSG-PW--ISTMYFUJY-TFILNBOAGECAHQWF-AHBALIN-KWP", "YJCQ-SNK-LMMONJNHJAPG--KI-BACXMI-RNQSWD-XB---GX-PG", "-NODEPPABQZCWZLNJBSLSP-BY-SL-ZLQISHIPP-R--RIK-W-TX", "LZGYMBPDYFUXZFVA-VCMWMNVYZVIJ-HL-OOFVEZAOBGY-T-ZDV", "UOW--IH--DI-LHZLJIINNI-DWQR-KS-EHRNCKCW-KMBHLXB-SX", "Q-EQGHKRUS-YUGMPKJYDDIUO-IGIN-L-HRDON---HAQBZMXJL-", "-HAK-K-VRU-EJEH-AOYOHDOVNZRQDTBOGAO-Q-HZXAHQAH--OP", "--PJDPD-BKQPTXUPYLFWJKCO-S-VLJPC-KWJHXZFODZMA-UUJE", "CSKKB--SCO-SNI-MRAJINXJM-A-G-NFFIARYEG-Y-TYOYDMUDG", "-KAB--OGQGHGTCFZBCOIE-IEZ--BKJV-IYUNSUSRAIIETHCCAL", "-YDWG-BJK--CZSN--BFNIY-G-TU--QX-HTRJO--IHOQVWIKIRH", "LXP-BVTPEJS-GIOOPAKJ-QYTTBDWGB-EMC--XPJ-JAOHKWADWU", "-H-RJGBT--RTFEABISEUYU-T--XWZSXTYTW-IBP-LJPJBAZVME", "PCVVAR-LCC--MZNIUXOY-YH-MTXG-D-ZTI-I--QXV--WPYSG--", "YGBLLN-*Z-MINEXW-PDSS-LSI-G-EWFLYOLLY--ZH-NWT--R-T", "GBR-JQQO-X-CFWWG-IS-MVAJJVMTHMSYFBMXIUAOV-IJAN-XQJ", "YIOERJZ-UKPT--WARIV-NA-DJL-OZMZF-M----FDF-ZKZ-SJHB", "CJDBXVLMOTYPP--EQWNNJAW-OGQ-RS--KUP-TKMNDPBOIZB-OB", "TLJ-QNOPQW-O-ZNOQJZLAPPURURJ-Q-IK-PZESZ-ATEY-Y-IKT", "IT-GE-H-XKQ-MZNVZYH-CPUPQQ-SRF-MFTCUQ---T-PKHTUKUZ", "-WX-CODFZ-LAGTELAMS-WW-D-ANWQ-SAG---TJM---MKLJTBLJ", "T-KCKYORMXHWCQY-MVOR-AIKGNTOZN-AQ--XENSUXOJVST-AAL", "AZP-UTNPSHUXRTENLMKAMKMWUUV--YZNOUZCWLWVCTH--J-ICS", "COIGQRP-R-GAHSARXGW--KYASAJFPYWAIS-EJL-BCTYAV-U--E", "UALJ--CEQQHQ-JO-UBZ-S-ITW-BKDRJ-ZM-R-ANTE--IWW-R-S", "PF-KXBVDGFWUQOSCYTYEZ-JALTQ-I--M-Z-F-XZTTRRDGH-TM-", "WAG-BX-UUZNO--XUI-JDWBCG--YVBXBGJ-NJZOIFKQNE-BP-JY", "-GPAO-WW-CVKLMP-MSB-BBQPM-BG-XIJFT-MC-NGSJCLMNQ--W", "HQEPW-LQIZSGI-JCYDYUTIUMXSY-FZ--Z-ZUIU-IUARADTV--R"};
    vector<int> detachmentSize = {564649, 278130, 825087, 836522, 744246, 666601, 542646, 443702, 913935, 308895, 234902, 121809, 553795, 638428, 831900, 267170, 700083, 430210, 839214, 323950, 905304, 253742, 910867, 606991, 453533, 800913};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 821892;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> countryMap = {"PP--KHRUCUAP-HMVFQTBDYOZ-FOLEJRMABBU-I-OLUG--WNPU-", "-BJONGJYSPKTJO--ERYDYJXW--GZJWIFMP-KM-UHQBC-Q---EZ", "PAXRR-WXPJGA-BROVYA-HU-M-DPYG--N-ZU--TMSN-GX-BMP--", "V---PAGU-AYSPRMA--TS-IMURE---B-ZQ-X-S---EKG--UUEEZ", "XKD-SWMWUKVRJRCO-Z-HBD-WMKTBLKCKFXLRN-UWRJZGHUBK-E", "N-GTPA-V--ZXYZDW-VR-G--PYRCHB-DD-SC-RQR--LW-SHBWUK", "FB-R-H-VZYIG-T-SZKDHGVVI-VR-TRGDHPLF-EUWELO-GQ-RSW", "B-X----R-N-FMX-LIBLPOTJWM--YONJ-BJ--SC--HALQM-LF--", "GGBWUXY-G-OTKO-DHB--RTGWAEIAYJWKA-VPCJZQSVDA-CUT-P", "AOQOGBJSAABC-R-YFQWE-ZDPVXQROWNFP-RZ-OVYHEQANUA---", "Q-KGSSUXBM-F-ZXSUXH--ESOPTKYHD-JWQSC---XPADPF-GHUR", "K-CYACBZ-ZJD-ILTPXATJZ-WSHUFP-ZR-SF-WXECV-UUOFAH-Y", "TRBSFL-UQ-R-FVEGIK--UGBEFENFHLBHAMO-M-EP-U-KLAOBUY", "I-UM-TXB-WHU-QMQVZNAZ-XXOV-MDAZIO-HPQMD-TOM-JXGKCF", "SN-BTY-UUBX-CGYMZPR--HQXJBOQ-L-EH-T-S-X-WDE-SBZG-W", "AMTMHEV-TGVW--HIJOWQENQRWGRRZ-YHRLDPKNWQYPT-UZCB-D", "-JZ---LOLKGO--SXBDKNUW-OE-EYCZBYU-X---XMLRO-FP-CDD", "RHRX-SX--SRRWKAWESKX-MI-VNCBTWSK-WJGAMCH-T-OPUBQWX", "AGHN-CKGY-NNK--JJU--MEQOUYZ-ROQ--T--RW-NM--WQP-DDD", "O-CZ-DA-OY-UNDO--TVFB-ODB--OHVSPD-MHYPCVVRD-ZDE-QS", "XD-HG-C-MSD-I-BSF-MB-G-HOH---NAH-N-ORJZ-DO--QZ-O-N", "VHOVVU--BQPT--C--Q-FF*F-J-NQGVFJYNYL-UCJWWJHHNWQME", "MTLI-ZTVLC-TKPKRYY---Y-NJ-CGDGJYW-IDTRVNFTOI-IBYTG", "-SLZ-U-DJ---QQ-WV-UGRGX-CEOIFMH-IMZGW-B-FWOPCAK-TL", "SNDHCYPF-OEPOIGZEIOAA-LXIZ--GB-RUXWBW-HTF-QB-RH-FF", "NW-MJCC-YETH--IMHCPEIPW-K--UZ--AMBVVFVMOWEN-JCCBZ-", "SSWT-KFJS-D-XIE-FIQYFYQUXPSPBJNZ--CHOJFLYSIJADI-PB", "---WG-EFHWFB--XK-JPMEDXTOT-HGJH-VYSVVIBIQPXJHOJKRM", "-UMCOPRPTFXFQ-IY-WNY-FIRK-NCVMWXN-SABFUPPQZHTGDXCV", "T--D-QJBWY-ZHIIKV-MHYS--ACUEK--YH-U-XQIQFXFGVW-USS", "-BRQBYCSME-APODRZYNTEWQ-F-BF-P-BXDE--T--L-TL----MY", "P-RQPPVR-IATK-BGZZYO-TXGAKRWIDAVKW-OFQKDSXOTERR-NN", "SQYOKKX-NSMPOBAIKFY-T-HKQTT-SYC-TKUKXNBZRHAB-NNGTB", "OEYMW-ARYZ-ZSI-DPXTV-LVF-T-WJNEM--VV-M-BAHK-PTICH-", "PVGL-XA-EDGMOFSMU-FQ-GJOCHWSYIZJBPTHHI-EOUQHPMGWQW", "DMXZU-X-YZGTLNWIW-H--IHNIKPTK-UZXJLUR-P-KTA-WPFKLC", "PGPLAQCSL---N-TJQASRUBFHR-QQFDZC-M-DNUNYI-B-K-CD-H", "PDU-FXK-C-LUB-TL-NTU-VD-ZP-A---G--ICY-F---RU-ABAOV", "SATK-FFRWS-OJQ-WM-CBMYLNLBLPOXADBE-QRFMV-AFOODQFCD", "YNDA---MVXBBH-TPOL-MBRZX-UWNCC--TZ-EPZGD-WKSW-VVM-", "JLPQVJIRYOTLI--BABNWM-TP-OC-L--W-CNKXOJ-ERH---ZE-B", "RFVB-KHMFOVAFF-H-LWPLRF-MXBSGC-KVFUS-QPQOFOHDC-PSJ", "ZOXDNDQ-FLA-FB-VQGFBAZSLZ-APG-BEKEKMNUEZPRSAP-KDLF", "N-IISSLN-YUUKFXC--OH-WFK-C-VPYLCB-JILH--VZCKWPX-C-", "PO--XCCG-SBW--X-I--R--XZBY-NLNBL-CYETUCI-SJG-GZBXX", "TDXHODWOLHMGDRVHY-HRBHPOCLQ-DPJCTQSIKYUDVFBDV-FBT-", "SHAGZ-GGDIOIFU-IVM----K-H-LDPEPKGOR-L-TADPMQYINT-G", "-DVVFXW-Z-IBKOWEPBSP-L-UYPSB-ZYS-H-LF--AGKDZDXJJ-Z", "ZXLW-YCUEAXIWATTJHZ-AIOWFIVG-WXZGK-YVZITEU-SW-WOQZ", "NT-Q-ITXFEFCJQBHUQBJVSBB-JW-QP-PYW--TPROG-JOR-YOLL"};
    vector<int> detachmentSize = {50211, 141601, 553047, 569814, 488898, 674465, 172200, 97999, 641009, 12647, 2327, 722241, 373541, 878264, 607100, 72113, 563450, 927364, 366134, 418375, 362830, 72843, 953440, 866948, 58986, 436748};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 200587;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> countryMap = {"DDIHJTZNBIWYZBNCAXLOVMDEXVQGAFAMQHJQWGEYCDRGLGRUII", "ASWWJNUBQBXSEDBL-XC-NGBQIQCLFUYHLXQLJKIZEUUGOUSTBH", "VMKJVKXRRORTBKSZUBAAUDM-ZBTKTEVO-VTAQMVCIQZAYDFSK-", "TEM-NZAFCJIVKOOOSPNQGECMKAFQBGJYVWDEGWTNHDKEXK-EPN", "KPWIDITYHIGTQJJ-----RDEXHSMPBG-OGDLKPMNEAHZZZOB-AJ", "-FULZQLBVXCKC-KEYXHR-KSAPWIRMMSCC--AGPCLDUBACZJTOI", "CNMQXZM-COEVRPM-TPPDDNX-DYDHHPUBYFBNFAEI-GFRN-SPEA", "HUIBOIHAZXQNTFT-G*IU-XRQSWRFDPCJYNG-PSIVEKZDRLURYZ", "VGTSLMBSEZWTIAN-VRTHNASAUOYKXDWSUIXJPPFHTRNTFXMUKD", "JLLYWEQCFHSOUENU-----GDKRJLZMWODLVPVWNWXLOSNPJJTGD", "VQRBOMQJHS-OFMXIQKHUAYXBMMMYEJPRUGWQDNISTSTGITFSJB", "HDRRGEUWOZMJUAZDOZRTWTOXFUFTOLSQVKNEHHFFZKINIHMWQE", "NZKRENZQWYLADLZVIGZARDOSITLRDLTIA-SRYPNPXGYTCVGCUU", "IITNL-IVAYOMVEYOO-ZJTVBJGQCISUHMFSYE-NSU-QEMTSKCZO", "OJBRMERCPUWTMFLYGBTIGWVYMFNEYATTZ-WLXLUFWEMJCWX-WB", "ITZFSNUUDE-GKTDATTKFBYGNJQKGLYRKMIWFTCBBMRYRAGXAJM", "IQRLCCWPXXPBKNAEBXZNSEBKFJRWSKJSB-PLBFDRQHLFVZZTV-", "RPLACZVMRXHIOTEKACMEJ-SNVXCVBONJPOMRQEXZTINPIMYAGR", "XTFWPUXFMRQXMWBNIRGM-VUXUMSJCCQUQYUGFFJUYEORWBAZEN", "GOQUSKHEQUQXFARMRBBGEY-GIKFEATWXZIDSO-BPZBGSBXYODW", "ACYSVG--YPEKW-E-VZRILUZGDBQZXKOFJIVSYRTJOGGER-S-IU", "XYOMGSVEQ-FEUHXUWGSRCBWPEFIZXENCSLFOSYFYQTWBZMQYHJ", "MPJREGKLMZZDAQRVXEHBVKPDVQLLLLBFBAHYBUEDBHMCMFGRJI", "CYYXEKS-LYJH-XPKBVZUVOFEZXUYNTBNDIKTEZQ-WAZKWETTNY", "SNBLAADPWWV-BLEKDKMNWHPEWIKKUJDMGSXLSJSZDSBFUDZZ-H", "CLOGCDYSZLYJMTNMYLTGVSMCINCGNKYJXLWKHEKWIFFHJLWZEK", "NIARJBCQGP-OGGDKHFPXHODINQMQKMBNLKUXSHOUDRGBJSHRAJ", "EYXZZUTLZCHVNMCSST-ZVBGBC-WANASQXBG-TBPEHWSERQWTAQ", "QOBGXXZCAIQVXLFURBFIRBNSD-HCGMRKHMMC-MKEARODOMPIHK", "JHBCWSGDXZJEMUZGRZEIGCKQHIXBBGT--ZGRLIFJZVOSFKZFVC", "EQFXIEJZPGYOEDZZCYZYVXMJKGWOILTXCRZZNYOIYNYWPUFFEZ", "FLRMXFQQ-WIEYFGCFJSPZHYA-JMOMGW-GKNVFNTFNKODCMKRL-", "APUMGXTOLHILGRIBXSYMNEFITLIBMIRPN-TTWLRABMDDAKARXJ", "LDSIJIJMTRKJNOSHRCOJWUSFJNFAKQGWYITKIXKJFCJBOAQTYH", "JLQZSXA-NSJMHROBMEQNPPNTIBOWQELKCPYZCSZENRUSCFMEDI", "TTZVWTLZZCZSMZXKZFWPNAJZZBWVWKFMZZTIIUUVCMTPVAZMLR", "CJ-QFITEQHWNESHLQWUTUZXK-OPPDON-LUNQ-TMFFO-IAZ-SRI", "JSSGNJMWWAJRPFMVMFWAUIEXLHHOSICUJZNLPHQWFFOKUTGUST", "EPCKKVBZXKVEBSNTALWSYEZKCDAWGEXXGLAZHTBCVIFWMJGTFH", "ELLSQOEUCNHXQBTPZXJN-PQIDHHRLSDUJSRLHVENMLLGOLGABN", "JJZKKNQSEKSIQKFZBRZJPQMCKDEQRPTRZJKOBVBABXCFR--EBN", "GJJDEKNPFLWLSMQIPR-QUSPFUZKWFNV-CZZCYXAGDQ-PKON-CM", "JPIVYQ-JPLJF-NAPVTSIWTQOYHUMHDRB-KJEJHCGUFDQ-CWGTD", "RZULENXE-NQBYZKRYTPX-KHCGY-QLKCYZIZWCLLKLSJDFVQIAZ", "WVJZJEKFNPUANYLPBRNLYMCYVF-XLAKMIHUBVGLYWFONCKBRHZ", "KA-ACKDRANRYUIJJHTDRSKBAOWKIJMEYYPKEDSXHXSERYLLGKE", "ZHMFRTKXFEMKHMPXYCVLWTEMB-VJIKPKAABYUJFWKPKGYCUBDQ", "VZCNGM-KEZWWWIXIWJUTAOMDOCYYLISFBPZBZPYVFAH-NIQXAN", "UOILNF-JJEYBWDJJKARTSTLPBUQVNFEDJLXKFTKOI-GJ-NKXHM", "DJDYEXNYWPRLPQU-YHSJEWE-KGBCUSTPP-WUTSYGJNPJVRXPFP"};
    vector<int> detachmentSize = {521839, 422205, 346506, 1804, 696507, 493404, 211664, 628078, 180100, 820878, 55507, 778857, 515268, 663086, 583160, 770197, 855775, 353143, 945956, 749821, 960111, 243061, 981032, 729051, 722812, 90896};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 579150;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> countryMap = {"DDIHJTZNBIWYZ-NCAXLOVMDEXVQGAFAMQHJQWGEYCDRGLGRUII", "AS---NUBQB-SEDBL-XC-NGBQIQCLFUYHLXQLJKIZEUUGOUSTBH", "V-KJV-XRRORT-KSZUBAAUDM-ZBTKTEVO-VTAQMVCIQZAYDFSK-", "T-M-N----J--KOOOSPNQGECMKAFQBGJYVWDEGWTNHDKEXK-EPN", "K-W--ITYH-GT-JJ-VV-SRDEXHSMPBG-OGDLKPMNEAHZZZOB-AJ", "-FULZQLB---KC-K-Y-HR--SAPWIRMMSCC--AGPCLDUBACZJTOI", "C---XZM-COEV-PSD-SDFSD-SDYDHHPUBYFBNFAEI-GFRN-SPEA", "HUIB--HAZ--NTFSAD*IU--RQSWRFDPCJYNG-PSIVEKZDRLURYZ", "VGTS-MBSEZW----SVRTH-ASAUOYKXDWSUIXJPPFHTRNTFXMUKD", "JLLYW--CFHSOUENU-RE-ERDKRJLZMWODLVPVWNWXLOSNPJJTGD", "VQRBOMQ-HS-OFMXSQ--UAYXBMMMYEJPRUGWQDNISTSTGITFSJB", "HDRRGEUW--M--T-DOZRTWTOXFUFTOLSQVKNEHHFFZKINIHMWQE", "NZKRENZQWYLADLZVIGZARDOSITLRDLTIAQWDYPNPXGYTCVGCUU", "IITNLLIVAYOMVEYOO-ZJTVBJGQCISUHMFSYEQWDUCQEMTSKCZO", "OJBRMERCPUWTMFLYGBTIGWVYMFNEYATTZ-WLXLUFWEMJCWX-WB", "ITZFSNUUDEDWGFDATTKFBYGNJQKGLYRKMIWFTCBBMRYRAGXAJM", "IQRLCCWPXXPBKNAEBXZNSEBKFJRWSKJSB-PLBFDRQHLFVZZTV-", "RPLACZVMRXHIOTEKACMEJ-SNVXCVBONJPOMRQEXZTINPIMYAGR", "XTFWPUXFMRQXMWBNIRGM-VUXUMSJCCQUQYUGFFJUYEORWBAZEN", "GOQUSKHEQUQXFARMRBBGEY-GIKFEATWXZIDSO-BPZBGSBXYODW", "ACYSVG--YPEKW-E-VZRILUZGDBQZXKOFJIVSYRTJOGGER-S-IU", "XYOMGSVEQ-FEUHXUWGSRCBWPEFIZXENCSLFOSYFYQTWBZMQYHJ", "MPJREGKLMZZDAQRVXEHBVKPDVQLLLLBFBAHYBUEDBHMCMFGRJI", "CYYXEKS-LYJH-XPKBVZUVOFEZXUYNTBNDIKTEZQ-WAZKWETTNY", "SNBLAADPWWV-BLEKDKMNWHPEWIKKUJDMGSXLSJSZDSBFUDZZ-H", "CLOGCDYSZLYJMTNMYLTGVSMCINCGNKYJXLWKHEKWIFFHJLWZEK", "NIARJBCQGP-OGGDKHFPXHODINQMQKMBNLKUXSHOUDRGBJSHRAJ", "EYXZZUTLZCHVNMCSST-QWRQWRQWRQRQRQWRQTBPEHWSERQWTAQ", "QOBGXXZCAIQVXLFURBFIRBNSD-HCGMRKHMMC-MKEARODOMPIHK", "JHBCWSGDXZJEMUZGRZEIGCKQHIXBBGTRQWGRLIFJZVOSFKZFVC", "EQFXIEJZPGYOEDZZCYZYVXMJKGWOILTXCRZZNYOIYNYWPUFFEZ", "FLRMXFQQ-WIEYFGCFJSPZHYA-JMOMGW-GKNVFNTFNKODCMKRL-", "APUMGXTOLHILGRIBXSYMNEFITLIBMIRPN-TTWLRABMDDAKARXJ", "LDSIJIJMTRKJNOSHRCOJWUSFJNFAKQGWYITKIXKJFCJBOAQTYH", "JLQZSXA-NSJMHROBMEQNPPNTIBOWQELKCPYZCSZENRUSCFMEDI", "TTZVWTLZZCZSMZXKZFWPNAJZZBWVWKFMZZTIIUUVCMTPVAZMLR", "CJ-QFITEQHWNESHLQWUTUZXK-OPPDON-LUNQ-TMFFO-IAZ-SRI", "JSSGNJMWWAJRPFMVMFWAUIEXLHHOSICUJZNLPHQWFFOKUTGUST", "EPCKKVBZXKVEBSNTALWSYEZKCDAWGEXXGLAZHTBCVIFWMJGTFH", "ELLSQOEUCNHXQBTPZXJN-PQIDHHRLSDUJSRLHVENMLLGOLGABN", "JJZKKNQSEKSIQKFZBRZJPQMCKDEQRPTRZJKOBVBABXCFR--EBN", "GJJDEKNPFLWLSMQIPR-QUSPFUZKWFNV-CZZCYXAGDQ-PKON-CM", "JPIVYFWEFAPVTSIWTQOYHUMHWQDQWDQWDQWDQWDQSDSADQWGTD", "RZULENXFFNQBYZKRYTFFFFHCGYAQLKCYZIZWCLLKLSJDFVQIAZ", "WVJZJEKFNPUANYLPBRNLYMCYVAAXLAKMIHUBVGLYWFONCKBRHZ", "KA-ACKDRANRYUIJJHTDRSKBAOWKIJMEYYPKEDSXHXSERYLLGKE", "ZHMFRTKXFEMKHMPXYCVLWTEMBSAJIKPKAABYUJFWKPKGYCUBDQ", "VZCNGM-KEZWWWIXIWJUTAOMDOCYYLISFBPZBZPYVFAH-NIQXAN", "UOILNF-JJEYBWDJJKARTSTLPBUQVNFEDJLXKFTKOI-GJ-NKXHM", "DJDYEXNYWPRLPQU-YHSJEWE-KGBCUSTPQQWUTSYGJNPJVRXPFP"};
    vector<int> detachmentSize = {495030, 605097, 406451, 912466, 243754, 578064, 475358, 261163, 864585, 285543, 709444, 606035, 245437, 19427, 956053, 959835, 1249, 995156, 819611, 151244, 424519, 588691, 543353, 903057, 326537, 668043};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 1739160;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> countryMap = {"BCTINXCBWGDDLHFITSATCYNWDPKNTQUIPUMPOSDGFKDBCRQRNQ", "QUPWEOOMKOBZNIQUAUFIYTLYYQVXMQFUHDDEJZYVGYKKMILMNL", "HGXIBGEHJSGPJEASEVWAMRQVOEDBUHEHPAEOVEOXNKKCTMLSBV", "GKBYJFJCQELCSHAYDGDAJVRZKJYIIKLAMXPSVMHUAKPHADXUIL", "GAAHKMEDTVHANEMWSMHUVKSQOWJYUDDRWZXDLCFBSZYLJBKMTX", "FUFMCVLHUZROWJWCOLNRUKROONYBTJQCYTRHEIJXMLSFPWZUJB", "TGGHQWSEQKASFLLMICJKVYJETYLRQHQLGEGAYRVBNJUACMXBHJ", "KTQXLAEDGBFHBWLLUCQXLKKTEIYVSQDJKYGOJHCOYZHITSCMWD", "PEBREZXW---------------------LOTLHJLDDJQLFEMNNXCBF", "KOWFAIL-TRRDXIYZKNBVGFPUFVVBC-QDBLBJYWHDYYNLAYTWGG", "OYTLTBR-QJYYWBJUWXUQWFEVQDHHA-GQVIODWCIMNOEJRHFJVJ", "GGIVVEX-EDIAUWUTEXOSILKIQQLYL-CBAKTXRNIWNXEOLSBZCK", "TQVQJBE-CADSBAVMOEMYTENINDHFI-GGYMQYBAMSPMXDVDKORH", "MWDJUWO-PGLDLLHUGNJVEHCBXMGLI-ZBJUOWHEDFIAMESUIFNE", "PENVAVG-NHCOKWRFUCGMSLMDGSNME-UBRFYQOZKWWCTSSGXKIG", "HCDABYM-RLCLFBXUMOBJZZZPCGOQI-XUFRXUPNHBUGBVJGPCCH", "KKNWESE-BYVTXRGZUMTXURSMGABVZ-NFRYEFGWHDERBXLCSHWN", "ISEFZHZ-OTYHLIVLZ*BZLEXLTAUVG-DPYLIEBQPNIGPKFRHDOD", "QTVPPKB-CHMUUSZRSERQGXLYMQVKW-YHAQEAVSQVQEBBTVHTLE", "TIQDXYO-SRBQOYCOGQFXTZMNFDDKM-FKESUZOIJKVIUDSGWGBC", "TZHQLEP-TYCYLMJKHHQRRAMJEJMYT-MOJXWOTZEQJHVTLFSAXP", "JQUVZSX-RWUBAIUANLYZGWPVGUYAH-NPZPCOMXZBMRGDBLPHSH", "VIZCTTW-VMFXCJCMLYRUEOEXCZMWJ-RLFWJENJUXUPFBVXOBFU", "ARZVHLO-DEAKQLGIAQQILKEOKFDGB-DYSJVRHYTGCAIVPFLJNF", "WCAFVVO-WPBGXJMUWXDRUICXFGPMX-NLVWLYQJRYBCVVGOVNVM", "IGJDRLE-TOBFPZSYJSULJWZARJCIX-LQQVUXODCLPKRQBXLGVP", "ARANLSEU---------------------PWMODZMHGOWJDDELLJNRJ", "XJZLHBKUJZUROTRNIBEBZOKXJVYEMRLJXDAQSFYLEMMRLNWVDL", "LKUUUVNIDXVDDCUXCJWTXXWINJNBHHSHTDJWYLLTYBMCYZONGC", "BNSCVDESUTECXPCYHWFGGNTSKCCINQJISXBJKFQERJVUSCXEQX", "SWVVCQLQFWBSHYUMFGGVWZVTROCBAAZHAQNNNHBIUOIQONONUH", "GLRCFICPOKVMMCHPXMYOICVKPWMQSXYPRGGUKXXSJUYSSKGOJB", "TXDIZGKLKBHGIXVDIEZIIWBZJINDZABUUAXRMQZWKWLNYAFBPW", "EJQFPSVSRQBWMJLDOKMSYLISCAMAXHMNTSUFNUISUPMWOBTDWJ", "CZITPQCRCRQZBWXOOVAUCNSWWCOOKCCZKBIGCYPBHTBQLUTSME", "EESJINNPQOOEJKCXYKJACYCKOWHDVSDKJXECNRWDFVQGQGINKF", "DAMUMKXUAYSTCUMBBIVBGERXEXHAOALZIIKYOCFROBZBVPBDKN", "LOFSIZPLPGHUFWJBNZFYNLYJTWLTNKCTAUNIPDPTRXWHOZOGHK", "FOAIXRIIZYNPEVLBLRAXONFAZDHKKNAPZLQSFXDLZVMNCBPNSZ", "YYNBJWLRXXUCDUJGEDVJIHAMEQAHSZECWXFNGFXKPYXQWIZOEE", "LWJBMTJUAOTOCRGSLCEMFYOGBEOKTWNDUNVGWINYOMSEHTRRLL", "GKNJLTLIPWEJZPIZHTXOSUVNYLXDHZJTLJKGPPIKLRKNSWRMMU", "PJZJRDGURUETGAAXVFJZDPBSSQRXBOSJWAMPOJNCCSUGOLGYBG", "ZCKRNKILYLMTWSAIWPELGRIWVUSOWXXZBTGTTMAKMNLZIRCVNT", "TRPMBZGBIYJPWYUOZQQGFTVONKPSSQJVCDZMKGZQGCRMKNOMVH", "EIEWTWCRWEWQTUTNNSYOLCDSWRNPNIQRSRXBSCKJVOMOOPSIXZ", "RZMCBEZAWKLQFKWPCRZJBMRBKZSYHSLPOJMECZGWDCZSRGQFTM", "CJIDCUWRTEBYNMCFMMJANPOFAEZZZHJJPGIWSVQHHUWUEYBELK", "FXPFRTLOKILAHBRDFHPBIBCGEPTLPHNKEKUQFVSMRTTDOIQLBT", "SPCCOZEJFPSGGRHWUHQTWEEKQTKXRUTOSLPULPKMXTKHHNTTRK"};
    vector<int> detachmentSize = {495030, 605097, 406451, 309940, 243754, 578064, 475358, 261163, 864585, 285543, 709444, 606035, 245437, 19427, 956053, 959835, 1249, 119523, 819611, 151244, 424519, 588691, 543353, 903057, 326537, 668043};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> countryMap = {"BCTINXCBWGDDLHFITSATCYNWDPKNTQUIPUMPOSDGFKDBCRQRNQ", "QUPWEOOMKOBZNIQUAUFIYTLYYQVXMQFUHDDEJZYVGYKKMILMNL", "HGXIBGEHJSGPJEASEVWAMRQVOEDBUHEHPAEOVEOXNKKCTMLSBV", "GKBYJFJCQELCSHAYDGDAJVRZKJYIIKLAMXPSVMHUAKPHADXUIL", "GAAHKMEDTVHAN--U--HUVKSQOWJYUDDRWZXDLCFBSZYLJBKMTX", "FUFMCVLHUZRO-JWCOL-RUKROONYBTJQCYTRHEIJXMLSFPWZUJB", "TGGHQWSEQKAS-LLMICJ-VYJETYLRQHQLGEGAYRVBNJUACMXBHJ", "KTQXLAEDGBFHCGLLUCQX-KKTEIYVSQDJKYGOJHCOYZHITSCMWD", "PEBREZXW-----S--T--UW--------LOTLHJLDDJQLFEMNNXCBF", "KOWFAIL-TRRDXIYZKNBVGFPUFVVBC-QDBLBJYWHDYYNLAYTWGG", "OYTLTBR-QJYYWBJUWXUQWFEVQDHHA-GQVIODWCIMNOEJRHFJVJ", "GGIVVEX-EDIAUWUTEXOSILKIQQLYL-CBAKTXRNIWNXEOLSBZCK", "TQVQJBE-CADSBAVMOEMYTENINDHFI-GGYMQYBAMSPMXDVDKORH", "MWDJUWO-PGLDLLHUGNJVEHCBXMGLI-ZBJUOWHEDFIAMESUIFNE", "PENVAVG-NHCOKWRFUCGMSLMDGSNME-UBRFYQOZKWWCTSSGXKIG", "HCDABYM-RLCLFBXUMOBJZZZPCGOQI-XUFRXUPNHBUGBVJGPCCH", "KKNWESE-BYVTXRGZUMTXURSMGABVZ-NFRYEFGWHDERBXLCSHWN", "ISEFZHZ-OTYHLIVLZ*BZLEXLTAUVG-DPYLIEBQPNIGPKFRHDOD", "QTVPPKB-CHMUUSZRSERQGXLYMQVKW-YHAQEAVSQVQEBBTVHTLE", "TIQDXYO-SRBQOYCOGQFXTZMNFDDKM-FKESUZOIJKVIUDSGWGBC", "TZHQLEP-TYCYLMJKHHQRRAMJEJMYT-MOJXWOTZEQJHVTLFSAXP", "JQUVZSX-RWUBAIUANLYZGWPVGUYAH-NPZPCOMXZBMRGDBLPHSH", "VIZCTTW-VMFXCJCMLYRUEOEXCZMWJ-----JENJUXUPFBVXOBFU", "ARZVHLO-DEAKQLGIAQQILKEOKFDGBRDYSJ-RHYTGCAIVPFLJNF", "WCAFVVO-WPBGXJMUWXDRUICXFGPMX---V-LYQJRYBCVVGOVNVM", "IGJDRLE-TOBFPZSYJSULJWZARJCIX-LQQVUXODCLPKRQBXLGVP", "ARANLSEU-----X---------------PWMODZMHGOWJDDELLJNRJ", "XJZLHBKUJZUROTRNIBEBZOKXJVYEMRLJXDAQSFYLEMMRLNWVDL", "LKUUUVNIDXVDDCUXCJWTXXWINJNBHHSHTDJWYLLTYBMCYZONGC", "BNSCVDESUTECXPCYHWFGGNTSKCCINQJISXBJKFQERJVUSCXEQX", "SWVVCQLQFWBSHYUMFGGVWZVTROCBAAZHAQNNNHBIUOIQONONUH", "GLRCFICPOKVMMCHPXMYOICVKPWMQSXYPRGGUKXXSJUYSSKGOJB", "TXDIZGKLKBHGIXVDIEZIIWBZJINDZABUUAXRMQZWKWLNYAFBPW", "EJQFPSVSRQBWMJLDOKMSYLISCAMAXHMNTSUFNUISUPMWOBTDWJ", "CZITPQCRCRQZBWXOOVAUCNSWWCOOKCCZKBIGCYPBHTBQLUTSME", "EESJINNPQOOEJKCXYKJACYCKOWHDVSDKJXECNRWDFVQGQGINKF", "DAMUMKXUAYSTCUMBBIVBGERXEXHAOALZIIKYOCFROBZBVPBDKN", "LOFSIZPLPGHUFWJBNZFYNLYJTWLTNKCTAUNIPDPTRXWHOZOGHK", "FOAIXRIIZYNPEVLBLRAXONFAZDHKKNAPZLQSFXDLZVMNCBPNSZ", "YYNBJWLRXXUCDUJGEDVJIHAMEQAHSZECWXFNGFXKPYXQWIZOEE", "LWJBMTJUAOTOCRGSLCEMFYOGBEOKTWNDUNVGWINYOMSEHTRRLL", "GKNJLTLIPWEJZPIZHTXOSUVNYLXDHZJTLJKGPPIKLRKNSWRMMU", "PJZJRDGURUETGAAXVFJZDPBSSQRXBOSJWAMPOJNCCSUGOLGYBG", "ZCKRNKILYLMTWSAIWPELGRIWVUSOWXXZBTGTTMAKMNLZIRCVNT", "TRPMBZGBIYJPWYUOZQQGFTVONKPSSQJVCDZMKGZQGCRMKNOMVH", "EIEWTWCRWEWQTUTNNSYOLCDSWRNPNIQRSRXBSCKJVOMOOPSIXZ", "RZMCBEZAWKLQFKWPCRZJBMRBKZSYHSLPOJMECZGWDCZSRGQFTM", "CJIDCUWRTEBYNMCFMMJANPOFAEZZZHJJPGIWSVQHHUWUEYBELK", "FXPFRTLOKILAHBRDFHPBIBCGEPTLPHNKEKUQFVSMRTTDOIQLBT", "SPCCOZEJFPSGGRHWUHQTWEEKQTKXRUTOSLPULPKMXTKHHNTTRK"};
    vector<int> detachmentSize = {477136, 759257, 206018, 145711, 659250, 659542, 39554, 572191, 253594, 655065, 96392, 378276, 847230, 25770, 599431, 846334, 349445, 304768, 569618, 226563, 552920, 159250, 649999, 832211, 942730, 762355};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 617846;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> countryMap = {"---------", "-ZZZZAZZB", "-Z*ZZZDZB", "-ZZZ-----", "-ZZ------", "-ZZ------", "-BB------", "-ZZ------", "---------"};
    vector<int> detachmentSize = {7, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 100};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> countryMap = {"------A", "EBAAA-A", "A-AAA-A", "A-AHA-A", "A-AAA-A", "A-A*A-A", "-AAAA-A", "-D--D-A", "-AAAA-A", "----AAA"};
    vector<int> detachmentSize = {1000000, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 1000001;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> countryMap = {"AAA", "A*A", "AAA"};
    vector<int> detachmentSize = {1000000, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    BarbarianInvasion* pObj = new BarbarianInvasion();
    clock_t start = clock();
    int result = pObj->minimalDetachment(countryMap, detachmentSize);
    clock_t end = clock();
    delete pObj;
    int expected = 4000000;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=306707&rd=13695&pm=10013
********************************************************************************
#include <cstdio>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <numeric>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
using namespace std;
 
#define VV vector
#define PB push_back
#define ll long long
#define ld long double
#define REP(i,n) FOR(i,0,(n)-1)
#define FOR(i,a,b) for(VAR(i,a);i<=(b);++i)
#define FORD(i,a,b) for(VAR(i,a);i>=(b);--i)
#define FORE(a,b) for(VAR(a,(b).begin());a!=(b).end();++a)
#define VAR(a,b) __typeof(b) a=(b)
#define SS(a) ((int)(a).size())
#define ALL(x) (x).begin(),(x).end()
#define CLR(x,a) memset(x,a,sizeof(x))
#define VI VV<int>
#define VS VV<string>
int COND = 1;
#define DB(x) { if (COND > 0) { COND--; REP (xxx, 1) cerr << __LINE__ << " " << #x << " " << x << endl; cerr.flush(); } }
 
 
#define int ll
#define PII pair<int, int>
#define X first
#define Y second
 
namespace MF {
    const int NSZ = 30011;
    const int MSZ = 30011;
    const int inf = 0x3f3f3f3f3f3f3f3fLL;
    int FL[MSZ];
    int MID = 0;
    vector<PII> ED[NSZ];
    int dist[NSZ];
    int N;
    int STA, END;
    int QQ[NSZ]; int SS, EE;
    vector<PII>::iterator KR[NSZ];
 
    void clear(int N_) { N = N_; MID = 0; REP (i, N) ED[i].clear(); }
 
    void add_edge(int i, int j, int c1, int c2) {
        ED[i].PB(PII(j, MID));
        FL[MID] = c1;
        ++MID;
        ED[j].PB(PII(i, MID));
        FL[MID] = c2;
        ++MID;
    }
 
    bool bfs() {
        REP (i, N) dist[i] = inf;
        SS = EE = 0;
        dist[STA] = 0; QQ[EE++] = STA;
        while (SS < EE) {
            int top = QQ[SS++];
            FORE (it, ED[top]) if (FL[it->Y] > 0 && dist[it->X] == inf) {
                dist[it->X] = dist[top] + 1;
                QQ[EE++] = it->X;
            }
        }
        return dist[END] != inf;
    }
 
    int dfs(int i, int fl) {
        if (fl == 0) return 0;
        if (i == END) return fl;
        int ret = 0;
        for (vector<PII>::iterator &it = KR[i]; it != ED[i].end(); ++it)
            if (dist[it->X] == dist[i] + 1 && FL[it->Y] > 0) {
                int tadd = dfs(it->X, min(FL[it->Y], fl));
                ret += tadd;
                fl -= tadd;
                FL[it->Y] -= tadd;
                FL[it->Y^1] += tadd;
                if (fl == 0) break;
            }
        return ret;
    }
 
    int flow(int STA_, int END_) {
        int ret = 0;
        STA = STA_; END = END_;
        while (bfs()) {
            DB(ret);
            REP (i, N) KR[i] = ED[i].begin();
            ret += dfs(STA, inf);
        }
        return ret;
    }
};
 
int dx[4] = { -1, 0, 1, 0};
int dy[4] = {0,-1,0,1};
 
class BarbarianInvasion {
      public:
#undef int
      int minimalDetachment(VS CO, VI DE) { DB(0);
#define int ll
        MF::clear(5011);
        int N = CO.size(); int M = CO[0].size();
        int SS = 2 * N * M;
        int EE = 2 * N * M + 1;
        REP (i, N) REP (j, M) {
          int id1 = 2 * (i * M + j);
          int id2 = 2 * (i * M + j) + 1;
          if (isalpha(CO[i][j])) {
            int index = CO[i][j] - 'A';
            int cost = (int)1e9 + DE[index];
            MF::add_edge(id1, id2, cost, 0);
          }
          if (i == 0 || i == N - 1 || j == 0 || j == M - 1)
            MF::add_edge(SS, id1, (ll)1e16, 0);
          if (CO[i][j] == '*')
            MF::add_edge(id1, EE, (ll)1e16, 0);
          REP (d, 4) {
            int nx = i + dx[d];
            int ny = j + dy[d];
            if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
              MF::add_edge(id2, 2 * (nx * M + ny), (ll)1e16, 0);
            }
          }
        }
        ll ret = MF::flow(SS, EE);
        return ret % (ll)1e9;
      }
 
      
 
};
#undef int
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/