/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10510
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

class TheEncryptionDivOne {
public:
    int count(string msg, string encMsg);
};

int TheEncryptionDivOne::count(string msg, string encMsg) {
    int ret;
    return ret;
}


int test0() {
    string msg = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWX";
    string encMsg = "cdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
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
    string msg = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWX";
    string encMsg = "bcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXY";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string msg = "topcoder";
    string encMsg = "TOPCODER";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
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
    string msg = "thisisaveryhardproblem";
    string encMsg = "nobodywillsolveittoday";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string msg = "a";
    string encMsg = "W";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 710479617;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string msg = "x";
    string encMsg = "u";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 710479617;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string msg = "oJHauGvJHuuUOmPKnnWYAUJFcGxGRgMuO";
    string encMsg = "WijjelWmKuaaymNKQHAQeajaaxumGhRmM";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
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
    string msg = "SKWanddoiaUKWYAomnsfUiFfmoYNWffWfWggnU";
    string encMsg = "iNSWauuAQWLNSOkATaUDLQyDTAOCSDDSDSMMaL";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 71471956;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string msg = "aMgqyMOaWSyaAxOyvOaRAEajOOAWWAqqAAj";
    string encMsg = "qKYEnKaqMgnqGWanlaqkGdquaaGMMGEEGGu";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 650838813;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string msg = "vSCCAGuSjOpGchWOCSsmOVzKyKsuaCGWgGgga";
    string encMsg = "nYOOlwgYKymwRAIyOYFUyaGvWvFgCOwIiwiiC";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 1191935296;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string msg = "ulOKgOKCGuG";
    string encMsg = "MUqoaqokJMJ";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 753317706;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string msg = "aTxCeGnrKaCasGi";
    string encMsg = "dSYOaKpsmdOdWKx";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 874075875;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string msg = "koJHauGvJHuuUvmPunnWmAUJFcG";
    string encMsg = "xGRgMuOWRguulWmKuaaymNlRHAO";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
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
    string msg = "ajaaxumGhRmGPxSOCxyAuxahxgumheO";
    string encMsg = "ITIICOtGmAtGKCSlqCcVOCImCFOtmul";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
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
    string msg = "CCiueCsHmjEuGxZqGmlqGiZCydieelGHnUsASOZyeHU";
    string encMsg = "GGTqOGAKCxwqYSkRYCbRYTkGsUTOObYKFjAaiEksOKj";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string msg = "ySiwPGaNwNpumen";
    string encMsg = "OGCKbWugKgceJMy";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 1213055109;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string msg = "LqqLuqkaIeISeqaemBgmQ";
    string encMsg = "SAASPAgeqcqmcAeciGXiO";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 811989389;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string msg = "ciceOSSPVCa";
    string encMsg = "aQabossycuW";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
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
    string msg = "RGZORnaamymQXXmOCROyuRXWEGWmRs";
    string encMsg = "iKYGiknneAeaqqeGwiGAmiqWtKWeiu";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
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
    string msg = "uISbEeKueMGbKGAtgiMEINXmGofaKGp";
    string encMsg = "PNyKMmQPmWaKQagAiwWMNteuaCqkQaS";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 304954993;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string msg = "SKWanKRoiOUKWKKimnsfUiFqmiUNFeeWqWNNmUiNSWauuKQWLU";
    string encMsg = "QOkATOUDCeyOkOOCSTpNyCMWSCyaMggkWkaaSyCaQkAvvORkEy";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string msg = "CGAWWAJJzAuqKYEnKKUMgyqGWKYzoyAAdWuKKJCnLEEGLuQGSC";
    string encMsg = "ZAGuuGOOPGhWECUsEEVzKyWAuECPkyGGiuhEEOZsgUUAghRAIZ";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string msg = "GFUxaGvWXFKCexUixiaMxMMOKgcKCGMGMUqoaqekeaKOaCxCeG";
    string encMsg = "nrKaCnsGirSYOaKpapCWaWWxSkoSYnWnWKHuCHOmOCSxCYaYOn";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 1158074369;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string msg = "GxGRgMuOWijjglWiKuuuyiNKQHAQgujuuxuiGhRiMMnSOMiyAu";
    string encMsg = "babQgumJeOIIgYeOtmmmBOKtSlqSgmImmamObfQOuuChJuOBqm";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string msg = "jEuGxZqGmjqGiuCyiieeCGInUNxyEuyeIUGGjqEGxxCxIGyynR";
    string encMsg = "UybfeTkfsUkfFbiKFFAAifGWtzeKybKAGtffUkyfeeieGfKKWu";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 865371699;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string msg = "KSceJMyULqqLuOuaIeISecKemBgmQSueuPugeqcemzuesiGKMO";
    string encMsg = "WciIeOSUPVVPaQaboIocIiWIRGZRqcaIayaZIViIRBaIuNXWOQ";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string msg = "SKWandRoiO";
    string encMsg = "UKWYAImnsf";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string msg = "iFqmIVNke";
    string encMsg = "eWqWggCUi";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
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
    string msg = "SWauuAQWLV";
    string encMsg = "QOkATOUDCe";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string msg = "DAOOCSD";
    string encMsg = "pNVTMWa";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string msg = "SKWa";
    string encMsg = "ndRo";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 727749683;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string msg = "OUKW";
    string encMsg = "YAIm";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 727749683;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string msg = "sfUi";
    string encMsg = "FqmI";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
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
    string msg = "Nkee";
    string encMsg = "WqWW";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string msg = "CUiN";
    string encMsg = "SWau";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 425658860;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string msg = "AQWL";
    string encMsg = "VQOk";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string msg = "TOUD";
    string encMsg = "CeyD";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string msg = "OOCS";
    string encMsg = "DDNV";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 4256936;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string msg = "MWaS";
    string encMsg = "yaMg";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 1057818861;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string msg = "yVOa";
    string encMsg = "WSyi";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 425658860;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string msg = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string encMsg = "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 710479617;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string msg = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWX";
    string encMsg = "bcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXY";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
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
    string msg = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWX";
    string encMsg = "bcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXa";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string msg = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWa";
    string encMsg = "bcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWab";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string msg = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVab";
    string encMsg = "bcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVabc";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string msg = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUabc";
    string encMsg = "bcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUabcd";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string msg = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTabcd";
    string encMsg = "bcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTabcde";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 265;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string msg = "aCeEgH";
    string encMsg = "bDfFHg";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 603210930;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string msg = "aa";
    string encMsg = "bb";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 710479617;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string msg = "aa";
    string encMsg = "BB";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 710479617;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string msg = "AhYy";
    string encMsg = "Snow";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 631526996;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string msg = "abcdefghij";
    string encMsg = "FGHIJVWXYZ";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 508110165;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string msg = "a";
    string encMsg = "b";
    TheEncryptionDivOne* pObj = new TheEncryptionDivOne();
    clock_t start = clock();
    int result = pObj->count(msg, encMsg);
    clock_t end = clock();
    delete pObj;
    int expected = 710479617;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=8351731&rd=13899&pm=10510
********************************************************************************
#define _CRT_SECURE_NO_DEPRECATE 
#include <iostream> 
#include <memory> 
#include <vector> 
#include <algorithm> 
#include <string> 
#include <utility> 
#include <functional> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <cmath> 
#include <cassert> 
#include <sstream> 
#include <map>
 
using namespace std;
 
 
int MOD = 1234567891;
 
class TheEncryptionDivOne
{
public:
  int P1[52], P2[52];
  int C[26], D[26];
  map<vector<int>, int> Hash;
  int count(int E[3][3])
  {
    vector<int> State;
    for (int i = 0; i < 3; i++)
      for (int j = 0; j < 3; j++)
        State.push_back(E[i][j]);
    if (Hash.find(State) != Hash.end())
      return Hash[State];
    for (int i = 0; i < 3; i++)
      for (int j = 0; j < 3; j++)
        if (i > 0 && E[i][j] > 0)
        {
          int Results = 0;
          for (int u = 0; u < 3; u++)
            for (int v = 0; v < 3; v++)
              if (v > 0 && E[u][v] > 0)
              {
                int multiply = (i == u && j == v) ? (E[u][v] - 1) : E[u][v];
                if (v == 2)
                  multiply *= 2;
                if (multiply == 0)
                  continue;
                E[i][j]--;
                E[i-1][j]++;
                E[u][v]--;
                E[u][v-1]++;
                int Temporary = count(E);
                Results = ((long long)Results + (long long)Temporary * multiply) % MOD;
                E[i][j]++;
                E[i-1][j]--;
                E[u][v]++;
                E[u][v-1]--;
              }
          return Hash[State] = Results;
        }
    return Hash[State] = 1;
  }
  int count(string S1, string S2)
  {
    int N = S1.length();
    for (int I = 0; I < N; I++)
      if (tolower(S1[I]) == tolower(S2[I]))
        return 0;
    memset(P1, 255, sizeof(P1));
    memset(P2, 255, sizeof(P2));
    for (int I = 0; I < N; I++)
    {
      int v1 = (S1[I]<='Z')?(S1[I]-'A'):(26+S1[I]-'a');
      int v2 = (S2[I]<='Z')?(S2[I]-'A'):(26+S2[I]-'a');
      if (P1[v1] >= 0 && P1[v1] != v2)
        return 0;
      if (P2[v2] >= 0 && P2[v2] != v1)
        return 0;
      P1[v1] = v2;
      P2[v2] = v1;
    }
    memset(C, 0, sizeof(C));
    memset(D, 0 ,sizeof(D));
    for (int I = 0; I < 52; I++)
    {
      if (P1[I] < 0)
        C[I % 26]++;
      if (P2[I] < 0)
        D[I % 26]++;
    }
    Hash.clear();
    int E[3][3];
    memset(E, 0, sizeof(E));
    for (int I = 0; I < 26; I++)
      E[C[I]][D[I]]++;
    int Results = count(E);
    return Results;
  }
};

********************************************************************************
*******************************************************************************/