/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7509
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

class Mafia {
public:
    int play(vector<int> guilt, vector<string> responses, int playerIndex);
};

int Mafia::play(vector<int> guilt, vector<string> responses, int playerIndex) {
    int ret;
    return ret;
}


int test0() {
    vector<int> guilt = {500, 500, 500, 500};
    vector<string> responses = {"ADCb", "bADC", "CbAD", "DCbA"};
    int playerIndex = 1;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> guilt = {500, 500, 500, 500, 501};
    vector<string> responses = {"ADCbE", "bADCE", "CbADE", "DCbAE", "EDCbA"};
    int playerIndex = 1;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> guilt = {500, 500, 500, 500, 500, 500};
    vector<string> responses = {"cccccc", "BBBBBB", "dddddd", "FFFFFF", "GGGGGG", "hhhhhh"};
    int playerIndex = 0;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> guilt = {501, 499, 499, 499};
    vector<string> responses = {"ABCD", "zfAg", "ESAS", "atsm"};
    int playerIndex = 0;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> guilt = {800};
    vector<string> responses = {"E"};
    int playerIndex = 0;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
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
    vector<int> guilt = {643, 457, 642, 710, 595, 631, 566, 634};
    vector<string> responses = {"APOSIfjf", "ewFOJWeJ", "jElLLoSS", "GeOSSmff", "zWSTsOuu", "fmfOPPsa", "MSoPPWXn", "FeojwFAM"};
    int playerIndex = 5;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> guilt = {643, 457, 642, 710, 595, 631, 566, 635};
    vector<string> responses = {"APOSIfjf", "ewFOJWeJ", "jElLLoSS", "GeOSSmff", "zWSTsOuu", "fmfOPPsa", "MSoPPWXn", "FeojwFAM"};
    int playerIndex = 5;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> guilt = {547, 393, 781, 790, 416, 765, 705};
    vector<string> responses = {"eBwTTIm", "PYPwjcJ", "fEeJYNe", "KzaxVFU", "rjUckkx", "EOWvFjh", "AZvbtdd"};
    int playerIndex = 1;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> guilt = {554, 460, 715, 702, 761, 670};
    vector<string> responses = {"SarsvS", "NhIizk", "WVBxrB", "ZLYXVL", "EjgycP", "LmRslJ"};
    int playerIndex = 1;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> guilt = {356};
    vector<string> responses = {"l"};
    int playerIndex = 0;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
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
    vector<int> guilt = {751};
    vector<string> responses = {"Z"};
    int playerIndex = 0;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
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
    vector<int> guilt = {428, 790, 450};
    vector<string> responses = {"mRb", "vGn", "aeV"};
    int playerIndex = 2;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> guilt = {627, 529, 733, 356, 600, 330, 405};
    vector<string> responses = {"ZuUkYDJ", "krAoSLI", "yOFKbhV", "QllkKHB", "kHEkJIL", "vvAynMC", "LbBxiLD"};
    int playerIndex = 1;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> guilt = {750, 606, 637, 419, 329, 486, 488, 601, 446};
    vector<string> responses = {"ZfgGKNVet", "kpaKsOXWV", "YyWqHcVqc", "oCXvgBjTP", "vMqYxVAhT", "WBVDRINRF", "CYmluNwBu", "JhyLxLwWa", "lXgMajIyZ"};
    int playerIndex = 8;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> guilt = {683, 746, 534, 670, 499, 436, 605, 459, 756, 542, 357, 670, 324, 645};
    vector<string> responses = {"iXIfpiSVyjgbiE", "ouImHKfHiKHBhO", "ZZLIBWvNrAofeN", "gNkVsMdboieNCX", "JHHDCvXXTjyusA", "jeRMgPsXPoCfbV", "dhRdfNPgHWPNqC", "UjwwKZRaFClgTF", "pqQkIFfqVmvPWH", "xPBKIpEQUJUjxN", "XgxNZvAdGfuSoY", "xYmpNlhqCOoILQ", "xOXaxUYizVTlue", "vFmhaqVjhVsoPv"};
    int playerIndex = 9;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> guilt = {660};
    vector<string> responses = {"r"};
    int playerIndex = 0;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> guilt = {366, 314, 377, 494, 780, 734, 763, 571, 410, 795, 640, 318, 531, 638, 662};
    vector<string> responses = {"siweefbDkmhWknV", "VsomDfjvXfQjJDc", "wpEmPpIGuEwJpWz", "xEQFmTmIsblEmhL", "klJuTbYPkOhpwts", "DvqaSAlVPGoWQqi", "rXxrGmrffvLOdKi", "spLGkVMnVphOzZj", "jPMTXbylHFgIzYI", "DEWMEkvOaRWOecv", "bfZDCyMerxeonXK", "KztPyHtOYakHGqK", "kMWxDGTOwQUFSGU", "RDzVnpFfPfAnYJw", "hGOtXcMdEnkgeqB"};
    int playerIndex = 8;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> guilt = {329, 582, 521, 389, 358, 676, 561, 793, 348, 310, 566, 699, 301, 594, 515, 723};
    vector<string> responses = {"oeBdfwhLuNyBrnkd", "YOJBPgZqTJYzIRKh", "LWDfrkSWgfoycweU", "vqdfpHHurxgmCFCc", "QCXPKTBXhKBbyVOu", "BdYawCkvBuqoLtBE", "VPbYkFksBBNADbco", "zivzpIwWQyVYFLAH", "SNxQKqbkuZFlSIxF", "OrbuxZIPYJRisicb", "nORWuhtFPeyoiFEX", "WSaXPjJuYgekLyBN", "UnheqJNctkydBnSI", "DvyQVLbjqafFlhpq", "uUGAPmLSbyRQUeUp", "KSenbwyGywlnooOw"};
    int playerIndex = 9;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> guilt = {640, 446, 434, 446, 750, 760};
    vector<string> responses = {"ULnTvp", "tcjIbD", "YjAWKI", "aRSWcF", "uufCoO", "POxhCL"};
    int playerIndex = 0;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
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
    vector<int> guilt = {403, 779, 725, 301};
    vector<string> responses = {"lqXO", "CvTl", "MStm", "DKEL"};
    int playerIndex = 2;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
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
    vector<int> guilt = {503, 551, 323};
    vector<string> responses = {"GBO", "LRg", "Qsy"};
    int playerIndex = 0;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
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
    vector<int> guilt = {777, 440, 385, 364, 497, 475};
    vector<string> responses = {"fqSvLz", "ZdyWaq", "FaiJgk", "WIUUjz", "mpUszn", "EXzPln"};
    int playerIndex = 5;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
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
    vector<int> guilt = {671, 456, 724};
    vector<string> responses = {"teB", "FGZ", "abc"};
    int playerIndex = 0;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> guilt = {403, 320, 592, 369, 498, 443, 518};
    vector<string> responses = {"pXcVGEC", "XEApDeG", "wgWUihL", "zrAayUv", "uelDQSe", "WEKrofH", "hrmsqIg"};
    int playerIndex = 4;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> guilt = {515, 393, 529, 395, 425, 649, 590, 517, 753, 553, 334};
    vector<string> responses = {"mqRAdbHULUN", "yjTIpouwruN", "OTCzQjxzwGA", "EiNLcHshYbp", "lJrjsMDRSSu", "UbRXquWFHDx", "hYvJjKQpYDh", "RLAsoHgljYE", "KfsXVfdgXfZ", "wLIXpgdNuzO", "pEebffRiiEm"};
    int playerIndex = 10;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> guilt = {580, 778, 473, 774, 608, 434, 592, 739, 503, 371, 421, 406, 389};
    vector<string> responses = {"PZgLUnZyZLFVF", "RzxLGkNYUqQKu", "qaFZaTyTxQBeT", "UpdhoulbGzben", "wJXEQaOjDvhUj", "QmAZoLucyRRbT", "CRkNYjhbIqtRN", "qBNFfKaOpVxJg", "DatAsZaggcYRM", "afVFWGFprGiiR", "JjaRaGORLWGQb", "MRhVwjyHFCdOR", "MsXOKAlGtaebH"};
    int playerIndex = 4;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> guilt = {685, 357, 417, 570, 335};
    vector<string> responses = {"yrIme", "kwCxZ", "esttA", "WDVDo", "nxcPP"};
    int playerIndex = 4;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> guilt = {475};
    vector<string> responses = {"m"};
    int playerIndex = 0;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> guilt = {693, 683, 734, 572, 411, 793, 397, 577, 702, 376};
    vector<string> responses = {"QeBQlAEKkn", "RYxvSkIAMx", "EgmuUKlmpQ", "kUAoRfbtXL", "lrYcteVnKh", "rZhGtnURRk", "iKcWMxabDf", "RjfCEeeUDP", "SaSloHYDtn", "uYUNNOwhmu"};
    int playerIndex = 9;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> guilt = {432, 442, 401, 664, 388, 325, 423, 462, 729, 444, 523, 359};
    vector<string> responses = {"qQjPRJwZcdNl", "tLJiSPsYsLFz", "gbLuTPTNIFOR", "npWiAIiVhoNV", "DDcTklmJpuhZ", "BhHfPyazLeTS", "ROqvVSKEoqlt", "MUyEQwSwXUCd", "kRcQUXzACelB", "GnPQdqdjxybn", "ZDJHcIcESjfp", "IzfquYipHOYs"};
    int playerIndex = 1;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> guilt = {686, 605, 793};
    vector<string> responses = {"DQv", "LNj", "pSs"};
    int playerIndex = 0;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> guilt = {569, 570, 528, 480, 420};
    vector<string> responses = {"lNxwA", "Bepsl", "EzQon", "zsKkP", "tRjuS"};
    int playerIndex = 4;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> guilt = {319, 580, 676, 349, 633};
    vector<string> responses = {"MxyPc", "WYwDH", "bqKOD", "PQCgj", "jeWxZ"};
    int playerIndex = 2;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> guilt = {798, 793, 759, 630, 581, 694, 472, 568, 696, 470, 779, 313, 326, 597, 686, 332};
    vector<string> responses = {"NIWLRRCurjiAkypT", "miezcEvtIZbacBAr", "iZEYtcSgFNAuDmyA", "ffYGwlMfiswRgBrx", "VUVuTRErXEzncGYG", "vhkApWknabllOXwn", "iPDMefAZfqsDcFZH", "EFTucXrRQHWBkxwR", "gzOwYzbEXqbyalHd", "IjJBVHCaMJdmOHFV", "ZOjKNfElRdwlqNxG", "uJmCNGSHbWMMiynu", "pdrNMsyVnofZmpLh", "RmuvkDjeknFQyWyl", "jCmtQMKGkpKUZvXL", "MbubuwtTjbDBQWtF"};
    int playerIndex = 2;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> guilt = {478, 588, 669, 759, 345, 794, 516, 342, 654, 306, 332, 465, 554, 633, 387};
    vector<string> responses = {"puPwxDPDTxZbmNP", "IvRHZHFLHponuGj", "SlilWnFUTYiCZrF", "inrwBKoLVzqTOFp", "YdGZhCyFmOJPgPE", "nDLvXowZGLcPKwa", "AARTailcpUqyvbQ", "WxVKbiGfumrSZyl", "szfxJIdHRqgmheA", "yrxiISymwdVdKXS", "NhJTEnBVOrpKQCs", "QbnoDBIUOtdPpsn", "EwiTgqCMTstabXP", "HhxEUNPNNDpVvry", "CNLaNLWPsRDhIBR"};
    int playerIndex = 1;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> guilt = {740, 561, 575, 456};
    vector<string> responses = {"NcCP", "HBTO", "LrqH", "GSUd"};
    int playerIndex = 3;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> guilt = {399, 575, 775, 310, 460, 625, 705, 689};
    vector<string> responses = {"hgjuHsSO", "CTmdTTzF", "MfuMUERj", "SihrSetp", "acFDkWBb", "HEfJiFdB", "KnOzDigq", "OVRbCUcp"};
    int playerIndex = 6;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> guilt = {346, 342, 695, 557, 559, 605, 379, 759, 392, 594, 553, 674, 695};
    vector<string> responses = {"tAzOTjADWSzoc", "sfhKMgIiHpQfz", "pZpDsPxbDMGah", "rdpWfhKdOWFXa", "flWOVqHVXvGCZ", "ssmtyxfulygxQ", "EOGcoDQocbKHr", "yBoVTIvxAOEJF", "xcrSlIkdMtRCr", "YBGKvGpOfTzaC", "JYjPiuZYYnbTC", "rOKOasChMuMEp", "sPyCiXIqlzimf"};
    int playerIndex = 12;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> guilt = {624, 593, 349, 307, 749, 464, 735, 563, 311, 530, 705, 345, 513, 352, 724};
    vector<string> responses = {"fQxZqRmUtdrMveb", "AhdcbzMqQRTFrsE", "nhVYTdjwOGyJvgj", "lEFisazNnEJSUxa", "wdmjewNanrmOMGn", "oTDxzSDykRWSiFC", "yzXBVmvPUvyjCqR", "fAPwBgUFDCIwujJ", "khpktOtHGpcgicB", "ouJUHgLQkOtlZjP", "KuvnJqSujwJQrtD", "kgDNUqMLRcexTGX", "pwzACqPgRdFDYmI", "RSUjFBoUjyYUhxD", "pORHAKQtcqsrJGo"};
    int playerIndex = 3;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
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
    vector<int> guilt = {569, 554, 494, 526, 670, 552, 479, 515, 313, 545, 677, 303};
    vector<string> responses = {"vusviBhVLqpB", "EAgKUeqxhtSs", "yrXYFROybgPk", "LGUofpjIocRR", "apxWdNzsCpft", "ZoOzvpwqVFhf", "jmlDQKzBihAR", "LqkmbNdrdzwz", "GkVsZnYpWPFR", "yIeudjTKXyTL", "VqgUNeJXWzvN", "VpJlzJNbohAA"};
    int playerIndex = 0;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> guilt = {704, 537, 538, 692, 668, 537, 626};
    vector<string> responses = {"iGHkxBo", "DJxDemk", "sBzYCvo", "QiIOCWQ", "FhIVfYd", "LqjCwoA", "wfGwznA"};
    int playerIndex = 4;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> guilt = {487, 727};
    vector<string> responses = {"SP", "XR"};
    int playerIndex = 1;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> guilt = {377, 407, 498, 310, 677, 652, 608, 670, 498, 381, 611, 429, 625, 421, 600, 375};
    vector<string> responses = {"ErXwBQbwYrCLlkIZ", "iwFMNjkwQXNEdQFM", "FnXHESthgwCmecKD", "LJzaMemIiPXSvRzo", "cfsPRwRcurtKzpqy", "KrglEEjgwPZRmlCm", "uwpCNhEcnLjWYZSw", "KHYrCkouwvXpFhuR", "aQWxmGUZvxjZWnau", "VKVUznxSgHUVSiKH", "eNLtlRvEidNTzAPV", "FOmSHFYNnVvztjVs", "qioUYcujJNnGYuMZ", "gFlMjKBARhmzzWdl", "JdpsDUJiXKjtaxTq", "DHoJDDyjnDXLVOwv"};
    int playerIndex = 2;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> guilt = {525, 352, 734, 518, 775, 562, 483, 318, 511, 492, 316, 495, 458, 332, 615};
    vector<string> responses = {"vOTKXjfoASVTYMY", "dafDJeNUhFFxCMm", "ZqtFAeGyLzjhstg", "dHankeHLTdLbNQK", "gRnJozhyQOkXWzD", "VTfhIVcMvNCVctC", "CqurLZFllcCPQkz", "qKNqzeelCLzZzyK", "WFHfCHAnEHgDbAq", "LNDtcMLsuLIkuPv", "WBiFzdcuDvjjvNO", "EslhbLDMMSGifnz", "zsxZrCcKLSCmNir", "kUAxdNzByHeKLMS", "canczUTMBqkHBBA"};
    int playerIndex = 14;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> guilt = {486, 692, 456, 724, 408, 546, 565, 532, 337, 659, 307, 799, 763, 371, 493, 644};
    vector<string> responses = {"hTGRGMbhGnMiJLQa", "eZIijWnYeVzAFvcd", "zNUJBpUWQpholgAJ", "mzdCwJTDthLEAFBV", "cLhwAdEecxwdBTqv", "QtNldYlzDnqzmmUS", "nfCmZUgFFHYwozqK", "sXJHLIMbOfYGOEHD", "qrrcKoPbFInVVDHB", "ImblLGBRKONxKkvG", "hMQCUaUqqOPUypvU", "geUEoWTjORaAgLdI", "lVCJqFeCiFucSWmW", "jZahVLAmCkQExDlX", "zKShmVzrrUgGOrCI", "eVmvBeUFfNBcasNP"};
    int playerIndex = 4;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> guilt = {407, 327, 355, 469, 622, 313};
    vector<string> responses = {"JEMmJG", "nYaPBc", "xGbTit", "egIVlC", "RRWWVt", "MArNrV"};
    int playerIndex = 1;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> guilt = {586, 394, 427, 713, 419, 693, 707, 641};
    vector<string> responses = {"FLGrKOes", "QMUJtdNW", "GpcQBrdi", "xcTtYRUC", "Ephbcquo", "mLfifhbq", "oqrfzOjR", "IcXFyybx"};
    int playerIndex = 3;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> guilt = {300, 300, 300, 700, 700, 700};
    vector<string> responses = {"fgfaZZ", "fgfZZa", "fgfZaZ", "aaaZaa", "zzzZzz", "zzzZzz"};
    int playerIndex = 4;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> guilt = {300, 300, 300, 300, 300, 300};
    vector<string> responses = {"ZZaZzz", "ZZaZZZ", "ZZaaAA", "eeeeee", "ffffff", "gggggg"};
    int playerIndex = 3;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> guilt = {800, 800, 800, 800, 800, 800, 800, 800};
    vector<string> responses = {"zzzzzzzZ", "zzzzzzzZ", "aaaaaZZa", "aaaaaaZZ", "aaaaaZaZ", "zzzzzzzZ", "zzzzzzzZ", "aaaaaaZZ"};
    int playerIndex = 7;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> guilt = {800, 800, 800, 800, 800, 800, 800, 800};
    vector<string> responses = {"ZZaZzzzD", "aZZGzYzz", "ZaZZzzzz", "eeeeeeee", "eeeeeeee", "eeeeeeee", "eeeeeeee", "eeeeeeee"};
    int playerIndex = 3;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> guilt = {800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800};
    vector<string> responses = {"AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA"};
    int playerIndex = 7;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> guilt = {800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800};
    vector<string> responses = {"AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA"};
    int playerIndex = 6;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> guilt = {800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800};
    vector<string> responses = {"AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "zzzzzzzYAAAAAAAA", "zzzzzzYCAAAAAAAA", "zzzzzZACAAAAAAAA", "zzzzZAACAAAAAAAA", "zzzZAAACAAAAAAAA", "zzZAAAACAAAAAAAA", "zZAAAAACAAAAAAAA", "AAAAAAAAAAAAAAAA"};
    int playerIndex = 7;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> guilt = {643, 457, 642, 710, 595, 631, 566, 634};
    vector<string> responses = {"APOSIfjf", "ewFOJWeJ", "jElLLoSS", "GeOSSmff", "zWSTsOuu", "fmfOPPsa", "MSoPPWXn", "FeojwFAM"};
    int playerIndex = 5;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> guilt = {800};
    vector<string> responses = {"E"};
    int playerIndex = 0;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> guilt = {399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399, 399};
    vector<string> responses = {"AaBbCcDdEeFfGgHh", "ZzXxVvDdFfGgHhYy", "RrTtHhUuJjIiOoPp", "kKuUiIlLfFnNdDeE", "AaBbCcDdEeFfGgHh", "ZzXxVvDdFfGgHhYy", "RrTtHhUuJjIiOoPp", "kKuUiIlLfFnNdDeE", "AaBbCcDdEeFfGgHh", "ZzXxVvDdFfGgHhYy", "RrTtHhUuJjIiOoPp", "kKuUiIlLfFnNdDeE", "AaBbCcDdEeFfGgHh", "ZzXxVvDdFfGgHhYy", "RrTtHhUuJjIiOoPp", "kKuUiIlLfFnNdDeE"};
    int playerIndex = 1;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> guilt = {643, 457, 642, 710, 595, 631, 566, 634, 643, 457, 642, 710, 596, 631, 566, 632};
    vector<string> responses = {"APOSASKjklsawIoA", "APOSASKjklsawIoA", "AbsakluauiyqwAQu", "mdkslajkalwAKJsH", "ASsamdnjkaHKJAhQ", "fmfOPPsafmfOPPsa", "MSoPPWXnMSoPPWXn", "FeojwFAMFeojwFAM", "APOSIfjfAPOSIfjf", "ewFOJWeJewFOJWeJ", "jElLLoSSjElLLoSS", "GeOSSmffGeOSSmff", "zWSTsOuuzWSTsOuu", "fmfTPPsafmfOPPsa", "MSoQPWXnMSoPPWXn", "FeoSwFsaFeojwFAM"};
    int playerIndex = 5;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> guilt = {642, 710, 595, 631, 566, 634, 457, 642, 710, 595, 631, 467, 563, 666, 555, 456};
    vector<string> responses = {"aposLFJFaposLFJF", "EWfojwEjaposLFJF", "JeillOssaposLFJF", "ZwstsOUUaposLFJF", "fmfoppSAaposLFJF", "msOPPWXnaposLFJF", "fEOJwFamaposLFJF", "gEosswffaposLFJF", "ZwstsOUUaposLFJF", "fmfoppSAaposLFJF", "msOPPWXnaposLFJF", "fEOJwFamaposLFJF", "aposLFJFaposLFJF", "EWfojwEjaposLFJF", "JeillOssaposLFJF", "gEosswffaposLFJF"};
    int playerIndex = 4;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> guilt = {501, 499, 499, 499};
    vector<string> responses = {"ABCD", "zfAg", "ESAS", "atsm"};
    int playerIndex = 0;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> guilt = {300, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800, 800};
    vector<string> responses = {"zZZZZZZZZZZZZZZZ", "zZZZZZZZZZZZZZZZ", "zZZZZZZZZZZZZZZZ", "zZZZZZZZZZZZZZZZ", "zZZZZZZZZZZZZZZZ", "zZZZZZZZZZZZZZZZ", "zZZZZZZZZZZZZZZZ", "zZZZZZZZZZZZZZZZ", "zZZZZZZZZZZZZZZZ", "zZZZZZZZZZZZZZZZ", "zZZZZZZZZZZZZZZZ", "zZZZZZZZZZZZZZZZ", "zZZZZZZZZZZZZZZZ", "zZZZZZZZZZZZZZZZ", "zZZZZZZZZZZZZZZZ", "zZZZZZZZZZZZZZZZ"};
    int playerIndex = 0;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> guilt = {400, 300, 800, 341, 398, 678, 734, 398, 543, 333, 763, 333, 444, 555, 666, 543};
    vector<string> responses = {"ADCbLLLLLLLLLLLL", "bADCLLLLLLLLLLLL", "CbADLLLLLLLLLLLL", "DCbALLLLLLLLLLLL", "kacdLLLLLLLLLLLL", "AEDFLLLLLLLLLLLL", "DFDFLLLLLLLLLLLL", "QWERLLLLLLLLLLLL", "DFDDLLLLLLLLLLLL", "CVBNLLLLLLLLLLLL", "IOERLLLLLLLLLLLL", "POIULLLLLLLLLLLL", "FGJKLLLLLLLLLLLL", "LKASLLLLLLLLLLLL", "FDFDLLLLLLLLLLLL", "ASaaLLLLLLLLLLLL"};
    int playerIndex = 7;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> guilt = {300, 400, 500, 600, 700, 800, 301, 302, 303, 304, 302, 401, 304, 400, 312, 333};
    vector<string> responses = {"aNgUlDliDyemxpgD", "aNgUlDliDyemxpgD", "aguguDliDyemxpgD", "aNgUlDliDyqexpgD", "aguUlDliDyemxfgD", "aNgUlDliDlllxpgD", "aNgUlDliDyedxpgD", "LPLUlSliDyemxpgD", "aNgUlDliDyemxpgD", "aNgUlDliDyFmxpgD", "aNgUlDliDyemxpgD", "aNgUlDliDyemxpgD", "TTttlDliDyemxpgD", "aNgUlKlopyelxpgD", "alkRTggiDyemxpgD", "wNgUlDliDyemcpgD"};
    int playerIndex = 7;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> guilt = {500, 500, 500, 500};
    vector<string> responses = {"Aaaa", "aAAA", "aaaA", "AAaa"};
    int playerIndex = 1;
    Mafia* pObj = new Mafia();
    clock_t start = clock();
    int result = pObj->play(guilt, responses, playerIndex);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22672999&rd=10667&pm=7509
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
 
using namespace std;
 
typedef long long LL;
 
#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))
 
#define FOR(i,n) for(int i = 0; i < (n); ++i)
#define FORB(i,n) for(int i = (n) - 1; i >= 0; --i)
#define CNT(i,s,n) for(int i = (s); i < (n); ++i)
#define CNTB(i,s,n) for(int i = (n) - 1; i >= (s); --i)
 
#define SWAP(a,b) a^=b; b^=a; a^=b
 
#define REV(str) for(int i = 0; i < str.length() / 2; ++i) { char tmp = str[i]; str[i] = str[str.length() - i - 1]; str[str.length() - i - 1] = tmp; }
 
vector <string> R;
int Me;
int N;
int Este[20];
int G[20];
 
int SOL;
 
class Mafia {
public:
  int play(vector <int>, vector <string>, int);
};
 
int Remove(){
  int dead = -1;
  FOR(i, N) if (Este[i]){
    if (dead == -1 || G[dead] < G[i]){
      dead = i;
    }
  }
  Este[dead] = 0;
  return dead;
}
 
void GetBack(int pos){
  Este[pos] = 1;
}
 
void Kill(int pos){
  Este[pos] = 0;
  FOR(i, N){
    if ('a' <= R[pos][i]){
      G[i] -= R[pos][i] - 'a' + 1;
    }else{
      G[i] += R[pos][i] - 'A' + 1;
    }
  }
}
 
void Revive(int pos){
  Este[pos] = 1;
  FOR(i, N){
    if ('a' <= R[pos][i]){
      G[i] += R[pos][i] - 'a' + 1;
    }else{
      G[i] -= R[pos][i] - 'A' + 1;
    }
  }
}
 
void Back(int sol){
  int dead;
  if (SOL < sol){
    SOL = sol;
  }
  if (N){
    FOR(i, N) if (Este[i] && i != Me){
      Kill(i);
      if ((dead = Remove()) != Me){
        Back(sol + 1);
      }
      GetBack(dead);
      Revive(i);
    }
  }
}
 
int Mafia::play(vector <int> guilt, vector <string> responses, int playerIndex) {
  R = responses;
  SOL = 0;
  Me = playerIndex;
  N = guilt.size();
  FOR(i, N){
    G[i] = guilt[i];
    Este[i] = 1;
  }
  if (N%2){
    if (Remove() == Me){
      return 0;
    }
  }
  Back(1);
  return SOL;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/