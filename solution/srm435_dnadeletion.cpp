/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10229
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

class DNADeletion {
public:
    int differentProteins(vector<string> DNASequence, vector<string> codonTable);
};

int DNADeletion::differentProteins(vector<string> DNASequence, vector<string> codonTable) {
    int ret;
    return ret;
}


int test0() {
    vector<string> DNASequence = {"ACTG"};
    vector<string> codonTable = {"ACT gua", "ACG cys", "ATG leu", "CTG thr"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> DNASequence = {"AAACCC"};
    vector<string> codonTable = {"AAA thr", "CCC cys"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> DNASequence = {"AAATCCC"};
    vector<string> codonTable = {"AAA gua", "TCC dop", "AAT dop", "CCC gua"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> DNASequence = {"TACAGC"};
    vector<string> codonTable = {"TCA rvykZ", "GTA jYAv", "ATG rvykZ", "TTT jYAv", "CTG rvykZ", "ACT jYAv"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> DNASequence = {"TATCC"};
    vector<string> codonTable = {"GAA s", "ATG s", "ACA S", "CTC V", "GGG YScV"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> DNASequence = {"ACCGCG"};
    vector<string> codonTable = {"TAT R", "CGG no"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> DNASequence = {"GCGCAAATA"};
    vector<string> codonTable = {"GGG Ozt", "AGG Ozt", "GTT Q", "ACC Q"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> DNASequence = {"CTGCATT"};
    vector<string> codonTable = {"GGG hZZnO", "CTG avbF", "TGC avbF", "TCC itL", "ATG itL", "CGG lg"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> DNASequence = {"CCAA"};
    vector<string> codonTable = {"GCT IczLT", "TGC nJskl"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> DNASequence = {"CCT"};
    vector<string> codonTable = {"GGT IakR", "AAG IakR", "AAA U", "ACT U", "CGG cy"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> DNASequence = {"CCAGACACCC"};
    vector<string> codonTable = {"GAT l", "CAT EI", "TAG Ggs"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> DNASequence = {"ATC"};
    vector<string> codonTable = {"CGA pPyN", "ACG CXWQ"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
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
    vector<string> DNASequence = {"AAG"};
    vector<string> codonTable = {"ATT VADn", "TGT OR", "AAT VADn", "ACC vah", "AAC VADn", "ATA OR", "AGA vah", "CGG VADn", "CAC vah", "CTT VADn"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> DNASequence = {"TGGTGCAAC"};
    vector<string> codonTable = {"GAG DHd"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> DNASequence = {"GACAACC"};
    vector<string> codonTable = {"TGT JWp", "AGT JWp", "GCG JWp", "GAA Aww", "CTT JWp", "TCT Aww", "GAC Aww"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> DNASequence = {"TTGGGATTT"};
    vector<string> codonTable = {"TCG j", "TGC j", "GCA O", "AAA O", "CAT j", "CCC O", "AAG O", "GTT j"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> DNASequence = {"CTGAACCGG"};
    vector<string> codonTable = {"AAA bNjq", "GAG bNjq", "AAT nNy"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> DNASequence = {"CCCACCTTAC"};
    vector<string> codonTable = {"CGT X", "GGT X"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> DNASequence = {"TTTGATGC"};
    vector<string> codonTable = {"TCT KOR"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> DNASequence = {"CATTAGCTCA"};
    vector<string> codonTable = {"GCG qmg", "CTC qmg", "CAA qmg", "AAC qmg", "AAG qmg"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> DNASequence = {"CATCCGGGG"};
    vector<string> codonTable = {"CAC PoO", "CTG PoO", "TTC PoO", "GTG PoO", "CGA PoO", "TTA PoO", "GCT PoO", "CCA PoO", "ATT PoO", "CTC PoO"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> DNASequence = {"AATGGGCG"};
    vector<string> codonTable = {"GTG udD", "CGC udD", "GAG udD", "TCG udD", "CGT JxTD", "CAC OZrP", "AAC JxTD", "ATG OZrP"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> DNASequence = {"CAACA"};
    vector<string> codonTable = {"ATC AvRzo", "CTG AvRzo", "TGG AvRzo", "GTT AvRzo", "TTG AvRzo", "GCC AvRzo"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> DNASequence = {"GGGTAACTTTCGGG"};
    vector<string> codonTable = {"GGA EmUd", "CAC hvF", "TCC hvF", "CGA N", "GGC XKHu", "TCT Hldl", "CTG EmUd", "TAA hvF", "GTA EmUd", "CTA EmUd", "ACC hvF", "GAA XKHu"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> DNASequence = {"ACAGAAATTATAGCTCTG"};
    vector<string> codonTable = {"ATC AD", "AAG KnerH", "TTG br", "CAC br", "TAC AD", "CCG dzIvT", "CGA KnerH", "CAG KnerH", "ACT KnerH", "GCC Y", "CAA Y", "GAG AD", "GCG br", "GGA AD"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> DNASequence = {"TACATGTCAATTAGTTGAACAGAAGCTA"};
    vector<string> codonTable = {"TCT Z", "TGC R", "CCA k", "AGG cA", "AAC Uur", "GTA k", "AGC Uur", "TTC aGdio", "ACC Ie", "AGA dDZ", "GCA Ie", "GAG eRljR", "GTG Ie", "CTT aGdio", "GGC Uur"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 1347;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> DNASequence = {"GATGACGTGCGT"};
    vector<string> codonTable = {"GGT enXz", "ATC Wa", "GTC wU", "ACG ZJRfY", "GTG Wa", "TGA wU", "TAC wU", "AGG wU", "ATT ZJRfY", "CTG rUJ", "CCG Wa", "AAC GlK"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> DNASequence = {"TCCGACGGGTGT"};
    vector<string> codonTable = {"TGG Of", "CCC slEK", "GGT Of", "TAG DqCu", "GCC N", "AGG gZeyw", "GCT JVDX", "AGC JVDX", "AAT JVDX", "ACG DqCu", "CGG JVDX", "CTC N", "GTT ioJ"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> DNASequence = {"AGAGACCCTTATCAGCGTTTAAACCCGATCTTAGTAAGCTC"};
    vector<string> codonTable = {"CGT Oq", "AGT Zl", "GTC Oq", "ATC GQl", "GCA CPJQ", "TTA CRrkh", "CTG s", "ACG GQl", "TAT CPJQ", "TAC CRrkh", "GTG Oq", "TCG CRrkh", "CTA Oq", "TCC Zl", "GGG CPJQ"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 11508;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> DNASequence = {"ATCGTATGCATGCACTTTGTTTTCGCATTAAGGCT"};
    vector<string> codonTable = {"TTG U", "TTC U", "ACA OdWkU", "ATA U", "CTT U", "CAA U", "CGA U", "TCA OdWkU", "ATC EWpm", "GAA EWpm", "GGT U", "TCG OdWkU", "AAG OdWkU", "CAG OdWkU", "CAC U"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 638;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> DNASequence = {"GCAATAGATAGAAAATG"};
    vector<string> codonTable = {"CAC MwrH", "GTT MwrH", "TCA MwrH", "GAG O", "ATT MwrH"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> DNASequence = {"CCTCAGCAGGAAGGTCAGTCGCA"};
    vector<string> codonTable = {"GTT GYkum", "ATT GriF", "TTC z", "GCT WTHmK", "TGA Ogys", "TTA Tv", "AGG w", "AGT z", "AAT GYkum", "ATA Jqz", "AGA w", "CCA cV", "TCA z", "GAA w", "ACG WTHmK", "AGC Jqz", "ATG GriF"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 465;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> DNASequence = {"GTTCGAACATTGTTCTACATCGATCCGAGC"};
    vector<string> codonTable = {"GAA ZSsi", "AGT ZSsi", "ATC ZSsi", "GGC ZSsi", "TAC ZSsi"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> DNASequence = {"AAGCGGGAAGCAACGAAGAGAATGGAAAGACGAACAAAAA"};
    vector<string> codonTable = {"ACC Pq", "TGG Pq", "TCG Pq", "GAT Pq", "AAT Pq", "GCT Pq", "ACG Pq", "CAG Pq", "GTT Pq", "GGA Pq"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> DNASequence = {"GCAATGCTGATAGCACACCTCCACAGTGGATTCT"};
    vector<string> codonTable = {"TAT krGGD", "TCT krGGD", "ATC XsDn", "CCT XsDn"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> DNASequence = {"GTGGAAGATGCACTGACAAAGCGACCCAT"};
    vector<string> codonTable = {"GTT SZ", "ATA j", "GGC Yd", "CTA j", "TTA Yd", "CAA Gs", "TTT eo", "ACA w", "TCC Gs", "GAT j", "AGT SZ", "GGG Yd", "ACG j", "AGG Yd", "CGT j", "TTG Gs", "CCG SZ", "TGC g"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 880;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> DNASequence = {"GTTAACGATCCGCCTATGACTCAGCTTGATCGCGGCAGCTATTTA"};
    vector<string> codonTable = {"CGG l", "TTG AoeIi", "AGC P", "AAG Q", "ACG P", "TAG CE"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 2862;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> DNASequence = {"GACAGGCCTTTTAGAAAATGAAA"};
    vector<string> codonTable = {"TAC RB", "ACG I", "TCT I", "GGA VNTJ", "TCG VNTJ", "GGG ntv", "GAC PDoF", "TCC RNOM", "TCA PDoF", "AGC VNTJ", "TGG d", "ACT I", "CGA VNTJ", "TAG RP", "GCC RNOM"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> DNASequence = {"CGAGGTTCCG"};
    vector<string> codonTable = {"AGT z", "CGT Jm", "AAA lTCvr", "CCT mXLnu", "CTG nbI", "CTT Jm", "GAT nbI", "CGC Jm", "TTG mXLnu", "CTC PZqCu", "GGG xvz", "AAG lTCvr", "GAC z", "TAC Jm", "ACG z", "CAC nbI", "ACA mXLnu", "CAT nbI", "TCA z", "TAT nbI"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> DNASequence = {"GGGCTGCCAACCTT"};
    vector<string> codonTable = {"TCC a", "GGG xySN", "TCT xySN", "GAA xmKO", "AAC mAOHq", "GAT mAOHq", "ACT a", "TAC xySN", "CAA pE", "ACC a", "CAT pE", "CTT xySN", "TAT a"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> DNASequence = {"GCTGTGTTCCCAAGACTCTCT"};
    vector<string> codonTable = {"ATG xVFo", "TAT xVFo", "CAA ix", "CAG ix", "GGA ix", "CCG sKa", "AGA gAIr", "AGT gAIr", "TCA ix", "CTG PhdPV", "ATC DO", "GGG xVFo", "GCG xVFo", "TCT xVFo", "TGA gAIr", "TTA PhdPV"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> DNASequence = {"CTGCAGGAAAGCTCTTGCATGCTACACCACTTGCG"};
    vector<string> codonTable = {"ATC Qo", "CTC J", "AAG SJNe", "AAC uQD", "ATA SJNe", "ATT muyh", "GTG muyh", "TCA uQD", "GCC uQD", "CAC e"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 1996;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> DNASequence = {"CGTGCTCAGAAACTGA"};
    vector<string> codonTable = {"TGT L", "CTG L", "CCT xEAIj", "AAT Jtria", "ACG Jtria", "CTA Jtria", "AGT L", "ACT Jtria", "GAC Jtria", "TTA xEAIj", "CAA xEAIj", "TCC L", "CGG L"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> DNASequence = {"AATTACGGGGTATTAAAATAGACGACAGTTGGTTCTGCTTAAGTTGGTGC", "GTTATTCTCAAAGTTACCCGATGGATTGACCGAGATCCATCCTAGCCATT", "GTAGCCCGACCCCCACGCTGGAATAAGCACAAAAGCCACTCTGTGAGTCT", "CCTTGTTTATGATGACCTCTAGAGCGGCCCGTTCACGTGGCTGGTACGTT", "CTCCCGACACTGGAAACGTAGGTTGATAGATATACAGCCGTGTTGTTACA", "AAATGGGCGTTCGACAAATCGAACTGGAGCCGCCTAACTGGAATATGCTC", "TTCGGATGATACCCTGTTAACAATTAACCTTAAAGAACGAGGTCAAATGC", "TACTTGGTCACGACGGCGCAAAGTCATTTCGCTAGAGTGAGAAGCGGGGA", "GGAGCTGGACCGTGGTGTATGGTGGATTGCTTATCCAACATTGACTTACG", "GATCGCCCGAGCGGAACACTCGAAGCGTCACAAGTGCGAAAGTGGTGATA", "TGGTAGGGCAGTCGCGTTTTGTTCCCGCCCCGCCCCAAACAGGCTAAAGG", "TTCAGGCTATGCCATTCTTCGGATATGCTTACACCGAGCACATGCACTGA", "ATGACGGAACTATTTACTGTGATCGGCCTACTGATAGCAAGTACATCCCA", "GACCCACTCGGTCTTGTTCTTAATCACGCTGATACGCTCTCACTTGTACG", "TGGTTATGGGCGGGGCTAGGGCAAGTGCGCACAGATATCGTTTCCTTGTT", "GCGGCTCCAATATTATCAATGTCTATATTTACAGACTCTTTATAGTTATT", "TTCGACTAGATACTGCACTTGAGTATATTGCACTACGTCTTGTGTTATGT", "AGGGCGCCTGAGACCATATGTAGC"};
    vector<string> codonTable = {"GCT h", "CGT bRPm", "CTT bRPm", "TAG bRPm", "CCG HN", "TTC HN", "CGC bRPm", "CAT bRPm", "ATG h", "AAG h", "GAC h", "TAC HN", "GTT bRPm", "CAC HN", "AAA h", "TTT h", "ACA bRPm", "AGG h", "CCC h", "GGA HN", "ACC h", "CGA h"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 644070991;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> DNASequence = {"TCTCGGCGGATATGTATATCAAACTTAAACATGTGTCACAAAATGGTCGA", "TAATCTATTAGTTTACACCTCCTTACCTTAGAAGTTTGAAGGGTTGGTCC", "ATTTATGCCCTACTGAACGATTACATAAACCCAGGATGTGAAGTTTTGAC", "GTGGGACGATCCGCATCTCGCTGAATGTCGGACTAATCGTGAGTCACGTT", "TAATAAAGTCTCCGACGTGGCTGACCATAGATGCAGCAGACCCGCCAAAG", "GCTGCGATCACCTATGGAGTACACACGACGACATACCAGTAAGTATCATC", "TTTTGTGTTCCTTCATGCTTGTGGAGCTGGGTCCAAGAGCCAAGTACCTG", "GCCTACTCGCATGCGATTACACCAAGACATAAACTATATTTTACAACTTC", "GTTATTAGGACGACAGTGGACCTCGTCAAATGTAACGAATACTCGTACCG", "CTCGAATCATCTTAGTCTTCATTTGCCGTTGGCAGCACTAGAGCATGCAC", "TAAAGGTAGATTAGTGATAGTGGCCGGAAGTTATTGCAGACCTCCAACTA", "ACGGTATTCTCGACCGATGGGACCCTTCGACACCGACTTTAGCCCTACCG", "CAATCCAGGGAAGCCGCGCGCCGGTACTCTTTTTAAGAGTAGGGCATTGG", "TCCCAGCCTTAACTTCTCTTATCGCTGACGGGAAAAACCTGCTAAATTCA", "ACTTAGAAGCGGAGGAGGCACCTGCTGGACGCTCGGCGGACTGCCGTATG", "AAATGTAGCCACTTTCCGAAACTGGGTCGCAACCTAGGGAAGCTTAGGGG", "AGCTGATCCCTCCGTAACGGTGGGCCGAAGGATAGCACGCTCGACCACGG", "ACTGAGAAGCGTCCGAGGCTCAGAAACACAGTCCCTATTGGCCATACCAT", "GCTGCTGTTCGCGATATTTACCCGTAGGCGCCAAACTGACAGTGGCATGT", "TCAAATAGCCGTTGTTCCTCTTAATGCTCCAATAATTACGCATAAATCCA", "TGGTACCCGGTGGAAGTTGATAAAAAAGCTGGCTCCGGGTTCTCTTAAAG", "ATGCTACGGGCTTTCAAAGGGCACTTGTGGCGTAAAATGGCATGGGGGGT", "TTGTGCCTGATAGACAACTACGAGTGTTTCAAAAGGCATCAACGATGAAC", "ACACAGATCGGCGGCTGGTCATCCTCACCAGTCGGCTGGGTTCTTTACCG", "TCCGGGAGCCGAGAGTCTTACATTTACGCTTGAGTGGTTAACAGCGTTCA", "TGAACGCTTTCATCGAATGTTGGTTATATGAATCAAACTTAGTTACTAAC", "TTACCGCGGGTAGCCACCCGGCGCGGTTATGTC"};
    vector<string> codonTable = {"CAG aUd", "ACT aUd", "CAT aUd", "TCT aUd", "GGA aUd", "CTG aUd", "GCG aUd", "GTG aUd", "AGT aUd", "GCT aUd", "CGT aUd", "GGG aUd", "CTC aUd", "ACA aUd", "CCA aUd", "CAA aUd", "CCG aUd", "GGC aUd"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 292;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> DNASequence = {"ACGAGAAGAATGGGGCGCGAGAGTCCGTTAATCGTCGTAGGTTTCCGATG", "ACGAAACGGGGGCATACCTCACGTAAAGCTTCACCATGGCTTAATTAAGT", "CGACCACCGTATAAGCACAGTGCTGGAGGGCCTCTACGCCTCGTCTGCAA", "ATGCCTCCCACTCGAGGCGCTCTCGAATCATTTCGGGACACTGTCGTCAC", "TGTAACAAGTATAGGGTGAGGCCTGGCCATTTCATCCGTCCTGCCTAACA", "GCCCGCACTAGCTACACGGGAATGCGCTGGTGAAAGCAAGAGATGTTCCT", "ACTTAATCTCAAAAAAACAACAACTGGCAAGCCCGCCCGGGGAGAAAATA", "AGCAAGAAAAAGCTCCGTTTTCTTCTTCTACTGTGATGATGATCTGTTCA", "AGTTCGAAATACCAAAATGAATATGGCCCGTCTAAAGAAGGAAAAAAATG", "AGCCCCAGTCTATAATAGGATTCGTCGTTTCTCTGTGGCTAGTGAGCATA", "CCTTAAGGTCCGATTGCCGTGGTTTTCATGAGAGCAGCATTCCTAGTCCC", "GAACTGGGGTGGCGTGATAAATCCCCCGTTATTAGCGGATCGTTGACGTC", "GTAAACTCAAGATCATTACGTTTAACCTAGGGTGATATGATTACGCGTCA", "CGTGATCCACAACTGCAAGGACCCTCTCGGCATGGTTAGTTATGTTAGTG", "TTAAGGCCAAATAGCGCGACTTCACGTCTAACGACTGTAATATTGGCCGC", "TCGGCATACCACTGTGTCCTCGTGCTGTGTACGGAAATACGCGCACATTC", "AAAGGCCTAAAACGGCAGGACGCAATCCAGTCGGAGACCACTATCAGCGT", "TACGATCCGTCCGAAGGCACCCGTGATTTCAATTGTACAGGCATCCCCTC", "TGTCCCCGGGCGGGCGCCACAGTCCATTCAGGGCACTCACCCAAATGTGG", "GATTCGTGCGGATTCTGGGAAACCCTGAATAGTTCGTGTGTCAAAC"};
    vector<string> codonTable = {"GAT Nji", "TAG lPcVz", "GTT IG", "CAT lPcVz", "CCA a", "CGT IG", "AAT vw", "CAA a", "GCT IG", "GTG a", "GAA vw", "AGT IG", "TAT Nji", "GGC a", "CGC Nji", "ACT lPcVz", "ATC lPcVz", "TTG OOQ"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 532990701;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> DNASequence = {"CGTATGAACTCTTTTTGCCTGCTCTTCCTATAGCATAATTTGACCGGAAA", "TGTCCAGTTTTATTCTATTTAACACTGCTGCAGGCAACTTGCTCGAGGTC", "CTCTTGATATCCTACAACCGGAACCGCATGCGCTCACCTCGGGCAACACT", "GATGCGTGGATAGAGAAACTTACCTCCGTTTCTACGAGTGACAGCGACGC", "GCTATATGGACCCGTTGTTCCTTCCGACAAGGCCAACTGATCTGAATGTA", "CGTGCGGCCGCAGGCGGTCTTGGATAAAGTAATTAGTGAGTTGCCAAATC", "TAATCGTCGCAATTTTCACCGGGTCATCAAGGCGCTTGGTAGTTCAATCC", "AACGGTACGATTGGTACAGATAAATCCGATAATCGCGGGGACCGAGACAG", "CTGCGTGACGTCGAGTTTTCCTTGCTTCGTCACATATCAGATCGTACATG", "CACGGGCCAAACCCTGCAACAAGCGCCATGAGGCGTAAACCATTCACTCC", "GCCTTAGGACTACTTAATAAGCATGCTAGGCTATATTACGCAGTTCTTAG", "GGAGCACAAAGTGAAGTGGATCACGTGTAGCGTCGACAATAGAGGAGTGT", "TCGTGGATCACTAGGGGCGGGGGGGTGTAGATAAAGGACACTTCTCACTG", "CCTAACTAGGGACGATGGTAGGGCACTATCGGTTGGGTGGCTGTCGAATG", "CCTATGCAGGCGGACTGAATGCATACCATGGGATGTCAGAGAGTAACGCC", "CAGCGGGAGCAGAACGGTGTTTTTCGTTTGGAATCGCAGCCGACACAGGG", "CCTGGGTTCCCACCGTAAGACAGCTGTTTCTGGAGTGCAATTAGGGTAAC", "ACCGGGGCTCGACTAAAGCCGAGGGTGCTGTTAATGGCCCTACGTCGTAC", "GGCTGACTTGCATCAACACTCGTGGAATTCGTAAAGCCCGCTGGAAGCAA", "GCGCATCCCGTACTCTTTGGCATAGTATGATTTTGTAAGCGCTCAGGTCT", "CTGGTTCGCAGGTCCCATCGGCCCTCACGCGAGTATCCCTTACATGTTCG", "CAATTTGTGTAGGGCGCTATATGTGCCCGTAATCGAGTGGCGTATGGATG", "TTTCACTCTCGTTTGCTGGCTAAAAGGGGCGCACGATCTAGCTCGTTTCC", "GGTAGTGTTTACGATTAAATAGATAGATCCGCACCGAATTTTGCTCATCA", "CCGCGGAACTCAGTTACTAGATCGGGAGTCGGTTACCACTTGGCCCCTGC", "TGGGTGGTTCGTACAATTAAAGGGAAATTGGATGAATGTAACTATGACCA", "CCGACAACTTCCGGAGATTTGTACTTATGCTAGTAATACAGTCTTTCTAG", "AGCACGGCCTGGGTCGTGAGGGTCCAGTTGCTGTGACTCTAACGTGGATG", "ATTTGGTTCACTTAACACGTGATAGCGTCTCCAGGGTC"};
    vector<string> codonTable = {"CTA kb", "TAG Oyp", "AAG DGChj", "TAC DGChj", "TCG s", "CTG v", "ATA s", "TTA r", "GAT t", "GTC DGChj", "CCG r", "CCT bvJY", "TCT Oyp", "TGA t", "TAA r", "CAA cbj", "ATG kb"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 109715803;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> DNASequence = {"TAATTTCTCGCTTAGAATATGTGGCCAACGGGGGCCCTAGCCCGTAATTA", "CCTAAACAATAGCGGTCACCGTTATAATGTTAGAAGACACGAAAGGTAAG", "CGTAAAAATGGAGTAGTCATTGTTGCTTTTCGCGGCGATCGCCGGTTCGG", "GCTCGTGCACGCACCATAAATGCGTCCCTAATCTGCATTAGTTAGGACGA", "TCGGCTATGGGGCACACTGATTTATCGTTGTAATACAAAGGGTAGGCCCA", "CATGACAAGTGTGGAGCAGCGGACGGAAATACTGATAATGGCCTCCCTCA", "GAGGCGTTGGAAATGCAGCGTAAATCCGGGATGGCCTAGTGGTGCCACAT", "ATTCTCTAATGAATATGTTTACCTATGCAGGATCCATAAGTGGTTGACTT", "ATGCCAAACAAAATCTTATGGATTTATGTACTTCGGCGATGATATGTAGA", "GTATCTTGCAGGTCATCCCCGCCCCGAGGAGGTGCGCGTGACTTGTAAGT", "CTGTGACGGAGTGTCACTAACACGTACGAACCTAGCAACGCACATTCAAC", "ATCCCGTGTTGGATGGGGAATCCGCGCTGTGGAACCAGATCATCTCCCCC", "TGTGGGTATTTCCTTTATCAAGATATACACTTAACGAGATCTGGCCCCGG", "CATTTTATAAGTTAGGGGGGCATAGGTCACACCTGAAATAATGGTTTCCC", "CTTGTCTATTTTGGAGGCGTCGAATTTCGGTACAGATCAAGTGGTGTCAC", "GTAGTGCCACATCTGCTCTTCTCACGAGAAAATAGCGCTGTTTGACATTG", "CGCTATCACCACCGCCACTTAAATGCGAGCGACATCTGCGCCATACGATC", "TGCGCCACCGTAAGATATTCCGGCCGTCACTTAACCCCTTCCTCATGCAC", "TCACTTCAGCCCGCCCGTTCAGTTAGAAAACTCTAGACAGTCACGTTTAC", "GCATGCCACCATGTAGCAACGTGAATTTATGGGACGCTGTGGAGCCTGCG", "ACCGCCCGACCGCCGTAACGTATGGAATGCCGTTGGAATATAGGCGCCGT", "ATGTCTTCACTCCCAAAAAGATGGCATGCTCCAAGCGTTGGACACCATCC", "CCGAACAGACCCTCTCTCGAAGACGTTAAGCCAACCCCACTCGATCCATC", "ATAAAGTTGTTAGTCAGTCGAGAGGTACTTTTATGACCGCACCGGTAGCC", "TCCGAACACATGTTCCGGGTAGGCTTATCCAATCGTCATGAATGTAACGG", "GGTTACCAGTCGTGACCTTGCTGGCTGTGTCGCACTCTTACAAGGACCTG", "AGCAGGTTCCCTATTTAGAGACGACTATGGCATTACCTATGCCAGGTAGT", "GGATGCAGGATAACTATATTTCGGCGGGGTTTCTAAGAGTATTAGAACAT", "AGAGTCTCCCGGGACGAAAATATACCACTCATAATTCAATTGCCATCATC", "AACTATGCATTAATATACGAACACTAAGATACGTGGAGAACTACAAACTG", "CTACGTCGTTTTGCATACCCCTGTAATACAGTTGATCCCGGGTTATCCGT", "TCCCGCCCCTTACAGCTATAATGTAAACCAAGCCAATTCGAGGCATTTTC", "TTGTAGTCCGCCTTTTTAAGGCGTTGACCTTACCTCAATCGGTCCAGGAA", "GGCTCGCCATATTCGATAACCGAAATAACCAAACTTAGGCTGGAAGCGGC", "AACAACTCCATCATTGAGTAAAGGCATTGCGGTAGTTTGGTCCTAGCATA", "ATAATCAAGGTGTAGCTCGTCCGTAGCCAACATTAAGACGGGTCGCGCGT", "GAAGTATGCTGGGTCGTAAGGGTCCCGAGTTTTTCATAGATGGCCACGAC", "GAACCCGACTTAAATTACTACAGATAAGGAATAAATTGTGCCGCCTGTGC", "TATCAACAGAAGGCGGGCTCCGTAAATATCCACGCCGTCTTTCCGCATTT", "GGCTATTTTAAGACGCGTGACCTTGCGGGTTGCGCCCGAGGAGGCTAAAG", "CCAGAGCGGACCGGAAATGACTAACTTCTGAGACGAAAAGACAAACACGA", "CATTCAAGCTTTTGGCGGCGGCCGCCATTGTAAATCATATAGATTGGCTA", "CCTTCGGCCTCGTCAATATTTTCTCGCACACTCGATTGAACCGGTGGAAC", "TTAACCGTCATTTACTTATTAGGGGCGTCGAACAATCGCTAGCTGTCTTG", "ATTATCCCAGAAGCAGACTCGTAACAGTTCCTAGTT"};
    vector<string> codonTable = {"AGT B", "GGA t", "TAT m", "CCT nQsZT", "ATG D", "AAT kkATX", "TGC B", "CAG nQsZT", "GAC m", "CTG GN", "GCT Wvobn", "CAC YDRJ", "AAG QWQp", "CCG D", "CGT PmwBP", "AGG UuMYp", "TCT JZLEW", "TAA UuMYp", "TGA F", "TTT IgEl", "TGT B", "ACC nFw", "GTA Wvobn", "GGT B", "GCG IgEl", "TGG m", "TTG D", "ATT t", "GGG hdtk", "CAA nQsZT", "AAC D", "GGC PmwBP", "ACA YDRJ", "TCA kkATX", "GTT QWQp", "CTT m", "CGG nQsZT", "ACT GN", "GCA Wvobn", "CCC m", "CGC JZLEW", "GAG B"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 13962030;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> DNASequence = {"CAGGGTGCATAAGCCAAGACTAGGACTGACGCCTAAAATCTTCTATTACG", "TGGCTGTCTTTCAAGAAAATCGCTCCAGCCTGACATCGGGCTCCTATTAT", "CCCTGTGGTAAAAATAGGGTTCAGTTAACAGTTAACGGCCGCCGTGACTG", "GCAAAGTAGGCTCGGCATACGAGAGCAGTTGCGGCATAATGCACAGTCCG", "TAGCCTTCTAGCTGAGGGGGCGCCACCTTTCCGATAGCCCCATGGTGTCT", "TTCGACACAGGCATTTTCGGTCAAAGTGTATATGGTCGGCTGTTCACACA", "GGCGGTGTCCTGCAGAGAGTCTCGAGACGCTTCGTACCTGTATGCCGACT", "TTAATCGTTTGAAAATCCGGACAGACAGCTTGATGTGTATAATCATGCAG", "CAACGCTAAGTTTTCTCAACTCCCTTGCGGAAACCGTGGTTCCCATGCTG", "TCAATTTCACCATCCGAGGATCCGTCCCTGCCACCTAGAAACATTTTTCC", "TGTATCCGTAGGCGCTTCCTCCGCACGTGCGTACTGTGTCGCAACCTGTG", "CGCACCCAGACTTTGACTAGGGCGATCTCGTTGGTAAGAGGTCTAATCTT", "ACTCCTGTAACTTACAACGCAGGCCGTGAATATATGTCCTTTCAGTCGAA", "AAGGTATAATATGTTCCATTTACGCATTGTTATTGATTATACAGGTACTG", "GCGAAAATTAACAGGGGCCAATCACAGTCCCCTACGCTCGTTATCGCACG", "ACCCCTTAAGTCAATTGGACTTGGAATCAGACACTTAATAAATACATAGT", "CCAAAAAGTCTTTGAACACGACATCCTACCTGGGGGGATCCCAGAAGCAA", "AACAGGCCGGGCTTACCACACTCCCCCCTCCTTGGCTATCGCTCGGGCGA", "CAGTTAGGCCCGGGTTAAGTCTAGAGTGACGCTTGAGTGAGAGGGCCGCA", "TTGTTGCATTTCGAAGAGCGGCAGAGACGTTCACGTAAGTTCGTCGCCTT", "ATGACGACCGGGAAAGTAGCTTTCAGCCAGGCCGCTTCAGAGTAGTGTTG", "GACTTCCGTTTCGAAATGTTTTTCGCGTGTCGTTCAGTGCATGGTGAATT", "GCACTGTCTTGGCTTTTCATGCATATCATATCCGTGTCAAGAAATTTAGT", "TTGTAAATAGTGAGTGTAATCGTCGAGCCTGGCGTCGTGGCCTTAACTCC", "CTAGGGATACAGACTTGCCTCTAGAAACGCTAGTGTCGACAACCTGGCCA", "GTGGCGACCGTGGCTTGGTGCTATGTCGGTGTATTTTTGGCTTAGATGAA", "TCGTGTAACGGCTGGACCTCAGGGGTGCCGTAACTGGGACTGTATCAAGT", "CGCATATTTACAATCTCACCCAAGAGCCGAGAGCATCTAGTCGTGACCCT", "TTTGTGTGACGGCTACATGACTTCACCCTTACCTAGCTTCGCCAGCCAGA", "ACTTTGAGATTAGGGGTACATACGAAACAATCCAGGGGTATAACGGCCAT", "CTGTCGGCCGCGATGACGGAGCAGGAGACGTGCCCTCAGTACCAGAACGA", "CTCCTACCAGAGTCAGGCATGAGAAGCCAACCGTTCGATGGTTCGGA"};
    vector<string> codonTable = {"CTA AFs", "ATA qhcj", "TAA KWCTF", "GGT EzhRm", "CTC mGS", "TAT AFs", "ATT mGS", "CCG EzhRm", "TGT pwdJ", "GTT KWCTF", "GAA AFs", "GAT az", "ACA Gb", "TTG Gb", "ATG KWCTF", "TGA KlT", "CGC EzhRm", "CCA qhcj", "CGT az", "ATC oUnH", "GCC KlT", "TCC MwOU", "CGA EzhRm", "TCT AFs", "AGG oUnH", "AGT mGS", "ACG AFs", "GAC pwdJ", "TTT MwOU", "GCT oUnH", "AAT MwOU", "AGC az"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 64985794;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> DNASequence = {"CTTTGGATTGACGAGCCGAGGTCGTGACTTGAACTGCTTGCTCAGACAGC", "GTGCTCATGTATTAGAAATTAGACGGCAGACGTAAATATCTTGCGTCGGA", "CGGCAGCCGACCGGCGAGGTATCGGATAGCAAAACAGTCTGTGTCCTCAC", "ACGCATCTGAGGAGGCGTAACGTACACGCTCCGATGGGTTGCCGCCCAGC", "CAAGCCGTCCATTGTCGCACGATCGGTAACCCTCAGGACACTTGCAAATC", "CCCATAGACGTTAAACGGCAGTTCCACTAGGTCATGACACCTACTATCGG", "CTCAGGAACAAATCAAAATATGTTAATGCCTGGAGTGGTAGTATGATAAA", "ATGGAAGTGCGCATCGAATGACCAGCATCCTCGTAATATCCTTCAAACAT", "ACGCCGTTCGGGCTCCTGCCATGGGGGGAGCAACTTAAACAGACCTTACA", "CTTACTGACAGGAAATTAGTCGCCATGTTCTGGCGAGGAAGGGGGGTCGC", "GAAATAGCTCTCCCTACCGCCTCCTAAATACCACTTCCAGTTAGATACGG", "GCTATAATATTCAGTTCGGCTCAGCACCCCAATTAATCTTGCGGACCCAA", "GGTGTGGGAAAACTGCTCTCATTGCTCGGCGTACCTAATACTCTCAGGCT", "ACATCCATAAGATACATTAATCGGGAGGGCCATCTGTGCGGCGCCACGTT", "ACGGAGGATTCGTGACGTAACGCAATCTTGATAGCCTACATTGCCGTATT", "CGCTACCCGGAGCCGTTCTGTACCCTCGGGCATTTTAGGGTAGGCTCGGG", "TCAGGCCACAGTACCGACTGACGGAACTGCCCTCACGTCATATGT"};
    vector<string> codonTable = {"CAT oazML", "TCT Yu", "AAG ba", "TTT T", "CAA T", "CAG tVOeL", "GGG WMBi", "CTA ba", "CCT oV", "AAT T", "GAC hlw", "ACG Fvs", "TGT oazML", "TAG xhl", "GTT WiX", "CTG tVOeL", "CGG WMBi", "CGC s", "AGT Fvs", "GGT sqLx", "ACT T", "GGA hlw", "AAC kTYF", "GTA j", "TCA eHm", "GTC kTYF", "TTC hlw", "ATG kTYF", "GCA j", "TGC hlw", "AGG SKj", "GGC j", "CCG Fvs", "GCT fvWE", "GCG Yu", "GAA fdWr", "GAT Qe", "ATC ba", "CTC hlw", "TAA fvWE", "AGA sJ", "AAA WiX", "CCC T", "ATT s", "TAT sJ", "CCA Yu", "TTA fvWE", "TGG hlw", "TTG fvWE"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 107558841;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> DNASequence = {"GCACACTATCTACGCGTGGTGCAAGATCATTAATCAGGCCAGCTTGCATA", "TTCGTAGACATGATCCGAAACCGGGCTACAAGTCTACTATTGTTCGGAAG", "ACAGAGATGCGGCCAGTCCTAGCTCGCAGCAAGAGGAATGCCGTTGTACG", "GCGAGAGACGTCGCCTACTTCAGATTGATAACCGTAGCCAAGCGAGTAAA", "GCATCGACGGCGAGTTGTAATAGAAGGTAGTGCGCTTTGCCCCCAGAGCA", "AAAGAAGGTGTCTGAGTTCCGTTAATAATCATCACCCAAGGGACTACATT", "TTCATCGTCCACGCCAGTCGTATTTCGGCCCGGTATGGAAAACGTGGCCA", "AGCGTGACTCTGCTTCACAATACGGGTTAAGAGAGCGGTCCCATGTGGAG", "GTGACTGAAGAGAGGGCTGGGAAATGTCTTATAGTTCTTCCTCCCACTGA", "TTATTTTCGAGGTATCTGGAAATCTGTGTCGAGGTTCAGACTGGTCAAAG", "AAATTTTACACAAAGTTAGCAAAGGTAAGAGGAGTTCATTAGTAACTTCC", "ACCAACTACCAACCAGGCGTAGCTGCACACGAGAAGCTATAAGCCGACAG", "GATAGCTGTTACTGTTGGAGTAGCCCACTAACCTCAGGGTCGGGGCCTCT", "CGTAAACACGATACATCACATGACTGGACATTGATGAAGTGGAACATTAG", "GTTGACTGCGGGCTGGCAGATGGTGATCGGATCGCCAGACTGAGCGTTGT", "TCCTGATTCCCCGTAAAAGACCACACCGAACTTTACTGGGAAAAGCAGCA", "GGCGATCCCCTTGAAACTGCCGCCGATAGAAGGCTGGGCAAGTAGTAAAG", "CCTGGTGCTGCTTAGAAGACGAATAGAAGCGCTTACAGGTTAAACGCCTC", "TTCTATCATACTCAACCACATGCTATCCGATCTGGTCATAAATTATGCTA", "TAAGTACGCAGGCCTAGAATAATTTTATGTTCTTAATCGGCGTTACTACT", "TCGAGCTGGCCTGGAGGGCTTTCCCTTGTGTAACAGTTTTGGATTATCGG", "GTCCGTGCTCAACACCGGGCCTACCTTGGCTTGGGTTTGAGGAAGCCTAA", "GTGGGACCGAGCGTATCTCATAATCGGTTAGCTTCCTTGCGTTTATACCC", "TGTTTGCCCGCACGTTCAAACGTGCTTTAGGTTCAAACTTCGTTGCAACA", "AGATTCAAGAGGTTATTCAAGCACGGTGGAGGGGCCCCTATCGAGAGTCG", "TAATCGCATAACGGCAATTTTAATAGTGCGTAGTTACAAGAACAGTAAAT", "TTTTAGTTTGCCGAGTCCTCATTCTCGGCGCATATTGACCATTGGTCAGG", "CGTGCACAGTACTTCCAACCCCAACGTTGCTAAAACACTAGTCTATGATA", "TGTTGGCCCATGAGGAAACTACACGAGTCCTGAACAGTCCTAATGAGGAA", "TACTCAGATACCGCCACCTGTAGTTTTCCTTGTGTGACGTCAGATCAGTT", "TATCTAGCTCGAATGTCGGCTACCAGTAGATCAAGGCTAGGGGACTTGTT", "AATCCGCAGAATCCTAAGGATTGCTCACATGATCCGATGATATACAACAG", "CTTAAACACCTACATGGTCGTAGAAACACCATGTTGTAGACCAGCTTCCG", "AGGGAGGCAATATCTACAAAATTCCGGGAATAATGACTCCTGCAAGCCAC", "TAGACAGCGACTACAACCTTGCCACTATGAACAGCTACGGCACCTCCGGA", "TTCGTTCTCCTC"};
    vector<string> codonTable = {"ATT wfzQY", "GAG AMHGG", "CTG peun", "TAT f", "TGA tM", "CTA lQ", "CAG peun", "CAT ur", "ATC wfzQY", "AAC XKUp", "CGG AMHGG", "TCT e", "AGC lCNN", "GGA lQ", "ATG ur", "CGC ca", "GCG jW", "CAA peun", "TCC wfzQY", "CGT iln", "TGC vsJgG", "GCA IG", "GCC IG", "TAA lN", "TAC jW", "TAG lQ", "CCT lCNN", "GAA vsJgG", "TCG IG", "AAA XKUp", "GCT f", "GGT wfzQY", "GTT lQ", "AGT f", "GAC pIh", "GGC lQ", "CCC ur", "TGG e", "ATA ca"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 491855807;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> DNASequence = {"GATTATCGAGTGTAAACCAGAACACTTGGTTTGCAGGCTACCGGCGGTCG", "CCAGTCCACATGTCATCAAGACAGACTGGGGCCGAGACGCCCCGGCCACC", "GCTAATCGTCTCTGATTAGCTAGGGTAATTTCGACAGGGCACTTCTAGTG", "CAGAGTTATATACCCGCATACTTGAGCATGGGATGGACGTCCGGGATAAA", "CCTGATTCTAACAAGGAGCGCTCACAAGAAGCCCACGTTCGGTGGCTGAG", "GTTATGAGGAGTTCATTGCCCAAGGGCCGCCTGGTTTTCCTAAACAGAGA", "CAACAGACAGTCCTAGAGCCAACAAGAGGAGAAGCATCCGCAATTCTTAG", "GAGACAGCGTCGTTTGTCCAATAAATCTACTGTCGGCGACCTAAATGTGA", "TGTTAGACCAGGGCCGATTAGGTGGTTGCCGGCTTCCTTTGCTTTGCTCG", "GCGCATATCCACACGTTACATATATAGAGCGTTTGTCGCTACGCTTGATA", "ACATCGGCGTTTAACGTTGGAGAAATTATCAGTCCGAAAGTTCTTTTCAC", "ACACCCGGCTACCTTTTTGTCCCGAGCTATGCGGTAACGCGAGATCGAAT", "GCGAAGGTCAAACGAGGAATTATCACTGCTCAACAAAATTATTCCTAAGA", "GCACTCTAAAGTAGGCGGCTCCAATTTTTCTCTGGAACCACATTGCGTCA", "ATCCTGGCCCTGGCTTCTGTGCTCGCGTAATATGCCTATGTATCCCGGGT", "CTGAATCGACGTTCCGTGAATTCCGTTTCCAGAAGATAGGTTCAGGGTTG", "TCCGTATATGCGTCGCCCTAAATTATCGAGGTAATTCATGGATTCCGGGC", "GGCTCCATCATATTAACCAGCAGGTCCCAAGGGACCTCGGCCGAAGACCC", "ATCACGCTACTGATATGTGTCCAACAGCCATCTGCATTTGGCTAGTTTAC", "ACTACGACCCCGGAGAACGTATGGTTCAATTCGACCATTCGGATGGGGCT", "TCACAGATGAACCGTGATCTGATGGCGTCAAGCAATGAAGCAATGTCAAT", "TGGAGTTTAGTATGATCAGCGACGTCTACTTGTCACGTGGCCGGAACTAA", "GGACTGTAGGGCTCGTTTACTCTCATCTACTAAGCGTGGCTTTAGCGCAG", "TTCAG"};
    vector<string> codonTable = {"ACG BV", "TCT BV", "CAG J", "ATA Fb", "TAC BV", "CTC BV", "CGC J"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 645650782;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> DNASequence = {"GTTTCATACTTATGAGGGCGGTAGGGCAGTGTCTCTTGTACAAGGCGGAA", "TGGTTTCGTCCTGTAAATGTTCTGATAGCAAGGGCCCTAGGCCGACGAAG", "GTACCAGCAACAGAGACAGCGTGCCGTCGTATCAATAGAAACAGTGAGGG", "CGCAAGGTATCACTACAAAACATCAACAGAGAGAAGGGTGTGGGCGACAA", "TCCATCAGCGAAAGAAGAACGTAGCCTCTTCAGTATGACAACAACCAACA", "CATCGGTTAAATCAACTATGATCCTTTTTGGGGCAGCTCCTCGGCACGAG", "GACACGTGCATAGTTGCGCTAGGAGCAAAAGGAAGTGCCACACATGGGTA", "CTAATGCTGTTTCGTCCCTTCATTAACAGGAATACAGTGTACATATGCGC", "ACCTGTGCTTATGTGAGTTTCGGCCAAACGCCAGAACGCGCCCAAAAGGG", "CATACGACGTCAGCGGCATTGAACAACCGAAAATATCCGAGAATTATGAA", "TAATCCTTTCGTCGACCCTCCCCCAGCTGTTCTGGGACCTTAAGAAACCG", "TTAAGAGCTTGCGCATAAGCTCTTATTCGGATCATACCCGAAAGCATCAC", "GTGCAGGTATCAATCTGTAACACTGTTCAGGGCTATCGATCTTTAGAGCA", "AGACCAGGCGTATATTTACTTGAACCACACTAATCCTCCAAGAGGGCCGG", "ACTACGCCATGTTGCACGCTGCCAACGTTTCTGGGATATTTCCCATCCCT", "GCGCCATATATGGCTTCATGTCAGTCCGTGCTAAGCACCTCGCAAGTCGC", "CTTCCATGGCTAGTATGCGAGAGCCGAGAAACTTGGTCTCTACCTTGCGT", "CTGAGAGAGAAACTTACCTATAAATGTCACATGGT"};
    vector<string> codonTable = {"GCT F", "TAC l", "AGC Z", "TTT TW", "TCT UMI", "CGG s", "ATC Fgwt", "GCA S", "TGT Q", "AAA Fgwt", "TAT TW", "TTA Z", "ACC Fgwt", "TAA F", "AGT YC", "AGA YC", "ATA s", "GGA Z", "GTT l", "GTC DhwKH", "CCG TW", "TCC YC", "TGA S", "GAG TW", "CAT Z", "CGC l", "TGG S", "GCG Z", "GGT s", "CCA l", "TAG DhwKH", "ATT l", "ATG l", "AAG s", "CTC YC", "AAT S", "GTA UMI", "ACT oq"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 344353134;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> DNASequence = {"GATCTCCACCGGTCTAGAAGCCCATTAATTCCTGTAAGACAAATCTTCTT", "AGGTGTAATTTGGATCATAAGAAGTTCAGGTGGCCTGCTCGAATATGAAG", "CGGCTCGGCTGGTTCGAACGTAGTGACTACTCCCGGGTGACTAGACTACG", "GGAGTGGGCGAGCCCACATAAGTATTCCTGATTACAGAGCGAAACCATCG", "TTTATCTATCGTGCGATTACGGCAAGCACGGACTAGGGGCATGGATGTCG", "GATCATATGCCTCTATCGCCACGAAGTGCGTCAATAGTTTGGACCCGGAA", "ACCGCCGGAAGTCGTGGCCTGCCATGCCTCCTTTCGGAGGCTCTCGTACG", "TAAAATGCGCGAGCTACCCAATTCAGCTGTTTTTTGCCAATGCCCGCTCT", "TCAAGCGAGTTCAAATGCGACCGTTATATGTAAGAGAGGGTCCTTCCCTA", "CGTCTACAAAGGAGTCGTATCTATCTGTGCTCCATGCGGCGTAACTCAAC", "GTAGACCAGACCCTTGCGGAATTCTAGGAACGTCTTTGTCAATCTACAGA", "AATGCCGAAGACGTTCCACGCCGATTAGTAGTATCCGACGATCGAGACAC", "CCTACCTTAATAGTTAGCCAACTCAGCAACTCTATACATTCATATAACCC", "CCTAGTGAGGCCCGCGGGGCCACGAGGCAATTCCTAGCATACGCCCAAAA", "TCAGACGGTGGACACGCCACGCGGTAAGAAGTCGTCACATAGGTGACACT", "TCGCACCAACAGACGTTGGTTGCCCACGCGCGAAAACCATTACTCAAGAG", "CTGTGATAGGGATGATGTGGATGCAATCGTAAAGTGACGGAGAGTACTTC", "CTGCAGCTACACCAAAGACTACCAAAATTGGGCTACCTGTGGGAGGATAC", "CAGTAGTACAGAACTATATTTCCCTCATGAAAAGGATCCATAATCGTAGC", "TCTGTAATGAGGAGTGAACCAGCCCGAGGGACAGATGCATCGCCGGCGAT", "AACCCTACCGATAACCTATGGGTAACACAAGAAATTTTGATATTAGGGGC", "TTAAGCTGTTGTGGTCCCGCCCCGACTGACCTACGGTCTCGCGTACGTTG", "GGAATACAATTCATTGCCAGTAACTATTTCCCACCGTGGTCCGCGCCATC", "GACGCAAATTCGACACATAAACCGGCCACGCCAGACGACCGTAGAAAAGC", "AGTTGCGACAGGCGTTCCTTTCCTACTCCCTTCAAATGAGGGTCGAGACC", "TGGGCGAAATCTATGATCGTATTGGCGTCCAGAGGTTGTGCGCCTACACA", "GTGCCTTACGCCTTACATCTCTCGAGGCACTGGCAAGTAACTCGACCAAT", "TCAGAAGATGCATACTAAAACCTTATACTAGACAATAGTTTGTAGGTGAT", "GCGTGGAGCGGAGCAGGCTCGAATAGCTTCACTGGTGACAGCATTCTCTA", "TCCTGCCCAGTAACAAGGAAGGCGCGAGATATACAGTCATAGGCAGCGTC", "GCACACACCCGCGGTAGACGGTTTGTCACGCCACTATTCGGCAGATGGGA", "GTTCACACCCATTAGAATGTCTGTCGAAGGCTCGGCCGTTCTCGTAAGTG", "CACATGGTGTTAAGAACCGGGATAAACAGGGAGAACGAAGTTGGCGGTAT", "TAGAAGACGACTAATCTTCTCGAATCACAAATAGTCTTTCTGGGACATGC", "AAAACGCCACCAGTGCGCACTTCCCCGCGTTGGGGATACTTTGCATGGAG", "CTCTAGGGATCGCATAAAACTTACAAAGAATCTGGTTTCGAGTCGACAAC", "CTACAATAGTACGTATCGATTACACCATCAGTTGATGTTTATGGCACTGC", "ACCTCTGCAACGTGGTTTAACAGAGAAATGCTATACAGTAGGATGGACCC", "CTCAGCAGCTGGCGCCCTCGTAGTTTCGGGAACCCATCAAAGGCTATGTG", "GCATGTACCGACGCGATCTTCTCAGGCCGGCTACAAGACCGCTTTCGAGC", "TAGGCTGTGTCAATCATCAGTGAACTTAGCCCCACTTAATTTTTAATTCT", "CGCCGTGCGTTAAACCTGCGCGCACCAGGCCAATCGAACGGGAGGCATAC", "CTATTCGTATGCTGGGTGGGGTGGCTACAATCTTGAGTTGACATAGCGGC", "TTGCCCACTACCTAGCAGAGTAAGGCTAACCTGCAATACAAGCTGCAGAA", "TTAGCGAAAACCTCTTCATGCGTTCCGCAGCGTTTGCTGCTCGATCGGTC", "TGAACTCCGTACCTGGTACCTGTCGATTAAATGAGCTATTTTGGCTTGTG", "AATGCTGAAGAATACCCGCGCACAGTTTCCCTCACGTAGTAGGTGAGAGA", "GCACCAGATCCGGTGACCAAAAAGTGGCATTGGTACTACACTAAAGATCA", "TCCTAG"};
    vector<string> codonTable = {"TGA Kd", "TCG sG", "TGT f", "CAG dsRAp", "ACA g", "AGC sG", "ACC TM", "GTG ALrSE", "CCC Kd", "AAA t", "CTC c", "CTT MtH", "CGA srBrP", "GGC TM", "TGG dsRAp", "GAC TM", "TCA sG", "TAC elV", "CGG t", "GGT V", "TTC Q", "CGT Kd", "AGG Q", "CAA t", "ATA ALrSE", "CCA ALrSE", "GTT srBrP", "TAT elV", "TCC t", "TAA cMyQl", "GTC c", "ATG V", "ATT B", "CAT B", "TTA c", "GGA V", "GCA V", "AGA g", "AGT B", "GAA Q", "GGG c", "ACG elV", "TCT Kd", "TTG srBrP", "CTA TM", "GCT Kd", "CCG Kd", "GCC dsRAp"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 518355409;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> DNASequence = {"TCGCTTCTTGGGTAAGTCTGCAGCGGCTTCGATTTACGGGGTTCTGCAAG", "ACGGGTTAACCGCGTGGGGTTTACGTAAGAGGCTTAAAAACCAGATTACC", "TGGGAGCAGAAGGTCCTTTGTGATTCACCCTGCTTCCATAATGAACCGGG", "TCGTACGATATCAGGTAATTAGCAGCCAAAATCGCCAATGCAACGGGGGT", "TGCGGAAAACAAGTGAGACCGTCGGATTACATACCACCATTCTTGTTTTG", "ACCCAATTGTG"};
    vector<string> codonTable = {"ATT n", "CCG m", "CGG qF", "GAT n", "GCT m", "CCC U", "TCT U", "ATA qF", "CAT U", "GTC U", "AAA n", "TTT qF", "CAA U", "TCA qF", "GAA m"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 71326878;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> DNASequence = {"CAGCCCGATTAATAGATCAGGAACCATAAACCAATTCCTGGGACGGCTCC", "CACCCTCAGCAATAAATTTCCCACGGCACTTGTGAGTTGCGGCTACTTGA", "GCTGTCGGCACGGGGAGCTTTCTGGTATAATACAGGCTGGGATTACTGTA", "CATGGCCAGTATTCTCAAAGGGACCAGAGCAATTACACCGGCCCTAGGAG", "TGTTAGTGGCCATGTTATGTTGGGATGGCGTGTATGAATGTGGATTTGAC", "CTAATCTCAGCGGGGCTGCCGGATGGACTCGGGGGCATGCCAAAGGCTGG", "GTTGATTCGATTGCTGGTCTGTTGGCGAGTGTATTAAACGCGTACAGATA", "TTGACTCATCTTGTACGATAGGACGCCGCAGGTTGGAAAGCTCCCCTACA", "AAGATGCGTTGCCCAACACCGTGAGACTATTCGTCCCGAGCAAGCAGTCA", "GAGGCTGTAACGCACT"};
    vector<string> codonTable = {"GGT oXnT", "CTG oXnT", "GGA oXnT", "TAG oXnT", "GTA oXnT", "TTC oXnT", "CTC oXnT", "GTT oXnT"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 87;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> DNASequence = {"GAGAAAGCTATGGAACGTGACCCCTCCCCACAAACAAACTAACAATCGAA", "GTCCGGTACGCTACGCTGCGTCGGCGCGTTGTACGGACGCCAACTGTATG", "GAAGATTCCCGAGGCTTTGTGATGCATGACTACGGCCCGTTTTCTAGATG", "TCGCCCCGATAGTTTCGGTTCCCGTGGTGCCTGAGACAGTTACATGCCTA", "AGCCTGATCGGTCTGATACTTGTGAATCCACCGTTTTTAGTGTGTCAACC", "TAAAGAATTTTGGTTTAAAAGTGCTCTTTAGAAGCGACCTGACGTGCTGC", "TGACATGGACGGCGTTTTAAAGATTTCGACCTACGAGTGGGTTCCAGAGG", "AGGACCTGCTATAAGGATTACCTGTAGTATCATAAGTTTGATCATAGGTC", "GGGCTCCCGCACCTCCCGGATGTGGCGGACAGAGATCTAAGACCTGTGTT", "GCCTACGAAGCATTATACAACAAGCTTGTACCCGGTATTACGAGCATTCT", "TGTGTGCAGGAACTGAAGGTGACAAGATCTAGCGTGTAGCGGTACCCCCA", "GAACAAACTCGGAATGGAGTTTCAGGCAATAAGACGCCAGTGTTGACTCA", "AGGTGTCATCGTCTTTCGGTGCCCACTCGGTATCTCGGCCAAGTTCAACA", "TACGCCAGGATCAATTCCCGTCGCGTTATGAAGCGCGAATAGGAGCTCTG", "AAAGCACGAGGAGTCGGAGATGGCGTTCGAAGAAGCAACAAAAGTTTTTC", "TCACTGGCAGCATTCCGCTATTATCGAACGCGATATCGGTTCTCGGTTCA", "GGTGCATTAGCCTCGTGCTGGAACCGCACTAACGATGTAGTCAATAGTCC", "CACCCGATGCAGTCTTACAAATTCGACTTTGGTAAGGATTTTTAAATATT", "ATCTGAGATCTCCACCACTTGAACAATTAAACTCGTCTTGACACCTTCGA", "GTAAAAATTCTGTAACTTACCATTCGAGCGAACAACCCGGTCTATGCACC", "CTCGATGATAGTACTCTGTTGAGCACACTCGGAAGAGTCCTAGTCCGACC", "TACCCCGTGCGTAGTGACCCTGCCTGGCGAGCAATCTCGCTGGGTCTTGA", "GCGCGCATGGTTATTTGAAGCTTACATAGCATTGGCCGGATCTTGACGCC", "TTGAGCACCGTCTAACTCCCCGGGTTAGCCAGGGGTAAGCGCTCTGGAAA", "CTGACCGCAATAATAGAAGATGCAAGGGGAGCTGCGAACCCGCCCCATTA", "TAGGAGGAGTATGTCCCTCTGTTAGGTACAAGAGGATTACAAAATCCAGT", "TTCAGAACACCACCGACTTTGTTGTCCGCATGGGATGAGACAATCATTTA", "ACGGCCATCCTGACTAGCATCTTTAGTGTAGTCTCTACACTGAGATGAGA", "TCTCGTACCTCCCTGTCGACATAACCTCCTCGGGATCCGGGAAATGGGGG", "CGCCAGTTAGACGGAGCCAAAAAAAGAGTGTGTACTGGCGGCATCACTCT", "GTTGT"};
    vector<string> codonTable = {"AAC opfh", "ACT udk", "ATT V", "GAC Nte", "TTA BPV", "CTC atqbC", "CCG opfh", "GCC opfh", "TGC Nte", "TTC mr", "CGG opfh", "GGG GOaH", "CTT V", "CGA Q", "CGC Nte", "GAA BPV", "GGC k", "GAT ubw", "GTT udk", "CCT Q", "CAG mr", "TGA EcILr", "GTG opfh", "GTA Nte", "CAT p", "GGA Nte", "AGA atqbC", "CTA Nte", "GAG opfh", "TCG XJOk", "GTC mr", "TTT XJOk", "CAC C", "CAA atqbC", "GCA EcILr", "GCT atqbC", "TGG udk", "GGT BPV", "AAA Sa", "TCC ubw", "AGT Sa", "ACG EcILr", "TTG EcILr", "CGT p", "TCT k", "CCA EcILr", "TAA opfh", "CTG EcILr", "AAT BPV", "ATA GOaH"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 746537094;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> DNASequence = {"CGCGTGTCAAACAACGATAATCTTCCCTGTTCTGAAGTCGTCATCTTCAT", "CGGACACTGACCCGATGGAAGGCGCTCGGTTACCATTCCCTTTGCTCATT", "ACCCATGTTTAATCCGGGAAATTTTGCGGGCGATAACGTGCTGAGAGGAG", "GATTGACAGCGCAGGCGAATGTATTAGCGGATGTATTTTTGCGGATAAGC", "TTGTCCTATCGTATCACGTGCCCACCGCCTTGACTCTACATAGTGATAGC", "GCTACGTACGTGGGCCAGCTAGTGCCGACTCCGGCCGGCAGAGTGAGGAA", "CAAAGCCTCGATAATCCCCTCATATCCCCCCTCCTAGATAGTGGTCAGTC", "TGCAGGTAAGCTCTGATTAAGGGTTCGTCCAGACGGCCACACGTAGTTCT", "GACTTGGCCATCGTGGTAATCCGCGGACTCGCTAGAGTTAGATTGCCCCT", "GTGTGTTGGACTCGTAGCTCCCTGACACTCGCATGGACGGCACTGGTTAC", "ATTTCTGTACGGTGTCGTGTTATGGCGCGGTGCCCGGACGCAGGACCGGA", "CCAGCGAACGGGGCAAAACCGTCTTCGGAGGCAGACGACAACGGTAGTAA", "GGGATCTCATAGACTATCCACCCCAGCGCCAAAGATATAACAGCCCCAGT", "AAGCCGATGCGGCATCTTATTCGCTATGACTATCCGCCTATCGGCCCAGC", "TCTCTATAGTTCGAGAGATCAAGGAAACAGTGAAATATTGCACAAAAAAT", "CAGAGGCGACTTATTCATGTCAGTAGTCGTGCTTCCCTACATGAACCAGC", "GCCTGTCTGCATTGCGATTCATGGTACAAACGCTCCAGGGAGTTTGCGCG", "ACCGCAGTAATCGAGCCAAAGAGCTTAGCTGCGAAAAATAACCGCCATCA", "TAACTTGTTAACCACTATTGTTAACCCTGTTCTGTACTGGTGAAGTTAAA", "GTTGTGAGCGCAAAGTAAAGAGGAGTTCTTCCCGAGTAGAGAAGAGTCGT", "AGCGAATTCACTTTCTCAGAATCATCGATTTGTATTAAATCCAGGTCCTA", "CTGTTCACCTGGCCGAGAAATCCTACATTTTGACTTTT"};
    vector<string> codonTable = {"CCG xq", "TAT h", "TTG lD", "AGA Mf", "AAG lTcPj", "TCG q", "CCT h", "ATG YKCO", "TTA zKA", "GAA njf", "GTA laRYG", "CCC wdMe", "TCC zKA", "TTC lTcPj", "CAC h", "AGG zKA", "CGA osq", "TGG RcOI", "AGT Uf", "TAA h", "GGG laRYG", "GTT laRYG", "ACG Uf", "CGC xq", "GGT YKCO", "GCC lD", "GGA h", "TCA ByxJM", "GGC qO", "ACC wdMe"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 341164996;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> DNASequence = {"GACCCAAAGAAAAGGCGCCTACCCTACTTAATCCGTTGGCAGCATACCTG", "GTAAGTACATCAATTGCAGACGGGGCGATCGCAGCGCCATGTTAAAGCAT", "CTCACACACGTAATACCCTTGTATTATCTGAGCCATTCTGCAGCTGGACC", "TAGTTCTCGAAGACAAGTCCCTTCAAAGACATTAAACGCAGCGGTAGCTC", "GAGCCGCCTTGGACGCCAAGCGAAGGATAGGGGGAATTCCAAAACGCGGC", "TACTCACCTTATCGCTGGACAACAAGGTTGGAGATAAATGTTCGTTCCCC", "TTCATTGTACCGCAAGCAGGGCCACGTTCAAGTCGAGTTGGGGAAGACGG", "AGCCGTCTATTACATCACGGCGTAGTGGGTGGCACCTTGTACGCCCTCTT", "AGCGGACTACCGATGCGCGTGGGTCAGGTTCTCTCCGGGGAATAGCTTTC", "CCCAATCGCGCGCGCGAATGGTACTGTACATTTGGTCACTGGCATGGTGC", "CGGCATAGTTGAACGGGAGCGTAAGTGTAGACTGGTCGCACCATTACTAC", "GGGGATCGCCTCTAACGTCATTCTAATTTGGCTTATCCTTTAGACGTACG", "AGCTTTTAAAGGCTCCATTTAAGGAAGTAACAAGTTCATCATACACTAAA", "GAATACTGGTGCTGACCCCATTTTGTGTTGTCAGGAACGGGTATTAGGCA", "GGTCCTGCATATGACGACAGCATCTATCGGCGGAAATACTTTACTTAGGC", "TACATGAAAAGCGTCGGGGACCTTGCAGAGATACGTAGTAGCTTAGTGGC", "GAGTTTGTCGTTCTGAAAATAGGTTGTATCCTCAAATGTATATGTCATCA", "ATGAACGTCTGGACGACTGGTCAAATCACGACCACCCCAGGGTGACGCGT", "CCGCCGGGAATATGAGATAACGAGTAACTAGGCTAGTGTTAATTGGCGCT", "ATCACAACCTCCCGGCTCCAGCATGGCATTTTAATCAGTCCATGGTACGC", "CGTCCCATTTAACAAGCATGTAGAGTTGGTCACGCTCCAGAAGCAAACAG", "ATGAGTTCCTGTTATATGCTTCTCTTCGGTTAACAGGTCAAAGGCCGGAA", "TTTAGAGCGTGCTGTTGCCATCACACTGCTAGATGGTTATCGGGGTTTGG", "TCATTCAAACTAATTGTCTTGGTTTCAAGAGCCAGACGACAGTACAAGCT", "TACAGGCGAAGGCCGACAACTAAACTACCTGGTAGCGACGAAGCCTTTGT", "ACTACGTCAAGGGTGGGGGATACCCTAGCGCCAACCGATAATGGAGTGTT", "AATCTGGTGACACCAGTAGAAGTGTTTCTAGTCCGGATCGGTAAGAGCAT", "CACAAATTCAGATACCGCAACGTCGCCGTTCGTGGTGTCATAACACTGTT", "GGCCACTTAAACGTAGCGCTGGTGATAGCGCATGCGAGCAGCCTGTCACT", "TCTAATTCCGAGGTTACTGTTTGGCGCTGGCTAGTACCCGACTAAAACTA", "AATGGGTCTTAGAATTAGGTTAGAAGAACTACTGATTGGACGGCGCGGCG", "CGGCAGAAGCGATCGGGCTTTGCCAAGGAATCGCTGAGAAAGAGAGTAAA", "TTGAAGAGTAGCTTTATGGTGACGGCTCCTCACAACGAACCGTGCCGGAG", "CGGTTTAAGCTACGACAGTAAGGGTCACAAATGGACCACATGAGGACGGG", "AATGGAAGCCGTGTCGGGAAGTGACTATTACTAGCGGTTCGCGTGACTGC", "TGGCGCAGGTGCAGACTAGACTCAAAATTAGAGGTTATCGACAAACCGCC", "GTGCTACTTATCACATGAACAATAATCTCTGCATTTTGCAGGTACTTAGG", "CGGGGATCTGGCAAGTTTTGTCGACAGAATGTCTCATGCAGCCGCCTGGA", "GCCTTGTCGTGTAAATAGCTGAGCAATTGCTTTGAATTCCCAGCAAGCGC", "GTCTGCTCGCTCACCACGGGCAGACAACCGTATGTCCAGACCTCTGTATC", "GGCTATTAGGACGTCCGTCTTGAAATGTTTGCCAACGTTTTTACACGGGA", "TCGTTAACTGGTACTATCGAACTATTCCTATACCTGCTCACATTCATATC", "ATTGTCCGTGGAGATCAGACGCCCGGTTGAGGTTTAGAGCGTTGTAATGA", "GGTCACATGGTGTACCAACGCACGGAGATGATTTGTAGCGTGTAAGCAGT", "ACGCATCATAGGTCCCGCAACTAGTAGAATTAGCTAAGATGGCCAGTGAT", "ACAACGAAGATCCTGGTGTTCTCGGCTTATAAACACAACGCGATCGCGTG", "CACTGCGCGAGGAGACAACCGTCAATGCTTCGTTTCGCTTCCTTCTGCGA", "GTGATGTTCAATATATGAGCTCTAGGGTCTTAACAGCTCTGCAGGACTAA", "GGCCGACTTTACTCTTAGACCGTCTCTGGTATCCGCTAGATACACATCGG", "TCTATCCAAAGATATCCATCAACTCTTGGCTCTCCCTTCTTA"};
    vector<string> codonTable = {"ACG VVP", "ATC FBDW", "TCG FBDW", "TGA L", "AAA yvrnc", "TCC VVP", "CCT rptQ", "GAC yd", "GTC VVP", "GCC VVP", "GAG GH", "AGG yd", "CTC yvrnc", "TGC yd"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 404381258;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> DNASequence = {"AAAAATTGTAGCCCTTGCCGAATGGAAGACAATAATTTCCTATGTACCCT", "ACGTCTGCCGGCGCCGGATCCACGAGACCCACGGAACGCGTAACCTACTT", "TGGGTGGTAAAACGGCGCAAATCAGTTAGATCGCCTAAACAACCGCGTTG", "GTTATCTCCTCAGCCAGTAGGAAATGCCTGACCTCAAGCCCTCCGGCTCT", "TATTAACTCGCTAGACGACATT"};
    vector<string> codonTable = {"CAT h", "TAC Io", "AAG Io", "CCG h"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 208327678;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> DNASequence = {"TGCGCTTTGCTACAGAATTTGTTTCCACCTGGCCGGGCCTGGGAATAAAT", "TACATTTTGGAGGTATCGGTCTCAGCTGCGTAGGACCTAATAGCTGGGTT", "CACGAAAGGTTCTCATTCCTTGGCACCGCGCTGTCATTGTACGTTAAACC", "GGATCAGTGACCGCGACTTAATCGAGGCGCTTAGACGAGGACAGTGAGCT", "GCCACCGATTCCCTACGGCGTTATCTTCCGAACCATTGTCCATTTTACCC", "AAGATCTATGATGCGGGTTCGACCTGGTCAACAGTGAAGGAGCGACGGGC", "CTCTGATTTGTTAGTTTTGCCGCGTCACCGGTCAAAATTGCACTGGACTG", "GGTATCCTTTCCATTCTTGACCCGGATGTAGCACCTTTCCCTTCCATGGT", "AAGCGTCTCGTAATTCCAATCCAATCACCGGCATTGAGCCGATGTACGAC", "CTTTTAGTCATACTTGCTGGATGTCCTTCTGTACATTACGAGATCTCTCA", "CCTAGATCTGGTCAGTTCTGCTTCAGGTTATGCCAACTCGCCCTCCAGTT", "GGCCACCAGGATTTGTTAAAGCCCATTACAGAAATACGACTCGAGTGCTG", "CCCTTCAACTCATCAACTGTGCGTTTACGTACGCGTTATATGAAACCTGA", "ATTGAACACATCCCGCGCCTCGCTGTGAATCAAGGAGAAAATCTGAGGTA", "CGGTCTAAGATAATGGTTGTTAAGTAACGTCACATGTGGCGTCAAAGGTG", "CAGTACTATCTGCGGGTCTTGTAATACCGGACAGGAACATTTCGCATATC", "TCGTCCTTTTTGGTTTTGGTCCAGACGTCCGGTTCAGATTTACCTGGATT", "TAGTGGATCCACCTGTTGTCCACTCACAAATGACCGACCTGCGAATTTCC", "GTCCAGCTGCTTATGTCAGTTTACTAGCTCTTGGGATATTCAATTGAGGG", "CCTCTACTCAGGTTGCTCCAGTAGATGACTAGATATTTAATGGATTCAAT", "CGACGCATCCACAAGCGTGGTCGCCCATCAATGAATCAAGCCATCAGATT", "AAGGCAACTCCTACTAGAAAGCCGGTGTGCAGCGTGGTACGTGGGTGTTG", "TCCGAATAGCCGAGGTTTATAGAGGGCTTGTAAGACGTCTGTTGCCCGGC", "TGATGGTATAAAAAGACTTTCCCGATACTGTAGGTTTATAATACGGCATA", "GGCATTTTGACTAACGTGGCAAGACTATGTTTCATGTACCCTGCGAACAA", "TAATACAAGGTTCGTGTAAGCCTCTCCGTCGCCGGTAGTGGCCAAGAGGA", "TCCATGCGTACCCTAAAAGGATACGACGGAGTCATGGAGTAAGCTACGAA", "TAGTTTTGCTGAACATAGTGCTGCGTCACCCGTACATGGGCTGCGGAATT", "GACGCACTCTGTCCTTCACAGGGTATCATGGTGACAATTCATGCGCGCCA", "CAGATAGGACGGGTGAGATCCTGCGGTTAAGCATTGTCTGTCTTATTGTC", "AGGAAGGGCGGAAGGTTCGCATTGATCTCGGTTGTGTCTGACAAAGGGAT", "ACATAACCGTATATCTCGGGGGAGACTGATCAGTTGTGACTAATGCCACA", "AAAAGACCGCGACGTATCGGTCGTATACGCCGCCGACCCATACAGGATAG", "CGCACCGCTTTGCGCAGTCAGACAAAGATAGGGAAACGTGCAGTAATGTA", "ACACCACCAACGGAAGACTTCGGACGAATTATAAGCACTACGGAGGAACT", "TTTCTGATGGAGCAGCTGTAGGAGGGTGGGTTCAGGGACGGTTATTCACG", "CCTCATATCATGTGGCGGCATATACCTTCATTCAGCTAGAACGTCGGATC", "AACGATAGCCGGAAGGCTGATGTCCGACGTTGTGTGTTTGACTACCGTGG", "TCTAGAGGCTTGTATAGAGCGGTCGGGTCTCAAAAGAATCTAAACTCAGA", "TTGAATAGACCTCCTTATTGGAGGCACTCATGGCGGGGTGCGCTCGACCT", "AAGAGAACTCCAAACAGAGCGACCGTAGGTTATCATCAGGTAGTCATAAT", "TGTGACCCCAGGACAAGCCTAGGGCAGAAGTTTACGTTAGGGTGATAAGC", "TGACTCCCCTAGATATCTACCGAGGCCGCAAGGACCCTTGATTCATGTAG", "GCGAATCCCTCCCACTCTCGCCCATTTCAGCGAAGCTATGTAAAACTTGG", "CCCGCGCGCCTTAGTAAAATGGTGGGACCGCTATCCCTCTGGAATTATTA", "CCGGATTAAGACTAGGTATGGCTGCCTCGATATCATATGATGCAGAGCAC", "AGGGGAACTGCAAGCATCTCCAATAGTACGCCTAACCATGAAGAGAACTT", "TGGTTGTAGGGCATCCGTCTCCTACCCCGGACTGAATTCTCA"};
    vector<string> codonTable = {"CTC wEfGd", "TAG uKxRc", "TCA iKBRK", "ACC bAq", "ACT Yacw", "CCC JGSBZ", "GGT Ihst", "GCA o", "CGG JGSBZ", "TAT JGSBZ", "TCT wEfGd", "AAA q", "GAA wEfGd", "GTA q", "ATC bAq", "TTA Ihst", "AGT o", "CGT iKBRK", "CGC tB", "GTG gVG", "TCC tB", "GTT o", "CCG gVG", "TTT wEfGd", "ACG uKxRc", "GGA bAq", "GAC khGOi", "CCT q", "TGG NvPt", "TAA tB", "ATT iKBRK"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 257899967;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> DNASequence = {"GCAGGGCATGGAGGGTCACTCTAGGCAGTATTTTCCCGCGTAGTAGACGC", "GAGGGGAATTAAATTTAGCCTGTTCTCTGAGTAGCGTCGAGACATGTTGG", "ACTTGAAATGACCAATATGGGTGATTGAATGAATTGTTAACACTCTACAG", "AGTAGATGCTCAGCTCCAACACCTATAAGAAAATAGTTTGAAAGCTCTGC", "GGTCCTGCGGTGGTCGCGCAGCAGCCCTAAGGACACAAGGGCTTGGCATT", "ACGAAATTTTTCCTGTAGTGTCAAGGGAGCTAGCAGTTCAAATTTCATAT", "CTGCTTACTATAACCACGGTAGTTCCGCGGGCCTTGAGATGTTGAAGCGT", "GGTTCGGACTGAGAGTGGCGTATAGTATGACTGGACTGCGTCACCGGCTA", "AAATCGACTGCGTCTTTATGAAAACTGCGCCGTTTGCTAGTTTAGATCCA", "ACACCTGAGTCACGTGTATGGACTAATTCGGCAGTCCCCAGGCCTGACGT", "AGTCCTCGCTGAGGGTCCGTCGCTAATACCGCACTCAGCCCACAGATACT", "GGCACCAGCCCATCTAGTGAGAAACGAGATCGCTGTGATCCGCAAGAGCA", "GAAGACGCCGGTTACCTACACGGGGATGGAGGAATCCCTTACCTCTAGTC", "AAAGGGGCGGCTTTTAGATCTTTGCGCCTATTAGTGTCACATATATGGTC", "ACGTAACTCGTATTGACCCCGTGGAGCGTAATCAACACGTCCTGGCGATA", "TCTCAGCTTGTGTGGTAGAACCCGACAGCGGGATCCCTGGCCTGACTACT", "ATGTTGGTTACCATGCGAGTAAGTAGATGCAAGGTCTCAACCCCGCTTCC", "ACTGATTAATCATAGATCCTCTGTAGGTCCATTTCTAATATGAAAGATAC", "ACGGGGTGTAATTTAGCAGGACGACGGCCGTCATAGCGTGGTCCCCATCA", "CCCACGGAAAGGCGCTGTCCTAA"};
    vector<string> codonTable = {"CAT xb", "GAC zbnXN", "AAG xb", "TGG zbnXN", "TTA zbnXN", "GTA zbnXN", "GTC zbnXN", "TAG zbnXN", "CAC zbnXN", "CGA xb", "GGA zbnXN", "GAG XK", "GCC xb", "ATA zbnXN", "TAA XK", "TGT XK", "GCA zbnXN", "CTT zbnXN", "GGC XK", "TTT zbnXN", "AAA XK", "TCG zbnXN", "ACT zbnXN", "AGT xb", "TGC zbnXN", "GAA xb", "TCA xb", "AGG XK", "TAT xb", "GTG xb", "CTA XK", "ACC xb", "AGA XK", "AGC zbnXN", "TGA xb", "CCT zbnXN", "GCG zbnXN", "CAG xb", "ATC xb", "GCT xb", "GAT zbnXN", "TCC XK", "AAC xb", "CTG xb", "ACG xb"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 984696898;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> DNASequence = {"TGATCACTGAATGACGCGGTTACTATCCCTTGCTCGGTCTTTACTTCACA", "TAAGTACGCGTGTGCATATAGCTGTACGAGGTGGTCGGCATGGCTCCCCG", "CAAGAGGCTAATTGCACCATCTCCGGTAAGACAAAAGACTATATCCGTTG", "AACCCCCGCCTCGTTGTCGAGGTGTGCCTGATGCAATCGATTCCAGCGCA", "GAACATACGTAGCAACAGTAGATATTAGCCGACGCCCTTAAGGCGATGGA", "GTCCTGATTCGCTCCGTTCCGTATGGTTTCTTGGGTTGAACATGCGTGCA", "AATAGCGCGT"};
    vector<string> codonTable = {"GAC odIv", "TCT Si", "TTA QKE", "AGT QKE", "CGC odIv", "ATG NO", "GCG NO", "AGA F"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 321101032;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> DNASequence = {"TAGCTAGGGACGAACCTCCTAATTACAAAGATGGACAGAGGTTGTAAACT", "TTTAATCATCGTATTAGTGGCTCATGATGCACGTCGAGGTATCAAGAGCG", "GTTATAATTGAGCGCTGTCTATCCTCAGCCTAAAATAACGACTCAGGGCC", "TTGGGCAAACCGCCGTAATCGTTCGTAGTTAAAGGGAGGCCCATTGATGG", "GTCCGCAAATTATTGCCGACACTAAAAAGGGTTCACTACTTGTACCCGAC", "ACGTCGTCGCCGAGAAATATATCTTGGGTGATAGATTTGTAACAGCAAGA", "TGTGCATAGAGGTAGTTCCCGCTACCCCCACGGGGAGCATTACAAAGTTA", "GCCCTTGGGAAAAGGGATAAATACGATTTATTCGGGCTGAGGAGTGTTCT", "GCCGTAAATTAAATGACATAACGAATGTAACGCTGGTGAACAATTGTAGA", "AGTAGTTTCTTTTGACTTATTCGTGCCCCATTGATTTAAGTTCACCCGGC", "TCGCGTTAAAATTGTACAACATGCGAGAATTTACGGGCAGCACGAGGCAG", "GATTCCGACGGGCGAATACTGGGCTGATAACGAGTTACTTACCCATCGTT", "CCCATAGGTAGGGAGCTGTACTTGGTCACGGGAAGGAGTTGCTTCCAGAT", "ATCTCAATCTCACCAAACGTGTACCCTCCGGCCAGTCGATCCTTTTGGGT", "CGCCATGGGATTCGGACAGCTCTAGATTGTCCCTTCACAGCTCTCATTAT", "GTGCTTTCCCGTTAACCATTGAAATTCCACGAATCTAGGCCTGGTGAAGG", "TTGTGCAATCCCCCGTAATGCGTCTAAGAATTTCCCTCCCTGTGATTATA", "AGGTACTCAGCTCGGTCTATGTCCTTGATCATCGACAGTCTGGGGGTACT", "TAAACTTCTATTGGCGCTTGGAGTATCTTTAATAAAGTCCGGATGCCAGA", "GTATCAATTTCTGGGGGTTAGCAGGGCAGAATGCCACCTAAGTGGCTTGA", "GGCGTATGCCACGGTAGATCATCTCAAGTGACTCACTTAGGAAGGGGTGC", "AGGCCACCAGCACGCCAGACTGCGTCTTGCGGAGACGCGGCAGTGCGAAG", "CGGTTCGAGGCGTCTGTCACCCCAGCCGCTTTCCAGGAGTGACCCGAGCC", "CTTTTTGACATGTGCGTAGCTTCAGTGACACTTGCCCACTCGTGTGTAGC", "CCGTCGACGCCAAAGCCCCTGTCCTGAAGGTACCTTATGGGCGGCGATAT", "AGACCTACGGCCGTTCAGGATTCTTTCTACAAACCCGCGTAAGGTTATCG", "TGCGCGCTTCGTCAGTCGGACGACTTGTCACGGGGCTAGATGGGGTTACC", "CGCCAGAGTCGGATTGGCAGCTTACCGGCACTGTAGCATGCCGCACCGTC", "TAGAAACGAGACCGGCGACCATGGAGACTGTCGCCGCGGCTGTGTCCCTT", "GTCTCCCCTGAAAGCTGTCTAGCTTGAGCTTAAGTCAGTTTGTGTGCCCT", "GCCAAGAAGCTCCTAGGATCTAAAGGGAAATATGATGATTCAGTTGCCGG", "TCAGCGTAATATTTTGACGTGCTTGACCCAAACAGTACTAGTTTCACCCA", "AACTTCGGTAGTAAGGTGAAGAGCTATGCGGCACATTGTAGCTATCGAAA", "CGAACTAGCCTAGTCGCGTGGCATCTGCGACAGCAAGAGACTAAATGCCC", "ACGCGAGTCTTTTTGTTTTTTAAGAACATTCTGAGTCGCTCGCACATAGC", "TCCTACTCCAAGGGGTTACGGGTAGAACAGTTCGACCTGTGGCTTCAACT", "GACTAATCCTAAACGAGATTGCCAGGCAAGTGGGCAGGCACCACGACTAA", "AGCCACACCAAGAATCACCCCTTTACTCGTCGTGATACGCCAACATGAGA", "CATGTTCAAAGCACAAGACTCGTCATGGTTGGGTGCAATAACTATTCCGT", "GACTTTACC"};
    vector<string> codonTable = {"ACA CQZwA", "CTT w", "GGA utEtY", "GTA vYVv", "TCC g", "TAA utEtY", "TAG w", "GCT PWt", "GGT vYVv", "CCG J", "CGC utEtY", "AGA xL", "AGG uJu", "TTC g", "GGC uJu", "AGC PWt", "GTC JT", "CAA w", "AAA S", "TTT rLmpJ", "AAG Xg", "TCT PWt", "GCG JT", "ATA utEtY", "TAT g", "GCA JT", "GAG g", "CGA w", "GTG uJu", "CCC rLmpJ", "TGC J", "GAA CQZwA", "AGT pNOwI", "CAG PWt", "TTG uJu", "ACG pNOwI", "GTT J", "CGT vYVv"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 27668611;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> DNASequence = {"TCAGCATTAAGCACGCCTTATTCTCATCTACACTATTTATGAGGCTATAT", "GGCACTAGGTGCTAGTGCCGGAGTGAAAGCTTAGTCTTCCAATTCCCATT", "GCTGGCGACTCAACGTTCAGGAACGCGACCTAGAGTCGTGCGGTATAGAC", "TGCTAAGGAACTCATATAGCGCATGCAGAAATGTCATAGGCACTAATGAT", "AGGACTCCCCTTACACCTCCCTCGATGGCGCCTACGTGAGATCAACCCAG", "TCCAATTGCGTTAATCG"};
    vector<string> codonTable = {"TGT PsE", "AGG O", "CGT PsE", "TGC xTY", "ATC O", "GAG W", "CTG O", "TGA W", "GGA xTY", "CCC PsE", "ACT PsE", "AGA PsE", "TTC W", "ATT W", "TTG W", "TGG O", "AAT PsE", "GTT O", "CTC O", "GCG xTY", "CGA O", "TTT W", "TCG O"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 494918803;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> DNASequence = {"ATTGACAGCGAAGACCACCCGTCAGACGTAAGTTTTGTCACTAATCCGGG", "ATCCTATGGAAGGTTCCCGTTCATCGAGTGTTCGGAACGGTGGCTCGGTT", "CAGTGCCGAGTTCGCAGCTGCATACACAGGGCATGGGATGGACAGGAGAT", "TCTACACTAATGCTTACCAGCGGTGTCACTTGGCACCCGCCCCGGGGAAA", "GCGTAGCCGTGCTGTTAGGGCACTGACGCCGAGTGGCAAATATAGATGAC", "TCTGGCAAACCGCATAGGAAAGATGGTTTTGAGCATGATGCAGTACGAAG", "AATATTGCACGGCGCCCACAGTATCAGAAAGAATAGAGAAAGGTTAGAAC", "AAGATAATACTACTTTCTCCTTCCAGTGGTAGTAGCAAGCCCCTGGACCT", "TGAGAAGTGTCATGACAACGCTATCACCCTGGCGGTGTAGACGTCGACGC", "CCACGCCCTTGTTCCCGCGGAGCGTTTTGCGATGTTAGGGTTCAGTCTGA", "TGGGTCCAGATGCATGTGTCTAAGAGCCTCCAACGGTAGTACCCTGAATG", "TAGTGACCCGTGGTATCTTCAGTCAACCCGAGAGCGGTACTTACCAATTT", "GGCTATTCGGCGTCTGATTCGAGGCAGCGCATACACGGTTTGCCAAACTT", "TCTCAATGCCACGCGATTGACCATTATGCACGCACCAGACACGGTTGAAT", "ACAAATCTCTGGTAGGTGTTATGGCCCCCTGTGGTGTGTGTCTACCGGAC", "TCGCAAGTCAACTGACGTACTTTATGTCGTTCGCTATCTGTTAACCCAGT", "CCAGTGGAATTGGTACTTGATCTTCGGGAGCCACCTAATCTCACGATCGC", "CCTGGATGGTTAATCCCTCGGGAGAGGTATACGTAGTGTCCACCTGTGCG", "GATGGTGTCGCCCAGCGTACGTCCGAATGCCTCATATCTGAGACAAGGTG", "CCCTTCTTGTGAAAATAGGGTATGCTGATCAGTCCCTAGCTGTTGTCACA", "GAACGTATTTGTCCATTTTTAACTGAAAATAGTCCCGCGCGTAAGATTTC", "ATCCAACCATGCCCTTTCGCTTGTTTTCACTAGGCAAGCACACTCGCGAA", "AGGGCCCATTCATAAAAAGCAACTTTCGCTACCGATATTGAGGTAGTAGC", "TACGTATGGGCGCTTCCGGGTGGCTGCAGATCAGCTGGTGTGTGTCCGAA", "TTACGTAATACACCATAGCTTACCGGTATTCCACTGGGACGCTATTGTCA", "AAATCACGAACCCCTGACTAGCCCTAGCTACGATCCTTATTCAGTTGGAC", "GGGCACCGTGGGTACGCGTTTAGTATAGCAAAGGCGATTTTTTATGAGGT", "CCTCGTGGCAATAGCTGTACATGTGCTGCCCTTGGCTTAGTACGAGCGCC", "ACAAAGCTTTGGCCTATAGTACGCAGACTCGTGGTGTACATAGGCCAGTG", "CTAAGCGATCCCAAATGTTATCACACGAACGTGATTCTTGGACGACTAAA", "ATCCATTGTGATCGTGCGCATCAGAACTACGCGATGTATCGTGACCAGAC", "GTTGTGGGCA"};
    vector<string> codonTable = {"CCA Nx", "CCT Nx", "AAC Nx", "CAA wems", "ATG Kf", "ATT O", "TAT tdnOR", "TAG RhvGp", "GGC HR", "TAA tdnOR", "TAC O", "AGG HR", "CTG RhvGp", "GTT HR", "GGG Kf", "TGG tdnOR", "TCC wL", "TCA Wxp", "AGA HR", "ATC HR", "CTT wems", "CGA Kf", "TGC Wxp", "TGT RhvGp", "GGA Kf", "CTA O", "TTT tdnOR", "TCT Kf", "CGT HR", "CGG wems"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 64503730;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> DNASequence = {"GACCAAAAAGCCTCCCTCAGACTACCGAGGATGCGGCAGCGATCCGTGCT", "TCAACCCATAGTTTGTCATACCCGGTGCTAAACACTCTGGGTCCCAGTAC", "GCGACTTAGAAGCCGTGCATAGCTCTTAAGTGACGCGTCTTCTGTCCTTT", "AGCCCTGGGATCGGTGACCTGGGCGTGAACTAAATCTCCCCGTCTAAGCC", "CCAATGTCATGTGGTCCCTTTACCCACCGGTAATATTGATCGAATGCGAA", "CTAGGCGCTTAATATTTACTTGCGGAT"};
    vector<string> codonTable = {"GTT UP", "ATG B", "GGG g", "CGC ZUP", "TTA UP", "TGG aT", "CGT PN", "AGT B", "CGA B"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 710753056;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> DNASequence = {"GCCCCTGAACGCCGTCGGATCTTACCATTGTCCGGTCTTTGTGACCTCAT", "GCATCCGCGCACGCCTGTATAGAGACATTAATCAATTGGCCAGACATCTT", "GGCGTCAGGGGGCCACGTAGGCGTCATGCCCAAGGTAACAGCGATGCCCC", "ACGGGAATACGCTGACCCCGCAAAATACGCGATTGTTGATCGAGTAAGCT", "TTTTGGAGAAAGAGCGCAGCTAATGTGGCACAGATTGGCGGCGGAATCAC", "TGCTCAAAATCCTACATAGGATAGCCGATACCGGGAGACGTTCATTAAGA", "GGTGTAACAGCCAAAGCAGTGCAACTGTTTTCCAAGACAAATTATTGGTG", "CTACTTGCACGTTATGGGAAGATCAAAGATTCAGGGCTACAAGTACCAAC", "AACTCCTCCTAGAATGGGCAACAGAACCACGACATGTCAGGATGCCTAAA", "ACCAACCCGCGTTATAGACAGCATACGGTGGTAAGCTATCCCGGTCACTC", "CCTTGGGTTCTCATCGGGGTAAGGACCAGGCAAATAGTTCGATGGGTTGC", "AGTAGTCATAGGCGGGGTCTGCTCACCGAAAAGTATATTTTCTGCCGAAA", "TGCCCTTTCTTCGCAGAACTGAACGCTTCTGATACGTGCGTGCCACAACT", "GATGCCAAACTGCAGTGTTACAGTCAGCACGGCCTGGTGGACTCTCACGT", "TCTCGGCGATAACCCAAATGGTCCAGGAATTTGAAGGCTGGTGCGCCACG", "GCTATTGCTAAATGATTGAATGTTATGCTACCCGTACCCGCCGACGTGTT", "AATTTTACATTCAGATGCGCACTGCGTGGATGAACGTTATATGATGTCAT", "TAGCGAACGGCCTTCACATCTTATGTCCGTGTTTGTTGGTGCGCGCCACG", "CGTCCCGGTGCTCGAACGGCCTTAACCCCTCTTGAGAGTTTGAGGCGAAG", "CCCGCCAGGCCAAGGAGGGCCTCTCAGCAGATACCCGTATGTTGCCGAAG", "TCCGGTGTGGCGCCCGGACGTACAAGCGGCTCTGATTGACGTCAGTGTTA", "TACGACTCATTGGATATAGGTTCGGACTGGGCGAAGCGACCTAATGACGA", "ACTCACCCAAAGCGGTTACTCTATTGCGAAGATCCTGTAGGATAACTTCG", "CTCCAAACGATTAAGCTTATCGGGGGATCCCTAGAAGATTCAACAGGTTG", "CGTAGCGGGACCGCAGCGGGCAGCTGACTTAGTTGCGTAGTCACTAAAGA", "GAAGCTTCGAAGGTCTGCAGAGCAAGACGGCGGCTAAACGCCGAGAGTCG", "TCTGCGTCATACCGTGGTGCTATCCTCAAGGTATCTCAGCTATGGATGGC", "ACTTTGAGGCTTGGACCCCATGAATACAGACGCGCGTTTCGCATAAGCTA", "CAGTCCTTCCTGAGTCTCGATTCTCCGATCCACATTTAAGCTTCCCTGTT", "AAACGCGTTCGGCAGGGCGGCATGCGAAGTTGGTATAGATCGCTGATTTC", "TGTATGGGGTCCCAATTACTTTCGCCGGGCACATCGTCTCGGGCAGGTGA", "CCGTAAGGGGCGACTTAAGTCTTAGTGTATGCGTAGTGGCTAAGCTCTTA", "AATTATAAACTGTTCTCGTAAAACGTGAATAATGGTCGTCACCGGTCATG", "CTACGGGGAGCAAGGGCATATGCGTACGAGGCTGGCTTATTCGTATCTGG", "TCTGAAGCAGCGCGTAAATCGATTTGAGCGGGACTATCTTAGCCTGCTGA", "GTATAGCCTTACCCGGCCAGGATATAGGGTGTCAACGCTCGGGAATGCGG", "CTAGTTACCGGCCACTTAGACGGAGGTGCCTTGTCCACTTATGTTAAAAG", "CCTATTAACCTGGCTAGTTCATGGATGATGAGCTAGAAGCCCCAGGATCT", "GTCGCCCCTGATGCAGACGATACGAATATAGTTACGCTAGCCCATTGGGT", "GCTACTCGGGGTCCTTCGACGTTATCTTACAGGGGACAGAAGTCAAACAA", "GGTCGCTTGTGGCTTCTACTACCGGCGGGGGTTTGTGTATAGCTTAGAAA", "TATGGCCGAATGTCCCGAGGTATATAACCACGAGGAAAGAACATTCGCTG", "AAGGACGATAAGACGGCGGAAGCACACACGGTATCAGACCCCCCTAAGGG", "GGTCGGCCGTAGAACCCCTTTGGGATGACG"};
    vector<string> codonTable = {"ATT K", "AAC Gl", "GGC fKf", "CCT UQ", "TAT Gl", "CCC H", "CGC tVFD", "TTG dOiQu", "ACA tVFD", "AGA K", "TCG zxVm", "CAG K", "CGG Gl", "TTT H", "TGC e", "ATA w", "GTA e", "GGT dOiQu", "ACG UQ", "TGT e", "TCC K", "TTA dOiQu", "TAG zxVm", "AGT zxVm", "ACC Gl", "GCG LMv", "ATG Gl", "CTC tVFD", "GTG zxVm", "ATC w", "ACT K", "CTA zxVm", "AAG PHx", "CAA K", "GAT e", "GAA zxVm", "GTT UQ", "TGA LMv", "AAT tVFD", "TAC K", "GAG UQ", "GCT K"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 102798562;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> DNASequence = {"ACATATCAGTGTTTTGTTTGTAAATGGCGGCAACTAAGAGCACGTATATC", "GACGAAGGCTGTTGAAAAGAGAACATCTGGGTGCTGCCGTGTATCATCAT", "TATTCTCTCACATACAGTCTACACGTCCGTGCTTAGACCCCTTGTGACTC", "ATTAGCTCGTGTGCAGACACTCGACCACTTTTACGATCCCGAAGCATCCG", "TAACACTATATCGGTTGAGATGATTCTATAGAAACACGCAGGCTTGACGA", "CCGCGCTTCATCATCCTTAGTAGGTCTGGTGAGTTGGACACGCCCTGGCG", "GGGTGTGCCTGAGGTCTCCGCTTGAGCGTTTCTTGCAGTCCTCACGCGAG", "TCCAACGTACAGGTCTGCCTTGAGGCTCATATGCTAGCTGTTTCCGAAAC", "TTATCAGGCGCCCCTGCCAGCGCGATGAGGTCTTAGTGGGGAAACGATAA", "CCGGCACAAAGTTCCTCGCAGAAGCTTCAGCTACCCCTCCGCACTCGGAA", "GGCAGTTCGTAAACCCTTAAAGCAAGCGGCGTCATATACCGTTGGGCCTC", "CTATTATGGCATGCGTCCTGGCCCCAATCTGGAGCTGGCTATAAGGTCCA", "AATCCGCCCTAACAGGGTTAAGTAGTACGCCGCGATTCGGGGGCATAGAT", "GACTCAACCGTGTGTTCCGAATAAGATGGGTTGGAAAACCGGACTGGGAT", "AACAAAAGAGTTCCCTTCTGGTGGGCTGCTCCGTCGGCTGAACCTTGAAT", "GGATTGACTCGATTTGTCAAAACCCGACGAGTGGCCTCTCTTCAAGGTCG", "GCGAGAGGCTGAATGCGTTTGAAAAAGGGATTTCTCTCAGGGAGCGCACG", "TAATAAGAATATATATGTGGCTTCCGCTATTTGTCGTAGTTACTTCATGG", "CACATTGGCGCGTACGAGGGTCGGGTAGAGTCGGCCCCATATCTTTCTTA", "TACCGAGGGGTCCCATGTGGAACTTAAATTAATTTCTCATCTGTAAAGTA", "TTAAATACTTGGGTCCGGTACGTCCTCTCGTACTATAAGGTTTCAGTATC", "AAATCTCTATCTTTATAATGGCTCTTACTGTTGTCAATTAAGTGCTCTGA", "CTCGAGTAAAGTGTCATCTATTGACCGGGTGAAAAAGTCATATCGGCCCG", "TGTCGGTTTCACTCCTCCATCTGGATGCGACCGGGTTCCCGCTCTAGACG", "TTCCCCGAGGAAAGGGTCCGTAACCGCAGTGCAAGCTTTCCTCTTACACT", "GATGCGTTGCATGAGTCCAGTTTGAAGCAAAGATTCTCGCTGACGGGCAA", "ATTTCTTAGTAGCCTATACTCGCCCCAATAATTTCGAGGATAGGCCGGCA", "CGAGACACCTCTAAACGCCGCGGATATTGGTCTTAGGAACTCGTCGACAC", "ACAGTTGAATGGGTCGCCGCTCTCAAAACCCCTCAAGGAACAGCTAAGCA", "AGCTACTCCGTTAAGACGGCGCCTTGTTTATTGACACGCGGGCGGCAAAG", "TGAGCTGGCCGGAGGCGCAAAGGCGTTGGTTCCGATCGTTCCTCACTGTT", "GTTTACCTAACTCTCCCGCGCTAGGCCCAGGATCTTTGATGCCAATTCCG", "AGCATACGCTGATCTAGAAGGGCAACTTTACTGTTCTACGTAG"};
    vector<string> codonTable = {"ACT Pni", "TGT Pni", "GGA Pni", "CAT Pni", "ATC bG", "GAT sm", "TCG Pni", "CAC Pni", "CTG sm", "CCG sm", "GTA sm", "GTC bG", "AAC sm", "TTA Pni", "CGA sm", "ACG sm", "TTC Pni", "TCC Pni", "GAC Pni", "GCT bG", "GCG sm", "CAG Pni", "GGC bG", "CGC Pni", "TGG bG", "CGT Pni", "ATG Pni", "TCT Pni", "CCC sm", "GAA sm", "CCT Pni", "GGG sm", "GGT sm", "ATA sm", "AAT sm", "AGA bG", "CAA bG", "TTG Pni", "AGC sm", "GCA Pni", "AAA Pni", "TCA Pni", "GAG bG", "CTA sm", "TAT Pni", "TAG sm", "GTG Pni"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 671890909;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> DNASequence = {"TACGCTCGGGCCTCTAAGGTGAACCGAATGACGCAAGCGGAAAGCTGCCT", "AATACGGCGCAATGCGGCATACTAAGGGCATCCACTAAAGCAGAACGGTG", "TTAATAACACTTTGTGCTGCTATCATTGCAGGTGACAATACATGGATCGC", "TCCATTTCCACAGAAGCAGGAAATGGTCACTGTAGCTTTGTGACGACAAA", "AACATAGATATAGAATCTAGTTGTATTCGTCGTTGAGTACTTCCGTAAAA", "ATGGAGCTAAACGTATTGCGAGCCCAGCCACCTAAGGCCGTTCCACAGAC", "TAAGCCACTCCATGATTAGAGCTAGTCGCCAGCAGGTGAAACATACAGCG", "GACCCAGTGCAGACGGACTATTCTATGACAAACCCTCAAACAGTTTCTAA", "GTTAAGTAGGAGGCAAGCCACTAAATGTCGTACAACGGCGTTTTGGTGAG", "GTTGTTTCAGATGCGGGTTACCTAGTGCCGCACGGACCCTATAGGGGTTC", "GGTCGCGTGATAAGGAGACCTTGGCTTACATAAACGTCTCCACTGATGAG", "AGCGTGCAGTCCTCTAAACTCTTTATTTCTTCCGAGTCATACGTTCTTCG", "CTTGATCTCTCGGTTGTCCTGCGTGCATGCCAAGAATCGGAATGTAGACA", "TACCGATGTTAATAGTCCAAAAATGTGTGATCCGGAACGTGGTTATACGA", "CAACTAGCTTTCAGAGGAATGACCTCGTTGGGGGACGAGTTCGTAGCGAT", "CGTTAAAATTGCTTCTGATTTCGCGGCCTCGGACTACTAGAGCTCTCCTG", "GCAGTATGCCAAAACTCTACCCCTGTAAGGAGAATTAATCCTCTGTAAAC", "CTTTACCCTAATGATCTGTAAGGTCTATTCGGGCTGTGAAGATGACAGAT", "GATTTGAGCTAATGCATAGGATGGCAATGAATATCGTCTGATATCCTGCC", "TTGTCCTCGCCGGCTAAATTGTAGACCTCTGGATCCGGTTAGTACAACAT", "AGAAGATATGTCTGAAAGGGTATAAGAACAGCGGCTAGTTTCACAACAGA", "GCATCACCCTCAGCGCGGATTGGTAGTCGCCGGTCATTTGCGGAAGCATT", "TACCTCAATGTGTCCGCATGGGGGGGTCGAGCCATGCTAGTTTAGAAAAT", "AGCGTATACTCAGTATCCACATGGGTGGGGCGTTTCTACATTATACATTA", "GGGGTTCCCAATGTACGTTCTAG"};
    vector<string> codonTable = {"GGG lClR", "AAG fHkg", "TTT UUo", "TGT UUo", "GAC uBENR", "CGT lClR", "GAT fHkg", "AGT UUo", "GTT wC", "CTT CE", "TCT iEiH", "TAG UUo", "TTA UUo", "AAA iEiH", "TGA iEiH", "GCT CE", "CCG wC", "GTG wC", "ATC lClR", "CCC iEiH", "TCG uBENR", "GAA iEiH", "CTC zvUe", "CCA uBENR", "GGC iEiH", "TGC UUo", "TAC fHkg", "CGA zvUe", "AGC iEiH", "GCC UUo", "CAG wC", "CAC oHH", "TCC fHkg", "GAG fHkg", "GCA wC", "ACA CE", "TTG iEiH", "ACT oHH", "ACG UUo", "ATA iEiH", "ATT lClR", "ACC UUo", "GTA uBENR", "ATG uBENR", "AGA oHH", "TGG zvUe"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 946230719;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> DNASequence = {"GCACGCCCCATGGTACTGCCCTGATTACAAGGTACCCTGGGCTTGTGCTC", "TGGCACGATACTGGTAAGGGTTACAGGAACCGCAACCACAATTGCAATGG", "CTCTGCCTCTATCCTCTACGACTTCGTCCCAGGCCTTTCAACTCTCGACA", "GCTCGGCCATTACTCTAGCCGCTTGAGTAATACACAGTCGCGGTCACTAT", "GGGTCTTAAGAGGCGACGGTTATTTGTGCTCCTCGGGCAAAAGGTTAGCG", "TAGATCGACCGTTCGCAGTAGGCTTGATTTCATAAATAAGCGCGACACAT", "CGCTCACCTAGAACACCTCTCTCGCTACGAGAGCGACACGACGCTATATG", "TACGGTCGGAGTCTGATAAGACAGTGGAGTGCTAACTTACTGGGCGGGGA", "TGCGGGTTGCATTTTTGAAGCGTATGGTTGTCTGACTTACGAGCGCGTCA", "TTGATCATGTCCGGAGCTCCGACTCAGCGACCTACCCCGCAATGGGGACA", "CCCGGTGGGTGAGTACGTTTGTTCTCACTTCGGTTTCTCAACCAGCCTGG", "ATTTAAGACCTTCCCGATCCTTTGTCCGGATGGACGACGCTTAGGCGGGA", "CCTGCACTGATTACTCAGTAACTAACCGCAATTTCGGTCTGGAGCGACTG", "CTAGGACAATCAAGTCTCAGAGTATGGTCCCTACTGTGGTCATCGATCTT", "ATCGTGTTTGGGTGCATGGTCATGCTGGGCTAGGGTGCACCGAGGCGCAT", "GCTTAGAATGCAGCATGGAGACTAACTGGTCTAGAATAAAATCGGCTTAT", "CAGGAGCTTACGTCTGCAGTAGACGGTCCTGTTTCGCTCGTTTCGAACAG", "GAGGTTTAGGGTCCATACCTAGATAATACTAATGGACCCAAATCCTGTGA", "AGAACAAGCCCCCGAAACCCCCCGTTCTAATAGTCAGCGAGACAGCCGTT", "AGACTTAGAAGGCTCTTAGCATCCGATAAATAGTTCCTACTGAGCTCGTC", "AGGCATTGTTGCTGGAAATCTCATATATCGGTTTGTCCCGGCATAATAAC", "CTTTCTACACAGGTTGCGATTAGGTGGAAGCCTGGGTGATCCTAGAGAGA", "GCATATTGTTGAGCGGACTAAGCTACTGCCGATGGGCCTAGCATTGCTCA", "GCGAGGCCGGTTGATTGGGTGTGGCTGTAATGCTAACCCAAGGAGCTGAT", "CAAAGCTTAGTTTGATGTAATAGCAGTGTGCGGCGTGTCGCGCGGTTTAT", "GTTTAGCTTGCGTAATGGAATCGAATTTCTAAAGTATAGAGAGTCGAAGA", "ACCGCCTGAGCAGTGCTCCCCCTAGGAGGGGGAATTCACCGGTTCCAGGC", "CATGCCTCACAGAAGTTCGATTGACATCGCTACCGTTCGGTGTTATCTGA", "TCTCTGCAACCGCTACCTTACCAAGATATCACTGTATAAGCCTTATGCAT", "CTGCTTCAGACGCGTGACGAAATTGTATGAAATGTATGACGCAACGACAG", "CAAGTGCTCATTCCCGCGTTATGCTAATCATGATTTCAATATACGTACCG", "GTCTGGGGTAGAGGTTCGTCCTGTAGAAACGGGACTAACTCATAGATAGA", "CAGCTGATGAAGGGGATGCGCTAGTGGCATCCGATCGTAGTATCGCTCCG", "CTCCTGACAAATTGTAATGACCAGGAACCCATACGTAAGCAGGTTCGGGT", "GAGAGTAAGCCGACAGGCGGTATCTCTCATGGTGGTCGTCCGACCCAATA", "GAATCTGGAGCGTATTTACACTGCGATACAAAAATCTCCTATTGTACAAT", "ACCAGAACACTATTAAAGTCCTGGCTATTACGTTGCTGTGCAGGGAGGGC", "AAAGACCAAAACGTGTGCCTATTACCACAGTAGTAGACGACACATATTCA", "ATTTTAATCACGCATCATTGTAGGATGGAAGATCTACTTTGGTAAACATG", "GAGGGACTGCTTCCGGCCTAGCGCCGCTGGCGGCTTCGAAAGTCACACTT", "CTGCGAACTAAAGACCTTAGTATACTCCGAACTGTCATTTTGTCGGTCCT", "AGTTGGACCACCCGAGAACGGATCCCCATTTGTCCCATTCTGTGTGTGGG", "TTGAACCCCGGGTCAAGCTCTACCGGACTGAATAATCCGTCTCGATGGGC", "ACCCTACTCGTTAATATGTCCGGTTGATTGGGCCAGCCTGCACCAGCTTG", "GGTTCCTTGACTGTGATCCAATACGAACTTACCGGTACAGTTCCACCTTG", "TTCTGCTGTACTCTCCACTCAAGTTGGGTCTAGAGTCCCGTTCGAGAAAG", "CCGAGCATCTGGTTGCAAGCGCGCAGACGAACCGCACCTTGCCTGCGGCT", "ACGG"};
    vector<string> codonTable = {"ATT vgiQ", "TAC vgiQ", "AAT vgiQ", "GCG MZZ", "CAA Apphn", "CTG iI", "CTT vgiQ", "GTA tCyOK", "TGC vgiQ", "CGT tCyOK", "GGC MZZ", "TAG vgiQ", "AGT tCyOK", "GTC TgA", "AGC tCyOK", "ACT mTp", "TTA anV", "AAA mTp", "TTC anV", "TCC anV", "TAA tCyOK", "TCT vgiQ", "AAC iI", "CGA mTp", "CTC vgiQ", "AGA vgiQ", "AGG Apphn", "CAC tCyOK", "TGA mTp", "TGG MZZ", "ATA tCyOK", "TCA iI", "CCC tCyOK", "CCT Apphn", "ATG Apphn", "GGG Apphn", "AAG MZZ"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 152160566;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> DNASequence = {"CCGAATTTCACCGCACACCGTGAGGCTTCGCTCCGCGCGATCTCTTGTGA", "CCGCATTGAGTTTGGCCTTAGACCTGGCTGCGACCCGGAAGTTCTCTGGA", "GTCCGGAGATTCTTTGGTTGTCTATACAGACTGTGTCACCTGTATCGCGT", "CCGGCTGTTTTGACCAATACGTCTGGGTATACGAAATGTACAATTCTTAT", "GGAACGGATATTCCTTCACGCGACCTTGATCGTCAGCGAGGTCCAAGCAA", "CCGCTAGCGGGATCTTCGTCTCGGTGGCCATTCCGATTCCCATGTATGGA", "ACCGAAGACAAGTCCCCGGTAAGTGCTCACCATGGGGTGATGAAACCTAA", "AAAGGAACCAGGACTAACTGCCTCCGTGCTGCGACTACGCTTATATTAGC", "ACTTTGCCTTGTATTCATTAGATAGTTCGTTGGACCAGTTCTACATTCAC", "CACGAATTTCAAAGCCCCAGGTCAGTTTGGGAGAGGCCCGTTGTCAATCA", "TCTGCTCGAATGACGAAACTGAAGTCGTACGTTCCGGGTGGCTATTAGTC", "CTCCCATATTCCAGGTTTCCTATAAATAGCTAGGCAGAATTTGGCTCACT", "CGTGGGGTGGGCGTCCTACTTGATTTAGTCCGAATAGCTTACAAGCCCCT", "GACATATTGAACGACCAATTTGGTGTGAGCTGCGGGGCCGCCAATCCTCG", "CGTATCGCCTTGCGGATTCACTCCTGTGTGGGGCGCGTTACCATAGGGCA", "GGGAACAGCTTACCCATAGCCATCTTACCCTAACC"};
    vector<string> codonTable = {"GCC UhSKv", "GCA o", "TCA BJU", "TAC UhSKv", "CGT UhSKv", "TCG UhSKv", "ATT BJU", "CTC UhSKv", "CAT o", "CGG BJU", "GGG Ijit", "TTT UhSKv", "GAT BJU", "CCT o", "AGC BJU", "ATG o", "TGA Ijit", "GCT Ijit", "TAT Ijit", "GGC UhSKv", "ACT Ijit", "CTT Ijit", "GAG UhSKv", "CTG BJU", "GCG UhSKv", "AAG Ijit", "GAC UhSKv", "GAA o", "CCA UhSKv", "GTG BJU", "TCT o", "CGC Ijit"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 7721031;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> DNASequence = {"TTGGAGTATGCCTTGGAAATACGACCTTAAGTGTTGCAGGGAACTGATGC", "CGTAGATCTTTCACGTAATGGCGGGCTGACACAGCAGGCCCGTTACAACG", "GAATGGACGATGCTTTTCTATGGACACTATCATCTCCTTATAGGGTTCGA", "CTGCTCCAGCTACCCATTTCTCCTAAATTGTGCTAAGCATGTTAGGATTG", "GAAATACTGGTCTGGGGTAGAGTTACTAGAGTAGGGAACGGGACGAATTC", "TGAACACGCCGAGAATGATAGCAGGGGGCTAGCCGTCCTTTCGCCGAAGT", "CTACCGACTCGGCAAATCCAAGTGCGTCACGCGGTATTCCGAAAAACGCT", "GCTCAGCTACGGTTGAGCTATCCTTCTGAACACGCTTTATGATCTCCCTG", "TCCGGGATTCTGCGGTCCCTAATTTAGGTCGATAGTGGACATACCGAGCC", "CCCGGGGTGCGTCTTAACAATATTTGTTTGGGAATGATCGGACCTGCTAC", "TTTAAAATTTCCTCCAACTCATTCGAAAGATCTATGATCTAGGTAAGCTC", "TTGAATCAGACCCGCGTCCAGTGTAGTGAACGGAGGGAGTAAGTAACTCG", "TACCTCCACCCTAATAGCATGCGTGGTACGGAGACCTTTGAGCAGGATCC", "AATGGCTCCACCAACCTGAATAGGATGCAATAAAAGCTCTTTGTTCAAAA", "AGAGTACCCCCGTTGTCAATGGATCGGCGACAGCGCTCGGTAGATTTAGG", "TTTGAGTACCATCGACATTGCAAACTGGTTTCAAAAATACGAGCGGTACA", "GGAGGCTTCAAGCAACCAGCCGTAACATCCTCATAAATTCGGAAGATAAC", "TCAATACTTGGAAAGAAGGTATCATCCACCTGGTGCGCGCATTATCATAG", "CACTAAGCACGTATCAGACTCCAGCGACCACTATCCTATGCCCTGTTTTG", "AAACGCAATCAGACTCTACAGGTCCCGGATTATTCCGCCCGTCGGGACGC", "CGAGACCGACCTCGAGCGATCGATTGCTAAATGACGTTGTGACCACACCA", "GTA"};
    vector<string> codonTable = {"GGG O", "CCG WRh", "CCA MTb", "GAG lj", "TTT dM", "AGT WRh", "TGG dM", "ATT pZAb", "CAC SzM", "TTC Y", "AGC vRpME", "CGT C", "GGT SzM", "TTA Y", "ACA SzM", "CGA jpq", "GAT HhdSe", "AAC dM", "ATA dM", "GAA mM", "GCG dv", "AGA C", "CGG oO", "TAT oO", "AAT lj", "CTG O", "CTA vRpME", "GCT Y", "CGC WRh", "CCC aASQ", "ACT VU", "AAA SzM", "TCA C", "GCA pZAb", "GCC lj", "TGT lj", "TTG UKnFZ", "GGC HhdSe", "TCT HhdSe", "CAA C", "TCG pZAb", "GTC Mdvv", "AAG C", "TGC oO", "TAG pjG"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 137387550;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> DNASequence = {"TTTCAAAAAATGTCACTGCTAATTTGCTATGTACGCTGCTGGCCATGTCA", "CCCGAGTCCTGAAATACAGTTGTGATCGCTATACCAAGCCCCTCCACTAC", "ATATCACGATCAACCCCCAGTCAATCAAGACGTCTACGGCCACCTTTGGT", "TTGTTCGGCTGTTTGATCGCTACACGTGGTCCAAATCGCGTCCAGCACTG", "TAGGAAGGGTCAGCAGGCGCACTTCCGCTCAACGGTGTCTATTAGTGTGT", "GAGCTATCCATCAGAACGTTCGAGGGCTTCCCCAGGCCATTTATCATGAC", "CCATCGCTCGGTCAGAGACGTGCTTGGATGCGACCCAGATTGAGAGGGGC", "GTAAATGGGCTACGTTATCAAAACGAAGGAATTAGTGTTTAATCGAGAGC", "AGCAAAACGACGTGACCGAGCAAGCGAAGGCATTAGGCATCCTGATCCCC", "CTCCCTACTAAAAGTATCCTATGTTGAGACACGCTAGGTCGTCGCAGGCC", "CCGAGCGGAAAACGCAAAGTTTAGCTGACCCGTCGTTGCGGTGACCACCG", "GGCAGTTTGGGATTCTAACCGAGTACGCTCATATTGAATGGCATGCAGCC", "CACAGCCTTAGGTACAGCACCGGCCTTCTATGAGGGCCTGCCTGCGGCCG", "TTTCGAACCTCACTGACACGATCTCTTAGGGTCTGATGCGCGGTCGGTGA", "TGGGTACACCGAGATTAATCAGAGTCTCATCTCACGCTGTGTTTTCCTCG", "ACTACATGCTCGAGGCTAGTTGACCGTTCGCCCATTAACTTGCTTAGACT", "TGCGAGTTCGTGCGGGCGGTCCCTGGGTAAATGTCACGTTGACAGAGAAT", "GCGAATAGAAGATTTATGGCTTCGTCACCAGACTCCACAACGCGTGGAGG", "CCCGAAAACCACTTGGGAAAACGCACCATAGGCATCATTTATGTATCATC", "AGTGATCCTGCCTTTCATGTAGAGCCTTCAGCGCAAACCTAGAGCTACAG", "GCGAAACTGTGTGTAGTACATCGTAAAATCACTGCTGTCTAACGTCGCCA", "CGCATTATTTGTACCCACACGACAAGCGATGCTACATTTCATGAGCTGTT", "ACTCTTCGCCTAGACAAGTTAGAAGACCGGGAATCTATTTAATGAGGAGT", "TGCGGAGATTGCTAGATATATTAACAACAGGGTATTACTTGTATTGTAGA", "CCGCTATTCTCACGAGCCAAGATGTAGAATACAGGTACACGCTCATATGC", "TGCATGACGAAGTAGCTGTTACGTTGCGCAAGGCGTAGGGAGTTGCGCAC", "GCTTGCTAAGCAGACTTCTTATCTACAGTAATCTACGTCGTTGCGAGCCC", "GCGCAGTATAATTTCGGACAAGGGATAAGCCGGCAGATGGTGCCCTAAGC", "CGCATCTTCCAGA"};
    vector<string> codonTable = {"GAC ZUUEV", "AGA B", "CGT zat", "TTC gFTdL", "GGG ZUUEV", "ACA zat", "GGT B", "GCC FdM", "GAG CO", "CTC oSZdw", "TAT L", "GCA gf", "CAG L", "GAT ZUUEV", "CGA jevE", "GTC jevE", "ATA jevE", "ATG gFTdL", "AAT ZUUEV", "CTT gf", "TTT L", "ACT L", "GCT O", "AAA ZUUEV", "TCG FdM", "GGA CO", "GTT gf", "TGG gf", "TAC gFTdL", "TAG jevE", "CAT B", "CGC FdM", "CTA ZUUEV", "ACC oSZdw", "TGC gFTdL", "CCA gFTdL", "ATC CO", "TCC L", "CAC oSZdw", "CCC L", "CAA L", "TGT CO", "CCT ZUUEV"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 542290083;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> DNASequence = {"TGGATTTACTTGACTCTAGTCCGTCACAAGTGGCGCGCTCGAAGCTCGTA", "TGTCCGCGACTTACGAGTCCGCCGAGCCTGTATACAGTGGACCAGAATGT", "GTGATGGGCTGGTCGACTTATTTGGCAGGGCTCATGATGCATATGGTCCC", "CGGGGTAGTGTGCGAAGATTCTACAGAGACATCGCATTGACCGGAGGGGC", "CAGCCGCCTCGTGATCAAGGAAAGGAGTATGCGTGATATACCGCCCTCCC", "ACCAACAGGATGTCCCCGCGATAGGCACTCTTTATTCGTAGAGCCCTTAG", "TATTGCAGGTACCTCGCTTGGTGTGAGTTACAAGGACGGACACTTGTGCA", "TATCGTCTAATCAGCGGTTTTATGTCTAAACGAGAGCTTCTAGTGATTTA", "CAAGGGATGCTAATAATCTAGAATGATCTACGATGGCGCAAGCATCCATG", "ACAAGGACAGCCTCGCCACTCCTTTAGGACTAGTATCCACACGTGTAAGC", "TATATAACGATTACACATTAGTCTAACAAACGAAGTAAGAACTCGTTGAA", "GATATTCGGCGAAGAACCAACATGCCCGATGGTCGAAAAGTGGTGATACT", "CTGGCAATAAAGGTCTGCGGACTGGCGTTAAGTGTGATTATTGCCAGACT", "GCGCCGGACCCCAGCTGCACCTGAGACTATCGAACCGACACTTCTGGCAG", "TCCCCATTTTCGTCAGTGGGAATTCACACCGGTAAGATTTCGTGATTTCC", "CCCGGTGATACCGGCAGCTCGGACTAGATCCGTTGTATTTGAGTGATTCC", "GCAGTGGTGCGCCCGAGATTTCTTACTTAAGGCAGGGTCTAAGCTGCCGG", "GCCCGCGTGGTGTGGCTTAAAAAACTGTATCGGTCGGACGGGTCTCGAGG", "AGGCGAGTTGAGGATAGCAAAGGTACGGCTTTTCGCCTAGTAGCACCGTC", "GGATCAGCACGTGCATGCAGCTGAGACAGGCGTCCATCCTTAACTAGCTG", "AGTGGCGATGGGTTCGTGAGCTGCGCTTTATTGATTCCTGACGTGATCGT", "AACACACGGAGCTTCAATTTTTACCGCGCACCATCCGGCTGAGCGATGTA", "TATTCGCTTTTAATTCACACGGCTCATGACGTCCAGCCCGAAGATTCTGT", "GGCCCTCACCCAGTTGCGCGTCGTCCATAGAGTTAAATATGCTGGATCGG", "ATAGACAAAAGAATTATGTTCTGGCTAGGGGGCGTCCGCCGCCGGAACGT", "GAATGCAGCAGAGAGTTACGCAAGAGGAATTGTGCCATCCTACCACGTCA", "TGCTTCTCCTGGTCTGTGCGAGGTCAGATACAGTGCGCTAGCGCTTCCCT", "ACTAGGATGTGAGTTTACGTCTACATGCGAGACCACAAGATTACCGGCAT", "GTCGGCTTTCTCCGGCAGCAGATACGGCAGGACAGACCTGGACAAATAGG", "AGGGGCTTTGCCGGTTGGATGGTAGTACGGCGTATCCCGGACCGAGCGTC", "CCAACATCCCCTCGGGCAAAAACCGCACCTTTAGTCGCGATAGGGTGATG", "CTATGGAGACTGGTTTGCGTCCTACTTATCGGGGTG"};
    vector<string> codonTable = {"CGC vRKNf", "GGA LIAV", "CAA GO", "CAT g", "GTT rx", "GTG LIAV", "CTG GO", "GGC RhK", "AGG LIAV", "ACG RhK", "CTA DRIT", "GAC vRKNf", "TTG i", "CAG LIAV", "TGA g", "AGC g", "GCC wKgC", "AAG g", "TTT LIAV", "TGC rx", "TCA rx", "CTT RhK", "GCT GO", "GAA DRIT", "TTC LIAV", "AGA g", "GAT RhK", "TAC i", "CGG vRKNf", "ATA RhK", "TAA wKgC", "ATC J", "GGT vRKNf", "TTA Lupy", "AAC RhK", "CCA wKgC", "ACA vRKNf", "GGG GO", "TCC vRKNf", "TGG J", "GTC Lupy", "AAA RhK", "GCG GO"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 113826872;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> DNASequence = {"GCACACAACCTTGTACAGTGGTGGACCGTCATTAGTCGTGAACGGCCGAG", "TACCGCTCCCTCGATTTGCATCAAAGCCTTCATTCCAATCCATAAATTAG", "TTAGTATATCTGCACGCCGATAACACCTGCCTACCTCGTGAATTAACTCA", "TAATCAGTTGAGCAATTCCCCTCGATGCACCTCCATCAAGGATAATTGGG", "AACCACGGTGAGCCATGCTAACATCCAGAATAAACACCAAAAGTTAACCT", "CTGTAAGCGGCCGCCATGCTGTTTAATATATGTCCTCAGAGACTTGGATA", "TCTAGTCTTGTATACATTATTATATAGCACTTTAGCGAGCGCTCCGCATT", "TATAAACGTCAAATAGAGGGCTCGGTTCTAGACCCCCTCGGCGGAATAGC", "GAGAGGGTACTGTGAGCCCTCAGAAGATGAAGAGGATTTTAACTACCCGT", "GATTATTCCCCCACAACGTGCTAGAAACCGGAGTTAAACCTTTTGGTCTC", "AGGATAAGCCTCCTGATGAGCTCGCATGCAATAATTAGCCAATTTCTACT", "GTCACTAACTATAATTGTCAGTATATGTTAACTCCAGTACAAGACCTAGA", "ATTCATGAATAAGGTCGCGGTGGCGATCACCCAGTACCACGCTGAAAGCG", "TATCCCTATTCAGCGCTCGTTTGACGACTTAATTTGGAGTTCTTTCGATT", "GCCTCTTTAAAACTGGCTGCACTTGAAGCTCAGTTCCAGCCGCTCACTGA", "GGCCTCTTAGACGAACCCTATGGGCAATTGTTTGGAACTAAGTGGTCAGG", "ACTGAGGACCGGGTTGTGACGCACAGGCGTAGGTTACCATTACTTACAGC", "CTTCAGAGAGTCTCGACCCTGATCTACGAAATTGGTTATTGAGTCGTGAA", "CGAGATGCCGCCCAACTTCACAAATTGCCGCTGCCGGACAGTCCTTTCAG", "CCGTTTACGCCAGACAGAAAAGGCACGTTACACCTGGTCTGTTTTGTCGT", "TGCCATTAACATCCGGCTCTAAATTTCAGATCGGTGCCGTTGAGCGTTCG", "ACGAGCTACCAGGGTCTATTTACTGTCCATAAGGATATTCATAGCGAGGG", "CCGGGGCAATTCTCAGGCCCTCGGAATCGCACTGACTCCGGGATAACGCT", "AAAGGAGCCTTCGACGCGCTTACTTCGGAATAATGGTTAAATCATTGGTA", "CACTGGGTGGTCGGGTTCAGCCCGCACAGGCCATGGCGCATGCTTAACTC", "AGTCTGCAGCGATGTCTAAGAGGTCCTCTATTAAATGCTGTTGACTTATT", "GTCTATAGATGTCGGCTTTACCTCCAGGACTGGGTATTGTATACTGTATC", "AGTGAGGGGGACTAAAATTGAGCCAGAGGTAATTGTCTTACTCGTTATAT", "CCCGTTTTCTCCTGGCCAGGCATTGAAGGCTATGGACTTTAGGTTTGAGT", "GATCTCTGCCAGCTTCTAGATGATCTAATGTTGAGTCCCTTCCAGACCAA", "CTGCAAACATATAATATGCGTAAGAGGCAGCCTAGTAGGACATTAATTGG", "CCGCCGAAAAACCTCAACGACCAGGAGCTGAGAAACGATAATCCAGTAAC", "ATTACCACTTAGCAGCTTCATCTAGTGCTGTGCCGGTAACTAAAAGCTCG", "TAAAAGTGACTGAAAGGTGGGTGGTGTGTATAAGCATGGGACTACTAAAG", "GACTGGTTGATCATACTGCCTCTATATTATCATGTTTAACATGCAGTTTG", "GACCAGCTCTCTTGCACACCCCGATGACCTAAGCTGAGTCCGAGTCAACC", "CGTCGCAGTTTTTCAAAAATTCCTCAGCACTCAATGCGGGCCTGTTATTA", "CACTTTTTGTGCAGTTTGCCGTTCTAGTGCTATGTATCTCGCG"};
    vector<string> codonTable = {"GCC IIx", "TGC V", "TGG stC", "CTG dTt", "TCG QHes", "GGT V", "AGT Ju", "ACT bSp", "GTG WP", "ACC dTt", "GGG dTt", "GAC J", "CAG Ju", "GGA bSp", "ACG bSp", "TAG Ju", "TAT xVCQ", "GAG ZB", "TTA bSp", "CAT J", "TCA Ju", "ATC Ju", "CTC xVCQ", "TGA bSp", "CCT J", "TCC Ju", "ATA Bl", "GAT xVCQ", "CCA V", "TTT WP", "CGT Bl", "AAC Bl", "TAC WP", "TAA J", "ACA Ju", "CCG J", "CTA stC", "GCG xVCQ"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 355701105;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> DNASequence = {"CACCTAGTCAGGGGTATTCACACTCTCCGGTAAGTTGCAACGACTTCAAG", "CCGTGAACTGAAGAACTGGTAACACGTGAGTCACGATGCATCACTAGAAT", "GATAAAATGACCCTTATAGGACACTTCCGCGTCTTCTTACTCTGGAGCCT", "ACGCTTGAGTCGAGCGAGCAAATTGCTGGGCGCCAGGAGTTCCGATTACG", "CCGGGGATTGCGGTAGTGGCTTTGCTTGGGTACTGACGTGGATTTGCATC", "TAGAAAGTGTCCTTGCGAACGGCTCACGAGATAGGAGTTTAGGTTGGCGG", "TGGACAATGACGGCTTCCAGGAGGTCTCTCAAAGACAAGGCCGATCTAGT", "GTTTCAGGCCCCTCCTGCGTAAGGATCTTAACTTAATGGGCAAGTCCCTA", "GGAGTACGTGGTATAATTACCCTTAAGCCTTACTGGGAGCGTAAAAATGA", "AACTTCTTGGACGCGGATGGAGTAGTAGCGACACGTGCATAAGGCTTTCT", "CCCGCATCGGCGACCGGAAATAACGTGTAAACCCCTCGAATCATTCCCCC", "CGCTAAAGTAATCCGTAACACGCCCGTTAGGTTAATCACGACTCGCAGTC", "GGCAATGTCGCACGCCCTCTCCAGGGCGTGACTCCTAAACGCCCATTCAA", "GTCGCATTGACACGCTCCTCTTTAGTTCGGCGCGTTGCCGCTGGTACGTA", "CATGACTGTCTAAGGGCTATCCCAAGCTTGTGGAGACCGGTCGGATTCCT", "ATGCGAAATTGATTACTCTCAATAGTTCAGGATGCCGCCCGACCTCTCTA", "TTCCTAGCTGACGTAAGGCAACACTGTCAACTGTGCGGTCTGTTCGTCTA", "CGCTAGCGACGTGTAGAGTTAACGTGTCAACCGTGACAGTCTACCAACAT", "GATCGCACTATGCCCCCTCAAGGAAACACCTACACCCCTGCATGTGAGTC", "ATAGGAGAAACTATGTGAGTACTTAATAAACATTGCTTCGTTCTCAAACA", "TCCCGCCCCCCTCAAACGTGTACGGTAGGCGCTATCCAGTCACGACGTAT", "CTTTTCCTCAGACCCATTACCCTTATGAAATCTAAATCTGCCGTTATCGT", "TAAATAGCAGCTCAGCACTGAGAGCGAAAGTTGTGCGTTGCATTACGATC", "GTAACTGCTGAACGGAATTGCAGGTGATGTGGAAGTTTGACAATGGGACC", "GGCTTACGTACCGTCTAGAGGCGAAGGGGCATATATTCCACGCCCGGCTA", "ATCATCGCATTCATGACCCTCTCTGTCGGAGATAAATGCTCAGCTTCGGT", "TAAGGATAGCATCTTCTAAAGCATTTCGTACACTGATCACGCGAGCTTTT", "TCATGTAATTCGTTCTTGGTATGGGGCCCGGGAGCGTCAAACGTGCACAA", "GCTGACTCTGATTACGAGAAGACGGAAGCAGACTGTGCGTAAATACCACT", "AATCGCCGCTAAGCTTGTAGAAGAGGCAATTAGCTTTGTGTTACGTGGAG", "TAACAGATGAATCGGGTCTACATCCCGCAAATAAGCGAGGAGCCGAACCG", "CTGGGCAGTCGTGGGGATGGCGGTCTTCGAAATAGTCGCGAACAGAGAGT", "GACTGTACAGCAGAATTCTGATGTTTTCTCGTTCACGCTGAAAAAATTTA", "CTGAACTGGCATGTGGGGATTCTTCTGGACACGGCAAGGGAGTGTCGCAG", "GGACCCGACGCCACACCACAACGTCCGAGAGTGAAACGCTGTGGGGCAAT", "AAGATACCAACAGAAGCCTTACAGCAGTAGACGGCCATTAGAATAACCTG", "GTCACTAAAAGACTGTGGCTAATATTCGAGTGCGGTCGGCATCCCCAAAC", "TACACGGTTGCATTATACCGGCTAGGCGGTATTCTGACCTATTGATCCAT", "AGATGGCCTCGTGCGCCGGTCGCGTCTGTTTGCTCACGCGAACGTAAGGG", "CAGTGCACCTGGCACGCTTTCTGTCCTCACCCCAAACATTTCCATTGGAC", "CCGAGACCCCTTGGTGAAGTTCGACCTAAGCTAATAAACTCAAAGGGGGT", "CCACCCTATGGGCGAGGAGCTCCGCATCACGCTGTACCA"};
    vector<string> codonTable = {"CGA GtLfu", "GCG AE", "TGG Jd", "CCC oYr", "CGG R", "ACC TQxpd", "GGG Uz", "GTT e", "CAC GtLfu", "TAC wKQ", "GCA GtLfu"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 802684517;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> DNASequence = {"CTCCTATAGGAGGCTAAATTCCGACCGGTCTGGGACAGTGTTGCGCTGCA", "TTCCTGTTTAGAATGAAGGTGCATGAGCGACCTTTACCTGCCGCAGTATC", "TCGTGTTTGTTAGATTCAGGGACGTCTACACGTACCTAACTTCCGAGAAT", "GGGATCCACTCTCGGGACGAGCGATTATTAACAGTTAGGCTAAGGGTGAC", "AGTGACCAGGCGACGTGGTTCATCGCATCAGCATAAGCATACCATAGTAC", "ACCGTAATTCTTTTATTGGGCGATAGGGCGACACATCCAATTTCCTGGCG", "TTTGATTGCGTCATTCAATAAAGTCAACGCATGTCGCGGTTCATATGATC", "CTTAAGAAAGCACAGTAACGTGATTACCCGGTTCTTATGCCACGCACCAG", "AGTACACTTTTCAATTTTACGCTCAGCTATCACGATACCTGGGGGCCCGC", "GGGCAGACCAGTAATAGTTAACGGCTATGGATTGGTTGAAGGTGAAAGTT", "GTGTCAACGGCGTGTCTACTAACGACGAATTGACCTTCGCCAAGATATTC", "AGTCTTGCTGGAGACATGTCAGTATTTTACAAATCTAAGTAGTGGGGCGC", "TGAAATTTCTGCTGGACGACCAAGGGTGACATCCGCGCGAAGCTTATAGG", "CAGCGGATTAGTTAGCCGGCGGACCTCATCGGCTACCAGGATTGGCAAAG", "CATCCAATATGGTCCTTGGCTGGATTTGGTTATCTGCTTCACATTCCAAA", "CGGCGTGCCTAGGTACTCGATGCTTAAGAAGTGTGGATACCACAGCCCGA", "CCGTACTAAGAGCATAGTTGAGACGGTAACACGAGGCTGTCGCTGGTTTA", "TTATGGCCACGATTACCTGAAAGCTGCACGCGCCCAATCAGACCTCGGGT", "GGGGCCTTTGCGGTAATAGGCTATATGGTGCCTAAGTTCATTGCAGCTGA", "TAGTTGATTTCGAGAAGTGATCGCTGAGTGAAAGTTTTAACCGCCGCACA", "AGCGAGGAGCAGCATGTACGATAGGCGCCACTAGCATACCCCATCTCGTG", "TTCGTCACTTCGACTCTCTGTGAGTCCGAATGTATACTCGAGTAACTTTA", "CAGCGCTCCGCGTGGAAATCGGATGCGCGCCCCCTCTCTGAGGTTTTTGA", "ATGAAGCGACATTTGAGCCCCCAAGTTCCCTCACCAAGACAAGTTTTCGA", "TACTACCGTTAAGATACTGCGGCTCAAACAAAACTCTGACCACACGCTTA", "GCAAACAACTACTCGATCATTCTATGGGCCGAGGCGCCGTGAACCGTGAT", "CGGGGCGTAAAACGGTTAGCGGCGATTTCTATCATACCGTCGTTTCAATA", "CCGGAGCTTGATCTTGTAACTTAAATCCTGCAAAGAGATCGGACCTAGTC", "CAGCAGATATCCTTCCTCTCTCATTCCGAGACAGGATGTGCAAATTCAGG", "CCCCAGTCTGATAACGCATGGAGGACCCTACGTTCTCGGATGTGAATCAC", "AGCATCCATGAGGTCAAGGGGTGCCGCGACAAACAGTTGCCGAATTATCA", "TATCCGAGTAAGACACAGGGAATACATCGGCCGGTCTTACTAATCAGCGT", "AGGGAAGTCTTGGCTCTCGTTCGTAATGTTTTCCCCCCATGTCGGAATCA", "AGCGCCAGCTCGAGATACGAGTTCCTCTATTACGATCACTTGCTTCATTG", "GCTCTGGGCGCGATGAAAATTTCGAGACCTAAGTTTTCCGCGGCCTCTTC", "AAGCGGAGACCCTAGATCCACTGAGATATACTAAGGAGTACGCGGCGTTA", "TGGCGTCCGACATCCTACCTCTCGCCAAGTCCTATCTGGCGATTTGATAC", "CCATACGATTGGGCGCTCCCGATCTAATTAAGCATTCCTGACTGTCCCGT", "TTTAGCAGGGGGTAGATCTCATTGCCATTGAACGCAACGGATGGGTGCGC", "TAGCGCTGGAGAAAGCCGGATGGCTTATGGGTGGGTACTGCCGCCTGTCT", "GACTCAACTGCCCAAAGACCATTGAGTGTGCCGTGCTGTATGTAATAGGT", "AGATTACAGGAAAGGGACTGTCTACTTCCCGCAAGGACGAAGACGGAGCG", "TGACGCGCTCGTTGTTTTGTTGCGAATCAGATTAGCCGGGATCTCGAATG", "TAGGGGATAACATAATCCCACCTTGATAAAGTATCATCTTCGGAGGTCCG", "CTAAAGATGATGTGCGGGCCTTACTAAACCGTGGTAGTTTTCCAAGAGTC", "AAGACTATTCGTAGCTGACCGGTAATGACTCCTATATTTCACGAAATGCG", "CAGGAGTAGGTACAAGAGCTACAGCAGAAAGCATACCTCATGAGGCTAAG", "TACTGTGTTGGTAGAAATGC"};
    vector<string> codonTable = {"TAT AL", "CCT D", "CTC ij", "CCA GbJeg", "TAG b", "ATT b", "TAC vu", "AAA GbJeg", "GTC D", "GCG D", "GGA eKes", "TGC GbJeg", "CGC vu", "TAA EU", "GCC AL", "AGC EA", "TGA FDOPB", "AGG b", "ACC EA", "CAC EU", "GAA D", "CGG FDOPB", "GCA EU", "GGT ij", "GCT EU", "AGT eKes", "CTG krz", "GGG Sy", "CAG oK", "GTA Cw", "CAT FDOPB", "ACT b", "TTT ij", "ATG EU", "GAG bJ", "GAC oK", "ACG oK", "TCT eKes", "ATC ij", "AAG AL", "TCC bJ", "CCC FDOPB", "AAC AL", "TGG GbJeg"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 981319697;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> DNASequence = {"GTTCCGGTAGGTCCTTTATATCCCCGCCATAGAGACTGGTTTAGATTTGA", "GCTAGGGAAGTCTGAGATTAACTAATGTCTGAGCATAGTCTCTAATGAAT", "AAGGAGCGTTCCTCTTGTCTGGGCAGGGGGCAGAGAAAGTGCGCTCACGC", "GGCTACCAACGTCGTAGTATAGGGCCACGATTGGCGATGCGGGATCACAC", "GAAGACAATGACTGAGGCCTTCCCCGTTATGAGGGGCGGGGAACGCATTC", "CATTCATGTTTCTCACACCGCAGCCGTCCATTACCCCGCGCGAAAACATT", "GGTGAGTGAGGGTAAGCCTTAGCAGCACCTGCCTATCTCTCACGACTTTA", "ATATTGGTACCATTTTAGACCCTTCTGGACACGAGCGTAAGCACGTGACG", "CGCGCTTCCTTCGTCTGCCGCAACTAGCAACCGTCCAGTCCAGCTAGTCA", "CTCTGGTTATGCGTGAGGGCCCTATAACTTTAAGTATATTTCACAGTGGC", "CATGAAGATTTATGGAGCACGTGGGGGCTTGGTCTTTTTAACATAGTGAT", "AGAGGGTTCCAAATCGAGCTGCGGGGTCTTGGTGTCTCGGTGGTCCCCAT", "GAGGGTTTGCATATCTGAGTGCCGATACGAAGAGTATATCCTACCCAACG", "GCCAACGATTATCCTGCAAGCCCCGTGGGATTCGTCACCGATCCGGCAGC", "GCTATCGCATTGAGTTCGATTAAGCGGTGTGTGTGTGTGAACGACCTTAT", "ATTCTAACTAGTTGACCGGAGGTTGGATCAACGGTCGGTCGCGCAGGCGT", "TTTACCGCGACACAGACTGGGTCGGCTTGCCCAGCCAATAAGACAGCCCA", "CATTGTGTATGCGGAAACATCATCTTAGGCAACTTCATGCATTATGATAC", "CCCGTGCTGAGGCACGCTCAGTGCTCATGAGACCGGAACGCATTCACTTG", "GCCTTGGGCTGCGCTTATGTTATATGAGTTTCGGGTTTCAAACGCGTTCC", "AGCTAGTATAGCCTAAAGTCGTTATGGACACCATAACTAGTGAGTCGTAC", "AGGTGCCTCGTTATAATCTGCATCGATTGTGGCGCAATTTCCATGCTTTC", "CGCGCCAGGGTGTGTGATCTAGGCCGTGCAATATCCGCATATCTTGCTTG", "ATTAGGGCTATGTTCGGACGTCTAAAGCTCATATTGCCCACGGGCAGA"};
    vector<string> codonTable = {"GTA rDsl", "TGC SJUPD", "CAT SJUPD", "TCG rDsl", "ACC SJUPD", "GGA rDsl", "GTG rDsl", "ACG rDsl", "AAA SJUPD", "GCT SJUPD", "TCC SJUPD", "AGG rDsl", "ATC rDsl", "ACT rDsl"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 350562323;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> DNASequence = {"TCGAACAGCTGATTGCTCGTACTCAGACCTCGGCGGTAGGTTAACGCGAA", "TACACTGTGAACAGTGTAGCATAATCGAAGATATTCACGGTGATTTCCGC", "TGGTGCGTCACTTCACGATTGATATATACCCAAATGCTCGTGCAACCGCA", "TAAAAGAGGTAATCAAACTTAACCCCTTCGTGAGGATGGCCACGCCACTT", "GGGAAATGTGTCTTACGTATGTTACGCCCGAATGCGGGTCTATAGTCTAC", "AGGGGCTATGATATCCCAAGTTAATGGGCGACGAATCGGGTGTTCGGGAG", "TTCTTGCCTTCGAAGATAGCGTACATCACCGGGCTCAGGGTATTACTTCT", "AAAATATGAGAAGGCCACAGATGTAGGGTACTCCTGCCTTATTGCGACAC", "CCGAGAAGGTGAAACTGTGCAAGTGACATTCGGAGTAGCGCCGCCAACGG", "TGGTTGTGGACAGAAGGCTAAACACGACAGCTGAACGGATGTTGTGTCAA", "TAAGATTCGTAACGCCAAACGAGCGCACGACCCTACAGTGCGATTCAGCA", "AAAGTGATAGGTAAACCAAAGCGGACAAATAATCGAAAGCGTGATGCGGC", "GTTTTTATTAAGCGAAGAATCAAAATGCTTTCCAAGGACCATACCATACT", "GTTGGTTTGACCCTTCCCCTTTAGGCGCTAACGTATCTAATCTAGACACG", "GGCGTACTTGTTACAAGCGATCCACCAGCCTAAGAGGCCCAGGACAAACG", "AGCTGTGGCAAGCCTCATTCGTAGTCGTTATTAGAGCGGGAGTCACTAGA", "CTTTCAGATCCAACGAACAGAAGTCGGGATGCCCGTCGGGAAAACGCCAC", "CACAGTGTCGCACTCAATGGCAGCAACCTCTGTGGCCTGTTATGTGGGCG", "TGGTAGTCCAGGGCGTTACCGGTCTACCGTATCGATGTGAGTGTGTCCGT", "GTCCGGCAACGCGAAGTGCTGAAGGACACATATGCTTGTTACGGTATAGG", "TGAGTGGGGAACCTATATCGACAAATATGGTCTTAACGAAAACCTCGGGC", "TGTTGGCGCAGGCCCTTTCTTCTGTAATGGGCGCATACTTCCCTT"};
    vector<string> codonTable = {"CCA Sd", "CGA tTb", "TTG JmoZm", "CAG Wqqxd", "GGC Sd", "AGT fld", "AGC McIw", "GGT zaMO", "CTC iu", "TTT E", "CTG E", "GGG rQsZx", "GCA fld", "ATA Gpw", "CGT ke", "AAA g", "GAG l", "TAC tTb", "TAT Sd", "ATG iUDww", "CGC fld", "CCG E", "TCT tTb", "AAC zaMO", "CTT iu", "ATT Gpw", "GTT iu", "TTA iu"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 335161270;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> DNASequence = {"CGTTCATCCTTAGTTAATTCTCACTTGTGATAAATCCCGTGCTTACTAGA", "CCCCTGACCGTGATATGCGTGTATAAGTATTCGGTTGTGATCATGAAGCA", "CATCTGCCCCGATGGCCTGAGCTGGCGAAAATATGGCCAGTAGCGTTACC", "AAGTGTATTATTTTCTCTGTCCTATCGACATCACAGGACTAGAGCCCGAA", "CCCGTAACACCTTCGTAGTCCGACTCGGAGGCAAATAAGCCAGACGTCTC", "TGATATAGCATATGATCCGCTACCAGAGATAGCACTTCCGTAGAGGTAAC", "CTTGATTACTGCCACGTGAATTACTGCCGCTCAAAAGTAAAGTTAGCTGC", "TCATGTCAGCCTTCTTCCATTACATCGGATCTACCGGTGGGACCTGGGCG", "CGAGGTATTACGGCAAAGTGTTGGGCGGCATTGTCTCTAGTCTCTTCTCA", "CATCGCTTAGTGTCCGGTCACACGCACGTGGAGCCTTGCGGGTCCGAATT", "AGTTGGTATAGCATTCCCCTAACTCTCCGGGGGCCTCGTGATCAAGTCAG", "GAGCTAGACTGCTTTGAGGGGGCAGCGCGAATAGGGGGGCCTTGCAGCAT", "AGCCGAGTTTTTAGTATCGCTAGAAACGTCCTATAGTGCACAGCGCCCTA", "TCCCCCTTAAGCTGGTTCCATTACAGTCAATTCGGGACCACCCAAATGCA", "GGTGATTTATGTAACGGCCCCTTTTTTCCGCAGGGGTCTTGCAGCCGCTA", "TGTACCTGTATGACTACACGTCATACGGTCGAATACGGACGGAGATGCGC", "ACTAATTGTACCCCGCGTAGGGTGGGTTACGCTCCTAGTTAGGCAGTGCG", "GCTCACATACGGTTCGACGTGGCTATCTCGCAAATACTGCGTCCATCCGA", "GTGCAGGTCACGCCGGCACATCGGTGCGAAGATTCTCAAGACTCTCAACT", "AGGGTCGGCGGAGCGAAAAAGCTCTATGAACCGAATCGCTGCGTTTGTTG", "GTACGGCTTTTGGCGGGAGCGTTTAAAGGTGTAGGATATATAGCCTCCGA", "TTTAATAATGTCCGAAGGCCGGCGCTCTGATCTACTTTTACCCGATGGCA", "AAACGCGCGGCCAACTTGACACTCATGACAACCATACCCAAGCCGTGCTG", "TTAAGCTGCGGCAATTCGATAACCCAAATTGAAACGCGTTGTGGTCTGCT", "TCTGTAATATAATAAGACGTGTATCGAGTCCATAAAAAGATGAAAAAACG", "TACGGTTGTAAGCTGCTGCCAGCAGCCGCTTGGGTTTACACCGTGGGCTA", "GTGAGTCATTTACCAAGTAATCCCGAATTGTCCCCAATATAGTCATCAAT", "ATGTAGTACAGACCCTCCATGACTTCAGCCCTGCAGATACGGCAAGGTAG", "AAACTTTTCAGGTGATTAATCGTGATTGATTATTCAAAGTATCTCCAACA", "TTAACAGGGGTCAAACCACATCTGGAAGACATAAGCATCGCGACGAGACA", "AGTGGCGGCGCCCCCATCTGAATACTCATTCGCGTAACACACTCTGTAAA", "AAATCTATTGAGTCTATGCTACGGTCTACGCCGCAAGATTGTCCAACTGT", "AGGGTTACTCAGGGCGAAGTTGCAACATGGAGTATCTTTAGTATCCCCCC", "AAACAATATCGGACGTTCAACGTCTATGCAACAATACAAGCGTCACGGTG", "GAGTCCTAAGACCACGATAATCGAGGTTTATTACATTTTTCTGTTCTTGT", "TCGCTTAACGAGCCACGTGCAAGAGCCCGAGCTTTACTATCACTCCGAGT", "CGGAGTCAGACTCGAGGCTGGGGATCCCCAAGAGGGCCAACCTGATTGAA", "TGACATTCGATGGTTTCGGCGCTCATATCAGGGGCGCGCAGGATCTCTTA", "ACCTGCCGATGGTTTGTGTGGTTGAGTCCATCCGAACCGCGTACCTAGCG", "TACAACGTGATCTGATACGGTTTTAGAATCGATAATTGACGTTCCTGCAT", "CTCGCCTCCAGCACCAGGGGATCTATCGACTCGGAAATTCTCTTTATCGC", "AAGCTGGGGGACAAAAAATTCAGATCAATGCTGCGTAGCGTTAGTAGTAT", "CTTATCTTCACG"};
    vector<string> codonTable = {"ACC Pik", "TCC i", "AAT i", "GTC Sz", "CAA i", "CTC i"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 464868560;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> DNASequence = {"ATGCGCATTAACCTCCTACCATGGAAGGGACGTAACCCGGCAATTTGATC", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "ATGCAG"};
    vector<string> codonTable = {"AAC RpjZt", "AAT ZeiC", "GCA ChZwh", "TCC RpjZt", "GAA I", "TAG ZeiC", "CTG dVK", "GAG ZeiC", "GTG I", "AAG q", "ATT dVK", "AGA cJEjM", "GGG KONUd", "GTC ZRV", "GGC ZeiC", "TTA KONUd", "GAC q", "CCA q", "GCC ZRV", "GCG RpjZt", "CCT ZRV", "ATG dVK", "ATC ChZwh", "CTC cJEjM", "CCC q", "ATA dWjz", "TTG DkEG", "CAG q", "CAA ZRV", "ACT dVK", "TCG dVK", "ACC I", "CGC dVK"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 455985264;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> DNASequence = {"CTTTGCCAAATGGGCTGTAACCTCTTTGGTAAAGGAAAAAATGGCATATT", "AGGTCCCGAATCATAGTAATCAAAATCTTGAGGGCAATGATCCGACTTTT", "CGGCGGGACTACCGATGACTAGATTAGCTCGGATCACAATTAGGGGTTGG", "CATCTCCCTGGCGGAAGCAAAGAGTAGATTGGTTAAGCTCCCTAATAAAA", "AAGAGTATTGCTTGAGAGATACGTCGCCGCTGCCAAGAGTGAATGACGGC", "CGGACAATTGGAGACGCCGAGGAGCGGTGTGACTCTGCCCAACGCTTTGT", "TTCTCTCAAATGCGTTTCGGTGGGGACCTCGAGATCTACTAATCGAGCCT", "AGTATCAGTGATGATTCCTTGTTCATCGGTTACAAGCAGGGGCGGACACG", "GACCTCGGCGTGGGGGGAGTGGCCTCCGCTTATGTACCATATCGCATAAT", "TGCAAGCCTTGAGTGCTATTTGAGTTGCTGGCGACGGTCCAACGTAACCG", "GGTAGATTCATACCATAGACACTCAATCCGACTTCCTGAAGTACGCGGAA", "CCCGTCGATCGTTTAGGGTGGCCGTAATACTCTGAAAGCGAACTTTCTCG", "CACGGGGACGCGAGTAGGAATACGGGCACTAGTCTTACTTCGCCTATCGT", "TCTGACTTTAATGGGCCGTGCGTGCAGGCTCGGGTGCCCGCTCACACTGG", "CCGGAAGGGACAAAGTGAGCGAGAAAACTACGCATCACAGCCGCCTAAGG", "CTAAGAAGTTGGCAGGCGACTTTCGGGGATGCCGTAGTGCCGATGGTCTT", "TAACCAACGAGTTACAACTATGGGTTTAGCTTCGGGGGATAGCTATTAGA", "ATAGCTTGTCAAGTGTCTTCCTATAAATCATCTTCGAGTTAGGACTTTCA", "GTTGATAAACAGTTCGCTTAAGGGGATCTGTCCAACGACGCTTAAAGTTT", "TTCCTACACGGGAAAACGCTTTACTCCTGGACCCTGCGGTTTTTTTTGCG", "TGTTAAGCTTATGTGCCAACGTGCATGGCATGGATACCCGATTGACCCTC", "TCATTAACGCCTCATGAGATGAACAATCCATACTTGGTATGCAATGGTTA", "ACAATAACCTCATGTATCTGACAATTGCCTCCGTTTTTGAAAATGTTTAA", "CATCAAAACCTGTCCAGGGTGGGGTTTAATCCTGGTGGTAAAGTTAGCAT", "AGCGGGCCATGCGCATGGCTGCTGAAGGTGCTGTCTTTGTATGAGGTTTA", "ACCGACGAACGCGTAAATGGAGCGGATTGATGCGT"};
    vector<string> codonTable = {"CTC EtzEz", "AGA bQ", "CGT HQKb", "GCG bQ", "CCA dmBd", "CTG jFf", "ATG EtzEz", "ATC bQ", "ACG dmBd", "AGT EtzEz", "GGG HQKb"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 192470950;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> DNASequence = {"TGGCACTAAGCGTTACGGGCTTATGCGAGGTCTCGTTCTTAGCGCTACCG", "TGTTCCGCCTAGGTATATAGCATTGAAACCGGCCCTGAGATGACCAATGA", "CAAGTAGGAAAGGCCAAAAGATGAAACATAAGAAGTATCAGTATGCGGCG", "GCTTTTTGTCGTAGTGCGTGGCCGGAATACTGGACCTGAAAGTCTAAGGT", "TGGGTGAGCAAGGGGAACGACAGGCCACCGAGTGGCTGAAGAGTAGTAAC", "CTCACTTCAGCATGGCATAATGCCCCAGCCCTGTGACCTCAGCTTAAGTA", "GAAATCCTCGGTCTAAGCCCTCAGATAACTACGACCTGGGTGCGCCAAGC", "CCGCCGACGCGGTTAAGTGGCCTTAGGAATTCACGCAGTGACTGATGGAT", "TCGAGGAGAACTCCGATGGATATAGTGTCGAACGAATAGTACATTGTCTT", "CATGCCCAGGGGGATGCAAAGACGTAGCCCGTTCTGTGGCTTACGTCATC", "ACCTCATACGCACGCGTGGCACAAGGTAGACGTTCGTGGGTAGAAAGTGT", "AGAAGGGCGTTACATGGCTTACTACTAACAGCGGCGTAACTTCGTGTCAC", "GCTTCGACGCCTTCCGAGGAACGCCCCGGCATTTAGCCCCTTGCGCAGAA", "ACCGTTAGTGCTTGCTGTGAGTTGGTAGCAGCCCAAGCGCAAATACCGGA", "GGTCTCGTCCTATACGACAGTAATGAGAGGATTGGAAGTCAATTAGCAAC", "AGTACCACCGACCTAATCGATGAATCAGCACCGGCCACTCATTCAGTTAC", "TTCTGGGGTCGGTGTAATCTGTATGACCTCGAGATTGTCCGCCCAGCATG", "TCCTGATATACCACCTGAACCGTTCTTTTACACTTCGACCAGTAAGTGGG", "AATTGGACTTCGTTTAGCACTAAAAAGGGTTATATCAGTTCGCATGACAC", "TTCTTTTCCTGGTTGAGGGTCCCGCGTCCGTGCATATACGTCTAGCCTCA", "ATCTCTCAATGTTATAAAATGGGCGTGAAACCTTGACAACGGGCGTCATC", "TTACGAGTAGTCACAGCCACTGACAGGCGTTCAGTGGCTGCACCCCCTTC", "GAAGCAGCCTGGAGTTTCAACCCTTTGGCCAACAATAGGCCTCCCGAACA", "ATCCAGAGGCAGCCACGAAGTTCGGGTGGGGGCACCACAGTATGCTCCGC", "ACGCAGATTGTTGGTACTCCCGTATGTGACCATATTGTCTTGACTTCGCT", "CTCGTGTCGGTAGCACGAAATTGTGTAACCTTAGCTTAGCGTCTGTATTA", "GATTTCATCTAGAATTTATTTCAGGGCGCGGAGCGCTGAGCATTAAATCT", "AGGATTGATCGCCGGAACAACCAGGAAGGCCGAAATGGTCATTTCCTCGT", "TAATGGGGGTAACACCGACCCCGGGACTTAAAAATGACGGGGGCAATGAG", "ACCACAATTTTGTTGCCGTATTATGATCGGCGATGCTAGCTCACGGTCGA", "CCTCGCCTGACAACTGGAGTCTACGGCCAACTCAGCCCGACAACCTCAGA", "GATGTCTGTGGACAAACCCATGATATCCTATCAAATTGCATAAGCAGTTC", "GAAGTACGTAGACAATTTCAGGAGTCACATTGTTTAGAACAGCCGCGTAA", "TGGTTCATGAACGTACGGCGACTCGTTTATGTCTAAAATGAGAGCACAGT", "GGATAGAGCACATGGTGGGCTGATGTGATTTTTTATCACGAGGTTTACCG", "TGGGTTCCTGGACCGCAACCGCAGGTCAGGGTTTCAATCTCCGGT"};
    vector<string> codonTable = {"GCA wEiI", "ATC S", "ATA q", "GGC wEiI", "CGC ceP", "TGA cSyXL", "AGT q", "TGC v", "CAG NBsFc", "TTC wEiI", "AAT NBsFc", "AGC S", "ACG q", "TCA cSyXL", "ACT v", "TCT ceP", "GAG v", "CCT q", "CAC cSyXL", "GGG ceP", "CAT cSyXL", "TCC wEiI", "CTC ceP", "GTC wEiI", "CGA q", "CCG v", "GCC cSyXL", "TAC v", "CAA q", "AAA v", "GCG ceP", "GCT S", "GTA S", "TCG ceP", "ATG cSyXL", "CTG ceP", "TAG v", "GAA NBsFc", "AGA S", "GAC q", "GAT cSyXL", "ACC NBsFc"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 348062764;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> DNASequence = {"AAGTGCCCACCGTCTCGGTCTCCGGCTGACCACATATGTTAGCGAAAGGG", "ACATAGGTTGGGGCGTCCCGGTTCCTCCCAATCAACGGACGGATAAATCT", "CCAATCTGTAGGTAGTCGCCAACCGCCGGTCCGCCCTGACGGACGGGCTC", "TGCGAACCAAGCCGGTACTCTCATGATTCAGGGCGGCAACAAGTGTAGGT", "ATACAGCTCTGCCTTATGATCCTAGCTGCCTCGTTACGTTCCGGACGTCA", "ATCGTAAAGCCCGCGCCACGGTCTCCACGCCGGTTCTGCCATGGGTCAGT", "ATACATTAGCCAAATGCATTCTCATAGGCTCCACTAGACTCTTCGAAAAT", "GTCATGACTCGGTGAAAAACTCGCGTCGGTTTAGTTTTAAAGGTGGGGGG", "ATCGGATAGCTCGTACCTGCTGACTGCCTAATTCTCCATCCATAGGCACA", "CAACCTCTGGGGTCCAGTACGCCTCACTATTCTTGAAATGGCGCGACTTC", "GTTAAGCCCCGAGTTTTGTATCTCGCCAGATTTATTAGGCCTCAAATTGA", "GCCCGATACCAGGTGCAGCGCTTTTTTACCAAGCCTTGTGAGTGCCATCC", "CTGGACTGCGACGGGACCGAAGGTTAGTTAAATGGGCCTTATAGTGGGAT", "GACTTGGCTCTTCACCGTTCCGACTTATCAACATGTCTGGACCCTGTCCC", "GTAGGTCGATGCGGGGCACCACTCGAACTTTCATAACCGCGGTGTCTATG", "CTCGGAAACTTAGTTGTGATCGCGTGCAGGAACCAACAATTTTCCCAGAA", "CCGTCTTTTCCTTTGTTATGGACCCTTCTGCGAATCTAGCCAGGTGCCGG", "ATGCAAATCTCTCTGGGCGGTCGTATCTGACGGCAGCACGTGCACAGATG", "GAAGTACGTAAAGGCGTTAGCTTGTGGTACCGTCTACGAAGAATGCTCGT", "ACAGAGTGCTCTTGGAGAAGAGGATTCAGCTATTGTCCCTATATCGTCAT", "AATACATTATGTTCACGTTCATGCACAGT"};
    vector<string> codonTable = {"TTG vbt", "GAC Yf", "GGT OY", "ATA ok", "TCA OY", "GGA NPT", "GTT ok", "TGT Yf", "AAT BCPrX", "CCT fsrB", "ACA OY", "GTA ugONx", "CAG Yf", "CGT ok", "ACG fsrB", "AAG ugONx", "GAA vbt", "AGG BCPrX"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 397144972;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> DNASequence = {"CTCGGACGACGTGCCAGGAAGCCCCAATGTGACCGACAACTGGCACCGAC", "GGGAAAACTGGTGAGTCAGCCCAATACAGTCTCAGTAGGGGTCTGACAAA", "CCCCCGCGGACCTTCCATCGCATTTCTGCTGTGAGAAAGGAAATGTAGAC", "GCCCGGTCGGGTCTGATGATTATGTCCTCCGATACCAGTGTCCGGAGCGG", "GTGTCCGTAAGGACACTAAAGTCACACACAGCTTGGATCAGAGGCGCGGC", "GTAAGCAATTACGGATTAAAAGAGGTGACTCCCCCAGTACAATGGTCTTC", "TTCTTAACATGCGAGAATTAGTCCCAATTTAACCGGCGACCGTAACCAGG", "CTT"};
    vector<string> codonTable = {"CCG S", "GAA vhG", "GCG qi", "CAC HVwyo", "GCT sH", "GTG VsH", "ACA qi", "AGA hRtd", "TGC Q", "ATG nlK", "ACG qGu", "ACT S", "TGT qGu", "TAT TvsFM", "GGC nlK", "GTT EUK", "AGT qGu", "TTA qGu", "TAC hRtd", "GAG EUK", "GGA qi", "CAT qi", "AGG qi", "TCC TvsFM", "TTG edAi", "TCA qGu", "TGA P"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 778088549;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> DNASequence = {"GTCAGCTTGAGTGTCCTGTTAATAGTGTACCAAGAGATCGGACTGTGCCC", "GCTCCCGAGATAATGACGTTTCTGGCCGTTACATTCGTTTTAGTTTTGTA", "CATGACCCAGACCAGGCGCGCGGACCGGACACCTCCGTGACGCTGATAGG", "ACGGCACAACCAGGTAACTGCGTTTCGATTGTGTCCGTCGAGGGTCGTTC", "TAAATTTCTAATTGAGAGTTTTCCCGTACCCGCCAGATCTTCAAACGCAC", "GGGAAAGGAAACACGAAGTCCATTAGGGAGCGTAGGCTTCTTGTGTTGCA", "CTAGAATGATGCCCCAATTTACAGGGCTGTTAAGGCGTAGAGATCTTCAC", "AATAGCAAGGTTGGCTAAAAACAAGCTCTGTTGAGGTGGCTTGCCAGCCA", "CCCCCATACCGAGTATCTCCAGGGAAAACCATTCAGCTGTGTTGCGCTCG", "GCTTCGTCGGTGTAATGCAGGACTGTCACTGAATGCCCTACAGGAGCGAC", "TGCACATTCGCAACTGTGAAGCATAACCGCGTCATTCACTATTAGCGCAG", "CACCTCCAGACTTTTACGCTCCAACGCAACGCCATATGACGCGTACTCCG", "GTAGTCTGCTCCGTCCTGATAGAGCACACTGAAAGGCCTGGGATTCGACG", "GCTGCAGTAAAGAAGGGCATAGCACGCAATGGACTCCCGCCGCCGAAGCA", "CCGTCATGATCGCCAGTTACGCAATACTGTTAACTCCAACTTAGGATTTT", "GTGATCAGGGTCGTTCGGTAAATAACCTGGCGCAGATGGCTCGCGCTGCA", "GCCCTCTGGTTACACAAGGGACCGTACAGTCTGTGCGTATAGGCGACGGA", "TGCGGGAAGGTATCTCGCGGAGTGACGCATCGCTTACTACTTCAAACGCC", "TCACACTGTGCATGTAGAGACCTTCTTTCAGACACTCGCGT"};
    vector<string> codonTable = {"TTG RCUM", "ACG RCUM", "TTA jkKTB", "ATC jkKTB", "GAG nuT", "AGT qCFk", "GGT RCUM", "CCC nuT", "AAA qCFk", "CAT RCUM", "AGA D", "GCC jkKTB", "CGA jkKTB", "CTT ezcoq", "ATA WCm", "AAC WCm", "CCA RCUM", "TGG RCUM", "CTG ezcoq", "GCG DK", "GTA D", "ACT WCm", "ATG jkKTB", "TCA D", "AGC DK", "TTC jkKTB", "CTC DK"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 830236934;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> DNASequence = {"TACCCCCCATTGAATCCCGTCAGGTAGATCAACTCTGGGGCCTCCATGTC", "CGTAGAATATGCTAGAGTGTCAAACCAGATCTTGTCGGGGCTAATGACCG", "AGGAGACGGTTAAAGTCTCATGTTGATGTGTTTCTCCGCACGCCGAAAGC", "ACATGGTCTACATGCACTATGCCAGAAGAGAAACTAAACGCTGGTCAGGA", "CTCTTATGGTTATGCAGCAAACGACCCCAACCGTGCGCATGGTCTGCCCC", "CCGACACTCCGTTTACGGTATCGATCAGTCCGTAAAACTCGCGCGGGGGC", "GCGTCCGCCCTTACTACTTGGCCTTACCGAGTCTAGGGAAAGTCAACCTG", "ACACGGTCACCGAGCATCATCACACCAGTGTGAGAATTCTATTACGAGAA", "TTCGTTCTCGCATTGGTCCGGCCCCGCTTCTAGGACTCAGACGGGTTCGG", "AGCTATCCAGGGATTAAACAACCGACTTTCTGAGCCCTTTCCCCAGCAAT", "AAACGATCGCGCAGACACGGGAAATAAGAATAATTGTACCCATCGTTAAC", "GGTGAAAAGAACCAGGGTGAGCATTAACAATGAATAATAAGACAACGGGT", "ATGAATACGACCGCTTCTACTGCAGCCTCACCTACGTTACTCGTGCAAGA", "TTAGTGCGTTGGGCGAATTAGCTTGCGGCGGGCGGGGATCTCACTGCGCA", "GCCCGATGGATTGGTTTCTATACTCGCGTGGTAAGGATTGTACCGGACAT", "CTGTAATTGACTTCTTATAGCTGGGGTGAGTTCCATCTACGCGCTTGTAG", "CTCCCCAGAATTTAGGTCCTTAGCTCGCGACCTTTGGTTATCTCCTAGGC", "CCTATACTCATTCACGGACCAATGCGCCTATGCAGGAACTCGATGCTTTG", "ATGTCATTCATAAGAGGCAAGCAGGGCCTGCTCAAGCTCTGATGGGTTAT", "GGGGTGTGAATCTATGGGCACAAAGAGTTGACTAAAGGAGGTCTTGCCTT", "TGGTGTTTACCCTGCGAATAGCTAGCGATCGACTGAACGCTATCAGAAGT", "ATGTGGGTGTATTCACCCGATCCATCGTCTACAAGGGGTTCTCGGCCATA", "CACTAAGGTACGCTGACTGGAACCAAGCCCCTTTATTGTCGGAACGAGCA", "TCAAGAATCCGTGCCGAGTTACCACGGTTATATTACGCGATTGTAACAGA", "TACGAGTACAAGCTCCGATTCCCAGCAACGAGGTTACCATCACTGTATGT", "CAGTATGAGAGGGGCCGTTGAAGCTTATCGCTGAAGGGGTGTCTCGGACT", "GTTGGACGGTTAACAAAGGGCTTGAGTAAGTGCATCAAAGTGGGAAGCGG", "ACCTATTTTTCACGAAAAAAATGGCAGCCGACACAAGTTCAGCCTCCTTC", "GTATCCTCTGATCAACAGGTCGCTAAATTTGCAGACCTTGTTTGTTATCG", "ATTTCTTCAAGATGGTAAAGATCTCAACTCAGATCCCGTCGCCCACGACA", "GCTCGACGCGCTTCAGTCTAGTCAGCCGCGGCACTACGGGTACCCCAGGG", "GTCATACAGGGTAGATGCCGAGGCACGCATAAACATCTTCCCGCCGGACA", "GCGGGAATCAACAATCTGGCAATACGGAAAAGTGTCGTGAGGCGGGACGG", "TGGCGAAGAAGAACATTGCCAAACGGCACAGGGGAGGCTACCACGAACAC", "GACGCAGTAATAGTGACTCGTTAGAGGACGCAGTGCTTGGTTGTATTCAG", "AGCATCACCCCTCAAACGGCTCGCGGGCAGAATTAAGATCCGGTGAGCGT", "TCGCTGACAAACAGGAGTCCGTAGCAGACTTGGCACAATCATTACCACGC", "TGAGTCGCCAGGGTAGGCGCTGGAGCCGTACAGCGCTTTGTCTCGTATGG", "GCTGCCATCTGTTTGTACATAGATAGACTAACCGAGAACCTAGCGTGGGG", "CGTCCGCTAGTAAGGCTACACAACCGGATGGATTCACTTCCACTGCGTCA", "TTATGCTGCATCAAGTAAATCTTTATGGAA"};
    vector<string> codonTable = {"GGC RlteN", "CTG AF", "GAT uEns", "TTA AF", "GGG RlteN", "CAT FPe", "AAG RlteN", "ATC uEns", "GAC RlteN", "TCA AF", "TGA uEns", "CGT FPe", "CTT FPe", "GTG uEns", "TTG AF", "ACG uEns", "CGG AF", "GGA RlteN", "AGA FPe", "AAC uEns", "ACC uEns", "CAC AF", "TTT RlteN", "TAT RlteN", "TCT uEns", "GCC uEns", "GTT uEns", "TTC AF", "AGT FPe", "TGG RlteN", "CAG RlteN", "GTA RlteN", "ACT AF", "CCT uEns", "ATT FPe", "TGT uEns", "CTC FPe", "ACA uEns", "CGA FPe", "TCG RlteN", "GCT RlteN"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 615028704;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> DNASequence = {"AGAGATGGTTTTGGTTCAGCCAGAACCTCACCACAAAAGTTCACAGGTGG", "GAGTCGGTCATGCTATGATTTAAGCATATCGCCGGTTGAAGGGCCGGAAC", "GTCGCTGGTTATGTCGAGTCGCATTCTCTTTCAGATCGCACTTCAGAATT", "CTGCATGTGCATTCCTGGCAGGTCATAAGTTAACTCGCGGTACACTTACG", "AATGCTCCTAAACATGCCACATCCTTAATCGTTTCGAGCGGCGACCGGGG", "AGCCCGGCGCTGGACCACACAGTAAGCGTAGTAAGCATTGGATGCGACCA", "TCGACGGGGTGTAGTAATTTTTGACAACCCCGTAGAATGGATCCTGCTTG", "CACAATAAGCCAAACGACCGATCCGGAATTGGTCGGGGGGACGACAGCCA", "ACTCTCCGCGCCTATCGCATAAGAAAAGCTGCGTGTGACCGTTCTATCCT", "ATTGTTATCCAAGATTTTTGGCCCTACACTTCAACTTCCGTCGCCTGGAC", "TGTAAAACACGTGATATACGGGCGCTCATCTAAAAACACCTAACATCGGT", "TTCGCTTTGAGCAGCCGTCAAGCAACTCACGGACTCGAATAGGCGCTTGG", "GGGAGGCTCTGACGCGCCACGAAGCGAGTGGCGTC"};
    vector<string> codonTable = {"GGG h", "CTG vgG", "GTT fnuL", "CTT Lr", "GGT vgG", "TGG aWFD", "ATG ujoA", "CGC S", "AGG aWFD", "TCT vgG", "GAG fnuL", "ACA vgG", "GCT vgG", "TAA aWFD", "GCG ujoA", "AAT aWFD", "ACG vgG", "TTC aWFD", "TCG aWFD", "GTC fSkF", "CTA rOop", "CAT rOop", "ACT S", "TGC Lr", "CCT Lr", "TGA qjmnX", "ATC aWFD", "TTA S", "TCC fSkF", "AAA vgG", "AGC h", "TGT rOop", "GAT fSkF", "TCA vgG", "GGA Lr", "GCC aWFD", "GAC S", "GGC rOop", "GTG h", "CAC vgG", "ACC S", "ATA rOop", "TTT S", "CGT vgG", "TAT vgG", "CGA h"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 941970314;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> DNASequence = {"GGTGCCCTCCTGTCTTGTTCGAACGTACCATCGCAATCTGGCTCTAGTTC", "GCCGGACGCGGAATCATGTAGCCCTATCTATCTGCCGTACCGCCCTTGCA", "GACCTGCAAGATATCCGAAGCCTTGGACTTCTTTGACAACGCGGGACGAC", "TTTCACACTGGGCCCATTATGGGTTGTGTGAACGCCATTGCCTTGATCTT", "GTCGAGTGGATGAGTTAGAGTCAAGGACAGGACAGCGCATCTTCCAGTGG", "CCACTGCTACCGCTGAAGCACTGGAAAGTGGGCGCGGTCGGGGCCTCCCG", "TGCCTCCTCATAGGGATTTGTTTCGAGACCGGACATTTCGTGGCTGTACA", "GGTTACTATGCCGCTGGCCAAGGACCGGCAGCATGAGCACACGGTCGTTA", "TGATGCGTACTGTTCCGCTGTTCCTGGCCCCAACTGTCCTTATATGCCAG", "CGTTAACGCGCTGCACCTTTCCTGCCTGTGTGTACTAGTCTGACAATCTA", "AGCTTGGCTTAACTCGACTTGACGCTGGGCGGCCTGACATGATCTGAGCT", "CATGGGCTTAGCAATTATGAAGCGAGTATGTAGAGTGAACAATAACTAGT", "CACTGCCCCACGAAGGGTGGGGGCAATTATACTCGCTCTGCGTCACAGGG", "TTTTATTTCTACATGGGCATCCCGTCCTAACGGACGTGCGCTCCAACACC", "TTGGTCCGACGCATCCCAAGGTCAGCAACTTGACGTTACTCCATGCGCCA", "ACTCCCTTTAAAGACTGGTATACTTCGCTCCTTGGGCCCGCCGCTAGCGT", "CCTGGAAGCTAGATTGCGAGTTACGTCTGCACTTATTACATCGTGCCACC", "GGGACTTTCTGCGTAGATGCTCTCGCGACACCGCCAGGGACTTAATGAAT", "CGGGATAGTTGAGGCAGAGTCCCGCCCCTCGGAGGCCGAACAAAGCATCA", "CTCTCTGTGCAGCATACGGTGCTGCCATGTTAAGTTCTACGAAACTATCA", "ACCTATGCAGGTGGCTCGATAGTAAGTATGATACCCAATAGCGGAACTGC", "AGATGATCCACCTCGGTGAAGGCTTTGGATAATCTCCAGTAAAGCGTATT", "ACTTAAAGAACAAGCTCGGACGACTCACCTGTACAATAGTAATAAATCGC", "CACCTGTTAACATCCTCGTACTAATAAACGTTGGGCTTAGTCGATATGAA", "GCTGCAACACATAACGCACCGGTTGATCGTCTAGTCGTGAGGTGGAGCAA", "TGACCGCGCCTTGTTCGCGTCGTATCACTATCGTTACGGTACCAGGCGAC", "CTAGTTCTAGTTACATCCTAATTCTCAAAACTTCCAGTTGTACTCCCTGG", "GGCCAATAAGACCGTTGCCTCGTTCAATTGCCTGTTGCTGATACCTGCGA", "GAGCGCCGGATCCAAATGCATCTTTAACCGTAACCGTGTTGAGAAGATTC", "TATATAATTCCACCCGAATTTCTCCTATATGTTTGATGTACGATCTCCTG", "AAATCTCCACGGACCGCATGAGTCTGGGCCGCCGGTCAGCTTCTGTCATG", "GGGCACCGATAGGCGTGAGTTCAGGGCAGAGTGTGGGATATTGCGTATGG", "ACAAAGGCGTCTAACGGAACATGAATTAACGATGATTGACCCGCTACCCC", "GCGTCGCAGCCTTACTTGTTAGAACTATGCGTGTCATTACGTACTCAACT", "GCCGCTCTAAGGGTTAGATGCCCCGGGGAACGCTTGCGCCGACTGGTTGA", "CATGTCTCATCCCTGGCATTTTGGATTGACGCCCAGTGATCCGGAGTCGC", "ACGGAGCTTCGTTCGGATTCAGTATTGCATTAACGAAAGGCTCGGATATA", "CGAGGTTTGTACTATCCGCATTTGCTGATTAGCATAGATTTTAAGTCACT", "AGATTTATTTATCCGACTAGAGCAGAGCAAGAAAGTTGAATATGCCGTGA", "CAGGATGGGAAGAAGGTCGGCCGGACCAGAACAGACCGACGAAAAGGGAT", "TCGCAATCATTAGTGGGATACTACTCACAAATCGGTGTGGACGGATTGGA", "GATATACTTCGTGACTTCATAAGAGGTCGCTTTATACGTGAC"};
    vector<string> codonTable = {"CGT wDAoX", "CTA dpuZe", "AAA M", "ATG wDAoX", "ACA dpuZe", "TTA VuTn", "CGC VsYS", "GCG t", "CGG zBYyJ", "ATT bIkP", "ATA ow", "CAT bIkP", "CAA w", "GAC dpuZe", "AGG zBYyJ", "AGA wDAoX", "GGA bIkP", "AAC ow", "TTT cKc", "TCC Njm", "TGA zBYyJ", "TCG zBYyJ", "TGG VsYS", "CTT dQ", "TTG XXJ"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 390437055;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> DNASequence = {"CGCTTGTATGAGGAAGACTTGAATAAGCGCGCAAGGGCGCAGAGGCTATA", "TCCTGCTGGTATGCTTATAGGATAACCTCGGGAATACAGATGTCACAAGA", "GTACTAGGGATTAGTTGGTTACCTTTGTTTTTCGGGGTGTGCAGATCGTG", "CTAGAGCACGTACGGCGTGTCTGCCAATGTTCATAACCAGAGGTTTGCAT", "GCCGGTGGCTCGGCCGCGATTCCCGGGTCGAACCGAATGCCAAACCATAA", "ATCCGACTTTTGTGATGAATCCTCTGGTCGTTTAGCAAAGTTTCCTGAGG", "TACATGGCCAAGTTGTAATAGCTCTGGCGTACGCCCAATCATCGCACCAG", "CGAGATTAGCTATCCGTTGAGGGATACGCCGTCGCCTGCCAACTCGCACA", "AAGGCTGTCAGATAAGTTTGGTGCACACCCCCCCCTGAAACACGACGTGC", "TTACGATGTGAGCTATAGTCAGCCGCTTACGTGGGGATTTCGCTCTACCG", "TCTGTCCAGCCGGCTTATATATCTATACACATGTTCAGTGAGTGACCAGT", "GAAATAGTCGGCCTAGAATTGTCTCTGGTTCCTCTACCTGATACAACAAG", "TATATGTCTAGGTTAATTCCCCGCTGTGATGTTCTAAACGCCTGGGGCCA", "TTCCGGCCGCATGTGTGGTATGCCTAACTCCAGTTTTGACAAGGTTCCCA", "TAGGCTACGTTCTCGAGCGGTGGCGTGAGCACCACTTCGCGCTCTTTCGC", "CTCAGATGATACGCCAGGCTAAGGTCCATACGTTATTTCGACAATCACAT", "GATTGAGAACCTCGACCGGTTAGTACGATGTCGCGGCTGTAAACAATCGC", "ACCGGCCTTGCACCCAAGGGCGACAACTCCGCTCCTTTAACTCTGTGGCT", "TTCTGCTCGATTCAGTTTAGTTCGAATGGGCCTTACGTTTTACACATGTG", "TCCGACGTCTTTAACACATAGCAACCAGCGTGAGGACTGTCCACCCCTTG", "TCAGCCACCCAGCAGACATATGCTATACATCGGCTAGTCAATGCTTCGTG", "GAGAGGTGCGCTTAGAATTCTTGTGTAACGACGGCTTACGGTCCTCCTGG", "ATTGACCATGGTAGCCCGCGGACACACTTCTTGATGCGGGTGCTTTAGTC", "TCTACGAGTTAACGAGTCTCCCATGTCGTGCAAGACTAAAGAAAGAGCTC", "GGTGCTTTCACTACCCGACGAAACAGCGCGCATGGACCTGCACTCGGAGA", "AGCAACGTCACTAACAAGCTTGTGCATAACAACCACGAGAACTCCGCCTT", "GACTATTTTTAGGCAGTGGTGAGCCACTCGAAATTAAATGGTTTGTCTTC", "ACCGGTGAAAGAAGTGGGGTTTAAAATTTAGTTACCTACTAATAACGGAG", "CTCTTTTAAACGTGGGACGCGGCCGCTGCTTTAGATCTGCTAAAGGGGAT", "AGCCCCGGAA"};
    vector<string> codonTable = {"CCA c", "CCC yKyWv", "GCA yucx", "CGG fdLx", "TCA YE", "GCG yKyWv", "TAT fdLx", "GCC fdLx", "GAG dRP", "TCT YE", "GGG RaOU", "GTT CiJv", "TGC RaOU", "CCG CiJv", "ATC c", "CGT RaOU", "GAT RaOU", "TTC YE", "GGA fdLx", "TAG YE", "TAC RaOU", "CAC dRP", "ATG dRP", "GGT CiJv", "CTA c", "AAG fdLx", "CAT dRP", "GTC MfT", "CAA MfT", "TTG c", "CTG yKyWv", "GTA yucx", "TTA RaOU", "GCT yKyWv", "AGA dRP"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 113087319;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> DNASequence = {"TGAATCTGTCTACTTGCTTCGGTTTTCATTCCTCCAGGGCACCTAGCCTG", "TCGAACGCTCAGTTAGTGTTAGGTCGCTAGTTCCGCTTTAGTGTAACGGA", "CAGATAAGTAGAGACTCAAGAGTACTAGCGGTGTGCTGCAGACTATACTA", "AGATGCCGATTGCTCAGGGAATACCAGCCTTTCTAAGCGAACGCGCCGAA", "GATACGACCTGGAACAAATGATAAGACAGCATTTTGTGAGCGTCGGCGGG", "TACGAAGCATTAAAGGACTAAGATAGCCGACCATAAGGCGCAATAGCAAG", "CATCTTAGGGGACAGCATCTCTTCATACGAAAATCTACCACCATCGGCCA", "GGGCAGACCGCCGTAAAACTATGCAAAACTACCGTCGTTACACATCATTT", "ATAGGCGACCTCTGCAAAGGAAGCCCGCGCGAGAGGCGGTACGTAATAAC", "GATTTGGCAGTAGCATACCGGCATGAGTCGGAACGTATGCCCCATCGGTA", "TCTGGCGTGATGCTAAACTGTAAGATAGCTAAGTGTGTCGGGTACTACGT", "ACTAAGTATATTACAGAACCGAACACGATGGTACTCAACGAACACTGCTC", "TCCTTTGCTCACGCGCTGTGTTGAGCTTTAGCCCGGGGACACGATTCACG", "GATGACATGTTGGGAGTGTTATGGTCCACGGCGCAGTACTTGCTTCCAAG", "TACTAAGCACAGTGCTTGTGCATTTAGGAGTGAACAAACACTGGCACAAG", "GCATATTGTGGATGAGGAGAACTAAAATAACGTCCTAACTGATCGGATGG", "GAACACCAGCCACGTTCTTTACGTTTCTCCTACTCCGGCTATGCCCATGT", "CGAACTTGCGAGGCCCTCAGGATTTGGTTTAGCAGGGCTACTGAGACCCC", "ACTTGATGTACTGGGTTTGATATCCCCTTGATATCGTGTAGATTGCACGG", "CCAGTCAAGTGGAGCCTGACGGCTCAGCCGCTACCGTCGCGTCGCTCGTC", "ACCCGTCGATTCATTCCATACCTTCGCTGGGGAACAGTGGCCACGTGCTC", "CGGATAGGTTTCTTTGTCCCATTAATTGGAAAGGACGAACTTGACCGGTC", "CTGGTGCATAAGCGTCCTCCGAATACGAACCCGACCATCTGCCACACTTG", "GCGGAGAGGCCATACGTCTGGCCCCTCTAGCGAAGAAGAGACAGCCTGTA", "GCCATTTGCTTTCGGAGGAGTAATGTGTCCTAGAACTTCGAGTTTCTTAT", "CTGTCTAAACTGTCGTTCCGCCGGGCATGAACTGGGTGATATCTGACCTT", "CGGATGCTCCTCTACCAGAACATGGCGATCTGACGTACACTTGAGACGGC", "GACCGATGAAATACAGGAAATTTCTCCGAAAGATAATTGGGGCGACTATG", "AACTCAATGATAATTATAGCGTCCCCTGCATCAAACAAGGACGAACCTTA", "ACTCTGTCTACCCTCCGCCGATAATACGGGGGCCAGATAGTTAAACCGTG", "TTCGTGGAGTGTCAACAAAAGTTGTTAATTGACAGGGGGTCGCGGCAGCA", "ACGTACCCCGGAGAAGAATGTGTGTTAGCTGCGTAGACACAATGATTATA", "ACATATACCTGCGTGGCGATCATGATCTGAGGCGCCCTTGACAGGGGCGG", "GAACGAGATTACCCAGGTCCCCGCATAGGGGTGG"};
    vector<string> codonTable = {"ACA hBz", "GAT URhT", "ATG w", "TCG w", "TAT w", "TCC hBz", "CAC LZXEK", "CCT URhT", "TTG w", "GTT URhT", "GCC LZXEK", "TAG LZXEK", "GCG w", "TGT k", "TTT hBz", "CTG O", "AGG FLH", "GTG k", "GTA w", "TTA w"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 479450510;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> DNASequence = {"AGGCCATAAATCCGCTAAATAAACTTTCCATCGCGCCCCCCATGGGCGGC", "TACTCGAACCAGGAATCCGTTCTCACACCATGAACCGCCAGTGTTGAGAG", "CGAAAACACTAACAATTGAGAGCGCGGCTGAATCATCCGGAGGCAGATTA", "CTGGTATCCCACCGTCCATAGTATAACATGAGTGTAGCCATCCGAAATAT", "TGCTCCTTCACCAGATGGGAGCTAATAAAAGGGACACATTAAGAGGGGTT", "GCACCAATCATAGTACTCCCGCCTTACCGGGGAGACAAGCCTCAACCTTT", "GCAAGTCAGAGTGGTAATAAGCTATTCGAGTAATAGACGGTTCCCGCCCT", "CAGGACCCCTAGTACTGCATATACGCCCGTGAGTAGACCCGCACTCACTA", "ATTAGCTATCGCCTACCAGTCTACATTAGAAGTTACGTTTGCGAGGTAGC", "GAGGCGCGGAGGACCAGCTCGCTTCCTGCCAATAGGGAGGCTTCAACGCG", "AAATTCGACATCCACAGCCTATCTGCTAAGGAGGTTACTCCAGTAAGACA", "TCTGACATCATAACGTGGGTCCTAGGATGTTCGACGCCTTTATTCCCCCA", "GTCCTCATGGATCATTGAGCTCCCAGTCAGCGCGAGACTGATCCTAGTAG", "GTACGAATCACGGGTGTTAACCGGTCGTGGCGCCACTAGGAATGGATTTG", "TAACGTGTATCCCTGCGCCTACGGATGGATTGTTACAGGCTATGTCCTTT", "AGAGTATCGTGCCCGTTACCCGCGGACATGTTTTTAGATTTCAAGGTCGG", "GAGAATACTTAACGGGGTGCACGACTAGGGGTATGAAGCTTCTGACTAGC", "CATAAATAGTATAAAGAAGCTCTCAGTTGTGATCCTCGGCCGGTGACGAA", "AGCTACCTGAATCTATCCCATGGTCTTTCTGCCAGCTCACCAATGAAACT", "AACGTTCAATTGGAATCTGCGCTGGCGACCTCCGAGCCGCGCCTCCAGGA", "ATCTTAGCAATTCGCCTTTCACGCGATAGCAAGCTCCTGTTCAACTCGAA", "CACACCAGCAACAATTCGAACGTTGGAATAAGCTGTGATAATCATGTATG", "AATTTCCTCATTGGAGTGGAGGTAGCGCCCACCTAGGCCCCAGCGGACTG", "CCTACCCATTCGGGCGTCCATTACGGAGCTTTGATACGAACCGCAAAGCC", "GGAGAGTAGGTCTCTACGACGCGTTGGGTAACAAAAAGCGTGAACTCTTC", "ACTGACTGACGATGCGACTCAAAACCGTACGATCGTTCCTTCGCAAAACT", "CCTTCGGACGCAGATTTAAAGTCTGCTGTGCGAACCGCTCAGCAGGTTAT", "TGCGCAAGATTCTTCGGCACTCCGCAGGTGTATGGGGATGTACATTACGA", "GCCACTAATGGAGCGGATGTTCTGTACTCCTATAAGTCGAATAGGGTGTC", "CAGGGCGAGCCCCACTGAGGAGCCTCACATTTTCCCTCTCTGGGGACGAA", "TCGGTTATGCCCGGGACCCGGGTTGTTACGCGAATTTGACACGGCTGTGC", "CTAGAGCGATTCCTCAAAGACGTATGTCCTTTAGCCTGATCTGGACGACT", "ATCTGGCCATGGAATTCACCGTGTCGGAGATGGGTTTGGGTGTTGAAAAC", "CGAATCGCTTTACCAGGTGTCCCGGAGAAACCGCCCGAGCTCCATCGCAT", "GCGCCGCAGTAAGATCCCCATACGAGCGACTATCCGATAGAAAAATCTGT", "TCTAATGCTATAACCCATGACACCACGCGTGTGTTAACCTCATCCATCTT", "TGTGCTAAGAGTTTAATCCAGGATACTGTACAGGGACACAAATTTGTCAG", "CGTCCGTGTAGGCGTAGGAAGAACTGAAAAACATTCCACGAATCGATGGT", "GTGAACGATGCTACATTTTGCTAAAGATTAATTGTTCCGGAACACCTGGA", "GCTGCTTCACCCGAACTCTCATCCTTGATTACGTAACTTCGGTTGGGTAC", "GCGCTCGCCCACTGATACCTTACCGCATGAATCGGACGCTACAGCACCCT", "GGGAATCAAACAGTATTCCAGTCGCTGTGACTAAGATACTCTGAAGTGAA", "GGTAGGGTCTGTCGTAGAAAGCTTCGCATCACATCGCATTGCCAAGAGAA", "AGTTCGCTGGGGAGCTGTTCCCTTCTCCCCTCAAACGCGGCTTCTAGCTT", "TGGACCTGTGAACCACTATTGGACCTCAGATCGTCCGGA"};
    vector<string> codonTable = {"TTG BaImr", "CGG BaImr", "GGC BaImr", "CCT BaImr", "TTA BaImr", "GAT BaImr", "CAC BaImr", "CTG BaImr", "AGA BaImr", "GTC BaImr", "TTT BaImr", "TGA BaImr", "CTT BaImr", "GTA BaImr", "AGG BaImr", "CTC BaImr", "GAA BaImr", "AAG BaImr", "TCA BaImr", "TGC BaImr", "CAG BaImr", "TAG BaImr", "ATA BaImr", "GCC BaImr", "TCT BaImr", "AGC BaImr", "GAG BaImr", "CGT BaImr", "GGT BaImr"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 586;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> DNASequence = {"A"};
    vector<string> codonTable = {"TCG a"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> DNASequence = {"CTGACAGGGACCCTCTTGTATAGCAGCAGTTGTGCATTTGTTGCCACTCA", "TAGCCTTCCGATGGAGAGAAGCGCGGGCCACTAGAAGATAATGTCGGGCC", "CTTGAGCGCGCCAAGCCCCAGGCATTTGTAGGCAGGTTTCCTCTCCCGCA", "GGGGCAATGTGTACATTCGGTAGAACATAACGCTGGAATTACATTCGCCG", "CATTACTAGTAAACCGTCCTTTGTAAGGAAGCCGCCAGGAGTGCGTTAAT", "GGATAGGGTCCGAACGGTCTCAACTAAGTCCACCTTGCGCAGCCAACGCC", "ACAACTGCCACAGCTTTATCCCGCCTCAGCAGTGGCATGTCTCCAAACCA", "CGGGCAAGCCTGCGATATCAGGCCGCGGAGTCGTGCCGGAGGATCGTCGC", "CGTAACGACTGTTCTATACCTACCCTAGGGAATACGGGTCTAATCGAGTA", "TCAGGGTGGCTAGATAATAGGCGTATTGACGGCTCGCTCATAGGTACCTC", "AAGAGGTTTTCAGAATATGCACGGCTCAGTTACACACTCGAACACATATA", "AGTCAAGCGCCTCCAGCACACCTCCCTAATCGAGGACCATTTTTTATGTG", "GTCTTCCGGGCTGGTCCGCGACACGACACCTTGGTCAGATACACTAGGCA", "ATCTAACGCCGCCGTAAGTTACACTCTAACCACTTCCACGCCTTCAACAT", "GATATGGGTTATCTGTGTCAAGTCTAGAGCTTTGGTAATACTCAGGCGTC", "CACACAGGCTAAATGTCTTTACTCATTATCCTCCAGAACGGAGGCTGAAT", "ATTGCGCCAATTCGATGGTCTCCAATAGTCGAAAGGCCACGATCCAACGG", "AAAGGTTTGCCTCGGGGGCCAAAGCGTGTAAACCCAAAGGGTCATATCGC", "CAGCGAGTTCGTATTTCCAACCGCGGCGCGACTCTCCCGATACTTTGTAA", "GGCGAGATTCTTGGCACAACCACGTTAAGATCGTCTCTACACGGCCGAAC", "TATACCGAAGGTCAAGCGCACTGCACCGTTGAGGTTCAAGGCAAGCAAGC", "AATATGTGGATACTGTGGTGGAGCGGGACCTGGTGGAAGTAAGATTGTAC", "GCATAGCCGCAAATGTTACGGGGGACGTTTCTTAGGCACGCACCGTGCCG", "CACGCAGATCTCCACTAGAACCACAGAGAACAGTTTCCTCCCAGTCAGCG", "CATCCCAAGTAGGGGTGAGTTAGAGTAGACGTCCCTGGTGCAATAAGTAT", "ATTGAGTGCGGATATAAGTCTGTATATGGAATGAGCAGCCTGCAATATAT", "GTCATTACACGCTCCGATGCAGCCCTCCGAAGCGCCGGACGTCTTTCTGG", "GGGTGATGCATGGGAAGCGTTCGCCGGGGCTATGCTCTGGCAGAAACAGT", "GTCAGAACAGAATATAACTCTCCAAATTGCTAGGCTAGTAATTCTGACAT", "AGACCCACTAGCGTTCCCACGAGGGTGCTCAAAATACTGTAGGTTCAGTT", "AAACGCGAATATAAGATAACGGCGCTGCCTAAGGTGCGTCCTGACTACCA", "ATCGATTCGATGAGCCCAGTCAGCTTCCAAATTGGTTGACCCCCGGGATT", "CGTCGCCCGGTAATGGGCTTCTCGTTAGATCGGGTAGACCATCTGTCGAC", "ACCTTAGTAGTGGCGTTACATAGGGCCTTTACCCCGGCCTTGTCACCAAC", "TGTCAACACTGCGGAGTGACAGCACACGCTGAAGACGGTCGTAGTCTCGA", "TTTAGTATGTATACCCTACGAGCAGCGATCTCCATCCCCGTCCAATCCAC", "AGATCAAATCATATAATCTTTCATCGATAATCTATAGACATGCGAACGAA", "AAGCAGGCCATAATTGCACATACCAATGTGCGAAGACGGGTTCTTATTCT", "CCACCCTGCTAGGATCAACGCTGTGATATGAGTCCGTCTGTGGTTACATT", "CGGCCCTTCGTCGCCGGAATAACTGACTCATTCTCCCCGTCGATTTCGTG", "AGGTCGAGTGATCGACGCTGGGTCCAGCGTTCCGAACGAACTGCAGATGT", "CAATTTTACGCATCCTATACCAAATTAGTGACTCGGATCTGTCCTCTCAT", "TTAGTTTCCGGGACTGTTTGTCGTGCTGTCCAAGGTGGCGACCGTGTGAG", "ATCTCTCGTTGCTTGTATGAGTACTGTTATTATTATGTATTCTGCAGGCC", "CCGTGCGTTGGCGTAGTGTGGAGTTACGGTAGGCCTCCACAGCCCAGTGC", "GCAGCGAACGCTACGTTTCGGTATCTGATGGGATATACAAGATAGTTCTG", "GGAGGCCGACCAGTCCCATCTGATCAGAATTACGGCTATTACCCGGCGTC", "GGTCTTGCATGTCTCGTCCACCTGGCTCTTTTATGAGCGCAATGGAGTCG", "TCACGGGGATCTAAGCTCGCGTCACACCCTGTGATGCATTCTCTGCATTT", "TGCGCTACAGCATAATACGTGGTTATGTGGCGCCTAGATGCTGAAGATCG"};
    vector<string> codonTable = {"AAA soemu", "CAA np", "GAA psuacbaz", "TAA xmh", "ACA cthlegrpu", "CCA kdmbppwe", "GCA tgjoparmo", "TCA z", "AGA qyoxyt", "CGA bbhawdyd", "GGA prjbxph", "TGA ohp", "ATA wqy", "CTA hrq", "GTA hnbn", "TTA uvqnqqlr", "AAC jpxiog", "CAC liexdz", "GAC zosrk", "TAC usvojb", "ACC zmwzpo", "CCC kjilefraa", "GCC d", "TCC gpn", "AGC uu", "CGC gxpqnj", "GGC jmwax", "TGC mnsnhhlqqr", "ATC udltfzotcj", "CTC nzxuglsd", "GTC m", "TTC cnockvfa", "AAG frmx", "CAG t", "GAG owkbjzwucw", "TAG jfrimp", "ACG yhchz", "CCG iwkbar", "GCG bgfcbc", "TCG yhjugixwt", "AGG vt", "CGG ehbbcpxi", "GGG bxvf", "TGG cg", "ATG cfqckcotz", "CTG k", "GTG bmjrmbszt", "TTG shfro", "AAT fwsjr", "CAT jhguzy"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 46517442;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> DNASequence = {"ATGCGCATTAACCTCCTACCATGGAAGGGACGTAACCCGGCAATTTGATC", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "ATGCGCATTAACCTCCTACCATGGAAGGGACGTAACCCGGCAATTTGATC", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "ATGCGCATTAACCTCCTACCATGGAAGGGACGTAACCCGGCAATTTGATC", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "ATGCGCATTAACCTCCTACCATGGAAGGGACGTAACCCGGCAATTTGATC", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "ATGCGCATTAACCTCCTACCATGGAAGGGACGTAACCCGGCAATTTGATC", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "ATGCGCATTAACCTCCTACCATGGAAGGGACGTAACCCGGCAATTTGATC", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "ATGCGCATTAACCTCCTACCATGGAAGGGACGTAACCCGGCAATTTGATC", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "ATGCGCATTAACCTCCTACCATGGAAGGGACGTAACCCGGCAATTTGATC", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "CTGATGACGGCATAAGCTACCCCTAGAGGTAAAAATGCATACTGCGTGCT", "ATGCAG"};
    vector<string> codonTable = {"AAC RpjZt", "AAT ZeiC", "GCA ChZwh", "TCC RpjZt", "GAA I", "TAG ZeiC", "CTG dVK", "GAG ZeiC", "GTG I", "AAG q", "ATT dVK", "AGA cJEjM", "GGG KONUd", "GTC ZRV", "GGC ZeiC", "TTA KONUd", "GAC q", "CCA q", "GCC ZRV", "GCG RpjZt", "CCT ZRV", "ATG dVK", "ATC ChZwh", "CTC cJEjM", "CCC q", "ATA dWjz", "TTG DkEG", "CAG q", "CAA ZRV", "ACT dVK", "TCG dVK", "ACC I", "CGC dVK"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 480822130;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> DNASequence = {"AGGGAACGCGGTTAATTAATTCGCTCATTCATTTCTTGCACTTATATTAT", "GTAAATCATACTACGCACAGCCCCCCCAACTGATGATAAGAGCATAGTCG", "CTTTAAACAAGTGGGAGCAGTCACCTCTTGCACATCATGATATCGGGATG", "TTTTACTCAGTGGCGGGTCCTCCTGACAAATTTGTTTGAAAAGGCAATTG", "ATTGGCGTGGTCGTTCGTTTTTTCCACGTCAAATGGAACGGATATTCGGA", "CCTAGCATTTATTAGCGGCTCAAAATTGCCGGGGGATGAGGACCCTTTCA", "TGATTCGGTAACGGTCTGTTACTCTAAGAGGTATGTAAGTAGATAAATGT", "GTCGAAGCGGTACTTTTTACGATTTTTTTCTCAATCAGGGACGGAGCTCC", "AAGTTCTGCGTATAATCACTGCAATAGCAAGAAAATGTCTCATAATTCTA", "ACGACCCAGCACCACCTTAAGCACGCACGTGTAATGCAGACGCTGGACGC", "CAGCGAGGGCGAAGATACAGCCAGAGCCTTGATAGCCAATCGTCATCCAC", "TGGAATGCAGAGGAGACTCCGGTCAAACCCGATAATTTCTCCCTCAATTC", "AGTATTAAACCGCATGTGCAGGGTCTTCGTGTCGTACTAGACACCTTCGA", "CAGTTATTCCGAATGTTTGACGCGATCTATACTGCTGAGACAAGTGCGCA", "GTGACGTGGTGGACACATCGTTGTCCCGAGGGCCGGTCCCATTCAAGCTA", "TGTGCATGGTACGGGAACGCTGAGTCGGGCGCTCTACTGTGTAACGCCAT", "TTCTCCAATGCCACGTCTGAGCTTCACGCCCAATAGAAGTTTATAGGGCC", "GTGCGTCAGGCTTGGTAGTGCGCCCGTAAACGATTGGAGAGAACGGAGCA", "AGGCAATTATACCAAAGGACTTCTATCCCGCCCTGCTGATCAATAATTTA", "AGTCCTAGACCCGGCATAGTAAAATACGTAGTGCATCACCCGTTAAATAG", "TAGTCCTGATGGGAATTCTAGCTCATCATGTGGCCTTACTTTCGTCCGGA", "TCCGGGCAGAGCGATTAGACCTCGCAAGTGTGTAAGGCGCGAGAACAATA", "GATTTCTTTGCGACTATCGCGACCACGAGGAAGATCCGAACGTCTGGGTA", "TGAATACCCTTCTGCGTGCATGGGTCACTTCGCCGAGTGTTCAGTGCTAG", "TTACCTGCCCCGTGACTGACCTGCGGTTCACATCCCATGCATATGAACGA", "GTAAAGGACTAGTTTAATTTCTGCGACGCTTTGTAGCGGGGGACGTGGGC", "CTCAATACGGACCGACCCATTGGTTAGCGATAAAAATAGCGGGACGCGTC", "CGTTCTTTAGATGATGATGGACCTCGCGACACTTCCGAATGAGAAGGCCC", "TCGAATGGCGTCAGCCTTCAGAACACTTGAACCGGGCAAGTTATCCACAC", "CTCCAGGTCATCGATAGAAGGTCGGTTGAAACTCGTTCGACCCTCATAAA", "GTTACGTCATCAAAGGTCTCGCGTATAATAAGTTGCCCGGATGATAGGGG", "TATCTTATTAATGTTAAACGGCCCCACTGTCCTAGTATGTTGTCGGCGGG", "CCTGGATTTCTCTGCCCCAACTGAAAGCTATACGGTGCTGTGTGAATGGA", "GTTATACCCACCATTGGGACATTTCATAGCAAAAATACACCGGCCGATAA", "CATATAAGAGACGACTACAAGGGCTTTTTTTATGAGGCATTAAGCCCCG", "CATACTTAGGTGGGATATACGTCGCGTGTCACCTCTGATCTTTCCTAGGA", "TAAAGCTCAGGATATATGCGTACGCTCGCAGAAGATATAAGTACTTGGCT", "AATGGACAGGACGATGTTGATATTCGTTAAGACCGTGTTACTCTACGTAA", "TAAGTCAGCATTCACTTTTTTAGCAGGGGGGCGGAGTAAACTAGTCCTAA", "GTCAACTGTCCCGTTGCGTGTACTGCATAAAGTCGAGCGCGTGCTCTATG", "GGGACACCACCATCCCCTTTACTGGGTGGGACCTCGTGATTCTGGATTTG", "TTAGCGAAAGTCTAAAGTGGTCAGTGTTGGCCGCTTATAACTCCTCCCCA", "AACAGCGCAAACCGTACTTCTCACGTGTCTTCTCCGGTTGATTCCGGTCC", "ACGCGAAAACATGTATCGTCATAAAGGGCAACCGGTTTTTATGTTTGACC", "CGAGGCAATCATGCGCACAAAATGTGCGTTTACAGTCGTATAAGCGTGTT", "GTTCCTATCTGATTAGGCACGACGGTACCTATGTATGAGTTAATTACCGC", "TACAGTTGAACATTAAGGACGACGTCGAGACCATGGGCATGCTCATCTGG", "AAGCGCGACCCGGCCAAAGATAGGCGGTCACCATTGACGCGTTCCCCCCT", "CATTGCGAATACCAAAGACCCAAACCCGGGGAGCTCGCCGCGTGGTGCTT", "GATGCAAGTGCCGTGGACTGTAATGGGATGACGTATAAGTGTACGGTTTG"};
    vector<string> codonTable = {"AAC RpjZt", "AAT ZeiC", "GCA ChZwh", "TCC RpjZt", "GAA I", "TAG ZeiC", "CTG dVK", "GAG ZeiC", "GTG I", "AAG q", "ATT dVK", "AGA cJEjM", "GGG KONUd", "GTC ZRV", "GGC ZeiC", "TTA KONUd", "GAC q", "CCA q", "GCC ZRV", "GCG RpjZt", "CCT ZRV", "ATG dVK", "ATC ChZwh", "CTC cJEjM", "CCC q", "ATA dWjz", "TTG DkEG", "CAG q", "CAA ZRV", "ACT dVK", "TCG dVK", "ACC I", "CGC dVK", "AGC RpjZt", "GAT q", "TAT ZRV"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 608683004;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> DNASequence = {"TGCTCTCGGGGTAAGGCCGGAGCCAAGGGCGTTGGACCTCATTACAAGGC", "GACTTGGATCAAAGCGACGGTGACGGTACTGTTTGATAAACAATGTAAGC", "TACCCACGCCACGGATAAAGTAACTGTTGCCTGGCTAAAAGCAAGTGGAG", "TACGCGCCGGTTCTCGTTTAAATCTGTCACTGGGAATCCTTTTTTTCCCG", "AAGAACGGGCAATGGGGTCGTGTATACCACGACTTTGGCAATAGCGCCGC", "GAGGCCTAATTCCTCACACAGAATCACCTCACTTTTGAGCGCAAATCCGT", "TGGGCCGGGAGTAGCACAGGGCTCGGCTACCTCTGTCGTTGCATTGCTAA", "TGAGGACCGACGGACGGGGAGTTGCGCAGGGAAGCAAGGACTGCGAGGCT", "ACGTTACGGAGGTACATTAGGGAACAACACCAGTTTGCTTTATCCTGTCG", "ACATCCTGGGTCAAGTATTCCCGTTTGATCAATATGGGTATCTCTATGAT", "CGATCCTTCAACAGTCATTCCTGAGGACCGTAATATATAACTTCAAGCTT", "CCTGTCTGTTTGCATCAAGTCCGGATGGGGAAGTAGCGGCCTATTCGCGC", "TGCTCAACGTTGAATTCGACCTAGTACGTAGATTGAACGCTCCGTTGTGT", "GATTGCAGGGGGGTCTTCGCTTTTATGTAAGATCGGTCTCTTGCCAGGTT", "GACACCGGGGAGTGTGATGTCCGTGTAAACGTAACTACGCTCCCCCCACA", "GCGCACGAAACGTCCCCTCCTGACTAATGCCGTAGTTGTACCTCCCTTGA", "CGAATGGTTGTGACATGTTCGCTCTAGATCCAAAAGGTCCAAAGTGGTAC", "AGATGTACACCTAACACTCCCATGTCTTACAACTCGGGTGCAAATATTAC", "AGAGCCTTTAGGGCTGGGTCGCAGCTTTTCGGGGTTTCTGGTCGCCAATA", "ATGACCCTTCCTAACGAGCCTAAATGCGGCAGTAAGCATATGCGTATGTT", "GCCTTCGTGCTCTGGGCGAGCAGACCGCCGGGCATGCCTATGTCCGGTAC", "ACTTCGGTCTAATTATCATACTATGCAACCCTACTTGCAACTCAACAAGG", "TTACCACCATTAGCCTCTTAAGATGAGGATTGAGTCACTTCGACTCTCAG", "TCGGTGTGAAGATACTAGGCATACTACGACTTATGCGCTGGTTAAAGTGC", "ATTATGATAGGACCGGTACGTCAGTGTACTTTCGAACCCATGCCTCGATT", "ATAACTCCTCAATTTAAACGCTTAGGGTAACAATAAATACTGATAGATCC", "GTTAGGGGACTTGTTTACCTCAGACGTCACTACGCCGAGGCGAAGGTACT", "AATGAAGAACTCTAAAACGCCAAAGCCAGTGCGCGGTAGCAGCAGGGTAC", "TGTAAACCCCTGATCCGTCAAGGGCCTGAGGATGAATGGTGAGAACACGC", "GTTTTTCTCCCTCCGGGAGTACGATACAAGCTCCGGGGGCAGTAACGATC", "TAACCGAACTCCGACTATCAGTGAACTGAAAAGACGTACCAAATGGCCAT", "GTTCTTGTGGTGTAGGTAATCGGTGTTTTACCCAGCTGCTACCCGTGCAA", "ATAATCTAAGGAGTGGTGGAACTGACAAATAGCCCTCTTTCCGTGCAAGA", "TCCCTGATCTCCGATGCTAGAATCGCTCGACCACGACAAACTTGCTACGT", "CTGATTAGGGCCAGGGTAGTTGAAAAGTGAATACGTTCCGGGATATCCTC", "CTCTGTCACATGTATGTTTTTCCGTTATGGCTAATCAGGTGGGGGCCGCA", "CCCTCCAATTTTTGATGCTATCCCCTGGCGACCTACTGACCACGGCTCTT", "CTACCAATCACTCAGATTTAACGAAATCTAGCTCAATCCATTATCGATTC", "AAAATTAGCAGTTTTTGTGACAACCGACAGCCGGAAAATATCGTCCAGTC", "CGGCAGATCGGCCCATACGGAGCCAGTGCGGCCCACTAGCGTATCCACAT", "GTAGTGAATAATTGATGTTTCGATCACCGATGATCAAGCTACGCTGAAGC", "AATTCAGATAATTGACCCCAGCCTGATACACGCCTATATCCGGAAGTGGA", "CACTCTCGTATTTATCTAGTCGGTGTGGACGGAACCTGTTAACGGGTGCG", "GCCAGCAAGTCTAATAGAGCAAGGCTTGGCCTGATCGAAGCTGTAGTACC", "ACAGGATGCCGGTGCAGACTCCTTGTTCTGCGGGCCGGGCCACTGCTTTA", "TGTCGGCTCCTCGGAAGGATAAGACTATGGCATAAGATACCACCTTTCTG", "TGCAATCGAACTCCCGCTCATGACGGCTTAGTGAATGTAATACGGCGTCG", "CTATATTGATACGTCTTTCGTACCTTGGAAATTTTGAGTGCCCCGCCTAG", "TCTACTCACATGGGGACCCTAAGCCGATGGAAACCCATAGCTGACCCATT", "TTACCCGACGCCGCCCCACCAAGAACGGATAAATAGTAGCGGGGCACGTT"};
    vector<string> codonTable = {"AAA AGA", "AAC Challenge", "AAT wleite", "AAG AGA", "ACA KONUd", "ACC TC", "ACT cJEjM", "ACG KONUd", "ATA cJEjM", "ATC TC", "ATT GGG", "ATG KONUd", "AGA AGA", "AGC wleite", "AGT b", "AGG Challenge", "CAA KONUd", "CAC KONUd", "CAT GGG", "CAG TC", "CCA KONUd", "CCC b", "CCT a", "CCG TC", "CTA GGG", "CTC TC", "CTT wleite", "CTG Challenge", "CGA TC", "CGC b", "CGT b", "CGG AGA", "TAA KONUd", "TAC KONUd", "TAT KONUd", "TAG cJEjM", "TCA AGA", "TCC KONUd", "TCT cJEjM", "TCG GGG", "TTA wleite"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 48130280;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> DNASequence = {"GAACTGGAGTGGAGCCCGCCTGTTCGAGTCCCGCCCCGTCAGCTCAAAGA", "TGTATCGGCGGGGCTTCAACGGGTGGTCCCCGCTGAGTTTTGTGTAACTC", "CCGTTCGGCCTCGTAGATCACATGGAGATCGAGAGCTAACACGACTGGTA", "CCGTCTGTATTCCTCGGTGCCGAAAAAAGTGTAGAAATCCCTCCAAGCCA", "GGTTGGTTATCACCACGCTAAACCACATATCGCGGTGCCGTCAATACCAC", "AGTTGAAATTAGCCGCCGACCATCGGACGAAGATGTGCAACTCCTTTACA", "TGGTTTGTAAAGGCACTAGTTCGCTGTCTATGTGAGCAGTCAACACTTAC", "AACCCAGCGGCTTAAACGTATTGACTCCGGAATCACGAGTCTCATCGACG", "ATATACTCACACTATAAAATGTGGGGATACGACTAGTCAACTCTATACTG", "TGCGCGGGTCAGCACAAAATGGGGGACAATACTAGCTCGGAGGTGTATTG", "CCCAAATTGTGGGAAAAGAAGACTCCACCATGGGGAAGCTCTTGCGATTG", "CCGCATCATCGGGTAAGAGTGATCCTCGAACTGATCAGGTCTCGTTCGCA", "TAGGCTATCTTATGAGGACCCGCTTGGCCGAATCCAAGAAAGCTGTTAAC", "TTCCAGGATCTTTGCATGTCACCCACACAGAAGAGCGTGTGCAGTTCCCC", "CACCAGGAGAAACTACTCCTTACGGGTATTAAAAGCAAGTTTTCAACGCC", "GCCCGAGGTGCAGACTACACTTTAACATCATTGGCGCAGGATTGGCACGT", "CCATTTTGGCATAGCACAGATAAGTGTATAGAGACGGGACCACGGGGGAT", "TTTCCGTATACAGTCGTCCTTCTGTGCTTCCCCACAGAGCAACCAGACAC", "CCACGGGTGATGCCGATCCTGAGTAGTATCATGACGCGACTCAAACCAAG", "TCGCAAGGTATTTTCGCTCATGAGTCAATTGAAGCTTCATGAGAAACTCG", "GCTGTATAAGGCGGTTTGTTGCAATAAGTATGAAATGCGCTCTATTCTCA", "ACCGAGGCTAAATTACCAAAGGTGATCACGTCACGGAAACTCGTAGACTT", "GGGAACCAAGCCAAATTTCAGACGGGTCGCAGTCTACTAACTATTCGCGG", "GCCACCTGAATGAGACACTATACCCCCTATCCCAAAGTAAAGCGTCTGCA", "GGTTGAATACGCGCGCCACTGACTATTCACTGGGTCCTCATGCACGATAG", "TAGCATTCCTGCTGAATAAAAGATCACGGCCAGGTTGATGAAACTTCCAT", "TTATGGTAAAAGCAGCATGACCTCCCTTTAGGAACGGTTGCAATCATCTG", "GGTCGCTGGCTGCCTGCGGTACGCCCCCTGCATTGAGGCCTTTCTAACTG", "ACCCTTAGCACTCTGTAGAAATATATCTAGAAACCTCGCCATAAATGCGT", "CGTAAGGGCGATCTCTATGCGGGAGGCACTGAGTAGCTGCATACCCCGTG", "TCGATCCGAGCTCTCATTGCAATAACAGTCTACAAGGAGGAGAAGTTGTA", "AAACATGGCAATTGAAATACGAGGCTCCTCAATGCGTCGTTACACCGTGC", "GGGATGAGCTATGAGTCGCACTGCATCGGAGTATGTAAGCTACCATTTCT", "GGGCCCAATTGAGCGCATGACAACGGATCCAGTAGACAGAGAGCATCGTT", "GCAGAATTCGCTTTGTGATCATGGCATGCAGCAGTCGGAATATCGCACGG", "GAGGACACCACCCGTTCTGCATGTGCAGGTAACGGAATCGTTCAAAATCT", "CTTCGGCTAAACGAGCCATGTATCCCACTCTGCCCTCGATAGCGCGGGAG", "ATGGATCAGTGTATCTCTACTCCCCTCCTCTGGGCGCGGTCTTACAGACT", "TCCTTCCTAGTATCCTGTGAGGATCATGGACTTCACCCAATTGCACACCC", "TGTAATATCACGACGTACCCCTATTAGCGGGGCCCGGGAGATATCCCTTA", "CGGGTTAACCAGTGACTCGCCGTATGCGTATTGCTATGAATGTGAATATC", "ACGATTGCTTTCCAACGACGGACCGCTTTATCGACAAAAGATGGTTGCAT", "TGGTCAGTGCCAATGGATAGTTTAGAATTCATCGCGCTTACGAACCGCCC", "TGGTTCGTCTCAATATATGATGTTCTACGTTCCGGTACCTTGGGGAACGA", "TTGTGTGCCATCACCTAGCGACCCTGGCCTCCACGCCCAATAGATTTCCT", "CGGCATGTGGTAAAGCTCAACTCTACTTAAACGAGCTGAGCGATCCTTAC", "ATGAGCTGCGAGAAGATTCTGCTGAGGGCAGGTGATAGGCTCTATCCCAG", "TTCGAGCCGTCCATTAGAGACGTGACTGGCACAGGGTATGCCGAGGATGT", "GTTCCGATGGCGCCCTTGTCCTGATCCCCTTTATTAAAAAGGTGAATTGG", "CAAATACCTCCACGTGTACCGAAGTAAAATCACGAAGTATGAGTATACAG"};
    vector<string> codonTable = {"GGT YEAQX", "TTG RMXTV", "TGT QUETQ", "GTT SRAEN", "ACA RBHLQ", "GTC RMXTV", "CGC OYOZH", "CCT PJFSQ", "AGA PRRJF", "CAG QBVZZ", "TTT NAYHQ", "ATG UPDWM", "GAA RCCLH", "TAT LFIKP", "CAC RJEAQ", "TGA CKKGQ", "TCT SOVTR", "TTC NHGEW", "TAA VTOMB", "TCC FMWWX", "TCA SSMUW", "GCC BQHCU", "TAC OUQYM", "CTC RMXTV", "AAT KDHJP", "CCC QUETQ", "GAG RMXTV", "TTA KAYWX", "CGT IAYHZ", "ACG OYGNO", "CAA MWAXG", "GGC CMKGS", "GCA YDXMZ", "ACC KZYBO", "ATA RMXTV", "GCG RMXTV", "GCT COKUW", "AGC TADJB", "AAG ONIRZ", "CAT RMXTV", "CTA XFQPJ", "AGT TVIVD", "TCG LVHYF", "GAT VFQRT", "CTG QUETQ", "TGG BZHWA", "TAG SCTCF", "ATC RMXTV", "AAC FGZLR", "GTA ODPDE"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 901804363;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> DNASequence = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    vector<string> codonTable = {"AAA cys"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 833;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> DNASequence = {"TGCCTTTCGCTACCATGAGAGGCAACACAGCACTCAAAAGTTTAAGAATC", "GCACACCGTAATAAGATTATAGATTCCTGAGAGTCCTGTTCTACGTCACC", "CGCTAGAATTGTTCATTTACTTGCTATGTGGCTGCTATAGCGGCTCTCCT", "CTTCCGTGGCAAGGAGTTGATGATATTGGCTCGTATCGCCGATCACCTAT", "CGGCTTTTGAGGGGGGGCCGATCCTGTCGGATCCAACATTACGAGTATGA", "TTACGGAGTGCTTCTCACACTCACCGGACGCTATATAATTAAGGGAGGAT", "GCAAACGGTATGATTACGTACCCCCGAGTTTATTTGCGGAATCGTCAGTT", "GAACGAAAACATGTAGCGCGGTATGTCATACTGGAGACCCATGTTGTATC", "TGGACAGGTTGCATGATACGAATCTCCAGTAGATACCACCGACAGGAAGA", "GTGCCGAATTGTATGCATAATTGGTAAGTAACATGATCCCGCGTACCGCA", "ATGGAATTCCACTAAATCCGTCGTAGCCTATTCGGAGACGGCACTTTAAG", "CTCGACGTCTCCGTAGTCGCAGAGAACGCCACCGGTGTGGCGGTTAACTG", "CGTGGCATAACACGGTATACCAAGCTTGCCTTATATACTTCCTCATGGCC", "CTATTAGAACCTCCAGAGTCGACGTCTAGGTCACTGATATTCAACTAAGG", "TATCGGAGGTAATTTCACTGAAGCACGCCAAGCGTGTGATAGCTGGTACG", "AGTTGGGCTGTATTCAGGGCCCCCTATAGCGAGGCGATTTCCTGGTGTGA", "TATTAGTAGCGGTGACGACCATCTCGCAACTAGGTAGGGCGCCGGTATAG", "TGCGCCCTTGGATACCTAGAGCTTCCTAGTTACCAAACCTTCACCAAAAT", "TTCACTCGTGACAGACTGCCCGAAGCCGTACCGTATGATCTTCCAACTCT", "CAGAAAAGTTTGCTCGGGTCAAGACGTAAAGCACCTCGTTCTGTTGACGC", "ATAGTGCGCTCGCCCGATGGCCAAAGTGGGTGTGTCACAGAATTGATTCA", "TACGATGTTAACACACGGGCACACAACCCAGGGAAAAACTTCCAGTACTG", "GGTTGACGCCGAGGACAGAATAGAATGGCTCCGTGCAAATAATACCGTCA", "GAATAAGGCAGCAGCTGTATCCTACAATCCCCTATCATGTACGGGGGTCG", "GCCGTTAGCGGGGTCGCGGGGTCACTCGTGACTCTGTGGACCACGGTGCA", "GACGTATTCTTATGTTTTGATGGTTGCAGTCCTTCAACACGGAGATAAAG", "TAGTAGGGCATTGACTCAGGGAAAGTGGCCTCTAGCTCGAATGCCTAGAA", "CATCCCGTTTCCTGTCCCTACAAACTTCCTCATAGCTTCGGATAGAGGAG", "TCCTAAACTGGAGACACTGTCCACGGTATGGTCCTGGTTTCGACTCAAGT", "CACCCTCGATACCGTCCATGGCCGGAAACAACTTACGCTACAGTATTCAT", "TCGGCGTACCCCGCGGGGCCCAATTACCGGGCTTCTGTTGACTTAATTGA", "CACTGCTGTATAGGTAATTATGTCGATCCCTTAAGGCAGTAATGATAGAA", "TTGGCCGGCGAGACTCCATCCCGAACTAGCCAGTAGTAGCGAGTCTTTGG", "GCGATAGGTGTTTGGCGTAGCCCCAAATGCCATTGTATTACTCCCAACTA", "TGCTATGATTACTGCCTCGGGGCTATCTCGGCGTGGTTCTATCACCTGGG", "TGAGTATTTATTCTTTGCCACAATTCCATAAGAAGTCCCTTGGTAATACT", "GCGGTAGAAGTGGACTCCGAAGAGGCGAACCTATCCACGTGGAGACAGAA", "GGCCTTAGCAGAATGCGGTAAGTCACAAATGCTAGGTGCCATAGAGACTG", "AACGGAACTTTAGCGTAGTGCAGGCAATAAAAACAGCACTCGACGAATAA", "GTCGTTCAACCCCATCCCTGCAGACGAAGGTCATGGCCTCAGTAGACCCC", "AATGGACCACAGCACCTGGGAAGCCATAGAGTACCGGTCTCGCTCAACGG", "GGCCGAAGGGATAGATAGTTAAGGAACGTCGAGGACTTGAGCGGCCCCTG", "GGTGCGACCACCGGACGTGTGTCTGCACTAACGATAGCTCTTGGTAATGC", "TCCGTGGGACGTCTGGCATCAAGGCACGATCAGAGACATTGCTTGTGAGT", "TGAATCAAGGGACTTACCGAACCGGCGTATAGATTCATCGTAGCGCTGGA", "GTAGTCCCTTTCTCTTAGCGTACCTCTCGGTTCACGATAGCTTGAACGGA", "TGGGTTAAGGTTATTGGAATCTTGAAGCTCGCACTCGCGATTCGAACTTA", "TCAATAAAATCGTTCTATATGATGTCAGCAGACACCTCCCAACTGGAAAC", "ATCCCGATGGAGAACTCAAGCCGTTACACGCAACTGATTGTAACCGACTC", "ACCCCTTAGGATTTTGCCCCTTGTGAAGTGAACTGACCAAATACAACGCA"};
    vector<string> codonTable = {"TCC vxrdqwihsjjzm", "ATG wxrefmznndnaz", "ATA wxrefmznndnaz", "GTG mosxpftgfmuiq", "TTA rohoovwgskjwk", "TGA bhvyepmeumcnp", "TAA ozhbnidagnndt", "AAT kifjyhnwaqsii", "CAC mruqfubcidzqb", "TAC riqmfelixjvrt", "GGA zaqhfureiptzn", "AGG ftnqxqadpnvmn", "GCG rpvrewwnxqwcv", "CTT gqsbtizsqwmge", "TAT qkldbzsqqxahp", "ATT dvicythjypjut", "CCT dnoijfzdtivam", "TCA ampqghcojaffz", "GCC kubvqqggmnxng", "AAC amclyytufuegd", "GTC soyqbeuvhitil", "GGT whkdscurvkpco", "ACT jmegumuiqbefx", "TTT clmktihdafdxi", "AGT yflirwgscosfx", "TGC qhlfoemdiughl", "TCG rsrzlzpqzhehx", "CGT fdeptvgcaaaqd", "ACC gvhbeqcvfoyyl", "GAA qbgtwzmivdwgy", "GTA mybntrhkvetwm", "AAA eixsjmyuosazw", "CGG lurdrbbepftxg", "GAT sxpcxpohxkdqr", "CGA ehwihrkkdkokq", "ACA yiccitsqmponu", "AGA iekacwislglhw", "TGG ndvjkzidayhqn", "TTG fbbgwnfscjywt", "CGC grwyqylraatda", "TCT fmxlvnpgajvyy", "CAT imjuekxsejllm", "TTC fjrikpdldhspq", "TGT ouorqwqlrljvr", "CTA odsaovlrgiive", "CAA jvfwzjogcfoep", "GTT ehpxykocaaevp", "GCA idyhdbkutfhil", "CCA uueztagkrlhcx", "GAC wuzlyvacdhebn"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 951492289;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> DNASequence = {"CAGGAGCAAATTCTTGTTCTCCGCCCTACTGAAGTCGGCACTATAGTGTA", "GATCCATCTATAATTGCGTTCAACCCTTCATCACCAAGGTGGCTAGCTCG", "TTCTCCCCATCAGTTTCATAGAATCAGATAGTCAGCACTAAATCCGACAT", "TCCAGGCAGGCTACGAGTATCGGTTTTGCACGTCCTGTGCCGGGTTGATA", "GCTCAAGTCTATCCTCTCGTTTGATTTCCAAAGCTATTTATCATACTATC", "CGGAATAACAGCCATATAGAGTCTCTCATTACTTATGTAGATGCTATTGT", "TGTTGTATGTTCTACGAACCCCATACATTAACATGATATAAGATTGCAAT", "GAACCTCCGCGACCCGATACACGACAGGCACTGCATTTCAATGTCTAGTA", "AAGTGTGCGGAGTGATTCTAAAGAACCAGCCGATCCCGTCTAGTCGAGGT", "TGCAACTGTTGCCCAACATCAATCTTACGTATCTCATCCGCCTAACTCTT", "TTGTAGACACGGTAAGATCATCGCAAAAGTCTGGACTCACATCGCGCCCT", "ATAGTACGTTCTCTACGTTTTACACTGCGACGTGGTGCATAATTGTATAA", "CACCTGAGTACTAGGAGTCATCTTCAAATCGACAGCGGCGACATCCGCAC", "TGTCATTGACCAAAGTGTCACACGCACACGTTATTTTACCATCGTAGCGA", "CAGTCCACAACGATACATCTGCGCAAGTGGCTCGGTCATGCTCCTGTTGC", "CTTGCTGGCCCGTAGGACCAAACGCATCGGCCGCTTCGGAATCCAAAAAA", "CGCGACGTCGAAAGTAAGTGGGAATTAGTAGCAAACGAGCCGCCAGCAAG", "CGTATCTTATGCGTTTAAGTTGTCCACACGTGCGAGTCATTGGCCTCTGT", "CGATGTACGTACTAGTTATATCCATGGATAATGCCTTATCACCGGGAACG", "TTATGAAGCTCGAATTGTCACTGAACAGTGGAACGTGGGTGTTCCCCGAG", "CTGAGGCATGAACCATGTGTCTCAACTGTCCATCGTGCCCCTCGTTCAAC", "CTAATTCCGATTTGTCCCTGGATGACAAGCTGGAATTTCTTGGGCAACAC", "AGGAACACTGTCCGACCACCGGAAAATCTACTGTACCCCACTACTCATGA", "CAGCTTCGGCACGACGCAGGACGCGAATTACCTCCGTTACACGGGTATTC", "GATCCGAGGAGATATTCTATCTTAGCCCCGTGTTAGTTGAGAAGTCGGAG", "TTGCGGAAACCTGGTTGAAAACTTCGTATTGCGACTCATCCATGTGGTCG", "TCGGTCCCAAGGCCTCTCCGACGCCGGACCGCGGAGACATGTTCTGCTTT", "ATTAGCACAAAATTGTTGGCTGAATTCAACGCATAGCTAGTCTTGTGAGC", "TACCTGACGTAAATATGTATAACTCAGGACCACCGCTTACTTGTCCAGGT", "CGCCCTTCTTCGAGAGGATCGTAACGATACTGGTTTTACACTCGTTGCCG", "AGGGCGAGGACTGAGTCATTGTCATTTACTAGGACGCCGGTGCATCCCAG", "GTTTCGAATACACAACCACCATGTGCGCTGATGCACTAAATAACGCTTAA", "CGTAACTGGTCCACCACTGGGCTTAAGATTCAATAGCGAGACGGCCGACG", "TCTCTCGGGGTCAGTGGAAAGCAGCGTTCGCGAATCTTCTAGACCGCCCG", "GCTACCCAGTTCATTACGACGTGAGTCTAGCCTGCGATTCCCGGTCGAGG", "CGCGTCCTGGGTGAGTTTCCAACCAAGATCGGGGGATCACGGACCAACCA", "TCCGCTAACTGGCGTGAAGTACATCCCACGACTACGTTGCTACTGGCCAA", "ATATAGGCGCCTGCCGACCAGACGCCGGGAGTGGGGTGTGAGTACACAGG", "TACATATTAGAGCATTAAAATATAAAATGATCGGGCAAGGCGGTGCTTGA", "GTATTGTCTCCTATGCCACAGCCGAACAGCGCTTTTCAGGGTCCTTTTGA", "GGTCACTACTACGCGCTAATTTGATCGGAGCGGAGCCCCATAGAGGACGG", "AGGTCATCCTTTGCGTGGCCAATAGCACTGCACGCACACAGTCTGGGAGG", "AATGATGCGGCAAAAGGACAAGGCCAAACCAACTGATGCTCGCAGCTTCC", "CTCGGCCTATCTAGCTCGATAAATTCAGAAACGCAGCAGAGATGAAAGCT", "TTCTAGTTGCGCCCGTAATCTTGGGGGTCCCTTGGCCTGTTACTAGTAGG", "ACCACGATCGCCCTCTCCTGTCAAGGTGAAGGCTATGTGAACAACTAAAT", "CTCACGTAAGCATCAAAACGTTGCGTCCGATAAGGACAGAAGTAGATTAT", "GGCTAGGGCTATATTGGGCTGTGGATTCCACTCTGAATCCGCCACCACTC", "CTTTAGGCGCGAGGTGGCAAGATGTCACAGTGCAGATGATGATTCTGTTA", "GGGTATTATAGACAAGCCGGGAAGGAACACTTCACCCTCTGCACCATCGG"};
    vector<string> codonTable = {"AAA LNylrvdrTQyKcSkvHiQo", "TAA uCzxrPfhFNeirxTdejjB", "GAA yajpItLAXPOpZhTgjPTv", "CAA XMvsQRtaXVKhFWjDVrsN", "ATA AxwPKOLviYMjBWzRzamv", "TTA WLWHfHMkCYEFaaihxkos", "GTA NskuPkWqnCPgUiCqtzbz", "CTA cfrAesIQjzafIKtvCUTS", "AGA gLoGILYKeZgkSGZAfJeE", "TGA HLNjhiITlrTmboUpWkGA", "GGA yVfkEIemBbcgqwchOowJ", "CGA oCSmPcJQvvJYWnQPCtlZ", "ACA FlNEfaBVKkLCcfoRspNg", "TCA GWQZIfmcllDfGKGdqpGu", "GCA qeHOQkZbvidpnLRcvNjQ", "CCA MZQcQsHnLhMMMCpMUMsC", "AAT CTBGLAiwwFBuEvMxzmgp", "TAT PSuwfMNRxPivAAQvBLRq", "GAT NDQTEwXqwAQwJFWaAUTI", "CAT GovVKFYtVLUeJkOfcooG", "ATT eKprZQqZdyHyvxPGSeDs", "TTT ocfnUSSBYsZVWoVjMwgG", "GTT FrAeYZuKnvCnIKINDCXt", "CTT lqghnfZAteeRUVDRiwzy", "AGT pIhrItmttRiBWUCrRlhR", "TGT VYBlfCsWQOwypNcbZtMD", "GGT qpbuHcmakPgzysoORwDC", "CGT PTfdynKQNaPiHQSvBQaE", "ACT pdIZexFBGVIhVcFHhcNt", "TCT jMfjHhWuWHwVPADTEmWq", "GCT nAmOVLlKkqfUbAjiCLBX", "CCT NZBCieaPhhEkvYKGgBtY", "AAG RvFmmUJSdQRrHxJbfxVf", "TAG oxPourwwwmnxgRXZvpTz", "GAG vbDJShIfNTAzRqHhMQEh", "CAG kPAaTmExyQGuEUrHdYOD", "ATG QOqMQcvoOLGkYugiUEGt", "TTG kXKbkHEuJqKaFpsWyfZQ", "GTG bwyWZxrrqaXyUoLVgoEo", "CTG dDJhromkGvLqALzbyzle", "AGG ywMkyWRVfTRNxwjXiGUi", "TGG JUeiEEKyfjVtrFRxfEfm", "GGG asstVLkZqlKmiHmLvfXb", "CGG IDpsBfZQuMORgfNnapob", "ACG QwAlxSaGVxqfuGDbxRiT", "TCG HBSqhUPjzyqoTDFeOecy", "GCG ngCSBIbcBHSDjTrgJkcK", "CCG wLHdkryjCkewsFBkPpbS", "AAC zGWDgmZnRNSQWyQBayzA", "TAC YSRjUddzqZejzASARSLp"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 628320722;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> DNASequence = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "CCCCCCCCCCCCTCCCCCCCCCCCCCCCCCCCCCCCCCGGCCCCCCCCCC", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAATAAAAAAAAAA", "CCCCCCCCCCACCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "GGGGGGGGTGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "AAAAAAAAAAAAAAAAAAAAAAGAAAAAAAAAAAAAAAAAAAAAAAAAAA", "CCCCCCCCGCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCTCCCCCCC", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "TTTTTTTTTTTTTTTTTATTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "TTTTTTTTTTAATTTATTTTTTTTTTTTTTTTTTTTTTTTTAAAATTTTT", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "TTTTTTTTTTTTTAAAATTTTTTTATTTTTTTTTTTTTTTTTTTTTTTTT", "AAAAAAAAAAAGAAAAAAAAAAAAAAAAAAAAAAATAAAAAAAAAAAAAA", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "TTTTTTTTCCTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTAAAATTTTT", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "TTTTTTTTTTTTGGTTTTTTTTTTTTTTTTTTTATTTTTTATTTTTTTTT", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "TTTTTTTTTGGTTTTTTTTTTTTTTTTTTTCCCCCTTTTTTTTTTTTTTT", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "CCCCCCCCCCCCCCCCCCACCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "TTTTTTTTTTTATTTTTTTTTTTTTTTTTTTTAGTCGTTTTTTTTTTTTT", "ACGTTCGATCGATCGTAGCTGGGCTTTCCAAAGTCGCGCGCTTTAAAGGC", "CCCGGGAAACCCAAATTTGGGCGCGCGTAGCTAGCTAGCTAGCTCATCGC", "AAAAAAAAAAAAAAAACCCCCCCCCCCCCCCCCCCCAAAAAAAAAAATTT", "TTTCACATTTTTTTGGTTTTTTGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "GCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGGCGCGGC", "GCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGGCGCGGC", "ATATATATATATATATATATATATATATATATATATATATATATATATAT", "GCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGCGGCGCGGC", "ATATGTATATATATATATATATATATATATATATATATATATATATGTAT"};
    vector<string> codonTable = {"AAC RpjZt", "AAT ZeiC", "GCA ChZwh", "TCC RpjZt", "GAA Iaaaaa", "TAG ZeiC", "CTG dVK", "GAG ZeiC", "GTG I", "AAG q", "ATT dVK", "AGA cJEjM", "GTC ZRV", "GGC ZeiC", "TTA KONUd", "GAC q", "CCA q", "GCC ZRV", "GCG cccccAccTc", "CCT ZRV", "ATG dVK", "ATC ChZwh", "CTC cJEjM", "CCG q", "ATA cccccccTc", "TTG DkEG", "CAG q", "CAA ZRV", "ACT dVK", "TCG dVK", "ACC I", "CGC dVK", "AAA aaaaaaaaaa", "CCC cccccccccc", "TTT aaaaaccccc", "GGG cccccaaaaa"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 460722018;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> DNASequence = {"AGTATAGCTTGAGAAGCGCCACATGGGAAATGGGTATCAGTTTACTGCAG", "TGACCTGGCTTTCACTGTTTCAGTGAGCAGACCGCCAAGACCCCACGGGA", "AGGGATTGTCCCTCGTTTCACTATTATATAACTTGTGAACCACTAAGCCA", "CTCAGTGATAACCCTGTCGCCGACAAATACCATCAAGTGATTATGCAACT", "CCAATGGCCGCCTTTCCAGAGACTCGTAGGTGGCTAACCAGCAAGCCGAG", "TTTGGTCCCGGTCCGGCTGCCCCAAGCATATGTGCAATACATTCGAGGCC", "GCCGCATCAGACCCATCGGAGTTCTAAATCAACATCAGCGCCGTCTGCCC", "CGTTGACGGTGGCGTTACCAGCATTCGACGACTTTACTTGGACGGGCTGC", "CTCCGGCCTCATTCGGAGCTCGCTTGATATTCGTCCACTTCCGTCCCAGC", "CGGTAAAGCACTAGAAAGACAACTTCTTAATCGATTACCAACTGGCTTGC", "TGCTATTTGTCATGGGCTGCTGCGCGGGCCGTGGAGACATTACGGACGCA", "GTTGATCTACGGGCCTGCTTTATGTATGTTTAAGTGATCAGGTCGTTTTG", "GATATAGGTAAGGGCATATTGAAAATTCGGGTTCCGAACCGCGTGGCATT", "CCCAAATCAAAGCCGTATCATGAAAGTCTGTGGGTGTGGTGTAGGTATGA", "CAGCGTGATATATCTAGGTCAAGGGCATTTTTCATGCATGAATCAGATCT", "TCCAGGAGCCATGCCAGCACGGAAGGTGAGACGACCGAGGCGAGGATCAC", "CGGATTTAACTGTATTAACGTCCCGGACGACATAGGCCTACGTTTGGTGA", "AAAACGTAGAGGGATTGTTACTGTAACTCGCATCGTGATCAAGTACGTTA", "CGTGACGATGTGGAGCCCCTCATGCCGATCGTGACTAGTTCGAGTTAGTA", "ATGCAGCGTTGCACAATATGCTTACGCACTGCGCCTGTACGTCTTACAGT", "TGAGTATTGTGCTCCGGGATGTAGACGAACTTACACACGTGCTATTTAAC", "CGGACTCGCAATCGTCGCCCTGTGGGAATACTTGTTATCACATTTGTAAT", "CCCTAGAGTCTTTGAGCGACGCAATCTGACAATACCTAGAACCTGCAGGA", "GCATACTTGTTTCGTTGGCTTCTGTAGCGCACTGGCGATCCAGTTAGCTG", "TAGGTATACAAACCGGTCTGTGTAAAGTAAACGGGATAGTAGTAGATAAG", "GCCAAAGTCTTCTAGAAAATTGAGTGTGTCCATTACCTGTAATCGACTGA", "AATGTGCGCGACTCTCCGGGATTCTCATTTCCTTAGAATATCCACTACAT", "AGGCGCCTTGAGGCATGATAGGAGTACTCAGAGTACTCGGGTCCTCGAAA", "ATTGCAGCCGAGTTACGCCCAGTAAGATTGCCCTACCTCCAAACTGCAAT", "AGACTGGTAAAACATAATCAGAATACAAAGCGCCGGGCAGAGTAGGGTCG", "TGTCACCGCATCTTCAAAAGTGTGGATCCTATACTGTTCTCTTTAGCGTA", "TGGGCCTTCTGAATCCATGCGGTACCTCAGCCCGGTGAGGCTGAGGCGAG", "GTCACCCGTACTATATGTCCACTTCCACGGGCAGACAAGCGGTTACGTTG", "GCAAGAATATCTTAATAGCTGACACAAATCTATCGAAGCGACATCAGATG", "TCTTAGCATTAGCCAAAGTCTCCCTCAACTGTTAGCTGAGCATCACAAGC", "AATACGCAGCCCTTAAGTTTATCCGCCTAAGGGATGTTGATGAGCATGCA", "AACCCGCCCAAGTGTGCGCGGTTTCTCTACCGCTGCAGCATCTGGGTGTT", "TAGGCGATCGTCCTTATTTGCAGGTCCGGTAACGTTCCGCGATATGGGAA", "CCGGGCGGGTCGCCCGTCGATTAGCCCGGCTACCTGCCCGTCCTTCAGTG", "GGATCATCTACGGCGCGGCATTATGCGGAACTTAGTGATAGGTTGCTTGT", "CAGATCCAGAGGCATGCATTGAACCGCTAGGAGCGATGGATCGTAAAAAC", "CTCCTCGTGTCCCGTGTGTATGAACGAATGCTACTTCAGGCGACCCATGC", "CAGAAGTGGGCGCAGTCGTATTTCGGCTAGTCTAACGTGCAGGAGCTGGG", "TAAAATTAGCTACAACATTGTCCACGATTTAGTGTCCGCGATGACTACGC", "GATGGTTTGGGTCAAGCACCGATCAGTGGAACGCGCTATATACGAACAAC", "ATCCTAGGTCTCCACAATGCCCACGGCGTAGCCGTTTAAACCACACAGTG", "GGGTGCCGGTTCGTAAGCGTAGTAACAGGCCCGGGTGGACATTTGCCTCA", "GCTCACCGAAGAATGTGCATTAGGCTGTGGCCGTCTGTATCGCAAGTTAC", "GCATGCGCTCGTCTGTGCGGTGCGTACGCAAGAGATGTTATCCGTAAAAT", "TTATACCAACAGAGCGCACTGTTAAGGGGTAAGGTTATTGGCCTGCAGAA"};
    vector<string> codonTable = {"CCC nnnnnnnnnnnnnnnnnnnn", "CCT bbbbbbbbbbbbbbbbbbbb", "CCG mmmmmmmmmmmmmmmmmmmm", "CCA kkkkkkkkkkkkkkkkkkkk", "CTC iiiiiiiiiiiiiiiiiiii", "CTT kkkkkkkkkkkkkkkkkkkk", "CTG bbbbbbbbbbbbbbbbbbbb", "CTA mmmmmmmmmmmmmmmmmmmm", "CGC jjjjjjjjjjjjjjjjjjjj", "CGT bbbbbbbbbbbbbbbbbbbb", "CGG cccccccccccccccccccc", "CGA hhhhhhhhhhhhhhhhhhhh", "CAC ffffffffffffffffffff", "CAT eeeeeeeeeeeeeeeeeeee", "CAG iiiiiiiiiiiiiiiiiiii", "CAA bbbbbbbbbbbbbbbbbbbb", "TCC aaaaaaaaaaaaaaaaaaaa", "TCT gggggggggggggggggggg", "TCG hhhhhhhhhhhhhhhhhhhh", "TCA bbbbbbbbbbbbbbbbbbbb", "TTC llllllllllllllllllll", "TTT iiiiiiiiiiiiiiiiiiii", "TTG mmmmmmmmmmmmmmmmmmmm", "TTA jjjjjjjjjjjjjjjjjjjj", "TGC cccccccccccccccccccc", "TGT ffffffffffffffffffff", "TGG cccccccccccccccccccc", "TGA nnnnnnnnnnnnnnnnnnnn", "TAC hhhhhhhhhhhhhhhhhhhh", "TAT kkkkkkkkkkkkkkkkkkkk", "TAG oooooooooooooooooooo", "TAA mmmmmmmmmmmmmmmmmmmm", "GCC mmmmmmmmmmmmmmmmmmmm", "GCT dddddddddddddddddddd", "GCG oooooooooooooooooooo", "GCA mmmmmmmmmmmmmmmmmmmm", "GTC nnnnnnnnnnnnnnnnnnnn", "GTT bbbbbbbbbbbbbbbbbbbb", "GTG bbbbbbbbbbbbbbbbbbbb", "GTA hhhhhhhhhhhhhhhhhhhh", "GGC jjjjjjjjjjjjjjjjjjjj", "GGT dddddddddddddddddddd", "GGG gggggggggggggggggggg", "GGA oooooooooooooooooooo", "GAC oooooooooooooooooooo", "GAT hhhhhhhhhhhhhhhhhhhh", "GAG iiiiiiiiiiiiiiiiiiii", "GAA oooooooooooooooooooo", "ACC ffffffffffffffffffff", "ACT aaaaaaaaaaaaaaaaaaaa"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 974152322;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> DNASequence = {"CAGATTGAGGGCCACCTCTCTGAGAGAAGGCATGTCCATCTTACATCATT", "GCAGAGACTAGCACCCGACAGAGTTCAAAGTGTGACGAGCGAGTTAGGCC", "CATCAACCTGATTATTTTGCGGTTGTGTACGTTCTTATAGATCACGTCCG", "TGGATAAGAGATCGACTAAACAACGTATGAGATGGAGCCACTTCCCGAAG", "CGGGGGTTAATGAGGGAAGGTTAATAATACAACATAGCGCCGAGTGGTGA", "CCTTAGTACCTTCCCGCCGGGCGAAGTCTCGAATTTGACGCGGAACGTTG", "CGGGTGGTACCTATTTGTACAATTAAGGCATAGCTCGAGATTGACTAGAG", "TCGGCGAAAAATGCGACGAACCTTGGGGGTGTGTTTTCTTTACATGTTCT", "TTTAATGTACCACATCAGCTAAGTCCTGAAACCGTTGAACTACGTAGCGT", "TGGGACGTCCTCCATACTGGATCCTAAAAGAGACTAACTCACAAAGGTAA", "ACATGTCATGCCTTGAACCATCTTACGATGACCTCACGTCGTAGATTGTA", "ATAATCAGAGGGAACGTCTATTGACAGATATTAGTTATGGTCGGAGACGC", "AAAAATACGCCCGTCCCCCTACTTGGCTAGGGTCAGACCAAGGGCCTAAT", "CTTACGGTCTAGTGTGACGCCGCTAAAGTGGGGTAATCCACGAAATGAGT", "AATCCCACACGAGCGTTAATTTTGCCATGCTTAATCGCGTTAGGTGAGCA", "GTTCAGGGCCAACATTTCATCGACATAAGCTAACAGCCGAGACAAAGTGG", "CCCTCTTTAGGCCACTTGGATACCAAGCGTGAGTCCTTATACTGTAGAAG", "GCGTTTCTCAGATGGCAAGCCCTCAGGGAAGTTTTTGTTCCCTGTAGCTA", "GACCCTCTCTTCCAGAGCACCCCCTCACTTTCGTAGTTGGCCCGTGGATT", "AGGTTGAAGCAGACTTGCCTATGGACCGGTAAATCAAGGCAGATAACATT", "GTGATGCGTAGCGATTTGATTACTCTCACAAATCGTCTAGTCATGCAGTC", "CCATTCCACTTTGGACGCTTAGGCGGTCTTATCAGACCGTTGGGTACCGA", "GACCACCTAGCCTACCCCCACTGGACACAAGCAGTTAGTTTTCTCAGGGA", "AACTCCGGTAGTGGAATTGCCGTGGCGGATCACGTTGCCCTAGGCCCTGA", "ACGACTAGCCGTACTAATCGGGTCCCTTATTATCGAGGGCCCCGCTGTGT", "GGCTCCGTTTCAAGTGCTACATTTTGAGGCGATATCGCTATAAGCAAGTG", "AATGATCTTGAGACAATACGGCATACTGCAATCGCCGCCGAAGGGCGTGC", "GATGACAAGGCTCGTCACGACTTAGAGCCTAAATTCCTAGGCTCCTCCGA", "ACAATCATGTATGCTCAGTAACGGTAGAATGTGAATATTCTGAGTGTGGC", "TAATTGCGTCCCACGTGGCTGACATGCGCTTAGACGTCTCTGCTTGCGTT", "TAGAGGACTTCTTCGGCGGAATGTGCACCTCTCGTTAATTCTCTGGGAGC", "TTCCAAGTCTATGTGCAAACCAGTATTCTTCTGTAGAACGGAACAGGGAA", "AGACGGCGGATGAGACCGTTACCCTAGTTCCTATCTCGGCAGATGTGACC", "TCACGCAGACTCTTACGACGATTCTCCAGGACCTCGTTGAAAGATTTTCT", "CGGGCTCCATACCAGCGAGCCAGCTGTGGTCTTGCCCCAGGGGCCTAAAA", "TACATGTCCTGTGTTTCATCGGGCTCCATACACTACTCCTCTACTTGCTG", "AATTCCCCAAAGGTGTAGCCATCGGCACTACTAAATTTGTCCAACGAAAG", "CAGAGTTTGTAGCCGGGGTGTTTTCCGATTTAAGGGATCTAATAGCGACC", "TGTGTACCCTTATTCAAGCGCCCTCGACCTATATGCTACTCCACACCGCA", "GTTCAATCAAAACAAAAACCAACAGATGCCTGACGCTGAGCCGCATATTA", "TGCTTGTTGAATTAGGATTTCCATTAGTCCAGTGCCGCTAGGGCGTATAA", "TCCATGAGACAGGACTGAAGGACGAAGAGTGAGTGACTCTAGTAGGATGT", "TTGCATCCTTTAGGGTTGAGCCGTGCAAGGCGTGGTAACTACAAAAAATG", "AATGACATAATAACTGAAGAATACCAAATGAAGTTCTATCTCGCTTATGC", "GGTATCACGATGGTCTTTGTGCACCCTCGTGGATGTCACAGCCCTCAGGT", "GTGTATGAGTTTCGCCCAGATGTAAACGATACGCTAATTACAGAATGTTC", "TGCCCTCAGGCGAGCGAACCGCGGCGGTTAATTTGCCGTGTGGCAGTCCA", "GTGCGCATGAGATGCGGGCTGACTTCTCTACAACGTATAGACACGGGCCT", "CTGCTAGCACTCAGTTTATGAACAGAAAAGGTCGTTCCCAGCAACGGACA", "ACGACCTGCTAATATAAAAGAGGAATTACTGGGATTCCGCGAGTTTCAAT"};
    vector<string> codonTable = {"AAA asd", "AAC asb", "AAG vas", "AAT as", "ACA ta", "ACC asdfadsg", "ACG asdf", "ACT aosid", "AGA oaisudf", "AGC oaisfd", "AGG osdai", "AGT qw", "ATA paos", "ATC paosd", "ATG saoidf", "ATT aosidfasjoif", "CAA asda", "CAC asba", "CAG vasc", "CAT asc", "CCA tac", "CCC asdcfadsg", "CCG casdf", "CCT acosid", "CGA coaisudf", "CGC coaisfd", "CGG cosdai", "CGT qcwc", "CTA pcacoccs", "CTC cpcaccosd", "CTG scacocicdcf", "CTT aosidfasjicf", "GAA gagsda", "GAC agsgba", "GAG gvgagsc", "GAT gagsgc", "GCA gtgagcg", "GCC agsgdsg", "GCG cagsgdf", "GCT aqwecosid", "GGA coasdaisudf", "GGC cvasdxoaisfd", "GGG coasdsdai", "GGT qawewarcwc", "GTA apsxacacoccs", "GTC caspdcqwac", "GTG assdcacocicdcf", "GTT asdwraosidfasjicf", "TTT tttttt", "TTC tasdfasd"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 729019582;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> DNASequence = {"ACT", "TAC", "GAC", "TAG"};
    vector<string> codonTable = {"ACT pepepepeasdf", "CAG pepeasf", "TAG pepeasfwer"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> DNASequence = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAC"};
    vector<string> codonTable = {"AAA asd", "AAC sdf", "AAG ret", "AAT yrtyrtutyu", "ACA asd", "ACC sdf", "ACG ret", "ACT yrtyrtutyu", "AGA asd", "AGC sdf", "AGG ret", "AGT yrtyrtutyu", "ATA asd", "ATC sdf", "ATG ret", "ATT yrtyrtutyu"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 1666;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> DNASequence = {"CAAATGGCAGAAGCCTGCGGACCAGGATTCAGTTCGGCCTGACCCTTGCG", "AGGTTACTTGGAGCCAGGAAAACGTCCAGGAGGTTCGTCCTCTAGTGATG", "TTATCCTAAGCGCATCCTCATTATGGAGGTTACGCACAATCCCGCCACGA", "CTCGAATGCCCATTAAGTTCTAATCGCCCGAGCCCGACGTCCTCGATGTC", "GGAGCTTTTACAGTGCCTGATTTAAACGGCCCTAGGAATTCCATAATTTA", "GAGAACAGACATAAATCGCTGCGGAACCCAGTAGTTTCTTGGTATAGTGC", "AAAGGCGGTGATGGGAGACGGGTTGGTACACTGTAAATCGCGTAGGTCTG", "GTTCATCTACGCCCCTTGGATTTGGTATCCTTCATGCTAACCTTTGGGAC", "TAACGGTCTACCACGGTGCCACGTGGGTGGAATGCAAGTCTTGAACTACC", "CATGATCGTGTATTGAGCGGCAAGAGCTCGTTAAGTTGGTGCTAAGAAGT", "AGTCGGCACTTCATTGGTGGTAGAAGTGGTGGTCCAGTTCGCGATTGCCA", "GGGTACACCGGACTCAACGCGCGACTGCACAAGTGGTGGGGTCCACATAC", "TTTCACGGAGCTATTTTGAGGCCTAAGAGGATGTGAAACGCGTGATACCG", "GGTGTACGACCACTCTGGGCAGCATGTTGGAAGCTCAGCTGTATGGGATT", "GTATAGAATGCCAGTTCCGTCTTGGCATTCTAAATAGGTTTCAGCGGACA", "ACAGTTCTGGGATAAGCCTCTTTAACTGTCAAAACTTCACCAGTGAGGGG", "TTGCTTATGGCCAGTGGATATTCAGTGTGAAATTATTCCTTACCGGACGT", "TAGACGAATCAAGGCTTATAGCAGGTGTAACACGCCCTTGGGCCGAGCAC", "TGAGGGCCCTGATCACAGTCTCTTTACTTGCATAGCGGCTCATAACGGTT", "ATAACTAGGGGGGATGGGGGTTATGAATATTATGGCCGGCGCCCTCTTCG", "AATTAAAATACTGCGACGGCTCACTGTAACCATTATTGCCCACTCCCACA", "CTCACCTTGAAGGAGGGCTTAGGTGCCCCGTGCAGAACTGCCCTTTTGGT", "GCGTTAGAACGTCGTACGGGGAAACACACTAATCGCGCCAACTGAGTAGG", "TTAAGAGCATACTCGTCTAAAGAACTCTAACAGACAACGCTAATACTTGG", "GGGATATTGCGGGATCCGCATCGACGTAGAGATTACTTGCCATACCATAA", "GAAGGGTTTTTACTGGGGTGCCCAACGAGCGAGCCGTTGAAAGCGGCCTC", "TCCACAACCCAATGGAGCAGTCACTACGTGACTAGCTCCCGAAGAAGTTC", "GTAAAGGAAGTGATTGTAGTTACCGCTCCCAACGGTGGATAGTCAGTAAG", "GGTTTTTCCAATCTTAGAGCTTATGTAGTGTCTGCAGATATGGTGGTAGC", "ATAGGTATTTTACACGACTGCATTAATCTGATTCAGGCCGCGTGCAATCG", "TGGCTTCGAAATGCTGGTCGCAAGAACTACTCCACCGCGGGGCGGCCGCT", "TACCCTACCACATAATTGTGGTTCTTTCCGTCTGTCTGCGGTTAATGATA", "ATGCCTCGCGGATACAAATGCTACTATAGAGCAGGCGAAATACTACTTCC", "ATGAGCTGACACATTTCGAGTCTTCAAATGACAGGACTCAGCTTACCAAA", "GATTAGTCGACCTATGTCAATTCCCATAGTGATCAAGTGCGTGCAGGTAC", "ATTTTACGAGGCACCGCTCATCATCCCTCGCCAATTCGATAGCTGTTTTA", "GGGAACACAGTGCCCACCGTACGCTGTGCACATCGGTCAGTACTGCTGAT", "AAGCTCCCTTTAAGCAATTTTTCCGCTACGAGTAGGGCCGTCCCTTCCTA", "CTCAGCTCATTCCGATCGACATTCTCTCCGAACACCGAAGGGTGTGTGCT", "CGTGGGCCTGGAGTATATCCACTCGCGATATGATAACATCCGCTGGAAGC", "TGTAAATGGGCCATGACATTGAGTCGAATTGAACGCCTAGTCAGGGGGCA", "CAAAATCTTCAAATATCATCCACCCGTGCATGTGGTTCTATGGGGGTATT", "ATTAAGTCGCTGCTACCGGGGGGGTTCCGTCAGCGTCTTATCTAGTAGTC", "GCGCCCGCTCTCTTTTCAGCCGCTCTGGCAGATGTCTTTCACATAGCACA", "ACATGTGGCAATCGAGCCGCGGACTTATTGCCAACTCAGGTAAATACTAT", "GGTGGGGCAGATGCCCTTGAAGATTGGTTAACATGTGTTTACGATTGTTG", "CCCGACCCCCGGCAATTGCAATTGACCACCACTAAGTGTCAGCTTACGGT", "TGATGAGGATCATTGCGTGGCTTACGGATATGTTTCAAAGTAGATATTTA", "TAGGGCCTTGAGGGGGAGGAGGGATCCAGAGCTGGTCGGTAACTACTACC", "TTAGTGGTCAAGTTTGTCATACTTCTTCTTCACGGGTGGCGTTGTCCCGA"};
    vector<string> codonTable = {"AAC epyexmguoez", "CCA avfonhb", "ACC jmmljieqduaad", "CTC pmnwttzvjoftzrfxl", "AGC htrenwgttddpthjhg", "GCA rljubxaidqgbyptg", "CTA zmvnop", "ACG chuujgpetuefkoeb", "TCC xiobgmxho", "GCT xoud", "GAA aryxbgjmgfngrpuifk", "GCC fjwjbupwmtpwwdmk", "GGG bidglf", "GGT wqrnvvmmyry", "CGG yghqbansobhagatz", "TCG dcbuuxumfc", "TAA srbpqkndhgopxzvxv", "CCG wkxolvsvdqtmomnbee", "GAT pkskcdzvcpss", "TAT nmtxbwzk", "CCT tqldghak", "TCA kjkibbuqvgfzxz", "CAG f", "TAC zxhd", "TCT rjbjghga", "TGC nzvtpnxtasboo", "ACA idhhfzebpw", "AAA eqyptuwlgqjmipaxj", "TTT hploiobqjlegjle", "TGG ibzgjkae", "GAC rcjvsfrjlmowzdmpygq", "GTT xpbcfraocvfgugd", "GTG db", "TTA pcdtglndyygx", "GGA nxfdidok", "GTC zidomkarfjogzdm", "TGA mtdgn", "ATT wjpghlmkqusabqigiv", "GCG spgqqqapivousnblc", "AAT tfpcyevrklwmsdjxeygz", "TTG vxwiywz", "GAG sjtchrbkdncaue", "CAA nwjkzvjnmfsmyi", "AGG lcwxbjvmoitt", "ATA vpuydfhfdmjhelrczfxd", "CGT ti", "CAC lvcltluqhqbrtszoya", "ACT qwnqdacaxfp", "GGC cthxbunfydtqjxk", "TGT av"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 419755646;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> DNASequence = {"CAGGAGCAAATTCTTGTTCTCCGCCCTACTGAAGTCGGCACTATAGTGTA", "GATCCATCTATAATTGCGTTCAACCCTTCATCACCAAGGTGGCTAGCTCG", "TTCTCCCCATCAGTTTCATAGAATCAGATAGTCAGCACTAAATCCGACAT", "TCCAGGCAGGCTACGAGTATCGGTTTTGCACGTCCTGTGCCGGGTTGATA", "GCTCAAGTCTATCCTCTCGTTTGATTTCCAAAGCTATTTATCATACTATC", "CGGAATAACAGCCATATAGAGTCTCTCATTACTTATGTAGATGCTATTGT", "TGTTGTATGTTCTACGAACCCCATACATTAACATGATATAAGATTGCAAT", "GAACCTCCGCGACCCGATACACGACAGGCACTGCATTTCAATGTCTAGTA", "AAGTGTGCGGAGTGATTCTAAAGAACCAGCCGATCCCGTCTAGTCGAGGT", "TGCAACTGTTGCCCAACATCAATCTTACGTATCTCATCCGCCTAACTCTT", "TTGTAGACACGGTAAGATCATCGCAAAAGTCTGGACTCACATCGCGCCCT", "ATAGTACGTTCTCTACGTTTTACACTGCGACGTGGTGCATAATTGTATAA", "CACCTGAGTACTAGGAGTCATCTTCAAATCGACAGCGGCGACATCCGCAC", "TGTCATTGACCAAAGTGTCACACGCACACGTTATTTTACCATCGTAGCGA", "CAGTCCACAACGATACATCTGCGCAAGTGGCTCGGTCATGCTCCTGTTGC", "CTTGCTGGCCCGTAGGACCAAACGCATCGGCCGCTTCGGAATCCAAAAAA", "CGCGACGTCGAAAGTAAGTGGGAATTAGTAGCAAACGAGCCGCCAGCAAG", "CGTATCTTATGCGTTTAAGTTGTCCACACGTGCGAGTCATTGGCCTCTGT", "CGATGTACGTACTAGTTATATCCATGGATAATGCCTTATCACCGGGAACG", "TTATGAAGCTCGAATTGTCACTGAACAGTGGAACGTGGGTGTTCCCCGAG", "CTGAGGCATGAACCATGTGTCTCAACTGTCCATCGTGCCCCTCGTTCAAC", "CTAATTCCGATTTGTCCCTGGATGACAAGCTGGAATTTCTTGGGCAACAC", "AGGAACACTGTCCGACCACCGGAAAATCTACTGTACCCCACTACTCATGA", "CAGCTTCGGCACGACGCAGGACGCGAATTACCTCCGTTACACGGGTATTC", "GATCCGAGGAGATATTCTATCTTAGCCCCGTGTTAGTTGAGAAGTCGGAG", "TTGCGGAAACCTGGTTGAAAACTTCGTATTGCGACTCATCCATGTGGTCG", "TCGGTCCCAAGGCCTCTCCGACGCCGGACCGCGGAGACATGTTCTGCTTT", "ATTAGCACAAAATTGTTGGCTGAATTCAACGCATAGCTAGTCTTGTGAGC", "TACCTGACGTAAATATGTATAACTCAGGACCACCGCTTACTTGTCCAGGT", "CGCCCTTCTTCGAGAGGATCGTAACGATACTGGTTTTACACTCGTTGCCG", "AGGGCGAGGACTGAGTCATTGTCATTTACTAGGACGCCGGTGCATCCCAG", "GTTTCGAATACACAACCACCATGTGCGCTGATGCACTAAATAACGCTTAA", "CGTAACTGGTCCACCACTGGGCTTAAGATTCAATAGCGAGACGGCCGACG", "TCTCTCGGGGTCAGTGGAAAGCAGCGTTCGCGAATCTTCTAGACCGCCCG", "GCTACCCAGTTCATTACGACGTGAGTCTAGCCTGCGATTCCCGGTCGAGG", "CGCGTCCTGGGTGAGTTTCCAACCAAGATCGGGGGATCACGGACCAACCA", "TCCGCTAACTGGCGTGAAGTACATCCCACGACTACGTTGCTACTGGCCAA", "ATATAGGCGCCTGCCGACCAGACGCCGGGAGTGGGGTGTGAGTACACAGG", "TACATATTAGAGCATTAAAATATAAAATGATCGGGCAAGGCGGTGCTTGA", "GTATTGTCTCCTATGCCACAGCCGAACAGCGCTTTTCAGGGTCCTTTTGA", "GGTCACTACTACGCGCTAATTTGATCGGAGCGGAGCCCCATAGAGGACGG", "AGGTCATCCTTTGCGTGGCCAATAGCACTGCACGCACACAGTCTGGGAGG", "AATGATGCGGCAAAAGGACAAGGCCAAACCAACTGATGCTCGCAGCTTCC", "CTCGGCCTATCTAGCTCGATAAATTCAGAAACGCAGCAGAGATGAAAGCT", "TTCTAGTTGCGCCCGTAATCTTGGGGGTCCCTTGGCCTGTTACTAGTAGG", "ACCACGATCGCCCTCTCCTGTCAAGGTGAAGGCTATGTGAACAACTAAAT", "CTCACGTAAGCATCAAAACGTTGCGTCCGATAAGGACAGAAGTAGATTAT", "GGCTAGGGCTATATTGGGCTGTGGATTCCACTCTGAATCCGCCACCACTC", "CTTTAGGCGCGAGGTGGCAAGATGTCACAGTGCAGATGATGATTCTGTTA", "GGGTATTATAGACAAGCCGGGAAGGAACACTTCACCCTCTGCACCATCGG"};
    vector<string> codonTable = {"AAA a", "TAA a", "GAA a", "CAA a", "ATA AxwPKOLviYMjBWzRzamv", "TTA WLWHfHMkCYEFaaihxkos", "GTA NskuPkWqnCPgUiCqtzbz", "CTA cfrAesIQjzafIKtvCUTS", "AGA gLoGILYKeZgkSGZAfJeE", "TGA HLNjhiITlrTmboUpWkGA", "GGA yVfkEIemBbcgqwchOowJ", "CGA oCSmPcJQvvJYWnQPCtlZ", "ACA FlNEfaBVKkLCcfoRspNg", "TCA GWQZIfmcllDfGKGdqpGu", "GCA qeHOQkZbvidpnLRcvNjQ", "CCA MZQcQsHnLhMMMCpMUMsC", "AAT CTBGLAiwwFBuEvMxzmgp", "TAT PSuwfMNRxPivAAQvBLRq", "GAT NDQTEwXqwAQwJFWaAUTI", "CAT GovVKFYtVLUeJkOfcooG", "ATT eKprZQqZdyHyvxPGSeDs", "TTT ocfnUSSBYsZVWoVjMwgG", "GTT FrAeYZuKnvCnIKINDCXt", "CTT lqghnfZAteeRUVDRiwzy", "AGT pIhrItmttRiBWUCrRlhR", "TGT VYBlfCsWQOwypNcbZtMD", "GGT qpbuHcmakPgzysoORwDC", "CGT PTfdynKQNaPiHQSvBQaE", "ACT pdIZexFBGVIhVcFHhcNt", "TCT jMfjHhWuWHwVPADTEmWq", "GCT nAmOVLlKkqfUbAjiCLBX", "CCT NZBCieaPhhEkvYKGgBtY", "AAG RvFmmUJSdQRrHxJbfxVf", "TAG oxPourwwwmnxgRXZvpTz", "GAG vbDJShIfNTAzRqHhMQEh", "CAG kPAaTmExyQGuEUrHdYOD", "ATG QOqMQcvoOLGkYugiUEGt", "TTG kXKbkHEuJqKaFpsWyfZQ", "GTG bwyWZxrrqaXyUoLVgoEo", "CTG dDJhromkGvLqALzbyzle", "AGG ywMkyWRVfTRNxwjXiGUi", "TGG JUeiEEKyfjVtrFRxfEfm", "GGG asstVLkZqlKmiHmLvfXb", "CGG IDpsBfZQuMORgfNnapob", "ACG QwAlxSaGVxqfuGDbxRiT", "TCG HBSqhUPjzyqoTDFeOecy", "GCG ngCSBIbcBHSDjTrgJkcK", "CCG wLHdkryjCkewsFBkPpbS", "AAC zGWDgmZnRNSQWyQBayzA", "TAC YSRjUddzqZejzASARSLp"};
    DNADeletion* pObj = new DNADeletion();
    clock_t start = clock();
    int result = pObj->differentProteins(DNASequence, codonTable);
    clock_t end = clock();
    delete pObj;
    int expected = 123551083;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=13697&pm=10229
********************************************************************************
#include <algorithm>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
 
#define MOD 1000000007
#define FORALL(s,i) for (typeof(s.begin()) i=s.begin(); i != s.end(); ++i)
typedef vector<string> VS;
 
vector<string> Tokenize(string s, string ch) {
  vector<string> ret;
  for (int p = 0, p2; p < s.size(); p = p2+1) {
    p2 = s.find_first_of(ch, p);
    if (p2 == -1) p2 = s.size();
    if (p2-p > 0) ret.push_back(s.substr(p, p2-p));
  }
  return ret;
}
 
string s;
map<string, vector<string> > cm;
 
int memo[5000];
int doit(int x) {
  int& ret = memo[x];
  if (ret != -1) return ret;
  ret = 1;
  FORALL(cm, it) {
    const VS& poss = it->second;
    int mn = 5000;
    for (int i = 0; i < poss.size(); i++) {
      const string& c = poss[i];
      int cp = 0, j;
      for (j = x; j < s.size() && cp < 3; j++)
        if (s[j] == c[cp]) cp++;
      mn <?= j;
    }
    if (mn <= s.size()-1) ret = (ret + doit(mn)) % MOD;
  }
  return ret;
}
 
class DNADeletion {
public:
int differentProteins(vector <string> DNASequence, vector <string> ct) {
  int i, j, k, x, y, z;
  int ret;
 
  s = "";
  cm.clear();
  for (i = 0; i < DNASequence.size(); i++) s += DNASequence[i];
  s += "#";
  for (i = 0; i < ct.size(); i++) {
    VS v = Tokenize(ct[i], " ");
    cm[v[1]].push_back(v[0]);
  }
  memset(memo, -1, sizeof(memo));
  return doit(0) - 1;
}
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/