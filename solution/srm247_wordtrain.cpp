/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=875
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

class WordTrain {
public:
    string hookUp(vector<string> cars);
};

string WordTrain::hookUp(vector<string> cars) {
    string ret;
    return ret;
}


int test0() {
    vector<string> cars = {"CBA", "DAA", "CXX"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "ABC-CXX";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> cars = {"ACBA"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCA";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> cars = {"AUTOMATA", "COMPUTER", "ROBOT"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "COMPUTER-ROBOT";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> cars = {"AAA", "AAAA", "AAA", "AAA"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AAA-AAA-AAA-AAAA";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> cars = {"ABA", "BBB", "COP", "COD", "BAD"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "BBB-BAD";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> cars = {"BABCB", "BAAAB"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "BAAAB-BABCB";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> cars = {"BABCD", "BZZZZZAAB"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "BAAZZZZZB-BABCD";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> cars = {"AAA", "BXDA", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC", "CBC", "CCC", "CCC", "CCC", "CCC", "CCC", "CCC"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "CBC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC-CCC";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> cars = {"MPW", "RQV", "MXYZDMDM", "VVV", "MXA"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AXM-MDMDZYXM-MPW";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> cars = {"MPW", "RQV", "MXYZDMDM", "VVV", "MXA", "VALVE", "WPM"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AXM-MDMDZYXM-MPW";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> cars = {"MPW", "RQV", "MXYZDMDM", "VVV", "MXA", "VALVE", "WPM", "AUTOMATA", "APLOMB"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "ATAMOTUA-AXM-MDMDZYXM-MPW";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> cars = {"ABC", "CAB", "AAA", "ABB", "BBB", "BCA", "CCA", "CCC", "CBC", "AAB"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AAA-AAB-BBB-BAC-CBC-CCC";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> cars = {"GOGGLE", "GUAGE", "FORGE", "FROG", "GRIEF", "GRAPH", "HIGH", "HUGE", "HUG"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "EGROF-FEIRG-GRAPH-HGIH";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> cars = {"ANNA", "BLOB", "BULB", "BLURB", "ANNA", "ROAR", "SOAR"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "BLOB-BLUB-BLURB";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> cars = {"POP", "PUP", "POO", "POOP", "PREEN", "PLANE", "PLAIN", "NOON", "POSSUM", "OPOSSUM"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "MUSSOPO-OOP-POOP-POP-PUP";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> cars = {"MYEZKFZA", "PHBZRST", "HKEHLBHF", "VCBZE", "PGJRF", "ZWDMUEWH", "LOPZBYHWQ", "JXZ", "KKNGVTZ", "IVFOFRAW", "HKAAMLH", "CXQC", "HZAOF", "DWNJYIM", "LMHX", "NQUZ", "RNLLEBSU", "QMNFVHACYW", "EDBUIEUZR", "MAYLEW", "OQTYO", "PHSXIWV", "GHZTAN", "NPEAEWJN", "MPBUMDJ", "SWW", "MSLPDM", "LZLYAXN", "YUZGH", "COMZNXGM", "AFACASVZ", "QDK", "OUJ", "SUP", "ASIH", "QVODXPMMC", "OOKQM", "GZY", "IGXM", "PDRYNNISTW", "QNDNBQJK", "YBVKZHJXM", "PLIRQW", "YUWPKFKYB", "UEVLKLHCO", "LTQJRUTKZF", "ABSUEYTL", "QYKAX", "KMLM", "QSFNOG"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "CQXC-COMZNXGM-MDPLSM-MQKOO-OQTYO-OCHLKLVEU";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> cars = {"GGBMKT", "KFKWVPDIQJ", "ZOKXB", "MZYGW", "ULOM", "XWRCCU", "CBEIDIUQX", "TGLHPH", "YHNCFIHRZ", "CZBIK", "LIB", "TAEVQ", "FNZ", "BJJKIFHBVN", "ZAYPGRQQMH", "MTGNXGTTI", "SFUEO", "NCTSWOYCBC", "XMEQTFBYG", "GIULS", "BLAF", "GOVJNXLLC", "HPPXCDKR", "SEUTCNS", "VTCWJ", "VOIM", "VLARWGW", "EAIHPBBV", "CWGOR", "AFXCHTQ", "PLN", "KZTQGE", "SDF", "LMXZLVJWDM", "WILZKTHWRU", "DXTL", "QUJGMAZY", "NWQUBOTZSU", "CMAKX", "ITY", "ECO", "ZXEQ", "WKC", "EWXT", "UAHGLGMQQ", "CWJVTLOZN", "IDN", "HYOH", "UQDGUXBCWY", "XEDZOXY"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "BIL-LMXZLVJWDM-MOLU-UCCRWX-XEDZOXY-YHNCFIHRZ";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> cars = {"GMY", "KWNK", "IOSBDHRTXG", "XWQXQYITG", "KZZL", "IIC", "OWPLG", "QUB", "YMNE", "ADVPVOLCJ", "FBY", "SHOXGPA", "NBJREROXJY", "NGNLBUVL", "PHEAIRZV", "ZVPMHGLY", "OYG", "VDIJRUEKFE", "ZPSNFTELQ", "SHQQZ", "KEEMYMZSW", "AHWDDXB", "ALCFJ", "ONWW", "ZLA", "IAZ", "ULEER", "JLLYQO", "PAEGDWJP", "PYLM", "NLSVPQFW", "AMKDBUYH", "ESJNXXE", "DKRLLMZ", "LACY", "FRAFUTOMK", "QUXJWKDQ", "QUVDQZ", "YIAKUX", "BPLCRD", "GGKWOHBID", "CUTYJWHJVU", "KRALMVYC", "QHHUAX", "APJFOWCDHK", "CPOG", "BHEM", "SBIIFT", "EBYHUANOS", "HCAMSNPCBG"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AHWDDXB-BPLCRD-DIBHOWKGG-GTIYQXQWX-XUKAIY-YLGHMPVZ";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> cars = {"IOU", "FFAXUCHE", "NLDTHZZIJW", "LREFTJKPPU", "KOZV", "XJFRYFUW", "JJZN", "UGITNRW", "YHGG", "HNE", "LQOVSB", "RLJYDTGPST", "IPU", "MXRZJYCZRU", "KMQBVC", "KHEV", "ZXQAKKSRT", "ZGFJE", "RFWTWZF", "XOI", "OCSGLU", "AYLOOEC", "GYVWIZO", "ZUPQWSKBMY", "JTFKWWVVY", "ECWGYODF", "ZOFM", "MWOCFY", "WZQ", "RUTJQNLJ", "PBHIB", "XCY", "MIFHEVXUFC", "EKCVMBYLN", "CSF", "PTPROR", "ZTPRTKBZ", "GPWRIDTZVO", "GLJCXD", "YGFAN", "BCYFUZJCU", "SFWUVL", "EOAPJQ", "UCBZ", "WEWZGUMA", "JCMMSPZR", "XEOHRDJ", "MYWJH", "FXJX", "LHLNEH"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AYLOOEC-CFUXVEHFIM-MXRZJYCZRU-UGITNRW-WUFYRFJX-XCY-YMBKSWQPUZ-ZBKTRPTZ";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> cars = {"NVDEBO", "UBMZL", "ORHEO", "VKIKKSFG", "XKNWVGX", "QJSQTZKCJ", "WPIB", "QJKXU", "HHLXFCK", "IKL", "PFUU", "NHMOFO", "LXTRSSHIV", "HYTB", "JVJSIHKHLV", "HGAALEOQDZ", "UCYWFCM", "GYZLJ", "FYNXSBP", "VETRBOXPG", "VZS", "QJBTLSYB", "HTLOXJANOR", "AWNSN", "GJZDWWJXH", "ZRJDLY", "WRDZAIRP", "SZPJS", "QYTBXP", "QPRMRGQQ", "JIHDO", "HRFWV", "IZZLMX", "BOFBZBLOBR", "VWNHDZ", "BKNGXEWZBV", "KUIXX", "OKYNSQUKGK", "NPRILCAL", "DLZYXAYK", "JBLJV", "SBAEWZXO", "JNUNEVOT", "IUI", "LML", "TIYLNNKWCK", "BQCFXDWHBL", "MGVDPKJZ", "RZFJUZVNZL", "GKUASZ"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "IUI-IKL-LML-LACLIRPN-NHMOFO-OEHRO-OXZWEABS-SJPZS-SZV-VWNHDZ";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> cars = {"YVPVPZ", "WYGZUT", "ENKOQARDD", "MVY", "UHC", "BGF", "QWZDTAAN", "WNBFUWVGTS", "QLJVAI", "BFBHQSQUM", "HSYAUTBLBH", "EALY", "HVWGVFHI", "SVTJH", "LYQHLBC", "UVR", "LEAJGVUCWW", "YKEPLDVI", "ISYJYIXB", "WNYWCXH", "QSAHE", "JXYKMAORL", "TVUBXJM", "KWH", "YDMOMBJFIM", "OSXLRZRGID", "YOCXMOX", "EVIYDCZLH", "AGQJZUIMNC", "GTFQNGBDG", "VJDLOL", "IMJ", "CNTZVBS", "UERSIJFU", "TWGLKNR", "TWQYCZ", "APT", "UUKS", "KEP", "NCTUL", "TJCS", "RINACPE", "DZJCKFJLES", "NMPSHC", "LGBINYOEJL", "DENMRP", "TYQN", "WUDWK", "CTXGGJVXA", "GGI"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "DDRAQOKNE-EVIYDCZLH-HBLBTUAYSH-HVWGVFHI-IMJ-JXYKMAORL-LGBINYOEJL-LUTCN-NQYT-TUZGYW";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> cars = {"GKINJG", "LFY", "PPSQITNM", "DWSWOUD", "WRFVTYBMQ", "IFKWIBXJQQ", "QJHOHGXYBD", "ZEIECYE", "SDOADMLNWW", "ASCFIZ", "FCDQUZI", "PQFPOWHR", "HYJPVWGCSS", "FZXAVD", "KCQHOSDPEX", "UYMU", "XSEUZCUNM", "RAQ", "RBKJQ", "HKPH", "OCXY", "RNDLGDJJ", "KLHRUFM", "HFEH", "GRPCUYW", "WHMLRC", "MUOWF", "TDHRTP", "EBKSRWI", "HQJLGRIVY", "IJQRXCOR", "DLGVLMY", "SUCKIOD", "QBIOGYMG", "FZHW", "SFTPJQZKC", "BHCVDFRN", "RHVRJ", "VLLHZAF", "QZYHTBE", "UCSRIZ", "FCCUSKGO", "PDF", "ENJXDSAVJZ", "UEFTXGZQVG", "REFTVG", "BIHUUMDU", "KWKTZRAAG", "ZAILBMYYMS", "CXFOBPFXC"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "DUOWSWD-DVAXZF-FCDQUZI-IFKWIBXJQQ-QAR";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> cars = {"LKPQL", "MOGOUMDPA", "YWBXOWNL", "EOWG", "FZSFKWRVX", "VXMMIHC", "AQMP", "KBUQTZWGTQ", "NOUR", "KHLVYKBNH", "SREGLGZ", "MHDFRYIMJC", "UPLQINQXYR", "KZNIFPGZ", "HKG", "JOPHQBNE", "EPUFTZ", "VHBJCRBCY", "DVBLVTIOS", "THBXHSHC", "JWGRWSYGF", "DUL", "XDHG", "OLRLAGI", "BDXPNAZBG", "JOHCTOZQB", "RADDKVPW", "ZQJVLYS", "FNNM", "ABEJ", "ADQOHI", "VHPDJGNIEM", "JJQMSGUMTW", "BJGOFUT", "SQSHAIZA", "JWLVO", "IEZAI", "NAMWVVKTMX", "XHJHYGMQK", "CACIA", "HDQBTME", "HHLKSYI", "BTOPJKXFU", "UQYXBWBMUB", "JLLJB", "GZBNSCMTL", "TSVHDZUYZ", "KYSYRKDQDG", "JBZOXFE", "MTRJS"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "BDXPNAZBG-GKH-HHLKSYI-IAZEI-IGALRLO";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> cars = {"VDYKGIUYWI", "MHKF", "BHH", "IXMB", "SXFWQAKB", "GTZ", "AMUV", "CUDZXHSKR", "OJLEHBD", "BCF", "OTJ", "SAFOVC", "WPDCVZCX", "ETGNZNTA", "FXSXN", "JVHRGGM", "AATAITR", "DOWVUBTQ", "KUHKG", "HVJIPCBODR", "MIIGKY", "BLXSVHYXF", "ACNNEH", "NNOY", "LMC", "KSGHZIX", "VHHFOKWN", "HHBO", "UJCFPA", "JLT", "OUU", "RSOGHOFKA", "BHFUPF", "RBKXWH", "FZUZS", "QMVNPDOXUV", "OALOQ", "VMJEQAVT", "SGGFMZPGNP", "ZSYADCPSQ", "FDW", "ZYUWGAGYRT", "HUDZUQMPTH", "IIKPIKLXA", "VDZBLZMRF", "BLJBLQSZBJ", "AEAPBC", "OETFSGSC", "CCQ", "LZQCLC"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "ACNNEH-HTPMQUZDUH-HHBO-OALOQ-QMVNPDOXUV";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> cars = {"RFQTOMYHU", "SUEO", "ADDOJBVEQZ", "LCA", "SHPXAHCN", "AHNJD", "RGS", "MSEWTWEBU", "JFPVXWLA", "EPBEBVJOD", "LKOTRNDQE", "YENEV", "LOVTQRH", "MTCUHD", "NMKHQA", "HYMUN", "LWHIV", "PVZRVE", "ORF", "HMWQ", "HRNS", "WQMBKNZABT", "SQG", "ULFAB", "ZAMLN", "SWND", "SGT", "FCA", "ISKKA", "KUYEC", "DYQ", "LIGOCMF", "CXW", "OKYBRG", "JHSXQ", "DLSNHBUE", "QPGXCRJDK", "USJAI", "FTILP", "BPTCTJZ", "WJAKFMMDR", "CGGUE", "FERIGE", "NBGRP", "ZTUARHKTGF", "UBRJJZOAJ", "HTUAJS", "PEDOMJRQ", "ESPFSW", "WNMY"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AHNJD-DLSNHBUE-EGIREF-FRO-OEUS-SGT-TBAZNKBMQW-WNMY";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> cars = {"XOJ", "CEVSMJ", "SJVDTV", "ZBKGM", "NUZU", "LTZBKTJB", "TBLXYJH", "RIXF", "JRM", "TMRWCSF", "OKSDO", "SZQ", "KEVCMPL", "BYFEHKPNN", "TXCDNWORVN", "BJXWMETJIB", "PQNXZHZEU", "FZPPH", "RFKRLMFZH", "TDY", "UGNZNO", "YWQPDG", "OAHYBM", "OKDKKSDQ", "QAPHX", "VNWYLJAQA", "GXKCKKMYHM", "RWHVA", "AAFSWDAY", "BLN", "FPQQZKJDMX", "HYBDJAMAAW", "RBWKCPVI", "QRBUYDXX", "JWIAMJTZ", "GSWNPW", "ZBANOM", "HGAHERHWZ", "AQRNILERT", "XOI", "EMW", "KXGGEIUT", "YDGC", "PKNRENIOEH", "QBKMA", "ZRMWYLPM", "JLOUCTQQDN", "HHTSLLME", "EJKDUKH", "QYCH"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "CEVSMJ-JRM-MBYHAO-ODSKO-OKDKKSDQ-QZS-SJVDTV";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> cars = {"RVX", "AKDEVK", "JUQ", "VJNAISQOQ", "STPKEDNMFJ", "XCOSVOHW", "YKXAXQWHH", "QWSENBEDDD", "MHAJZI", "RJDEL", "HOUO", "LIMCBIF", "UWFNAJ", "FEKJHNN", "HKWWYMP", "GWOGLZCJ", "BTDVM", "OBHDVN", "RLNZUSLR", "ZWOSOAY", "EQDHQKXN", "FVXLLENDF", "IKXED", "HRTLOIVXP", "TDHGQNMGV", "QZRZXES", "MGEDCPNSH", "NYTRGFSGY", "PCYQL", "JFDDJGBU", "HCO", "KBY", "VTMICUKHM", "FHXMYC", "GJKOX", "ICHGYTR", "YVJTGQAHHR", "REAOKEYTWK", "GLUGFVRX", "JBMXMWA", "YEDE", "YAOI", "TBQCIXJ", "GMNR", "TSIBIHGHYQ", "UPDUWYB", "OALPTY", "BPOPASTLFM", "KFZRYEPQQ", "OPGAAE"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "CYMXHF-FDNELLXVF-FIBCMIL-LEDJR-RLNZUSLR-RHHAQGTJVY-YAOSOWZ";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> cars = {"ZJCFH", "WRLHGEUVN", "QCYRI", "OWWCZ", "TZDGZJU", "FQWMJUL", "HVLYV", "YFNLQ", "ZJR", "JRGUKY", "MOXROB", "HRFLXWJLY", "SCGKJ", "UREUZQ", "KUXAOJK", "JMLA", "JXDYPZUCIH", "VHJ", "XABCJB", "TPKW", "FTNKFJUYPK", "UOSHE", "NFTT", "HQKNUWZLZM", "JPJWQX", "FFYMKYZDN", "ZDCHJJ", "DGP", "OQEPQKKEGO", "MZGZV", "FJLU", "IOPDN", "VRQ", "DXYGRMD", "OMEHIUHPS", "KZY", "NQMYOCTLVH", "NPPVMPZQ", "BCJZGAUTVO", "WKHBGTCGHQ", "HRUQ", "QVW", "ORRPHYND", "NJECXFNW", "DWXPOJ", "XYLZQRKITU", "RVHNJXQKR", "GEGUVJ", "KBJHDSVSP", "MTUVGSKMY"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "DMRGYXD-DNYHPRRO-OGEKKQPEQO-OMEHIUHPS";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> cars = {"WKDQBS", "IVZBH", "YNMDOPGQRZ", "LUFTL", "FROPQNTOH", "KQFJ", "LBTGIKEE", "GQGIRD", "MBZQH", "NCXLEEKQS", "NTA", "HMF", "CXAENKR", "GJJVWDECLS", "FGL", "PHTGMSBQFR", "HUE", "MLUP", "CUIXSMBY", "PAPRM", "WGLSEDQJJ", "GZXQRZ", "CNUUI", "ZEOVCPDF", "AIDIGXPC", "QXJL", "ANTO", "ZQR", "CAMSWHTBL", "FXRWEASCR", "QOBXUGC", "FCQ", "CWTFOH", "USFWHQJF", "JQFM", "TDM", "YXOHBVUF", "TDRUFXS", "RBO", "UJWQ", "RROG", "XNUEHWW", "FVTKITTS", "XHEKBZGRDS", "TSSDMJDGT", "SKVVAFIDJD", "EXFBBPGITQ", "MVKH", "QBJOEUYUN", "EVXKAAY"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AIDIGXPC-CWTFOH-HKVM-MLUP-PHTGMSBQFR-RQZ";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> cars = {"KFYKJCB", "EYC", "XQQQSTHWZE", "RLHBHIW", "VYZOGPYV", "WWDQ", "RZRDSSDN", "OBAURTU", "JLLBVBABXE", "GGVE", "VUQOERSL", "CTRYI", "KSINSUBFOM", "WUQNBTANI", "AZRGNCMC", "VFEAHGX", "MRK", "YOZZPCASZ", "QOTDLTK", "BNILMJXDSE", "EEERWUF", "ZELQAGJ", "SACHS", "KTKFPJFY", "UUJQL", "GSIENHV", "BJT", "DSVJVXY", "OWI", "AIUXAID", "ZSRC", "SKG", "XMYVD", "XWAXCDE", "IJQ", "AXAI", "TSICVOPFG", "JTUDJ", "OLKCGKO", "BYRWOEIMU", "DIULBIKQV", "OIRL", "TQAVKNKFR", "DXPGWB", "UWLIUAT", "WUYJ", "BXIX", "KVCOMP", "HSRIVKZH", "GVPYFTELOX"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AZRGNCMC-CYE-EVGG-GSIENHV-VYPGOZYV-VFEAHGX";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> cars = {"IDWPW", "HEVMSF", "LNJ", "YCECTRCM", "VLS", "CKANY", "CXBOQAHFM", "XTTRU", "BELUVJGBZF", "VGILKRHP", "JNEDKIPQN", "JEWJJ", "NRX", "NXC", "DDYKP", "ZBKBOKZ", "CTWGOMVDS", "NBTOD", "KOPWMUAH", "MIXNUFJUAP", "VJJZRV", "CDG", "ZDWX", "GUSQCSIKSI", "FYYII", "XVUAKO", "IEBCIAGXTS", "UFIDCZ", "EHXL", "OCDVGZSSV", "SGFHE", "EJP", "FQK", "SLKGBDLD", "RKLJKK", "AOOU", "QIXS", "TVTTNM", "FRVMXJIM", "UPZVL", "BEQYU", "TSL", "JNAFQ", "YOLAGWX", "NRUCJM", "DCBVYGYQSV", "AZT", "GTPTKWZEIP", "UETO", "PAVWPK"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "BELUVJGBZF-FRVMXJIM-MJCURN-NRX-XWDZ-ZBKBOKZ";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> cars = {"VPFUKZAOL", "IXRMHARS", "BTHMTJLJHF", "NUIWOY", "BSANOS", "RTFJEWV", "DHY", "PVVZNETN", "OUBGUB", "DPDBDBWAI", "UXCPDHHL", "UPMLEWJP", "IZTFSQJINS", "WBNU", "XCTOGOJKS", "OWPQRCJGW", "QMUKSDVTJ", "LYE", "ZCE", "QWUPWXI", "VUV", "UTGWVGOSO", "COKTW", "LNAVQLP", "FRFRUPQYBN", "YEZDNCGPDY", "WUMNG", "XZSATP", "GGBFSKPJ", "EIQQU", "PLUO", "UQDZS", "XIGNDSUQOX", "QQNEQ", "RXGSQA", "WVFBZRJIEO", "CLFWEMIPIA", "ISJ", "ROR", "PSWTMUJWI", "KLVEYC", "UYEWTN", "OLZLSRPGUF", "KLWR", "MEMPRFOY", "CLUYC", "VLYDSQGERT", "EPNTCLWXTM", "DPF", "GDYURRZTBB"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AIPIMEWFLC-CLUYC-CYEVLK-KLWR-ROR-RTFJEWV-VUV";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> cars = {"ZTZUCOUVMP", "TFGNX", "VNLLITYJ", "FGFUZRHGYZ", "RITTT", "MKTLTM", "TIMQXTNAG", "SKDWDSXA", "DGSFNYGB", "ANSC", "CSEOX", "MHHN", "YIHEGDWB", "HWMUNDAD", "UEFFNUZ", "TAXPTGTCF", "NUDGNNY", "DLXNLUMW", "XORPBUYHK", "APFHGVZHS", "ZYHGNSR", "XUISCZTHYQ", "DTXXOB", "NUS", "VMYUAIBJQ", "TFZAECTF", "OTNSVQV", "SFXRW", "LJKYQWY", "IQOFCN", "UVYDAAO", "QVZQWA", "IMAHCPE", "SMXI", "XMFKEW", "JYIHSFA", "BZTHKXW", "ORSI", "BKGHFEBW", "PGIJPA", "FHTVAHEJS", "VAZI", "ZGF", "XTIKFGHSN", "SDY", "LLUZIWIMO", "QTQD", "ANIJEZ", "GMVUKWBJC", "EIUAGT"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "EPCHAMI-IQOFCN-NUS-SFXRW-WEKFMX";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> cars = {"ZIOP", "FOAEZEAZ", "MYLF", "TIYBKCBQAR", "YDGYJR", "EFQBRBZAZA", "CQOCJBFBR", "JWMEHQX", "AON", "AKHWD", "TDYNONI", "VMLCDGG", "IPPYAJYPKB", "XKBNXJJCZR", "TGMIXJYFX", "PKA", "PSMDLPAY", "ZQOIMBVLL", "ALCFFMD", "WRGKR", "XUIHM", "FZK", "TVOVSRXPH", "CDBSXSHB", "TLHJ", "PIT", "XBKUD", "HPN", "QVHZEJAJP", "ZJFVNFWPWE", "EZTIOYLRF", "YKCMCK", "HGBLSREOM", "JGYXTUCB", "RMTFP", "YLZACKR", "HRQOMVSLJT", "XZBCL", "UCTV", "LTXHC", "ALSKEGNHPD", "LRC", "QQJV", "VKRHRN", "OBQSSYAE", "ZOO", "BEJOMIOY", "FIJKMP", "TGOJEWZ", "VOHZXHGR"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AZAZBRBQFE-EZTIOYLRF-FIJKMP-PFTMR-RAQBCKBYIT-TGMIXJYFX";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> cars = {"UJLHYIDFC", "HDYNPQS", "MDBSQRZIQV", "TDBR", "FPMBP", "ARGPEE", "OQQDNLSCI", "HNWMV", "DBMBY", "BJQVA", "REJPLU", "PIIMSXQBXS", "PORZCEKJRQ", "SIEUKPZ", "DPEZK", "DNDU", "VBLZPNBNM", "JMO", "DQEK", "KKK", "ROIGDGHEI", "NCI", "NFR", "PQC", "IERRWU", "DEZTBIUAKH", "FUGBQWE", "KFLOO", "BFCGY", "TLTM", "WSTY", "ZFXU", "DNTANTNN", "DJZFVKM", "BPREPN", "SFA", "KNCNMAGTX", "FVBN", "LUW", "QSQBFAYKG", "GCPE", "WVKNWSDE", "QAJKQ", "QLXXLZPV", "BXHH", "BPMHYWXF", "PDDTSMYKK", "KXC", "YRHUADBEI", "TVGWPRJCTU"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "ARGPEE-EWQBGUF-FVBN-NFR-RBDT-TVGWPRJCTU-UXFZ";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> cars = {"ZQQNV", "CMSFE", "UKRLHARJ", "MCBAUJDWNR", "JRZPBFPFD", "UGHOTRG", "SCQACLVM", "FVHOONE", "JLXMCTQRTR", "WYNYQ", "PKASPFB", "LLXT", "EXFOMK", "EPM", "HZVBY", "XFKSNANPP", "WTTJARYRJ", "JNF", "HCSGFXL", "YZZ", "QPYPQZ", "RMKJ", "VUACS", "PUFLLHZET", "KVVLW", "EGG", "FZDQ", "VQIZED", "TKOSXJGKK", "AYOBQMEBLR", "QPW", "RZRUXZ", "SVAPGK", "EQHE", "ERCGBAJXR", "TQFVUGJ", "LBEA", "QMZIVNU", "NIW", "DJY", "KPUKT", "JYML", "HUCK", "VLOR", "KCPYGPUHZ", "NNFI", "GEE", "FLKMVA", "ZLT", "YPK"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "CMSFE-EHQE-ENOOHVF-FNJ-JKMR-ROLV-VNQQZ";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> cars = {"HFAU", "FYLOYCZQHS", "VBUXNFXA", "HPR", "WATIX", "BMDIZVZPLL", "RFZVGOXFKU", "MLK", "GICC", "TIOYCP", "BJTEWXET", "ZXNTNT", "AXHQVDI", "YQJTEZTVZE", "MZMCSAXIMA", "RYQKSK", "CJFK", "QIURC", "LIIBQKUOX", "PPRTQHCGX", "QJE", "ZKPGLBJ", "DJXQQVZ", "UGC", "IQNZMWMZB", "ZOPTL", "HWZCENHGM", "ILLJ", "IDGQYPS", "JOITR", "RZCPJJJAP", "CSWS", "UIGQNQWY", "WQBWZC", "DGVHTBZ", "UDSL", "WANYRAWH", "EHHA", "AVXZMWGQO", "IELI", "JCHKFSMW", "XZFNMQGO", "NZNNMUIQKC", "PACGFA", "TAAW", "BDDLVUMCX", "INADMGU", "CCF", "YADTCN", "UPPEGIG"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AXHQVDI-IELI-ILLJ-JOITR-RFZVGOXFKU-UIGQNQWY";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> cars = {"XEXZ", "IYOV", "EKFRH", "ZYZDLIFYQ", "XWNS", "DDB", "YYIVXP", "TZBEY", "XCGQX", "KZHTWD", "SJCNATWIK", "OON", "EZCX", "AKBVVREB", "VWOYV", "EEZDKGHRC", "FEUXRNAKX", "YJM", "ALTZLOVOJ", "EILY", "ELVSS", "JBFNBNQ", "VHUUYXTFKT", "BRWJJ", "XXTA", "VZETKXXYVK", "AOTMCIR", "GJGUFVXQTX", "NSJMTGKK", "UIHJFFIOH", "STMWYHAAYQ", "MVSTYDP", "JWFFTUOVJJ", "PBXOMJ", "URLFM", "NOQV", "HWJGLEEA", "OZOLEYHO", "HTMC", "RZKYO", "EOX", "SKMID", "NBCDTHCAA", "JEYTMQQVIU", "PGM", "VMTGHJHW", "JSDWXLKI", "BZSGRIQR", "BZGYWMP", "ZST"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AKBVVREB-BRWJJ-JJVOUTFFWJ-JBFNBNQ-QYAAHYWMTS-SNWX-XCGQX-XEXZ";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> cars = {"NWJPAUYG", "VTSKNENCU", "XWFTSBT", "CNISWERUBU", "JEAEZHYO", "MHUTNMABSE", "RTWVEAL", "BBQMGE", "DSLWCX", "RTGQYA", "DYXG", "RCL", "IFRLQMC", "NVREBT", "USAEYOZ", "HHEAGNPO", "SUAQUIA", "REWUATWRK", "RKOLLIMR", "JJSMEJQ", "UXKWQREIW", "EGBWPE", "BWY", "PIMRP", "ZRO", "ZKPJA", "OHSNSUTYM", "CBYB", "KVYIK", "FHDTOEFDPU", "VDA", "LGNWZY", "JRQSPRSLRX", "ORTQ", "NFWRGEFQWW", "XVPQ", "CWFE", "XDQ", "JBZZQMYD", "WMAFVXJW", "XAJB", "XEMTVDUZGE", "JTLNBGMHB", "AYGIOIVGVX", "WSB", "XXDVX", "DIVR", "ALAIM", "NLV", "ZWGCRLJKB"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "BYBC-CWFE-EGBWPE-ESBAMNTUHM-MYTUSNSHO-ORTQ-QDX-XVDXX";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> cars = {"KDXT", "BMLCVC", "JKRBMYW", "VNUV", "GHATAJALX", "ZFIGAAIEY", "KOS", "BVMKPTFRY", "FECDQX", "PWTVEC", "HDQ", "GQJDZUGSHZ", "FSNHC", "RFSHYTC", "UXRK", "BJGQ", "LTVXF", "GSVJZ", "SWQNAPVUH", "AXMOGRW", "ZFMPJK", "BWPRSP", "PZETES", "GQVZYUKKD", "ARMYBV", "UPMPFS", "RTFIVQQIA", "GPEYRJTTXR", "XFHKXQ", "TLD", "RIP", "XHXYPWXSE", "JRUMJVZCWY", "VRA", "ONZSDX", "RBKCAKAV", "RURSY", "UTZQWFH", "DTM", "DKRY", "FWFFDWM", "WEPWQ", "VLNRFL", "VQEVG", "UWYXSXDZLD", "OFUUGAZP", "NZRIJED", "CRYKSUFMJG", "AADICZQG", "SZRL"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "BMLCVC-CEVTWP-PIR-RBKCAKAV-VNUV";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> cars = {"XWZDAYNOI", "XIGOI", "EAEQAJBI", "XIMFCY", "LTGVQTYNI", "PVMJEQF", "QRR", "GVDLN", "DEI", "JLPSDWRAP", "QBGII", "AQWLJKHB", "LRHLKM", "JTRES", "TDBRCFJY", "PWSCKXJB", "GTJZ", "OPGFSJLBL", "FYIVANYQ", "RCO", "RHBIN", "FTP", "JNUXMFVRVA", "ZAQZRUXGR", "HQKUC", "YFJEOBX", "MIRS", "TFCTLFUC", "FFSLD", "IKVRSLTWEW", "HIRHJ", "ZGATYVDTA", "QRCSUSKV", "KFDE", "AAPZLOWNO", "WFMQVPW", "HUJY", "PNKVH", "DBVEJCRZ", "UGQ", "EFRYI", "FKJTW", "YDJHE", "TNCCF", "PXCVY", "TPKBTVBF", "AMDJAPNF", "EUMV", "YDVACTH", "NKRLFPFHZ"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "DEI-INYTQVGTL-LBLJSFGPO-OCR-RGXURZQAZ";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> cars = {"SOPMBAX", "NLIOEBV", "AFQ", "ZLDYZJBX", "KAYLRPIT", "GWJFHASYR", "EWXLLQZ", "DWPZ", "FCAANZNZGV", "CQWRYSN", "KLSY", "KQPCM", "OCQS", "CBQPJSUTE", "CTAHNMU", "ZPZ", "KNRRSWKQH", "WNXLQDVDSX", "YIMQPFUNBU", "UGL", "HDRDNIHPQP", "QTRWWUGDR", "QTAM", "VZTHXNW", "UBHE", "DVXYQVQTJK", "NDQRPVIQM", "HFBAZHZ", "UQTXD", "XSMIXOSUV", "ABOTMU", "IXRAD", "MAVUAGF", "KUIOISLHG", "FFDVDMPI", "FASG", "AJGXHYZINX", "RPJWKJGL", "BWPTP", "ZROYKABNWK", "SYCWSMY", "ZMYF", "IXRBJA", "WOA", "NFPLCHWDB", "XTFGCXR", "UYNXTCRNTI", "RFZLKLIT", "ZBXJXSTMP", "URTJOX"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "FASG-GHLSIOIUK-KQPCM-MQIVPRQDN-NLIOEBV-VZTHXNW-WNXLQDVDSX-XBJZYDLZ-ZPZ";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> cars = {"MXBI", "NZZZ", "OMLZBAZRCA", "BYHDZQTWM", "JVHDLAZV", "JTOG", "CZQBSR", "HHHMUPADVZ", "QLHRXPD", "CVBJRBJWXU", "LWZWSCDKG", "LXE", "KCOC", "SIKGA", "KJUFLXJMH", "VCBYMYLOG", "REPCIYLMBX", "HIKNZPGZIV", "IKECOXG", "DLMZLZDP", "ZTKPJTYSUK", "FDBTSGJBYW", "BGAMRMK", "TCIFDPVM", "DFIYB", "NJJRBB", "GWEQMGBNXI", "ZII", "QGZYBZK", "ILRCBVTDZ", "PDJ", "WLUMXPNBNO", "WWUAXU", "JXW", "UOBHHIX", "QRMVM", "APS", "FKJQ", "LPWP", "UOFDQOKTFP", "UHXSAL", "FVOCCQFU", "XFVOS", "MHOT", "BNUXMB", "TSB", "JZCPK", "BEAGGS", "DHZKFXFG", "OPD"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "BMXUNB-BYIFD-DHZKFXFG-GKDCSWZWL-LPWP-PFTKOQDFOU-UOBHHIX";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> cars = {"VUYQWKM", "XZPR", "RIOSBOWJ", "MKACFLVBRX", "NCLQMG", "FGCSTUXTSD", "UWE", "AWIFLB", "EJBA", "HGL", "DIMX", "EOBLKIDQHE", "NNZT", "CKP", "BZRJHCVLPX", "FYFLUA", "SESK", "SLRV", "PZEI", "CMQSQSWTJ", "OMSZVDBRT", "HEA", "UCZ", "TDKEBKANMC", "UUQJD", "TMN", "OHLOME", "UAIW", "QXXOET", "BSSMTZN", "VKTVN", "BNDB", "FMPDY", "JVQAVMUDEX", "QDOOHYEXMP", "YTXAKO", "VGXHZ", "PTMSMMB", "AIBLAZ", "PUFW", "YIZGR", "OWYMVIMBL", "LSK", "HHKVD", "ENYPLGDT", "DODK", "AEHKXMY", "GOIGYPX", "XII", "TZGKXRS"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AWIFLB-BDNB-BMMSMTP-PMXEYHOODQ-QXXOET";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> cars = {"ZSO", "ZTIRYBQVJ", "BIVKXQHK", "IDDU", "DGEEDCXUG", "ALSVPEJZTL", "OFNYHRG", "YPQ", "FWGFE", "QTJUWNMYI", "WMDXCU", "JGTOTJ", "EMGOZJFHPN", "GUYPJ", "BECKUYIMB", "AMYWCBDLA", "XIACSPOUG", "UNNZPV", "TRSRMPK", "BZUQZXCHTH", "SCFHPL", "AHO", "LAMD", "NMTZ", "EHYDSG", "VJNZYRWTQU", "FMTY", "XTGK", "UFFYM", "QYH", "UNR", "ODEPQQALH", "AIJI", "SWSQXE", "IEGU", "GGRSQPMAK", "BYNHHPSDZR", "MOVKGYWY", "PRAIC", "VFAZU", "PFNBBCYVUU", "PANUMKUI", "GMSU", "KQIWVBCYET", "IRGBYLFM", "BTQY", "NNGIIR", "WLPZTRGIQ", "DHRJNG", "AEVB"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "ALDBCWYMA-AEVB-BECKUYIMB-BYNHHPSDZR-RNU-UCXDMW";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> cars = {"SSZNZGC", "JCSCZFVLKW", "EUXKIRWHVT", "KBTJL", "PQKKSMZWT", "OYUBGZIG", "VWDPMKRFS", "PULBGAVV", "CUIZBIMP", "XOPJ", "IJOGEKCOQH", "TCJ", "EMFTVUOG", "QJYIV", "FAVWVIVFRO", "VYGP", "DXG", "DJJAPYPQ", "WTS", "BUXXXIXP", "SRB", "EMNMLAKA", "DRJSS", "QEDJR", "OBRIPRSX", "CQGSLKT", "ECCIO", "QMOBCMPPUQ", "CPJPTT", "QWQ", "YJPVRNU", "ADRKDBDJB", "LVWVEA", "QCUS", "DCDRD", "PBZTHY", "MKVEOJI", "LNZKUYZC", "UYDNJADWFZ", "TVDAEMRCE", "XLUDYVMG", "BNNWTGGSL", "BXZSYWD", "HZLNE", "GATWKXA", "EUSZUMLFF", "AUADULUQ", "NWHYZCXJFM", "PTS", "AIY"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "ADRKDBDJB-BXZSYWD-DCDRD-DJJAPYPQ-QMOBCMPPUQ-QWQ-QCUS-SFRKMPDWV";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> cars = {"GPWFHN", "PEOTADJL", "PZU", "ADA", "WJKDELOK", "QVCGSFLMFB", "CFZSV", "DZPYRVDX", "RGPP", "XUVYUOY", "KUKM", "AHUOUJJXDD", "OAWKPOXN", "FFRHJLPX", "MQGHIXP", "WKDNC", "EWISG", "RIZDMYVGC", "NFFMWHDI", "RTATAVE", "TPLMVEDNL", "TMSZPLDY", "OMWZZDYEKW", "QPPQGYEY", "AZF", "KKKPBJSUG", "PAMCHKHB", "MMTMSNAAD", "RIIMNZAROS", "UOZYNHIJZ", "BXI", "WVXS", "CUE", "NCLMOHEK", "AUGNBUF", "FCICXQGCHF", "VSZIIFATGG", "ZBXBI", "WRXR", "VRNTFKUGZD", "QAQHKCG", "CDQLRAT", "CTKBGSUWHM", "HTFAVILWE", "IZRYTXNH", "WOTVIDCM", "SLEAS", "AEEGOZV", "YGEEWAIMX", "SPBEBBOSN"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "CUE-EWISG-GUSJBPKKK-KUKM-MQGHIXP-PPGR-RIIMNZAROS-SAELS-SXVW";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> cars = {"TMXQAJ", "AOZGEPA", "EMQIPYEN", "LLRJQ", "DWZIUT", "TAPE", "FRKTZHNMLJ", "QFL", "VCCFLXJS", "XTOMST", "LKSLBDNQ", "NXIDF", "YTX", "OMFC", "VIPSBHEQG", "AULJAR", "KNGGWJDM", "URBI", "NDXCH", "DQXJC", "EUWSUOGUS", "NNGBFWM", "WPGDWT", "VVPMFTC", "ESFVUJVW", "HNW", "GWOL", "PSB", "ACRRE", "YVPUC", "TGCHC", "RQKZLOIUMW", "IPQYHKSDC", "AEPDAY", "OGJPDQ", "DGRJ", "ZFJGFNK", "JAQD", "BAR", "EBYLJLUOG", "FXGZMAY", "UGI", "NOSVT", "SURYGKUX", "EVJIRTRVC", "FANWBQKO", "FKH", "MUKLUJE", "ULDQUUKH", "FKGI"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AOZGEPA-ACRRE-EJULKUM-MWFBGNN-NOSVT-TSMOTX-XTY";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> cars = {"SYHLI", "CPRIXHUT", "ABRTZRE", "LRTWFHPH", "UBWNK", "KHD", "TJMV", "RGN", "YLYLMWF", "QLMWZUMRXE", "GYU", "GYMI", "NYUAPL", "BRBHDODBS", "WBHIXA", "CSMSSS", "LCZ", "XNDPOQANF", "DOSEKPY", "OOPFN", "RTLP", "WOTU", "ROTJ", "OABDFFXMC", "APWZLGAT", "YQZLNVP", "DOJAHSOYM", "ABMLTYWKFH", "JOZSF", "BSUCHYBJQ", "DNDP", "BTVGSI", "EEDHLC", "LCTTI", "ZNY", "VNWENKEDFT", "XWUGFMDFQV", "VMSTN", "YEGW", "NSLC", "MPU", "KZBCOYUX", "SXPHID", "SDLVJ", "DVJPOV", "LXTRCNP", "ACRWKEUE", "XHR", "QFLGZ", "ZOJLYUSDB"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "ABMLTYWKFH-HPHFWTRL-LPAUYN-NGR-RHX";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> cars = {"GDDFRSAK", "QFA", "RGXHYIAM", "XWAEQ", "EOWLWTHI", "GZSCVOA", "AGFWXJJVCM", "BMF", "CTORI", "MITGYXG", "JMTA", "HRQBYJQXH", "VOTPQNFXF", "ZMBB", "PYXSAPODS", "LQWIXMAY", "ACYEWRZBUV", "CMVNFQKV", "JIVZPD", "JAPATGY", "AEJSGIN", "YQFOFK", "GJEZ", "BUOPRYI", "FPE", "ZHCX", "IZTTZN", "BUYYNOYVYU", "LSBOFFIDB", "DAHDOMGTB", "IKSZYPXR", "NKNOOJ", "HRDM", "ZGQV", "TNDKO", "VTKTG", "EDYO", "UKRSCV", "PWBKLEQK", "XRGZTGCW", "QPAESDLR", "AVO", "NFK", "SKIAPHEEL", "LVAAUSU", "LDEFA", "TIMD", "BWVTZOSB", "GZGTXV", "BKWN"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "BSOZTVWB-BDIFFOBSL-LVAAUSU-UKRSCV-VQGZ";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> cars = {"XKZNIRF", "MIQEVWXB", "VFAYFPV", "XEM", "FWLEDA", "MSFXV", "FVB", "FGIQMTSCWD", "ECFJ", "FHYTO", "FVHVQPJXVZ", "XSI", "PWGUPLTFVA", "RHJ", "WTSKPHXZA", "ZHQ", "GBYI", "DTRZGUK", "WWZT", "STL", "JNJAULWU", "HIILGBJ", "MKGB", "XPJTANY", "IVSFVAVZ", "JEXGMZ", "JZI", "YQBHDC", "YMYJUII", "NHQPER", "ACCS", "LEXCJSJB", "KPVGOPAZE", "YNOWGZWSOQ", "THSLHRGYC", "LRVTLPP", "JFZZCABOLS", "BLWQ", "MXJU", "PRPU", "BCPLTJGJFW", "MCUSIEI", "ICCL", "CNLHFQN", "ANVZ", "DNPVO", "MEMZHAH", "BLZJYSOWAI", "UFFBOLEB", "NVQJB"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "BLZJYSOWAI-ICCL-LRVTLPP-PRPU";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> cars = {"XXQJUGPOKJ", "VLCYES", "QESJOSQ", "UDOMRK", "QCPCXJOQ", "ZBXU", "RKGBMWCIQA", "INILWFDT", "GMEEVK", "IEZAEXNPND", "YESWBKJF", "SIE", "JCN", "EQMA", "RJCIZ", "DLEYOW", "MBVGY", "BIGQDBYWQQ", "HWDGSOPE", "KBG", "QOEMMQ", "QZSOTU", "AUNKP", "SWGSHOT", "ZDR", "IZQBQACCUW", "RXNHGFD", "IEHVHDZX", "LTBMA", "EFU", "VASLXBUH", "VIQVCPH", "YIMDHJDKII", "MHBYLJUC", "FWJ", "JACRF", "APWUMASWXF", "GIZNYMVL", "ILPKKEUZ", "WCVVDTLZY", "RVDRGBAZM", "FKZMAZ", "TEIUQJHAR", "NXFIOZJKVG", "WWEAZHH", "OWXOF", "IYV", "XEQMZBC", "VKM", "KOTBBTQJDF"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "BIGQDBYWQQ-QCPCXJOQ-QESJOSQ-QMMEOQ-QZSOTU-UXBZ";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> cars = {"WAQ", "WZWSUJCV", "TQXNFMWBOB", "XZGZ", "VWMH", "FFIQJICX", "VHQS", "HOPLEJ", "DFNYLQOK", "EDRU", "WFCVKB", "BVMXE", "BTOZTJ", "HHPP", "AQIN", "AXJXJMDNAN", "BBUWJYDBOS", "MWOT", "MHQYTCCU", "XDPRFH", "MKMEFKJCC", "WKSKSGHA", "KGQZDK", "VNT", "RIU", "PFMOZU", "GYUOAWINYZ", "PEQ", "VSZOJ", "YWUJGW", "DNYROVHLO", "IGYF", "CZDW", "WLHPQGCWPX", "BZDHQ", "TIVMKYGQ", "WZLZT", "PFP", "YTXVSWO", "KUPMWNIPY", "YDUGS", "MQAZAM", "UQCUUJLZFN", "IZH", "QBFNICJR", "MPOJB", "UPRALJMP", "WGPTW", "LZJHAQ", "BQYT"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "HHPP-PFP-PEQ-QGYKMVIT-TNV-VCJUSWZW-WGPTW-WLHPQGCWPX-XZGZ";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> cars = {"BXUQDXQ", "FUAOW", "EAWCBI", "WMDLV", "FORTLA", "JIGTIOLKZ", "EASXWTJEX", "GPZCTF", "CRR", "NWIYGTZOPP", "FEDGLAYTW", "WGUV", "NVHDEYCV", "TQUERPLWJF", "DQYA", "MKZQEK", "OVVYXTSBW", "ZYPDLZKSW", "RMZ", "PRX", "VCLPC", "PFKLN", "QDJMART", "EDLSRNJQ", "YGZRU", "ECJIF", "OLL", "UWZZGDWD", "DOHRUIFKPD", "DDKGAGBYYN", "SSFGMK", "HDSFVL", "NNTY", "MDDNXQJY", "TSNXVEX", "YDQXDMP", "UBYGZIRQUI", "FFU", "RPLXZ", "WKGXZAAK", "SBURH", "YUK", "NBF", "LKNHOHKK", "HHNZCL", "SDLXFEZH", "GSKAPVCIL", "VKCUBMY", "CUJUM", "AFSZ"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "ALTROF-FTCZPG-GSKAPVCIL-LLO-OVVYXTSBW-WSKZLDPYZ";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> cars = {"YSWU", "DTIAHVDK", "BKH", "MDMMKA", "KMRG", "SAMDBSFVX", "YNXUHUFY", "CRKIPMEGXD", "SXITUGRTND", "WXCERWIGRZ", "GUXWWPMWLE", "FTFYZX", "VKVAUYMSX", "DBXZ", "QPBMF", "RNIUUCQOU", "XLBVJHR", "EIGE", "HDWS", "HUBLVXQUN", "HFJBMOX", "NDHQ", "STRZQYGDCU", "HNAMOGLQBV", "VQNW", "GOQUIBHMZE", "PNQXNM", "QODN", "ICYNNJXYC", "QWJYXNVS", "HFDWVBAZRV", "OIN", "NUCGLCSPC", "VXN", "JQYJSGIB", "BDYOES", "EBISIYPQ", "YVM", "GCAOO", "VAEDRWC", "DQXNIZMZ", "SAPUTUOP", "LBPMCQKA", "RPXYTT", "NIGWV", "EHYSJDW", "QDKFVLE", "YEASCQBZB", "VOP", "MDJGGGNPS"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "BKH-HUBLVXQUN-NDHQ-QWJYXNVS-STRZQYGDCU-UWSY-YFUHUXNY";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> cars = {"NDCA", "NBBCOMC", "JTKZSGXWH", "AMMV", "DSG", "NYEWMTCFE", "HIBQLESMJC", "EWVUP", "ZXWDJZQL", "ZHZLJM", "TDPPTPL", "UBPRPZQPFY", "MSPODZNNER", "RIEVEEISE", "VTIDN", "MIKOJLPX", "IUBDGTPMXP", "PNCRZ", "SSBIEMYRV", "CWAVOWM", "FBIB", "LXKYV", "QTIO", "NAK", "JGAT", "AWVJHTIO", "IRTTFO", "VVNJEW", "OWPXHZKG", "TVBBBAEW", "FLVMP", "TQATGHC", "EABEJXO", "HDTR", "ZWQ", "OLT", "SYKFXEVZGH", "NYWO", "NSUCM", "KYDXA", "ODTFOB", "XPWVIR", "XTFRR", "XFRQ", "THREEVKJ", "FADSHKB", "IKCTJAI", "TDVQTFSPQL", "ZUGCTD", "VYTWTD"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AXDYK-KAN-NYWO-OITQ-QRFX";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> cars = {"WLXDYPZW", "WRCQT", "QXELEQYWTS", "QMAK", "OTPCS", "UVYI", "TZYUNR", "ELVAH", "TTZ", "JCMLKELZFI", "NUMVLMGE", "QGZHLAD", "YZXTBTLC", "CAV", "ICVTTALXF", "JNVZLJA", "AKNKSTP", "MJR", "VACWS", "LCUJXBA", "XITK", "BLKEX", "GPKX", "CRKLGQ", "XRMZ", "ZLN", "TWRCPXQ", "ZGDNCDJRMH", "ZXPPJPHOP", "BOCBD", "NRSMNPEJ", "KLXA", "YKNRJKZ", "JMTTB", "JGSYG", "MRRD", "DDDHSU", "UERISUP", "NIPFOD", "HCC", "SITPMKMIY", "VBXWBHS", "NQDVHZSQSE", "TRAPYGMMWV", "JZPRX", "QIJNH", "PZVNEXG", "TZUSJKH", "SZBTU", "DPWLD"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "BOCBD-DLWPD-DRRM-MJR-RNUYZT-TQCRW-WLXDYPZW";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> cars = {"AWLQGJPG", "HKZJK", "HHV", "TBWWKR", "EFZQ", "XVWYAK", "SVFCEP", "MHPV", "XLHZXNQAPA", "RRLAOYIK", "EGKYPEXR", "XZBPEBXTBZ", "XMSR", "UBAHQBQQH", "QHPNUEXN", "IMTOEDK", "UHZKSZ", "KPOVBIZR", "COPWKOPQD", "BRNBISGR", "JIAMPYXLH", "NWOKGVF", "VYB", "ESLHDFAPN", "FNHB", "HDVWHUZQXF", "DHH", "CHWFCSMLYQ", "IPXTNL", "HVWYW", "XWOZ", "EIZDSNWA", "CIXYKCCH", "EYHRG", "AAMEOHLS", "SHOZMSUDH", "TCDGQQGIA", "JHBMMHJ", "HRNDBUUXW", "JOGYE", "CDHOYLFSO", "DRFTVNB", "KLJDQVJFRT", "KDUE", "XMK", "QLIXA", "PWWMJASOB", "UZKMHNVIGA", "MRDHDVYCE", "VRGCEHUNCE"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "BHNF-FXQZUHWVDH-HKZJK-KIYOALRR-RSMX-XWOZ";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> cars = {"GYFCAVIGOX", "SPLKMGJXK", "SVHECRXTF", "UPRSKG", "RXNDUYI", "GPIKDIAS", "JNU", "BPENRRRJKT", "XNTYQF", "YYQKJL", "FBKZVFHIY", "JJVQOB", "XBH", "TUO", "TRWQRGWJZZ", "GXVBPAZ", "ZUXGWAOME", "NIPASBOT", "DMSZ", "XKAWEXOUHH", "HTSMRQ", "EMTNM", "TTPBCGX", "YZLOB", "STWMXSC", "QHPTRWTC", "CHLLS", "LTUXIAGLR", "LJYOUAGNK", "KVVFCZG", "RIZBJ", "ODBURRCMKI", "BTVNMBRYZ", "SVUSHZ", "CZWG", "TOYPH", "HELQS", "REFW", "EJKDLP", "BIJAQ", "JPJBYLFMWS", "PJQRXUPM", "GSKHEREU", "VXL", "QNTJV", "FQWWGE", "APGKKKK", "HMAQWCJEDB", "GXXX", "RDQ"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "CZWG-GZCFVVK-KNGAUOYJL-LTUXIAGLR-REFW";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> cars = {"YHIQOHOSG", "HPNJTKOOR", "XGBZK", "QJY", "TDO", "TGKTXF", "RQPHVWMJYE", "ZFAIXD", "UCYETNRUS", "IAUHJNKTOM", "YJNITZ", "DITKEI", "APRQFD", "BXC", "SJYV", "PFMCMBHY", "QFVMTAUQR", "GBPW", "YINNMJUKSP", "YZUBDQP", "ABSQTCX", "BETNIKFAQO", "JYBD", "OYVHQYL", "STSD", "NJQGG", "GMSBZBXNLK", "XITRKOKEI", "HJNCVN", "ZJLPU", "RHZTRDUKL", "YQDYSGP", "ZILD", "YTSHOIC", "ATHLMXD", "RGF", "IUTSNIXTX", "CHFJGV", "CTSP", "XLSXUEAZ", "SQQODLA", "KTU", "NAAJTFW", "NMTYVAC", "DENXCEVQN", "SRJQDD", "EUGZJRUHI", "GDOEWSN", "GTEUMOQ", "BWIDAPSO"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "APRQFD-DDQJRS-SURNTEYCU-UPLJZ";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> cars = {"EWVGDEOWAU", "PDGNRVCHBV", "UMXXTSUCCN", "MYHIN", "PLKKWGEWJM", "MNLA", "VRTLSHLLO", "CAY", "UFFSRLK", "BEG", "OZNLRZ", "FXYS", "MCM", "ZGYBRG", "MIXPCYI", "TSA", "VOCXZQ", "VQPM", "UXPLOUWF", "WJSEM", "FCJEAVHPHZ", "WGCNUZWUPO", "QKAPZRWWN", "AGDTOSIXWX", "ORMF", "KSIXWNJRHZ", "OERSXXRMIQ", "CMOWNOH", "VQDDF", "YIDKS", "ITPE", "LRKVFPU", "XNVMSB", "ABOOELTW", "GZKTWQRZ", "VSMVXHNT", "YRQUCFFD", "PQXTR", "IORJXPE", "QNZGBCW", "QJOGZLN", "XPUUTBRSQB", "UVVUXXVP", "WZXSHCWGE", "GFHGMOYXL", "RKWL", "PMRSRYXY", "NTC", "JSQMCJTXD", "VQHXIMGJQD"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "EPTI-IYCPXIM-MCM-MYHIN-NLZGOJQ-QNZGBCW";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> cars = {"ZKSODEUV", "FQVCHEKP", "YMCBA", "IYVDRN", "OMH", "EYJQVJ", "YRTZPSFQ", "FKCERD", "XZBKX", "JBTU", "SAKQ", "ZTGTXYK", "QAIHNIMUJ", "KGAJTR", "WVCSNHJDDJ", "CYPMOO", "KRCJI", "QFPOL", "XNDRTF", "HVAVFUAW", "VIGTLCUXCI", "SLQ", "NSSXG", "KACU", "LCCFUVYJ", "NYRC", "YYGEOMVCLY", "MMGWCWEWD", "NEIL", "OHDDRSYNJP", "QDSYPOYSD", "OZWTYANEH", "VSJPYQE", "GLZ", "XHKVJ", "ERRPOLLKG", "BCJ", "PEIUBNXXDC", "IMSGTF", "JINGXTTZPE", "SLMTSE", "UXXFPQHODG", "YCEJEG", "YNRMXOZ", "KYYOILS", "GARROUHRBS", "DFX", "JVTYXOZMAT", "SJSCI", "BYFN"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "BCJ-JYVUFCCL-LOPFQ-QFSPZTRY-YLCVMOEGYY-YNRMXOZ";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> cars = {"LMY", "DCZRQWF", "YKV", "KJCNBMEFVW", "SBZANPLO", "NKTTUOSQ", "VADK", "IVDEFDSM", "JCDOFRRY", "AYBFNCTVCM", "VEPRPFODQH", "RDJCKKSIN", "YZBPE", "OVXDGCGVRM", "UFWOYLYS", "XVD", "XLY", "PNYENVBHYE", "CSIXY", "PDFJDJ", "RUJKFNO", "XPQORKKU", "NGPLYQ", "KJHD", "GETS", "IFAKKTQ", "PZFHPG", "MWUJALYJ", "MMS", "BGNJ", "FCZBDEZGA", "DOMKZY", "EPNYDY", "ZPJFSJR", "PCQPV", "ZQALKR", "GBUF", "UIWHFXD", "AAQWJ", "HVGJFSBZ", "APILDEZTV", "QSHIFM", "GSCX", "SMLNB", "SFI", "PILA", "NMZDAT", "TIMIXS", "QRAW", "HKNRLTAJV"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AAQWJ-JYLAJUWM-MRVGCGDXVO-OLPNAZBS-SYLYOWFU-UKKROQPX-XLY";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> cars = {"SLYQYAWJHV", "VWQIZDNP", "TKURZNRMOO", "PTQP", "UFIYK", "KESXGW", "SBIREOX", "QISVYOQ", "CBATMFC", "KJNV", "IYV", "FIMT", "QUXUSXVDVI", "CQLXK", "QHVJQZBWZC", "EYPZXC", "KJTWANSFEO", "DPHQOZACCB", "ZNEMWMXAW", "QFSGYCEX", "SCTQGSRODL", "VPARI", "CIBWWWE", "VBYNDNO", "XDJZ", "KRSUDIT", "BRCPHKA", "TTWFYUVXU", "MTXNBGNUTU", "ZFHZI", "QUUJBD", "OUYFT", "TZAQMZWHO", "OEYQC", "VVCKWWM", "HOJRV", "QLBS", "NFA", "LNCZVHU", "AWGECNBOA", "QRFHVZAZX", "HRGYEVOOX", "GCEJW", "IBAAPQE", "BTLB", "IGRLUMUQLC", "LEC", "XENVTK", "NJG", "SGM"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AOBNCEGWA-AKHPCRB-BLTB-BCCAZOQHPD-DBJUUQ-QISVYOQ-QLBS-SBIREOX-XDJZ";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> cars = {"IWW", "KISVRSCFC", "HZXGJBXLW", "KIMNPX", "LKNNSTZOHB", "XDVJDQH", "OBBEBX", "TOQIGDS", "TNLVURTD", "FCVXNFD", "WFSQMJHC", "YOCAVIG", "BIUIKZWYM", "VMVAPKZSLS", "UFGDNYKOER", "JKYZ", "BYTXRDQR", "ZOP", "YVB", "ATS", "QEEDPL", "NGQUW", "AGUCSCJ", "ASC", "DBW", "GVTKAELU", "DABQZTQ", "QZHOILIXW", "IBSGDWWP", "WWVPJLLP", "ZQVLFVLN", "MLJZNX", "QJEVYAZO", "UKELX", "STJFMZIV", "JORSAM", "NGP", "JVNRMSVUKC", "VKCRQR", "EJXHMX", "RQMSPXFPPI", "QOMPKAKLF", "ASPGFCCPQ", "JAFP", "ONDQFFOX", "PWWX", "KMEWSIYKF", "NZKP", "LHRIR", "QFMQ"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "ASC-CKUVSMRNVJ-JAFP-PLLJPVWW";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> cars = {"ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZAZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ", "ZZZZZZZZZZ"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZAZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ-ZZZZZZZZZZ";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> cars = {"ABBA", "ABQQQQQQBA", "ABBAD", "ABBA", "ABBA", "ABBA", "ABBA", "ABBA", "ABBA", "ABBA", "ABBA", "ABBA", "FABBA", "ABBA", "ABBA", "ABFBA", "ABGGBA", "ABHHHHHBA", "ABBA", "ABBA", "ABBA", "ABBA", "ABBA", "ABPPPPBA", "ABBA", "ABBA", "ABBAC", "ABBA", "ABBA", "ABBA", "ABBA", "DABBA", "ABBA", "ABBA", "ABBA", "ABBA", "ABBA", "ABBAF", "ABBA", "ABBA", "ABDDDBA", "ABBA", "ABBA", "ABBA", "ABGGGGBA", "ABBA", "ABBA", "ABBA", "ABNNNNBA", "ABBAC"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABBA-ABDDDBA-ABFBA-ABGGBA-ABGGGGBA-ABHHHHHBA-ABNNNNBA-ABPPPPBA-ABQQQQQQBA-ABBAC";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> cars = {"AAA", "AAAA", "AAA", "AAA"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AAA-AAA-AAA-AAAA";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> cars = {"AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> cars = {"ACBA"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCA";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> cars = {"ZEAZ", "ZEZ", "ZEND", "YOT", "TOO", "OOOOO", "OOO", "OOO", "ZOZ"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "OOO-OOO-OOOOO-OOT-TOY";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> cars = {"ACBA", "AGEA", "ADFA", "AEDA", "ACCA", "AGDA", "AGFA", "CCD", "AGAA", "ACAA", "ADDA", "AADA", "AEEA", "AEAA", "ABFA", "AEFA", "BBC", "AAAA", "AFAA", "ADEA", "ADCA", "ACDA", "ADAA", "ABCA", "AGBA", "AECA", "AAB", "AFBA", "AFDA", "AAEA", "AAFA", "ABEA", "ABDA", "AFCA", "ACEA", "AFFA", "AGCA", "AABA", "ABBA", "AEBA", "ADBA", "ACFA", "AACA", "AFEA", "AAAAAAAAA", "ABAA"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAA-AAAAAAAAA-AABA-AABA-AACA-AACA-AADA-AADA-AAEA-AAEA-AAFA-AAFA-AAGA-ABBA-ABCA-ABCA-ABDA-ABDA-ABEA-ABEA-ABFA-ABFA-ABGA-ACCA-ACDA-ACDA-ACEA-ACEA-ACFA-ACFA-ACGA-ADDA-ADEA-ADEA-ADFA-ADFA-ADGA-AEEA-AEFA-AEFA-AEGA-AFFA-AFGA-AAB-BBC-CCD";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> cars = {"HWV", "SNC", "EPW", "FXA", "DFX", "WYP", "VID", "ADZ", "HZZ", "XAH", "PNC", "NYX", "BXR", "YKF", "MEF", "KSE", "AMI", "VPY", "ALE", "LVO", "CUZ", "NER", "RSJ", "YZR", "MMP", "PSG", "QAS", "NYM", "UXH", "KTP", "HDW", "OGR", "NFN", "TTD", "THK", "GJZ", "ETP", "QRP", "BQY", "QPF", "YVH", "VMC", "BFH", "TGS", "LIJ", "ZJJ", "TOA", "BAR", "ETL", "YBY"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AXF-FEM-MYN-NFN-NER-RZY-YBY";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> cars = {"AAB", "BDCB"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AAB-BCDB";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> cars = {"AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAA", "AAAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAA", "AAAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAA", "AAAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAA", "AAAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAA", "AAAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAA", "AAAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAA", "AAAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAAA", "AAAAAAAA", "AAAAAAAAAA", "AAAAAAAAA", "AAAAAA", "AAA"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AAA-AAAAAA-AAAAAAAA-AAAAAAAA-AAAAAAAA-AAAAAAAA-AAAAAAAA-AAAAAAAA-AAAAAAAA-AAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> cars = {"BAD", "CZD", "DEF", "AYB", "AZC"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AYB-BAD-DEF";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> cars = {"ZOOZ", "ZOZ"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "ZOOZ-ZOZ";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> cars = {"AAA", "AAAA", "AAA", "AAA", "AAA", "AAAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAAA", "AAA", "AAA", "AAA", "AAAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAAA", "AAA", "AAA", "AAA", "AAAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAAA", "AAA", "AAA", "AAA", "AAAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAAA", "AAA", "AAA", "AAA", "AAAA", "AAA", "AAA", "AAA", "AAA"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAAA-AAAA-AAAA-AAAA-AAAA-AAAA-AAAA-AAAA-AAAA-AAAA";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> cars = {"ABABABAB", "BABABABA", "ABAB", "BABA", "ABABABAB", "BABABABA", "ABABABABA", "BABABABAB", "ABABABAB", "BABABABA", "ABABABAB", "BABABABA", "ABAB", "BABA", "ABABABAB", "BABABABA", "ABABABABA", "BABABABAB", "ABABABAB", "BABABABA", "ABABABAB", "BABABABA", "ABAB", "BABA", "ABABABAB", "BABABABA", "ABABABABA", "BABABABAB", "ABABABAB", "BABABABA", "ABABABAB", "BABABABA", "ABAB", "BABA", "ABABABAB", "BABABABA", "ABABABABA", "BABABABAB", "ABABABAB", "BABABABA", "ABABABAB", "BABABABA", "ABAB", "BABA", "ABABABAB", "BABABABA", "ABABABABA", "BABABABAB", "ABABABAB", "BABABABA"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "ABABABABA-ABABABABA-ABABABABA-ABABABABA-ABABABABA-ABAB-BABABABAB-BABABABAB-BABABABAB-BABABABAB-BABABABAB";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> cars = {"AAA", "ABA", "ACA", "ADA", "AEA", "AAA", "ABA", "ACA", "ADA", "AEA", "AAA", "ABA", "ACA", "ADA", "AEA", "AAA", "ABA", "ACA", "ADA", "AEA", "AAA", "ABA", "ACA", "ADA", "AEA", "AAA", "ABA", "ACA", "ADA", "AEA", "AAA", "ABA", "ACA", "ADA", "AEA", "AAA", "ABA", "ACA", "ADA", "AEA", "AAA", "ABA", "ACA", "ADA", "AEA", "AAA", "ABA", "ACA", "ADA", "AEA"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-ABA-ABA-ABA-ABA-ABA-ABA-ABA-ABA-ABA-ABA-ACA-ACA-ACA-ACA-ACA-ACA-ACA-ACA-ACA-ACA-ADA-ADA-ADA-ADA-ADA-ADA-ADA-ADA-ADA-ADA-AEA-AEA-AEA-AEA-AEA-AEA-AEA-AEA-AEA-AEA";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> cars = {"CCCCC", "BXXXA", "AEEEC"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AEEEC-CCCCC";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> cars = {"ZZZ", "AAZ"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AAZ-ZZZ";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> cars = {"AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> cars = {"AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA", "AAAAAAAAAA"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA-AAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> cars = {"DAS", "SAD", "SSD", "DDS", "ASDA", "ADAD", "SDQE", "FWFF", "POK", "OPK", "OPK", "OKP", "IOH", "SDF", "EWF", "WERF", "WEF", "WSDSDF", "SDF", "FFF", "YTF", "YTFF", "YTFFTY", "YTF", "YTFTYD", "RTDS", "TRDUTR", "UTRD", "UTRDUTRE", "UYTF", "UYTFUTRS", "TRDYTR", "DYTR", "YTDRYT", "YTRD", "YTRD", "YESRE", "TRES", "HTR", "YTRE", "YTR", "YTRD", "TYF", "UYT", "YTRD", "TRD", "TDRY", "RTRD", "YRD", "YTRD"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "ADSA-ADAD-DRTR-RTDS-SERT-TDRY-YTFFTY";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> cars = {"ABC", "CZZD", "CXX"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "ABC-CXX";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> cars = {"AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAA", "AAABB"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAA-AAABB";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> cars = {"AAA", "ZOZOZ", "CAAA", "AAB", "JZH", "AZZZA", "BZB", "BYC", "CCC", "CAC", "CACAC", "CZF", "CZD", "DZE", "FZH", "ZAZ", "ZOZ", "UZV", "TZV", "VZZ", "ZZZZZ", "JZK", "KZL", "JZL", "LZM", "HZG", "FZG", "HZI", "IZJ", "MZN", "LZN", "NZO", "OZP", "NZP", "PZQ", "QZR", "PZR", "RZS", "SZT", "RZT", "TZU"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AAA-AZZZA-AAB-BZB-BYC-CAC-CACAC-CCC-CZF-FZG-GZH-HZI-IZJ-JZK-KZL-LZM-MZN-NZO-OZP-PZQ-QZR-RZS-SZT-TZU-UZV-VZZ-ZAZ-ZOZ-ZOZOZ-ZZZZZ";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> cars = {"AAB", "AAC", "AAD", "AAE", "AAF", "AAG", "AAH", "AAI", "AAJ", "BAC", "BAD", "BAE", "BAF", "BAG", "BAH", "BAI", "BAJ", "CAD", "CAE", "CAF", "CAG", "CAH", "CAI", "CAJ", "DAE", "DAF", "DAG", "DAH", "DAI", "DAJ", "EAF", "EAG", "EAH", "EAI", "EAJ", "FAG", "FAH", "FAI", "FAJ", "GAH", "GAI", "GAJ", "HAI", "HAJ", "IAJ"};
    WordTrain* pObj = new WordTrain();
    clock_t start = clock();
    string result = pObj->hookUp(cars);
    clock_t end = clock();
    delete pObj;
    string expected = "AAB-BAC-CAD-DAE-EAF-FAG-GAH-HAI-IAJ";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7459080&rd=7222&pm=875
********************************************************************************
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
#include <queue>
 
using namespace std;
 
typedef long long LL;
typedef vector <string> vs;
typedef vector <int> vi;
typedef vector <LL> vll;
typedef vector <double> vd;
typedef pair <int,int> pii;
typedef map <int,int> mii;
typedef map <string,int> msi;
typedef map <string,string> mss;
 
class WordTrain {
public:
  string hookUp(vector <string>);
};
 
struct tt
{
  string s;
  char a, b;  
};
bool operator<(const tt& a, const tt& b)
{
  if (a.a!=b.a) return a.a < b.a;
  if (a.b!=b.b) return a.b < b.b;
  return a.s < b.s;
}
 
int n;
vs car;
tt t[100];
int len[100];
int prev[100];
 
 
string WordTrain::hookUp(vector <string> cars) {
  car = cars;
  n = car.size();  
  int le;
  int i,j;
  string tmp;
  for (i=0; i<n; i++)
  {
    t[i].s = car[i];
    le = t[i].s.length();
    
    tmp = t[i].s;
    reverse(tmp.begin(), tmp.end());
    
    if (t[i].s[0] > tmp[0] || (t[i].s[0]==tmp[0] && tmp<t[i].s))
    {
      t[i].s = tmp;
    }
    t[i].a = t[i].s[0];
    t[i].b = t[i].s[le-1];
  }
  sort(t,t+n);
  
  memset(prev,-1,sizeof(prev));
  for (i=n-1; i>=0; i--) len[i] = 1;
  for (i=n-2; i>=0; i--)
  {
    for (j=n-1; j>i; j--) if (t[j].a == t[i].b && (len[i]<len[j]+1 || (len[i]==len[j]+1 && t[j].s<t[prev[i]].s))  )
    {
      len[i] = len[j]+1;
      prev[i] = j;
    }
  }
  
  int start=0;
  for (i=1; i<n; i++) if (len[i]>len[start] || (len[i]==len[start] && t[i].s < t[start].s))
  {
    start = i;
  }
  
  string x = t[start].s;
  while (prev[start]!=-1)
  {
     start = prev[start];
     x += "-"+t[start].s;
  }
  
  return x;
}
 
//Powered by [KawigiEdit]

********************************************************************************
*******************************************************************************/