/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3529
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

class MoneyExchange {
public:
    double bestRate(vector<string> rates, string type1, string type2);
};

double MoneyExchange::bestRate(vector<string> rates, string type1, string type2) {
    double ret;
    return ret;
}


int test0() {
    vector<string> rates = {"EUR 8 USD 10", "USD 10 EUR 7"};
    string type1 = "EUR";
    string type2 = "USD";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.25;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> rates = {"EUR 0008 USD 0010"};
    string type1 = "USD";
    string type2 = "EUR";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> rates = {"EUR 8 USD 10", "EUR 1 GOODBUY 2", "GOODBUY 1 USD 2"};
    string type1 = "EUR";
    string type2 = "USD";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> rates = {"A 1 B 2", "A 1 C 3", "B 2 D 3", "C 9 D 10", "D 7 E 2"};
    string type1 = "A";
    string type2 = "E";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9523809523809523;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> rates = {};
    string type1 = "TYPEA";
    string type2 = "TYPEB";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> rates = {"UIDY 1 WKRR 10", "WKRR 1 SEIM 10", "SEIM 1 SQCP 10", "SQCP 1 BFWZ 10", "BFWZ 1 BPNH 10", "BPNH 1 SSGR 10", "SSGR 1 IDOE 10", "IDOE 1 OSEK 10", "OSEK 1 EXBY 10", "EXBY 1 CMKW 10", "CMKW 1 CMNG 10", "CMNG 1 UJFV 10", "UJFV 1 BUET 10", "BUET 1 MKMW 10", "MKMW 1 QCCE 10", "QCCE 1 WHOA 10", "WHOA 1 ERAI 10", "ERAI 1 FKFI 10", "FKFI 1 ZSQT 10", "ZSQT 1 EVQH 10", "EVQH 1 RWCG 10", "RWCG 1 IOCY 10", "IOCY 1 SFEP 10", "SFEP 1 OSPS 10", "OSPS 1 MQDR 10", "MQDR 1 CKBB 10", "CKBB 1 ERWK 10", "ERWK 1 OORG 10", "OORG 1 KVMT 10", "KVMT 1 LQRE 10", "LQRE 1 XWTL 10", "XWTL 1 QIEE 10", "QIEE 1 AJYF 10", "AJYF 1 TZIX 10", "TZIX 1 TFIH 10", "TFIH 1 VBPG 10", "VBPG 1 XDBI 10", "XDBI 1 UUMR 10", "UUMR 1 SFDL 10", "SFDL 1 QJPS 10", "QJPS 1 SNXN 10", "SNXN 1 PGKI 10", "PGKI 1 NURI 10", "NURI 1 YJOV 10", "YJOV 1 MRFG 10", "MRFG 1 MUAE 10", "MUAE 1 BDPR 10", "BDPR 1 OHMG 10", "OHMG 1 UJVL 10", "UJVL 1 RFVE 10"};
    string type1 = "UIDY";
    string type2 = "RFVE";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E50;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> rates = {"VVUI 10 CUGN 1", "CUGN 10 LNVG 1", "LNVG 10 NQLV 1", "NQLV 10 CRGK 1", "CRGK 10 VXCG 1", "VXCG 10 ZYPK 1", "ZYPK 10 IIAF 1", "IIAF 10 FVQH 1", "FVQH 10 RWUC 1", "RWUC 10 KSKZ 1", "KSKZ 10 IWUM 1", "IWUM 10 NDZK 1", "NDZK 10 CDQD 1", "CDQD 10 BHNL 1", "BHNL 10 RQSW 1", "RQSW 10 LIFC 1", "LIFC 10 HCHT 1", "HCHT 10 URSE 1", "URSE 10 NPQC 1", "NPQC 10 SPMU 1", "SPMU 10 UFXX 1", "UFXX 10 OMIG 1", "OMIG 10 EBEP 1", "EBEP 10 LKUS 1", "LKUS 10 MDLG 1", "MDLG 10 UEMK 1", "UEMK 10 VCMP 1", "VCMP 10 UBJQ 1", "UBJQ 10 IIOW 1", "IIOW 10 WWEB 1", "WWEB 10 ZJSN 1", "ZJSN 10 VOFJ 1", "VOFJ 10 RTPM 1", "RTPM 10 ZDWU 1", "ZDWU 10 HKJD 1", "HKJD 10 LUUV 1", "LUUV 10 EIUC 1", "EIUC 10 GYFI 1", "GYFI 10 JYVG 1", "JYVG 10 OCPG 1", "OCPG 10 VGUU 1", "VGUU 10 JSQR 1", "JSQR 10 CZUQ 1", "CZUQ 10 VOLB 1", "VOLB 10 WFED 1", "WFED 10 GJLR 1", "GJLR 10 JIYY 1", "JIYY 10 KNGG 1", "KNGG 10 UACD 1", "UACD 10 STWW 1"};
    string type1 = "VVUI";
    string type2 = "STWW";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0000000000000025E-50;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> rates = {"A 1 B 10", "B 1 C 3", "C 1 B 4", "A 4 D 8", "D 7 E 4"};
    string type1 = "A";
    string type2 = "E";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1428571428571428;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> rates = {"A 7 A 5", "A 1 B 1", "B 2 A 2"};
    string type1 = "A";
    string type2 = "A";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> rates = {};
    string type1 = "A";
    string type2 = "A";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> rates = {"A 1 B 2", "B 1 C 1", "D 4 E 3", "E 4 F 5"};
    string type1 = "A";
    string type2 = "E";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> rates = {"KOWA 9 MJ 1", "LSW 2 CFEKD 6", "QJDKHKE 1 COT 2", "OZWM 5 QJDKHKE 5", "BWCJ 10 DWO 10", "YF 9 FVQYAX 9", "XZIH 7 RQN 2", "PQL 5 DFOXFQ 10", "ZDC 1 BWCJ 3", "YF 8 IJGUTK 2", "JV 8 WR 10", "ZY 6 NTDYLR 4", "IF 8 OJJYDOL 8", "YLDNBMAE 1 SURPI 6", "OCMAMK 5 PRLUWK 7", "IJGUTK 7 WMVQQ 9", "LYFUJ 5 ISAC 9", "KKH 4 IF 2", "IF 7 LUR 4", "PAUFQ 10 YNOX 3", "JV 9 OKHH 9", "NAMGWIW 9 VPI 1", "FVQYAX 3 IJGUTK 5", "JMUB 6 RQN 2", "YEIKM 10 GC 10", "PEMBLGKY 2 LS 6", "UTBVO 3 LS 8", "HGH 9 DWO 5", "XZIH 9 PEP 9", "OZWM 6 XZIH 9", "RQN 4 PRLUWK 10", "LUR 5 DWO 9", "RVV 8 IF 7", "FDB 10 PQL 9", "JTDSZD 10 WJUC 5", "CLIL 2 KEAG 10", "LYFUJ 4 WCDK 1", "KVIR 9 BXGZ 1", "MJ 4 QJBSW 3", "YF 7 FVQYAX 1", "EAFTXCS 9 QJDKHKE 4", "YH 5 DWO 10", "AD 10 RVV 4", "BXGZ 7 PAUFQ 2", "WCDK 3 HGH 2", "KZIU 9 IJGUTK 1", "IVZXQ 5 IF 3", "EAFTXCS 4 QJBSW 1", "OZWM 4 COT 2", "ZDC 2 IVZXQ 8"};
    string type1 = "KOWA";
    string type2 = "IVZXQ";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> rates = {"JMSOZL 8 PZHYL 5", "FWRWKQT 2 AX 8", "JMSOZL 6 KAPJPB 3", "WE 2 PDTPW 7", "KAPJPB 3 AX 1", "MMZWY 4 GYVTJOA 9", "PDTPW 8 KCMVI 1", "NMZMYF 2 JEGI 1", "PDTPW 5 YXNUNSFZ 1", "HBY 5 GYVTJOA 8", "NMZMYF 5 XYXAI 1", "YRLEKWV 6 PZHYL 8", "BOXT 8 SCSIN 10", "RMNG 6 WE 3", "IEJ 1 GYVTJOA 3", "JMSOZL 9 KMNDC 3", "DXLAP 4 DYVFZB 5", "SCSIN 9 JNO 10", "KMNDC 7 DYVFZB 5", "MMZWY 10 GYVTJOA 2", "UOY 9 KMNDC 8", "RGEO 4 BTUGLC 4", "PZHYL 1 AX 6", "PZHYL 3 AX 1", "RGEO 7 DYVFZB 6", "KMNDC 10 AX 7", "KMNDC 9 RGEO 9", "JMSOZL 2 KMNDC 8", "RMNG 8 PDTPW 10", "KAPJPB 1 DXLAP 3", "BOXT 5 XYXAI 4", "DYVFZB 2 RMNG 7", "KMNDC 10 DYVFZB 8", "IEJ 10 GYVTJOA 2", "JNO 3 GYVTJOA 8", "JQTHNY 6 GYVTJOA 7", "SQ 8 DYVFZB 3", "KMNDC 5 RGEO 1", "NMZMYF 5 JEGI 1", "MMZWY 1 GYVTJOA 7", "XYXAI 6 IEJ 3", "RMNG 7 BOXT 6", "SQ 5 WE 2", "HBY 2 GYVTJOA 10", "JMSOZL 5 KMNDC 1", "KMNDC 9 AX 1", "KCMVI 5 JEGI 3", "FWRWKQT 6 RGEO 7", "JEGI 4 XYXAI 2", "YXNUNSFZ 8 MMZWY 10"};
    string type1 = "JMSOZL";
    string type2 = "AX";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = 3.75;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> rates = {"JDRSKWZWMQNPXKSKGOMW 6 XHRGDLZXHQDTXBCOSYNZ 10", "NAQNKGVJLABWUGHBLOCZ 3 VIANBEDGAUPTCPPTTWAX 8", "ZASXRPVNVUMNZKYQBFHE 10 XFUWRUOSBWZPXQFVSAUX 4", "NEDFLJCVMWFUDNSYQTSC 8 IHRNYFHKDMMDCGAROQLK 3", "LSDJEDGZOAQFYGEZAQHT 2 LWOOXAVFRIOEMSTHLDYD 8", "XHRGDLZXHQDTXBCOSYNZ 10 TIYUPDFHCBHCYIZDRXTN 3", "IHRNYFHKDMMDCGAROQLK 5 OSBZMAFAHYNSHEFFMORR 2", "LECPTTIOQLLPVNNNQPZQ 3 XFUWRUOSBWZPXQFVSAUX 4", "YNUXPGOSVYGPLUZGLHQL 10 YZYXOENGQDFBJWUTSTRG 10", "GNUGJZLJKRDVJVRISWDD 5 CVNUSCYRIHDYLGFYPHTE 2", "GIELDDWXYFKXOOUCXGGI 6 IHRNYFHKDMMDCGAROQLK 6", "AXZVDGWOWYNNQTEQDUOI 1 TBHCYEJBAJDYSOUXWLZA 3", "CGEODXWVTBAMYDFPPCHB 3 YNUXPGOSVYGPLUZGLHQL 3", "XKBXSBAJYVXWDZLEGRNI 3 IRGVGCWJYVITYRVWVGZX 4", "YZYXOENGQDFBJWUTSTRG 4 EDRTGNNWTIOLVKYVSJUP 9", "IRGVGCWJYVITYRVWVGZX 1 ZASXRPVNVUMNZKYQBFHE 6", "OJTLYGZQVAHIYVXVXSDO 6 XFUWRUOSBWZPXQFVSAUX 10", "QCXIRRHPDGQLAWGGBEPZ 8 OSFAMKFVNYCLFYHYSWST 1", "XHRGDLZXHQDTXBCOSYNZ 4 QSEPYKQYDZRQZHDLPYUA 5", "JDRSKWZWMQNPXKSKGOMW 4 LSDJEDGZOAQFYGEZAQHT 7", "LWOOXAVFRIOEMSTHLDYD 1 XFUWRUOSBWZPXQFVSAUX 8", "QCXIRRHPDGQLAWGGBEPZ 1 OZROYAUZEMYGMSFDJBSE 5", "JSQWWXDVJVRAXRFCCZXJ 5 UJTDHTVGEXPJFVXJSVGN 4", "LECPTTIOQLLPVNNNQPZQ 5 OJTLYGZQVAHIYVXVXSDO 5", "EIGMBKIBEMRCTLKYWMVF 6 LSDJEDGZOAQFYGEZAQHT 1", "LECPTTIOQLLPVNNNQPZQ 10 CRUQLPZYTXCJHVVHDWYA 4", "IHRNYFHKDMMDCGAROQLK 8 EDRTGNNWTIOLVKYVSJUP 5", "DNRGXMKXGIGHOJAJWMTJ 9 FNRGSTFLXBJCQAKNOUMX 1", "OJTLYGZQVAHIYVXVXSDO 7 XFUWRUOSBWZPXQFVSAUX 9", "EAYDCDRWBGVIOBUSNEVS 7 QSEPYKQYDZRQZHDLPYUA 10", "NEDFLJCVMWFUDNSYQTSC 7 IHRNYFHKDMMDCGAROQLK 2", "SNWLYGLWUGCZICEKFWIJ 6 AXZVDGWOWYNNQTEQDUOI 2", "PCYFEISTFFQLZUEDAJFR 1 CGEODXWVTBAMYDFPPCHB 4", "XHRGDLZXHQDTXBCOSYNZ 7 AXZVDGWOWYNNQTEQDUOI 2", "WHJUEIRCCUSENNWYCVZX 6 URLRKQNCSHBGCGGOTMMG 4", "OSFAMKFVNYCLFYHYSWST 4 URLRKQNCSHBGCGGOTMMG 4", "LECPTTIOQLLPVNNNQPZQ 6 TBHCYEJBAJDYSOUXWLZA 10", "UJTDHTVGEXPJFVXJSVGN 10 WHBVMJKELTFICYLLRHRV 5", "RXDROKVSJSBSHWYQXLBJ 3 IFHWVDASJHCLSVPEZEGK 6", "ZASXRPVNVUMNZKYQBFHE 7 URLRKQNCSHBGCGGOTMMG 1", "RXDROKVSJSBSHWYQXLBJ 7 GIELDDWXYFKXOOUCXGGI 9", "OSFAMKFVNYCLFYHYSWST 9 URLRKQNCSHBGCGGOTMMG 6", "GNUGJZLJKRDVJVRISWDD 1 RXDROKVSJSBSHWYQXLBJ 7", "CVNUSCYRIHDYLGFYPHTE 4 XHRGDLZXHQDTXBCOSYNZ 4", "EIGMBKIBEMRCTLKYWMVF 7 NAQNKGVJLABWUGHBLOCZ 9", "TBHCYEJBAJDYSOUXWLZA 3 ZASXRPVNVUMNZKYQBFHE 6", "NEDFLJCVMWFUDNSYQTSC 5 YNUXPGOSVYGPLUZGLHQL 6", "NAQNKGVJLABWUGHBLOCZ 4 OJTLYGZQVAHIYVXVXSDO 1", "OSBZMAFAHYNSHEFFMORR 6 EDRTGNNWTIOLVKYVSJUP 2", "XKBXSBAJYVXWDZLEGRNI 1 IRGVGCWJYVITYRVWVGZX 6"};
    string type1 = "DNRGXMKXGIGHOJAJWMTJ";
    string type2 = "URLRKQNCSHBGCGGOTMMG";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> rates = {"YFALAWONZSXTVBSZGHTT 1 CBJVVOFDHDIFTSMPNBBX 10", "XMDHJNFIEWCFJRUSOOBX 5 YFALAWONZSXTVBSZGHTT 5", "DNHYPBXXIQQEBCPAVLQE 2 HPXPYSMGJGYTTTFIGSWF 9", "DNHYPBXXIQQEBCPAVLQE 3 IKVLPKLMXDTCJFJGNNQD 7", "IKVLPKLMXDTCJFJGNNQD 6 CBJVVOFDHDIFTSMPNBBX 7", "YFALAWONZSXTVBSZGHTT 5 GBZNQRTUPCGSWAOKFBLM 2", "XMDHJNFIEWCFJRUSOOBX 1 YFALAWONZSXTVBSZGHTT 5", "ALPPJVSHGWYMHNHLJAIV 10 IKVLPKLMXDTCJFJGNNQD 3", "MCLVPSHAVPXSDBAOOHYV 10 UJMLYTVOHSPHXPSZNJOM 2", "UJMLYTVOHSPHXPSZNJOM 2 IQPFFWCLRFDTHNQEDXJM 4", "UBCXEENSLNNQPPFKNOWZ 7 FFMEXGEKPSXSGGSXIRUQ 3", "MCLVPSHAVPXSDBAOOHYV 6 UBCXEENSLNNQPPFKNOWZ 2", "UJMLYTVOHSPHXPSZNJOM 10 BRRUMDLBGNZPFOWKMZYD 3", "FFMEXGEKPSXSGGSXIRUQ 8 IQPFFWCLRFDTHNQEDXJM 5", "ALPPJVSHGWYMHNHLJAIV 1 IKVLPKLMXDTCJFJGNNQD 1", "VPRALAHRTJUVMVFDYLCP 8 DCAOVWHKMKJYMUUBNDDI 3", "DNHYPBXXIQQEBCPAVLQE 8 WPKHWTNKIFPRXOHVGTDQ 7", "WPKHWTNKIFPRXOHVGTDQ 3 IQPFFWCLRFDTHNQEDXJM 9", "VPRALAHRTJUVMVFDYLCP 2 MCLVPSHAVPXSDBAOOHYV 9", "MCLVPSHAVPXSDBAOOHYV 2 UBCXEENSLNNQPPFKNOWZ 7", "BRRUMDLBGNZPFOWKMZYD 8 GBZNQRTUPCGSWAOKFBLM 1", "BRRUMDLBGNZPFOWKMZYD 3 GBZNQRTUPCGSWAOKFBLM 8", "ADZIOCGZRSGXOQHZSOZH 6 DNHYPBXXIQQEBCPAVLQE 6", "XMDHJNFIEWCFJRUSOOBX 4 IKVLPKLMXDTCJFJGNNQD 5", "CBJVVOFDHDIFTSMPNBBX 3 GBZNQRTUPCGSWAOKFBLM 3", "UBCXEENSLNNQPPFKNOWZ 2 FFMEXGEKPSXSGGSXIRUQ 5", "ADZIOCGZRSGXOQHZSOZH 5 MCLVPSHAVPXSDBAOOHYV 5", "IKVLPKLMXDTCJFJGNNQD 6 IQPFFWCLRFDTHNQEDXJM 8", "DNHYPBXXIQQEBCPAVLQE 10 GBZNQRTUPCGSWAOKFBLM 5", "UBCXEENSLNNQPPFKNOWZ 4 FFMEXGEKPSXSGGSXIRUQ 2", "YFALAWONZSXTVBSZGHTT 9 BRRUMDLBGNZPFOWKMZYD 1", "MCLVPSHAVPXSDBAOOHYV 9 FFMEXGEKPSXSGGSXIRUQ 2", "WPKHWTNKIFPRXOHVGTDQ 4 GBZNQRTUPCGSWAOKFBLM 1", "IQPFFWCLRFDTHNQEDXJM 8 GBZNQRTUPCGSWAOKFBLM 5", "FFMEXGEKPSXSGGSXIRUQ 9 HPXPYSMGJGYTTTFIGSWF 4", "MCLVPSHAVPXSDBAOOHYV 9 DCAOVWHKMKJYMUUBNDDI 6", "BRRUMDLBGNZPFOWKMZYD 6 GBZNQRTUPCGSWAOKFBLM 8", "CBJVVOFDHDIFTSMPNBBX 9 IQPFFWCLRFDTHNQEDXJM 9", "DUKKKAHANFNHEWJFETCD 7 UJMLYTVOHSPHXPSZNJOM 7", "ALPPJVSHGWYMHNHLJAIV 4 HPXPYSMGJGYTTTFIGSWF 5", "YFALAWONZSXTVBSZGHTT 5 CBJVVOFDHDIFTSMPNBBX 8", "IKVLPKLMXDTCJFJGNNQD 6 IQPFFWCLRFDTHNQEDXJM 4", "DUKKKAHANFNHEWJFETCD 1 DCAOVWHKMKJYMUUBNDDI 4", "UJMLYTVOHSPHXPSZNJOM 7 GBZNQRTUPCGSWAOKFBLM 9", "FFMEXGEKPSXSGGSXIRUQ 7 GBZNQRTUPCGSWAOKFBLM 4", "EKMSCWTWKVEIKVIXXRPS 2 MCLVPSHAVPXSDBAOOHYV 5", "DUKKKAHANFNHEWJFETCD 8 EKMSCWTWKVEIKVIXXRPS 8", "ADZIOCGZRSGXOQHZSOZH 8 MCLVPSHAVPXSDBAOOHYV 1", "IQPFFWCLRFDTHNQEDXJM 6 GBZNQRTUPCGSWAOKFBLM 5", "BRRUMDLBGNZPFOWKMZYD 10 GBZNQRTUPCGSWAOKFBLM 3"};
    string type1 = "DUKKKAHANFNHEWJFETCD";
    string type2 = "GBZNQRTUPCGSWAOKFBLM";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = 12.5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> rates = {"GMU 7 VBW 6", "WOH 8 SWF 2", "QFW 6 FJV 5", "SWF 8 CIQ 2", "LVS 9 WOH 9", "LVS 9 LVS 1", "SWF 2 ROF 7", "BHF 9 IBK 1", "BCM 8 HET 10", "WOH 10 FPN 1", "AAJ 8 WOH 3", "FPN 9 IBK 4", "QFW 2 AAP 2", "HDQ 10 NCM 3", "BHF 4 GMU 1", "LVS 9 ALM 1", "NCM 9 BHF 5", "GMU 5 AAP 1", "NCM 7 HDQ 4", "LVS 9 SWF 9", "QPL 9 IBK 1", "WOH 8 NCM 2", "VBW 10 BCM 3", "AAJ 8 HET 2", "AAP 9 WOH 3", "NCM 9 ALM 5", "WOH 8 HET 3", "QFW 7 AAP 1", "ROF 6 AAJ 2", "HDQ 9 ROF 1", "QFW 10 VBW 4", "AAJ 10 QPL 3", "ROF 4 IBK 2", "QPL 8 BCM 1", "VBW 4 CIQ 9", "LVS 10 FPN 2", "GMU 7 QPL 10", "QPL 10 LVS 2", "CIQ 10 IBK 3", "HET 9 GMU 8"};
    string type1 = "QPL";
    string type2 = "IBK";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.35000000000000003;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> rates = {"FPNNCMALMLVSBCMQFWSW 1 FHETROFBHFGMUVBWIBKW 4", "OHQPLCIQAAPFJVAAJHDQ 4 MJCJFGHPHTLWABNLFVEG 6", "XVNGQOJAXMQKWVVDBCSI 6 WDGYGUKLPORPJHVZVGBU 8", "TSERPBUQEMACRHAZDMMS 7 CGJNNHNINOEGILZXMTPS 2", "HSUABXZELMYOSIBFPQPE 2 HVNPGMPTGGLPYIQZFRDS 8", "FCGZMIGBAXHHTUZZHOSP 9 UEETOWUVOYNTAUVOEBPE 7", "ZYOSTNRCDKTXQXSEWNZK 7 NOFPIADOEUVDSJXNYOPB 1", "AIASIVYGKZQXOXMYARNG 9 LKJFVGTTWKWXVWRDRQJB 6", "PBADAOCCFRIQBTWWZPRW 7 BNVWLMBFEKIUNJZQXDSD 3", "WDVZWRXYIOUKDRGPFIWM 6 UEIKPHCNNUSJZPJWHGUR 4", "XQDAJMROWNCSSKCJUGYH 5 DQSCGDYPMUIJMMLVADMW 4", "SOOKZTWTZUCCLUHTYHKM 9 CUVOIGMILYEEMVQNQMIR 2", "HKUUHDNHKZTMTODEWPMI 8 PTOBQERGRZXAKTUTWJAH 4", "ITVDJAHFRWPGPDIFKZLB 10 AKDMEXFAGFJQYHTJHDPZ 2", "ZGFQMPXWQKZRUCDYZJBH 2 OMXPTSYBVPAWYHOKXLGN 4", "VFESJKSITTPJIOABGBCE 8 SECQMRALEIYCPFUYRMIM 7", "IXXQLYTUBWYTCAKOTKBY 4 TAAIHUJYIRKSRJKEHEYI 2", "CWCEZOVSYWQTWQEFMNFX 10 ERPVBCAIGATIXXMYLHQL 3", "GJFCBLKOYPNEHEAIGCSM 5 CNWBMLZZUSLABSFCDPSD 9", "GFHNKHXSLSHOHDRWORVL 9 JGLMAQODHHGOOQDYZDTL 6", "VABEDSAULWHWESIFLXKS 4 GTGUJMVIPOVMOWQTRTPC 6", "PWZVRJACGNWOGDJRRGZG 9 UVSKTKFKDXPUTQQMZSOI 7", "FLWNQFEHLENHBHTWRBJV 5 YYPTQHGPAUXHHUVXBZGP 10", "FVYICSFUTQRTOGMEOSVQ 3 PTXYPSWQSEFZAEIEYPYT 9", "FPMVYABOTWEKPDIGWGXQ 4 LEPNKZRIOSBTJPOHQPXL 3", "MDVDHDKFMJVZPMMAMFIA 8 ZMWJBKSRCQEQTZVAFHHR 8", "QCSGRGGFLQHLCDWGQOZU 1 EEKYFFAKNIDFMVLFBTKP 8", "MUCOXYWPMWJTCVRHBTSQ 3 DXVSVJXWCKNOEPFDNBTC 6", "ZEVDAOLDJFTNCOFXXEWC 8 OJQSBXYQBRSAXPEXDRAN 8", "WVCAKJAHNWJEHCWIZUZA 2 NTDLJJKOCNBYIFAUOACE 2", "YNIGRGQTDPVQLADUJQIL 10 DMLNRMIIOMMNBWTTCLMF 1", "BHYOIBITTQHYESMYGUIV 3 IWIJSDCUOOCRYAFIDPBX 1", "IIVMDJMLFUINQSXIVZFM 3 QHFOJNYMEZLMKJBPSNCA 6", "KLNADKLBKQPAZWQIJOWQ 6 PICBTFQNTVNDGBFJLQKX 4", "GZZFWRPHFMXXWCYPHREC 1 MSHUVPDGFQGORFTPXJXE 9", "XWBTACIKVMOJGWDBNIKS 7 YQGQVCFSNEXKDADFENPB 4", "ZEKGCPJRYTJYJQQFUWZH 3 CYTHBWNFJCHKITSMLCDL 4", "VPJHHAOBYNKCODKPZXWK 5 BFUMBNYMPEZMVITCKHFK 7", "XPNLSXCTUADXGXJJKKXB 5 QWOLEHNRRSBOHQBBNDUJ 9", "DZHLWQWJATMQPCDWMQND 1 KQTTHUUUXQGCPNQOFMZI 7", "GNAVQERCUGHFXAAEUVAT 7 NGVDVNTDAULGHLDXPXBM 10", "DITCITGEOJXERVJPICSI 7 YDQFOUFGRGSWRLZBEHGV 10", "QFZKAKZJORTMWKRMGYSX 6 HMVYXUBECHBSPCEPMDAA 7", "WUMUEFHKEBJNOELNZMRD 7 WSXLUCCIHDIGXWADCJPI 9", "LYXBEIOFWIIUCGHZKKHR 2 NSXMOAPSJECUEZXIJMQI 5", "WYCYGKXQWHKJZJXPJMIT 7 QMPWONEXBWFXVKVDWVWS 10", "CIDBRASBOCWGPLCDYICZ 10 FKWCUUFSPDMRLPUDRMGH 4", "PCNGNRJOZNNGXMIRGQJV 9 VXOHMIMFUSMLWBRJSCXU 1", "QNCNZLHHDSCAQSJEAVKW 4 PYILCBXWEWQUJVJKIQRL 2", "JVNZPXDPSPOKQYVSZUQF 1 RHBCELNMBGZMEMLTJRLE 4"};
    string type1 = "IZOYXLSYIJEZSFBWSQIU";
    string type2 = "ZHIDTWYFNLJXKZYJMQKU";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> rates = {"BEGIN 1 AA 1", "AA 4 AB 5", "AB 4 AC 8", "AC 3 END 3", "BEGIN 4 BA 3", "BA 4 BB 7", "BB 4 BC 3", "BC 5 END 1", "BEGIN 5 CA 4", "CA 3 CB 6", "CB 7 CC 3", "CC 5 CD 8", "CD 3 END 1", "BEGIN 4 DA 9", "DA 3 DB 8", "DC 5 DD 2", "DD 5 END 1"};
    string type1 = "BEGIN";
    string type2 = "END";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> rates = {"AAA 3 BBB 2"};
    string type1 = "CCC";
    string type2 = "AAA";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> rates = {"A 1 B 2", "A 1 C 3", "B 2 D 3", "C 9 D 10", "D 7 E 2"};
    string type1 = "A";
    string type2 = "E";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9523809523809523;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> rates = {"EUR 8 USD 10", "USD 10 EUR 7"};
    string type1 = "EUR";
    string type2 = "USD";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = 1.25;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> rates = {"EUR 1 USD 2", "EUR 1 XXX 2", "XXX 2 USD 5"};
    string type1 = "EUR";
    string type2 = "USD";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> rates = {"X 1 Y 2", "X 1 Y 1"};
    string type1 = "X";
    string type2 = "Y";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> rates = {"EUR 0008 USD 0010"};
    string type1 = "USD";
    string type2 = "EUR";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> rates = {"A 1 A 1"};
    string type1 = "B";
    string type2 = "C";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> rates = {"A 1 B 2", "A 1 B 3", "A 1 B 1"};
    string type1 = "A";
    string type2 = "B";
    MoneyExchange* pObj = new MoneyExchange();
    clock_t start = clock();
    double result = pObj->bestRate(rates, type1, type2);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=12024011&rd=6539&pm=3529
********************************************************************************
#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
struct edge{
  string f,t;
  double rate;
};
struct node{
  string wtf;
  double amt;
};
class MoneyExchange {
  public:
  double bestRate(vector <string> rates, string type1, string type2) {
    if (type1==type2)
      return 1;
    edge a[50];
    node ans;
    double best=-1;
    ans.wtf = type1;
    ans.amt = 1;
    queue<node> q;
    int asdf;
    for (int i = 0; i < rates.size(); ++i){
      istringstream iss(rates[i]);
      iss >> a[i].f >> asdf >> a[i].t >> a[i].rate;
      a[i].rate/=asdf;
    }
    q.push(ans);
    node temp,temp2;
    int cnt = 0;
    while (!q.empty()){
      if (++cnt>10000) break;
      temp2 = q.front();
      q.pop();
      for (int i = 0; i < rates.size(); ++i){
        temp = temp2;
        if (a[i].f==temp.wtf){
          temp.wtf = a[i].t;
          temp.amt *= a[i].rate;
          if (temp.wtf==type2 && temp.amt>best)
            best = temp.amt;            
          q.push(temp);
        }
      }      
    }
    return best;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/