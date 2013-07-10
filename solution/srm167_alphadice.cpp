/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1761
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

class AlphaDice {
public:
    int badData(vector<string> roll);
};

int AlphaDice::badData(vector<string> roll) {
    int ret;
    return ret;
}


int test0() {
    vector<string> roll = {"ABC", "ZCB"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> roll = {"ABC", "DEF", "BCA", "GHI", "ABC"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
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
    vector<string> roll = {"ABA", "CDE", "CDE", "CDE", "CDE"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
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
    vector<string> roll = {"TFR", "TLF", "TBL", "TRB", "URF", "ULF", "ULB", "UBR", "RTF", "RBT", "RUB", "RFU", "TBL"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
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
    vector<string> roll = {"TFR", "TLF", "TBL", "TRB", "URF", "UFL", "ULB", "UBR", "RTF", "RBT", "RUB", "RFU", "TBL"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> roll = {"ACD", "AEB", "FDC", "FCB", "CDA", "DAC", "DCA"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> roll = {"CDA", "ADE", "DEA", "DEA", "DEA", "DAC", "FCD"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> roll = {"CDA", "ADE", "DEA", "DEA", "DEA", "DAC", "FCB"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> roll = {"ABC", "DEF", "BCF"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> roll = {"ABC", "ABC", "ABC", "ABC", "CBA", "ABC"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> roll = {"BCA", "ABC", "ABC", "BCF", "ABC", "CBA", "ABC"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> roll = {"BCA", "ABC", "ABC", "BFC", "ABC", "CBA", "ABC"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> roll = {"BCA", "ABC", "CAB", "FDB", "CBF", "BFC", "CAB", "ACD", "GHF"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> roll = {"BFC", "BCA", "ABC", "CAB", "FBD", "CBF", "BFC", "CAB", "ADB", "BCA", "ABC", "CAB", "FBD", "CBF", "BFC", "CAB", "ADB", "BCA", "ABC", "CAB", "FBD", "CBF", "BFC", "CAB", "ADB", "BCA", "ABC", "CAB", "FBD", "CBF", "BFC", "CAB", "ADB", "BCA", "ABC", "CAB", "FBD", "CBF", "BFC", "CAB", "ADB"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> roll = {"BFC", "BCA", "ABC", "CAB", "FBD", "CBF", "BFC", "CAB", "ADB", "BCA", "FCB", "FCB", "BDF", "DFB", "DBA", "BAD", "ZCD"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> roll = {"ABC", "XYZ", "ZYC", "YAC", "CBZ", "ZXB", "ABC"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> roll = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQR", "STU", "VWX", "YZA"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> roll = {"ABC", "ABC", "ABC", "CCC", "ABC"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> roll = {"ZYX", "YXZ", "XZZ", "ABC"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> roll = {"ABC", "ABA", "BCA", "DEF", "GHI"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> roll = {"ALB", "BAL", "CBL", "LCB", "LBA", "LBA", "CAX", "AXC"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> roll = {"YTC", "VCU", "UCU"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> roll = {"ISH", "SIF", "WFS", "HSW", "ISF", "SHW", "SFI", "IFS", "WSH", "FSI", "FSI", "SFW", "SFW", "ISH", "HSI", "HIS", "WSF", "SWH", "SWH", "IHS", "FSW", "WSH", "WSH", "HSW", "SFI", "SHI", "FSW", "IFS", "WSH", "FWS", "FSW", "WSH", "SFW", "SFI", "IHS", "FSW", "SWH", "WFS", "SIH", "HSI", "ISF", "SWF"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> roll = {"KXZ", "XKX", "KXZ", "XZK"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> roll = {"EJR", "RSQ", "GSJ", "QSG", "GJE", "SGQ", "GEQ", "JSR", "JEG", "GEQ", "JGS", "GJE", "RSQ", "GJE", "EQG", "REJ", "QRS", "GJE", "ERQ", "EQG", "RSQ"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> roll = {"CVQ", "QVP", "QCV", "QPW", "VQC", "QVP", "AVC", "WAC", "ACW", "APV", "CVQ", "AWP", "WCQ", "PWQ", "VCA", "QVP", "AVC", "WCQ"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> roll = {"BKD", "BKD", "JOS", "DKJ", "OBS", "BOK", "DBK", "SBD", "DSB", "OSJ", "SDJ", "JOS", "OBS", "SJO", "DBK", "JKO", "DKJ", "KOJ", "KDB", "KOJ", "SBD", "KJD", "OKB", "BKD", "OSJ", "BSO", "KDB", "SDJ", "BSO", "SOB", "OJK", "BOK", "SBD", "KJD", "JSD"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> roll = {"BRK", "BYC", "YCB", "VKR", "YVC", "CRB", "RBC", "BRK", "CRB", "BYC", "CRB", "VRC", "CBY", "RCV", "YVC", "RBC", "VCY", "YCB", "CVR", "CVR", "VKR", "VKR", "CBY", "RVK", "YCB", "VKR", "VRC", "YBK", "CVR", "RBC", "KVY", "RCV", "YVC", "BYC", "RBC", "KRV", "KVY", "KBR", "RKB", "KBR", "YVC", "BKY", "YCB"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> roll = {"SWB", "WSB", "SFB", "SBF", "BWS", "WSB", "SBF", "BFS", "WBS", "BSF", "FBS", "FBS", "WSB", "BSW", "WBS", "FSB", "FBS", "SWB", "BSF", "WSB", "SWB", "WBS", "BSF", "BSW", "BSW", "WBS", "BFS", "FBS", "SBF", "FBS"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> roll = {"REK", "YXK", "YEN", "ENY", "RXN", "YEN", "NER", "XYN", "KXR", "REK", "XYN", "XYN", "KYX", "XNR", "KXR", "REK", "KRE", "EYK", "KRE", "RKX", "YXK", "NRX", "EYK", "ENY", "KXR", "XYN", "RXN", "YXK", "KXR", "ERN", "RNE", "REK", "REK", "ENY", "XYN", "RKX", "YEN", "KYX", "XYN", "REK", "RKX", "XYN", "EYK", "XYN"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> roll = {"VSG", "GSZ", "EGZ", "GZE", "ZGS", "GZE", "SGV", "GSZ", "EVG", "EVG", "GZE", "SGV", "VEB", "VBS", "ZSB", "VEB", "BEZ"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> roll = {"ZJE", "JGJ", "JGE", "ZJE", "JGJ", "EGQ", "EZJ", "QEG", "JGJ", "EZJ", "JGJ", "EGQ", "JGJ", "ZQJ", "JQG", "JJG", "QZE", "ZJE", "JZQ", "EZJ", "ZQJ", "QGJ", "JJG"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> roll = {"HPI", "PCJ", "PCJ", "RIJ", "CRJ", "IRH", "PHC", "JPC", "HIR", "IHP", "RIJ", "IRH", "HIR", "CJP", "IPJ", "RIJ", "IPJ", "CRJ", "RIJ", "RHI", "HRC", "HPI", "JIP", "PCJ", "CJP", "IHP", "RHI", "RJC", "PCJ", "RIJ", "CJP", "HPI", "CHR", "RHI", "HIR", "CRJ", "RIJ", "IHP", "CRJ", "HRC", "CRJ", "JIP", "IPJ"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> roll = {"BRU", "RUB", "QBG", "RBQ", "QRB", "GJQ", "JQG", "RQJ", "RBQ", "UGB", "BRU", "RQJ", "GBU", "GQB", "GQB"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> roll = {"NCZ", "TZA", "NTE", "TZA", "AET", "ACE", "ATZ", "NZT", "EAC", "ETA", "ZNC", "ZNC", "AET", "ETA", "EAC", "ACE", "ZTN", "NZT", "TZA", "CEA", "AZC", "EAC", "ZAT", "AZC", "NCZ", "CAZ", "ZTN", "AZC", "CNE", "AZC", "AZC", "TNZ", "CAZ", "NTE", "CZN", "TZA"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> roll = {"SDG", "DHG", "SUD", "SDG", "SDG", "SUD", "SHU", "HSG", "GHH", "SHU", "GHH", "DGS", "HGD", "UHH", "DGS", "SHU", "HGH", "GHS", "SHU", "SDG", "HSG", "SDG", "DUH", "GSD", "SUD", "SHU", "HUH", "HUS", "HHU", "SUD", "SDG", "HHG", "GSD", "HDU", "GDH", "GHH", "GDH", "HGD", "DGS", "HHU", "UHD"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> roll = {"LHK", "KHY", "WLK", "ALW", "YKH", "YKH", "LWA", "LHK", "LWA", "AWY", "AHL", "LAH", "ALW", "LHK", "WKY", "LAH", "YKH", "WAL", "AWY", "AWY", "HYK", "WYA", "HAY"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> roll = {"NIU", "NUV", "VVD", "VNU", "VNU", "DVV", "UVN", "IDV", "UNI", "NIU", "DIN", "UIV", "DNV", "DIN", "UIV", "UVV", "DVI", "UNI", "IDV", "UNI", "IVU", "NVD", "VNU", "VVD", "VVD", "DVI", "IVU", "NUV", "VNU", "UVV", "DIN", "NVD", "IVU", "IND", "UIV", "IUN", "IVU", "IND", "NUV"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> roll = {"IYK", "FYI", "IXF", "YQK", "XIK", "IXF", "FIX", "YIF", "YQK", "YIF", "FXQ", "IKX", "KXI", "KIY", "QKY", "QFX", "FQY", "FQY", "YIF", "QXK", "FQY", "XKQ", "YFQ", "IKX", "FIX", "XFI", "FYI", "FXQ", "FYI", "YIF", "YKI", "XQF", "YFQ", "IFY", "YFQ", "KQX", "KXI", "QKY", "XFI", "IXF", "XFI", "XKQ", "QXK", "FYI", "XIK", "IFY", "KYQ", "XFI"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> roll = {"KKK", "KPK", "KWL", "PWK", "WPL"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> roll = {"KGK", "GKD", "MKX", "KMK", "KKG", "DXG", "GXK", "KMD", "KGX", "XMK", "KGK", "MDK", "KMK", "GDX", "DKM", "KGK", "MDK", "XGD", "XGD", "GDX", "MDK", "KMK", "DXG", "KGX", "MDK"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> roll = {"BOL", "OLB", "LZQ", "QLZ", "ZMQ", "ZLO", "MBQ", "LZQ", "ZQL", "MZO"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> roll = {"WSO", "WSO", "VVW", "SSO", "VVW", "VSV", "SVW", "SSO", "OWS", "VSV", "OSO", "SWS", "OWS", "WWS", "WSV", "SVW", "WVW", "SWS", "OSO", "VSO", "OVW"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> roll = {"YKX", "YWR", "KWR", "XKX", "YKX", "WRK", "XRK", "XKW", "YRK", "XKW", "KRK", "WWR", "WKX", "KRK", "KKX", "KKX", "YRK"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
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
    vector<string> roll = {"UKU", "KKD"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> roll = {"JUY", "OYJ", "JJU", "OYJ", "PYJ", "UJU", "UYO", "PUY", "OJU", "PUY", "UYO", "JJU", "PYJ", "OJU", "YYJ", "YUY", "YYJ", "OYO", "PJU", "OYJ", "UYO", "PJU", "PYO", "PUY", "PYJ", "PUY"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> roll = {"LTL", "LAT", "ALA", "LTL", "ATL", "TTL"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> roll = {"CEW", "WCE", "EEW", "WEQ", "EEQ", "RCE", "CCE", "CCE", "ECE", "EEQ", "REQ", "REQ", "RCE", "WEQ", "ECE", "WWC"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> roll = {"RNQ", "IQR", "RRN", "RRI", "NQR", "RRN", "RRI", "NQR", "RRI", "RNQ", "RRI"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> roll = {"KNC", "TQK", "QCQ", "TQK", "KNC", "QNC", "CNC", "TCQ", "CQK", "KNC", "TQK", "NQK", "QQN", "KCQ", "CCQ", "NCQ", "CCQ", "TQN", "QNC", "TQK", "QQK", "TCQ", "TQK", "QNC", "KQN", "TQN", "CQN", "CNC", "KNC", "TQN", "CCQ", "TQK", "QQN", "KCQ", "QCQ", "NNC", "KQK", "CQK", "CNC", "QQN", "QQK", "NCQ", "QQN", "QNC", "CQK"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> roll = {"DKY", "KKL", "KKY", "KYD", "KYD", "ZKY", "YYD", "DKY", "KDK", "KKL", "YKY", "KKY", "DKY", "DDK", "LKL", "YYD", "KKY", "KKL", "DYD", "ZKL", "LDK", "DDK", "ZKL", "YDK", "DKY"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> roll = {"GWG", "GGA", "FGA", "WGA", "KWG"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> roll = {"PHH", "PHH", "GHW", "WHW", "PHH", "HHW", "PHH", "WWH", "PWG", "WWH", "HWH", "WHH", "GHH", "WHH", "HWH", "HHW", "HWG", "WWG", "HHW", "WHH", "HWG", "GHH", "HHH", "PWH", "WWG", "HHW", "WHH", "PWG"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> roll = {"ZIT", "TTZ", "IZT", "TIT", "IZT", "ZIT", "TTZ"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> roll = {"IIK", "IXI", "HXI", "XKX", "IIO", "OIK", "KIO", "IIK", "IKX", "HIO", "IIO", "HIO", "XXI", "KIK"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> roll = {"WJG", "VVJ", "VGV", "JVW", "VGV", "GGV", "WJG", "WJG", "VGV", "GVW", "WVW", "GJG", "JGV", "QGV", "JVJ", "VGV", "QGV", "JGV", "QGV", "VVJ", "QGV", "JVW", "JVW", "WVW", "WGV", "QGV", "GVW", "VVJ", "QVW", "VJG"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> roll = {"IIF", "IIF", "LIL", "IFD", "LIL", "LIF", "DDI", "IFD", "LFD", "MDI", "LFD", "IFD", "IFD", "LIF", "IFD", "FFD", "IIF", "IDI", "IDI", "MIL", "LIL", "IFD", "LIL", "LIL", "FIF", "IDI", "IDI", "MIF", "LDI", "IIL", "LFD", "LFD", "MIF", "FIF", "LIF"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> roll = {"LBL", "LLV", "VVW", "LBL", "WVW", "VBL"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> roll = {"SUS", "VVK", "GUS", "USV", "KVU", "VVU", "SSV", "VVK", "UVK", "VVK", "VVU", "GUS", "GUS", "KUS", "VVK", "GVU", "USV", "VUS", "SUS", "SUS", "VUS", "VSV", "SVK", "GSV", "GUS", "SSV", "KVU", "SVU", "VUS", "KUS", "KVU", "USV", "GVU", "KVU", "UVU", "VVU", "UVK", "VVU", "SVU", "SVU", "VSV", "VVK", "SUS", "UUS", "GVK", "GSV", "SUS", "VUS", "VVK", "VSV"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> roll = {"SAS", "AAS", "SAI", "AJA", "SAI", "JJA", "LAS", "SIJ", "SJA", "AAS", "SAI", "IJA", "JJA", "AAS", "SAS", "IIJ", "IJA", "JAS", "AIJ", "IIJ", "SIJ", "JJA", "AAS", "LAI", "AJA", "AAI", "AAS", "LAI", "IJA", "JAI", "IJA", "IJA", "JIJ", "SAI", "AIJ", "LJA", "JIJ", "JAI", "AJA", "JAS", "SJA", "JIJ", "AAS", "AIJ"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> roll = {"VLV", "LLV", "KLK", "VLV", "LLV", "LVG", "XVG", "GVG", "KVG", "GLV", "LGL", "VLV", "LLV", "XLK", "LLV", "XLK", "KGL", "XGL", "KLV", "KGL", "XLK", "KGL", "LLK", "VVG", "VLV", "LGL", "XVG"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> roll = {"IFI", "FYF", "IIY", "FIY", "ZIY", "YIL", "ZIL", "LYF", "YYF", "LIL", "IYF", "LYF", "LIL", "IIY", "ZIY", "YIY", "ZYF", "YYF", "LIY", "LIY", "ZIY", "YYF", "FIL", "LYF", "IIY", "IYF", "IYF", "FYF", "ZIY", "FYF", "YFI", "YYF", "IYF", "LIL", "IIL", "LFI", "YYF", "IFI", "ZIY", "ZFI", "IIY", "ZIL", "LIL", "YIY", "IIY", "ZYF", "LYF", "YIL"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> roll = {"NMT", "FTM", "WNT", "TWN", "MNF", "FMN", "TNM", "TTW", "WFN", "TTM", "MTN", "WTF", "TFW", "MNF", "TWT", "TMT", "FTM", "FWT", "NMT", "FMN", "TFW", "NTW", "TMF", "NFM", "MFT", "WTT", "MNF", "MNF", "NWF", "WTF", "TNM", "WTF", "MTT", "TWT", "TMF", "TMF", "FTM", "NWF", "FTM", "NFM", "FWT", "TTW", "MTT", "FWT", "NMT"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> roll = {"SQD", "LSD", "HLD", "SDL", "SSQ", "HLD", "LSD", "QDS", "QDS", "SQD", "DQH", "QHD", "LSS", "LSS", "SSL", "SSQ", "DSQ", "HLD", "HSL", "DSQ", "HSL", "SQS", "HDQ", "HSL", "HDQ", "QHD", "SSL", "QHD", "SDL", "SSL", "DLS", "HQS", "QSS", "HSL", "HDQ", "DHL", "LHS", "LSS", "SSL", "QSH", "SDL"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> roll = {"JOB", "MGB", "GJB"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> roll = {"EHC", "ELH", "WWC", "CEH", "CWE", "ECW", "ECW", "HCE", "CHW", "CEH", "HWC", "ELH", "HLW", "EHC"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> roll = {"MMW", "LHW", "WML", "MMS", "MSL", "SHL", "MSM", "SHL", "SLM", "HLS", "MWM", "LMS", "SHL", "HLS", "WMM", "SMM", "LHW", "LHW", "HSM", "WML", "SHL", "WHM", "SMM", "MWH", "LWM", "SLM", "MLW", "WHM", "MMS", "HLS", "MSM", "WLH"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> roll = {"YLT", "XYT", "TYL", "XYT", "LLY", "YLL", "XLY", "LXL", "LXL", "LLY"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> roll = {"SQI", "QXA", "IIA", "QIS", "AIQ", "XAQ", "IIS", "SQI", "IXS", "XSI", "XSI", "SII", "AXI", "IXS", "XAQ", "IAX", "AII", "XAQ", "QXA", "ISQ", "ISI", "SXQ", "AQX", "XSI"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> roll = {"IBX", "AXG", "IXB", "XGA"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> roll = {"CQF", "FHQ", "FCG", "CQF", "FGH", "HQF", "QHF", "GHF", "CQF"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> roll = {"AFV", "YTF", "TYF", "FVA", "VAF", "YVF", "VYF", "TYF", "FTA", "FTY", "FVY", "AVF", "YVF", "YFV", "VYF", "FYV", "AVF", "AVF", "YFT", "AFT", "AFT", "TYF", "TYF"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> roll = {"VCH", "VCH", "VCC", "CAC", "ACC", "CHV"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> roll = {"THO", "HOP", "HPO", "OHP", "OPH", "HPO", "POF", "OPH", "POH", "FPO", "TOF", "OTH", "HOT", "POF", "OTH", "POH", "FOT", "OFT", "OTH", "HOP", "PFO", "OPF", "TOF", "FPO", "HPO", "OHP", "OFT", "FOP", "OTF", "HTO", "OTH", "FOT", "HTO", "POH", "POF", "FOP", "THO", "TOH", "HTO", "OFP", "HOT", "OHP", "HOT"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> roll = {"NFP", "PVF", "VUP", "UPV", "PFV", "PVU", "NPF"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> roll = {"SBE", "XBP", "PSB", "SEB", "XEB", "XEB", "EBS", "EBS", "XEB", "ESB", "BPS", "XBP", "PBS", "PSB", "XPB", "BXP", "BXP", "BPX", "XBP", "BPX", "BXE", "EBX", "PBX", "BXE", "EXB", "XEB", "BXE", "BES", "BXE", "BSE", "EBX", "PXB", "EBX", "XPB", "EXB", "PBX"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> roll = {"TZW", "QTZ", "WVZ", "ZWT", "TZW", "ZTW", "QZT", "WVZ", "ZWV", "VZQ", "VZW", "ZTQ", "VQZ", "WVZ", "TQZ", "TQZ", "VZQ", "WTZ", "ZWV"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> roll = {"USJ", "ULE", "EUL", "USL", "LUS", "JEU", "JUE", "SLU", "UJS", "ULS", "LEU", "SLU", "SLU", "ULS", "UEJ", "UEJ", "LSU", "ELU", "JEU", "UEJ", "JEU", "LUS", "JUS", "LUE", "LUS", "LEU", "EJU", "SLU", "LSU", "JSU", "LUS", "SJU", "UJS"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> roll = {"HJW", "WQH", "WHJ", "KWJ", "WQH", "KQW", "QWH", "JWH", "JKW", "HQW", "QHW", "JKW", "QWH", "QWH", "KWJ", "QWK", "WHQ", "KWQ", "HWJ", "WKQ", "QKW", "WKJ", "WJK", "QWK", "WKJ", "WHJ"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> roll = {"ABK", "AKB", "AKB", "KAR", "BKB", "BAK", "BKA", "ABK", "BBK", "KBA", "RKA", "KBR", "BRK", "KBB", "KAR", "KBB", "BBK", "RAK", "AKR", "KBB", "KAR", "BKB", "BKB", "RKB", "BBK", "BKA", "BKB", "BAK", "AKR", "KRA", "BKR", "ARK", "ABK", "BKB"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> roll = {"EVG", "GEA", "HEA", "GAE", "GAE", "EGA", "HAE", "EAG", "VEG", "HEA", "AEG", "GVE", "EHA", "GEV", "EGV", "EAH", "EVH", "GEA", "VEG", "EHA", "EHA", "GAE", "GEV", "EHA", "GEA", "VEG", "EVH", "VHE", "GVE", "EVG", "AEH", "VHE", "AEG", "VGE", "AEH", "HVE", "AHE", "AEH", "AEH", "EVG", "EGV", "GEA", "AHE", "AEG", "GEV", "GEV", "EAH", "GAE"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> roll = {"ZYR", "RYW", "RWI", "YWR", "RIW", "RIZ", "WRY", "ZYR", "RZI", "IZR", "WRY", "IRZ", "YWR", "IZR", "RYW", "YZR", "RZY", "ZRI", "ZYR", "IRW", "WYR", "WRI", "YWR", "IRW", "RIW", "RZY", "WIR", "IZR", "WYR", "WIR", "WYR", "RIZ", "RYW", "ZRI", "RWI", "YWR", "RYZ", "RYZ", "WRY"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> roll = {"SFX", "FEX", "SFX", "XFS", "FGS", "XFS", "FXE", "XFS", "FSX", "EGF", "GFE", "SFX", "FGE", "SFG", "FXE", "SFX", "FXE", "EGF", "GEF", "FXS", "XFE", "FEX", "FXE", "SFG", "XFE", "XEF", "FXS", "GEF", "XFE", "GEF", "FGS", "FGS", "XFE"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> roll = {"KOV", "VKU", "UKV", "UKV", "VKO", "VOK", "VKO", "KOV", "KVU", "VKO"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> roll = {"XPI", "MXP", "PZM", "IZP", "ZIP", "PXM", "PMZ", "PMZ", "IXP", "PMZ", "ZPI", "ZPM", "XPI", "MXP", "IZP", "IZP", "PXI", "PIZ", "PMZ", "PIZ", "PXI", "MPZ", "PIX", "ZPI", "PXI", "XMP", "XPM", "PMZ", "XMP", "PMX", "ZPM", "PMX", "MPX", "MPX", "MZP", "ZMP", "MPZ", "MZP", "MZP", "MPZ", "PZI", "IPX", "PZI", "MXP", "IPX", "PMX"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> roll = {"CIT", "TCI", "TIC", "CIT", "ICP", "IPC", "ITC", "TIS", "PSI", "IPC", "IST", "TIS", "CIT", "ISP", "TIC", "CIP", "PIC", "TSI", "SIP", "ITC"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> roll = {"BEG", "GBE", "EXG", "GEX", "GBE", "BAE", "GEB", "XEA", "AXE", "BAE", "BEG", "BAE", "XEA", "BGE", "XEG", "AEB", "EGX", "EGX", "GEX", "BGE", "EBA", "GEB", "XGE", "XEG", "BEG", "EGB", "EXG", "EGX", "GXE"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> roll = {"CQL", "SCL", "LCS", "LCS", "LSC", "CLS", "CSL", "COQ", "CLQ", "CSL", "CQL", "LQC", "CLS", "COQ", "OSC", "OSC", "OCS", "LCQ", "SCL", "SOC", "SLC", "CLS", "CQL", "SOC", "LCQ", "COQ"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> roll = {"CCR", "CCR", "CXR", "CCO", "RCC", "CXR", "RXC", "CXO"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> roll = {"ACE", "AEC"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> roll = {"ABC", "DEF", "BCA", "GHI", "ABC"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> roll = {"ABC", "ADB", "ACB", "XYZ"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> roll = {"ABC", "AFB", "FDC"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> roll = {"ABC", "DEF", "BCD"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> roll = {"ABC", "ACD", "ADE", "AEF"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> roll = {"ABC", "DEF", "DCB"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> roll = {"ABC", "CBD", "BAD"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> roll = {"ABC", "EFD", "FAE"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> roll = {"ABE", "AED", "ADC", "ACB", "CFB", "CBA", "CAD", "CDF", "DAE", "DEF", "DFC", "DCA", "BAC", "BCF", "BFE", "BEA", "EBF", "EFD"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> roll = {"ABC", "FED", "EFC"};
    AlphaDice* pObj = new AlphaDice();
    clock_t start = clock();
    int result = pObj->badData(roll);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=286911&rd=4640&pm=1761
********************************************************************************
//program framework generated with WishingBone's parser :)-
 
//common header
#ifdef WIN32
#pragma warning(disable:4786)
#define for if (0); else for
#endif
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <bitset>
#include <valarray>
#include <algorithm>
#include <functional>
#include <numeric>
#include <complex>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
using namespace std;
 
//64 bit integer definition
#ifdef WIN32
#define in_routine(type,spec) \
istream& operator>>(istream& s,type &d){char b[30];s>>b;sscanf(b,spec,&d);return s;}
#define out_routine(type,spec) \
ostream& operator<<(ostream& s,type d){char b[30];sprintf(b,spec,d);s<<b;return s;}
typedef signed __int64 i64; in_routine(i64,"%I64d") out_routine(i64,"%I64d")
typedef unsigned __int64 u64; in_routine(u64,"%I64u") out_routine(u64,"%I64u")
#else
typedef signed long long i64;
typedef unsigned long long u64;
#endif
 
//common routines
#ifdef WIN32
#define min(a,b) _cpp_min(a,b)
#define max(a,b) _cpp_max(a,b)
#endif
#define abs(a) ((a)>0?(a):-(a))
#define s2d(s,d) istringstream(s)>>d
#define d2s(d,s) {ostringstream t;t<<d;s=t.str();}
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef vector<VS> VVS;
template<class T>vector<T>split(const string&s,T){vector<T> result;istringstream is(s);T a;while (is>>a) result.push_back(a);return result;}
inline VI split(const string&s){return split(s,0);}
VVI split(const VS &g){VVI ret;for(int i=0;i<g.size();i++) ret.push_back(split(g[i]));return ret;}
string itoa(int n){char buf[100];sprintf(buf,"%d",n);return buf;}
int gcd(int a,int b){for(int c;b;c=a,a=b,b=c%b);return a;}
int lcm(int a,int b){return a/gcd(a,b)*b;}
template<class T>class Index{public:typedef map<T,int>Map;typedef Map::iterator Iter;Map MyMap;vector<T> ItemList;int insert(const T&item){Iter it=MyMap.find(item);if(it==MyMap.end()){int n=MyMap.size();MyMap[item] = n;ItemList.push_back(item);return n;}else return it->second;}int find(const T&item)const{Iter it=MyMap.find(item);if(it==MyMap.end())return -1;else return it->second;}int contain(const T&item)const{return Find(item)>=0;}int size(){return MyMap.size();}T &item(int index){return ItemList[index];}int operator[](const T&item){return insert(item);}T&operator()(int index){return ItemList[index];}};
//output routine
ostream& operator<<(ostream& s,string d){
  s<<'\"'<<d.c_str()<<'\"';
  return s;
}
template <class T>
ostream& operator<<(ostream& s,vector<T> d){
  s<<"{";
  for (typename vector<T>::iterator i=d.begin();i!=d.end();i++)
    s<<(i!=d.begin()?",":"")<<*i;
  s<<"}";
  return s;
}
 
//parsing routine
template <class T>
vector<basic_string<T> > parse(const basic_string<T> &s,const basic_string<T> &delim){
  vector<basic_string<T> > ret(0);
  for (int b,e=0;;ret.push_back(s.substr(b,e-b)))
    if ((b=s.find_first_not_of(delim,e))==(e=s.find_first_of(delim,b)))
      return ret;
}
vector<int> intparse(const string &s,const string &delim=" \t\n"){
  vector<string> tmp=parse(s,delim);
  vector<int> ret(0);
  for (vector<string>::iterator i=tmp.begin();i!=tmp.end();i++)
    {int t;s2d(*i,t);ret.push_back(t);}
  return ret;
}
 
enum {
  UP, FRONT, RIGHT, LEFT, BACK, DOWN
};
 
class AlphaDice{
public:
  void turn1(string &s) {
    char t = s[UP];
    s[UP] = s[FRONT];
    s[FRONT] = s[DOWN];
    s[DOWN] = s[BACK];
    s[BACK] = t;
  }
  void turn2(string &s) {
    char t = s[UP];
    s[UP] = s[LEFT];
    s[LEFT] = s[DOWN];
    s[DOWN] = s[RIGHT];
    s[RIGHT] = t;
  }
  void turn3(string &s) {
    char t = s[FRONT];
    s[FRONT] = s[RIGHT];
    s[RIGHT] = s[BACK];
    s[BACK] = s[LEFT];
    s[LEFT] = t;
  }  
  int badData(vector<string> roll){
    set<string> p;
    p.insert("??????");
    for (int x = 0; x < roll.size(); x++) {
      set<string> tt;
      for (set<string>::iterator it = p.begin(); it != p.end(); it++) {
        string s = *it;
        for (int i = 0; i < 4; i++) {
          turn1(s);
          for (int j = 0; j < 4; j++) {
            turn2(s);
            for (int k = 0; k < 4; k++) {
              turn3(s);
              string t = s;
              int flag = 1;
              for (int l = 0; l < 3; l++) {
                if (t[l] == '?') t[l] = roll[x][l];
                else if (t[l] != roll[x][l]) {
                  flag = 0;
                  break;
                }
              }
              if (!flag) continue;
              char c[256];
              memset(c, 0, sizeof(c));
              for (int l = 0; l < 6; l++)
                if (t[l] != '?' && c[t[l]]) {
                  flag = 0;
                  break;
                } else c[t[l]] = 1;
              if (flag)
                tt.insert(t);
            }
          }
        }
      }
      if (tt.empty()) return x;
      int ss = tt.size();
      p = tt;
    }
    return -1;
  }
};
 
 
 
 
#ifdef WIN32
int test0(){
  string _roll[]={"ABC","ZCB"};
  vector<string> roll(_roll+0,_roll+sizeof(_roll)/sizeof(string));
  int badData= -1;
  AlphaDice _AlphaDice;
  int ret=_AlphaDice.badData(roll);
  cout<<"--------------------test 0--------------------"<<endl;
  cout<<"roll = "<<roll<<endl;
  cout<<"expected to return "<<badData<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==badData)
    cout<<endl<<"Pass!"<<endl<<endl;
  else {
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
    return 0;
  }
  return 1;
}
 
int test1(){
  string _roll[]={"ABC","DEF","BCA","GHI","ABC"};
  vector<string> roll(_roll+0,_roll+sizeof(_roll)/sizeof(string));
  int badData= 3;
  AlphaDice _AlphaDice;
  int ret=_AlphaDice.badData(roll);
  cout<<"--------------------test 1--------------------"<<endl;
  cout<<"roll = "<<roll<<endl;
  cout<<"expected to return "<<badData<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==badData)
    cout<<endl<<"Pass!"<<endl<<endl;
  else {
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
    return 0;
  }
  return 1;
}
 
int test2(){
  string _roll[]={"ABA","CDE","CDE","CDE","CDE"};
  vector<string> roll(_roll+0,_roll+sizeof(_roll)/sizeof(string));
  int badData= 0;
  AlphaDice _AlphaDice;
  int ret=_AlphaDice.badData(roll);
  cout<<"--------------------test 2--------------------"<<endl;
  cout<<"roll = "<<roll<<endl;
  cout<<"expected to return "<<badData<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==badData)
    cout<<endl<<"Pass!"<<endl<<endl;
  else {
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
    return 0;
  }
  return 1;
}
 
int test3(){
  string _roll[]={"ABC","DEF","BCF"};
  vector<string> roll(_roll+0,_roll+sizeof(_roll)/sizeof(string));
  int badData= 2;
  AlphaDice _AlphaDice;
  int ret=_AlphaDice.badData(roll);
  cout<<"--------------------test 3--------------------"<<endl;
  cout<<"roll = "<<roll<<endl;
  cout<<"expected to return "<<badData<<endl;
  cout<<"your method returns "<<ret<<endl;
  if (ret==badData)
    cout<<endl<<"Pass!"<<endl<<endl;
  else {
    cout<<endl<<"Fail!!!!!!!!!! aoao~~~~~~~~~~~~"<<endl<<endl;
    return 0;
  }
  return 1;
}
 
int main(){
  if (test0() && test1() && test2() && test3()) cout<<"ALL PASSED!"<<endl;
  return 0;
}
#endif

********************************************************************************
*******************************************************************************/