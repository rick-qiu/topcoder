/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2244
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

class InstantRunoff {
public:
    string outcome(string candidates, vector<string> ballots);
};

string InstantRunoff::outcome(string candidates, vector<string> ballots) {
    string ret;
    return ret;
}


int test0() {
    string candidates = "ABC";
    vector<string> ballots = {"ACB", "BCA", "ACB", "BCA", "CBA"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string candidates = "DCBA";
    vector<string> ballots = {"ACBD", "ACBD", "ACBD", "BCAD", "BCAD", "DBCA", "CBDA"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string candidates = "ACB";
    vector<string> ballots = {"ACB", "BCA", "ACB", "BCA", "ACB", "BCA", "CBA", "CAB"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string candidates = "CAB";
    vector<string> ballots = {"ACB", "BCA", "ACB", "BCA", "ACB", "BCA", "CAB", "CAB"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string candidates = "Z";
    vector<string> ballots = {"Z"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "Z";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string candidates = "JRXLFNYGZA";
    vector<string> ballots = {"JFYZARNXGL", "AXZNGFLJRY", "NGJZXFYARL", "LFZNRXYGAJ", "YGZXRFANJL", "NLFXJGARZY", "XJFAZLYGNR", "ZYJLAGFNRX", "LARGJZXFNY", "JLRZGNXAYF", "RAZFXLNYJG", "AZGNYXFLRJ", "JLZGXRYNFA", "NFJGRLZAYX", "RJLZFGAYXN", "FALXZGJNYR", "JGLAFRYZNX", "AGJXFNYLRZ", "ZAJXRGNLFY", "XJYGNAZFRL", "RZLJNGYAXF", "ZRNAYFLJXG", "GZNXYFRJLA", "YXLJAGZFRN", "NJXYRAGFZL", "YLAZFXJNGR", "ZYRJFXGNAL", "RYNGJAFXLZ", "LFAGZYJNXR", "RLZAYXGFNJ", "XZAFLNJRGY", "YJLGAFRZXN", "JNARFGZXYL", "NFGRALZJYX", "ZYXRJFAGLN", "RLJGXYNZFA", "XFNJAZGLYR", "JZXGLFNYAR", "FXRZJGLANY", "JGAFRZYNLX", "NZYLARXGJF", "ZRYJLGAFXN", "LGAXYFZNJR"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "Z";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string candidates = "AHWMRNQDPI";
    vector<string> ballots = {"WQAMIHPDNR", "INMDRAPQHW", "HRPINAMQWD", "MIRPDQNAWH", "IQNWRDHAPM", "WMPNDHRAIQ", "ANIHRPQWMD", "WHRAMPNIQD", "NDPQIAMHRW", "DIWAQPNMHR", "QAIMWNPRDH", "QWPMHDIRAN", "QANHPWIRDM", "DMPHAWRINQ", "IHRAPNWDMQ", "RDQANPHMIW", "RWAQNMHIDP", "NPAMQWRDHI", "HPDMWRNIQA", "AHRQMDNWIP", "PWQIMHNDAR", "HIPQADMWRN", "IQAPDNHMWR", "RQPMNDWIHA", "QIPNDRHAWM", "PDRAIWQMHN", "DIANQHPWMR", "DWAQNHIMRP", "HDPAIWNRMQ", "RQADIMNWPH", "DRNWHIMQAP", "WIMDHNAQPR", "QPIHNWARDM", "IWPNDRMAHQ", "NDAPWRQIHM", "MRPNHWQDIA", "QDPWHRINAM", "NMRWADIHPQ", "WARIPMQDNH", "PQAMIDRNHW", "MIHDAPWRNQ", "AMHPDNWIQR", "HIPRWMNQAD", "IPDNQWRMHA", "AMPDWHQNRI", "NRADHMPIQW", "HAMPRDIQWN", "RIMWPDANQH", "ADMIRHQPNW", "IDAWRNQMHP"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string candidates = "W";
    vector<string> ballots = {"W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W", "W"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "W";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string candidates = "Z";
    vector<string> ballots = {"Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z", "Z"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "Z";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string candidates = "UPJFG";
    vector<string> ballots = {"PFGUJ", "JFGPU", "GFPUJ", "GFPUJ", "PGJUF", "FJUPG", "FJPUG", "UPJGF", "PJGUF", "FPGJU", "UFGPJ", "UJFPG", "JUFPG", "GUPFJ", "UJGPF", "PUGFJ", "JGUPF", "UFGJP", "FJGPU", "GFPJU", "FGUJP", "PJFGU", "GPJFU", "JPGUF", "PJGUF", "JUPFG", "UPJFG", "FJUGP", "FPGUJ", "PJUFG", "PFUJG", "GFJPU", "UPJFG", "PUJGF", "PGFUJ", "UPFGJ", "FJGUP", "UFPGJ", "FUPJG", "JPFGU", "GJFPU", "UPGFJ", "UFJGP", "GFUJP", "GFPUJ"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "P";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string candidates = "FZG";
    vector<string> ballots = {"GFZ", "FZG", "ZGF", "GZF", "FZG", "GFZ", "ZGF", "ZGF", "ZFG", "ZFG", "GFZ", "FZG", "GFZ", "GZF", "ZFG", "FZG", "ZFG", "ZFG"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "Z";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string candidates = "EACFGHJUX";
    vector<string> ballots = {"XFHUGECAJ", "FAJUEHCXG", "CXUEJFAHG", "XAUGHCJFE", "AJGXEFHCU", "HGEUACFXJ", "GEJHFXUAC", "UJHACFEGX", "EFAHGXCUJ", "XHFJAECGU", "FHGXUCEAJ", "JFAUCXEGH", "EHGAJXCUF", "AHFUXEJGC", "JFXCGAEUH", "JGCHAXFEU", "GJUXAECHF", "UFHCGJEAX", "GJFCUAEXH", "FCHXAJUEG", "CUXAFHEGJ", "XEAGCJFHU", "FACUJHGEX", "CXGEUHJAF", "AGXUFHCJE", "GFXHJEUAC", "HUAJFXCGE", "FEAXUJGCH", "GHECJUAXF", "GAXEHUCJF", "JUAFXEHCG", "UGHJFXEAC", "UAEGJFXHC", "XGHAJCUEF", "AXJECGUFH", "JACXEGUFH", "JECUHFGXA", "HCUXGJEFA"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string candidates = "LEB";
    vector<string> ballots = {"LBE", "ELB", "LBE", "LBE", "BLE", "BEL", "BEL", "BEL", "BEL", "BLE", "EBL", "EBL", "LBE", "BLE", "LEB", "EBL", "ELB", "ELB", "ELB", "LEB", "LBE", "ELB", "EBL", "BEL", "EBL", "BLE", "BEL", "BLE", "ELB", "LBE", "EBL", "LEB", "EBL", "EBL", "BLE", "LBE", "BEL", "BEL", "ELB", "BLE", "EBL", "LBE", "LEB", "EBL"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string candidates = "EHQDCMXGN";
    vector<string> ballots = {"XMDQHECNG", "DMGECQNHX", "NXHQEDMGC", "NEXCHMDGQ", "XHMDCENQG", "XCDGEQMNH", "CXQGHEDNM", "NDECQGMXH", "GNXEMDQCH", "HCNMEGDXQ", "NCHMGQXED", "GMHNCDEXQ", "CDMENHXGQ", "MXCHDNGQE", "QCDEXGMHN", "QNCHGXEDM", "MXCNHGEDQ", "NMQHDGCEX", "NCQHGDMEX", "MNHDXQGEC", "HGQEDCMNX", "MHEGNDCXQ", "MENHCXDQG", "HMXGEQCDN", "EXQMDCGNH", "GQHMCENDX", "EHDCGQNXM", "QHMDCGNEX", "XGMHQCDEN", "GMXCNDEQH", "QCMNXGHED", "NDMEGCQHX", "DHQMEGCNX", "MHNEXQCGD", "HDNCXGQME", "QEXGNCMDH", "EHCNDGMXQ", "MHCGEDXNQ", "HXGQENMCD", "MGXEDCNQH", "CQGENHDMX", "GMQECNHDX", "XDNQMGCEH"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string candidates = "RDMJNIG";
    vector<string> ballots = {"IRGJDNM"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "I";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string candidates = "PSNJTEHOWC";
    vector<string> ballots = {"EJCNTSHOWP", "SJWNTHECOP", "HSJEWCNTPO", "ETJHSWPOCN", "HPEJTSWNCO", "JCNWOTHSPE", "NHSJCTOPWE", "ENWPTCHJSO", "JESOHCTNWP", "EHJNSOWTPC", "NWJCOEHTPS", "ONPWSHCEJT", "HONCSJPWTE", "JPEOTSNWCH", "NOCTEPSWHJ", "TCHOENSJWP"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string candidates = "UPN";
    vector<string> ballots = {"NUP", "UPN", "UNP", "PUN", "UPN", "NUP", "UPN", "UNP", "UNP"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "U";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string candidates = "MLGV";
    vector<string> ballots = {"LMVG", "GMVL", "VGML", "LMGV", "MVLG", "LVMG", "MLGV", "VGLM", "MGVL", "MGVL", "MLGV", "GLVM", "VMGL", "GMVL", "VMGL", "VMLG", "VLMG", "GMVL", "VMGL", "MGLV", "MLGV", "LMVG", "GMLV", "MLGV", "VMLG"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string candidates = "OA";
    vector<string> ballots = {"OA", "OA", "AO", "OA", "AO", "AO", "AO", "AO", "OA", "AO", "AO", "AO", "OA", "AO", "OA", "AO", "AO", "OA", "OA", "OA", "AO", "AO", "OA", "AO", "OA", "AO", "OA", "AO", "OA", "OA", "OA", "AO", "AO", "OA", "AO", "OA", "OA", "AO", "AO", "OA", "AO"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string candidates = "SZ";
    vector<string> ballots = {"SZ", "SZ", "ZS", "ZS", "ZS", "SZ", "ZS", "ZS", "SZ", "SZ", "ZS", "ZS", "SZ", "SZ", "ZS", "SZ", "SZ", "ZS", "SZ", "ZS", "ZS", "SZ", "SZ", "SZ", "ZS", "ZS", "SZ", "ZS", "ZS", "ZS", "SZ", "ZS", "SZ", "SZ", "SZ", "ZS", "SZ", "SZ", "SZ", "SZ", "SZ", "SZ", "SZ", "ZS", "SZ", "ZS", "SZ"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "S";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string candidates = "RYMGU";
    vector<string> ballots = {"URYMG"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "U";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string candidates = "D";
    vector<string> ballots = {"D", "D", "D", "D", "D"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "D";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string candidates = "CQOGRH";
    vector<string> ballots = {"HQOGRC", "GRQCOH", "CGROHQ", "CROHGQ", "ROQHGC", "RQHCGO", "CQHRGO", "QRHGOC", "QGRCHO", "QOHGRC", "CORQGH", "CHQORG", "GOQHRC"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "Q";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string candidates = "OUT";
    vector<string> ballots = {"TUO"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "T";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string candidates = "NGDBTLFE";
    vector<string> ballots = {"TNFLEBGD", "DNFGBELT", "GENBTFDL", "FNDLGBET", "GLEFNDTB", "FNLTGDEB", "GELNDTFB", "NFBTDLEG", "DNLGBETF", "BFGNDELT", "FDLBNGTE", "TNBDFELG", "TNDLGEFB", "GLDTNBFE", "DTBFELNG", "LDNFTBGE", "LDTNEBGF", "GDFTBELN", "TDGEFBLN", "DTBENGLF", "BFDGTENL", "LBEGDTFN", "EDLGBNFT", "GLNEFBTD", "GLBETDNF", "TEFGBLDN", "DEFNTBGL", "LTDBGFNE", "GFBLTEDN", "EFTBGDLN", "FTBELDGN", "ENDTBGFL", "FTENLGDB", "GNDLFBTE", "NEGTDLBF", "LDEBFGTN", "ETGLBDNF", "DEBTFGLN", "NDTFBLEG", "NBTGLEFD"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "D";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string candidates = "WLN";
    vector<string> ballots = {"LWN", "NWL", "NWL", "WNL", "NLW", "WNL", "WLN", "WLN", "LWN", "LWN", "LNW", "LWN", "NWL", "WNL", "NWL", "LWN", "NWL", "LNW", "WLN", "NLW", "NWL", "LNW", "NLW", "LNW", "LWN", "LWN", "WNL", "LWN", "LWN", "WNL", "WNL", "WLN", "NLW", "LNW", "LNW", "LNW", "WNL", "NWL", "NWL", "WNL", "LWN", "WLN", "LNW", "WNL", "NLW", "LNW", "LNW"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string candidates = "CF";
    vector<string> ballots = {"CF", "CF", "FC", "CF", "FC", "CF", "FC", "CF", "CF", "CF", "CF", "FC", "FC", "CF", "FC", "FC", "FC", "FC", "FC", "FC", "FC", "FC", "FC", "CF", "FC", "FC", "FC", "FC"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "F";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string candidates = "YWXADILU";
    vector<string> ballots = {"YXIWULDA", "UIYDWALX", "LWXIDAYU", "LDAXUWYI", "AUIWYDXL", "YLUWDXAI", "IAUYWXLD", "IXAYWDUL", "IXULDYWA", "LAXDYWUI", "WLYXIADU", "WDLAYXIU", "IWAYDXLU", "XAUIYWLD", "IXWLYUDA", "IUDLYAWX", "AWUXLYDI", "UXIDLAYW", "WIAXDUYL", "XWLDIYUA", "WDAUYXLI", "ULADWIXY", "LUYWAIDX", "DALIWYXU", "LAIUDXYW", "WULDYAIX", "ULWDIXAY", "LXUIAYDW", "XAULWYID", "DIYXLUAW", "DYXIUWLA"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string candidates = "MCR";
    vector<string> ballots = {"MCR", "CRM", "MRC", "CRM", "RCM", "MRC", "CMR", "CRM", "CRM", "CMR", "RMC", "RMC", "MRC", "MRC", "CMR", "CRM", "CMR", "RCM", "RMC", "MRC", "RMC", "MRC", "RCM", "CMR", "CMR", "MCR", "CMR", "RCM"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string candidates = "STJZGCDR";
    vector<string> ballots = {"CTRZGSDJ", "ZDCSRTGJ", "TJRZGSCD", "RDTZGSJC", "ZJCGDTRS", "CRSDZJGT", "RJZSGDCT", "ZRTSCJGD", "ZTJCDSGR", "TRCZJGSD", "CZRJGSDT", "SGRJTCDZ", "CGSJRDZT", "DJZGCTSR", "ZTGDCSRJ"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string candidates = "CNVKQSI";
    vector<string> ballots = {"INKVQSC"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "I";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string candidates = "PEVNUI";
    vector<string> ballots = {"NEVPIU", "NVIUEP", "ENPIVU", "PNVUEI", "EIVNUP", "EIPNUV", "EIVNPU", "PNUIEV", "NVPIEU", "UVIENP", "EUNPIV", "ENIUPV", "IENUPV", "ENVIUP", "UNVIEP"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string candidates = "IMCP";
    vector<string> ballots = {"MICP", "CPMI", "PMCI", "PMCI", "CIMP", "PMIC", "CPMI", "MPIC", "CMIP", "CIPM", "IPMC", "IMCP", "PMCI", "MIPC", "MPIC", "PCMI", "ICPM", "MIPC", "IMCP", "ICPM", "PCIM", "CPMI", "ICPM", "IMCP", "PMCI", "CMPI", "PMIC", "MICP", "CMIP", "MCIP", "CMPI", "MPCI", "MICP", "CPIM", "PMCI", "PMCI", "CPMI", "ICMP", "PCIM", "ICMP", "IPMC", "IMCP", "PMIC"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "P";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string candidates = "LZEV";
    vector<string> ballots = {"VLZE", "ZLEV", "EVLZ", "VLEZ", "ELVZ", "LVEZ", "VLEZ", "VZEL", "VEZL", "VZEL", "LZVE", "ELZV", "ZEVL", "ELVZ", "EZVL", "ZELV", "ZLVE", "LZVE", "ELVZ", "EZVL", "EVZL", "LZVE", "EZVL", "EVLZ", "ZELV", "VZLE", "VZLE", "ZELV", "ZLEV", "LVEZ", "VZEL", "VZLE", "VZLE"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "V";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string candidates = "REDVKQ";
    vector<string> ballots = {"VQREDK", "KQDERV", "KEDRVQ", "VDKREQ", "QRKEVD", "VKDERQ", "VKEQDR", "KVRQDE", "QRKVED", "KDEQRV", "EQKRDV"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "K";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string candidates = "PICWLAKY";
    vector<string> ballots = {"LWACPKIY", "WAYLCIKP", "CIYWALKP", "KYWAIPLC", "KPLYWACI", "YALWCIKP", "KPILCYWA", "LYCAIWKP", "AWPICKYL", "AICYWKLP", "YKAPICWL", "CIYPKWLA", "CWPIALKY", "YAILPCWK", "ICYPWLKA", "YKPAIWCL", "ICLYPAWK", "AYCPWLIK", "LAYKICWP"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "Y";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string candidates = "YWEHVGXF";
    vector<string> ballots = {"FWYGXHVE", "EGWXHVFY", "EFGYWXVH", "EYHVWXGF", "GFVXHWYE", "FEHWVXGY", "XFVGHWYE", "XFYHVEWG", "HYXVFEWG", "YHFWGXEV", "HYXEVGFW", "XFEWYHGV", "VGEXFHYW", "FEGYXWVH", "GHFXWEVY", "GXHVWEFY", "VYGFXHEW", "GFVYWHEX", "HGFEVWYX", "VHWFGXEY", "VFEYGWXH", "YXWGEFHV", "XVFYHGWE", "FWGXVYHE", "XFYWVHGE", "FYXWGVHE", "YHXWVFGE", "XVYFHGEW", "GFHWVXYE", "HWXEYFVG", "HXFVYEGW", "VEWFXHGY", "HXWYVFEG", "XYGFEWHV", "YHWEXVFG", "WGEYXVHF", "GHEWFXYV", "GHWXFEYV", "YXGWHVFE", "WYFXHVEG", "EFWGVXHY", "YEFWVGHX"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "F";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string candidates = "JTIMZCU";
    vector<string> ballots = {"IJZMCUT", "JCZITUM", "TMUJIZC", "TCJUZMI", "ZMJTCIU", "ITCMUJZ", "IMUZJTC", "UTCZJMI", "TUCJZIM", "MZICTJU", "TJUZMCI", "ZCIJMTU", "JCZTUIM", "UMTICZJ", "MICJUTZ", "IMJZUTC", "ICJZMTU", "IMUZTJC", "MUITZCJ", "JMZTCIU", "JUTZMCI", "IJMTZUC", "TUZCIMJ", "TCZIMJU", "MUICZJT", "CJMTZUI", "JTMCZUI", "UICJTMZ", "CZMUTJI", "JMUTIZC", "TUIJZCM", "CUMTJIZ", "UIMZTJC", "TJIUCZM", "JUZTICM", "ZTMUJCI", "ZUITMCJ", "IJUTZCM", "JTMZICU", "MZJITCU"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "T";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string candidates = "VIOYKQRCMJ";
    vector<string> ballots = {"KRJYICMVQO", "YVIOCMJQKR", "RJCIOQVYKM", "IOCQVRMJKY", "VOCMKQJYIR", "MYVICKROQJ", "ROYVKIJCMQ", "OYRICMVJKQ", "IJRCYOVQMK", "KCYJVRQOMI", "KMRYIOJQCV", "QMYOJIVRKC", "JQMYVKRCOI", "CQIYVRKMJO", "YVOJKQMICR", "CIVQKYRJMO", "ROYKCQVIMJ", "RIQOJCYMKV"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "Y";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string candidates = "GPIFBA";
    vector<string> ballots = {"PIFAGB", "GIBFPA", "FIGPAB", "BIGPAF", "FIAGPB", "IFAGBP", "GABIFP", "IPGFAB", "GAPFBI", "FGPAIB", "AIFBPG", "BGFAIP", "GBPFAI", "GFIBAP", "IFBAPG", "BAIGFP", "BPGIAF", "GIFBPA", "PIBFAG", "BPFIGA", "ABIPGF", "FPBGAI", "PBFGIA", "IFBAGP", "GBFIAP", "FPAGBI", "GAPBIF", "BIPAFG", "BIGAPF", "APIFGB", "FGIPAB", "IABGPF", "AFIBGP", "IFBAPG", "BPGFIA", "AIGBFP", "BAPGFI", "IBAFPG", "PFAIBG", "BGFIPA", "BIFPAG", "BPFIGA", "IFPBAG", "FIBGPA", "IPFGAB", "FBPAIG"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "I";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string candidates = "HOBN";
    vector<string> ballots = {"BONH", "NHBO", "NOBH", "NBHO", "NOBH", "NOHB", "HOBN", "ONBH", "NBHO", "BOHN", "HNOB", "ONHB", "NOBH", "HBNO", "ONHB", "HNOB", "BONH", "NHBO", "HOBN", "ONHB", "OHNB", "OHBN", "OHNB", "BONH", "BNOH"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "O";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string candidates = "SVHEUPAR";
    vector<string> ballots = {"UVRASEPH", "APSUREHV", "RSHVEAUP", "VUSERAHP", "AUPHSEVR", "UVHRSEAP", "EUAVHPSR", "AUSEPVHR", "UVSPRAEH", "EAUHSRVP", "REPUHSAV", "HAESRPVU", "VEUPSARH", "AUPSEVHR", "UPAHEVRS", "PEUSRHAV", "HPRUASEV", "AREPSHUV", "PEHASVUR", "HUVESPRA", "VSRPEUAH", "ESVPUHAR", "HEURSPVA", "EHSRVPAU", "RESAHUVP", "PUVSRHEA", "URPAEVHS", "VPASUERH", "EUPHRASV", "VRSAUPHE", "UPSVRAHE", "RSAUHVPE", "PRUVHASE", "SHUAREVP", "UVAPRSHE"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "U";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string candidates = "V";
    vector<string> ballots = {"V", "V", "V", "V", "V", "V", "V", "V", "V", "V", "V", "V", "V", "V", "V", "V", "V", "V", "V", "V"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "V";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string candidates = "K";
    vector<string> ballots = {"K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K", "K"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "K";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string candidates = "IBZNXRODE";
    vector<string> ballots = {"IZBODXENR", "RDBIEZNXO", "XEDRBIONZ", "RXIEDZBNO", "DERIBZNXO", "RBIXONEDZ", "XBDNIOZER", "DOIBREZNX", "OBNXIRDEZ", "ODIEBXNRZ", "ODXIRZBNE", "ROXDNIBEZ", "XBDONIZER", "BEIDORZXN", "EBZXOINDR", "BONZDXIER", "ZNBXRDEIO", "OZXNBDREI", "IDXONBZER", "BRZEIODNX", "EXRBODZIN", "BDZXNEIRO", "RIZEBDONX", "XRNBDIEOZ", "BDNRXZOIE", "ZEDNIOBRX", "BDXEZNRIO", "BEXIZONRD", "INBRXOZDE", "XBIOREZND", "ENORDXZBI", "DOREIXZBN", "ZEIRODBNX", "ZDBRENOIX", "IRNOBEZDX", "XZBNEDIRO", "ONIBRDZEX", "EZBIXODNR", "DIOXZEBRN", "NZEIORDBX", "ZIONDEXRB", "ZOXINERDB", "ZEOIXBDRN", "OBXDEZRIN", "EZXBNDIOR", "XZNORDIEB", "NIDBXOZRE"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string candidates = "JRUGO";
    vector<string> ballots = {"RJUOG", "UOGRJ", "OGURJ", "OURGJ", "OJRUG", "UJOGR", "OURJG", "OGUJR", "RGUOJ", "OURJG", "ROGUJ", "UJROG", "JROGU", "UOJGR", "ROJGU", "OGRUJ", "OGUJR", "ROUJG", "JUORG", "RGUJO", "OJRGU", "RGJOU", "GURJO", "GORUJ", "ORUJG", "RGOUJ", "UORGJ", "ORJUG", "ORJGU", "JROGU", "RGUJO", "JUROG", "UROGJ", "OUGRJ", "JUGOR", "RJOUG", "RJUGO", "RUOGJ", "RUGOJ", "RJGOU", "RGUOJ", "UJROG", "ORGJU", "RUJGO", "UOJGR", "RGUJO", "GJUOR"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string candidates = "LPJRONXD";
    vector<string> ballots = {"LXPODRNJ", "XODJRNLP", "JNLDROPX", "LDOJXNRP", "LRNDPJXO", "DNOPLJRX", "NOLXRPDJ", "PNODJLRX", "DLOJPRNX", "NLDJORXP", "OJRNDPXL", "JXNOPRLD", "OPNLDRXJ", "OPLXNDRJ", "DLXJPRON", "RNLPDXJO", "PJXRODLN", "XPDOLRJN", "DJRNOPXL", "PNOJRDXL", "LNRXJOPD", "XLPOJDNR", "LRJONDXP", "JPRLXODN", "JRDOLNPX", "OJLPDNXR", "PDRNXLOJ"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "O";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string candidates = "RFYS";
    vector<string> ballots = {"FRYS", "SFYR", "RFSY", "YRFS", "SRYF", "YSRF", "RFSY", "SFRY", "FSRY", "FSYR", "RSYF", "YSFR", "RYFS", "RFSY", "FRYS", "RYSF", "YSFR", "SRYF", "SYRF", "SRFY", "FRYS"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "S";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string candidates = "INRYU";
    vector<string> ballots = {"UYRIN", "NIRYU", "YNUIR"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string candidates = "YTBOEPMNF";
    vector<string> ballots = {"OTYBNFEMP", "YFTOMENBP", "YOMPETFNB", "MYOEFTNBP", "OFBPYNMET", "NMFBOTYEP", "BOMPYNETF", "YPTFNOBME", "OEPNFYMBT", "TYNPFBEOM", "BFMNYTPOE", "TNFPEYMBO", "PMFETOYBN", "TYPBMEFON", "EMTFNBOYP", "TEPBOMNFY", "EPFBOTYMN", "MPNBYOFTE", "NEYBMTPOF", "YEBTMFOPN", "TONFMBPEY", "PFTBMYNOE", "YOBPNFETM", "TNEPMOYBF", "TBMFENPYO", "NOFPBETMY", "YTBFOMPEN", "OYMNEFBPT", "MEPYBNTOF", "NEPTFYOMB", "NEFMYBPOT", "YOEBNFTPM", "MBPNEYTFO", "YTMOBFNPE", "PMTBYFENO", "MFEOPBYTN", "EYFNOPTMB", "NETOFPBYM", "MENYFOPBT", "OTMNPEBYF", "EPNOFMTYB", "OYMBTNPEF", "YBNFTEPMO", "BMENFOYPT", "MFBENYOPT", "OTNMBFPYE"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string candidates = "F";
    vector<string> ballots = {"F", "F", "F", "F", "F", "F", "F", "F", "F"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "F";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string candidates = "ZTC";
    vector<string> ballots = {"ZTC", "TZC", "ZCT", "TCZ", "ZTC", "CTZ", "ZCT", "TZC", "ZTC", "CTZ", "TCZ", "CZT", "ZTC", "TZC", "TCZ", "ZTC", "ZTC", "TZC", "CTZ", "CTZ", "TCZ", "CTZ", "TCZ", "CZT", "CZT", "CTZ", "TZC", "ZCT", "ZTC", "ZCT"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "T";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string candidates = "GDTZEUIVQJ";
    vector<string> ballots = {"UGIVQZJTED"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "U";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string candidates = "JCZAHMVIRN";
    vector<string> ballots = {"NCJZVMIHRA", "CHMZNJIRAV", "NAZRJIHCVM", "ZMCJVINARH", "NZRJCVMAIH", "ARNJIZHVCM", "VMNIRJACZH", "ZCIHANMRJV", "VMJAHNZCIR", "CHVNMZRJAI", "VIRZANMJHC", "ZARCHVINMJ", "AIHCZVNRJM", "IJANRHZVMC", "JVHCANIZMR", "NACHZJIVMR", "NJICRZMVHA", "VMHCJIZNRA", "HJIRCMVANZ", "NJCZHRAIVM", "NCRZIHAVJM", "NAVJRCIZMH", "JHIVNAZRMC", "AHMNVJCRZI", "VNMZJIRAHC"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "N";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string candidates = "TUGIABLM";
    vector<string> ballots = {"GAUILMTB", "AIBULGTM", "LMAIBUTG", "UMLIBGAT", "LIATUBGM", "LIUBMTAG", "ATMUGIBL", "GBMTILAU", "MGUBITLA", "LMAUIBGT", "MBLAGUIT", "GTUBAIML", "MLUITAGB", "BIGAUMLT", "LIBMTGAU", "AMBTGLIU", "UBMTLIGA", "BUMLIAGT", "ATBIMLGU", "GIBUALMT", "IAGULMBT", "LMBGUIAT"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string candidates = "NYDARM";
    vector<string> ballots = {"NYRMDA", "DNMYRA", "DANYMR", "RNMAYD", "YRAMDN", "YMANDR", "YDNRAM", "NDMYRA", "RMANYD", "NAYMDR", "MRADYN", "DMANRY", "ANMDRY", "RMNDYA", "MARYDN", "DNMAYR", "NMRAYD", "DAYNRM", "NARYMD", "RADNMY", "YDAMRN", "NMARYD", "AYRMDN", "NDYAMR", "MDYARN", "DANYMR", "AMNDRY", "YRNDMA", "RADNMY", "AMRDNY", "YRDAMN", "MDYARN", "DRAYNM", "NDRMYA", "YADRNM", "RNDYMA", "NMYRDA", "DRYNMA", "NYAMRD", "MNYDAR", "DNYRMA", "MDRYAN", "MYNDAR", "RYNMAD", "NRADMY", "NAMYDR", "MAYRDN"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "N";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string candidates = "HG";
    vector<string> ballots = {"GH", "HG", "HG", "GH", "HG", "HG", "HG", "HG", "HG", "HG", "HG", "HG", "HG", "HG", "GH", "HG", "GH"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "H";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string candidates = "HORKMEYW";
    vector<string> ballots = {"OMKERWYH", "OMWRKEHY", "KHWYREMO", "WRHMYKOE", "RWHKOMEY", "EMOKRHYW", "YORHEMWK", "KHOWMRYE", "YRHOWKME", "WORYEKMH", "KORWYEHM", "KHMYEOWR", "OMYKEHRW", "KWOHMYRE", "YKMOWERH", "WKHYROEM", "MOKWHREY", "ERHMKOYW", "KWYRMOHE", "REMWKOYH", "MOKRYEHW", "HRMOWKEY", "HWMOYKER", "YHMORKWE", "OHKRWMYE", "KHWYMROE", "MYEHRWKO", "MYRHEOWK", "HKOMEWYR", "HWMEYKRO", "ERHWYOMK", "KMWOYEHR", "MKEYWORH", "WYEOHRMK", "REKHMYOW", "KREYMHWO", "WORYMKHE", "ORWHEYMK", "EOMHKRYW", "RWHOYEKM", "MHROYKWE", "HKORMEYW", "HWOMKYER", "OKEYWRMH"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "H";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string candidates = "CNE";
    vector<string> ballots = {"NEC", "ECN", "CEN", "ENC", "CEN", "ENC", "CEN", "CEN", "CEN", "NCE", "NEC", "CEN", "ENC", "ECN", "ENC", "CEN", "NCE"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string candidates = "XDJGFWEN";
    vector<string> ballots = {"GWXJNDFE", "JWENDGXF", "NFJEXDWG", "FGWXNJDE", "NJEXFWDG", "FJGXEWND", "WGENXFJD", "JXNGFDWE", "XNGWFJED", "GFNXEDWJ", "FWEGDNXJ", "JEXFNDWG", "DXWEFJNG", "XJWGENDF", "DWXNFJEG", "NFDJEXWG", "JXNWEDFG", "JGWNDXFE", "NXEGFWDJ", "GDFJXWNE", "NWGDEFXJ", "GDNWEJXF", "GXNJEDFW", "EJFNXDWG", "ENXJFWDG"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "J";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string candidates = "NAGK";
    vector<string> ballots = {"NGKA", "NAGK", "AGNK", "NGKA", "AKNG", "AGNK", "KANG", "KNGA", "GAKN", "GKNA", "AGKN", "KNGA", "ANKG", "ANKG", "NAGK", "NGAK", "NAKG", "ANGK", "NKGA", "KGAN", "NAKG", "KANG", "NKGA", "NAGK", "GNAK", "NKAG", "KGAN", "KNGA", "GAKN", "KNAG", "KNGA", "KAGN", "GKAN", "NAGK", "ANKG", "NGAK", "GNKA", "NKGA", "ANKG", "GAKN", "GNAK", "GAKN"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "N";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string candidates = "RUSDQNHW";
    vector<string> ballots = {"QWSURHDN", "WRHUNQSD", "NHWQUSRD", "DWUQHSRN", "SHNUWQRD", "DRSQUWNH", "DSHWRNUQ", "WDSQHUNR", "SNWRHDQU", "DHUQSWNR", "QUHNRWSD", "WHDUSNRQ", "HRDQSUWN", "RDQNUWHS", "RSQWDHNU", "RDQUNWHS", "UNDHWSRQ", "QRSWDUHN", "HDUWSQNR", "DHRQNWUS", "HDNRWQUS", "RDUQHSNW", "NRUDSHQW", "HNSDQRWU"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "H";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string candidates = "KEJ";
    vector<string> ballots = {"JEK", "KEJ", "KEJ", "EKJ", "EJK", "KJE", "JEK", "KEJ", "JEK", "KJE", "EJK", "EKJ"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string candidates = "QVSZON";
    vector<string> ballots = {"NQOSVZ", "VZSONQ", "SZVQON", "ZNOQSV", "ZQNVOS", "NQSOVZ", "SVNZQO", "OZNVSQ", "QOSNZV", "SOVQZN", "ZNQSOV", "VZOQNS", "OVNSQZ", "VZNSQO", "VOQNSZ", "NOZSQV", "ZSOQVN", "ZSVQON", "QOSZNV", "OVSQNZ", "SOVZNQ", "NSQOZV", "QOSZNV", "ZNQOSV", "ZNVSOQ", "VQOSNZ", "SQVOZN", "OQSZVN", "QZONVS", "ZSQVON", "ONQSZV", "NZOVQS", "QVOSNZ", "ZVNOQS", "VSZOQN", "NSZOQV", "OZQSVN", "NQOSZV", "QOVNZS", "VZOSQN", "QZONSV", "ONVZQS", "ONSZQV", "SZQNVO", "SZVQON", "QVSNZO", "VZONSQ", "OSNVZQ", "SZONVQ"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "Z";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string candidates = "QJEKCX";
    vector<string> ballots = {"KXEJQC", "XCKEJQ", "EQKJXC", "QXKEJC", "KQEXCJ", "JQKXEC", "EXJCQK", "KXQEJC", "XJKECQ"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "K";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string candidates = "QBJUXYTMP";
    vector<string> ballots = {"XMUQBPTJY", "UJBXQYPMT", "UYBPJMXQT", "UQYXJTBMP", "QJTXBPMUY", "QPXTYUMBJ", "PBTUXYMJQ", "JBUYPTQXM", "BQMPTJYXU", "XMUBTPJYQ", "QYMJPUTBX", "TBMQYUJPX", "XPUTYJMBQ", "TXUMYBQPJ", "TUMPBJYQX", "TBXPUMQYJ", "YQPUTJXBM", "PUQYTJXBM", "JBQPMUXTY", "BJMXPTUYQ", "MYPXQBTUJ", "BUJYPXMQT", "YTJUBQPXM", "PTBYXJUMQ", "MQJXBUTYP", "XJYBPUMTQ", "YTQPUXJMB", "MBYJXTQUP", "QPXYUJBTM", "TXMJUYBQP", "BJMPXUYQT", "XPTJYQMUB", "BXTYMQUPJ", "YUTJPQBXM", "JYTUQPXMB", "XJPMYBQTU", "JYBUMPTXQ", "QUMJPYTBX", "BUMQJYXTP"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "Y";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string candidates = "EFRWCSMX";
    vector<string> ballots = {"WXSCRMEF", "FMCEXRSW", "XSFREWCM", "WSCERMXF", "FMSXERWC", "EXFCRMWS", "EFXWSCRM", "SWMCREXF", "CESWXRFM", "EXMSRWFC", "RCEXSWFM", "WESRMFXC", "CWXSMFRE", "SRFCWMXE", "CRFWMESX", "WCFSXMER", "EFXCRSWM", "FMREWXCS", "CMWSXRFE", "SCWXMERF", "SEMXFCRW", "XWMRESCF", "SXEFRCWM", "CEWSRXMF", "MXECWFSR", "XESFCRMW", "FXESRCMW", "XMEWCRFS", "CEMFRXSW", "MSECFRWX", "RECFMSXW", "RCFMXSEW", "SRECFWMX", "FWMSXREC", "CFXSMWRE", "FMEWSCXR", "MFRESWCX", "SWMXFCER", "EFSWXCRM"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string candidates = "LO";
    vector<string> ballots = {"LO", "OL", "OL", "LO", "OL", "LO", "OL", "OL", "OL", "LO"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "O";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string candidates = "PQ";
    vector<string> ballots = {"QP", "QP", "QP", "PQ", "PQ", "QP", "PQ", "QP", "QP", "QP", "PQ", "QP", "QP", "PQ", "PQ", "QP", "QP", "QP", "QP", "QP", "PQ", "PQ", "QP", "QP", "QP", "PQ", "PQ", "PQ", "PQ", "QP", "PQ", "PQ", "PQ", "PQ", "QP", "QP", "PQ", "QP", "QP", "QP"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "Q";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string candidates = "MRINPKSLZE";
    vector<string> ballots = {"KZSIMRNPEL", "NEIZMPKSRL", "KEISRMZLNP", "MNRKLPSEZI", "SPIRMEKLZN", "KMSPLREINZ", "ILERNSZKPM", "MIZLKERSPN", "NPRMZKISEL", "KMIZLPNSER", "SERNILKPZM", "LRNSZPEIMK", "LZPSEKNMIR", "ENMPIZLSRK", "SIZRLENMKP", "MLRINKEPZS", "PLEZSRMINK", "SMPLREIZNK", "RKEMZNSLIP", "MRKZNIPSEL", "MSPNKZRELI", "ESRKINPLMZ", "ISRPNZLKME", "PKNMIRSZLE", "PLMRNZIEKS", "IMRNPSELZK", "IRLNPMKESZ", "NLKMRZPSIE", "MZLNRPIKSE", "IPRMKZLNES", "PLMZSKNEIR", "EPNSKRMLIZ", "NMEZKSIRLP", "LISEMPNZRK", "ZMPNELKISR", "SLMZNKRIPE", "IKNMRLESZP", "ZMIKRLSEPN", "ZIMKSERPLN", "RLZNEMKISP"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string candidates = "A";
    vector<string> ballots = {"A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A", "A"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string candidates = "ZGOLRWH";
    vector<string> ballots = {"HZWORLG", "HZWROLG", "LWROHZG", "WOGLHZR", "GRZOLHW", "RLHWOGZ", "HLRZWOG", "WHZLROG", "LHWZGOR", "ZGWROLH", "HWGRLOZ", "ROLGHZW", "RLOZHWG", "GRHZWLO", "LRGWHOZ", "ZHOGRLW", "ZWRHOLG", "OZWHGRL", "WLGRZOH", "ZOHGRLW", "WOHZRGL", "LHZGROW", "LHOWGRZ", "GLZOWRH", "LHZGORW", "GZORLHW", "HZLGRWO", "ZLHGROW", "OLHZGWR", "WRZOHLG", "OLZGHRW", "ZRWHGOL", "GZRWLHO", "WGORZLH", "ZWGRLOH", "RHWZLOG", "WGROHZL", "LZRHGWO", "GHRWOZL", "RGHZLWO", "LRZWOHG", "LHRZGWO", "ZHLOGWR", "GHLWZOR"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "Z";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string candidates = "RKXF";
    vector<string> ballots = {"FRKX", "FXRK", "XFRK", "KXRF", "XKFR", "FKRX", "FRKX", "KXFR", "FRKX", "RKXF", "KFRX", "RKFX", "XKFR", "KFXR", "RKXF", "XKRF", "KFXR", "FRKX", "XRFK", "FRKX", "KRXF", "FXKR", "KFRX", "RFKX", "XFKR", "FKXR", "XFKR", "RKXF"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string candidates = "N";
    vector<string> ballots = {"N", "N", "N", "N"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "N";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string candidates = "X";
    vector<string> ballots = {"X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X", "X"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "X";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string candidates = "UNMRETG";
    vector<string> ballots = {"RMTUEGN", "RUGEMNT", "MEUTRGN"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string candidates = "RKW";
    vector<string> ballots = {"WRK", "KRW", "WRK", "WKR", "RWK", "RWK", "WRK", "WRK", "KRW", "KWR", "KRW", "RKW", "RWK", "WRK", "RKW", "RKW", "WKR", "WRK", "WRK", "RWK", "WKR", "WKR", "KWR", "KWR", "KRW", "KRW", "WRK", "RWK", "RKW", "WRK", "RKW", "RKW"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string candidates = "EXBKIWMTV";
    vector<string> ballots = {"EMWKBTVXI", "TWXBMIEVK", "TBVXIEKMW", "KWVETMXIB", "KMBIWTEXV", "IBVXMTWKE", "TWKBMIXVE", "WKXVMEITB", "BEXKVTIWM", "EVIWMTBXK", "BTEWKIVXM", "EKMWIBVTX", "MVEBKXTWI", "IXEMTBKWV", "VBWMTEKXI", "VEXIMWBKT", "TXVBKEWMI", "TBEMVIXWK", "VMWTIEXKB", "TXMIEKBWV", "EBXIMVKTW", "WTIEBKMVX", "ITXMVEBKW", "KXEMWBVTI", "WXMEKTBVI", "MIBXWKVET", "XVWBKTIME", "XVWBIKTEM"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "V";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string candidates = "SAGVIZOJLD";
    vector<string> ballots = {"JSLDVOAGZI", "OIJVZGSDLA", "JIZOSGLAVD", "JZOVASGDLI", "JIVGSLZOAD", "DSGLAJOVZI", "SZOGVLJDIA", "DJGISVOZLA", "AVSIJZLOGD", "VOASLZGDJI", "DGZJIVASOL", "LGAJISDVZO", "VSAJDIOZLG", "DOGJAISVZL", "DJLAVSIGOZ", "VAIJOZDGSL", "ILSDGVOAJZ", "DVLJIAOGZS", "IVALOJSDZG", "VILAODGJZS", "OGLIDJZASV", "OALISGZVDJ", "SIOADJZVLG", "JDZGVLASOI", "ADSJGLZOVI", "SJZVADLOGI", "SDALIZJOVG", "IVDASLGZJO", "VSZJALIDGO", "AZVGSDOJLI", "GLDOSZJVIA", "IJSAZLDGOV", "ASLVGOIZJD", "IZGSAVDOJL", "JIDLZGVAOS", "AOSLVGZJID", "LGZOIJDVAS", "ISJAOLVGZD", "ZODALVISGJ", "GALVZSOJDI", "OJZADIGSLV", "SOVLDJAZIG", "LSOGVZADIJ", "OGLAIDVJSZ", "JASVLZIDGO", "SGOZJLDVIA", "DAISLVJOGZ", "AVODIZSGJL"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string candidates = "QIOB";
    vector<string> ballots = {"OBIQ", "BIOQ", "QOBI", "QBOI", "IOBQ", "IOBQ", "QIOB", "BOQI", "QBOI", "OIBQ", "IOBQ", "IOQB", "IQOB", "IQBO", "OBQI", "BIQO", "OQIB", "IQOB", "QIOB", "BOQI", "BQIO", "IBOQ", "BQIO", "BQOI", "BIQO", "IOQB", "OIQB", "QBIO", "QBIO", "IBOQ", "BIOQ", "QIOB", "IQOB", "BIQO", "QOIB", "IOQB", "QIOB", "QOIB", "BIOQ", "IQBO", "IOQB", "BIQO"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "I";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string candidates = "BZDUORX";
    vector<string> ballots = {"ORXZUDB", "DXUROZB", "ZXRUDOB", "DXUOBZR", "OUBDXRZ", "UDBOXRZ", "DZROBXU", "DBUORXZ", "OXDURZB", "XZRODBU", "XDUBORZ", "ROUXZDB", "ZUDXBRO", "RXDBUZO", "OZUDXBR", "ZDUXBOR", "OBUDZRX", "DBORZUX"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "D";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string candidates = "UOX";
    vector<string> ballots = {"XOU", "XOU", "XUO", "XOU", "UOX", "OUX", "OXU", "XOU", "XOU", "XUO", "OUX", "OXU", "XUO", "XOU", "OXU", "UOX", "XUO", "XUO", "UOX", "UXO", "OXU", "OUX", "UOX", "XUO", "OXU", "OUX", "UOX", "XOU", "XUO", "UOX", "OUX", "UOX", "XUO", "OUX", "XOU", "UXO", "XOU", "XOU", "OUX", "OXU", "OXU"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "O";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string candidates = "OIVG";
    vector<string> ballots = {"GIOV", "VGOI"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string candidates = "WR";
    vector<string> ballots = {"RW", "WR", "RW", "WR", "WR", "WR", "WR", "RW", "WR", "RW", "WR", "RW", "RW", "WR", "WR", "WR", "RW", "WR", "RW", "RW", "RW", "WR", "RW", "RW", "WR", "WR", "WR", "RW", "WR", "RW", "RW", "WR", "WR", "WR"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "W";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string candidates = "ADQGPTJ";
    vector<string> ballots = {"TAJGQDP", "AJQDPGT", "QAPJTDG", "ATJPGQD", "PGAJDTQ", "DTGPQAJ", "QGTJPDA", "AGPQJTD", "AQDTJGP", "TAPDQGJ", "QPTDGJA", "JPQDTAG", "PAQJDTG", "DGJQTPA", "DPQJGTA", "JGADQPT", "PJDTQAG", "GTQJPAD", "DTAGJQP", "DATJGPQ", "QDJPGAT", "JQPGDTA", "DTAPGJQ", "TQDPJGA", "JQDTAGP", "DJPATQG", "AQGTJPD", "ATPQDJG", "TPAGDQJ", "TGQPJDA", "GDTQJPA", "DPTGQAJ", "QJGADPT", "GTJPQAD", "DJTPAQG", "TAQDGJP", "TDGAQJP", "JAGQPDT", "AQJDPGT", "GJTPQDA", "GJPTQAD", "TQDGPJA", "ADJQPTG", "PADTJGQ", "DGQTJPA", "DGTPQJA", "QJPGTAD"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "D";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string candidates = "HFGKVDNYMZ";
    vector<string> ballots = {"FZVHKGYMDN", "ZVDGKMFNHY", "ZGHNMVYFKD", "DNKHZYGFVM", "DZNMGHKFYV", "YMKVZGFHDN", "DGZYMKHNFV", "VGNFDHZKMY", "FNDMHYKGZV", "MNGFYZDKVH", "HMFKYZNDVG", "ZGFHKMYNVD", "FYNVGZDKHM", "NKDMHFVYGZ", "YDHZGVNFMK", "VKNHFZDYGM", "NKDYFVGZHM", "DZGVNKHMYF", "DFMKGVNHZY", "FZVMKHYNGD", "DHZYGFKVMN", "GHMFVDZNYK", "DKHMZYNFVG", "DZFGMHKVYN"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string candidates = "BXZULEPW";
    vector<string> ballots = {"UBWLXPEZ", "XLBWEUZP", "WBELPUZX", "PXWBLEZU", "EXBWPUZL", "LPXEZWBU", "EPUXWLZB", "BWUXLPEZ", "LUWZEBPX", "UBWLEXPZ", "ZPXEWLUB", "BPLZWXEU", "ULEXPZBW"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string candidates = "TRLZMIABG";
    vector<string> ballots = {"LBZMAIGTR", "ITRLMZAGB", "RIBZTALGM", "LTGBIAZRM", "ZGTRIABLM", "LZMGTRAIB", "BRMILZTAG", "RLMBAGZIT", "RLIBZAGTM", "MIRBZTAGL", "ZGTLABMIR", "AIBLZGMTR", "BMGILZART", "AILTGRZBM"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string candidates = "KCHLIEYWF";
    vector<string> ballots = {"ELFCWHYKI", "HCWYEIKLF", "LWHECYFIK", "CEWHLYIFK", "LEYHCWIFK", "LWKYECHIF", "IWLCYFHKE", "WLECFKHIY", "WFYHICLKE", "EHYKFWCLI", "LWFIHCKEY", "EWLCKYIHF", "ICYLHKWEF", "WEFLHCKYI", "LYEKWIHCF", "HFEKIYLWC", "CYWHKLEFI", "FIKEHCWLY", "IYHKFWELC", "YHCLKEIWF", "CFWLKIHEY", "HKWCLIFYE", "IYFHKELWC", "CFYWIKEHL", "YFCLIHWKE", "WHCFKYEIL", "ELIYWHFKC", "YWEKHLIFC"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "W";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string candidates = "WUIABKX";
    vector<string> ballots = {"AIBXUWK", "XIABUWK", "UKAWXBI", "IBUKAWX", "ABXWKIU", "WXKIABU", "XAIUBKW", "WIUBKAX", "KWUIBAX", "AXKBIWU", "KIABUXW", "IBUXAKW", "UIXABKW", "AXKUBWI"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string candidates = "F";
    vector<string> ballots = {"F", "F", "F", "F", "F", "F", "F", "F", "F", "F", "F", "F", "F", "F"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "F";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string candidates = "ZJMCHXNK";
    vector<string> ballots = {"ZHXJCNMK", "HNKMJZXC", "ZKCJNMXH", "JXKZHMNC", "HNKJCZXM", "MJZXNKHC", "KHZXJNCM", "KZCMHXNJ", "JCZMKXHN", "ZKHCXJNM", "HXNKCMJZ", "JZHKMNXC", "KNCZMXHJ", "JMXHKZCN", "KNCXHMJZ", "ZKCNHXMJ", "XHMZCKJN", "ZCMNXHKJ", "JHNXZCMK", "XHKJMNZC", "JKCHXNMZ", "CZXMKHJN", "NCJMZHXK", "MXNZCJHK", "CKHJMXNZ", "ZCMJNXHK", "NKXMHCZJ", "HJMXCNKZ", "XKJMNCZH", "HJKZXNCM", "MZJKXHNC", "KMXCZNHJ", "XNCKHJZM", "KHNMXCJZ", "ZNXCMKJH", "MCHJKNXZ", "NJXHZKCM", "HXZCNMKJ", "XKNHCMJZ", "KHZNMJXC", "XHNKCJMZ"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "K";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string candidates = "TFAW";
    vector<string> ballots = {"TAWF", "AWTF", "TFAW", "FTAW", "TFWA", "WTFA", "WAFT", "FTAW", "WTAF", "WFTA", "TWAF"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "T";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string candidates = "HTUPK";
    vector<string> ballots = {"HPTUK", "KUHTP", "HKUPT", "THUPK", "KPHUT", "PUTHK", "PUHTK", "PTUKH", "PHUKT", "UPTHK", "PUKHT", "PTUKH", "KHUPT", "HKUTP", "THUKP", "KHTUP", "UHKPT"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "H";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string candidates = "HRIYNZEL";
    vector<string> ballots = {"ZYLRIHNE", "ZRLIEYHN", "IHLYENRZ", "ZINRLHYE", "EIYNHRLZ", "LNYIRZEH", "YHINLEZR", "LHZIRNEY", "ZEYNHRIL", "HLYIRNEZ", "YHZIENRL", "HZRENYLI", "ZLNIHRYE", "EYZRNHLI", "LRHNYIEZ", "ELZIHYRN", "ENIHYRZL", "HENRIZLY", "IYLNHZER", "LZIRHENY", "LRENIHZY", "NHYRELZI", "YIENLRHZ", "YIZHRLEN", "ZIEYNRHL", "YHLENZIR", "ERZLNHYI", "ZNHIEYRL", "HYEINRZL", "YLHRENZI", "ZNHRELIY", "LHZINYRE", "NLHRIYEZ", "YLHZNEIR", "NERLIZYH", "IHLZNEYR", "LZRIHYNE", "ILZREHNY", "INYZLRHE", "ZLHNERIY"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string candidates = "EBNQHUR";
    vector<string> ballots = {"QHEUBRN", "RHBNEUQ", "UHNBREQ", "NBQRHUE", "QUENRBH", "HQRBEUN", "RBNQUEH", "UBHRENQ", "NQHBEUR", "NHEUQBR", "UBQRHEN", "UHRNQEB", "NREQHBU", "HNRUBEQ", "UENRBHQ", "URHBQNE", "REBHQNU", "RBQNEHU", "BHNEQUR", "HBUERQN", "QNEURHB", "NQHEURB", "RQNHUEB"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "N";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string candidates = "Q";
    vector<string> ballots = {"Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q", "Q"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "Q";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string candidates = "ARH";
    vector<string> ballots = {"HAR", "HRA", "HAR", "ARH", "AHR", "AHR", "HAR", "HAR", "ARH", "RHA", "AHR", "HRA", "RAH", "RHA", "HRA", "RHA", "ARH", "HRA", "AHR", "AHR", "HAR", "ARH", "AHR", "AHR", "HAR", "RAH", "HRA", "HRA", "RHA", "AHR", "ARH", "RAH", "HRA", "RAH", "RHA", "RHA", "RAH"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "H";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string candidates = "OVPFKDNML";
    vector<string> ballots = {"PDFMONVKL", "MNKFLVOPD", "NMVOFPKLD", "FLVDKOMPN", "LDVKFMONP", "NPVKFDOLM", "VKNOFLDMP", "OPNFLKVDM", "VLMDNFPOK", "DOVPNLKFM", "KONDMVPLF", "PVKMNFLDO", "DMOKNFVPL", "VPMNLDKFO", "VFPMLONKD", "KDNFMOLPV", "MPKDLFONV", "MVOLFPDKN", "OPVLNMDKF", "FNLVKOPMD"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "V";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string candidates = "UCLZ";
    vector<string> ballots = {"UCZL", "ZLCU", "LUCZ", "UZLC", "LCZU", "ULZC", "ZLUC", "LZUC", "LCUZ", "CUZL", "ZCLU", "LZCU", "ZUCL", "CZUL", "ZLUC", "LUZC", "CLZU", "UCLZ", "UZCL", "ULZC", "LZUC", "ZULC", "CZUL", "CUZL", "ZCLU", "ZUCL", "LUZC", "CLZU", "ZLCU", "UZCL", "UCLZ", "CLZU", "ULZC", "LUCZ", "LZCU", "ZLUC", "LCUZ"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "L";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string candidates = "CAB";
    vector<string> ballots = {"ACB", "BCA", "ACB", "BCA", "ACB", "BCA", "CAB", "CAB"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string candidates = "ABC";
    vector<string> ballots = {"ABC", "BAC"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string candidates = "DCBA";
    vector<string> ballots = {"ACBD", "ACBD", "ACBD", "BCAD", "BCAD", "DBCA", "CBDA"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string candidates = "AB";
    vector<string> ballots = {"AB", "BA", "AB"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string candidates = "ABC";
    vector<string> ballots = {"ABC", "ABC", "BAC", "BAC", "CAB", "CAB"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string candidates = "ABC";
    vector<string> ballots = {"ACB", "BCA"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string candidates = "ABCD";
    vector<string> ballots = {"ABCD", "CBAD", "BCDA"};
    InstantRunoff* pObj = new InstantRunoff();
    clock_t start = clock();
    string result = pObj->outcome(candidates, ballots);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=152347&rd=4680&pm=2244
********************************************************************************
#include <vector> 
#include <string> 
#include <algorithm> 
#include <cstdio> 
#include <set> 
#include <iostream> 
#include <map> 
#include <functional> 
#include <deque> 
#include <sstream> 
#include <numeric> 
 
using namespace std; 
 
class InstantRunoff { 
  public: 
  string outcome(string a, vector <string> b) { 
        if( !a.size() ) 
            return ""; 
        vector< int > votz( a.size() ); 
        for( int i = 0; i < b.size(); i++ ) { 
            for( int j = 0; j < b[ i ].size(); j++ ) { 
                if( count( a.begin(), a.end(), b[ i ][ j ] ) ) { 
                    votz[ find( a.begin(), a.end(), b[ i ][ j ] ) - a.begin() ]++; 
                    break; 
                } 
            } 
        } 
        for( int i = 0; i < votz.size(); i++ ) 
            printf( "%d ", votz[ i ] ); 
        printf( "\n" ); 
        int hf = b.size() / 2; 
        printf( "hf is %d\n", hf ); 
        for( int i = 0; i < votz.size(); i++ ) 
            if( votz[ i ] > hf ) 
                return string( a.begin() + i, a.begin() + i + 1 ); 
        int loest = 10000; 
        for( int i = 0; i < votz.size(); i++ ) 
            loest = min( loest, votz[ i ] ); 
        string gnu; 
        for( int i = 0; i < votz.size(); i++ ) 
            if( votz[ i ] > loest ) 
                gnu += a[ i ]; 
        return outcome( gnu, b ); 
  } 
}; 
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/