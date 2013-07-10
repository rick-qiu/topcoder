/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7375
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

class YankeeSwap {
public:
    string sequenceOfSwaps(vector<string> preferences);
};

string YankeeSwap::sequenceOfSwaps(vector<string> preferences) {
    string ret;
    return ret;
}


int test0() {
    vector<string> preferences = {"BAC", "ACB", "BCA"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-aa";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> preferences = {"ABC", "BCA", "CAB"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "---";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> preferences = {"AECDBF", "BAEDCF", "DEBACF", "BEDCAF", "CEABDF", "CBDEAF"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-aac-a";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> preferences = {"TSRQPONMLKJIHGFEDCBA", "TSRQPONMLKJIHGFEDCBA", "TSRQPONMLKJIHGFEDCBA", "TSRQPONMLKJIHGFEDCBA", "TSRQPONMLKJIHGFEDCBA", "TSRQPONMLKJIHGFEDCBA", "TSRQPONMLKJIHGFEDCBA", "TSRQPONMLKJIHGFEDCBA", "TSRQPONMLKJIHGFEDCBA", "TSRQPONMLKJIHGFEDCBA", "TSRQPONMLKJIHGFEDCBA", "TSRQPONMLKJIHGFEDCBA", "TSRQPONMLKJIHGFEDCBA", "TSRQPONMLKJIHGFEDCBA", "TSRQPONMLKJIHGFEDCBA", "TSRQPONMLKJIHGFEDCBA", "TSRQPONMLKJIHGFEDCBA", "TSRQPONMLKJIHGFEDCBA", "TSRQPONMLKJIHGFEDCBA", "TSRQPONMLKJIHGFEDCBA"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "--------------------";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> preferences = {"ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST", "ABCDEFGHIJKLMNOPQRST"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "----------jihgfedcba";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> preferences = {"ABCDE", "AEDCB", "EDBAC", "CDEBA", "DAEBC"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-a-cc";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> preferences = {"ABCDEFGHIJKLMNOPQRST", "BCDEFGHIJKLMNOPQRSTA", "BCDEFGHIJKLMNOPQRSTA", "BCDEFGHIJKLMNOPQRSTA", "BCDEFGHIJKLMNOPQRSTA", "BCDEFGHIJKLMNOPQRSTA", "BCDEFGHIJKLMNOPQRSTA", "BCDEFGHIJKLMNOPQRSTA", "BCDEFGHIJKLMNOPQRSTA", "CDEFGHIJKLMNOPQRSTAB", "CDEFGHIJKLMNOPQRSTAB", "CDEFGHIJKLMNOPQRSTAB", "CDEFGHIJKLMNOPQRSTAB", "CDEFGHIJKLMNOPQRSTAB", "DEFGHIJKLMNOPQRSTABC", "DEFGHIJKLMNOPQRSTABC", "DEFGHIJKLMNOPQRSTABC", "FGHIJKLMNOPQRSTABCED", "FGHIJKLMNOPQRSTABCED", "FGHIJKLMNOPQRSTABCED"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "--bbbbcdg--kjhgfedcb";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> preferences = {"DFOKIACGEJPMBHLN", "DANFHMIEBPCGOJKL", "OMENIJPAHBDKLFCG", "FCDHPGINBJEMAOLK", "LGKFOEIABPNHCDMJ", "OHBPNLKIMCAJDGEF", "HMNPOIFCABDKEGJL", "JMHDACKIOFPENBLG", "KMELPAFCBGOIDJNH", "DMFECAJNGOLIHBKP", "CMBKAOHNPDIJGLEF", "LHGEAIKDMNCPFOBJ", "OJNFGIADLCHEPMBK", "GDJOCELHIPAMBNKF", "AKFDGBLNPMHIEJOC", "CEANGHPBJDKIOMLF"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "--bbcebgahi-kbmd";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> preferences = {"AECDFB", "ECDBAF", "DFCBAE", "DFEACB", "FCADBE", "CDBFEA"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "--b-be";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> preferences = {"FALDQHNMOKGRBJPCIE", "LOEGMBJKNRDACHPIQF", "CMKEFDQGJNIRLOHABP", "QIGHJDMCNFABPEORLK", "DNJKEILGCHRMQFAPBO", "PJMQKGRBLINCHDEFAO", "PONEHADMGLJQFRKBCI", "IOPCMFJNGEBHRLDAQK", "HDEQMGBPAIFOKRLNCJ", "REBMQKOPCJAHGFDINL", "JMHGOKNBCLDRFAIPEQ", "ICPKLHERQBJNODAMFG", "FLPQMHCAGIEDRBOJKN", "HNOEDMCRLAKIPQGJBF", "BFCEPHRMLJGQANKDIO", "FOJQLCDINARHEPBMKG", "IDCBMPLOHRFEGNAKJQ", "FMPLDNAKGHORICEQJB"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "----cebgdeeffghhdj";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> preferences = {"FBIAGHDEC", "FIHECADBG", "IABCGEFDH", "DAFEBHGCI", "EGADIHCBF", "BIDCHFAEG", "IHGAFBDCE", "GDIFACEHB", "IBAGHECDF"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "--a--b-g-";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> preferences = {"BDAC", "BDAC", "BDAC", "BCAD"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-aac";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> preferences = {"BCDA", "BCDA", "CDBA", "ABDC"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "---a";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> preferences = {"FEBCAGD", "GFADBCE", "FCDGEBA", "ECBAGFD", "DEGACBF", "ADGCBFE", "DFEGBAC"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-abb-cb";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> preferences = {"EMCJPOLRGKBQDHIAFN", "HFRIJMENDBCPQOALKG", "PDHQOCNLMKGAERFJBI", "ARNOECLFGKPBHMDQJI", "GLOHJEARCQPFIMBNDK", "GQFEHPBCOLNJADRIKM", "NOQMICHDKEBALRJPFG", "BJINFGAPMLDCOHRQKE", "ARHQBKFJPOLMIEGCDN", "GJRIFLOHDNMBQCKEPA", "DNAGKBEFQMCHPLIROJ", "NKPFQRIJOACEBGDHLM", "JFROGNCPMLHDQEKIBA", "LGBJDFEAOKMQPRHNCI", "GODBMQFHKPJNCLIERA", "NPLDJKGAQRBMOECFIH", "OBAJIELHRKPFDQNCGM", "DFRAJOBQCMGLPNKIEH"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "--aa---bbaccacgcgj";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> preferences = {"ADBFEC", "ABFEDC", "FBEACD", "EFCDAB", "CBFDAE", "AFDCBE"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "--aadc";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> preferences = {"DFICBGHAE", "EBACHDIFG", "EFHBIGCAD", "GFBADHEIC", "HIGBDAFEC", "GHABECDFI", "GBDHEAFIC", "FBCEGHAID", "DHFGECBIA"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-aacc--fe";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> preferences = {"CAB", "ABC", "BCA"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-aa";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> preferences = {"A"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> preferences = {"ECAGHDBF", "CGDBFHEA", "EDHCGBAF", "DEGBHFAC", "HFEABCGD", "CGBADFEH", "FGDHCEAB", "FHGDAECB"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "----ce-e";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> preferences = {"CBDA", "BACD", "CBDA", "BACD"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-a-a";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> preferences = {"HEAIBFJGCD", "FIACBEHDJG", "AFGBJCDEIH", "IGEHBDFCJA", "CIFGAEDBJH", "AJBCEGDIFH", "GIJFEADHBC", "HDIGBECFAJ", "GFHCABEDIJ", "CHEIBFADJG"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-aabde--ga";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> preferences = {"SJRELBTANDIKOHGFQMCP", "GHNKJTRDOFSEMPCIQABL", "GQTMHENBJKDLASRFCIPO", "GLBSENJKTOQIFHRCPAMD", "TJMGECRBKHDQNAOFPLIS", "IRMHCQKFPTODESBGJNLA", "OEHFTRCLPBKNMJIDSGAQ", "BKIMFHDQPASECORTLJNG", "KONIPHCTDFSEMGRQJBAL", "FTGKHODNQACPMBSEILJR", "KMQAREOCPIFJGDNTLSBH", "PQCIOBEFGJANMDLTRHSK", "QFGNBMARDTCKOESPLHJI", "RHKPMJILFAGSNTEOCDBQ", "IRMQHNPSFDEJOTALCBKG", "JCLAGROTEBIDKFHMQNPS", "DJOKRPLSQNGMAETBIHFC", "LNPIDROTJAQKMSEBFCHG", "IGCTRSAHDLPFOKENJMQB", "PIJOCTQAGDMFNEHKRSBL"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "--b-dedcbe-ifciemobe";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> preferences = {"EINMALKJHBDFGC", "CMGEAHFJNKLIDB", "CNDLMHGIFEJABK", "NDCIALMKGBFJHE", "KFBMEDNIAHCGJL", "KEDLMBJGFHIANC", "GHKNAJFCBIEMLD", "NAMCLJDFHIBEGK", "FAIKEJNMCBGLDH", "EFJMNGHCLAIBDK", "IMDBHCEAJFNGLK", "KBMHEJDLNAGIFC", "CNFELIADMBKGHJ", "GEMNKDCAJILBFH"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-abcac-gcaccbh";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> preferences = {"FGHIADECB", "EGDHABFCI", "GDCEFHBAI", "BGACEDFIH", "GEHAIBFCD", "CDABIEHFG", "FBCDHIEGA", "IGCBHFEAD", "EAICFHBDG"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "--bcbeebh";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> preferences = {"FDBHMAIELGKNJC", "KGMDJBAFLECNHI", "FKLJCADBEHNGIM", "JMHNICABFKEGDL", "IKFCDNJBLEGAMH", "FDNLJGCKHMBIEA", "MBKJAHDNIGECLF", "KNADLFGBJIMHCE", "AIFMGEBDHKJNCL", "MCDALIJGNKBFHE", "AJHMDLEIFKNCGB", "IJLKBCMDGNHFEA", "EAKFLJBDGMHCIN", "JEMANBDFGICHKL"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "--acacbdcahcja";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> preferences = {"DHCGEIFAMJBKL", "KHFBECDGLJIAM", "MEHGFKABJILCD", "FBGELIDKJHMCA", "FMAICBJEKHGLD", "FEBAKJICMGDHL", "JCAGMFHILDKBE", "CALIMBFKJHEDG", "DKACMJBEFLHIG", "JIHDKLEABCGFM", "GBEDMIHFKCJLA", "EBKLIMJAHFGCD", "HJKLIGBDACMEF"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-abab-cea-cbe";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> preferences = {"BCA", "CBA", "ABC"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-ab";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> preferences = {"AB", "AB"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-a";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> preferences = {"AB", "BA"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "--";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> preferences = {"ABCGIEHDF", "ABGEFCHDI", "FBDGHIAEC", "BGACEFHID", "CADBFGIHE", "FEGBACHDI", "BFIGEHADC", "FEHIDBAGC", "CABDEFIHG"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-aacbbdba";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> preferences = {"FMADCKJIELHBG", "HBGCEMKADIFLJ", "DMCKFELAJIGBH", "FBAEDJKCMGILH", "EBDHALCIFGKMJ", "MFBILDCEJHKAG", "EKLMDAFICGHJB", "AIKHMJBDLCGFE", "KBDAEHJGLMIFC", "GCDMFJIHBLKEA", "EMGIDBCLJFKAH", "CHLEBGKFJDMAI", "LIMACFDEGBJHK"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-a--a-cbacigg";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> preferences = {"CIJHEDFGKLBMA", "LFHKMEBGJIACD", "ECLFHIKJBGMDA", "LIDHJMBCGEKAF", "AFHJKBECLMDIG", "LJHEKMIFBDGCA", "IDMFKGLJBAHCE", "LAIDBCJHGKEMF", "LHJKBGFCMDAEI", "MJDHIFABELCKG", "GHFALBCDJEMKI", "DEMBGHFALJKCI", "FJMICAGHEDBLK"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "--abc-begfbij";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> preferences = {"EJFKIGHBACD", "BIHJFDKCGEA", "EBKFACDJGIH", "EICFKAJDBHG", "EBKJCFHIGAD", "FEAJCIBKHDG", "CHIAGEBFKDJ", "GCDHJEBIFKA", "KHAEJCBFDIG", "GIHFEJDAKBC", "BAICDGHJKFE"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-aba--bgdbi";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> preferences = {"ECBDA", "ECDAB", "ADEBC", "BDACE", "BAEDC"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "--a-b";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> preferences = {"DCAEGFHBI", "EDBHICFAG", "ECFABHDIG", "BCIFADGHE", "IEGHCDBAF", "AFDECHIGB", "FGBIEACDH", "EDBACHIGF", "HEIDABCFG"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "---b-aaee";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> preferences = {"LADMGIFEHJOCBKN", "CJOEGBIFHLAKNDM", "EIBJCDNKGLFOAHM", "FGJAMDIHOBCKNLE", "LONGJMIAFCEDHBK", "DFJKEINOGMHLABC", "MNAIGDEOLKHBJFC", "KAHOIDGJNFCLMBE", "MFEKOBCJGHADINL", "FDEKBMOCLANJGIH", "HDBLIOCMKNFEGAJ", "AKIMGOJHFNLDEBC", "HOJENDLBCKMGIFA", "EHGLNAMDKOBCFJI", "JEKHDAGNMFCBILO"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "--badadffaheiga";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> preferences = {"CEJOAPIMKFGNHDBL", "OPKFCDEGMANHLJIB", "BKGPAHLOCDIEJMNF", "KLNHGAJMIBCOPDFE", "DIJPKGHAENOFBLMC", "MPODNHBLKIAGFECJ", "PDNHAECMFOJIBKLG", "PNFLJOGDAMHBKICE", "OGDEPFHAJNICBMLK", "OFIKGDENLCHABPJM", "FAJPHGDCENOLIMBK", "LFCNHMADOIEBPGJK", "MJIFDCPKOLGHBENA", "FKOGNAIHLPMECBDJ", "CBNHLIJKFDGPAMOE", "BCLIJDKFEHNPGAOM"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-aabb-ecead--fjh";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> preferences = {"BFECGHAD", "DBCHFAEG", "GFDBCAHE", "BFGDHACE", "ABEHGFCD", "BACGFDEH", "HDCBGAEF", "BDAEFCGH"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-aab-dcg";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> preferences = {"JKBIMGELCHNAFD", "CGANHBDMFKELIJ", "IDKJBLGFECANHM", "BEGLAKHFMJIDCN", "HIMBLKDANGJFEC", "DFINJGELCHKMAB", "JEFCBLIDKMGANH", "GKHILDCMABENJF", "JEMDGNABFIHKLC", "ELKHABDGCIJNFM", "BLDFKNECJMGAHI", "IEBHGNJKMCLFDA", "INBMKHLJEGAFCD", "JGMAEHNCBIDKFL"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "--baaeee-acjia";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> preferences = {"GIDBAHEFC", "HDIEAGCBF", "AFHBEGCID", "CIAHBFDGE", "GACIFBDHE", "HACIEGFDB", "DBGIHACFE", "DAGIFEHBC", "ECBDIAHFG"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "--aabaefb";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> preferences = {"BCEAD", "ECBAD", "EBACD", "BAEDC", "EDABC"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-aba-";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> preferences = {"BCFEAD", "EADCFB", "BAECDF", "DBCFAE", "FACEDB", "DAFBCE"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "--abbe";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> preferences = {"MRKCIGNEOLPBSTDFJHAQ", "GOTJARIKBCEMLNQSFPDH", "QCMTONGEBALRDSPHFIKJ", "RSEJOQNTPBMHKAFDILCG", "KTCOJPASGIDRNLHEMFBQ", "BAFORCKQLTHNGMPDIEJS", "BGSNAODCJKPQHFMTREIL", "FEGOPQLNRMDIJAHTBSKC", "LFEIJPMOBGQSRDKNCTHA", "FDQGITSPBMKLNROCJEAH", "EOITCFMDBJNAGSHRLQPK", "FDEKTONQAHCLJGRPBIMS", "FRKSCNELADIMOHTGJQBP", "SJOPBAMCKDELRIGFHQTN", "GIPARECDLOHBNSJQKTFM", "QGEOLNMSPIJRTDAFCKBH", "RMTQPIKHSFODCBNJLGEA", "BOGQTKNDPRMFCESJHALI", "IAOPCKDMEQTHJNFRLSBG", "GTQJFMIBRNOHPLSADCEK"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-a---bdagdeibghopqnj";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> preferences = {"DHGAFEBC", "HFCGEDBA", "ADCEHGFB", "FAGHDCBE", "BFAGHCED", "GEFADHCB", "BAECDHGF", "HGECFBDA"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-abcaef-";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> preferences = {"CPGFMRAEHNDIJSBOQLK", "NOABRQMPKIHLSGEDFJC", "SAOGEQHBRNPJLDMCFKI", "SCAGQJBLIDNPRFKOMEH", "DLQRIAFGPKJNSCMEOBH", "DGLQCJSKEHOFNARPMIB", "LFRKGACSOMHJIBPQDNE", "AFIHSPENJCMKBRGOLDQ", "JCBQMNSHKRFIEGAPOLD", "CIQSDFAJNKHROMEBPLG", "QPKRBCJHLSIFEODMAGN", "EKMBRSLJDOAHPFIGCQN", "QSRMEOKDFJICBPNGHAL", "IPSJLRGHDFEOBAKMNCQ", "JLGHMOQKPDNSEBACFIR", "ALGCHKORJNDPFSBIQME", "OBDRCGMINJHSAQPKLFE", "MPHBLJKDQCESGNORIAF", "CISKMDEJGOHBPFNQRAL"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "---cdcdcbeagebmkmej";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> preferences = {"EFILADJKHBCG", "BKICDFEHAJLG", "GDAJBHKLIFCE", "GDBCLAEJFHIK", "ACLEGHBDIJFK", "AJLIKFDGBECH", "GDKAFHBCELJI", "GCHKDBJLIEFA", "ELDBGAIFCJKH", "LAGIBHKECDFJ", "DLIJCEFGABKH", "JFECGAKDIHBL"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "--bcbaccb-gj";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> preferences = {"GJCKIDBEALHFM", "CGAEILHJBMFDK", "AHKFIDLJEBGCM", "FBIKDJHMAECLG", "EJFCLHKAMDBGI", "KCALMGHDFBJIE", "AFEBLKMCGHIJD", "CMGJBFIKDHLEA", "CDBGJEILKMAHF", "AFLMGBDHCIJEK", "KCAIBGDMHJEFL", "JADKBEGHIMFLC", "GJEHLDMAIKBCF"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-aba-cccbf-fh";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> preferences = {"BAHECGFD", "HBEDAGCF", "CFDBGAHE", "FCDHGEBA", "HAGBEFCD", "CEABFDGH", "DGCHFEAB", "DECFGBAH"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "--bbbd-e";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> preferences = {"CFGDABE", "DEACFGB", "EBGCADF", "FCEGBDA", "GCDBEAF", "EGDFCBA", "AFEBCGD"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-aabdde";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> preferences = {"ABCDEFGHIJKLMNOPQRST", "MQSEJKABNLRHFGOCPIDT", "ACLTJDSGBHONEQFIMPKR", "BHIFLMTDEGNJKRQCOASP", "DQMPJCLBHIFNEROGTKSA", "BOKEIGDMLCHSTNPARFQJ", "MFPLJDBNASTICEROGQKH", "CTLENHFQGPOBIAJSDKMR", "KJNEPHSQFCRDGBITMLOA", "ELNKQMGTIPOFHJRADCBS", "KAHOIQNCGLDSRPBMFETJ", "KNDAJCIGLFPQHSOMRTBE", "DFEKJNQCBLPHOIRMTAGS", "EFJRHASBGTIDOQPLMCNK", "FRNAGQLITHEPMBSDJKCO", "FSCABRONJGIQDPKELTHM", "HDJNFQBSCAKEITRPMGLO", "MBHOPSIFQTREADLKGCJN", "JKNITPHSABFOMGREQCLD", "ECIHNMKALGFQROJTSPDB"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-a-bcaaedbjjkikgeobc";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> preferences = {"BRGPQMCLEKNSHJDTAIOF", "QESACLRIBODNKMHFGTJP", "AMFSKNGQLCBOIHPRDTJE", "IKRDFTHNGMBQLOCEASJP", "MENJBRCDOHQSLAKPGTFI", "OIHNPMLCQSJRDBFETKGA", "AMOFKQHSELNJTCBIRPGD", "KHDCFMJLGNAIPOEBTSQR", "RHGKTMJSINDQALPBFCOE", "HBMPIGEJRSLADKTOFNCQ", "EHGDRCOFNMBKQJPTAILS", "HDTQILNPMGRBJSKACOFE", "DKPMQRJCGHSOATFLBIEN", "ATNMFBJORGQEHCKISLDP", "JPSQARGLHMODKTCIBFEN", "QMORIJNAHLTEGSCBPKDF", "NHTEGFSPRAKMCBOLQIDJ", "LTMPJASGHQDBFOKNREIC", "OPTDFKHCBLJRISQANGME", "JKPLFDCQTSEOHNGRAIMB"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "-abbddbffahigccopica";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> preferences = {"ABCDEFGHIJKLMNOP", "ABCDEFGHIJKLMNOP", "ABCDEFGHIJKLMNOP", "ABCDEFGHIJKLMNOP", "ABCDEFGHIJKLMNOP", "ABCDEFGHIJKLMNOP", "ABCDEFGHIJKLMNOP", "ABCDEFGHIJKLMNOP", "ABCDEFGHIJKLMNOP", "ABCDEFGHIJKLMNOP", "ABCDEFGHIJKLMNOP", "ABCDEFGHIJKLMNOP", "ABCDEFGHIJKLMNOP", "ABCDEFGHIJKLMNOP", "ABCDEFGHIJKLMNOP", "ABCDEFGHIJKLMNOP"};
    YankeeSwap* pObj = new YankeeSwap();
    clock_t start = clock();
    string result = pObj->sequenceOfSwaps(preferences);
    clock_t end = clock();
    delete pObj;
    string expected = "--------hgfedcba";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8362207&rd=10778&pm=7375
********************************************************************************
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <cstring> 
#include <iostream> 
#include <sstream> 
#include <vector> 
#include <string> 
#include <algorithm> 
#include <set> 
#include <map> 
#include <queue> 
using namespace std; 
 
#define FOR(i, a, b) for (i = (a); i < (b); i++) 
#define mp make_pair 
#define pb push_back 
#define f first 
#define s second 
#define sz size() 
#define INF (0x3f3f3f3f) 
#define FORI(it, x) for (it = (x).begin(); it != (x).end(); it++) 
#define ALL(x) (x).begin(), (x).end() 
#define FORD(i, a, b) for (i = (a) - 1; i >= (b); i--) 
 
typedef vector <int> VI; 
typedef vector <double> VD; 
typedef vector <string> VS;  
 
class YankeeSwap { 
    public: 
    int works(int n, string moves, int N, int match[]) 
    { 
        int i, j, P[32]; 
 
        for (i = 0; i < N; ++i) 
            P[i] = i; 
        for (i = 0; i <= n; ++i) 
        { 
            if (moves[i] == '-') continue; 
            swap(P[i], P[moves[i]-'a']); 
        } 
        for (i = n+1; i < N; ++i) 
        { 
            for (j = 0; j < N; ++j) 
                if (P[j] == match[i]) break; 
            swap(P[i], P[j]); 
        } 
        for (i = 0; i < N; ++i) 
            if (P[i] != match[i]) return 0; 
        return 1; 
    } 
 
    string sequenceOfSwaps(vector <string> G) { 
        int N = G.sz; 
        int i, j, U[256], match[32]; 
        string res = ""; 
 
        memset(U, 0, sizeof(U)); 
        for (i = N-1; i >= 0; --i) 
        { 
            for (j = 0; j < N; ++j) 
                if (!U[G[i][j]]) break; 
            match[i] = G[i][j]-'A'; 
            U[G[i][j]] = 1; 
        } 
        for (i = 0; i < N; ++i) res += " "; 
        for (i = 0; i < N; ++i) 
        { 
            res[i] = '-'; 
            if (works(i, res, N, match)) continue; 
            for (j = 'a'; j <= 'z'; ++j) 
            { 
                res[i] = j; 
                if (works(i, res, N, match)) break; 
            } 
        } 
        return res; 
    } 
   
     
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/