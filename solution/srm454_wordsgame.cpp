/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10708
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

class WordsGame {
public:
    int minimumSwaps(vector<string> grid, string word);
};

int WordsGame::minimumSwaps(vector<string> grid, string word) {
    int ret;
    return ret;
}


int test0() {
    vector<string> grid = {"Mu", "uM"};
    string word = "Mu";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> grid = {"sDQmQnoMGj", "YafplwbBRW", "fVwRishQWO", "yUusOqnoCr", "rAXFEfVTnS", "hjVSUSWmda", "PTGIcJTKqo", "bQEDeeqcYC", "nFolORcRKh", "oXQtzHuZLW"};
    string word = "WuoDdJZbRM";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> grid = {"TAfrjRZ", "toAXqro", "dqgqWtu", "JpWketB", "lULWPip", "kPIDwAd", "WOjyQbb"};
    string word = "xempfPT";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> grid = {"GrzCmw", "NTgqEn", "iqPnBA", "PvsYQd", "BawoPg", "ypmeTu"};
    string word = "iJkofN";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> grid = {"hJaEzo", "WdrJkk", "NbdOyb", "MrjSPT", "kvwbVX", "mQCBPj"};
    string word = "ETyAWi";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
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
    vector<string> grid = {"VET", "WeU", "MXb"};
    string word = "rFQ";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> grid = {"WOxTAoq", "MnLfUzE", "UwLzQtM", "rzsPjoP", "vovPVHW", "QrgEfYZ", "vehytUC"};
    string word = "wvSXKEl";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> grid = {"MxtdU", "iXWxq", "UajjS", "dUxtM", "UxdMt"};
    string word = "tUdMx";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> grid = {"uqzvgF", "rAmRlZ", "XPjnuR", "MMPkFz", "FsvFhk", "kFJTSo"};
    string word = "KbrMxc";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> grid = {"UJnoqAE", "ZrQBlUk", "qnfzUXV", "aVspiho", "ymfuSdB", "tYBgGSH", "IxBKYFd"};
    string word = "zvXsPFb";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> grid = {"FXS", "RSl", "fYY"};
    string word = "lSY";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> grid = {"kulmUWMPZC", "GNjQGcfxKr", "mvLqQudHTJ", "prCyhqaEKF", "KWnQDZMsta", "HvNUtseezB", "AWcavimKgL", "gzeXwMYbiI", "MqBJGyFhWH", "KbCMEmdGik"};
    string word = "MZcNAhBTQF";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> grid = {"CmOzibiOWS", "UWuTsdBMgh", "jNAsLufaTc", "ACItBtZuXm", "icYWZUMWIs", "roCcRylYED", "GrqyOTPtLX", "cDLdAHFMeJ", "ghcYqVvmZt", "sndSZDaCHW"};
    string word = "iLqQVRYFtI";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> grid = {"SoLJWEGkO", "pPgrnFLzy", "JMWVAPYOp", "xdHgPiWQU", "RqHCggyPo", "hQxeryowu", "ravsRGFmq", "mHEdURlEN", "twrmyJmnw"};
    string word = "fORjFCHgq";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
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
    vector<string> grid = {"wZAbKXp", "Tyzoxqf", "tuEcisL", "ixFUtGR", "IlJfRbk", "hKtdeEN", "OJbnNHe"};
    string word = "LCBMKDF";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> grid = {"ng", "vV"};
    string word = "vV";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
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
    vector<string> grid = {"pkgjhozB", "kFyZAxLv", "lgfYwVmG", "UNasCCMw", "eGWbgwaU", "jBWpvgKt", "CZYCKEUq", "rzRZnZtN"};
    string word = "HbhCRnkq";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> grid = {"xSZB", "gbHk", "kbgH", "WFSg"};
    string word = "bkHg";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> grid = {"Iwxe", "FYLU", "VAxg", "jZSA"};
    string word = "AYwZ";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> grid = {"wfSFo", "uzzEp", "GSqHt", "FjQEM", "rVezn"};
    string word = "qUPJN";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> grid = {"CC", "II"};
    string word = "CI";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
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
    vector<string> grid = {"JFriv", "qlcDs", "GYOyK", "LtuFp", "ZdsHd"};
    string word = "svdpK";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
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
    vector<string> grid = {"ehw", "ifv", "IIX"};
    string word = "xdq";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> grid = {"ryIGFT", "msrozX", "aEfJws", "xiQzMv", "KXlWzo", "ygGIRV"};
    string word = "EsaJwf";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> grid = {"tHUIe", "Sohio", "pEYqb", "sCbBA", "hUSbn"};
    string word = "UnbSh";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> grid = {"KsUpufR", "MgWKmlY", "WRMPSuq", "PXPWjpl", "pbKoONl", "oOoUasF", "UkpMYtO"};
    string word = "pUKoPWM";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> grid = {"YzY", "ffz", "zYf"};
    string word = "Yfz";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
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
    vector<string> grid = {"I"};
    string word = "I";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
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
    vector<string> grid = {"kLKNRdVYDJ", "QHJfnjvekh", "CcNrihekJg", "eImXJadcfv", "AQdVPhfXui", "uHCgRHzHZT", "relqRsDgCo", "rVrCaLwinV", "YzSYZIXMSm", "HeQjvhJknf"};
    string word = "nhJHvefjQk";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> grid = {"eKUNGHktLB", "EtBFDndTlG", "RRFHmjwrDs", "eKYsHlYhlu", "ljxyJSwTds", "dUQToyWHvl", "azDPWRwioE", "EARdktoDBh", "dmIqcGSvCE", "wXypNQEMxz"};
    string word = "oDmWcJHGNk";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
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
    vector<string> grid = {"HcaTuiszsLbtqqQMDDNLdijrgUKECGwolcBmz", "wfBfxvSqMWAMetImdyPraHFAWTtBISPtnoyjE", "FvjpTuKtPSVwEYTeVwmKotwIZRUUvbEbjfpGO", "SiSFHdYavgPtmxBSRbkupJMATtbONnklvpXpY", "ACpgGnnBCvrGwKdFjPBGyuWuvzCDYiWLGLQKy", "jNvimqLrGsDBmCVroFMCTIKxjbHSBtfXVTehc", "TntZIatyLeUviLLpWjNIEcuDRcczFYRPDQLkX", "sSzsENCubbLaVuCundohqdrcPzLmaBFNZyiet", "AphGdOEZtZlyprDCFLifnfsLQpHeiPLiCdUIj", "eUnElPJLSpZtchwAITsWNmalnRTyVoVpQPnHL", "IpCLMTyCEAWNibUNFxKphgAopCGjaIJuEahgh", "uLsPzyxVoAdKBcADGNYDijDXoMsvMBCSHjqFF", "KXnQiotIBqUVbyeYlgFwADZvahWOTHrLJxMmP", "GvsDrHljcZHErVOIWKQSxOliIOtNUgahKnSYm", "bCfMbYZAOrywTWmUlspscSBlmrtlgRYKLbCvD", "RjfvCFDkREfuPiMmLJEqVWVMHuXChjQedXvis", "nqzaWmoYkBIBLMRxLoIEATGQNNlAlDsHRBuOD", "KRgUcMeOZljQZdxnzRTZeBJbRubVAndfSUtaG", "sKEwgxwJpDtfRfzejANauUkIMrPgkxUCyxZys", "qiBCDtIxfNBQwFJpHzzvMqdVzklpmaZrUKfZf", "JtCoFrgUDkTuuPosWqIdfkeeMkJnjtOzekGdY", "mEtunUWbrAguwmXHQgMFIwPRrxOtNBgRWiaBa", "ctCzPpdRYezkATnrNhrRKNzgrLzoarTZrMMLP", "vXlnAsRoutszOXKosikbbENHDOBWcxMGxgTlP", "xBRyozfWXACBelpkKnJosPLHOsNJsaSFAsrPd", "eGRWZXFeyAMsjeEwUfugjGcACaXTmXbdtRjtR", "uffHNgifTkmqhNrNDOImHLQukgwYUghyNSbuX", "KvfqUWcHVyRMYHSaFETBrFgevVTdGVejuudTO", "OvblffrEeJFXkkuRukcjSzThrVkFBRcOkzsEo", "MmjYhBzSiFKEhoyjhHxcLnheggQZshxYhCKCY", "aikbecGDnxnASOvBlCblwvZjarTfqbqcwAkDf", "FAMDXeriWUHyJvwlaqbQxmVhgZoILnTYtPOBK", "kZvXpbhgIzJFEaNZlmqMYCOnezTqpWpMqFFXG", "eiqkYlVXqUogUJGTIuuxXyIQdIjLpiDqaYJsA", "FuNrywHFUfEPxyHSeSkAtoUiiUtXxpIUivlxJ", "CMLKiVNpgeioWQleltMNzARaNxlskGtnPHIbb", "LTDRREbwdkXiLDqKVeGwBMmJHNqRIuXEYwYqf"};
    string word = "DFtxaTOVZAnbrByoQgLiKPmWYMeIhlHvUqJXw";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> grid = {"kpbkseQzZhStzkcjKz", "iWQUyLhMzrhDyuDSCg", "btgzrKsHnepgLghaXB", "ZPTBVnrnUpcZfBugve", "WKTiwryZCPtQqtVHVG", "zehyeMYCSciMHUfJEi", "YDQouAwJLmWMFPQCnr", "baXAcaPaFjsutLdwDL", "oGAbpCvukWIXYrzBOr", "KNUsiYxgGtndxlBjPh", "TnmXXdoBNABAppkAWM", "xVpQeIrEtQQvMJvfUP", "QVJpkQjlhqlAoRRmkC", "DIMvbFrepgzSWOyMiM", "DmZdlSrkBiLyZCpUqM", "vLkGrZfmBRpgKyeEqX", "KYYPZtfjmBKmghIBpU", "icZFhPyqKYdbTYwzTQ"};
    string word = "kKRBGpeZgEqymrXvLf";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> grid = {"vFugqhssQpxDkGbQRjgLiNdCQNonDiBqJNQIvdR", "KSBYwoFIrbhTEWnyeoAJNWdWlvWBItDCZUjhWIO", "AcjCYRGVlXDTLZfyHevwzrupOWagUqxJtbFQPoB", "OhYbHTnCZJPjoLNUFaSldexqGcEDfsXtSvKBywQ", "lfAqeAdgnQYXUZWImdjtgFXJcIgcrrfTWOolLxf", "dcYDJYHKLzQPoCRLJRqnNOUxrexfVMTpoDLMnvs", "IGorXlBIZwEMvyalsmcIiBxLqhyWIVFgjykTTdM", "ffNaGlpTOMNJZLPWlWYeWLnIFnbOucuFfIuKsAk", "xCPJhwaGsGKrnluDhVfdLAuPyATyvXgbFBfYIqF", "hwXNFDJEvvcHGqcCmvnINOVUBoEnFldurRoliUp", "dpVTzgUYCkJeKArvQfOZloayjnctEWLbVXRshPm", "lnbbnQNIujGFVLyYDTvcwkZGChFFvQWiNIHjdBc", "fglhMEbQLUesVcBoKmdiyxDtnCAuGkvznjPraHN", "yPKJkUQmqxumbCoHSSSsOQlCWWfrKarIHkZryHs", "UDNetarUamPprqaHHZMDNPkFOhpptrvuBgPHjSO", "XkvRwczItqFQuroeVMNpgjTUGYSfZanmLPxHLdD", "EHlfiZOSoKnmIWGdvFthCMVjAxXyRBYLxTpUwJN", "TfEguLruqPmpnkYmcoWjsubxSyZkxnLdXLDmiTi", "nIqQweXqiPymzlhYmbLFuZaYjfmpFImqDDUpYVJ", "SUVPhwoduFmFeUZjOpcJIEmzGunCKuWfAlQNIHE", "TOHGhLECvqbyAaziDcVFWkJoZBmYIpMQzfPuwdl", "PqHslygFxcZbxjuCGBwGJQrGbHayAQiVhlAexTe", "pAbrPMBWuGsXzZNvjHFeSdqkOmClYKIxqTtQUcg", "FOmgNosBsurDdHeGGsvQUeVZLhHvjgUtPqjVAIU", "lDrRMdxoareYSOKSTDGhfrQLeqhxgCfSlcrkPzh", "OXijaUAoXjEHXZxDfMplSGoNyPvEeURSYojdcwu", "pLvgvsGBAuKPiLIEhAZetFlvfeKilBOUuBMxPWI", "eKVtNPekvpMpgSnVTJzHHoVfDuBInkOxeCJTtET", "gFGODTwrIEpjMGyaKGSADyKKymzfkzCUknkzrkP", "GNNOetmhVNjJTPRKwAHDoIIIXIZbexmcOGKRLBo", "KQEalmOdvfSNgqnUiuWAHcrsDhYCBoJRKTeIFkX", "wzOFvMAxJKgiCVuRYEGDmdXcyBjIUPZpQarsTHt", "tnwAHFOdiNVkIFfeYOvUGyrjccaYCxgbitbFevx", "uJIwLCYAesjnhztkbyUiFxOdZGoVgaWPpHNDpcX", "PRuIdebkeAaovHwprLWtJsjMJZILUcSocCiWjPf", "sWXEhZTwykcSVmjeUGNbLKQiRtqgCBangfoYDlJ", "zmGwuhsOHRgprcdGbaUBXsyZPdtFyUYOMYeLzZq", "HAkPrtaDsSjznZxMvpXEOilCYNRQTfVKIJgUGdy", "HwzLiFkZWDsbaBtRXdVrvQoITfhUYSMjsuNGqOy"};
    string word = "uqFBMZQNhOVnoIfjceHXKgszLDkPpJlrSAiWtxY";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> grid = {"lIxquyzJPmiGCkmrnGhzxMwVGykrCfIuhEnYfYEsJBF", "pMUEQFhNgnlequaUTOqPHSTETIGYMRgYVwFtfxLSoiQ", "cDGYoPhqLFqKEJwvKWbOldWkeBZAfYpwbHEwlAJqaak", "OMFpmJBwGuSSXtpsZblGOnEBjQQsRXlXFTbvpOYJqPz", "eVCyjUvUoodSAWviSvLEwmhClTwXzZOvaeDhlcQudvg", "qLPIrRLiLIISWplzDrnwZoflIjOUSIcsfZgfILCrkKs", "AYvoUExeknATyyCOGkfrcCPxvJUIxBQFkNVAsTpIHFo", "HZiDwXFKkLRDoKJpGiiiUZAWhtYtaKgAEuSzmrgcati", "QrMPyDbrFaYFSEQfdZQvsSCcdoypYpGLHvaEwqAWVuq", "wPEeYzMaAwJdjBScPVaeAQGgKSxzFXHnjpoGYflHFOr", "xFTJBAdfToxexbTVzhYmtqHNAmIlmmqmASlMMmePHxa", "CJgOMnjmVBPnebuNgFRXDoaQUzakiAOlvxqYayQRncI", "FYQnOkxHtGnNQkXylsIBCVSVkUKfJjhILOradocYXWY", "sTDCaLEqyheMzrrhGqVLqVXCoDsRQNqHHrAwxbamCDm", "NOkbxBuBpBMewLFkSekVSZtACgudWBDDaRjNAFeVbHe", "KcoTCSVPHftxcygLctCjRWbZLrWyncqgPkLCWCbBeVE", "SWaGXZHdOoGWshGPvEcCgEDMWMCawDUdtfGZcnNUuLx", "dtNstTRyWavLgtoRcLSpNORcDNAgPKEzQqHanzPluMU", "yLKBJaozMDwBTwjeDKARbDnVSiJvqNsGKcIsqdpFNYf", "BqnlnsbioRfDbIijiJdUVGmxwGXTTjTpylNebJtEaoK", "vcIdVQvaaEoHndZtfwFdklKssOqKGVrJbYTBOIVaGhl", "VdJfKtBiRKHMvXkYjYHuMPrVmeDZNRuUaGtEkXyipmu", "RkSZhehxnOmLutLZzBWkjrexXnMFjqQiWdytwHrvHsX", "fVyUYGkdArshzbvMWFTKjDocwgXBQLpHnCmJqiEZluO", "WgRiGOsLneubJOhSQMxxvBjezwjVEWOPHIvTuaZjarB", "LzZWLjTWcKhkIezWACPFTSyJYarQBPEVZVdqKQReiTc", "ILlUHHVqUZUCUnIEEatyunqoqApbkVobFLWitkhobNN", "nbpRzMCAIQQHFkyJOlElEmYVgctLrMpcImYLjsiKKgP", "fFLXcmUuLtjohMUMnDNsaLudBbSSVIwMpXQAgpXnUpv", "gCchkIVXiYBalkbmMSTgmzLVVKhBhVUOIopRtVKyxSH", "PcOFRlksWMZzMznoiXXApukmisewKYHEwsuBFWEZARd", "JGtcbfTLCgaxPstaUmKqFXOjxvNmvlKCSDekHtQTiJO", "TfexNgrgxUXCONDxPjpNPUgabpnMsvlaoWOtfKfLXCG", "mtsLeKpPxzVhHfBKUyoboNVapVbcygpoyAXBvSMbszy", "zndkgvrZQNKGZUenLAvTfWplJFdWDZEfjyZwlRuNmdn", "arzzsNJdDbDFNLdXDTsnnuoyFXfutVtxlJhEENqQYGb", "jtBHAubwiTLtDCWqvdOQzrlMMuHhltFrbPUHSDXdRww", "UoqvSYJtAZNBYuxCwczZGAxquCiCZkUtaFwlRBKgTEj", "rwAVdbxPlkyuKTNbvIJWXcQhHEEeIKZSEBPouMuMnkW", "MsySFVihIspdfuVQcRmhBWUNtLLngXWNBCCcglsxQjt", "bHHQldYyDUcriaMDWHrDiXzdOqgOOLthjamZtEhCHXM", "harAqhghjLCBdSYAyPycLQcsNWVGpbZZnUziEPnpwyJ", "ksXapxRWysOnrmsgmoeYrIiIQRoPdJNeBjKjagqwseZ"};
    string word = "EdqzKUcvXkQFihorfbgDwGMZlpAnHmLOWTJysBVjCYu";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> grid = {"PflDZmmagHo", "YkjbxTbzPBd", "sRZqvtQABxN", "zffUiNlhNAJ", "nhzoBcIcPkW", "lCAxYUhOTRA", "gfGGcpXRCWn", "pjSFmERrVnR", "nMUCVmkZgAC", "mVVvoCrveNH", "aYJNsbCogwh"};
    string word = "qCOksgUoVPw";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
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
    vector<string> grid = {"FFEvnrVrmbAeUQOZQJLzfKRidpljcpz", "iHJYmqCHfOXmqJuBfpipZBvCxktCvPL", "DiQZLDjagcFAhMNGqTpCxxGoqLqgsWZ", "eOPQMiqwTHQqRaaEGsUcMnavhmfncWz", "HWizjGyYrTIcSvHJdtVgMdCtSzRuOpT", "fEhRaNkIUCmdvPfOZnjLFLINBUhsuCE", "pzGmFFjccXIXwvsiwbGzCaOPgZmVBlr", "jfYtELOxBysUAGyzkmomoBxKUNMlznz", "sLzFrTjsZeYCJxgXCZRqJpfZwCQAGXc", "TcBMqzXlbIURoyzmXanLeyTfZxaZvda", "yupNXIQFsNqTgGhfygDWayiLCivNSVu", "gjseZsSXFglEesbXiuSIUkqRPESeTub", "nUcJHXqgtvHjFUCMlLCrMfdlIPdfyPh", "rRwqcBoLMtSampidIebtalDIkqAKDWp", "NDcfIcgiikHZVSxAaOaxJwwEWJPtXTj", "GQwaoEARnrJBqqKgrVfAcJeYrTDTcUX", "EaOENBwevLhoASUxHzBdVubzEGIPUYK", "YPZpDNKfeShipTQpsjetunLkVBZOlGI", "JrFyWuInyDBDoevpFSTJKfZJHIYLfAP", "abwKpTvkKmaboDGyTKzxNnsVYYKyitO", "UMcSQUTNojVyCEdJvrJlxSWknsXceon", "xXqOYwPQQVvSullIRxtwnPXGehzpZEQ", "zsQgtzcJGdwHPUkqJdZMzTtYolFrafk", "RqNcGkAUWYaOmaZUORhMrZBCLrehFiP", "KBRwBJOZwnHKnjDSnCKOjBrdjDBDzNu", "ZloGCoOEXxELqAMGpWlgBvKnXSsiuWx", "QxPAVqUMdUbnVzqFUhODCoEaQVUFHGk", "mKVWJKlOkpTtCPeExMsIVymViXjUprd", "qIcbOLHGOuPrSnjzgUAdjXzgMjczgop", "lhwuAVnbEFouNYAEBkQrqXptlfwmrAC", "ktnowwwoDlhWKeRFMfdMcwVjFOCaSNR"};
    string word = "GYdaEosAtnHfRbWxlJumNSceXKCghTk";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> grid = {"KbaIvoWOhSifYPmB", "UZppUVkNWZmoorha", "nfqWdtjCRcYmJpTw", "jTYHOPDnGkKEUAoS", "QOTwebBjgDkGUzJE", "gBgZJWtfpFNfqntn", "XdHsCJaEijbrmwBW", "FJFktTGrUSBoQThS", "dyBvTTyYNgJHqioW", "qtiUAvjGeyfVSKFh", "eEXwfhYsBgPHlcxM", "ramWhwUbjpsenlcy", "EAqXaWdDvlcFSYTP", "yAjfbODhXmwVoRuI", "KFXEkwbWOhqLBNYe", "ySdmBZYVvIutJoxq"};
    string word = "YqvObnTEXFlZAduS";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
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
    vector<string> grid = {"TZNIUhIvjkCoAwYwMajKTZcRwVDklAccDwYTYRDnPlyRMzftz", "aUHYVaWwSKSEaubYDdazImUQELhBdNGTSpbMjTuxzcsnlEJuq", "tJbjwekWCAMJsfaHVUdZPMzcNifPyTHMdhCdSWbAWqnTcJIHj", "yOVMpbZHiDIfrxTucWFUupiMKJnbrnuulmmHeyXRtSveHIqoO", "minJtupHVBsDCGjLleBrwRmpnLGIxzlrZZhptITiUljxgrfjS", "SASbnBrymdBZJnldcKhnaVEwoAEIolexeEFkteASDnCWNMPNR", "WXodyFcegpDqeWFQpzDMDjPbsCcjjCyjWvDFQwSIrENRmeqFq", "FrGOvisNrWnZClXgdkxLfQslsuAlJrAHCaNRynnbTZESrgkvw", "iTasLPwBuVQdThiEWpMhsipnkTlxbYpqHTvELDiGbUaTuVFlI", "BKstAxijlnNLCuzPhZMwVmbTvagHprqfeIcdyGXUQOERSYJko", "wKrKKjbYlTMHvRcAWDDiFvbZtETIuEBbvzrOobFOoHdrCGgiI", "ffiQSwartIBVGpfdAVloGnlncIliHDWDhSYnigPtllbGGsXLU", "XRGGjkfqkGJOCVCbnqUSEXkwaKRaHVJZPnRsULlZeAkOOflxM", "CZpeeqtfvZLgsIpkLZmklHjuAsoiBBvvkBRDthVDSIMULwtix", "pEMXqRYaLmzwZzqqCGmGvSJfPAsfnjqfTASLYoWPYzWIMXsRP", "GteiugQxPEoHMYHZXoTNqcfFQVKaRtKpLrVqTifFxaZaGTROq", "kzNBZmVIJexgjiWxLMdlrKhjxGQdzOoKpxpMSjhUuSqkHZosK", "KIDpGxTGcMgFmSwNtBTvrBnzOxYcWhjmxkBiVJyYhsKlXvPwo", "YYcwITniBinSYZIjMruwYhKeIPnIUiNPNdqIFuYlXbipbRGNS", "dyBPPKFhnOvfjgJgjgZyFzOIywNWGFnSmeVuFmzMCzzqGDjsA", "DdiuMNjjRxfcDQkCrCXWKbIbtGXHYJTgIyvFzVZHBickmpoQU", "zYnSrZMwWvNIvXguEbfxRNLoouXTjZrXrMSssqUwyugGMOCaJ", "qIRWiLuqsorOpKBkeLqQhEtnYMGOkHtNYlnPgMBQOLTghAsFm", "oRlHTDRdKuPHCLKdTAzdqfQnHFcajeOJuVuvBEtLIrVbpKPro", "xZkEWJKlhfgZDaEfLNnFiIHOwIViHKhstYqlbdRCVshulaghy", "sZWmmfoYAyPAVJOjxEpTtYgYpZFTHwRiqJeedAcfwHODkclES", "AwbZDIOFQCGvWcNxBIOmjtDRKLetzxSLgWmRfzoWJgpYXxVhg", "lzUxcHNvpUplYymQrxeqKgdFUBLphQZyXOJxTrqzpPwtCUkLu", "OihoJnEKXYLxwDZUhvAYWJXzIIBqURPCoPIOGOGeqAuegkJEN", "BOtVCciNejEhZjRBcHccIPramuXIwLgwfUGxctsvdXDskmJNU", "rcsDXvCrMcXfHsVllFUfnxAKgTeUtdinOHjkjpmKQmBNfBICZ", "QqeUNCLoDReFETrPDfLCedMejdCoXqIBwfpJKcQykUUhUiQBJ", "MydrAWzaFXaeBPPtjPEgDyBRKFtKcaskUNZiSHOVLePMboSpZ", "civNBldYYSKruNvhSQOeRLeknHKxkpwVRbJShNaTgaoGbYgiz", "jqXRkUAMUwdWhdAyGSXITWVFuRsuSGVYzFceAlwgaGQxqFEfw", "PatalXlkTQQMkEDTInMbcCRrPvqgsbDGKLDQzxdkcaeobHxyE", "RymToAmwIsPgpkUgFhStaUCVdBKMgoazjsDpfBMBKNxjntyDH", "NYWtsEHIZlPBWAoWJsCPXraxsPtisUMIMjLnpsvuHFRtCqkQM", "uoXqRSPkNJrgVmeSxXvEaoYWpdRviMkAiXRMVFrjjhYTNlQqX", "IcncxGDkaqFHMeGjNjiArGoutQVzHubhBILgDPENZDIknuGfS", "UhSvzyxjoPLcfosyaywaMkTmlspCKcUWcCttNfLqnsSJCLJUY", "bFcChpJWqroITUQCITIOLqSVfVrqCsXRJgRNSYNsNJryBPruH", "hmSgQzevGgrYHvMxXwNupAxSwnYHAWmaVitQqSxXfDtERyPhd", "gWLygYgrfFFJUMulOYPXQOqmIEfVUmYtADihgGphvImRFhWfH", "HeehEtyvyHeIrBSpntsBUDvPBVvNoPCFFcgMmQCEAdHLlWojk", "nCtFfMUcxhGOZCnoQmCjWTwKXmHpzIdQaqiksCHJGAJimCtyV", "LfCnFrGMznUhsFyZjilRDeNMuGSHYfxEGoawDkepmkfjNQjWi", "ZnjkdohJbadWmOtstcsDjFuyKfOXXkFOnGuyaakoMHAeMSxnh", "eJszbOvLdLrXXthZmltVgaFVuMJVCXfobRxnZUJrsSFVIdISZ"};
    string word = "gaRQHGjsdUpyTVowklBYCxqLtMNOczJXPirIEnSZevmfAbKuh";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> grid = {"HsxdEQKhcVNZXkeUMqfaCDumYAIRjzoGibPnSgWFLf", "rEluPUgxPKGmulrnwolaWdQDtRbSrGBYdRvZQCXTPS", "YNIjTcOQGrVlPvEDUyxJeHXZnoSBdzFuALpfWxKgmw", "mevaQRZFySmqQAQuExnnvKuVfsQoKngLfhTQnJxnTw", "ctKYfbXgxvBDFToVGAVOrMaUsJRkNSPeqICdQynwjm", "ijfrDvFrDtosvUWiwhwAPMlbgJLJMkbsoNCpFChEFW", "IdgJScvXosuDHKhpGCFLzarBiRNYPlkMmOAUFebExf", "etHtOQarluSOIvLlPYzuvjzyuwcRMGxcsgDcwFJeNe", "luHUkBNdsnYgRMivGSYZFfCaWqwXEpJIAKcmxborVT", "cdbnsispYRSAfuEdwnJwKTrJpaMBKeZtBPHccCyJGC", "zDxRwaHQXqZLKdUlfrkYpWMCojkyiusnSTAtbGFBNc", "eXzobhhpyPKrjMKEFkqmLMrmxfzxzrJWHyVxpdAaCE", "vYitpyAKbjOsSUguNlUQVPfGTwMdChEqkmHLoenZXI", "csMFTrkYNxgjVCSHaAclLWvmXJpRiIquOtGfwUhEdD", "OjECpSKAvIXoYNFRyhHLUVcqexaTbitnGZkgrsMBWw", "UkNydqXEnaJxjBFehVODivtRgACfbwsOGulMoZQIKL", "qtOGgUZdhPlQLEVuDmQSFvbMpAkJjYKRIHrfcoNewX", "RbrzOUDBiaegxfpLKGssXowHPMkYcudmqCVTnQvJyW", "ZLGeJOVaunhKHAWSmYMwcoQPzBsUERNkyfIFtvxrCl", "WboENbbUVdawDcuTiJvKfZpxvxlHyxHZGxIPfuKRiR", "xPDuRaTcWOSnIMAvfpBQEYKdJqjmgzBstHbweylVUi", "EsmufxZaSwtXqyidOBbLbCpreHkDFIYgTPhnAJUWVo", "BLPbIsHnVUlQhuNmRwSikoEFaMjfpdOXeSxtgDJAvc", "RPyTlhFXQBMbLPzTqNTGqPBGHbDUkgKxEUaMsAtVbD", "dujkAgJFnpDbcytSOBtCKisqeUQoMVTLvXWzYHRNmh", "YjxyzxiaFnIEBhwFtFGJteKLSyBudSKCnzcgpTSEgU", "ODJhfUiNgDdMbQCrBEunvHoHFpsOINpSQREJBDayVv", "EqKKqHmDTZcbQsOLyIZamxWRqxzWDwIBvQiBPuVVVM", "RuQtJamOkrHEnWeCfBPpjdqGYbXvhLxSoNFZMDgKzP", "mVbpjBwoJitGdqHZhvERDYNXkaInryelQcKOSuAgzF", "tzGdLwnyvVeqNimEaAePlZbXWugfUMQkOpsDoxTRjY", "CmQowXdFfOGHAtJLbcLzYIgUxZMpVqhTNiuKakjWsl", "NGpAimrDeMuyICndQWXfTxVcsOjStLgzwlaKoEBvPX", "JqrxpXUHaKcjbCBlDMmksyRGiWLumYnfhgotAeEwzT", "TbUmxLkQycIYWJDlEXySphoZniFqAduHGvtCwKafgN", "sTaNcDIVhtjinsAybXdMLmuZdDsZNOVjryLglbueOZ", "UIKdYnBSNorERCuQqDjyXkbPcpziMtWwxThAjGmfaF", "pARtXIsgywByueNrtwDSXypQceeUXDcRXVfVkJJMFF", "FGruxClZmIULzpyktSWDshEganNPYAcOXKQvJwBWRb", "ezOUiVBqizKfoyueiqoJtALRYvToojJyZdxxJUoOQX", "xIMxgOJRGUhFxwFdfhRYxEDANiIcEcJlaTFbiWESic", "FIgYPANTlCepEyhOZwAioMdjsDfvbKxScXWJUkrzqV"};
    string word = "WuEPVGHyQnqjDtsJkZFodUTAcSYbvwOlxXRLezMBmf";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> grid = {"XrBJmkTLfOmpwdBhWvZXUtvytnrc", "WsmqqgeWAIXSozeJzGPSbfjZqqRI", "MadmMoKvyDTwRRmlbrxamrYnkWty", "dhcnZHLERkVkIyGcqmGIQzScfVGk", "lHSAjtjFONzLgQYhYFqrSGFPzDSK", "DXtbyzHeVUHKxQfzIHiqeziaKLVp", "eENwFIBMIxKyFSidLDOtpeHJyyqx", "iYhdGuuQUukbdwsOPeNmzrwQXGPP", "IyqytbIDjjPsOeIzNlbAfRpEzMyO", "tfXdthPwCKIacBxhoMeUZUcPlzAb", "YqMJbRrzBRQoyEFRVYmVsnmuDQdJ", "yvTwBphjbeZkSaunkEgRVcMoxfhR", "OBpllqvTiXNNfcrkBKlvISGsUBUB", "KmiFsZVILdjLmwXZnuyGykKffJlw", "BwAAWCSkSmDhHVHsTPkiwMCoLCvN", "cufWssRdszRIBOhJXwrJaDIvvHoH", "norNWDzRdtggsCvItAMOvNnKjdxU", "TGBbuBlhzvEYimjlEXHPsxZDGNfu", "aDRxIixmNploMRNAshFzdwRPaSZA", "flOecpUtGJpWjqgTjSEkbvrfBlHE", "oQJyUhQOJqFFlAAeOCoCENhfojCL", "FpHCVBYiDnaXPnyJGNYWUWTDRkba", "hRxOoKwGqghzZvpwMOjNYILSlUTr", "mnzjMXEXcCwpeUlwfTzxOqXSJEBY", "SMZcSKasFZxSnNcKaURMHGUoReQv", "wIeWcEglPwdkWjPaJgSYIDPByRce", "kUWHEBNYhYoChHoXmIXhmEkHfvFm", "UjLEXxfCYoSrQgQzdzCwNmuTIweo"};
    string word = "FGaVUZhWuqAKtoDdRnfzbIBlkisN";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> grid = {"XxopMAGSCTjrJWXxHF", "HlzwIiOqPNUTHEieqo", "ZnCeMBsVKELaQUlBvw", "dgmeXaHwgCNYlJrFLK", "jAxEgCZmnazeBPxHhu", "oaEgfjHlyRWmYhHXkU", "VoYpFXdsmIQwOQwrmE", "ZfFJyRydKwHofMBnAV", "VflGWmaTPWzidqKQon", "aRtzLpNCiYwTUlTihA", "OYAfjwJbeXHVdpLUmP", "JotvLCMzDYBJDNUTtm", "ELVkVHyYwemHdXelni", "qXuesDEIzWojlCQKVu", "sbQxACSgDyWNnknLdo", "OTawUDkFByYeYkFwPS", "IaHyfftNRHKWkMGYRE", "QFSApBxXjwsuaLYGGk"};
    string word = "xLXlnKTFeBiQGrwUHY";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> grid = {"uBPhpJmOEqwwAXDRAEcPXjWfWEoIQQgBDqqOAErvaz", "jRQbmzWOskmYdZYowRdmYoeThdZrgPiamQYTVudDHF", "aCSliXwEnGFebeKNMAiuJAchcYdVazhJwjVTrJPljv", "zqfsvuuwXJbQXRqsPyRMiUwdPVYwHaBqroUacMvMcg", "gKtFQdObIoHKJbQbBqkhJDCzYccNhySjkBRxyGgPNq", "vGVjBtpJHzxheLSwsiFnvZavOsppvTbyTcdBrwbgap", "ELBRqqXVipLjxknmOQJZeGVwStOQuiJiqVnqmQKbuQ", "hdUkrANelsoilpfJDOSQTMsHMHLUmRazfybnFNcknp", "TQqHRpCsdHfoBCIyEZxyRkdzgXKZdGGNXAXldPUzoQ", "mOhJDjSvWRMqUYOxgFEbTuxxifwSBDoLlTQUxvGfIx", "VhUManfGClYbzAcNVFhBREZCnizdppNDIKwAoayNRp", "MaiQLfyxFAosRpHkNKzSlwOvdctmDqgBXWrThjEJYZ", "CJAZWyzjFXpvcUxFICpexIXKFAQcjeZCuOKfYONjOA", "tuiszybYMdieqqrsWAXINCmbawnhCKYoXaOhWGhuVw", "MeWexsZRgCzhHEvvNSexvhtquoEyObqxnfSnUvoCtR", "AtVnlKPDGhdgZrZVuCrDyilnxMvslvzpXLTIcZWSgj", "dNQVVNuItohfYomomzlvPOUCrhybMUFGmtEbrlAXsi", "JFDlFlRgqGEIInEvbzAUesPORDneWmChBgGGGPdTcy", "LeujbsfTQZlILiVlZSyiBvbcmOSTEBtKgzmybxlDGU", "xQQfHeYCYYksGPifhiBtFSEojPMqrgUnJmLcSJCfuz", "XfBVUUTmNKnxiwBBSZYoLqpbIRdLIVfArvjpovLRyE", "QfXfMcfJztBZklzpeJnzPFkdoKIOsEySSlyYdVahAV", "STXKwnukbQakptkuqMbTdKucDemJKtekyUphtkNCCe", "OzZNtIEfprOQVJWEkECwjVvJBlLMiqnVISFOqBVLrW", "fSWDXNHuTFuTWKpbpqQrFefsNjdmYfVYTuatxjvEIh", "PSVQyHIphdsgOvXSjYvAsPSGypVuwXXfKHvBnudifu", "qtBZdTxKZvDFrxFJtFLVPxgITChxPCPUChxOidQLmX", "RcQKYfDqOlIUhdgzlBgEHpTztkjKDLEwnMcjPHPYTU", "GUEAClBRVdXmRNhVYpqjoyIjegigkOccZPNLpCHucs", "nfPHnXDOkNjaSfCkfjmFRWnevqwHUdQsspfLophgCO", "HbTtcworLSCHmmGZJQtCRrHHQuPExFwFcnobwtsdzr", "yMnhGDlOUlviDWNfoYoaPNoRwJBGRxDtjRlbZrnYaS", "YeYRZpiYuuUTKIdZRtfkoJhGbmokLHpgeIHvyfUGnU", "FqlIJVXbajPiuHHzctILNtYedBniSurTaFCEjhucxA", "WuqZfKhFAMySEVaqyRjdLwGcJNpDnkAeRJARzmPfcC", "HTXdKEkvmhwjiNpAsLaRFDZlzWfgoyrtxQSJOMqcYB", "opMiIhHXJQRAgQJmdQHKEfDIETrXzsTZFDPiHJvtnT", "cxFNPPzMmrAxocMoKoUNybreAadFXnIRYCiPEfpMdm", "BytqOdlpojGAwDtVFoVHOzKGzzMnqwLOdbhZNuREWP", "wVJykZArvGWgyyojQwGWqQMFCWwWJjHMxwkImNyesJ", "sVoPhiXORbVwTjwmTiwYrnzwZSrRFoWvOZJhRpYioH", "pWtmsWPYyKSBCzUsnLZsGdjwGbpAGYKblEeTKMtXTK"};
    string word = "vYjcJFhfrOHxZoQNXEDTkWSwdKispBAlLRyztqaMgm";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> grid = {"OmKSvxwftpBvEywqzgDPcezSqFsVfNy", "hJRcNtDvTWXfeHCoWAybSMYUKHQVZPL", "pucvvsgEzJmGELQRoSxyoWJgPcSvDGK", "vrKwMoEJScyNVzLmJchePhbnOeTSMGE", "dGVSLCeYyvhjbFrTrucwtZINQBPKAJs", "FWSGanhMYemzydPlXkpZTbBxwxvoqJV", "YpXOasxHxcrlGOaExWgzQZioBWfsyuu", "PvzbEdBWkYOVFcQUGqeIDyOaZLFpiVM", "zzGLtkCZRciNnabVAQEQbFFITMNvdYI", "UIsAzimnWzgmVhiLYDltlbpIwQuQTAC", "uriIveMQtVSaqAiCQHdNNwWgvYpFyVr", "FUjpdVVNzPCKUgdOdqxaTPmnSRomxqe", "QebJIznggpwjhgaHKyEaWBToftRgDAT", "xtpnJKRsSaLlhdyMgOTqUZwvWUBQEYV", "OBFJnivSpxAdlyYCHfwNKUZoRXtbXEM", "raKumlVegvDAQWjtZFnbMkGBfKwTxSz", "rtEaKDTCQGEbFGYacjxdkCbTaJLPiKX", "UazOUMuUtSQgVBufbsCuxwJJGZmmrPh", "dQsGxTZgbccnNvewRQuDexbZkoGYrkZ", "zelJOoVMGnfXusZPtQjkRWDiTzxENKt", "jeLIBlKGjdQBDczxUIxxolfBcraPEXv", "ATONkJMbqDEQipHfLCvPIaoGldKLSgY", "GZXwqaMIpnumlzbgMYNetDoKAACUSvh", "dNeubLTpadZTUGHDVmmcnLsVTbmQdpH", "dLypaefNPQnjhRmDiFMBtQqnHjRRKjd", "TNervZYFUPkIhqnVFywQdMtfcuCHOzl", "lZNDlqjkYZRjUCwwjkVGtOWJOiMaYmX", "zAWAfwZvanovnKGfegqrRsROmgkbhnH", "WBvpfdwgltmDKMIzqeTPQNonGqULsZJ", "yLcezKxFYcSPjVLnBmzMnmPNMVUfFNg", "NBcFwnaeWgadUWlcutafQzzNOGjqbPe"};
    string word = "VZoBAFHYRJcMrqQdubxteKLjWGgXUzi";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> grid = {"tAHJRSwMKEzNiRJvDqJPSTWMDYXVXrkQXtmZmKyfdMycKL", "SrHOcdDIlUQYqBtnaJPLboyNuRVMzhvZWiXKweTgAmxkjf", "mzinJoOMTURVVldemmSULvJJkhYqbjKnghaKtXRzuMREfz", "CPkwYXEgbSdrUHOtoqZGiKfNDAaLRnyBQzTxFeVvuIljpm", "lBweCVLYRQazuyvUicdhMFobGZXPmSqHOgprAfsntJjxTW", "JDvZxAOTkoujEWFRqbpMiQLKdHsBSIwXUmaGfChPNynelt", "nhTOZvGSqeIyYghjZQSeuhsPyrWPxMtzkKKZLPEzERCHdC", "iFQDhfWbvCBeVENxzuJsKYwlPMktRZaqHmLdSUoyGnpXIj", "PDZKoexHXFzWfytrSsgwdGTlbvJnpLMBUEuOQmjaIqikCN", "pcuzOqkYxQVnBqwzLSyBdoWqddgLpgixxDcNMzUWPwUmQA", "XJKkdrUJfisopeFEVctwSZyscOvHustOUSmdVxsZwgFhRM", "MDHifCbVzUPXFSBKgtEeLjvylhnTWAJIkdoGOYqxscauwm", "EsQVDlJKeKVnoinXoqmmZdFOsfTtQHMDCgBBzxESXsoZbg", "PpjBiFupzMedsRzXwgzhPqVQRsLkaHQnTQmIgGfHBYmmqL", "iRSWDGbKxyaVBgmqUsPTworMEztjAuOYpJINeFLCnkHcZX", "qnmuozPvIKSyETXAGLbDwkxgtdOYlNWcrReUZQpBaCiMFV", "OVsteYnEfEGPgKAKmPObyKzAViAPUboPpfOkeOupLVREVW", "BeyCTpRvoZHwmxFGJjEnLPuYMrWiOkgbcSltaNQqsUzAdI", "xJZazDHEigMAdSRuONItkcrfQnBwGlXWUFPhevoLpmyCjK", "ZDABOEdYeySjbSnDZpkQpwPRokcPYikhTckZhQAklgYHCq", "RmZkQwjgAMaXCKoGiceFSEJvstbhlzqWTyUYNnIfdurVxD", "ujWBYBNuWuvwReATljLeAZioVbmTZyxnTrRQJWgaNAYQMe", "PGSFWjBvELtnATYaIgqMhZliduzVmyRNCXQDprkJbfoeOK", "qlpAeagOLlPetNLCplJKJsFYssFGQgxmEiWluBcfFbdDuZ", "mGHRXxcOWqtaZlEiLYTKgFQsjSvzAVwDpyoeJhrfNkUCbM", "FrQSLHxlfVYQpIViavdToWlIGANNHknpoueEtDtwPzCkTq", "NOwuoAksqMtVHlZSdvYKChbXTxQRJzPFWBymnLIfUceGgj", "rmGrfjhfSDjSKEdLQLHpgBbyngMyZvPhPZkNzzQqHtdQTW", "cjLsdZuGQTEmkgvHhWYVqxPDtCyNJMaRpfbSAoKOrXlzwe", "jpyvqJimsdDAaIXFUHfRiOmvZUUMxSOCHemrCfjMGdypyx", "GiTEqzVSDCIrHWigmCmQbCfGLYxmYSKbOXoBMTkHgrTqcg", "uIqzocgyNkmtXtYsuRxYsNKuDzUWmLbAuedOPJSAAetxgQ", "DlYCFpwQiqPJsekXqEYRfJGKNzVzNByWrjywLdCBlGEDPX", "cNPAcqqESoROZAopDDezxQEZZbkSwBcSeJkMcbAuNDCUsL", "kgcrsvHNoBUbKxXSbCyTMLpWEKErcuKCgPWxUQnUfLHInT", "yREjtPWVdAOnDeKrkZhIpMgLzBlUCowbcFxviXqTmsSGuH", "xCcJSHYATpfOMDWdPyBVtEGjrFqkiUImKhbsugZzXaeowv", "dEgYfeVpYKlHhhgyZcXaLASrNTCtCOYMTYpEykznPSphXN", "TflXItOHbejoxPWRupNsMAyULSYVgFCcndiwGmrhZQqEJD", "DQMdyHjWEAKZwGhotalFcbNUSIXiVqvBLgRmuTrpkCsJfY", "clGUrAmRHTthXIpBPZLxevWYbwdoJVkaEunKizSgfjCMDs", "rEHgZaUfxosFknqRSQCbIzMNPJLleijKucOwDhTVWmdtvy", "TVJdYqHLQMrlcKsySXnfDiupCEBZOFUAmxkotNgGbRWjvP", "FozgKuPvRYpWInAJbgITGbXqZsrHFBUNckinpcqiaCWjWf", "jLmnDxpSlwzuvyGJcVIFeNUhYsWkqdTBoaCOiHZXMbEtQP", "hpZJEMRvOzPjTflDKnFaGHCQYLrVgsIXBxuUwcdeWAikyb"};
    string word = "SeNHlgwUMQmVnPbhzoAEqGtvKRIjLfZTcBaYkuFsCOpiry";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> grid = {"ToPebrManRzRBurDpVLVstRstZOpyl", "koiHWJpxeNsxEeaKVxbDOytifngGNk", "pKPoOhEDtJFIUvqmwLBkYbuTjazqdM", "VCLejlkKIUXsMbFGSztfiOgnRHcHhP", "PLFYHqcvUuAMupLYqimZGICwKPSDnp", "JwNmHsjWRlFzfgyZSLutiYvUrOxApC", "HupSvTkPaQefCGwlRULrqKgjDNOLsn", "CWQoOtJQBajOWQnhRDYUuSiMWhAyht", "tvBVNTNMRxJiHCFBzivEuZMsxmubQA", "ZyQBEadPwgzKcuYLhpqNijlHvOWlRr", "YyjueSNMhEHFdTXqcRVBtPOosnkuCZ", "EcpatDCxqjnGoSdKlZrXQYzNMHkayf", "JGzyYMpegKTqflcHLrvMoTFYaXRfMA", "SuFjRsmGjXbifQTFaPqgIGONSFUZDk", "CsTMtmJNLSpdyFfBZRvjKWcrYwHzoX", "MjGPqmySENBUghzdfZlbYieaKckRJR", "DQkRvVTEYqPpoBAwFxpujVQBARVMLp", "VYjAPwMnWFeKuImULxrsSodOtJznak", "zTSDLfOaQyihekjGBscvPrtwZYdSmu", "YaGronjbiNxwWHevmsgDFIctyzSNJM", "ChXbAvrvdzZqtVlLnAPZdidSGvgEho", "hojAPaRuIFwftnTxGSDzWpvUXkEmZO", "gcfjVYtovfGyWyHdjjkONmaRnnjOHG", "NxuwhXbdCSBPeqyfnIvkZVRpDiHJGl", "eFPscElrCuppVshcTojXpyfIsuqUJQ", "dQfjIehCbuHGytgUTRKoWzYNpwcIav", "OiSQMbhRHEMZgFvhTAbQCyEYPPktnl", "RFgTDMpByemjzvIruqAZKSWxoXPoil", "WLsTpabyUHCmDZlcKQRghJeINSExzx", "EwkSFmpEqhAmcKUIlALHorzxXyqrlP"};
    string word = "NLzZxlqpyMOHubIRGfUaAJEDotrSmn";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> grid = {"ElEiGLRsNqyNppbpPwWhycIZYCAvTmhqishqzlixcVzVCJb", "iylDlyiRHVHMLljCNsGtAaxJRMeEuMzBmBGKsmorVfIxXUW", "XGxupJZHylipSDRrgFHoWRPrTJvWxSHUeeeveeSqYUcjURC", "vTdWqEzALJDhjreqQcFyJmUkjevaKuHQLJjbfMxalwnosDf", "mrgtdfCvwHDZQGQFWkjsufSRNKKxHKMdwSxwvrmbWNiCdyT", "RYnlrQzOdtIBdEiaXIcSqiGsxatBITBkuhntEcUesatZmgk", "WfxuLbQhfNXzZABtFuKONegmtwjqzvErnCHXPNclnvmpRHI", "AdDlgmXLaKYaowXcikvKSquOGtMtQyLnrElfpgTxTbdTbup", "KhPuEKyzqELKDenQjwUNetwlVErIDZawqmNMGOMAbklmwZw", "LvuDgToaIwxSAbuZRBRQarbCSkTqRsspaTrcwqOnoKyPhjV", "bbcXSVvtqrkWtiqkOAJBQuNHJbRYWDHkDWAioSRBHQFdWBu", "SHHzaheEbsvsiRIifOzMOIZFAqxPDiefJiOJcvpSAjmISWA", "peoHKqUbPAVgitxSXFuEZNhjnzOfGLYCawrTJvmWkQylRDd", "IAkvScJiEcHXIPNghzieGNrYuGIFVpZsAHyWrjuatohfupP", "toBLlDJUZRZJmBkpdgNRBxRLQSkkCxCAgUUGbWfAvXFszQn", "oagpDrEyJfBOFQYWpgCTVkpcEyukmqjzHjVPddBdkASSZiM", "CPehjgTkohHrYoYbTTuflQODejdWqRNbZquxqJZGJCkvyCD", "aVYWEufYyipEOcDTxPgvKjkAlvbVLFcQlzcUOYdQFTkUxxB", "knLKTUwcduzqHMMvIYOnsdfhHWAhjXgmpbfVJunREOgnpPO", "TKVNCwNHnyAnMJruUNLatzJtzlWeMYvuoVDBMBtqpriOcsY", "ljoPyCjcVjCVUVtVGwBlnBqQZBWSmcLKcaCIiCbNIxlcKhr", "OsRGrOrTMxaHJvCFLeyEiodyvxsKcOkbCZFNXtEMyPPGNSQ", "xwVrjlChQISfRqutfWwIFFLggOxCSoaXvYBACfYZBhGRoKJ", "BeLdOzSyMmDLNnzwrCecpVTjwQLeEEiMOfQoBArjCYrtqYi", "pCzeFkBsJGkgsCsVShEqLEBfWdaeMjPpQuKrjakCjWfEGaq", "ngYSFeBndpiDvmvMUVhFTCtBrrIRGQIwNpkuTPvQxHPbTke", "DSYgpXporemTKSusnOkYhbowooSPAJKpkozFRwFDhlpWLzZ", "hLhZSBgPOYUihfhQCEXuCHmdyTnwvwueyyozILsRXuLeaLj", "sWpAWdXdyQyUyUmeXLDifPiUbFxbPtfExxWgHQanNnKkvMa", "dEQvCFKKnaoduOCrjDIdIXezkPoQdWSHtMPTKpgyaSyuAbc", "MImdNGWOtvFGPYHPocVAwnnIdiXVdNyOFlYHtihzdFOBleF", "qmCsBvUSEngCxsaWvFfjmJXxPDCweUZJsrwQDEKVuIpKETL", "fJuUdNtKcMMczuWZyTaPMAjeisIDyLYKEwikShJTwmgzOOR", "NiqanRRvzLyFVhdRMxlZXTvbqcxZyVnUdXRONFwXzcKQnox", "upRUWthQPOZYcxkSMlZgxsKvspcvrClBjOqplDDNPpbgQXt", "VXaZFxamezqvlTjcdGdwRWHMCUpSQrVJWDpaAGjXRZYAfNs", "PRswRWXmoCTmggrwQCxkYKEqKVkXAALARkIshyHZGBaYFEG", "UOoqRICaUAKbTHNkyxmGgwsXOgBcoffyMRbjgzIhfEaFifd", "rtnNuimBhBdAeaRoBFnDZlznfXBSAGXwTFtCuIPXigvyMwU", "HQRunPzPNWoeCdWewIbXHZVGIzfyHlBZKgXdyoXjUzwHDGN", "qUYhHntAmauzNFTfeXbykWxvEDZjdgwKoPJpiORGrlCLSVQ", "QUNrgZgYzTftnLqRMJsJcMaEXfTbQHiphvESWnNDOsnXeno", "JzKqYqrRZdYxGtOTZyrmvSASmuifSzJESPaRVkGUKMfqjqh", "cqMRKswYMgOoqKdEbqSpEYlupniRaPXiVdmLYHCXqyJaYcz", "ZNeSiSeqzoqPrktedNPCzDhoBNgJFBstfnMeaZzvLJChJIK", "ecaPPMANtkrRwIQerGYHoyDWDIvOqhYCYKZYnTldgRHDrrv", "wZXiKoQPHUujBZvRibpWkgCNFhlcCeaGzAJhFbqWDDfLtAE"};
    string word = "YtFuZAnTbdfPlQGOixeREhayHpSJXNCovLgkqrKWDwUzVjm";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> grid = {"ssggmHEjFrzlgEnOvOAyCSMzbIvciQXh", "IQpoAfJvHkDFrLRtEMnhixBcGyZgKqjO", "iePulKsruiceqkwaTYLWDlAIKAhjuexL", "cgiYzUNoQspjIvmDTrASZHtEwkqGeVaF", "pABYhBwbIbCSiScEtphuSBdILkHuSnDC", "cJjsHwjVLqZWvSyouQpeIKgvSrdUTUpi", "ZXYDuenyUgjVlBEPOKtMmpzhsrWNfwIk", "ZDLjnmDkaQGCldlrGMWhvNrovpFxdZay", "lLMqjScAptRHwzYBGgQxkiNOsbdCvFEu", "ZXLWQbMrGlPeVJaczoEIuYsSqFUwAHfK", "ApSgFnDMfItGsTruoZEkNClqmQYVjWaX", "NEvpGubmJnqKWzrHDiYQLPkFwgfadMSt", "FLSvXiGpRGrxuRPVMFOymEcJvUVxBFRk", "NOmjPeFJwDcVSzkMCItLHyZpuoKhxbls", "YfuZytoSmFgcAjsWIelbkBMhrEJQPiqX", "uAzBStyhNpjWqlVQFoMegvwHDsTmOnfJ", "vPLAeZUXbxmTHYwDIlOaWVRdgMiqnBJN", "dJpZTzSGnRWCHxUgEqtiLuNDyjvMkFIo", "rNgjsWPIxvHCuSiEakVnoMAOdQGKXLUq", "PmCIQjqxnhblTRBkuZoGVaUsDwNFczSE", "RFGDbPcfTMvsECvHVRIHYgTrIaZkdhKt", "noUfrvqtCTmzmsyWCtOychdaYVieVSzI", "rHyvUKzxZDiSBYQGkNfsEIbeJhXLCmPq", "QAMIqxdiJwXpAyQNQxaxrGEWFqDFUjDM", "YwLubTTTmpWwsholeoKVFylZZsdfvOrW", "lShNKCvbePjIXirEpHOwnscLUDxkWAaZ", "BjLebToAmKIxNYugtUcSXFyWnlpiwRHq", "cCOhESdahfcKLFamAxyhbzsXegdresLx", "DNjGCSINlbzBiUJJUodCaUfOCcvfNnrM", "nKxJCNdVaprtGcjuoFRLlkIUAPfMYSsv", "rhhqXAZRKrsDMHvexUixAXRGlsgOFscs", "TsJOteDwlLvRPGBhWvOaRznJcpsmZMaZ"};
    string word = "WOMzEGeCbmBcwjIHLZvDyfgXrSQuNKaY";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> grid = {"kfKpcAOYNEqgPL", "hbPFpkaTEcHmKi", "esTGgmdzQNBZVx", "ptljoUSikOPNfu", "AwqobDjiKKHBsh", "EoUmNBwvshYLfT", "QxpGfrJCYgunCQ", "jSngXgLmTKXsXN", "sQVjxMVeeSLnWa", "OBWoPAbRGeMQFS", "pceIodfsNSMMmi", "ljFKBwkxdrZpAb", "pfzzefRcIbMJCc", "XeiWwDCcZwlYAJ"};
    string word = "sdBXaGkKhHzpJD";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> grid = {"pUlVEdAXoxIzgPWNFITpczbnKYQ", "IrxPwAdjkGoQWXhmDfVCgXvkBGA", "ENVaugmUMLGUZAwgBmwbBTbWCuj", "ANutcUIKzYfkXQHxrJLbffaUrFl", "BlwPnRuLBTyMXWUkTnJZGKrWTtO", "RKUrGhDSgMWyHMOpTABYZNicqme", "XxfhroTGByHleUsABbVicGkOUjU", "ZrcQSEWRpNcTbEnTfSgmUxkHfmv", "MweHQiPYoDTOsOlJhNDRAGfSLFu", "oRLmuAEliOwHEIRhjhbxmQFZKtX", "voiwEGrUHCdnKkuRNgptCsIBWTQ", "GByFkIAwMzUYnfpTSEWLrlxYZvh", "POtvseVnqlxNZEoWzBGFYgMRLlJ", "paUjXtyDBUcGiwYMHEhVvOgCdSG", "ZdYxfVLBSQXmlbNmJtCarnAuyMO", "gCWXhMZDtcehsFkGJlVafoHpBQT", "ixEGQCBoYIMIklqPuKbLngtywHU", "rifZYevKumjBgupWVpcwPwEOMRj", "DKYxSetCNnFdgePyVumyIaRyalZ", "frceDZIrXhJFdWTPhlHxqSHxooY", "enSlFzcXOqwxDfWTKpmIoZVayxd", "kEuYbWDvjFnCxefhJwpAOHZCoTm", "jxDWyqoUIHJqShANgeiLkCEBdVY", "FJRNPVCEmKbcMeUorLYfngdOHyS", "ZRguWrkyLdSDwJvaNpmdfEzCFtD", "AYkIrvPTGkSLtQdgXqRpwihFfDu", "mJfoJGuYwBiKmvZBpcFBxIpyHVn"};
    string word = "MymOdxKUTCLNQHIhcqYzBkGDnlF";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> grid = {"DFXOAOWQCxdAYLH", "ExdUCHGfcNaQFSW", "cdWCaHNUEQxFGSf", "AKgWRrPbLXXeBLG", "mdaRHVBtDLlhHBr", "HmEoTHykfgtuovh", "hcIGVNUPmEcMXUm", "QXbfcThPEkktgVL", "CFHUWGSQxdafcNE", "XYZafnqDwKZbSgx", "MBfdOfAqlCXgNMt", "qbAPgAiueWrvGxV", "ShREBtJRFVlTgRP", "WXhlQxwizFNsWrz", "JGShzRIJNXUYZnV"};
    string word = "aSWFcNHxEUdGfCQ";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> grid = {"LTAlASwPGhtwXQPoiFCezKQj", "LQhONtNzXKRFowJmUHiYSxnV", "uaAnwAtDKDJFqsbaiTBvhUqA", "gZxlVbAhrtCqOqAANioPIcIi", "SWUuQDEMJTqePxhdyRfviHkB", "xVAijXIvzUGMjktCRfJQqoYH", "OJaRRvaqjcCPxyqhtRqvCCtE", "DzgoMyGqUpBUGFySPpSjHSAd", "WJqaPBTSNYKhOygwzQpeltCQ", "IicNzdHoPVfiUUyQJqrfrXrq", "XgdSisJqouhvkOiDLYwInHmN", "zFHOBducoUfRgEXtrbKlTGqg", "NgrugVTHfKasetFOwxbcYMUt", "kKmUYRhjcDCTJruoFPgyaXtu", "cnBwuGLIiNrtCaFMWqgjlhZn", "PzejHlENcEYWSYejhMUbPZVR", "EDzmEsREohTeXflIsJPfFmAP", "NmkPKZdufTPuDAURRwkmUBBx", "NeIGnrULVMuaXuSWyCdGLvVK", "WKIHtKOmXqXLMxyNNYXOPvhM", "HNaOxyBGItYkAuxqUsPRXvhv", "rIVGdBdgbcpsATSODRClxLiw", "eBkqvTUloEyZhvWtmetPQtNz", "jCSgquXhxnIPXfCDeVgcNuxY"};
    string word = "YVuHNzQdKjvtwxnEgiqAMPRB";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> grid = {"YQudqoyNyJeDgnDlhahmruBqwvQtywbQna", "hMXqKbFUjmGqexwDqjvFIkZzSQnVkUziVM", "lIIUsncsEifHXQHyciDYyWDLDzDhVWqKIw", "IqjhSpoEOYWAEisVEAFRiBHwcTcHvTQTrd", "EuqFFucMHpOffXBxtlEXRiRsgJGWNkwXND", "utlGTIEVrXruzVPbkJzoDxMfbBBdSgysZp", "NiLvZuzBmlmHqWWCXyWKEIxvjfgzzMVxCq", "IzahpieqYOCLoQTwtjGEsZFcVyvJrHPdKB", "qfpcDRFXBDkkaLgxZdHPKjYUQWKnhwKCxE", "ITdlzlIRTcHcZurlpcYHefLSErAzcNtbfh", "vSHBuiVoZkPTbvIMvaEBVQpTXGdTCHfNNQ", "kixZAksgQzSJWsekzGSCzFzDGhuYtYxtEK", "oItgMfQYcwDnQCYVTvnZoEWEHiLjbNmuqB", "ppsmLUDmNfXewaYeJlUiwUgHpIvWjQwhDF", "EDNiczveYQUViqBhxXjGOVlTCErcAksVQL", "RXSpPmJTwcRJJYAcumrysYLZSMXnIWgFkN", "FfREndmhxVzBrjjflhEWJKrXTjmlfShRqf", "iIvCkGccXFcimNxlLMHcupgRyXjtWsKdqX", "IDanGvMHURYSFeRIwDDDxaMoZgeMZEuapc", "FTYPjdMkpnxNMMcEmxQrjqdccbyrRyxgLS", "ffWXlkIlLYjJhFjXeDGQSMlmrZUDebgfHj", "eUeStMYuoQtEDPEgnpMeNlOWxulzsvyypC", "sgGWwkRDAUZMRmKwsJJMUoHteOTFlebIiG", "TgcsEflKfnACSfITbMKLcHTRmtpeJlipTs", "glPwOqzFdRuHnEYGKgxgLOAiYashwMiWFI", "BtnzdkBfiNBdptdGQKtktLkJQAEBUBYZNH", "TvUkimPLbNQsucmnHSBNQSbAYqCaOeprHO", "PmhuVVBQSSvlsSpljmOEnwdXjYfXKSvzEi", "VNCIUJbzKcakdrwMoSaapsmNMnSvgwamYg", "HSbyaOfZWIbAUOsHGfrUMRJcELzFdIpkrl", "ojKhaEdtcpyVGvTZzCsqYFPwLJBiOHQrIe", "IWATJnXvFJFZYhiHiplhFXOnaKYFryNoDY", "MqMaYZhGeRKvTpDUPcuOdJPljsOZoOZUfJ", "tcmtegdAnkobjDQORhSTArHptxFSLRdMMn"};
    string word = "tzjIsQoYFVTdvEhPBKirwcHaGOeJpZqLyC";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> grid = {"ValyGABWXbVHXsjxpmYYsLeqQpwBwlyq", "JehcBqtpYWhgExKUOfuYUQFsvELMYepE", "YlPlDJBhhsaeddpPUvBJcvVaTMAUnPhc", "rYmfSUdXGxKyrEKAkKdhJfjBxVHaOwfu", "itrBMyWHRSziMJAqNYFPyeylWDhzPksi", "ldfQeOutFyYNQwmcxybXaXEdIdZtVWdD", "PHKKlwJrWRODDNPEqiaewuVqOwBTUyJj", "tGydBQiRBFuoqGZXWRLHPmtqCSVNsrkF", "oVChSugyLEnbTIEmQLNqtPrYHZsbqJTZ", "MNtlJVXEVYAVnuxfJjQUTDRwRLLPNnZH", "uLAosRhzHCLQLmjBaMeRGbBRfxbEhugC", "vqggjYRCbzqJgQCYlnPmzhnXYARmyYgY", "pzCHpLbaDwmXhnIsgDrGKpXHGoOikjsP", "XFYysBNbSDxGoBSHiNofSWfkcNcwuXgX", "dKgRgiSxQItIAovKmqczHJMvzhMJdeSV", "jMkeTemrIhEfHMTkBblmBzvqsYXHFdMm", "zCCeVCuqJRHBITdLduMgLaqgkJeRDDxW", "AAjFhbBUEfkxlYpZutWjVHaVgONXCjca", "TEWCYZDmOCwMVjBoTQENpYdiyWFZIxsR", "IPFjdspRdYPSiclGohKRAsqxnjmGJweg", "HvqjkMSYmZFObOaaROZhvSLJZuISLqKx", "xBFxNPvYTrQvPRCttTDQqilppzpFMqFs", "UgOZGGADvLfLNLozZaIoWtQCLkRxEWLT", "wboIixAOKHUTpvgQcxkPmwFDJCUdzRTw", "kpnfWfxsykGsaVahPHvURVvRiQdoTvEr", "bTTtgrIOxRcmfeDRECOCfyovAiQfZcNU", "QcFsmcVBgGJCskrnnoxGMGtSBKolAPmG", "SuwQXdtLZeTcjaZvyZjveMqbdPBsBNrO", "gWsymzOnpSIkmyEVMUfciIqMwFUQoQty", "WwlzfWJsUesnKfHevWszOCgRraDgrMxt", "LxdCvoLLcKWACpDphliqIRXTXnRrgelf", "FZUytItSaPRhJbIbKpSfQEzHoyOKSboJ"};
    string word = "bRMLqlyQXVakhiwImKYUOJsgjotCnPze";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> grid = {"VneYUgIaJUPAltwoTfopwmEFxzvqyJPKrZuLitTvYrnKDlVLg", "lJvJAcNlAhiJuLqlMaGpIKonYiCUAACqZxganJOLRoEFmefsV", "AzhMJSzBPsZUFqHLFjljxDgxscFHntsUfNeqQKphJslsSCkIx", "YMUtyaxQsyDoZfXwBUNibqGmRKQstFRnXsmIcPOJfHWGReyKG", "EHuhRqnypkKOPBZQtArTFaHNXSvZVESEGkfTxqMBZqajpIvUv", "oPKPeXqiCQPVHZuPggtDEjGlNJBvGXfkyRBcbzcQNYtrWWwoa", "IWhTEkLqeqSliyJDlLMQmPdPOWrrQSzmeQzFraeFrBIMHRAUM", "BvUbCnFOpAtZRczyjxTIvQzmHXFxRMkhDNExcSnchVMkZSMvo", "iffitMwUErmEnpHaYVXYKVkrUdoKJrEVgbHuiYQpqcCIOEWXh", "CskIsfebBYLiMaoiIHcxLACrVDdeFZXpWSnxEyOWpfrDeBKCB", "qSiLOLZeKGnZcNGvcvyYsdctANhpBYhfTGqAWDZGeuYWJReWR", "hUCSqGRENRkrpFCWJqJQCctELpaMMVKilmoAwhyXQaVFzCpCZ", "fzxeSTgWSFdUqldpbtQtaktkwbTGWIDtcbxQCrIULQXtieRYH", "WjxBPQEJlCbLGTUTPRfIggZHPLAzpKuWNahQjkWyveTVoYNZJ", "UoxwpCvmOzUoQxMXsIatDxcjQAwTYmYBskWkhVxdiTrLwXFSY", "XBdldurVzpcIVAgUbTOYuTwDGMrggdOQwNQqRjxsKRMbKqYLk", "cHtmYxTRqjUrEePbhSFZHFUHijJWkiwaxRpHdfUYoGjwQiUhn", "ThdHASLOnKfeYRQoszWBwMXcDbqgjxiVpmZlFkNIPUaGruCEv", "LiKpkvKjYlKCLIGqsaeLAOvLffdhdLUJCJKLYUojIIXPgMlTC", "wPrsfdVnlPLOsCBcQfIvkhvbMUXQxWHCnjZjIQegTjCBxaoaE", "PiqABFWHqDUrgojVpYUljiIfjVcJoCbXINbTXwdInEdByciLz", "bbYrgISFITZVySBKyTCPRYlfrBURZTgbdWOXyEDuymlCYpOgc", "QLCHnlkCAKyEvvOFNibwSuvdJhCuDcTRLpaphoWKayXUNAJqy", "rHuKHHMPUXCyAsYMfaKHBrqAKmMPueQuoePtpgiqlxleBlghi", "kZYvMWyLytLgDJDSANvArIuynYfmbGjchywRORqnUPwrTuXUp", "pcTXbYHNscTiWDasbbkIVEObDqOYlPrSSdYPwXbPtvkAEKhQP", "RJnZNBBtjHlSrmUnXOPlUwhrvFbChuZOPVkqSdLDWFSQtrSQX", "vZRUKjfpANXJNQXJLozeXfIkewqaODoHRnMTXnfmDnhwjsjVS", "FLERzNloJfpDTXuHpbYTfBhxSnYoszelmvXmViYkshzbuCZbs", "ZGWWGEdxrmJzfOdzdLRDONzJWHPnCRGjUzUXVFiZwtXOGcspW", "ymjqrppIdSDRYHUfqYBDySPMyxNcIBlNqVVwULsVdOERIMtKj", "MBDGosChEOppJUejYoiBGRTTCIhywgaZjoiGDIwoBdvUPCTiK", "nkUOWZuzZZNOCKcgENxIYlcxgCJtfNIAzRyldTmbFNvwUVHzb", "uPMVZOaTMIlPbWtknUdRnzTFlETNzfnMHgRXsOgzOZjfbdqyN", "tRUFxAXkFgeHIRTdrSpStZpSIoiLPoFeiILrwcwCSgbqkpBOT", "DLfyFzUsqoEjwnqNNJhaMynSEQEbabNsVNAvCZJAclsSlFGNU", "GKMNLotAynHiziiYveqdNLbJpuBBrqAdMqJkdBprjLQDMyaJd", "xTIDarjYjLaBXjuRgnDHZoCmzTuOXkyzBQSJCNkHkCIsaqEiu", "TmDCvRodTiInjdqeNhLkiHZxbPiSqsxTayrLJxKRHzPXdDukm", "aePoDePwIwIqOGAmcpZRQeTZtlrANvWGprCTCpiimiNYfIxuI", "OAVumbDuFBwRmwtCUWHPlCYQcGFEeOBobVDnsuhNPwrjFvQAL", "NQpQumASIMYaorFEiuEbepRoFsrkiHmYtgjYvCYfEULZXErUF", "gNgaTysKgWBJdhmrfRnBhGICdgyDTlLyAwTGWbltuKthLsbyA", "sgFzwKGZhdMMhzWGGDwJobqoatpIUnVFFUGDnAAwbWxUhePSt", "KFRnhDcvBuActbLAtFWYTXDluvLFvQvDJTveGsYTzbjEVNLve", "eQggQPbgoJxVBVThROgsznqQoezdSUtrYXtIbvMMVkhccUcdf", "SjhjXwmcZeyEUMGIDEjycvqYTZDfchcgKMcjCGDSCXynrzCuw", "HsLdctQGBEdTSkNtDDmjqWkVhauXLwqvESFeCHWxMMUNCHmqO", "zLMElhifqxeoxYpusFuGPsBeqRllHpMPOulBuMzEADDZnmnOr"};
    string word = "iAOWQCcLmUpNEuxGTDeIwhdkoaMvHZVFnjRYsPrSgzqBbfXlK";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> grid = {"aykLPLpfvmigXJyhQPOYLpjpkGrN", "ODewxZhnttzfRBMuvZxqykUvPBlA", "LWQhxaTpNzwnrjBDickFKogfGNZv", "TxdjTxhZWVKCrPnhDqhLOkbNzhgh", "azSHJvExnNCmuToWclZhlRkGQqFw", "LoqJxBpMcUPAhNamSGEutGZvbYYr", "ZVrwzZNbpucCBxWYNdxGBDsEmCPP", "aFDuWAevXLgndwbNKatCTqmxrlcH", "ivgTGMdVqlwFmzKuDYILNsJUrZJu", "FhscMwGKzaWwSPpcosjiFyKOqmAC", "TZDxSOheKzWsHdAXUUvoaMfcFUCt", "pLDtUVqufDPKZTCBptSgeaLFQMNM", "yDTgyYIUVVuomPhfChBnlSJaLtks", "JLDuTYoOCQGFdSPpiucaUInzXivg", "aKnXRysTKVioJNbIfvcSLRiuuAoE", "nvgmyQBIPLUXjhsAJCpDxEVqFskY", "GFxzhxXCRRZSxGZLvKdUiQfvoXWY", "zbUKDFfQEwxCVOHLuOXTmkjiJPoP", "EsuSqyiGpivhAcSKHXBOrwJXcvOf", "WSFtXszkgeCsqybgfFEISsfDlOFJ", "tqZQaXEbmDsjdcUFuMBeJyGgYFAx", "LBgWXNTDdFrfCoOkjVKmGIuSRVEs", "BsRYEedhNKDBvTUXVNJlOJqnWaBD", "JgljONzxcwTpWdEUIBnuomvZKdRQ", "FdJAnCjXKWmNsOBhoiIqHErZlTpg", "zwkuRyXTSqdrJAGjYAcBpvfMgcNW", "xSyFDhtjcizCOEgJgTqMwVNMrKis", "iNgShFTPGlJAzcQvamEHBWfqZuUD"};
    string word = "ZsUtBCTauKhYOAGXNdlmvqcPFiMV";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> grid = {"vhViNhiiEEhGoWkCrBkQqZvnEEDR", "agqWsxPHiwQcfHTEGZPRmjinWYEI", "YkBmGHwkbjReGsWBCdLpLvqjPXet", "SGHSykYTROBTIqUXNTtKJnpAviUa", "AzqkbXcOeRxVjjBSHdwZMSuCvzxx", "PIkZfbOGBewYyFANfoyUhYCxNJLw", "qLXRPYKOeohMTdZrunAQpDtGcwBV", "GpZexdKbglIiBosjAvnuKLxzxZeL", "KyXLPkCwLTmNArdWMNibkNvdHyEn", "LOtnwQADcZdPhBRurMqVKpGToYeX", "rqcUFWqSHKmHyZNAvbIOQDkzDlMl", "gMkVpMtUnJqmSyZEcCWzikRWKHSX", "RepxkaVIYzvXWegfBchSJMjertek", "evDXAYZdNcAGjSvXYugkCATIOvrg", "rKaqSJSMmdjymIGsjEUBLXszWvSd", "WDkFztpNaiaPNlcmTqJzwbykmbzr", "eoCsgKztxgCckkyMOluIFIThsCdz", "loWhhJEQykfUUcOrhZevwdRkcJWv", "jaZggkloUBiqoNVVssxEegEPvJKs", "QrFMMfXhXQuprfILRACXosPMZRAj", "ciqKOZFjqxXPPYFyavHkgfyOenlu", "xJURdmyeptGzYGntJKXQIcLUgSFf", "woZcRkJxMvXAGCSlzoEdBBmXntDM", "ixTdKIbaouFWVVXDdeToRaEygmUD", "dcFfFtsmVIIQEMLteCZHmOTiVIPK", "RnDyqikAzUaDmOCxkqvXEhpxocaF", "CKsPaSrEQPmDwElctsbSBPTWBMPB", "cPVpauUVrStqygjxZYAHBrLgkSfW"};
    string word = "LXAVuYOpMhoPwKDBdrntcZqRTGQe";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> grid = {"rutBAYQzDCplJNZnSeaLVhXHqOwoPsl", "HjlWHZiccHBWIlksEZWOOGSDBNzDqmc", "RJTnlZlBwtgcStjRSrgKOLkceAHhfAq", "gRHEGwzoFLnFOqEhJjxXWbFfQaIhuKi", "EYFCgkPtNyVOdpvushwGrifUHbzZmTz", "CmWziPvqGqKDzogCQPgQifVAxPzmoud", "FtMPWizeBoyaDTmQvpgESLXhYVjAnOB", "fIkehZjwGqflOfVGPdIDPkmOgTcyZfh", "jJrIGPFRSlfHsgAVlmwmEXoSqQipzaF", "spWFlSIowmuBdfyMaAMbycnfCHbdBwM", "mQJNRWHcuOhfDekoiPpaxyVztdAFLEk", "MhxigXeoPwQHqtpWDvVmJCZYFkGaNBL", "lTVbLawNEUkRYoIOvQcGCeqxpsfrByU", "jXdfKwuZuRHHrzcbXLrparjcJXVBCUI", "lmDNVOogZcjuWxtJKILUiBYsqXFMvps", "jLpMhgjrBgbhEEdrBRFzDZYRyZhSIUj", "geRazHDdAuTlnfbhFjEqVtKokBSNpOD", "wYjkDdCPrEIKOiVzusfxtUSXFboBQMm", "hUfRcdIrFsBavjlypZuWEMmSPJKOLCv", "pUiWQkKeqTrajSgXxMCBFNmIndoHtvP", "gmzmekrnvSxwSUwsfPSeXIDYjVHyGzy", "hEQmKUCnxlYsXjmaltgWzmRYOLITYRo", "qBwIoSevApFVRUKOQLzZufCJXHtkrhQ", "jNeTuLohcFwarOmEqnKWQqGFcSIEGiw", "DwTSsghdUlbGCWONyqYpKIMxZXfQHEx", "zTPUsxYjyKvoNFSHQWnZGRkAIbiDgCS", "eUyGCKZwosumxdOfBVFJLQvDTWEcIhf", "KndjTJNnlWURrnTXweRWHUMezKvwKDb", "lAcUYWdqasQRkyjnDxbFGJiHkrznGuJ", "jlrwKBUHuWieFvZDtCpycaNxMmXgYEG", "EdOjikGCLFfPkAVQsjDwTICKGsXcmyO"};
    string word = "oyfBkivjQJqSUwcbxOLIsGPMhzlDFmd";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> grid = {"njQxgDhgqpZIwJXNHtbuUA", "lEaefZKFrCMrHoPhWlUsqz", "AAqFfntyOHOuGxsWYyaIEH", "XMIjTBYtYrASVxdWewUtsz", "tBuWrNorKfdOwPiEprgyhF", "zFMgvaxUjnupwNUyejVqYP", "NEFUYbpSFdUwUPzJlKtKlo", "bRCmqNrKfUtEdQWceRzAOS", "HkmbJgyeewMAcUZdCqIpeF", "qZmIFeDlHehCzjxePUrMiV", "mJnFNoBfJTwMbGrzLYdCvX", "VBcTpFMORdgDbwJNOgaWuP", "NRmpQfVHDEPOZwotRJFbFK", "FprezulkwCyghZMmtFKSxv", "XqTMtmjokGiLEOxJckUrag", "ElYnKskDUocDuVqdXDNUZH", "ejDzENxwtCXhpmcPLelfQy", "XgYZxpyjlMbIFLhmUfTERd", "LVSGgrzJgscbEwxzXHqJYq", "nYgEKQZYSMTTiYpxfScZEp", "BaRvtEcqykPCYKmLzOWVro", "ybvKYLyRoccSOqvNToFuGx"};
    string word = "StDgkKqHOrlwJyfejYUFoR";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> grid = {"eJPIxNgAueFiS", "UKDyFxtgbjhPz", "XEYtgOkZcOcZg", "xafaGtrkAcYVT", "ofVKqvKntsKIw", "LGspnpRLCdQtU", "ZBPOJEqbVDCRX", "cFDQCKmziYyHV", "ODVziMnlLoZae", "tNiMumbBFJsFx", "cQvdYBEoEWWla", "YrOlLiAuQadxl", "kGGqVhpPIqUMY"};
    string word = "jknRlLtScHUeC";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> grid = {"LvKAJrpvxvOUMpGohhvGdAZLv", "vqlKDysNRUeLavUltgJRBRvfn", "UodMeWdPmWsedhJElvxElgwQp", "XemxCwWKkdjFYTIBxYFdxETGq", "kVoVyAXUuVsIPRHlDNaJFMgAa", "DQVkyEWiAuJQEFVfKtuygoaiI", "dnIXKEBCFhuNFerWhEYgCLZEd", "NJQuqmuhrHmBRHDpAEIwQbaCK", "FjFaaemZZJsjuKZtXlfMiigBx", "eRLUZcwfgrTXStgBQIGYXnuNQ", "TwRHDZfnRPVSpbWcsZNQctESH", "xpSQQNucnjGakrskHlOHErxPz", "VdcWimvrAOZmHnfEyKNoPmouM", "MdMpEGJeyNVEsMjqwWQTvCfzT", "YNOPflsyjRTCglAKUOSwLHbpr", "CikyyQvwqeFszmTcVkHzawzjR", "jDwcQJVAEfsVTxxRhldswvmVE", "anaoXNFERndYbcmhYRdONJKof", "KnGvUAasPklpKUOeCRIafkAbP", "hcNdePSLvFWdxBbLRewbhKtFm", "ihzFoTDdRxLPQEzcZhrqRTseU", "gNenRVUSTZzkJCdSOxHDMfekB", "cXygWdEOhpYctJCyuwnUIxdWh", "SMglbDpThYoDffplUcmbquCXS", "ojHeJtFXTLdTjstcajFCDBXJW"};
    string word = "mpoHAbZRlnNOceEwBJLafDMih";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> grid = {"AtHgfAqGBBsLSCYGKduTtOLaVJMu", "FNIRKkhevpwQzWcDxHsauXtyOqDh", "oChLEXdNnfcsVZjsgiZneohMqfcl", "jmnuiaAjFemOkqRaopEkSBrhVSNG", "igBKtBsZitIaWwfxztGjdbYuJbRz", "QaOvvJBFLYXpsczaceByOwUYpzdB", "HuuudvNAwUXjlemByZpeRKzBiNAv", "kDceohuroPYfcBnGqKhhHfRFsRnm", "ElqpXJcjUZBKiGjuRPYZDzCWtwgM", "veRUNUQINnDEWRSsNDlwZFHXoXjw", "XbOFmALmuqwYFrHLDszzVCSvDpqY", "xqAGSfxmFxXzpSqJafqQIVFoSkEQ", "eLmqFkEzsSAdfaOVuiISYPqiQglX", "sEAhBmjuUJKVPBKGgTeHyWDISdWp", "IdHByCHuksrcOnVxKzdbfHBCOhIW", "phNNaXTMowFMWgxTZpAmEJIggBUH", "wUoAbZflzMhNnnmXbIvXCYXnRFiV", "zXtXePXIcrxydBmzrPtPpeiDMohS", "uThfzdWiddWnHrgAgQFUsdLTnuTD", "CAoxkzMWULQgZIYAYRMgmlGjPPBd", "gOAFsbnwAWBDgKOowjORQLyfXCHK", "lHCxPcoAeVMbMvgLGmbWhSFdQtrL", "VkqKIpbfFHfUCpCVjcfJXQVcDlwk", "DKMeHXZFxodoPmwZuHgGMrNETjag", "cBUaZpDETTOiOByvbgmVgGptJivC", "OpiGCVroJhxxYozdmUrinaIrdLCT", "KIgWgBUJXQVSTjpUbgktPswKDEXc", "RQLpwzkZDXmFHlMJvuwoBjZRLVfs"};
    string word = "mGwqIfrbRehTLNOMkgxpYduisVXa";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> grid = {"CBDblHkcdZIwxpiQsKoMEuPNLFXvfzRSArVqtJnaTWmUVeyOY", "NFeYEmXKnhrPasDumZxVubVxcgwkfSNUWzYJWNJftuwpANKNv", "NxoLrRkYPpDvmSsMfuIigOKTUabjcwtAVWdFJZGHnBQytCqzh", "CKxpQePebmipSsvANRKhVwceQaqnMIeQbkuLbBXGyYwoXnPMB", "CFskHSoKpNuxirjDnzVZLbdOhvgXmBAaweTtyQJMRlWPyGUqE", "jLobnRdOWWnBbGCOJLUmTZKTlwfGSfFhvwXNHkfrjcRQbwUBb", "qnNFputIvKLsyxjkrMOmfJCPezXRaWgVQEHcAhDodwbSLZUTl", "gOQzJaWHNZLlAPbsuyxCvXrISTmdqKMpkjiwUReYtfoBznFGc", "DpIfuGaNSqFHZneQLRjbiozhyKvXTmCwxJkBMYdWUEPcROrlA", "wIvHEyTDgaOXnCYmABoqpVFJWsjkhldKLRUGfxzeMSrtqNiuc", "emTQChJUbFaXKolNGkadixbLPCAlCXindSUFgQfkePMHQuIcK", "kOQCcvSfExFbTqeglAhjUZmGtWYXHpwnzBsLKdiNIuPDgVJoM", "gDyFwhMLYRgWJarSAVQHQjhkrAMcNZiAruLouTYNdkoOpKQln", "TVUaKJRocAgLUzzAiaetPGSHZuhsKJnikMTJZBaqsffLmKhtr", "MVrkFElYNJxDiWzIbLQgvOyZPApTtcmdeqXRafjnHUuorBsGS", "GcWbFADwBJrxymELTgRhezMUjNZIiQkYHfCaVqtlopPuKOvsX", "AQNZWgzcnrBmPqfSJxYRvbDIijXMpadCwUuyhVKOGkTsIHtel", "lUrAZWuJCerTJZhbsriqgVXKzLkVEFodklxqbGrREfAWBIXdb", "ZKgawtamoXTSzuZJMuUKyNJuuwmUdkTFvETgFbkKpQjsPsPNK", "LPNoeyXjnzJvRaOkdhYslrBmPqYTfAFAxQLVTnUNZBCElJMdZ", "eJbGLNIgDszmYQBhfOUTWypSCtoAuxHjkcPrwanFVqdixERMX", "vnbUksVxlhEYXweGCuBcWQdiHaMzZKDtSfFINrJLopqTJmjPy", "oysmhVHcknabJDKCZqWzGFvTdOBSIRrxeLAuMXUYgpiQZNftj", "gtObDArmNyzWjhoJXxiLCnwkHYuQfVBGEFPMaUSeTcqZddvIp", "fQUiZsqXwADemhvnoaHTtWNMGdbjxKYFBVISlOJERurySckPC", "bZZoPREMTZNKIYjzAJiccLcvYolcAkuRwBfkTAHUfvVukVzJG", "jNkapwUZfsICtLJvEozKPiMSbBuVOylmXrdRgxDnQTHGwYFhW", "jtxwRfiCgIchZuzLvByOrNUVbXTDFesankPpmKHGMJYQvodlS", "vosWZSrcAapXyiBeHlnjCMJwfOPEqLIbTuVkUmYhxDNFfgdRz", "XhuajRclmQkygznfeWFdsGoYpEVNBSbvTDtHqPMrLIAKHxOiC", "FODMHJDBxzQKgRWjEoRRutsTLfxmdIjugBkSHvghNqNycytyE", "uWtLxOEpzfeIrwFSARYiQynvcbNjPDMVCUdqKamThsXJulgGH", "ifabndhYApWKzINRxeByQOvVuJltHELcmMZFTkXwPsSCYrqog", "KSsUiVFEQmaLfYkrAyuMTzhDNZPqjXObRpJeHGcxntIvMoBgW", "ICOTEyQKXcZfFdbpUsvRSnqVlWkmHAaLuJBjNoGhgiDtFYzMe", "qXitZnYQELedoUlkRPsWpurjzBANxfHDmaIFcMThVwbyjJgGO", "cfYjsMOQLvJpPQJEMRUfrsSrmbJxLHarhSheoQASxrpvWJFDt", "tnDmAksFJNdBcGYawbqKprvLSWlCZuyTPIVojQOHzehRafEgX", "xqGnnGjbFNaBMFqJuYEFbFymkyVkVXikVoketTdbhOqFioPRJ", "DGOykIhgfFkPLrJsXGbqoEjPjedbrJvlnamyeeKODlOnsRwJl", "SNEiBpPkgXGAmebsRQYrlCIKudoxaHUzDqwfFthVMyJchOvTj", "XfYBQDLEMbcwdtkePgzvTKANZyOFSRnoGiahurxsUljmeJVHI", "LBuqcnKgQyzYvCZEHJaorRspbAdTNUtMODxGPiWIXljFnwemk", "FfKolZQmLqvdWXcBbwRkTjISneyszgHhCADuEaGNtJPporMOU", "cNEiIRgkeYhDoaubPqCdKxMBFlWjfmpQsUwXGTArVSJHDznvy", "LjmluqkKnwGiZUHPMWJNgVcDrsSTvReOIYxAfXpEtydaGbFoQ", "VWzouUZtkrIqXYTajROpnlwbsigdvLAhmSEHCeFPfGNKOJxcM", "HrRvLxeZgDcTsgxNBLHkmgyOFlAzFxuIsndgKirWaYKWTpBvL", "fxFsPktaqRGyETwrjbVWiKBClQDJconSNAhmXMeIHpYUNguZd"};
    string word = "QvjsfbNLywWYoTBDXRnxKZpmHGMduPtJiSOVqahIgrkAFzlec";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> grid = {"sPAydhMtXgoKjtCyTCzOKqPUBNd", "RMaNiIYzPPtUKsBehspcDporQSj", "TjfJXyhEzOfyfDSsWWrStfuLucL", "EArTPvvHdbCSBkxKMEnonvzHfph", "MjCVTXDCnGgpwQCXvrTpUnvMUqb", "NtwqvlrPIyCAaoDVpnKXfuseGRL", "lRmwVjdazieCbpuKhgHcTWQxLaY", "akBxTJgSpKhvLsYyNDcUmVXWPQS", "kSICBRTDTtHKVTTzveusZIkjpwu", "DSvRplykjVgArbcqmxIhBYXMCks", "JOcdfTxsydvJMqhTbPPoveeEcDU", "PMHYFbrINjcewfRLJIUhxtsBpnm", "CSfgOuCwskQmjcwnVIvtGJHDNhe", "HxkLpUQcMRDocfivtPjYFZlauWO", "SZPfECDYakGWgLlXsUjNHFwQoxr", "IVZtAdFuMSoCayKRewhYbGTNgUq", "YEcsUaKgZtAfFMODVTeGizbJroS", "cwUymBjlbagQNjjPtSBzogsRIgl", "tpNlOQUeeazkzUFHtfdffwqZklO", "eBPQPGTJlkvLBMaSHCbiIbkVcfo", "zmguXjlOFCpiNuLsXCEubqINZgc", "ipqIoYUTufvctbDmRQEeTlOPdxG", "giKlSJVxPugrLMkZRjdbXhDvWft", "wdvdiimNsGSuiyTXFCpuUZHosmX", "xiLWhuCicFHANvMtByVqwDGSgXR", "OOhmyNjMQxwUezriPkGWfCLMaAX", "uhaUiJgRjHGtnsMlqQoXATCbkcE"};
    string word = "aCIeszctDRuPOSgNkMEJlTYHiwx";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> grid = {"NtBihQCxQbsRoiDRJnlY", "YVvuJZDSiVLHIkIJDtpL", "TnqBitrIfReYLDZnRnOp", "kWQinoySqnNFAIkBlqAd", "EmHKibgEveFIgYhAwgGh", "uUwIRBHZjLsduhfWpUdP", "vIXLfVMaayuCMhquILVn", "tzjIQABLHjmOtWNeYxcE", "CRPxWnwDrpkQZMEjnZSZ", "PbCkOGLEGtcARamGPwoS", "xuxptVIrZaQefyKVUbEe", "vMdYpkAOlobviruiQHQB", "cNMfmssjcCPuGSQFCZiH", "TikLDCIDNYEKyHNTEamg", "VHSCRryEnUisPBkDeWjw", "dkrCjSJPTTGpdHeNuxEa", "klWHVTeGIvKlyNWpVPJw", "RxaLWKYuEHQfbGFbejzl", "HTugRfcfLZXyAVuaGYxx", "xhZDEjVhxGjZNKHOxLqR"};
    string word = "PCwskjVWUiSBEDnyeHrR";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> grid = {"taKkKFJmalZvjIZPmPrxijIqtVas", "ZNdIXMTLtbRSlgAiyEBJqpaFYnrv", "zedJEMnisoBXKuRrIqCYywpQbkGO", "YrtmJXUZlnSQPOIbxvEoufzKMyje", "nsINEztlGOXyuTeqdSVUJWrQLAPm", "qFGorUcJfTWPAipgmRuBsVjILXkn", "jSYQjKfxlaPSPYdePTDmPGkDeQLV", "bLTdSFWpZoIvNtqKDiCYxcHMzhjQ", "tumkQSsoOvcqWfKyFALaZPnzCUYX", "LrZOdQjxNUSWTtwXJEnRoBhVuKlA", "HlJrTsSpgRwqjTkUcxRDffdOybWf", "hMIZOdLoerYUoxmyKZjLRsVhKLJE", "ANcLvojTvcZovJVlWoXQreVMRmzV", "CQsHpMGFhcwliJabeyzxkfARXnOT", "OLnEZxtXSyeWwaPynaylMcdKaWap", "mwlGRYvNDvoYDnVfjgyduhNsQMVH", "GXNLWnoRUiJclOBsJTLZvpNUXtIM", "lweXGTYvMEPiZjIeyzYHuoIrbrMM", "DmciptFoxKZtaXjdITiDhtCYXIVQ", "VmOunbioKvEWdaGNBQRFxyprgJeA", "EWchaNTyZRlqPVqBOTVQvZoQaIXF", "pqigtlQWFQMQjMcWgPELfQlCQXHH", "NgNEPYBEzWxqEqCrbhjuKGHqIqJJ", "bCaLgSykwuSKItkpGepJzuSQHXVB", "PyAgxFbjoiKMWIzucyZTzsuELQbg", "gTtKLCKlebsBtIrEaBxIRIUsUXfl", "VjRSvdlqiWbXDCaFgYOMTwQPZsEu", "vybrueJLAXEPcpWsizqhYnlajdDU"};
    string word = "NMYytuXsOLGDqekWEIvHSanQTizU";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
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
    vector<string> grid = {"ZniLjJzWEafMtBeLvVYoHvrsMVTQoMyErRNQyOvjwEuDnXkdFU", "xNaAcfBpWlinFshZwxcAkrlIEPuCRAyUmYoxgHqzygHQmWKkLk", "FGEVKLMEbbjMTPjtqyLxqRTODgewAuDgcEErNFazzksgZjDGAh", "cDddnILSfydOVJLkbgjMMUHzdOPvuZLpQIelKnNpGBkrRUBPjX", "SFLrlgibhLpMLyQNzdUTfAVBHfiHpJOZNfwFdUfkRqLLlciyOS", "mJfpWSKwsZNCwssqtWPjbSgRCBLlWnalKKDCRtxKipTbQYtUnQ", "mcTGQRYVeEuGVvJemwelNtsXIExoKcmIJzyuYhFDbZmyYLDwVe", "LlsfqjaokHQIvjAcpstwtyNmJvJefKTMliCTSpclpyBvazuRcr", "bthjDmuxaruvsUDVlQHPgfBIBlIzytEWasOvsBZcgwDaAwZCtI", "VWMCRsHoEosZlpvHKBXyvLjGpxEXXTRautVgfeXNfRvdGpxTPY", "fgXKLtpprDoHYLkYaiKvTJzKKMRDrSjKwvtdByRLSbGEcRmmHp", "cdOmwuwzKmxAfMwgDHxISBDXicyYOqSqFdgsLIrhmOrsplktyi", "JOQkEPhQaNKrHIcyizMnJQyULVaPFzMnXbbOuMBlZtcUyYqRJE", "JRqtHXXYWxiCYSgiIORZuplbAhRihrKusGuLZCOraxKcoglpIy", "hBuMUbrnuRVQNWTmDdNsjogcXvwgvRlezphEFZmtMRUIJlECZP", "iPcaICPelCsCQRCJOkzcGVXMTqUxJybCBOKNeNsLhDAJLDMnqu", "gIGixlVKTbwyfLNUQLybsGTHQPNnbYhhoCGcmbCHNYCOhteuQW", "mzZxmFkPmrukjdubWETGFiEAZJfoqsEveSitbAttXbpZbQVTuM", "UTCFXhnOGBSbuklWQnENAEHylaGdjbWxVksevogEDyJxMKvtYB", "UYvQGpEjdrWiyQrlKVJSWMxgSWfmEgeGOMFniGdocFlozUCEzC", "euKekVIMTnbFufHPyobXdUMKmxcUCheYfxzMnEUkWjfndqynGs", "ceAbMcRZuhywmkKKKoVqxLmDFleMwwGPnWTAcTeRFgglTNmirt", "lQYIvAmaODbbbPdRPjmHrMgoVBMtgFmFgoqPrrIzQdoqqpGTeV", "uAVBtxyDpfCfzbZfVDBYCPCKbhWuzkVipXnGtdhIrHYuHVEOTm", "UKJqFQfksqiaVUBjXugpeehynyuDtfgojqLmOfLLIhwptDYevD", "PUyEgWWoMJTLpRfMVlfVhNDboVzqmIGzygZwGLESBiZKsjgZUv", "YiUPhHDLgLTiMlzaCTODKeWqhZOexlhSdcAzAQJfAmhSxNQfab", "EjtYzeNMRzCXZqVrItuUZERaclwqPdtjhwfUaxkhvTRkwKCfpd", "gvogioTzkKCvLjGQetCCndoxWMEQIPqcHQlYEVSrkhNWSeuuiT", "RLgveZsJBOmuQGbGgUnFoUvdgfZGSEHsAldSzvPkVydXuLvHxg", "MZwhSYdcOBOgOLWvtUkeivXzfVQscxiyPypKogjdjxyRUflRgq", "ksSzuUocdovZMaiuDLWkXtMwuWUraVNBkhmkIwMfUtjPBZVPCO", "aHNRBOexGsyeUPXpDBaQQSZpYDPxNeudSTRWwPGtLPiiWwdFRG", "woRTZwSXeMWKjyMSLhFzLaeRjWgYUBZLGnkiWcDheiPhFMjhko", "pSWHPrjzKgbouKnsVeZuPGIHUxIUdpKJTucoVzpFCxWBgIgabx", "EVnWsqcygEbpOQpBIFqiwwaRtshYevbkCDxbQjQfqoEePWdQmL", "TyHSrNvFZoPqfiSnwVrBIKMrwMlwniutRPPVqalcPiefEtVhlj", "lMBwaEqSbEHWtUEOKhdLcvRDeprlVQOTqZvHpXVqsLMmeMCLMf", "FkmyCaJZllGsIRyzboQWymHAkmTpBCLNYHQBhKbJYkbtXmFcWF", "QajXJMFHreWlprRFjEoJYcDXaDuMsjubLjrXUYoPxoqTCPUeBR", "vflDpiZEabRUPqIdCowRRADmNSdolGuOxLMhjRuNJeSwIvroNn", "dXrOAGOodMSFyCoCqaImUUkOyeWJMNrrZeYDMszcKdXHVngwhH", "ChbJokCInCvwBnUhWihgmAONqmpIHHrwUUapkJHlulFCvYiPEA", "hwFcynQGnyKIxpxxpjDKEitcrcBHLXjQWaHfHDYtnTIFNNkoSc", "abxZVdtsAsuDXAPoUovfaiJkOcgpQOkRvmUICWwKldzMDQHJXN", "iEkobybUcYOwmwmIvHiaDVwxzokaZLYVEFWaTlidtLnNKXcbKa", "zpDuOTlnFOTzOnFXtestVhyLPjaNiofDMVSJXuyqECaArsNLfz", "OqPsdKAnYfIbSVYEXmphBtsesYvbkayXiAXqlSWqHzxzieIhDw", "aCplTzxZcOuRNgOTczGrOPaNxIupDUzmDBIZJmAKTxVYknQnwJ", "BxeNYBgzMOiLsmqwwpAEpwvARrnvTDcfbJJyPqKvdsOGOVelol"};
    string word = "GibtWvePnOSXCuFMJQaslmKkgpLyjxAqrHwoYIZREDTVfchUdz";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> grid = {"YPJbPsDUgadoZZsZzPJDzU", "bMNbHcMCTuJraAuCvHkvHW", "swVuRbcVigIvKKiKIBxmaF", "AbiHFuIjMXpXkxTmTqFzRv", "dybNUXlzBYMtGRgONgCtuD", "CkFmenOxyoVZLwrLQwuphE", "iEgHryVFBjGTJIaLAzZhDf", "uDEFLOrLjszGZcHxsjYQlt", "VtbKCZcXJzPxsSUuBoinXk", "TmUvYWmfifbKNvfiKYwHrj", "aKmEvkqsGgGpdYcvxccZxR", "QvVQdfSQdAgINEwYoSrSKL", "yTkyZCseMifhlqZpjTaKQC", "WXJEqBSqJvZcsGWlRdyxLM", "hTvkywSESUXEiiOrFRXfWS", "DzhZEGZbAvpbSIAdltBAbY", "PRbOGavPJrzPjLPsheWFjZ", "qIuCuFiGjZCCLzYcrzzCqm", "mwwNbiwdvBNsFeNwDlQJcI", "lGFpSzmINCIjBhLEnrgqEN", "OiKRkhkcBGTBRoekkKMBBG", "oXPGftOnxeGUQtBFPybiPo"};
    string word = "GyaJZzFTjBVHhrEfDIgLAi";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> grid = {"qgoFjqKwwfDmeK", "KPswDWUNAlPjel", "GIgtsleucjeBEx", "eHLaNZyagUSfjp", "rPjDazkRZQJofA", "XjevfwSHGrkOrM", "roHliMIceWVNJH", "dJcVuLrxBSdxJg", "vZmMwnHtvoFzJA", "iSVIncRpZecLCU", "QcuSRadKnNprfn", "bQnGaHJaLCXZgc", "MtSiPURISmWWsG", "VifPOtmrbgOWTw"};
    string word = "PZQJozDjaAkfRr";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> grid = {"RsxMdQcwkuDvligzrLXCOt", "cCDPrgEjfQRovTzGXHwkqV", "VwNaonHmiUPkWhXsEIYdRK", "rVTfZaAWDRMEhJSlUjwYGu", "gcVRjJpxZPPoSDivZcyBUD", "HtvZnqEHxmpqGZBSTSSoeO", "TdzMIUlguGAqZWCRaHJjms", "HeBhWunNTVmMtGcYFgXRpE", "xLvzkwyiRTOIPNoGVpChZM", "lDdYvhmuyIxrRWQBEcpJPM", "dwkQODIbJFcSRiPHsyhqxj", "CaupVdbZMIocfKBYstPzlE", "eZnaoQETILihVSMvtRjPWH", "lZXvInizGYhVKIAdCmwrbe", "NdMeLwrnKXoVIZPTgtfaqj", "eSYhNjayDoWCrgEOQfvFXn", "DyQJaBlUDwETFpEfKfEERG", "QmPAILGwzVZchXXZfjgobf", "gHaNktyqDljWFJfGoZwbSI", "xcRWpwDACkjbVqOaYYVarU", "wVZIBcwQsFoePpXsPVypOJ", "ZsxrJVEyhTBFIdikgnePNj"};
    string word = "PDvzKgjoqlLeZfNTWiaHBs";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> grid = {"MFzbMhtHPYLrDljTGIvXJSioaqnJxrUpktCdZJGJkXneh", "APeMJqzlhEGuNcsItYXBaLKDQpixVTHSyMZjdmORnWvob", "knSQxVlflnqIUwGOSCBPDAFceMhuVFFpcfBwzjrZABtym", "iZcKXaCPkmLepnfYGMBFbQDwtRShNEUvgNjqrIOusVHJl", "fLqOHsRIDRAoaDoPQCRGWXaiAuNCxMSQdEYQHlPQjdobP", "GcsobNilaknqCBUPrKdDytfgJYjRHzOITepuLAXQVFvWZ", "XGHKWbugjhIdoxfNaJvcyZeVpYRBTAktDIQmsqPEzrOiM", "oIEZDifvmsaPTpHUQLRzXSyNCFVgAtlKGhMOBercYhwxW", "ysMKfLOEaZoDuGekpFmbUQYhXBjgwCiWSyPqTnNAJvxtz", "nOtwKYbLjVmXFjJBXoJVlmIkQTxCfEfbwJwKcoAjmUehK", "GHBcEZKBoxZFvnTBZMtJbymHWwKQgrIfqBaDcOgHxdaAW", "iwlydAoyQPsQmUjlJYtJCxeoJuLncEDQbXQUXLegvCHio", "dHiNpZsqobEcnkYLIXAUjQefWtTuPFGJhZSBvRMOrCwgD", "hTXPvcYoBdUGNZnIVxjKrtlewQEusziHmGkSDCAgLOFWM", "QTBGwOcxRPgpmiavFjZVzoLbSuNtWfeUqQyEDsJCXMdHr", "bvGZWUFCHrkndJYgLAXwKPscMtiOmjlfoHQuEpyNVzahI", "FIJzcSwSkvaHKPuZgugSCiOKULiSjvcgqzqmbivzyEsZN", "oBxxDbEUqZjZMGpmsUhkJbJPSKIGTDtDLOgIxiAOQLNIW", "lwHoXkKasicNuUhWftpOLzxrSqmQPBZAbmGgyVnedDRIT", "lrZLfJuHxsScCtenEMNAWjahkbFGgKpYTRoDIviXdyqzO", "qZBVeeIzemXcivSHCAGzqPfLSvGgjjkGBufbNHXQoFYpg", "KrXgoMuVRewgVQvAcGGqwXQsLkzOtqFwDkznCOiBceHHs", "fOpydZeMHgLuoNbYEmFIPiBcsCtQJRnqACkDvxjXawhlK", "gJqnIXdUFHtxWbcluDYwoSCerzPGjhpQkiLvTmaAsiEKR", "pdFtWkUBMeDsZbAgNGxLlIvRjfXPYQEVadCmczniOqrwu", "chkpCQxmokotUeMXqUWQKXYwilVXvJjqdvNnFxjnLNSWk", "kbNisZEzvOydUlcmrjItBnXTDFHaqCopeUAxKMLWhuRVP", "myMzZVaGgptUBKFoSuYTsIELODfRdHhNjwqxJieQckCPn", "mIwSZUzXqJLhEVYjdsgifKxHTWQrBtAMurnoeNFclvpya", "aNBzorWNQHXSAlCdTVosRvYBJnFDOnkEfPqukNgosjcPw", "paLtlNeCrIkRjsDfbzAxPcKZywSmnvEUQguhoHqVdXMOF", "XIkQLhCeNgvCAqDMxNbNfzfocJuknmzeLLZeHHRkKfiVw", "doataybLPdjHYbQeLqneNjwIIkhOiasDKTmjmivmxwQgd", "OyHNfYmosXiGIPQulpjFdUaAhczgWqxETlMVDwnrbJeSK", "VqhaFBugZllRKccAKKfVpmOqmFlKsAlkknZxmjbpWEEjV", "lEGSRCNeIxPsnWDHOzvgLamfAbopBcTdqqJZjKYtuVywM", "xzrfmXPyCwSpJWZnbUDjAsIFqOukRYKvQcNoMGBEgLidc", "IhDpBXRotdYfAazfrOuygwLtnOruHOahlFymeStfrORYE", "vYZTrCZLTYEcKGICcGmuzKVHrrDuxRIDwSIhapoAWnbAp", "GjtAfYIipdEwBuXbvmNrePlThVOHySaKLAJMQUWkxoFqz", "QzZhivIUgKObrPuckXaRseSlBLMHJAtyVsCTEwqoGnYWx", "nbRWJOrwuVxPcEkYlmKiCjgQIqdTNevZtVFBMaySUzALp", "SGWeUDICQkKqiZtVnsayJOlXgHfjBAFrMovhRTYNLoEpb", "SjAnWmzDNrPlAGTcqHeGrkBlybhWIvUgypdwxuqQdKiGk", "pnIyGBDdAKYLmOwzUJxfuqPiHoVrvjksXaWabgQlRNFEt"};
    string word = "tQRkPBMNHcJXIEATCurneSFvwdZVihqgaULoOylpsmzGf";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> grid = {"UjcKhVsIPCdbtkeLupwmADnTZvrYWfqGaOSFXMREiQlNxJgByz", "VysGANFqKZyogqqZmjiaMsWFZSpIPJoBovrfwslcygDsXIehhX", "GMhjJzWwwMLjQZFEpqouJTnCbAuidmRatbXqAdhhwDYCUwcxqw", "JkUdUmCwayBTpRqPbpnjikTVlcJMkvmryeBtgEOXJgjzIasOid", "qZspDekJHRPrFbyNtdacfxUiMVlnhBIYuACzmvwKLEGoQSWTjO", "PENtlaKCxNxXPDgeNkZACfaCNrKHBnggGfkNEEYaytheyjynbC", "UYlLDBnTvePGRpgjAbtOkNJVZmaduwhzCiHXcMrKsQfSqEoyFW", "ZdmcxBwzsTlkiYNuOUJyRAvFKCXebjWDVqaLQPMhpHSfGEtnog", "uQgAweFaXyvqxMVzmNfblEOHdpBsGKTtCZRhUIWJoYkjnrDcSL", "PbxtzYBlfNAcXkxSvyZsVDqibeFdxETQURqHffrjNWfkwwqQAF", "fvIrmibkMsNJcAuVLwKqRYHWUQatzXZgEPloTdGODhxySCnjpB", "WEyWOxnwqVzinCJcaiqFJTEVfXLvEjVjYUFzBrAVXhWnwCSiUP", "CehclQyMYtZdokaKTNWEuxBAnmJpRrIijsOUgVzvfwXqDLGbHP", "AbyxJgtoBQrUiloQZOZuHCsOCPJwfqpzGSaoCWzRNHiDCmHDlS", "HxwEBInjGPKVNMdiJlhXLsWrApfDgCSOeqycvkZuoztYQRbUam", "HVPGJUFCOXYsaugILnytrEbTxpAiKmMDWkwdQjohcvflNRqSZB", "TdyJoBblKeWVGgZnKroguymJGTJfDbQnWYWdFVxEBKwXAdXLAE", "JfAYFhxGjafhdAxUJVbJwRdqjTmneIXaqgVZTnsnufsqeYjJqA", "ihGUmzbNopLstgdlXAqanxDcuBfeOYTFjKQVyEISkCrHPJvMZR", "MWnsqryCyTvMtJwfPrKoIKgerogRvdIiXjjAVbdSGFoeQLsqXR", "lmKEEVngxjoLbyLwMlKtAVfrbWCYYYpWaqKTjCugUvkyVSOBpe", "nIiBRuhSQzmbfJnovdiJzSReZmXSkPFFXFKTbMmbslrsCwqHNI", "gFnABEfAdYJSSyYVaLJrOxzuvpkmQamFMqSSOHEeGRlMOyZydz", "IKJpoxUEQHTaOjMYcvmniLZydfWNqDCBPrkegbzsRXVGhFSAlw", "raUMuFldHfAoLRzwmZqXtsWbyYPjeExNBpOgkTSiCVvnQJGIhc", "PSwNTPNkyVJOXOAXwnRsFsTJTgWePgecDozzUYBqRgUGXzySyQ", "GDUqPGKvPZJIpZqgnNyEKxYIOkuumSTcivBEkcufoTJPbAyDdP", "jRYGPlCfyYbrrYWyxbOLEkmOPBVenttaAveRndsnoehdYgIwxi", "DuoIXJhKvRLGYNEkjQgCAnMZlBOSxrtVWUmaiwfzeHdPbFcqyp", "DnsmHNRLeFrGPVfiAJUZOopdTWbazxKljEyQvBtCgwIMucYSqX", "fkdcLtTklKUHEgxEQxQMFoDYBMwOUjOhLnGCeKbsvSzMsXTOLw", "VtjQPrGezLmgHsODEfXnlURpJAYivkNcxduTqKCaSyFoWMbhwI", "UOHDMVAasfBsXbfRAtQRKltTZIpfocuIDPPlPbeuvFGaVjgqeC", "jLHoThVeqKGQdXuRtAzYNWPOUDvwspxnIJcfkFmZigMrBlSabE", "dVOovYuNCnUjEyJZKmMzfhawkxBRispgWqbHFQPlItATXSDLGr", "qhyBCeKIroXZcraVsMykykTeFoskgLOrusJyJPSloNZARubwHz", "MhcvkbHuvaiYFLtYjiUrRpPBcyDQqYAGHTnYOJLSPZidRCBHGL", "WGVGfGgtgiLIodTuifzztwhoyXmTyRenGfalMYnkgQEfWqXYmF", "XtiJDiDJYGmLqjratHEnKnACkNKVerbBcRByISBxwCrIhqQuqI", "cUJVOSWQpLsFymahwTAPuMblkBItqEjzDovegRZGYrnHXNKxfC", "yJLvYmwOVhGZgeCcoKIFbpPDsWUNTSdzxQauHnrjBMqXAERitk", "WJzgXikUuTmRfyvOPrdAlEVnZDYFBwHQhxoMCNtjqbLaepKscG", "KJEtoNGBlUACxiQYSIFZmfTDbrpLhsvzMXeVWPcnauqgydRHjw", "JDjlKQyZPjYglkmjSsZjfWTFcFBDPGRUBdlARIQuWSGBrVOgVf", "yKjHfwAbvoUChMYeViqczOELRnQDTalkIuXGJBsrmxpNtgPWFZ", "SBnIgUhkyeeoptPwVLGzztyohxnzwssaYYlpJWLPurWjJZvruD", "slIWqZvyuzKypZTLzjwysnmQdELCqWeniAXmAqPMRTSzJagECp", "UQtMoRlKGbIryVfDFimaWBsLdPeCgAhcJjSxnvXzYZpHTqkENw", "XhKfaAJUQIoZbkesRLuCpSMHWtEiBgryqmcPznxVYwOvdNDjFG", "IqSHJBrERVThuyNsWkoUjGbYwZACDiaPOgflLFnmQctvdMzeKx"};
    string word = "ZoSGdDCFEWTVxkiulYHOmgzNwqABQXJbaLspvIUjhtenrMRycf";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> grid = {"hCtoQaSYpqdAXmqYZJaUfhCwUgKyGHUWqmGvwzikEHKcanWwLY", "qxgJrxklbeJMWlojipnKFlGpLBxZbJULPQQxWyIbtrBkUqVCaZ", "AEqjnXrVKIlkvnGXLqjmFkAAhtvldAeiGGVBLiYMjhIUpSmksg", "WHzBtEZIsOuGKjpWxvdgdIpzkRbRYsVhJCWsSGUgVkgzPEgBzC", "ZjoFPZKunyXfHAFIATWEQskcrnVrzaGSWOveCKlsprqdMXMKnt", "vaMCoBKbeiDhgfHqUgoILpQolzqOnYPwSTpatmJQCHpxkjpCWx", "oFAcodMhhQlJUvTNcGibIYISQEdpBWbzJjnkmpVhRdeNTkugiT", "zDXxeTJcMfRRBJYPoAVdIzMURrwJRnOjOvjNYOLiPNuYmtEZyz", "CAOibSmBQCqAFglLbKmZfDMeXhnJHiNfkThqMZZJDavuhFftUf", "jLYWzAxPxTFmhkBBkoymwGRPxPZVcqStikBUfFGFOZZmsiQlRV", "wynqklneuRxyZWXOWEHNLqsMIoqHtXcBlSJSgkKLAKNLWzaAxr", "GoJdPogDUkQQRushKVZudShLVfuzaPuJeqMQiQpZiqxKwlJotP", "bFBsVNMZvmFUsDyfskShTrRIPOowTLPxmpeXKlfIyIhsCBkwNc", "BVXfSvKpuJSYpLVsyLtPCyqZzYUiszZTcBmRDRscaLHDlpjAeB", "IAaPJrmoIXkYaCOoTiURjZyOaKPfOekKxQYTyUNGBuObSAJLGa", "coxTjiezlHwlidvFznERbKvVdJnEpunMURHjpbodQQEaBvUwue", "SkKmlOhENBJvbYJpuxTUVbInllftSvioEfTGHfDodAjnndAFru", "OoOYbbNUOYTVTszkFMRRGteyfdGzPyxsovZwQDxPZvUPrscLMJ", "pTZZymIdOUFhxZcHDNChWLvqjZDBIKedGBNcjImcJgaAfGOWZX", "xCxDZJWfTncMQouxYwzSxQWfKIiZlQsVXGuDbqwvlciiZMeqml", "mXIQxhFNPzfaCHLUBCLbZaeFhkfiXxtgrazLkaudeSmfFweKvE", "NClKGzLLzMIbPxhTntJPxeLCMCDSkNmXDBDmBHHDfnVJuuWbBG", "EEiXaLBFcVQytFbddsDVvEYKiarXQBTvcKEgIxyFKsneAxmhwy", "TSPkdnNXzvNcObPZrdYXDCckHSvdoouDpstfqBbdsBPXQVgwOb", "gJQwrpymwgALnKRQgbhoJjCiFWYYxVaYeOLCahMCMTcWYKLaIA", "iAygGsFwjlqGJOtyQRFFRAcTkcXZfwSmYDxEdCdSuFLBGHSzFM", "McGexgytFwosmaNDXyMcjcZJciVqVtXpBbRMncCdHODrcJBkEs", "yxulAqlqFaiPyBjbqBAWbmqhCFtwKOKcAJPdxMWQgcXqbZxIVp", "rybviRYGSLiSIPMiEQgnCnBjwLKrDdLRcKkJluXKrRfCxWvSXL", "UexhgKunJGwJlTQmajpWHFWmOHItCcJuRLSPRrPccywReOZbDK", "KhVLqCOAaorKNrDVpevruTpxHpUeJSDAPaaZFEOLGAthyYCVHk", "FrQAcWMTKcodSVAaJUexUXkulwHUvbsbjtbroPvgLdFoReABdn", "kNMniVdHEjdKfwkrHuKwkgPWUTqDAgiUridlrdqfXRGlKCXEhW", "ttYRFMVsdSaAdcwlhmfNOMHseVmbFUqOEkXphYjHkTswDmGWqh", "YlqGBcpyGFOfzSgGOrriPiUXsUchwkiGNIfWuATwbldvvLkopD", "LWlyNeUJmhPPctUCNOcbydQtcQIsjjqlzmrbcgAhzxWpOrLMKO", "nRjVtwtkhAuQLNSAGhsVKHrdrXelgMGkjmyAXTRPoWkgIUsrbU", "aXLMwkPjfELYMyittDGDCVJDwvlymGhnyoAKsnBKWIoTdhZalN", "eRcriyJRaZloYGEvRSxMQxVHpuoSeZeCcUFiJSFcYOAMXIGofo", "dFnHbQAWqdWFGMeRMHbtCUQNRAmayDqNiqiYzwnimMlQEynOAF", "RjGaJHgvTsePjzCzlYqDQRWEijUwimcEPOsoPWkyFoSjjNbtQQ", "XaHtQPcilDVkeXfMvFPsBPLYHDBzErfPFAlINthjTlrSVQrhTi", "JAOIFuqQHKzWoqdKVZOlaOkalMdkrIZZrBcVGJgRnaTOgoxDjj", "lRTblYCCGPzFAhIJwlXXLuqRHNqRWFbqUiIHZVtHvpCZoRdQPw", "ubvSrGXSBpypkUrejIuYuvMvtsNNuRhaBkqyVsEHhZbEiPVeJS", "HBKUztrMSuPTEQZgfzksiJzQvyRVNEXeUROFeLcJwVMGLDAHSH", "skWOXIOrOWRZVenSeflenBPGamZIMhRQlXUhONaixEQtJfwtcv", "fenptUmOJtuKqRaumaIEUowbQxlmZlTFgUKzvXrHUUJVNgYLkm", "VTuuyFjgZNlxrExnCXNlewHllbcEUTyynVonAjQPSSYyHaMmoR", "QoKEHjrKdxCdupWcSPwkFfMBheUihCqHPBgOTvzQNQRIzbjZYI"};
    string word = "xlbkqIPYgKwMActFfuBWDpjZUTsCOGXhzHnmNQdvyieaRroEJS";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> grid = {"keEkWVZWVsbELgrxPrhISNTvEgYHvgsKVYdfYGfOkMnvXYTlNI", "nfMrFRRdWZRdgZgOvAMDUmtTRHKwmcDmPXeSxUzDlQVhmlfycl", "upOXiIlePqCObQhmMByHtFHfVMPMPObfsQEvnEwPKmIMjmcuox", "yxRDlaDcvkaRlZKKDuILKPoAkaxPHEwxKHlcLHyAvFccvEgSRD", "GNkhDrOxXIcwplogqqszFuqTyBcdxTMjMiiZXxvnnKUZCvUGei", "MgcBTYpDSzBnESNdskQdrKuqjSyQCyLJkgwNFbLPYcQRpiHZzF", "JWhaxAqszXyrjesSbReWBoeNOjnZmBGGjAfNZOIKbpiHKIgBEG", "ZioVmxMZchngYUtGHEkVMBAIMLMuvAmzGfzoSvxzAgxNUwiWyN", "IZcEbgArZglqQynIdYSyvOfGWsUBmzggujPdKRmYIHLjKwHHGm", "vSfgSlxjfVOjUVLmNlqsNAaYndTaXLRNqjosZnBjgiGnvhAxiu", "HbfpcCCpgVxTnQxzWLZYoJRIqAkrhlwMtyYearpoCUJfYptJuV", "KJaoIcOuQstQGDHQutEjheUbQvXfcZTwDHsaquFKcxAwIOZKah", "zJlrEtXQrmLmcsEmzZgoUkNmTjFCeiJplhVIvQZrrudyEqPnZb", "iEQigKCYcPgqIdfkxsnBQUnAZtqciMYazhEtYKTMzWMUPSnpgC", "APHDvNgLuJNuudyphdAiRzcfrxzVSJnQyvZznsomVBEHfdYTBL", "JdVuukfKZJzQTDULTFoAmsKToBVvDcarwWwxYSECtEgxKJbeOO", "fiSLoekNYIthfuvwaolxeRxfAVbzXLVSvZPuutVLCfynqQIFxK", "uHwgHhsbHpuBehnQFDRtoxPQKXdoNQbWeLvFnCDsuJmqzNFQwc", "rXteQzFSqWnKCxMPAeXaFDXNPOjCjRMvAfldlArABIafPJMPjn", "VNMmLHhhASKWkuRsybDwoIIWboHOjNdBJGUpVinOBAOFtbkavT", "lvGiPXvOJJZPFWyOfWpPljdztmSedualxRvZyoXKadDUUhvtfZ", "arfZCFdTgxwdibCwiMYMwECtYPhJHZAoTGgGZWlwrOvuDUvbmp", "gxlNpULwSOwIZdBsjTHhatJqHPCXorxCCmdFNJGoYbtPPveAIf", "BbiaOnrHOTjFJeFskpJQWfDFUpsgGuBRhPJbxTjYPGpjWELEYJ", "EQLGNQMEIEIFPAzwoXweingameRCoSuUImAxWMzLVYYLoSdCLH", "MgoSXuzoGnviyrdHKKKKpikECLfCKqqOmjXNVqlzAyfjLjeslE", "bTXgKdYIsTglsaNpRSvlCGllzheoVTzIakwNLYaDKoTpuOidtt", "fjtCMibUNyzQDgWImCNCclwDxENJjwNcoqvjONGwBvsrQFpmpr", "wipWrjaaazZTmuipwJdFSqWaufaoSJthneFYLpyRaThfWLPUdQ", "ddtbAwuCQZlHwgdOlPccPSbuwnoGdxJYUSBKaFwheNbNslTvnR", "pOyCVDXyzjuFXQGBQfUXJYMRvZOArEZdBFakaVNPrSlXaChqkv", "jooxZTjkIjdPaKHgCVtbchhsFjrmuxeEXhBZXDuKZtwOolFRha", "IbEbYOIPxeibdvSGrvimopLGDAAYkMRbdkFLAgVnqLSDjpiIMg", "QptGhmkFqTququlnIQrkNCQjpuDzKPJqNSCmOkWkpPzgFdMLsj", "mWvwsLEzkDvdrEWyGaLTArFJhfWcOnunbemiDyNtjZZrUwUkbX", "OToqRMPiQgPzVPxMYjTnfymRdTQnzqtyQdBkndUXMqkNdDoYVo", "KKTzGqclPJAfoeiiBHbZrcZcSsJWicYsRfXDZPGcraKoMfrwTd", "qSWheyAmMNjZAdKXSUCEeHVzBzIfEezeHeJIyeRCLsjMEVHXAw", "xeCnHvJLVgRGItYUFPbiuXOEsdlZazqoTpKfhcNmkQjAWBySwD", "UXVfybLRMogFRBfEEnmvHaiwIAGbCalAfXDfwwVlsnuHBemjKq", "FRBUwEtVfQznWCblexOJFgzzgupzZMbViELJBIZgoCoKBwlrQB", "pKOcaJJXaQAWMFpUOhFNHQyrXQEUOyvkWJuPiZszXwWESxezUP", "IkYUdWCvozOnBrwqtyjpmdjYapiqTFmLcfiJXaDGDzXjHKaiXS", "WBDDJpFtXBeNtaadLmVSiLOsiJlDKOTPpTtmzhlWYeeiWqNcWe", "GFBtqvPgBRVrzIACpcuuxvEyGegewdAuZSaeeccgElFFXHKoDY", "AsqQemvbguByEWwiYPUoTxcGKDNtInRdXFhOklVpfJLzZHjSaC", "YweNjGQAWnBPNIoHUIxfobGjekLpwkfXroUEamvNzrPsujKhPy", "IBHSBfBJljLBhLMQVwGUNVrFfovzdWIFOmORdXlKyXrJWYcDqA", "eWSRtBCqMrrrvQzFJzWqeXBycwZeDixZEkKgKLPOGkqsQEmfFW", "rgXPkZuBYywBKCmmngfrAMSzNMuUyaSiFWERIBvADhBrQRyOCU"};
    string word = "BONXCGSZPcaxYiFvwfWtKguRsEonTLmkIAblyjhqdUpJeVDQzH";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> grid = {"tQQBxJCHilHRtPVgfgnKtmSTUXFlmAnDOPlUIebAelHKfORyya", "PoeUnZMzZSegBYumpQuExrPMCxewQkbUsayJuoHKVrWoZeNQeo", "uoYwuJQyrNiWyNFjZUTfMehhnCKAGXDEUmcjgqjZCQsReGCKei", "nWGRiHxJwKXHaUcggcsTgGSCuOXiDMMyRogRgptoiHIaYZukrr", "gXDdGMJwAXbCLvItyxyHsqkpTfuXBPNFkpMPUreQdTGkXfkJil", "sRNBufZGJugobfSeMwbuKkAPdyvxPgVOjxflGSLdkhArhBpzeE", "sQOKUeZmBypMmzBOPeIkCgIJhiHUTUqMGCaFGkqyyNaRRSgIVz", "QpbfNAlCPrJYtXPeNgNaRGNABIaYfthzcFUxLjChQanTgHSbeY", "efIacLoiussEIWvsKJLvmCOqiVQfIisIPKnSJWEXYSMZcNAdzW", "aAbogZyAnJotfARLrCIrEPfNumLuMAEaZgwZjCmeSnexuAqMlL", "JcLmHGUgEjzdMGNzqVOgTaWtmboPjVGyDxXISKDaaCYQaoiPWD", "zNRkglwRsTfrNcYrYqLLkjToHPWvuNLGAurhWUckAbDDbVfIox", "FMWOVihPHfWkMQUKFoQhNWwFzHOnZDFihZNOSLBzFefMdMKACf", "ldXkplnULZvKIBGzzvBvemXbSLEghMcqBxIqdsvGmkZGWQjlnC", "rxyfvTWKQoPLsDzXvdGbSHqKttGGHZpipZipYhdNILAYoCEMpU", "jWeLZlspYUhlfrsYGBAFoTcZfgAknrecIPBuuVOHEuqJViUCNU", "gFXfVjwjaqIOZIxhAmiPhViUFGsOvtTQqkSbdthRoZVHKPVmIE", "WOfdexOxgOYTyOOEIeKtZnOmFzPZFntlzGvrkcowLakMJcoIHM", "lQUAHMiWUREXimblJBgwjcCepMljcpCJShmihFaOvMBGmUGJKF", "pCxmppsXKPtuitfZoHHPylQrSnVaskaCHkCvzausNrmjTzWNGW", "StWOLSgDhxMbMkhGUFtwJUeBTYSpxhdZyRokvIQjOOIhBqFrSV", "fATOmdZEoWLmmTQqTEajQJtgeaIcaKgFNXkevBguqFoRDEmiZL", "uUuouNMFDAQIIKMjwsQmcLTXcEgJqYPVfnxVIzfmrMJYClnrII", "BjQtqghncSkwgpgXembrGZjcjJdLoGRbFYsCZJIScuTbkJsWoH", "xsZPkeZlbLqBGjHIEyRJOHRSddjMltligDeWSDlMPvSSFtXFhC", "ewToLMEhVeDaGFJolWaXDFIzsRmtgqQptkVmdwUBZJRDinDoxm", "zeBCelkYWmlDDHodVjEhvMYsRvfmWyYQXsZztXYWfPllHXeCvo", "MDChpBFTNQjjgeLHueTlXODiXhJBOUjJKztKPdXqWQdwMghyQr", "GQYSeQGemhmzWhnrWapwbgsnylzFAdfLnxGNgmNIRmwDlsHoAh", "oGDLLdBsGldPWddOHbsHFUYIRWCIRsoDEEdaHAPYBqnBEaYiaQ", "AiPCZGMVfQZUgwTKLNyIziKaXBMeXrOEvWzfHHzPUHECsbwRQE", "scdDIvAZkCSiZErFxPyZfuRuRkrrNySkLxTBtgwVhhMQUIyQtc", "jeXOAtocqvrAgRKNaDWpVRmHBpByrfuadKYgEGVrGzZNnmacRh", "MbLQAQNfxKCFNulzCpPudfmGwNxoUOzMiSAwuYrgXHyrQucRMx", "cTLgJJzddjOvdswBQKcpnMQYvSkTLHkGwmpLrTJExrIXrLBcKJ", "RgigOiaOysRqYJmpmMIgrFQwgrtNCuXZCNKAplFCgJRtSROrre", "eOlvFUVsYNBumiHKQzXtEDcbywgIxkTJjGPMpoqhWCSZrfRnaA", "OUywFYxMpXTNsMDIOEVowLJVFFnSEhJzMjjDguTLshSxjWLduH", "GHTHkfsoSWFcggyohdhfAxzxMqcQdMxgYkEHlORvzKiEzTxHui", "jCjVrLULjzVfiyqJdXIypsCRjAwqwDmxeAHngPktTDJBpvMXHi", "arpekhiaeRxQmieYjBkdIxvWsZbhixZlVIQGDRilMeZRNwvQVy", "YdGhKpcvvTNxvbiAtowoWPjDWcRdthHUaRucpNSiwhhMOKtUrY", "frkzpDitljcVYoWqiTRMPwtyZsyWbhykTjPEpMAfbZodIkIBSB", "odgBxQhNIYnSsLXnsNTrBshQyTqDYhADlnRsaZWnnYDWxhreqz", "ppBUqJGSTfapulpCSOnniubdauiVywwumoDTWfZpJkSDPDzvKD", "YzpqOVHkXfKnxCAhXOOLqSEvijDHSNiWQCFYsvpUpVrFArTGjt", "BJjbphdBFUueySkuntfraEafPeURKyBOWhWQaxncHMoDtxdFFd", "PxKyDTLbORyyYxEKRYMMYLxLkQhbkFWKxJbyTQxFloWOqpZCGU", "ZbsCeJorzNGGoaCVDhnvLtmkSwTKzzKgJHLtPbybtKQMyybxfw", "yELAKWmqtdUZHZZncyvAlVcjoDpCerrabIhMRiMTDNVqGFQxQi"};
    string word = "AXPGCVSNEZWJBUqpwlcvDKsxFjzbOierknIoTRHtfaQuyghMYm";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> grid = {"jgbnrJKkRtSLrkOwlaqdCrvErSGtyXgrnrQDHdNQLuBNzseogf", "ZLHvsIjXotbQafykSnCuqNidWGhwAMgEFpcUrPxmTzRJDKVZeY", "oiUqxtNgGyavfLZMYdsSCFQzIekXrBnjDbVcupRwlPOHWJEhKo", "kRzLXgFeZaSfTtiYCRRmraviHBuIHWBqxZXUvvwHzzDsCelqBI", "aaXLICMwYOyKAVZpRncFTsxNvuhrQWJijeobEUlDkdmtHfgzqG", "MmTHMyAlroNOWfjIFBeUbYJQqXuEzSLKpPRCGvwadtghxVsDZc", "PpiLlCGHafbYThPADvNOstZuQReFBmngUoXSxcKWkdqzEIrMwy", "YiIzXHRIRNfOmgqQYMdJqQrACBVVRuMAmpKahvQzZTbvvsAzqA", "UEHbiGRLAPzBMVUQWtzszgnFhdEQlAwiuEAVGKrzhyHAYtzJOT", "KBpxVCPbGnWASXrKTtzZfiYFaEcRshoIOkQjygqLUeNMDmJHlv", "xHtUuZGBXEeAiUsEdqUsvyFANLyLfKMahQNdSfnAARgFZOQNLP", "WTCqBuDGyvhfVeoUKmnMHQbZWFzacIYdAtwXlgPpLRSOEskJNr", "NuTRSXnugqlmkTgdJyqJMMFEQnuiqNuoiGWJOJCceVuKUsTVlT", "JEpTgtCzlrhkQXiNcVnwUKyufMdjxGvAHsYIFLbZSPOWoBqDeJ", "iWXLfPNtheBuRqQFVIqfWLyaJpasbZnYhXPYgBhvJHWNEduQyL", "BkNNJjJpmoesxJWljpWBxWXCAdJcdGwoTLrrrxQVAMTqrHPJwS", "bOlQujpGXIVbRzJIotuwcLiOFQVKudABtDdFvzzAswAElOsvHT", "SupLqNAZWejMfaRPGstbYVcwJyOkHEhTQzBvoDSmirKxXIndCl", "QxtlUnCPNVsEGyaZdQTbBeMKDjLfzikOIrwFpAqSYXgJmHWuco", "cbKmkBxUfoheVzYvNXQRrnTclLDWAasHPOSCuqGFdEjigtwIMZ", "sERHwLcukjapTFUxgfTIHnUNDqZYxTPoxcQEcZqJuvNCQvqdks", "fzgMHGOPrtdxXaJpUuRyfjBcACkVQITowZnhqYEFWemNbSiKDL", "qNmwKuJyKDSjPTzWfjemvCEEdOCmkxSKBKxsZVUwXwPfksKUcs", "ALMuYTsKELaPHQAxZgbVEdNUHSKkSzurHdcRGRFFEHKYNCUBIh", "lLhqXcaMjdFzlIJZepWAPkfVmBrQwioKsYNUTvHnuxybGgtDOE", "hRlIykxqFZUApuSjswWhcDMKgVPOLnEoavYGJtrBbXmdiQHCTz", "TdJHUvyzQvmdHbIROlMYMoReHhvTupyivuwSxwKFYyCOMqTiyp", "deNctlWoJZmnrEaqHXsMUFfzGRhDdVAjuOBCKkpgLQiYIyvwxT", "FKWaGiVedcEBjfHIvwyOpqrLCQAulmFnUsPYDbMRZTkxXNSgto", "pvMymKQsCSIxaQqRXGsGZskaiLtwqHleJQsqsWcymblpCJaGvt", "GvTPDJCrgisUtwBKAFjWNXlYHSEMVkdGZyOpofaqLxcIhbzRnu", "VSsbXVBbyIbQpdNcjbPKOVMfJaRUoDhnkeHdlYMDVpivKeMJHY", "EXfnXfOJqNNJBEWUoSJlNYVsKNkGeVWSefcDyJADAXbgcqgBkX", "gQlSrvtqYnjfCAebMZXdmGygHicKVkPTUoIwpOhBDsNaFWJLEz", "eMiWcQkbtXZudjqlrExCAagYFSBoJGDnpUIOPNmRhsHfeVvKwy", "DCVlupkjgnPipZEyvhLiGTuDTBKAYFUgTCqVVyQStfnMxtVgNq", "IwXPMDnPnqJbdsDqKOUkrFNXhcEHrswRpGZUvIjYMwByfBcsvY", "tKGaXVCqOCefLyRlUwjqpZUMPJuWVuaRWMxtHUfYKdrKsItafT", "zjBwrVzDVEyBIEXmLYnXOoYZufvNgpkLUAQeFdpnwBnZkxokgp", "uzLLqGsgPVHHLbDZzfRfTvdkWWhLFPuQbLcaPPAplGcZCEluOc", "XnEHnMSdBfcAYfAaxQtGYMiAcygEetKnLTIfraHsgbQuqWPxlN", "vJxRIhugnkrWLCzsZEGvydYeUVolmXiqDpMwANKjfacOSHQbFB", "HpdJLJsSPbqhSSiRVryzuFpetCOOhibMtPPQSgzUqfjZNcMjTj", "LHlsxJuPjmMCFSXqOZWEYDBaTvGrNLVIUztpKQkynwiAoghRef", "mwmGaGxvnYUVdMTHufuTpcGGDjgSTtuOFjlmfhXYJYSqvpsRoc", "niKSAxWJVNpZYLBPaThCFwfkdOIMcGUQgrDHmbjqzvulRntXso", "RnVENaAsqrFaOFMHNQcgCNmbqmEgsHZfTemQwEWHcICFMvYmrV", "wsHrUBNMUjbNFHSveIocMiEXACidWHrAXIXlEzQBgeviQowjKi", "ybUwrjahCAxyWloemNPzDuOqTViFLpBkXndJSIQMfRvEZsGYKt", "OwCNHcypDiVlmjXPvfTkRKsetAYzOoxUhZJrLQgSquWIaFnEMb"};
    string word = "PGVMohDbfJOENIeYWULqpRksvxzABgZFltnaiyTXjQcHdKwSum";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> grid = {"UCklmiwjKfMAdaxiquevwDhuVDhEhqyBIuhZEZYqyHqJVorSaL", "GthiEAbXWyzopfSLvecrgzKxlxLsuXZlKpBGeyzycPyuWfymLB", "xnyfTsjlLgBzHVEpYjPjlPtDRQPsYtWeKdQaTdUGDoDUjOdjOL", "QnUQzwQuivAAPzSKGosXqFNjCxMJfWggajvTqMcKWdQGCuBAGX", "RwwBoeDwSQrmFGfuabqeRASQOEFplSFwkbiFqsftqRAQFDAvzQ", "DXeYBpKblEnicVwyzxmiGyicoIPwvxYPHlgakYipjrxZvNmkBp", "mvbFKzueYdhEJbYQqRCQUqIRKuKyImfNnxlvyvZRvpcreaJVOW", "NAfMSGBZxhEsStxPetEoEUWNJOSFBjDUuyYTpOBDBlFbiWFtMV", "qsmqBbcvqPfjrzekeHkYWNAKGHkJLCGqgagsNNFlwIBsMnFfPz", "bWQGaVEgpCixaSVisaLkmvYSeQsyPATxvAjIrPvMWuRgleLVBq", "OaWUOCeqruGDMfIlLfQSuXUXwdqurVMZrerXXtChpGwARJNeJZ", "PVKvZRPMfcHvGKEYFkhwAEvGtLnfQFCLbmTQmSROastvGsQlgB", "mOuyEdnoJTpBtRFvjNWMlchasHAYxZbQPqierVCUXKgfwLGSDI", "edltYadgZKpQHgBPlwrFVTsfpLvtWfVFsifhcpmZwQKjkFNwfC", "CtBhqKMhMwSInLNNEZyhxgJMjEDdjyxBjZjquGozkwulwjLjZS", "pfxVlRVuPttWWqXDkApnIdciFdhgnvPxITdBITkoAsUiEpDifO", "VVjoJdyLmkHxKgdekqWqriGnYTIlTrizsgCdkkQGXLeIHVqnje", "ozMISdxICjtdqPraUINcdWkJkYpSNGLGysKWlwOqUmnaXHQzdJ", "jsGSDIiKUiKnweROwFlfMJLvcJLVoJOIBYCuRDphEdkEzUPIMq", "ziZHgErTgSaOOYokcEROopjHhNcTJLsvzRhKoheReRPWmIwBkt", "SQpwzYhFYHCjLWdwacMUKMVYAabTUgUcYUZbZlaaGaChdxzdef", "rzisgoLjrxURxZsDJvKbQhQFWfKsKdmGRDBmQfnbwJiCbbcCvZ", "ZZReghAiYVKtIvYjJsiMZlfZyusupuEiQWfFwqhNpYNYgdjRNm", "MuYAKWzOXAflNmxWaNJmjGdyTqIBHINqycWfVBGyDaLThCUUAy", "BgCCqqqsPUgQOTCzfKqZhCxVBCttAPBCQEuBsRNrQRzpfMEcWW", "fcXJOSsLXWpfqOWOphkCPfrEiTKuDntTbrhfqUVbEQWPchZSad", "hucLZAHuSeKWzTtHQlDasBTTvodvgsbCUtonlItRtOddpEtgky", "KEgDBUmTjLBRIZlVCOHLDIwpzewkCHjYJoKmXadVExpOqLisOm", "HxTaflpaLnAQhsoBTnFVnORCNvnnaOnBuOlxNnWTTVbntiYFbg", "JpAzBMTPSOFoDKTzyBHIeaFIxFVfzoADFQXgsgEOeTHVamrcZO", "yZDTxYJxgMpgSErfXrzpXVPwuutRGQzYuGOxycAJDzOoyXrsXK", "FVHkJmWmjDHHJVQDFUAgzKbUXcegMpqJCndGYEqeVZYDDYCpnH", "tYPgHfOJTpOmtznseivdOmDASLaLiTkoDKJUCrurQsZqowXzaw", "dBNROZfpjRMVTvQopLisYoBeEgRUSZKUHhgXMJMrkWocTcOzBO", "LjFdqFUOUXBqmzXrIGizaklhZVpgewJgPShvNjJatuJwASoIdj", "gIIyValNnsZEvbRYyQTlCcggIydNtMadVzZdiVgKLIIHYlvOMT", "kTsPnKaxBmQdFlfjlPWELHEaMgjbklRuivGDZmjMNvjxNKgSDg", "XGvrVXZQCGpUiRdlrDkRTeHrLRBPmioYLHABrbyEtalXuGqgTT", "lmOmUQkIJTKcWwPSHTDTfsCbmzjdqkleFVLvAADYposLZZZQNw", "sWoEHxSPzaXaFhzzTzbyNYOOQEtxxEerxJEVxWTIdcEzIRsPIq", "WvdcAeNXQBYvaBHUqJvJbQZzqKUpRauUfwcCEQICryMNskDFJB", "AvquXHvhBIdoLkAhEVcWyraqfJgpZRceCCliCFKfcuSBJAnIPM", "TISjBhgnPrESEAXhYWNApbMmDioDXcvLGFynnxHmsNvynvuXAp", "iPtWVcGCxJieNydoJCgHvwmBdAhZsNpJXNyivzrIVdVkBykYJW", "axzbbCnFqoyzVRGbKptBSRzkUtwMwDhlAXLoDHsLrBgePTLhzL", "wzaKnntlgNksRaqkpXjDixqsHQHsyBrVRIwlLKlJlQTtLtzRBT", "YQLnrYoEQzLkcwnsuMXNHtnlbHsUEYdwtBbtOeLlGFXFUqCwWj", "cqVpasIOJYZtHXFfcYBukjodPIzhbzHtqLEbHCwvpqmSKrnzzf", "vIrZMoCpcFKKzvhihmJxFZpPgwXZOKIXRkpHUiPKomffxzaaUx", "IcJxtFXyplRxllQzBgGKcLeWacqLcUXclPwDpLXulNaMSPUtPr"};
    string word = "OPyDYbwVCiSemWjoXldKTvrLnBNRuEJZFcGIAqhHxfUpgsQtaM";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> grid = {"wZYSOIsKEkBGHiwTbVxqlxBVXNuASJTJsQmOShBnxhJuPONcOm", "OOGcyMLgsoVdKaDXCQLhDyUYBhVqcUzonsKksjXBDEUrukEGin", "aDTUjJzqimYrBWetGybOPdNlKHZRfEMuSpAkQIwoxFCLhvsnVg", "BaqIbWrhSbFHYjcQBcEkziuCuzfZpIhThrtLQIGnJMWlDLovuA", "teUBKtvDbkzFNCXdxxMTWVcOQScWmIBQsVAniXWcXGviWxeUHO", "qbZsYLwDCLkwDPRPpuRecFtkdNNeoakZHffGzWdIVQeylgkNTy", "oRoZwNEcgwuglQiloHBotrMqSxaoMNxAYYTpLiwzWuOzuGmZJx", "IfFiiHYKmbYdWSWnVbmJJDzbzWFWrYHCanCqTlzvYiWfKBSBTq", "KkhoGynnuvMEbFrYFBNnkxrkqmFODlsDAhOkmpnAcqvJoYarlK", "krdYcKQbFYaHjVsuADypRaDnFkivJlRjVwvKhbmyGKUBrvvaIu", "UwiWKOAXPeGHUTZCeaJNoqKZOAWAqsHInyROcDVyiUOFLfVpLc", "MCMDMpTETFhOeXmpeUZhCmVZzaWFGQLOsvuDlrkSANRbvNXWuM", "fonEyFXtYvqCSLnZKfYxGUUuOSCjmJIGzeqvEmRUsMVQcHLCib", "VKJCvazoKxJuIqvSItpxpsUdRiQzSTzmMRbrZyTwpVFVuVzSMo", "YXTaHXanKspaJvVBQwTNjgQYckgQvGFoNFxWqQbezIyLveWkxl", "bQpuCZyIMTLwulKFRIjVIpONoOXTFzFlkkVzVvrVjxoMfKNbLa", "FHOOdxHnzARbcEPuusIAeuUtUwsXIMOaOOkPuPYSSazPgmkfVs", "XPSVnvBKnMTmGAEquFeDnidNNvpeHBEzxUYIDTSGBalOgWdgCi", "ydHQxnIgydyjkufuZFSkXtsCwPIGwwtRRHjHAVsjIdckZjqnDB", "NhxbVdDNsLtzQoOxGXrgfLOJCbAylljeXpnRdJxMneAvdwUXXR", "dLmwWuxXUOIbppTtsjVoONzzlySNYJWMExwnHtOaQUNqfdqRXG", "emkTzSUrwHCvLWJKZPiRMSHKjGNOqaFIQJyCIBuZuzBYmhBtTH", "nNykWlPdNXbirYNJOlCFgjpDcqqdfJmJxNSLeEoIRwQAEXWuJj", "CUVPZcRBTriFxyxNHAwyYVyEsTDqwnOOciPxtkvalbypgRGsrv", "RpfdGEtAImQiidyQJRQsLZYlaqIXjtGzrEBJbMIUMoOCySloqD", "gWlhFzjiOSSfwhMFwzbssmnxWyvREQmwXIeaMqyXyMNWvqPEQV", "HVElrYcTnCDWXgtFDqHQhbpvnoVUYTUdKAiHashvwbxtCsHiXP", "DvXnQBbFsvdCBBdtUkktaTBFEJZOIihsUMZAwLgwHfeDYlIMUp", "rBvFFDJEmpKXaZkpeRhZwbesyPwZFOlHMaEdGNQcNiyIyTdDbQ", "ZMKvvedhPRsefGprfaWhENYrgWravCwJlcgNWCpuoNKngbsFxZ", "cuLLGoqpEkWwtkarJklEmhgGEOMNWyPDSZhVUUUomkWaPCgdGU", "mQndtTDpvoIeSaGBhObEgqHKwCuirVskZFWlfxyPJMNURAzYjL", "LqatYViPgnfWdeCRgGuhKSTnhkZmFOfUFtFaJxNsbiawVDpJVr", "xlugRggUBArPvIQzGrnwNkiIUihXfVvVWuoiBuejLxtSlFPedz", "PxbMUGNZPqOQAclzPBgdigWtewhTgxktqoatNgfleTeNqupPnY", "pzjyORegnaPOoHjJTFfATdIYrWWPFIPeszLXyeHjCeIGVajmFg", "JGQXqmGvjOXaTxehBXPpriMvhLlFumqXYjsVKFPdfkAcenayiF", "iIczdsVrvJNizbLbtHavBJKrfVWMRtWNyXXcvKlgqlqEGMtKEd", "TYWePfhgajZJgOzGSPUSFuDxvcQstzYKNWHRpfcZPzuXoAkleJ", "jACmoJfPxZjdsNYukfDrUSlWiSlnPDekjmJCgzMEaSlsMEIVDT", "zDBpZPSyhgcLPsBJFGcAQoRFZQToooOzPKdHnwtoUnfgGIyOmt", "AyeKgCuqIVeWFDHzKHooVoEAsumESSYwzLGhfnCMgMnhbUHITC", "mFNHYhkLDjoBRzFkZzdmvJhHjoiONYroGdWLXZEwOuTmCoCjKf", "asPrpTOOeVUICnhOBMtMAuelrgmNNnnFbqpKOYqakLfUvQqhfN", "hcwjfroVCAnLZJSYjIFZPhzcFvEQcSBimSrtkSDlZKJohpvzmL", "visAxqmnvlwsEfbSkysqyoMQrwdsZcEDDBIprAZttVvHJrGwQS", "QtARFilHaDgtytuVBMKFxkpQqIvVZIVmRGMwCcFiKSrRDyhxAh", "GSgqwAFjtdlgmUouoXOnqAlOQorvOTWaWCUdFGLArZtZQcWTJw", "ETDxCjMyWQxCqwqQnHvWuyHXlfZIEULDNTcKxaKlvPPdoPLLKI", "WEINfwKkauvFhRUXWyqhSAcgYJykRkfzGgzbjoJhhGGenirqRe"};
    string word = "wtqCErihndJjRegkZYbLoQBfPWpFHTUmulyISDOGxMNsKzAaVv";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> grid = {"fpsMVSdxQBhisQulNiynLNMKXqfpQSdaSLkHtOUQcplGtdgNnk", "EPHZmlzEbdJcaIFeKxnlIYsBNSAOLTlOCRVZqeLCNChIKQrdmo", "giQUKrLpdxUrwlVuLCBSbRKKRLVaDHiZGEsyWKypLjDrTNGrHQ", "QlUybntGNxbouJIvouqXqICxWoZaeCZsbqrDMnMGDIyqAzftGg", "dQXTgmmJtedlrxlrYyLiuauhQjTnzQSmAvEPwcXIvtCYNxCMyx", "seWGcwcFYAtRQNngsWTJGvaRKOdcWkNKsovKGHbNSEMVMXMjjf", "KwgcjsUUgCPniLPzjjuAqzGiiOPkgJiPGiyztREJmLcXdDYCpJ", "mRLRvIVieLNQtytUTLmzxZyZyHnDYMiFvbmmIOWxDxOLVCdJKb", "ciuXZcONqTXmGeGkhGmznfkyoabDNvDVTLinHJQLYrnTBjVlIX", "hDClUyutkEDYbyIAtuYPLDZqgxJmHnDMCShWXJktkUJklnDSxF", "wVebniFlxUsCkmVwuUgylWmubiqvUVPUyUTERoXIsJrOqsKRZJ", "RGOztLprJbujSwAqVvFjaTAvHxsvhXLhNJQrgNEzgnYhiVwLEK", "VITgzdQoVtklTLJQLsFsyogCdGvxdYyytFtwrlQpZqjgEyAqNu", "YXmxuCYwTOOMZICteeLdanRiuArFbjMvBeZVVuzqvYkBkpQKSe", "NARvpUhTlzzIYsAfpNjIJQblBxchNGXpOWJtdKjDXSoepHSbmH", "qnhpSAZIMJRFPgBSluyyfilUndCXxwLlqFnSKMiobALQPeXZMy", "iyONOOyDcoohESyPlhvDWJYErhIkgaJwwWqMyrfTceWxuakmAZ", "vtCOMHNvEowOgCMowUXnLlnXjXNdlrhAQyxptKkbHMUFhomiyq", "nBnCegagWdBdUNqhRhyxTgPofmOJZIOTsSLDmZKWvKiZgtzaUG", "PWeQIeHaUbqXCzFbFGoFSjVoYsgqKFrLtACiBlEUoDdUaglJGe", "FBFaLWwsOavfDxRmSBuvfriCCWjAoNMXDCfAgrXyVvzMobZivL", "WgGhWXIbKAnzjSEjiUuEZKoYaFLwOpsSSelbiDxbgQSiGShaRz", "TZoHCoeuuIrmMthRfMYAGUwNPMKBPLncaDbqkWDkvGXKrYnwjQ", "lyRFNxqfyDiaKgVHGtRtecLRMvFOjyqRCfeyGuGiVVxmUMFqvf", "OrRoGJgYCOgKnTaDrSuMUwBvsiwCPsJxHQjmFIVrfTNHOlqALM", "BcFWBDvKoUZqJfHXaCDeXMcfTcpTLbEIGXoVzYHQnognckTVPU", "ArqSrKsAZAVvWASxTjoKeyvyACGFyZrBoTXCpIcMAWFRRGUCJn", "ZoAqaFGjarIheAiLvVJCEOJxLMHkKuyDtupxylDzKXudQuvlOW", "yPcwYznepZYQljHFVOonkqjJEaexSltbHjMvKSaQIcBJYIJwru", "jXqLlPxCPAMNRyipBMoMFkpFzViDEECriaAyQIyIvdfvfOuRWe", "uPeBkZBzmQEiycZNuoFrePdCJlycyosYUzIjiAaGIReAviEOvv", "jTZLflOQCVErUDYgXAszaudhSoIJpRbKyNGBwcWFekiMHtPmvx", "olcExYKLIYpUoJrGfTdkBhDYkQBCpdOicnggcPsImFaNJRbFUf", "MLOnHQkXnRCfFeSiUZFdUShumrhWiAsnAAUHVUtrUyvbSmiVDt", "zoeiJGfPzgWwheqIHGkDvXrlSPznwUYJfwdZRFWLikISmhtdDh", "DgAuXbSQAlTVOTkaZhMlzsQHpqUwSxVtGhanGuekEhtzDTcRCq", "kYPVQhDOvzexdyoERenWTbNzlNoycBCQpNOqLEGdUzPEIfPWJA", "rnHsTqRBhfysmLBsQnJRXpOLvdMuJmQWOSHwMRwdzgHyHEHuhH", "GjXkPuMcFyjzfNmBfxCrFVWIGDtCMcEfRYWwPvGBUmpcnqWrYX", "tBTJRTXqLZAWvHOdssTPYHHitrSkegJCVDSynxoxLbquxcecox", "LqZADEjWjJfaHieVtjIUyBUXeKWyOqvHKVKzWqqddBwsWKIOPu", "IqlKqkoywUGaxfDcAxVxbufpFUkGnDoonJYePLFUisQwFUjkWV", "emtYFvihXhLozbeKfKsMDGXCcVYckiHEYNwkuNtJZHbPeAODiB", "UVPjfRCHDUaaIEdMjZtftmIgUQafeeRdrPGBXLJRwfKWzWaPRm", "CYAdAaWnBEciAYaYIsYmqEzyVmQKltPzPjBDGFODTNEDXPppso", "HfIfhBJdrixHBweTSkfAOeqbORugQfOGuQRiuPDMxisoyZRrYG", "JxVIEMESiNlSLcnnypGMWAtBwoxuMRcqxKFtWzLiMlGpCLLDFs", "xtVtyprZHvQnNcnJyrWuXCxFIBRrwKMgZecxfbSrJOZlwroZJe", "boeDwjbVsjSicaGZhYFQytFfDEDCHzDkHUuwSVZYTaTCbwNkwZ", "adBrdflmSrHLXEKOWghMXLSTqkXJmOqjDdPyaCUbiwVfsFyiPf"};
    string word = "sBtuvomdeOlHLQMiEGbTArcyaWXfRYCINzhpkwPZDxSjgVKUFJ";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> grid = {"izQvdJZCBgpbCuZcjGzUIMFsSQIZjsIMbFhIJuHaxzuOefwpMu", "ErXAFkqNnRiuDSeVTWUaPlhtcBJQsVMjxwZmGvfodKzpYyCbgO", "QREHwXykKvjetcDDSLFgbNTPWAraYBnUuJsmVIihxZzGoqdlpC", "gZxDOuIzcgIxOrMbNDWMpFfotzQZcuiFZteXJvJNfZRUBFpXpi", "OOizcAwNjdpuziYMqJZZaoAFraTOXhReXsXMAxylSJHODTIVTb", "hbUFjTDbipVHjurTGThTgVljtMEDbadXPehrULraSMVaNEzQqW", "SRoXnITRziYITnaLgrIOHuAlUHIEXYTNmIkBBObuyxYJglMeet", "CDmLbpXiQaMRrBHhwAKVWzZUEuskgGNjFnIxqTfvlctJeSdhoO", "JDuvVhETzMZXptGpSZNdRPaYQGPlHMSCWZDidIqDqvqFsuLteK", "eWWqHkRsqVNirEEdfSJaiINSzzOJEzfzyMGXFJTpPKFHNtCXjr", "PRsMJmcEZwjIsMgGePxaMgKwKpjEKpiISEqZGEcKOdUpWUcnDc", "AQZzqlKyUOtpXWvzLNbFnjhxgswPmJCHfIEaeSTGiBVrDYkdRo", "xlcZekHYZtQBqInvemEAoKQVGHmTnNeczIhqCAGkQSOlZdmwcs", "KkSDVulngTxiORfWCXwaYJzLUbZHsBeWGvoIqQyrdMpANFjmtE", "imNabDEAdNbSVrnXGEbPsKMvjxnxpqPglgznxfcgWkrznkmXYU", "YwOjFLQqmRMgzoAFTBVsbNEyGKDIkHxiZlWSCrnfuJPpdUetXa", "dWZbZDkVusZJJTAIPupOIcYfUbcCZsdDlRQaGZkSrVfXItbEtl", "CrhffbqlSjbUCSiJBcYEbmsKDjeJpDHqdGahzVKkkgbNwPPPbf", "oxoTyhJcXllAxMPlgcoADDluQoNKLJwUXHwkyASVAgkobHSJOq", "ijQxSIXDtlHCTaqjCAcHkWdTfAJZCkETxnqcFfsNviwtdlVWVC", "ISYDHjQWlpXMKiBtomgvRuFwcGnVhesOUzaqkZEPrfCbdxtLyA", "hcuztPvWBFXTeGKeVrRlYnEsSUQNLZgkJxHAMDpCwoifIdjbam", "RxftUpmwWNCLhFrPcsMsoOmfrIupvdeKjzsaMZHqOGiilaqPef", "eIfFpAbvCADUmfUqkCrIOhVDqFSMBVpAxasExUYKZxEEJgiKSG", "bbceyymJFTFotYbRjGrTDCHXDsiYDIphyaORHUqIpVjPLsORYM", "bYRGhSJcoWwViFugxjXKALtavsCOQmPepBgENdDznIUHfyZqlT", "sdWACegjBwcQVJSxURrhYGplbLONExqyktnmFZPoHTuIKDizfM", "NcMILXNivddEHnKBsHBKlSPQyrFokunFnfVjwGcAIewvdBqsPg", "CxTODAvEaucqKGMrwpPhikWLdrgztHFsVZIlUQbJRnNjYfmyBo", "vRcRgBRvtKleEmniXfccrwDmDmhVsaRtbRzzEArpRhhKmGemUd", "sYrzAqIbpuTPRkofhcagEZVwyFKLfGWvNCSnxeOXHiDUJQBmlj", "UilsxAhTlYaNWZvSRNemVGlPlElgqvzGhaUwrtMkNWCgCuTSzz", "cpngNeQsrXfECqIwGmaLWdBDtYKUlzkFMHjAhbwOuVRvZiyPoS", "hsXpAdaInPuvrUHaCNTogOBwGJLjMcyEizYxkmtRWSVfleDZKq", "dBAPKiOMgoqmZJrotDsuwcThYpzGaVQSXyvneFWCHjbLIERkfx", "NwMjVRhgJOSnnsTKdsXfJWskidNZKSRLPLWibSprvakUMIlsbS", "wGXdLrJfpQBVgyukAasjnqUvZoxbKYNWEmlHhIikcMTetzFODR", "GiuCHYqInBQFdlvEeWmSrXxPaUKpTNEDLOwgVAzjoMyckbRstJ", "hYUQDlafOPxzvwmsMqesWkrAFtRuZNgGTydnScpHbEVoKiLIJB", "lNkINjPPWOCfuWzYglzoeeGNLyxCBLLmhonhGgkubSmNRIMsRK", "pTJiGtRMayNfdIxZeuDlZQjESVKwCYsBcPnvFqzgkoXHbAWhUr", "OIRXnpSLcySJtEyUuxXHBzDcgnehtLyzfIPUfaGRqMYUIcpTGu", "xOAvlisBFNEjgIcChudPWraQbfRtZJnkULTSCeXpyGKMqYoHVm", "NKBUmzbtJLilyDVnTQPSxrIOvcoZwWpMsdYjGkahuFHfEeqgXn", "oWuSnPMHdJDBEkqyLbfXVhcmjRYgAUxyavCNteIKZwGOziQTrs", "NqzrfWjlFbcXIHiNJKptPmoQSMwRTEsdVBAeYOCUnkxZghLavG", "euaviDYNxZkkjcHHEqZrVhtcvuzIzyaBnNPVocStEvMiKCNizn", "dTpxNZAIundcDyGOFlNbtTKUrlzQroDWBIZhFueJBAdGtHDcvU", "QlrPEqLDRadVwtmmGoKkCxIFYhSWNUnjMcibTHypzgXsOAueZv", "rZASaQpTcWMRXmsAKnFVHGYelyoNhuDJCdOqBvtiPEkfzjIwxL"};
    string word = "UTHRpFoqLmgNtYcdIElkPBJChvfWKrxSVeObAXZzaiyjMswGnD";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> grid = {"iXJatBGNDjnVLKmieHxLTMkILyyVZjRqmagRpGOmXVBtlpUAiV", "jPxHWhtiGDSazLrvsAQMENRmcnlqmpkdYoTBUOwZbJugXvVyFI", "lsONvJKihjroBpcSXzInHCEFPQFxYeqAmZRdGbLwufUVyukDWT", "zWczgOcSVuSozMDGSkwGwaZfoZOiElCcCdPfXgvMNwYrTBCIqu", "NjfOKOjweBYhXWAfsACpohQuFPByGIvDycRPXdLnejmRjmSuWA", "vNiLHXbfrWMuheAEDgqBsxSQFZnjGOokadYKVTIcJPmCzyUwQR", "zYXgzwvfpZsehWNzhAUHQaPyRklfLadFmjvFSmdjmGoOonbkve", "edPDyictBYCGmEGromFlHNwKRdMQeIwtfOiofoCEUcUmosJLRX", "BiuXgHCtxnbcUjJWsMywZSGZzPDIkmAapYOfNFEhTKqlvALrVd", "yFmtaDlIphMnAWcoqBOESJUNguHTrxjXdkfbisPNCwYZRxQKLV", "LphUSzfQJCIFlsTEmtKNYPbtDwyRujxWMniVZvrqcBdeOtAoaG", "gvVDEzLOtXYqpAuPhlnxoQCMraZwSykUdRJsjFWHeMGbBKicKN", "VnltQHrbyeWwpKuJsPgxRkIHMjGZFaYLXTOidDUzmAqNvhBEoc", "upnvxqFATEWDAJXdCYNEMIleUMDXMRGIScXiemfQUoOJGwuWau", "hCTmUdYVroKPHkEWFOJyaZvjpiMxfzQABsluDIXgejtNqTcRwS", "vrMKxFwLDWXSNCefSQTVdMCOwpGSWikGyerRuyFBZOORcCFTXw", "APJQdpSuZoCFsRTEHVwniNevvqObBMyXKhxzmcWtrkDjUNalLf", "vnkqwfNpbmMXAsEKtjgIZCTnzyUuoQFPalYrRHSLGdWcxSVBhi", "VCpDYGlqsBlSctngTeqGxCpGJlIDwXFmiruQTgWdlafUwXsNCv", "vpVrStnldWMcXRTDcaiMOSoDVGkPuAziKwEGzqSwjGiNtMygkR", "LRtLjNeGFPtSSDMDaiQCNcohRQBbwWwuaXRqpUkeVQlwBIgqGA", "FnlbfDcyqJOgVWEuwxXBKzIwCHsPpQNmMkGhAvrdLiStUEaRoZ", "DEPrcpqhVseGTZuWtLFSgdmVzbXQMyHUknBwAljxJCfOvzioRN", "RyxoscCzwPnQMmXgDbduBJICKFarvLGWHeiqUAlkSVYptjTNfh", "oFCbLwnZuNBgvaJEmTtlsSdxihWkGypcVRIjxeDHMqOzrqKAfQ", "kGxJhnflglMxIURYXRNbhCZLsuEhGqrJGJzQswPJchcOJGJkHQ", "ExBGiqryEyCJWRBYtIbrZjcEeCSEsDYCLjHrnEOlQKWyEfvlTz", "WUIPnZjcFSXhAokqydYBtuLPNmCgpxsQivRlzDbTKMfEHOVarw", "TjJarulGnxmOhzfdHCPEMQVUAwRyBDkSbtZcvNFLqXIYggioUW", "kXNwgMWlRIzePHBFQZAhoOnlUbxqYfTpVdimtEDLGucKabsCjr", "xIdOHUptkWNpQjUSHjTfepASXGGJXUfoabKbqlQpfXJDvHudAc", "zufutLChmIWMkWhJnciWdLozhYxpKQnrZuQyBIGTHDBWjWUluP", "aOqvYnPgGEoiuCjUcmhzQXxrpRtfDlIbHeZNwVJsdkArKZBTSW", "QfECQhJFgOOpcJeAWRlfNFxiATHkHUZbayjIBQmuOgKxxovRQZ", "TEMcsvGHaXlkAJfzrjpyFiQXgqWSwBRIoKnhmVNLedZDbFPUYt", "vgQrorhFjOfLjpzwuhAcNFuowiRTAHPtDvuotsRWlcZEceHcXj", "iDpvnwPTirLIrNVztSsdxaWsjyHwLPmHUQnsfRYEoKzvdQMKXC", "HfXpOPFQWjlyDquaYAzEZxNYcdBwtsTeJbLivhmGSrCgVRKnkR", "VagDOaqgHvfSvAnraUlXZcjgmdXoMLniUbeOpZMUCWwNtipseF", "bRivlhQmxLsKfAPcekJjaFOBVnzXZWNTdGtrHCBqSMYywlUguo", "PnHbQkaVqJxHOEWBwppAmQXWiNDkLesmNlrREpymDzJQdLkrsC", "vQGUOCvZPBwgUhCfXDWLgUGpOlSSjlZzpVHzfxFJPUPYxdWfDU", "NekVMStVOStKIKlQnYtssMwcgfigjnACAFkRiWXqaKmDtUIwIR", "nMGpfrUTcAlAhRHsyjQRoqIqizNRBOOLbwpibBGqEdzZIPZYrP", "joQNHDZfNMuEBzpVhlyybxuaKCPXgkomTqacBHwcBHndAVxWAQ", "diXYSvtwqfnmJukAjoRFhxHdBQaWEZTPVIUgycCObrlzsrMKLN", "sLstEgDLTQzeohagfhjprltTvXXYotbdObuChuuCAWbQBaWCMx", "XJZjfoKrDkuhASGIYlzQEeqbTgVCxRvmHswaBFntPULybDiNcp", "kWUwvITzyPYcEuxintoFpORRAZNMCHmLqdfBKQgVlJhbscDXer", "dvgDaeNlnYQOQEofQZYTUGtARkGyZJyexyZAnjTBvOdbOYaqnE"};
    string word = "BIzYxZtRMaUWEcbimCTlnhQrPNGVdHpSvsOyefXouKFwgjLDAq";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> grid = {"gbNxpukBFHMaKzLvIVZdDAJToPlwecyGOYhSUQiCujsrtfqXcm", "vCPGRISiMjZQFHWouezKpdyhNEslfKBLtAarcDTUmkIqJwXOxb", "eNIGJAjhAkoaiAolFKUKsRTNirszLlYMWKfuUIGgAgpMvsmiiC", "ruiKhtSljQmYzOXyuuYtLMiUomDCdPGjHPBasJBDYahiDTgDYg", "TqFjjDiVwqYCHRgCNcDVelKcGCsBEuKuaUeRQREvwFcGaLUvJf", "ISAhCbgbOnPusEtaQXYrdBJjUzVHvWqofKxFmecLGyRTklwipW", "AWbZgPqHOtpAxlTvQOJIjgVokaWlHkdCDgTiSOQKQdMcetQVka", "DTMFsUBKgSWvjbGCPehmwZiEkqVAoAXzyLclnpxfIQrYOaRtNu", "nPBpmJeQCrFoYnvuatTPeKtkCRPSSFNaZQprcBdnpZfEmbJiEl", "srBVOrqBKxitTWvFFLwMXtmvxXniqoRWlBmeudCCfeBJHrrBTW", "lsvXCvbXuAUDRBzVsWdBMyKhHirpuUhJKZvLSdxXJhROsiqHLj", "QRfsIizDrmeybNoACBQRYrpSyMatjVJJuMxVQuYKLKvSQdHmVu", "wJBYKmXiRORgJzMxggdLxtHsQShnTYUqmPRSSrDiOaXfvYXAuF", "hsHXtojrIwotKSYsaFnKSDRLPHcowsqqaabAacqGOMwEUJyTdI", "HDunrfoZhqYTISQxNadOAPVMJRBzWmsGmCfjkvpbLKwecXEyli", "jcfvEauvNwZgtgeMLxLPvKgKyVGLSCTyRgjOBdFGkUeRlzRJjt", "sfIjZhTyVPNaHukFeSXdWYJlQEivAxmontBLgwUrKqMbChORpx", "RpTUJBFmQVmZwcuEyeNCnBGKKiBYZNSMZerNOVTTPIwzYsWmlV", "tsCxpysBzZKIFBiSdtBCFBwTjORRDIUtUWHhAPgxTwppUmRwAZ", "tFcNkTgbRnmZqaXTdULjiYfwrHCoPEeMxWspBzVvEIDhAuSlKG", "UjgOLXYUQWpyjhfyNNlxvagdoVuzZSOVKTRMVdRoigJWNZGarH", "mvYzGjerNPItJQhUkyZilSMEFCLXOpqnfaDxpRogWuHTVABbwd", "jSCTaCyQxKWDYkLriphgPVswAezHEttmdGqRnlOMNUFouBIvZJ", "piMEqWleLGvSzSkzcFqslbMIiCkGRiipmrXMmMtLelLdmSAJMq", "FNEOUsvkYnAximcazushwtlPTDLdVBSGoCgWKfZMjryqXbQIRH", "VeLYtRrpwflcQDqCTBaXZskGmRgbOJUAvuSWzxHMFIKNoEJhPd", "VzIiqKIroEXmDjPYgjLzRQKBrjaKuhyKkSgLqLBZLdmSNtrcNF", "xOBKPVykwXkKTcLaDXxeodjtkWhAEZnjDcqBFxqfTjQTzoTkod", "FlQXqwAkyDMHbvanJjxSfzusEZKmLRYgGeUcRCINdPwBOWhtoi", "NviJcxtlweBoFMkWUIqSPCGjfznAaaYpHZOrTDmEsyKQxXRdbV", "UrcjWYFOenXIpDqbyisftMHEJzhTdbRSPBoGkClamxuNLQYZAv", "oiISmStfHnRkVYealPZXqbWCwDAEcqQpgvOsyNMBdxhFGJurUK", "UzQHDMVoGDJLVUhrHzpEHSFNUFQwUQoUaWaPYEXpevwMZJFSqC", "YKqAwkwERPbOJghvwftNcoNLwTVjcwvxBCfTJuZUKcASfKNXXW", "ylAmeOllebvAlvzShYbwotQgvdPBcMeZTMluVFtUXCCtbCsCKR", "GuZWdLmUftRxrMkCJEjYnNcsKpzwLgQABXIFDHblvTVhyiaOSq", "ztvOCqxXMnymSpUAKVoPgefRLDFYrvjQGhqkIZNbHicawuBTld", "yTqFUlEBwrisgaYSenxuKmfNkoRAjyLPvcJIOHQMbpCWtzZDVd", "piXlsefKBIcMJArdQejSnUVtTNCOWdzaRwmPGyEHLxFgDqkbYo", "YqVzjEfdckZwpnWmTOgFVhJYcZZnmTuMcEoqPHCViwtAOCrAyl", "EoYILdrcHwhtVvyTjbsuAqdPaCONXLBiSRFUxzGKWnfQJglmep", "jgQTKzYAqSdCNFLICVnrbjXcPgAKjXoofUXuBmtodtRaPoIaFQ", "oalKFgsNJGVreCLnZYDOTSxBimXMuzIcHgyPQvzbjthWkREAqp", "dOMqEcmRrnkzzaCieOfnnCEJOKmHseVirDGftVIiGqtjKeiUcX", "wevFaNTUXCLbxdZNyDmRptVIrcQgGnSlkhWsHqjMoJKBOnzfEu", "zzmQXZxTiyqFgcPJuWgKvwHpMlEjMfdnYycWuPssaigqZquVyW", "XerGvpWiQKVopNHxzRLDhcjCdfPsJDlqntImuZBbTyFwUSOEgA", "DLSxmFTdpeocAEHJYGqvRryuhXIntrzZbwjQVgCKOasMFWliPN", "HDVztneHGywCbYvbjRlOmoipGIiLnOtztCTwAqVobNEVrNdDmc", "IFXjMQpwGsHQDgZfnhEkuyerdYxiqjVlzNoLmTRUSPWAKCvacJ"};
    string word = "bPjFYNrhvJKAosCipzBZlfIQeLXtdmDMqnUkTcVxaOSWRuEgyw";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> grid = {"GjUjVBwVYVCHxzRzPNAixapEtbXsRzzNSpaLTPDWhYmwMdUqMd", "fbwyYXgktKpTznRVBiumExFDqQMZcGMOvIdCsrUPhAlJLNOHea", "MdVYitjcORFVJvvyISVDPckAfUtUarISxhPXuPqtrgxUPVYaQl", "YxJRLAPBDmdHmCMEAHOvaqhjsINswcRvcrTUurrTidpHUzUXcy", "giYAvxJEwGePrhONCmBnkKWDbSuFVpyrXUQlcMotzsfTIZLRdy", "gJRDMCxypNquiLMSNatGmgwySTCaBHgPeFSAJrmBtwjcxdYWVz", "RNjArBIVvJwtYnZtPXZvHSQGPemJMsAtfjXBBRSxFErKCeOAOE", "fSLOhodXDUAwFYJgbeRncjHalkKtMZcnqymNGTICusrVEQviBp", "KapgjoNGMTvIriEnsxhzlCODWmyePRQmcdwtbfQBAuUHqLSVFY", "fIWFhYkyPbLBGzHAcNqXwTvoaZVnSRngJDQECpUdKrjigmelus", "XxefMHhREgeJyhwcffDPkiIMRvmLHuuxIoAfOsCJCwVlGTBYQx", "gpekXwazyfJZjcCyYsRHNJKKpEgVnVHMblSwUNPicthNKcXLei", "xihoVkoOHwZVLfmCJgTkCliTfNmnMGScPKOuJaSWvEgbZUXSvh", "ErhmcMLyPYjDvCtosXUdzpJBinTGNlCqSqwAgIOQeVfkFKHRZu", "mBKCorTnYStNXPZbDAWxjHdqkRwGuJboiFfsVahELMUevIzcOQ", "NOJCiZPsvFHLUMmEWDrxgtSIeBpTYbNRoGcjRalwKduhVznkyf", "wMUxOTpAFLEBXkfvPlcmqihtCDZYnztFGdQeuyrVjsKaRJNIWH", "ryKfXxezNbCZwksDdqRQWcpTIGjEhPXyvYgmSOVUMBaFHuntAl", "XUWEodEghVkBsMeDjUsuyNtzOCHGfcpGLIJQYCVOwYKVroluRL", "lStgFxPvIrGHUXwCkALDeiVscoZyJWwTNTYMuKfbOQmBEhajRn", "AxSfkXAVBOvkfNkYzzVZRMlNnrzGBZGuCcztbdBiSOVUawcLpk", "lONblUKRSSwAZheWFLrTPOzBFwSfmzZpzAbbUPbSGzyjocIUsk", "eTveoLcqTDtSRwaVNjFyNbWvlIviPQkknCKDeocJFZHvIzykgJ", "rToAHSGqnHDSOicfKqKncAldLLYrkMTDKQxdVTVBpcZOvmmKLZ", "hgWKPsvrlFeaQOfOuKMCoaBokeQjEZiziIvQVgvxMHSKqxUUVK", "wzHmKONEDfJeaOzcbTAcVYVjpJJpaoxivawIrKJkzRXddlAxMe", "KVmJSRTbZguOfdEjQaeiHLlAwXnUFNDKkptqyvPWMorhYBcIzG", "cioFTYWIuJaOprNDslvftHjLnqmBCUOJGkhXbVPdwSegQxAKzy", "syCUhOJrnfzLGVKpIkjvbiDadRlqNcvBMxBSYuAFXePtTgmoWH", "KlnCBbtPwMFYRGLTfyVNxpmZjdivgJqVWOXEehUDQcuzksHaqI", "SekuPCtMufcwVSPceKmCEULPWxySHjVdBpcpUULhlZYMGliasr", "wMFBvlqFGXOCmkmZcLpLXarCiKWpguhwGYxVdnLCdOyCxwtssM", "hPSNMYLLUGBsuqXlvJQQmXNvagIjXhEeZdpoxMSjDUlQbGzDQH", "hrCBZpKfANxjJQcWskFblatVXzOwUoWhiGEveSudDnMmqgPTRy", "jkcGplhosiwTXabIVfKHFzdxmSBqZUBAODPtrELYJWQMuevCRn", "DPhJAcFTtXYokHbzRqsiuyOWCjlVMwKHmUxLeQNrKBIEnpGdgS", "joAMTMBOQrFpmpmUwajWmhMwhyOywydUZgdSDxGOzDyBIzFZIU", "XPwQcuFKBAOSWPTLrHqrtrsDioPAfessGQtDdjIixeDFeRAfOH", "qYgAAPXcIHoIUYRFJNuMKinOkAVCGMmagXfRNJseNJJhAEDNBw", "YdktTDACSaHUOXwfrqKlBjsGgcmoWRPlInPeMbyvxuLzFhVZNE", "NZdugaAHdeRvXhbbrQrfbPRHjLcLvnjXqpctzoEWRzkPDIypOa", "hSgStXwNrDzOqIZgXgrzFFnldODpBRFQSDwgPtwJQAHbvLKZBj", "cMbJmUWSFUKChyOBWZiLBCdPsVDwFeobjEpqLMShehAbOWsUus", "QlCyeOCESRbYcqkuKzqazbEKlsNLEolWJITjCNurekSlyKQGhn", "SyIlWgAokLpvEwrCUdgIquPZxXakpXejiMLJPAeZkfxepeBqmE", "onyfCtmaeXDlVIGdYspFNWZvKLzRBEaIOwHJUqPrxiuAjSbQcT", "nJtwDWXwVgBkWPcwyXrzsMxHNXxNvFJEyWPXbQNdldEVVLXGrD", "RmvqQKMCxEaboZiapQObVCTufTnPuWrYBsVduFQnOLQuVPTcRJ", "YLIxRGVyCkUEJcAelbWunPHTovzXSZYCsKMhNmpqwQtOgDFdjr", "bGczEiKxNknglPUYQAhsWmCFaRSTMfUZwuBVtIXvoOpDyLdrZj"};
    string word = "eJRviVNUdWPxDSnbIjmkgyElqFKAhacHMwzrCutTGsXOoQZBpY";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> grid = {"GCMAZXYxcdMeljbvzuELmjZuAltXPQbAwvhRgnBnhwHamLIZWR", "ojxZUYWCAJTtrclPXMQhykpVwSvaqKLeRsudHDIzObFfgnNmiE", "msaSRaweQNKSxyabFRxFMGQWbRBMlkMKTTBTkNwDbMMboRofeN", "qNnuIXPkPqOZsmXKjdavFOTGlOYXVMigPEGcYScuawkrodgEiD", "ZMAYTkYbGqeVHuZmbzsvMLVKCvhhERocBGhwcBHOSpqPuOHsSP", "KuSvEpsTkyXzejRFaUzWxjKLzkogoSvSPjlwiFbhPJIkeoUHUj", "cLsVxEjuvqeLavPOWrBdJrCEjgscKcvnzGNXoNzzkJookWrsUk", "dZgcUEfCQnECEWMfjQnZMfyQhKDLMKNHzfhwTHMzwbWwYpSqiZ", "VkgCLSHkCxISdYRQtCYbCYKfqwwsxvcCyjsiNrKXZnyvUPBbAr", "BnWIFpGvwuXiqJjNYaMrDlghSPZsUQOAHLVeycxkEfbRKodmzC", "HCtDEQBeKvfNikUPbrlmOuqIVjXRxMFsgwWSGoaAdnJzYyTpZL", "pEprdaUVMZRMcUpWcnaPIjslyqfsNxHDqypPRHwGiAAjJIGgDR", "cDCSGEcpCfpzymlQLOlPeWlPhWwoXjnhynGUePikOLIVSDIlNb", "ZuSweIviAFdOyrDKcxsjCWmbBhntzqgREPaJMLfGpUXloQYNVT", "GJtAIlzQFYByQVFPEqXWOyIgxnkoExtRmDGWiQbtxppDMJIeMg", "tFYPQvFDfHpwQpYNLlgmqvWpRvPJsVGoiqPOVrJzvFLFSiMkMx", "PNHcxhTfnlFzudqmOWbiIGsSLkQoXtUJpCRYrewBKgyMaAVjDZ", "RtqUFuSHZDlsdBgLEJVyxwfkTIQcGWXPnNiKhYozCjrvbAMeOa", "KTtdWHhfrDvIZQEwpOxzqJUmGbaenFYjyVMoNRiclskAguCSPB", "SFDVMvPQICxctfizbwGHqBOAKWdmZhjEneXusloJRNagLUpyrY", "gFSYLEnzVRkBTbmZJjluAiQeaXqNIWdDOsyMCpvctHwfoGUhrK", "kZYcqQVEOMmSpArkhKupWxtNyXvXxINoNGJvVzVoVqodJjeiGy", "jdYlgZjYkbroiTGdfmtpYKjrwuqUtXDQEmnclCPbgEbmwVPYOF", "GOmgvUaxQhQiqfUgwuGznchoGItKTXxVLjBcNLGFyuXzPbZrkm", "eYJSJFRlKFljfpHuEAjWSfdPFoWThdtLITlHHCXqMqOrHKfXLw", "GDikPwQfDumDcyDuMSFanLDJlWIFGyKiydEVAFfucZvckYoLJd", "UbamQLsnfYRpHAvEgkKVoSOywXZxFluczdTCItMrePWhjGDJqN", "CYqnskWGvwRlojSUKJtHExdMahFNTpImODPzXAuVgcBeyfiLrZ", "RorqOFMbZEWvVDdQaGnykCBNPhSpTwgtHIcKUYzfLJiXusemxA", "rIgByXoLeTpHocjDhffgWQVUytFZeshjYwaIQOGHfxxLAfnqtm", "uiLpqckuMgQUuVTpOvTOyGWFknwyGJoTKquWMzYCkSeWBWWhWo", "TtkgLRpxNQJSxcdrBFhKgQavYGjhZsttyOLsHuusceGvpUEIyh", "qtQCuJpNHShUgHDRKqfGqGPuBdXoWQJCUEQAlitWWvkogxAEtw", "iOPzhykTSjrKoWdaLXGqDtJYseEFuZCgbQnVMBwRfAlIcHUxvN", "ByvhKpZyOaOxtOKPjsMVTNBUDQpYvdvgLQuSpbkAgLAAxnqkMl", "NzLphVxTOuDSBMeVnFeBKzyUPBrOvAelkQBfxVMXIocUfeTtlK", "msJgMEvGoLxTdISHflQuWKeZFDhziNBkPUbpOjcytAXCnaRVrw", "AFYUGhZpjuScMginRTJXBqobCIaNLdVmvtsDHzQrEWwyxfKlek", "OOQSRopBbzNNdAmOzhRXzqBDirmwBPEmHnRezWQkVkLZWwXpMG", "uncsLtTNfmPREeHZoUQBWAdkOIFxJziGqrhgYayVbpKjlSvDXw", "SibmOzYTvbUbotXfZrRhyyefmmPsInamPYiivEFaaTEZwVYEXK", "GdvJWtZjFXmaBgUKSNprluwVHcRxLzybofkTPAhqQnOIeiEYCs", "XTVRIWSqkidwgfUhCtKalFrxzMuoQpLYOcnEHsyDNvZGAPjmeJ", "FeNMByqmYfEnyyXpbehUVXHHRtmfIRiwCEnJMWxFTRSlInooNh", "AoFJDKVamGNoFAeWjsolvslqnJrZxwsUfHoJiBHQqUXxTFohcy", "KNTXYWpGhninBsUcmRuLdiQMuDTOtMoRdzozxOMEBWtuqYycRT", "IrkPtTpBgQdNDRFJsoavcOnyhHYwLXuUVfGEeAqiWKCmSZblxz", "WhQIrtEknLbHXUAOKGFzmiMSDxJclvqjesaNRZgPuVyBdfYwCT", "qJAlOVQUonFCmjAAODVxfQPpBgTAFcdwLsnoVYWfdhWwmdajvz", "ofbyikoFbTTMafTkFdJzMEqXqwSBWlDRNZfIyRzLdTMlQUysPO"};
    string word = "XkSDGYJtVmRjslwZyLhauqgMFNPHbKzEoWIAxQrecvTipOUnCf";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> grid = {"SGbHUXGhWAQcFYPjzkZpzjRhRjCyMmNSvdoiBqbCssmJjnbcuT", "yKmJjXCOGxUpqLklFbWtSdzfVYicHrPMnNuwIavEhgeQTDZoWA", "ZhFcTcOzgQqXZYoVSbJbxOqHrJvhtxbEClpFafxYKMQHPXgbLm", "OKhnRVfIgYbHTWjkrDPZNuyJsczpEUdBmSqvaXMiQxCLwAolwF", "hFngeWwuMTQjJBmaAzDREvPiIrbOVpHlstkyxZKNLdfYqUXGJC", "fLpgmociyPqHlskZwuCAGYTVRdWvFrzEtOhJSNbBIDMnUxjKbX", "cmLDpAEKtNibfgFQUMCxaSHXYlOroTuPZndBjyJwqheRGIWktv", "PjjctxCwjXxBmfUNHhFymUCAeDhmWTWYGTtEJIEbNmndDGGEiS", "SPYCgLvWfoVzQHwUqxTBDcmZhJkIaNGAytjXbOMRdEueprsFfi", "EIoJsDDgTtEnuvNZoyILRDJSpmMIGgXSVSUBPuhACkzyZeEUNE", "BRmHzACJlARejrVniKIQNEDofwVlWoaFWJUaeFhgkpdwjDRiSN", "kTrNKNRVSCkqJPClploIoAcmhiELWmhbeePCfCIyWNHoVETrcV", "GnmWkaIPaFqOXkpNvKQqutXSeuVVYwKWHMeuGNUDqZujSHKgQf", "PfXccunisXvINfncZEzruIEmBAQXCyhtCgMbKMDTfZPfurQEGW", "CMGxkfrjdcZDEnlQhOJvyVmUuFPaXLBsNYzIRbwtogqTiWeAmp", "NybDxMSnkWHdIAcBFVQmZPRsuLajGYUhzifrtKOvewJToEqXsC", "rucGjcoaaYCfPwelJpkIZdGdNCkAFidaQDYjywDHTcmgyWLPKS", "zqgKqVulYbDIJjtPOiKSOIfXBKEiVzcoxsUuKwOgMqYCllhhPB", "XecdCFDyIWpoBQMSmkawrfxhPtVgnjRTYuKsbizqlZELNGJHrA", "JikAgwsQDBHrCZhYLxXnpFqtEzfuKcvjGaoRIUSWOVTblmNehP", "vxlZAaRZqQEpkJdNHPZRAJJZihoUYDAlCFwnIWIbQsxbOpqtZk", "tjJgjXOuYJEiKveEHEIuTaKtQQZveIireZfyjwLaoYaAJPXVVD", "lsaoxbeuNkIPytrgMfKjhTZcDpCLmWJziOnEYwUvRFdGqAQXaH", "nHYNUDxOyDfdZSObBOMXSBwkLUwABgloXmDGRffjeFzDyNytRN", "wSAhCyDjChfcprwuAacslyUQHMqxntgyJOwjKGpCKYsjVtqHqP", "iCvMgjmUzoPKFRbLkGJsScHOfNVAqheYuWInDrZdtwlBxpEaET", "WduORaqcBaRlJuMYoXrwqCEPBfaXunKeuLyHJsMBmgiQjwcezg", "oyAqFnIZtluQDcKVxvirJjMhwdOCLGmXEaksfgSeRBPbYWUznT", "pHgKbSEpyqWWRORDGJSAyyNuFwSwleeBAoqOrzlDMCdJQMwRAn", "rSJEzxmQvMHXjjyouYGwWAgJyGyedhnVdjTlZrQxIyQUENejxS", "LeeCUxugnQYUSUsWWIusLrWGUzLSlBMokmFQoFwvXKfyMKFgHc", "estyZkHMREvPBYlnaLprSuDGbfgcoXjTwWAqChImOJNUzVFKlQ", "ybVRauewxQYCHWXOIBzESPJkKpiFqmfLtjDlnGcdvTNhZMrsyg", "mKEQsdYgHAPZryCzOqUWeTlSoMRfpaIcwJDhkLtNuXvGjbxngV", "ISWiUmpCvKkEMsTNquxYLctXzGyFOAJDfdBrPZojVeQwnhbRda", "hTwGjaquMPVDQdiwFyulOPlHvuOWiMjBBIEJQnDtAdOBkwJCMb", "hWwPcjDqIoekngVXbNJsvmAxlLytOrZpSzaHERdFYfMCUuiTkQ", "WaRjTRgYRWEhHAGUkxTTlYiFykbcSOnVcLncOICVXuzdyCetFx", "wKnHzbFFePlwxtFxcGCFGLmxszvCpQvdxkJiCTeEirzgragLTT", "tVgNMoHlUcoaoGayZiQBOUFnDIDBWvxVOMDjeiyUeeEbEWYADf", "IxcCutFHfIfzBsAPRltXajCXgnToVfAqnjaKSngffOGpAIhVjr", "dahtQInPElMwcCVYAemfkRzyvTXNHjuGbLispBSxZWrJgOUoUK", "ttrEIuhVZmQbLMrlBFRfZOLicpQqIPxpPVyvIQAYgJcSOQoYeg", "KZsqnrMmbQUygjaJPeWXRwLSkBuOEfxptANFDYdTHGcoIChzol", "ZGNOeFNTEzakRzDMiTqsiJvGYICuaAQtzhRkqEJhdHVYguQRBy", "AsDRtnpXhUOLQyqRIlifiEGxAvFwbZrEKsbvGoRREKFRUlglvR", "oSNVPkaySyCNUOCVajAZUHoMkYVEQPKlCquAacJKuzIxoYGLYn", "sNKFxDiGBOVCHMwiCewHAsAiWHdEyoWBLWhbRPpYcfpYriVwIX", "VadqFxZvjdXcOBNYwSGdnBQYDBJiZNGIjoIKNVeYkePZWPGLCE", "WAIvuXnfabLyiZVjwCdlSmGkOJRHqNrPgMBUQtKzEhpFsTxDXe"};
    string word = "rCLSFacnNvqJsMZtTeVAGYmwHXdjoRIBKgEPkfzuWyQxiDhlbU";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> grid = {"YjVNKZgMFXSoEyLnPzsCpTcdRkGqWDIrBmOAhxHviQwbeJlafM", "NpUzKyHmVLaIEYoxDgTGSkCQbvMsqudctfwFilJrjPhAZBeRXT", "aPktlMwqiYOXAdvFUjHLfbWcGysBzpnDZhEJCmNgIieoQKVrRY", "rcJUqyeIHtCjiOEfnFGsloDLmkXbauAQBMPTYvgdxHhzwZRKpV", "fOnfBgFVKyzvnKvIThcyVGjzNmTrKUqSimCcSQQVUbCUyUPLZB", "lWkdBToDSGbXuVPvcHjJmxahfIEnpLgqwrAzSiOKMCYNZyQFtc", "CXckmyWirqRJRNkKHMqSxMWLHuvDpFaVvvsEDeqZEYODVVOprm", "EAqittSXlAASfdvliijhIdUnyrguFlJMTpfGmXPwWVtvqphJhQ", "GRWtRYYqnZNFZpiWQmkWEMmkuSKQWTwFzFGouGntRCmApogspG", "kAOinbLCCQfcHyzhINgdsmpUYeGrDFuBKVSRTtoEaZxWlPvJju", "HOwDuYiqUzvaSLBxkZjoFngRUGlNCVQMXAysWEfpIemctdKPTn", "yuinZhqCyZgiCOfXMhjdBtXcXbyAYxdNZGlJYFUznnqXqpgcoh", "QFmwuGEjpBZVYLINoTkVBRESkfaeqbjmSNdXYSlmlNrKYoULnw", "pmleXnnTBWdhaTxIxyjumObupqtePYGYIOpcARllkMCdwyuuWy", "gdQtuCsnwlUjkScWOBvMDaLwyzKAirEqfGmoRxYPXIFVHJZepS", "JOEzcZkdkxtelAWmZUhPVZGnuBFgDsVlysHauQHHSSBNifKdAk", "rqFVGCvPXhUkcAMWlxyYDSHnXuNQmesLabBTdEwItpjJzKROgP", "QaZciDsraKoglRLeyNMxkSOXfIUEbYumCVAhjzdBnWPwGvTqpL", "sYSxcvIYWpbcBUUpgIpPVqrmWGHjQAezzWWQpOSOFuDsxzkWli", "ukTpKBPzAihCwANscgaleIsBakAOcnToZFUDfjWdiVBJsKEDgt", "UcADfbJLYFvejhHygZPSxnYQTKBGVtIWdCsrRlamozuqXMipks", "PTYmzruBPnqcDKKJSodLypOcMymzLtAXWprzmaEQOBugNkGwvj", "UAFlSyXgOddkGrirTcwrvAgtJsACFjsQpUICkKFdjzmaLiRIWl", "EqyvxfsBIwwuVNAHAWXnALGZwmTzdZJwNFzDkyokveyGXwCBII", "zbLTVGhWtdxiBoKAMamrqufFwjOJYRSIyEsUQNpnXclvZkgCtE", "iOSReMOGunQcWGodflsBIxiBCvaPqILLxXyBOjKlyCGAXSgDsf", "hgnBcCiFTMIejuaXwoCZquDIHNRFObitDrdOVhiEcyyPftBrnF", "CcMLEwjmGreOgfXGdpxWJBHZVtKRNhYqTsSUIFyliozADQbPnN", "ARukTnBCcNjWvKZytXHhLMVwrPglxIbYcmiFGeQOaJEDdfSzsd", "gECtEZMtEkmteZncseOaepDervjCYbEEvHAEIrzxksDgClwqyX", "eyIsbqNKjVJXYlRxvgEBkQGPMWadfZwzrtnFcimLDouOSAhjTp", "ynQMaZDMMJPenaZwOQyvIFSnAUyhIYzxrpUUJhrgXaydgKHGUH", "UpzVyfnEJIgezgiXIRRBXyEihxIHGyhWcnKGBhfYAYeeHZzdrr", "WnNJrTcUDLYbjteKyfIziPugXFOhqxBwlovdDMaHGQVApskCmJ", "qZAXxHuyvpLhwMgrQtUoSOsJERWvNeVfFzmPdcTCiBKkGIjnbg", "ozTfSGRjQagkLAqtmsXJPpWidheMBFcUbluOwVyvCYIxDEZrHq", "EzKJfhDIeyjYiovTBMhBZCjblfOCsrMkffTylxLFNpjkjqbWHe", "MGhlWytJRVmMGVXeqidxgvujTSLIUCmBwallvUbflTCIbFjSCW", "FwWxNkWKZCFuPTfdnkDAQmcGMacyPbFjkIiRzuIXiiziarKFgD", "ioBWgZdObyHhldCHzYbNEYBnKWmCnDODFoCmMGnvLqEKnUtFiC", "azuUuZDqhwsKMyHhofjAmALVPWtFcbJbeYQhcDSFBfgUadqePx", "shGalLytfPlEmUIzSFBPhIFGKYdoJVReTirCmHSnovFGDPOOtb", "QISlXKgRsuyzFtUhnWjqZNicbamDwveMPkJBdrYxsCGoTAOpLZ", "LIOaRnzbgykJbZhpqgyHtKQJtvXTxFOqsFsbeLspJbgFBFIita", "CsBIckKzNuCGADfcdesayFuLpExWsjfqODjvxMhCYVrJTNTgpO", "PxQAJILumnZGaCNEklgKFBUhVwciqrjdYSfODRMztymHpeTovK", "ZRGdTSUeqXaPBQbOitWEpMALgmuczvrlfNIYywKqJjkoshCxDR", "xQsNqmdhLnUlATgMANHXNkKRKoTcwCluaBxqhxccapBLNrtZaA", "AlTFPgopdInEbsGUhovLaQFyrJvLDghjqjtorzHPzSYkftXCsv", "gOjsIXwDxwKPhxUrDlEMSYjEdAJaeQqmpEUGuuSGYCUHVYvYEU"};
    string word = "JhUblsHBuQDWyMkXeCmYcvFgZIqRSNfaTpnKdOGjriALwPxEtV";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> grid = {"QmoitFURGpgstrjapMlRHlAMpgEqQlclPGhMQyxOQYiwZwnoEA", "nTiGVvxiBsNdrVBvPgCLMOSIRoIRszkgGItZcFBPNlZePgCinf", "tISnCnfDQscLvPHMxDHCQSaVKQBgOvXEmwmATdmGykVzqiasTf", "eyqDSMCcyUUxOWQODbmqpUlgrWEXSoimqsAmetCWDQlCgOHzXv", "uYMHpHFiCbpsKukIYhXWGpfOglGXRbUzMgKbgxzoyePDSChZcc", "UnmXmWdiFGewSbILfsWokhGrXPUzPGrTaiRBRChjscSHMUvEYN", "eYahqteCiGTpONiLkYvHNxdUnOxspWsBEtuzGmGqRAuinrMBwr", "uVaUMBpNHXSaeofIABQAZvncJbJpMsJALXoSBpwHzakyAEWpZi", "EKmkFCzkchssPjlvEmHLZJgsScmwIYfzxgQCSKLbhtxUwvuVDF", "QQaRsxyVYpFGrdExtJwkNIwmuCHfWfbajQzUjgevGwGEbMJhBe", "AMEBLRTfkjEbYTXvsPJvzTBAQiyfuBvAepjqOMOUKfLsiFUaxx", "VwLbEcaRMNYAjZWfzAeQYidBbmkyjJVddOGVDHUszycmXXSRfd", "MQauKibuqqynxpJQqkXUprPxvpRMJrepIyWypIkVpDUlmSFcNz", "DOfdBecLNqXEDzquujpkOGyZlJgTAEPqStLRMjjXHHXirYlOJp", "jaJyxjuJxEbYXtUNGdJUzMZDOUIJnmGIpoYEYNgQhvRFhcrumg", "iUOqlEJTpTCIxtSjToVNbAfkLIMEDpmYoWXiViFrNMItucWWyf", "PzlFPbBVLLjuEEzBmcTzkHgojEGoiLuIkiCnxUoFVpFOIFXwZV", "wOUIhVkBlorFAsyvLQFeAgTqBqONbNdhHvSairsTTXwHOWmPbS", "mOfJrUWYSuiiOXTPRuwlyzkForntURCyVDnLsbvSydJtesfKTH", "htsYnDVFbxISRfMciINxIEybhjBaXjndsqMJPWcZlKvLBQhTOT", "qCiZJXmYWCdkvmKqZfiyqdaEYsJxregzCnlkLBZmhRqQkQQZhl", "kXgxAgLjwHQLkmaibyoNecPwthULeghcJmOeoObaHNdOvJLZap", "pZAoNZMJUCWToRGBoeqLUXWdFTwOoXjKYGelXvyxGjjhafkbNx", "WWWeodhJvMzaVfRUhUlIKLcTqNWDhtOdnpydWLNcoFtddwjRdI", "fguWepOCoUGtpYcmyvKSywEXeAwMKIIQZBFTdaWCeCphxjUiNV", "zjKjiKwqOWfUVKVEcClhOCtlNxNiFMMSvTsQEhTLzVgANlLBkB", "NwqvXoGWzBoCEItzFxivbBiSwvGimVRwytHPwwAuxgWMywvvLQ", "ETPfGGYBAIlMdQLXrzXFlNRfzLRjZOWiAegfzJKhgLYxLLnqEc", "aEAjObQWBoNzpylqutIfvGkReVgwnPHiJTYrxFSMCKsZULdmcX", "zXOMDynrTJqcIfsIVnQRLuunDBPGvkBiiJkryTEipEyTRJaFQE", "fTXPcusnjJBPYHZavpUCFtkYaRcMNnafROcouqaRfbOMTPMoHl", "NAhaasgmetkPWaNlHOJGBfvHZfPSxTtDNTVhFZdyexsQQYTPak", "TgUCkmtFVZDJuWhhQSKpNqReHwmnaCKrcCZWhsnEkOCnfBYSXf", "WRuKHJEHanRVdUbmdHRRlRDWVzeVBxYYTLJwIeqMRqhQtdObMZ", "qrMlZfKuDEtyiyrIBiFOuoihitUAluDmDIxNqSIJxsehlGhhFI", "qkbczYqjJtMpOJxtMVaVNWDyEdIOywzluEbcCnXkbPrQpUdhjK", "DLEQwwZMRWnGtRAYNXyYFVDNcXByqyTNzedjrVYfDJHNEAYjPF", "XynzyzjoKQHxCqmHerZQOydQCZDotSSdBHNKfEfDZmALFVuIea", "xqgVvSosPDPkgGFsUKGxjKmvUDIQwFZZKTatkRSIJuBZWjitzH", "FwJwdaHXrRLtBeObnNaPOelCMFjTfUxTrowxJYreznDRCFezyi", "eowAQPDoZRagcwdNaEbbTYkusMcRTAEIOtEpZDHADUTJzTuiuq", "ccCLbriRdCuDoWvwjwoXZbkJxkZaGHAzFJUYAklpahbtVNuDxb", "cPOpgLNBEaVvPduSIZnPBDaGkShdHclGXePgKfQlAGNooPClCg", "dtINWTrzXfKEetPXCajkCQqjWnxZEPpMQgTOUopgfTouJQwDHR", "PwcBoVuzIRvaQOnLjUirfyAFgTbqWsexCYHplkMJEtZXSdmNGK", "nWrmjlXygKOtmDolwRsuVPCRmGymYhwrwyfDNXiNQZaNKirmmy", "lGatOIlqtyZLYZgnJqOYvjAiyYSqzQHVUpDuvlJdOonejuChLq", "eXcSRARQfYhPxYebWWlrSaELGKQmVDQahGpXaGRtGBMoDQIVoo", "noTsYhvCISxSuXwzSTKkinhzfeEQkiNubiBFlAuBoWENUNXpNc", "imjOfOIWhJJlokDDKtZTumOpIaHwCZqigqrGbuMKSizPGpfHvJ"};
    string word = "YKnrUkboVcFsmAZdvazJHNTWyQeSXuqIgfECpLBPixGtOlMRjw";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> grid = {"tRqvngCIecAcwFEznXCdGkZlvGQAJBOJatWwSXrcCNZdvnJaGv", "sNkcTydisYCIJlNgyKuNbfexZiWELxXzIpROllhQkiCHMJSpsK", "ttJzbJujOicUspwvIrLXTQzqMSgFShslxnubQWILsKPXnjooZg", "GnZAWXRmBEtxBzDiowDVnKqgJHcNjknqJxCXzXEwSqNtaKQtFG", "odYJZNiqLNmWLJaFeCSTmxVrnPOrbBvNTrvFeeUivtwOqctQor", "lBNPYXXaMxAKlVJJpBuZDnjRhcVuasCquasiVKsIUcglOtXuak", "NCbqiYvsabbuQtGauZdPvNimjzCDEZrzfdJaLIuuMVhiowfiBL", "CDVldQMvhDlOeoOTnqwFybSGiBXimFKaKcDKhtvbblIssrRkjt", "oHqRMBhunRYtVkLfXuZwLHYeWZsfKMDjHXISuXWyJAELgEYDWz", "nbnFsSNAkwelRdnUMKzAaECCKeAhkyVnUVWMKSUhmsliAhWgMl", "pGcCwhWtTGUykwCrgfrjsuKopanGhPeKjIEzderntJKAiqeHNd", "OeskUlZqZIBzxxfVgZAdKGNTVijPnvdQPlplqkUmHObXhyabKm", "asOajEXoSZFvzjUmTEQWXWXDzMqEMllLviifEkekBIVaNxOFQh", "XOjjVuOxuWmGfctbSxWhNYEUxipubkjYDjzAANSTlDkjFNQybw", "aUQzAqQhKCGaWiZAgYjXVrRaRfdtTwFABvRPvTpqAbnkkiMEbP", "ZITszcyGEOYHPPvPvaFFCvfiatTeVgGOqyPmjfzpVhSouRmwHu", "MFEjOGZBKyzYaycSSlIJJzAwFCutdsRSXGYDfDcUcrpHlerMbA", "QEiryqIGOKLjuGbhGqfWfcgMmemTKRoLiQgkgVVeZwsZZImAib", "evTeultzYpzAcsuVYWGlpSxVBXaJVhzgAgCqJdeVuTORSbWIlQ", "uzvWRcvJMSxQRDBGvLzsEhDJGghkWOLXlHRtpNSONWGeGuNLqc", "nZiPvBRTiLLkIuoiNoNDPiBANxyBHiWhwBmhrcezdBYSdZqVoa", "DoxNhaohiaYRuEHOvUWdlAwWyukcRtIMcfEcBQsdWUdAmDDKey", "kLGranzIVuBSegVwTHidSBouULwTBeStrCXLtKhWrezoEBdfhE", "FcHtJAUVLmLNAeYjsdssjwlIudLTuNxpbKHxwgSAfFMjWlhXMO", "xPipQBmRwsAVyKmCGRBGdgHbOKvKOWmVMuiRkrpFDSALUXiWDC", "JhDXKKUSqjvrTnhAdcwVRULvstrOJMTIdYuyDPQlQQHQtpnmpV", "lJzncRQJaJnFNaivLNMdzVdcwXKXIQaMWZRJIuUoTjcKCYkdpW", "zSxwSwLbLBmmXQPOiSJVrRMYEEIewPAZeEkNWvwJqZiOBUDBPU", "eydCCWGCHTNniTyqRlvCkoaEqIFSXEZKgJIViWkHXzqhbkUqwN", "sMdngZGRZdmZqbkvFHMSHCIsYfSdVVhNhkPjncODgmjpQgmseM", "tgIrqDurhtbsDUlfbmWiYOWQtaMVuFtSoDsGcLXaeRQWXLDToS", "clzDXzqvAPlfJAIrQJDYFTbfPnDjRXbMpReUUsiKInDyVosjaR", "mKsAFjcZsrxCmIWrAxTZiyGLQbfONUQGSefTbjPYhoWvzMdPBj", "YipfNpXgSgWMtWdYtcbGcFujLilvduPamosQyLBgoGBxpQYJyX", "NacCpoqwmhibihMkbgdwMdsZdsHYLLimZsQHNpeBaPRuPFYCED", "WrJCDqfIlfBibCxORDxfBjmSHAYsyyYpYTZgCGafjxJUJPrUen", "zWlprWfKwntgirjclzJgqJcyezEwqZpqLUACPKDZiXawfvNcCs", "XqTtLOowdQEoMZTSVbISAqkXkvJgzLMqyLbsRdyxygxojVWhlo", "XfhnkiOksqjBlMQCKThxoXFpbvBptrkMGmZvsPDGpLXTRTwZmB", "JQNTtMLvCvBJFXzxqdSftsyKIuiZknwCshcnoapSPEUtYsqOoZ", "HAdLfPgnmzFhHRKNLGfGxZOhTePdXifznbroHFSvLkmPwzjeEx", "uYALlsbxWXdejYSbVXvyuIpHCEZTXfyotPtEOjVtRuyZDfyRcF", "jxILEuEgEVrLsqgyfcrMeaQPcCGCizULNSheMmcXEdFWcapYyI", "hmTgBrQGMULwsmrRcHVKwpvtAGNoWScgkMiIZAMEwfTMyGrlLe", "KuHleuVbOeCDoNFeaBgSIlnkDRbnwcBoCwTBGxqrYptPTADGcp", "mTfJIQFaaAcXpLAOkPAwgeUnrcokIlJmOAzratnMxavqeOyztY", "vXdSmRCxJlYqjfsjfPsbULJFgTRoKzucVqwWxYUCKyfgHCfxQT", "npykHNbvtFadrOXunnzOhPtNlLeiDzgdQFhuTpnROCooKHNSYq", "twDdGcfvJMTEeHRyqAWOQmhBfozXqZqMRWepmtkjnHLbxdiNbi", "EkkdxoLBjktTGSqMsrbWZtPdXKxwXrEuEOFZFggPzMuwLWGrAJ"};
    string word = "ruecSmOzBXvxwVsRykjFGoNnMKlQCZaJEpHgdILAfTYhDtWbqP";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> grid = {"srvhZkNYHzIeBcOyQFuPCVMfmjbSlnJKdELWpTgiXwxoqDaRUA", "dvwxObFWoepBXcHEfyzDQUZCsSMVNRAhtLTgIujqmKliPakYJn", "TndojjoGcBqhegcIGEccujrjlqRKFHzFAMwEfstzBFdtfOtdCN", "NTqUoxMOYemEGbZrsKPFkXiVnzIWLylAfvCjtcpgSQJwHDdaBh", "rRVWobgSPHWaEkxNRQdLlEqmgbskGDcynJtgKDlexBxijbzTHY", "KoUbjuNuGIEeOCqhCthLisWPQpjHIVZjBcGQVxnpGURjxghWAI", "TfVeWcyMTMaQVjNKTHtkvgnXfHqFiBgJbxjqAyhwBmrfaiSlPf", "vjctruBXPFoGhDNEbWYxisMfTmHpICVeAqkwQlOZyLJaSKdzRg", "OYIjDVSyelUcTwMABareVvBTfNsPUNeHQgfHSyIRoEGftadhEa", "LnIxxzeKEhTbEybwiPIWZwAxLfJQJDaErxkmEFXAauvqEkJlFK", "fxbdMpDDJjmYPulNuviKHhNdHHyCcjlPFtYPpMovssOKxtyCDD", "KFIDXuGCnLPocaNYyixSRmeqsQErhwHpAkTljtBJObUZzMdgVW", "KuSWWJapYytWEdibvvqsDrIARTqAEfYYkOfbhvMiEqWELzUcdr", "JObsPILYkWZSUAgaiedrDxtFmlKvzfNqpHEMnBGwQXyCchVjTu", "wXpLSXCkEogVMYcMSDYMtasKeHVkufDvRUYaXFWfmsmtRrDvzd", "FGviolVMvcmMbERPiKEojALVNCIBmlIMihmtYUeNEqtxigeyqc", "GNKfKyDRxIwqMMPRQeCsQUdOcdBPovkVpYamcXMgFSdMHKLOVF", "YJArsUdxCyToHfwFXuPKgBaepSnhjRMzOQbcZEltmNIDiqVkWG", "TEUfpFkbPYWJyOCLicMunoAIXNzaeSvxKmQGsBjrqHDgVRZdht", "FUkWFhBaZldWSrmVyXciPvFWklDStqiGvmItTpELaJnRRBdgJu", "uhqlVjOZgmFDeBnGfTLdiJsQHpyxMRIYEvwbXtKSAPCcUzrNaW", "HGvxOJtEwBSYIhWUkesyZqaCNFpfrQRzDmAuTjngXKMboclLVP", "xqimtOmhCgNAJOCJZLvcrQGPPwCDcPYpetixTYjHlDUHbFfTCl", "PeCoWUjILxiZcsuYrhGmOMkytqJEBlQSKdHbzRNnwavXDATgpF", "qyKZlcKWWQzPzEliMDxunlVBOBroGuyIuHFbhEjxkKjbXmwPpp", "HfIWNLgopzQVeUKiSqFYCEckZyTmwjvnBbtADsJhauOPRlXrdG", "vXeHLHNDgWEgqugarpGooAYVnmTQxNHELghvQOnaFBpdjqHvNB", "BLgsAmwermrsFMkwvvwKKtxcgBEwLBvOatHsaiUnYHCIVzKnSp", "PtRVNAEHhNWTvlRqmUVnvRCTIXpfnMesYVZutZQsZoFzLLxIJD", "kaqTFwSKhQdMByUADJfNobHcsPLCVYejxuGitrEIOgzRvnZlmW", "bnhcXAuaWNMGdtyIYSOgKsRekDmiwQLxBfzFHvPUCVJqEpZTjr", "aCmLPEokINHqOxYKZBFJGlAputiXdhgcVsWwUDynezTRQMvbfr", "iqpywGLiSvBqnSrTIKvknxsRJkbRkqegORMgQKAiiGJQqoWUjo", "YgAsRJGaMdSorLCmjzwOWpNTuxcHVPQtUIKifZEbDqlyBhXvnk", "aHCGqWZvVULQeBmKhcPkEgbostlnuyjpRAJTFrNfSOdYiMzDwI", "fgMoFovABohKvFKSpnaCzJFQPhRotvniegsEEalTKWoYrRdxUL", "UEAThnKWSZGIQeiDujJBFXNpoYbyrfdwRlPqzHVCOmtcgMvxsL", "aSIOPGNWsTCtHLUdJUdGQcLguCtqqrAmSTxgFlJHNYtJbGLixB", "YafGqsvDKnMkbHiPLpIAZeXmyURdOrhgwzFQCSujJtlWBNEVxc", "cIkNeQmdFigBDhEPsnzoAKyrpVbJjTSULtwXWuvMxlOqHCYfaZ", "CaKdhcNOdkcvtUzNFhvfZQTOiLhjzNksEGvzqsBJPvHjXnlNrE", "INBHSURJLaOXSHenofYoIfmmZQsIEBCgpiKfqxsSNfdYjWVtOm", "igyvmcBIBVwDLBFjrEssYkhCDHKuGCiTZprtEpIZEFeXNwcrqF", "yHqdBFtNIpUZfSlrcQWjvPDzgTabxCnJRXmsKiYLeMAGoEVOuh", "NPtVpAmgChDujCvEyvZLmvWzwsWkpMBvNbYlrmUITISOAncWjl", "ObrAaIwTgPMzitpkZfRXHBGxsqFlovWmCVQcjLhYuJKdnEDNUS", "jTASapBLIJvyquMkGVZYwPRcDQHoNdWUlbXzKCtEnFisxhefOm", "inXnPDTcOvrBUciGBJAhRqAQebWVnRotVlbJqVwZgELpCWowty", "IYlmAvpwyoVsuBzFgTDWnfajPXrbcJKLSOkdEtRGQMeCNiZhxq", "RrnckvlYrfJRlDLPwuwKuXjuMGqCWEGvJxNkixaxLJCJTEpQSd"};
    string word = "DRHEOmJoGwLgszIMtWAjhVNvkPnpZFqXSCBlQYecbxdKifTraU";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> grid = {"OyDSqbduiGrlPFpeyuDZgYUVyPCSJVfYJemMMEVXLoZqbfFcDN", "jpgahLGntJigQWqWfzedjUZeSeihZQBqTOhRXcNdicDbyjKxWt", "jlyMhJCSvnWgLZZSbtnQgBCmPfLaGDxyRmMsltNLPdcSPomTyu", "mJcPORbzzvxKusdKFzbOMoMGjbaKdhbTYGkERCipGDyscjObJY", "KLZGtehrxQppevTZQhwaPnoiKyyCxyjIcfqbebvQRcjgMEkjwa", "qhYDkmShEwqGlImCPKPYHlhldNzpqmWsmJTevJuHWaystyvNPq", "AWXPjSwrViXtTyIsNkJpaabhCGwYOXzSclxMnaNDgZNFsedony", "PEoKGQstIDuBwAWLryxytMACXqtmttsgGSNwsjNDljUpbzuGMy", "tjPnvLaCHSSoJQCozVNEAoaIhzdVwfymEQFdxhlIZlGRYSqJAH", "vOibLnuITYTmDPqgguIZaxPvbVIyFMqkNcynKJRgjGhIsaaRhQ", "HbnmQpzEopgyEmkPoYAyVmIBYlEDSCNDqFzTTasSgZxKWnWxZr", "xxeCYrpHRgnXHbeHIRgJbsfZqNNLvopLBnITDKxkYTRqxJZkIk", "UQwWhPhXyrmfIrIjfnFFBKBxiFbQWETRqbvBaguOdHEwICnSsM", "CrUbtlOCKAhcjofvOAhxVzWgaZuEPpCNMZglfGxbtuuuFZiUNh", "hsBoWWmtroCDkdmDazUFUQlJHIqczxiJuyXLJuFWyaEFWFNyxb", "MGtkeEYUZIteztrhgpovpgOUGRSvLvXJYtCIYJbXbMsiAGJdGT", "GdkfItzmOWPHtzjEcuEFwPmXzYYAcHKgkXcJFXmJmITVndSaLg", "xUmBfLJNYXEgKUXIIkVYANEKLhDxaKVOzLVYqDSDmbUvxOMdbt", "fRVkEUovfzjcqpJGCEtSHXKDMsJoYOZOJopgLmIJmzkeYQepzt", "eMJaltoLnPIfOkqMRyKyNGQSRpHOXYeBeYjlwsOMOYblJdIBtO", "ZBxsEFkqBdwVRSXAwwpvgoTyFPRBbNunwNZmOCcscqMhhOtzaD", "tPIgEeWrXVJwbDINVqmzeIiuuLKHyLmFMHrwUmwTpYXwFfRETs", "hnWbxTwusNFbFYNRbGOmVfcAQolWjAgBtzOtAVuAEuTdDVhEoL", "FwvxpWTuQaMPsweVkQufXnNznbhFDIdsmTHFiArNclLrqnyJKG", "mNrPdnjILyGvMTQkkeCJGKJpAcBTlRQuvwEskkvBCdWPEIGgXk", "jmQBsQUSUUbFAeTTakkfIzYnxpWUkSvleBBkEBTNAnOCoLHUmb", "vpEfNlLtXwaJBInVhjFyxQYObWMGiASdgDscTuUkKmZHCRePqo", "fYHkNFWflHBdGKfXuhqIWRdjNvFeAGntIIsabbcjpXTcRxVivv", "EifzZpTsMjsIVLHBWmLMPHpLJuGuIuYHXMoZuwEVihZDJZQaFf", "vtABcJPCemHwrVjaKwWZhHeckCozBdtuSPLoVnfshgpfwzxRgF", "GvLjxCodhlAxyXrpoNHSeavffIMXpjRYMAufHPpkhQfRKdwipt", "eopmlPmmjuZVdcXryQQCsEtswJjiHeDSUsnSrFMlrxpHVwYYqb", "QVESZSogFLLmBjGcnTBJVIgTmmkbuBPaNUiSpqTOIPvCGAoBkm", "ieKFsMVXgBfrUNkFBzjFFnnbVjQkfzkMsVQSWxCckLRIeGBYSi", "ZTSFBAwlwheiXgxlOJMdfHkNeTedmklUSjUOCrUREyzMhOlpQV", "AkjSLAJEbxkofBTYUSTkhfSoBCOJTsEPfpRSyTWIRXsNDWsuEB", "rZbqVBVfkFaOifBtnTlrXJxtOhAMNqUPxRSLItCpTdilLUEtco", "BfTcLUzUmsDgxnUJOSrYrRLYrWVfoPwcEqJrQtsHQdVdWmTQrv", "oaqfEISyJZKuCxLiPfyTAfrMviZtMirBuKtZPIyoDXPvjxggUM", "cDsUamRIGTdjgMVmvTZLoBFHpTsjEZSZfEaNNqHOreXMwhAhiq", "BgdJzBMDPkRUWOQyFQiVwJXQWJvPelGgOhlsohiGjvgXuwDNde", "wuFoOoksafNGnGJUjNSddMGkILpIrgANxxGbtBuejGdgChrGuq", "qFODLOgCDMcuoHDnMYzIODuEDmrsirOqZCbOgibDWoHLmLCiCx", "JHuroOocNelxcRNOOQfYHHywoVmNQnItKWDCGiYhEnGwOlXuej", "EAGHXGuSqtQYvlibtYvzesRqThfZRJJEbaYQBjTOqrXsIpPTfJ", "MKMQrYcUSKOSYunQWRcQbfHWEHgwhTLnGrPWdaOhHaiVuQbIHl", "SXhZhuAIAqVDphYfhXXCTaVOcLcRnUoMNiWKcYNczUDqjszElO", "XzlxogZmuCzhSaKqUqdntYqrsEXGKcaWiDAJZgpWkRLIzNpdOo", "kcCqTUZRpEyENqHuYvRQSCsPZiUqgahPavKlhamzEUVzlrcOBf", "bIzsAFsdCcUThiozByGyYyDFlvTnswHdruwkjLOCrOoOPHLNVe"};
    string word = "uNdPCiSvGjhTQOEBlkXfDHmeRxItMyVqsgZKnLFcwpYboAJUaW";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> grid = {"TBGnqOJBOdxcnCJCZrJGGemDLeUoATWaqbshwhHyNlEkaIWrLa", "MDzAWPrZNVksojwhmUCGLJKRlbaqfcKiBpJuHSeIgTnyxdOEvX", "eNqUdmbiRDQIXozgkaZYcvBWCOKrGyYHAsPSJEupFxhMLVnwlP", "dXMnXspivVtQxPsKpimPJxLwDgmAQPPQXjkeuHsaWlhBxkHqtX", "tSnKOQKfpCRCveACxqHKQSzdBwgLdgnVIMWBljnACjrAygdFKb", "kEdTiQppJBsAzkeMznjGOJTonMDziDCENmrHaiVxXxTrcJlXZw", "iZntSuPUVqkhQcNYvjBbCaIAeWrFsmHdoGbxLJOfwRXzKHyMpD", "HtJkTSySeeyQORyDEwlscqOjnTAmIDjvyEOvQSncKVEHLQOSgt", "KElkMAZmVRBxWsMZlJIMmnMMxfDNcDMnvtwnKHbvnVbSBhGZkP", "YLEbxkgCMIuiSVzmKlnDXHcsGdRowQgrPeSOBUqNtayFZpfAvh", "vXdOPQRJcmIHrEkqNgGUDjfzxWbFVYdTiAgSMpLwBlshtKunCo", "TCDUSwQZvhldfbqcnRraoWuBKPFNeLpjixVHGMsXJtIpAOkVYy", "cEGInruSNkxvKaQVOULDRdfJZAFtizvXpqZeCmywBbPMlhojTY", "RlEBjQxkiPpdLmAOVilxdfNYSMytSSOhZSGpcAKNskftMKnqwI", "IqlbKvMpjrOwaJNoZSmFVxedHXLYEUUcsnzCTkgyfztGuWhiPR", "bpDRBXCtivPsKdyWwNauEJxAHUqZoQTnVLIfSMGmeczIjkYgOh", "WsxQDiawISLufAMXndBlPktZOJvzpKzgheqqUVYyHCTocGjbrR", "iSlAcWNIuxHCjPphQqrewmXavZdzYkeDLsNGyMOfJBongTbEFt", "RHTFsPYilOmIlaXsWeZgBXYtCFOUYeRkvFAWnCnNQfJbuWjvlV", "XexSyuUTzGCIQJHBjVapWrZRYdcsLFftlAFDiwvhKkMnqoEOmb", "NIlvaNgeYdOfRLpafLVkUXkHOmpLtXcWCDdlXVaFsmUNYJmQBr", "NodAJImHpgwqpTrwcEIyoOXTlGyhtaLiHcltkYRKJKFkCsUBOS", "nZaiBaOEDVYrPgxCsIFrUCWukeUGDIGZZyRlBxJPcjkPXJrMvU", "BAJZwUdHaQKHDUsqPOaKKFdJMklxQvsxKeEPanzOLeUWXbyetq", "hsAgiuDUxworMyOclnJLdNqCZRWEHXIkBItGjbeQPtzVvmYTKf", "YkCdDgopWtuAJExzberHmwQOLSfjliSyFvBZGcPTnNqUKhIVaM", "yOHvBpiUCuTJMjLGkchaebQWfgIFdVZmrwezREsNqPlAKDSZoX", "zKpTjsLIGvUaCxgeJBUuirVpEkNKbFVEhMhZKxFFLyFiQdEFMB", "kqrpaMaLCiNlgIQLYAvydsCjRnTRJBbbjQTlycKtXSEFpZoAyp", "SQRnEoWYnqQvXxcorxLWDjbBrbjcGBBiFFoRtveLqjARNkLddf", "AlCsEFyDGXutInhIFiuatKuWWeRxvJNgoIaFWByFYJVVSYYwOz", "rJbldHxzFYtwOhWtDCFegOiBMpcKiImzMLpBWnlYUygOAzJtuw", "LZvMzxTcSDoHYIbWqpGeVEmPufwORUoyCFQBgtlXdrsNnQKhia", "WejNLJuaHFkbtUPSGsZpoVOigQXdRnyAvcYKxYCEIqTBrmhzwy", "adXbGsmpQZYAEZdlfiIPEvkhRfuwozFLaNyVjsMIkCsHuxVTod", "SaMuEuHbRjZImhFKSFRMBNQwYZbMMDwCIAXqwlFwYJhtTbtawu", "CSGsPMnIQsFiabSdBNclrZoIjAXYfOEUXBDthtiDtECwieMUlz", "FbxSLoGMlYIkRJXETWOsdqAaCjNecilftpUHgurQhzVPnKZwmU", "HOIYrJswMVgLazuWElDhjoZCRSyFitaPdAfbxeKqTBkGpUmXnQ", "UjnPJATwyoiYHtvEMfRpcOakZBIFCruQeSuuVxzhblXmqgGLKs", "ZEuCTMPlVJVJqHbkUDIYiazKZCzCbZhWsyCrxPadOsDJiNhLmw", "cOXTerFgCebQjLrNtaVYqBYIcmVsTctxFQMcXmIMiICADTvDrX", "QvJojwzsnESapiGOPYyAuqhkDdxbcHXrLXvlNFRBeVZtWKgTMf", "kRkMDPEkkyzsFOPRGlfnTnbKRZvnyvqiNlKmiHdGqfNTbLZyfs", "MvbRjfFmxQzAWGnPSVIyTBkaDuwYKprOoCnXihJUclqEdHLgse", "WVDfsRmRpfAXdzfrGWHQEZDbcGhCrmJdbGjaaBYGnCTsRyRNNZ", "lMJFpljUlPZgteoSafPFKZkEAbhnELDNXjLhqegucJNGhMcOoT", "pUsaGrPZqDygQEIwTeuObKzjdLfiSMACYcmVxNHRkXlFvtAhnB", "sLIoWuRVlYGUzexHBOdSijQkTAJXfEQbKPHFCNywqtpnDgchrv", "vMHGYNyifjntPJrFEbkzUQSwZuBcgqksORcxLmpodlTDAKCehI"};
    string word = "HKFJmBIroNfkWhEYdpQznRjbuwSqMZvcDgXsUGeTVOaLyltPAC";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> grid = {"FZslJslffeOuAvkMyvHeRubkjtbCrQYefXsaUZHNnGfssrJsEo", "vbyjfUcIvhgNSSXNXWynSomhXNKBVlfjczadmFPibuizVAYyUK", "ytiWEYrkVUoByuSquBlzClsgAgUctncFtabRbyeMETPrcZbqNb", "dGATbgtVBNHlfeNfvIQOkPQGnyDjgrRlHLgmpfUDuyiRjLqtHy", "qHrwlifCoxmMQwZXCUpiaegslkVqlJxbawZxVRZQKWqdSQkMeL", "oqngGYSGdBMrJlvgXqGxcQeSlCgnFiWVOCXJMHQQKCtuokQUps", "IxmawWyNGdeyGtfhomNrDOYXPRtlRuMbyskVsIKCUrwMPIrxKZ", "fONySUclPUwrlFlLZtTqRmFPoXEFxlpFJsMYFfLznEXLfYuMNI", "pSUCchkJqeEGaAbvMWmwiQjNoTnDszKuZBVFxlLPYRyHdrXgIf", "XEnUoUgANhjkMDGCLAAtMIwXCGMVSJJSoRNgGEjxZOihmvVrMQ", "BeNKAgGswFpwTerzBwSZtoiGTdTLhQdbjcjjKXqDzQNalUTIge", "jdFQmmciVkNTvKBPnjhOiXkkLzippnHeizBdJBuiQacmuzzLpD", "KsEfrPLBawqGUZAjYvZGWRjLGHyKCFserJcNSfVuZxKeYiWXxX", "wpFhnMCKXsEzEHEsfhvphwhcvfxvqiOPDkOMOCsXiJjcIhOQxW", "krUHsXUaakNzKBeStMOWDBnqQlhmudmneEHOjxRBjZDgHpMlOd", "mIIsShkbCCNSclOFuDjXTlZMIhozHUDmwlyGeQwQyRgSEDaFeN", "epcGEMoPehPQkvqTSfxNAZBbbNAJfjBSEhhxNKyTUXrByjekcu", "aBcvKLQxgJXreIQrJucHsQuiTzvNDWyyLbngPCpLydIWCTAhgP", "xAoYKVLdPLNvsDKWBDRLCcALfzTPbJVgzWVIBOYCcKZFaMmsIS", "EEuXNWHTHiImVXUHEzVFpTSmjdbdMOSimUvGXikBeLvjhcBbmm", "NyerAwhdHMbGClWJeomYrsvhzGehaMEhKoTXYnNLjDrEGovbnr", "hgpbsdiokyIlHVIOZmEtOzPbUEVEdnhEsaAhuVBvgVBVTyRQvz", "TbsJafFlCiQEmcnwSxXkikroVTjAPuNkhXxiLbdBytuokHnDcV", "GKEPnBpCBOqXxqRcCqdflyCqHsXkNgIFAQlohlmrbmbGnfsgPp", "JgzBdHcPKdqfNcPoeIYlzAXsbdqMzzLiPGEcTDgffsUHDaFxEE", "pwyCdQqbsAGtzeTQEywwVmVKTrHiKvPQVxSVcUCaGBPUJKlZXg", "RfUIMslmOaKkgUFttSCSPcNLbOvIIWKnBdoMHjxolpsqbnHvyt", "WoQNxGjiycOOqtDIAXiJafdUjploBxXTgHdngYAgiktvOgxKNT", "MjczWkqJHRZKPDHkqnaPXpKIoFUejMaOGDDGqkbohUmyFqfvdh", "OsnMMdknmUPRouVpwwLdFiULHEdwUGrDbvKKivhvniEOzWgEyx", "PMQSqfzMWpXDDwdAgjtFYFtKWVqTeLbfUhrPaFaCKFmbNCZTbR", "snXZbYPDGbhdFfhKwQPXpCqrFxdxAdgVFBItRfEYmYhwLboMmM", "SFxENvIZeAJkLYayPTkWCURngIiSioCrRqCXxLzRKodKQVCNoa", "VXiFOGBOqPcGhDjiAibJvcEtBDtHorjKMiJOdqoWpqJIqXSydi", "LbBivMkAUbkSYIiEqNgbIVWZxcsDOiQcIhiWtWJXGlwYvBGnHl", "gkppKGMEIygQRJtlTpzYoZLlLmsuEXGTXnqBrUFWInRfAGDLIj", "YPzOjsBeCsLTIlJxTpFhccfOshkZQhZfdNYnDJtagMmigFEiZA", "ieMuszjCyubstLwbhdsbPQlNSyvrYzinnVpZnmrpHNItetpylc", "ZUgDXUXndvzLXncdrgnEDVGWDnoQmlwZZSRJfYWpbHxQXsiqhG", "ULkRosVCoOSOwPmuQIBXuIppUMgGvLomWoWRzwGLkwHxiRXxGC", "uAokFVAwUkxAWEzUohJgLgDUiyBYnzTUlJzvlIXLKbrXUNyqPf", "CXyLHNPaKZjYiMCvqtDJnJOqIRsUZwkRkHurAFTfJPJCdlKbvO", "tJNmAxEFplcfnibmOeeyniJnhhpaGcnnNRQDZrOitgRlZutUPv", "lYUeSpYrTTrzaEgGChWleccRAgigwNAfQVwlyZnQlfaAtxNECU", "zzMAyhyikFXjOlsnrPrKacHzMJyRcmztuTGyQbIdQjhpxmPEYH", "QflVvEcoSCXUjXLZkIolXooxOybWkglJYWekCEfTjcoNRwLgUJ", "DpltkgUEbMIFBMMRGyuiLLaztEMfXqFVSrtKosisTeFZBJIDSk", "cszoCagwNcCcpBYaksMjGOydqxrtsludpLPbwdvKJhrTMEwLln", "roAcYapckFGNbXoBbUIyQOMSIUeyLJUIvbFcIaSfPAanKeUUmY", "nkCdVAAlXoNbZoxYtPKUWOIzGOksWsedxJmOkRDezSXPrSjqiB"};
    string word = "yhMgmFZwiexqUzcHrDEjuAvVnSCaXJLdlkpNbTsGoQWfKIRBYP";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> grid = {"GwgahRlDUPQjZtnMbfBEzEkFSvqmexsCrdAuTpJONWVocHLXYy", "eqzpBuzWGBeMDBEBisrfCGqFdyNxTZmjKErWiyXkqnKPQadoal", "pRCNabLqcvUYroBEPsJHgieKDWjQhTwmzMSxnOZkdGFXIflyuA", "sHnXcPZvKWZcLrYhfzxvzfLJWhiTniiorrlEAOiFAXdFKSswZX", "XdAjeuDpKTaHGRfzBNLUyrtmlMxbYEiosOvIFhncWgPZQCqUJw", "UxqAvexLDUDfOGUFIkVcoHQAIueeeKtNtrNKjQpegBDKCCwKfL", "JsDaZCjoeudXHPAtcyRoqgpMEiSVGTlQnObWkFmUhrvwfzNLYK", "NASfAhGsHQErBryrvTmmSHpAIOwwsGZjSnQHHnHQAPGkfyrIFk", "wzQhPOZslgHBUAxymNdFCEcfjrbXetVqYRuMDTILpSJFiWnkGa", "pRNCBJblOVgeGxASTmHbkzzGGTUgFrchvKrEoOqYrEHDkvwxSI", "LTXYgdKvSEhNeaMufbOniGHDZIJpQWnUAymwcrPoFqVtjCsxkl", "eKdlRcOUxyqbAETGNhklgJaXYnSPtwfVHIZrivpsBuzojCMWFm", "ZbazefYqTupUsMIBVkcyoJjPFLtgrESHAlQiDNyhOwRKnvWXdC", "bPNoxRGLwsZgMCKkcIyLhASXeptfBTEvHrUFuaDYmWzqlVJdni", "frsHuCzfQvjovVElDkvGONqvtUysRntFrOjuIgAzkBLktglHaf", "vLYPqserZmwOEJdhDAgPzVHbXIRSMFKcBlxkGpjQtWCoNfiUyu", "XNgLKAFRmqEyPadQvbluHifJrzUOTxYjwhcnCuZWkoesGDpMSt", "KObPhdzSrstMYAEwDCFxaNfTiGQRVugByjWmJlqpcoxIXnZeHU", "IHLaxtBRJphKXYFbvJxkIXfDYbsKuiTNfRpujfGZNTrHUfILjo", "PXTLIfHAwownXafEjnLDhbbDNkhnBDjxMiIZYLxvTpQjWZQAXM", "YzZRlIpoeTUWkjPaQKiQvNxMbGfFVuJOsLBrXdCDhcEAgqyHwn", "oRjdpMPTEyBmIPOqYrfOyhLClsqXxsEhysJtDLSwSRVcdYwhKy", "eRhaoJXVjktFvBdAnfHwsNWEuQSUcxrCILGYMmODpblywgiPKz", "hPnHAIixEweBTbzmvCcAQqGYfoXDdOaWZLKurFJgSUlVkpsMNR", "oYeGxNZAAxtDHALrbfwRRHXgRXkkaneaLHEjlIzJLRnLvoyMOz", "iOToBfHeZEFNGRWPqXhSuKadJpYmvMVlAnzLsCrtxbyUgDISwk", "VloymfyyGlNZXXwJEPfJKUJwYCQENeVAXcrDOqEnuWSxqpMKxK", "hSKvHkRmXWuZbfiAnPLpGjaMyzQJFpOVgCUswIEodtBNceTYlx", "xqOgEIrYetwaRPmQdnbZlvWKfVHMJLpSohDjFzsCiUkXNAuyBZ", "mJxdqijPtXlGhzaLvpnqZwFfByDNRWeYMHbVOIQSErUATcKuso", "dUqvnXdDIHBVNRHPSqCNNREeowOlBaWEggjGhoIhYGFjBLuMLy", "JfzvQFGldjbgDMerShuWWpOUnNBAqsEZkTaIyxYtcXmKwHLCVo", "kReKweQwtAjziNZCcnCBaqRvnDoxBwvtMUDYXIXkWhgPVopcIE", "nQVpmYiHtJNIydwvEMFiPRjGlcDUxTLSfuOXhBCKbzrgZoWkqA", "uXADWFdufoLXbtRRQJVsZQzjoHoGCFBeTvyJJmEnIRvVHPkDtt", "VRANBKqcUTGrqOZFPojITZHpYsGZjQEAhADByQVKjNRinMDrLZ", "cGyFMLJYKCxqwevzBEkgVlDIrSTHAbZROPgnuftsjdNihmpQXa", "QETXsNbpalkfoVjfotGzOfdkaDJowLtpBGozExemBnWSJSjbHY", "thjPehnoedpaCcBJYkvhBBjDIknrTARyIjRTqwOdrPLTnahXSq", "NrhlUxCSdwYzpWZiLVRrPOFBEeqDbnXmucjHtGJakyKMgoQAfI", "aIkwnbXAyKpuLjRPDEQCeHgzvGmCSoJFBZOhiNVYTUsxMtdlrc", "pNOsqISafPiMKctZLeYtrwEuUjkgdCVFJyvXBGlRzxohTbWDmQ", "NvybOMIzKPnxjRQXblZXbWldaGcnwpbZoHhzzqCBmrmyquGnVz", "RAITiXBziIXdkQEbKOmeLhOrDgedsUKXwOsIdKHwwkltxofQnP", "LbrACRnAoLILvMzbygFYuDrYXnpUxBxNCeYjdeNGoeFWyXBgQW", "NZBWzHFbqhyZFmsTtWUKJTCGuhoqcDfqSWYdrytayAVPfZOiud", "srhIgGORnDwoVaNBTKUVqSXzlFYyQctJWpMZdLbvkACmuifexH", "PGcppwuKbfpZsYRisjUMdQYIaxAMsqZzMmdesaOYiUUKdppicB", "fQOwdKcqmGQVTusidOyaivTngiiDAmlXrSjcpsGhRMPXFlkCmd", "cRXKoblHsItywWFGiSYTUCgOMqTPpDuaVEvAZBLxhJmQkNfezd"};
    string word = "yhqBLDNAtMPCITEoJSZQzupwVHKlafURvOmbnrseFGigckXxYW";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> grid = {"biKgoOQZrwLZktYlZlbuuotxJLFrNUPwbQVZNAgFiaePBCEuZX", "OgIfLrMFxPuAIviBdYKzVwsNJZwXRmUbQcyHCehTkioLajDftW", "AhfyOMaVDtLBFwopzCJvRRQZXuWjgKSPHmxcEdYFTeUjlqIsor", "ymdzhGlHACaOAirKbTrURxujgEXkoFYWeDxLSPnIMpZuBJqwVf", "ihgATStmZsTcYFvyBmXiFrzJzmYsYwQNYOryvBTyRVikPnPMjR", "EKSHPDurYjfmQbugqKvVcKSHKpVSnmawsYAJECmHDSufgTahsq", "qjBwfUCGkDRStFNIMrgPLZheQoYTliAsVWumJNwbKzccOZxyvE", "YpvJnNZERKUMSgIIPldAVOBLQrFHyXJzsOobtiemCWSFuwckxT", "WIsqSFzhofDbBvQneDnbhDYBgrPLpxUdFQXFqAizzkMtQMuFFL", "tCSpYZhVTudisGysIWOXkmHfjnJrDRqBFAmvKlEPLcyOaUMobx", "ktinFdYhkudOoHdhrkUGnlnGgcCnBEbDvxbAlQoXYIbAmCTYYJ", "qAXITswCVTienTmEwpENwbUHwRJEdruHcYISPsmvMwIEKDVobs", "vtYGsbznhweSENZQBxafjyMHFqkdUOJgLVDTmIlicrCXpKAuoG", "lYVLaElOhypYqmVjBOyxvMAPRGTRoSDnylufhuQIquCaXTpwJJ", "uToVGVvtUrWaDQAbZyCFpIhRneNPHkXMmqJIlOifjYKsEDczgd", "jxdZgpHJqEUWgsjbnDoNytwottxLVWuZxrBZpOjWLTlhoXeJGG", "SRfXkIuSCNezpDKINvGrzEHPOZAFYGTcndzJkxUTTpTwCqEaJH", "yaLtucsUJeimewePEvKAXeNYFHdoDVbTktrRxzOCISgxhGfZqQ", "muXojfBRcDdYlSaQUhKJZhAInPeryCwvpWGiEHxMVLoIbgsFka", "IEsklPiWzvdmOBnuraghFSqtoJnHjkpSRZKQyXGCDOcbNTVMfU", "ssusyeOTrGhywkkeySeAhvzFDahNloFyvtKbsoJHykOgFdwJbE", "DfKPFhcWlmZxLkTqPpHCSnJIVabeujsozvrMgwTyELBBOQdtiG", "hslNzuscJNaeKlzdAuagOFZhJLdZzKrIUGgmVvujxLqmGqFlsk", "NEGBDolwGVASTMtwYFVNSznSezmDHFWRJQNLBuSPoOBqfdIKxX", "MtvcWuMTzUENXxbihzzdtGsbPUDMZZDBRtlYRfwzvzcelXWgjG", "ntFrDbEoJmajUPpyuviAxBSspHdIZBQTNqYghlfkCWLMrKUwez", "XkkEelnQWxVYxBSqecwISJFjnLiQqguPKZelRzkLumsinKLEaK", "OqrdspmaiXttfSwyEISAviJMKQupOmeyByCkeIYgzvWRBhioFr", "PMmjbVtJZWKQckBHLcvrgNCxRiSYAzaTnUusoqhfNjwnGBylXF", "baJTWTdDPqfUzhsGeEzmkAcoAIntlMVBXvuCpNjLrRxHwYyZiK", "DuGSTZkaMERRaZUpVuUGekbHyXoBJNaUQxeLPupCpQKKSNNoUb", "TYRYDEdWbeZimjFSwJkgoUrtOflIhBQpMVHnyNcLuxGGmXqAFK", "YxMQYROFcsmPbjEBKYPXhuLBTGMPtFqrkdjGytEHxXQJIUrnYl", "pUXOszUvNtePrpXTinhkwTyCKvfxWLXrkxCCaDjtAypNfUJagq", "HuERCDhJnQWcvzhdPpgISHslLeXkwGTaFZqAmOjfbiKpVyoNMt", "ZjTxMdJPykUtZeJRAcIDbLpiqQWNrKmwoYVGLfCFsnHYhuvOBE", "mbbFfaLOgECNHAcGMNfibcaJsYxgHzeTFOaKPLNjCkTyIugCry", "EscinnzbHpIlVOxefQNdEVyAKXnEfgnWGjcFJxjVgjcoXIDEAb", "clYvNLSEtLNyMTGrWUePGqBsxhLtAoZwKbUrNIpNHFfVszMTqf", "ifCDkSJbPBTYimquSJogadRrxlfCZkWtTojlkjEIKcBTiVHocU", "MHfKEdTCBNBpJvghcDFZiXoDVCiaEFHanXjRpvvwXmBrAGUAOj", "UWXubzLGNUsijuMOwghpGfqHNpMbxRaThOBtgPTpIDmZxGPHtQ", "YvkaYewsKjzBdFRbaLYoqPpvKzdvTFFMxzICTCOQQuiQXnabpa", "TxXUTrWRLFLvhnDenZPAqarMenPZfdUaMLwORjmdGjAUSXpaOd", "ViNmfmDqzEnJuafGbFWKdjhcPjgvUYXZtCHMAxrBeoQdwlOIkL", "wVdejozJgZiEGpPUpVVqipqPsVxusqnbUAYXdUEyWNCzgXamDL", "oNIbGWRlbUUGPclhlUBKysPYBtjBVKszIOUpRmXENMRDHcVxNQ", "SBQhWcRadCRSyaHtaDpuugegvvgMPUyJDExUxbEgkAUlYDrDVJ", "ocPlFbymZkYnRfLxjetAgYNTCVJrqhaiLWQuMlGzBIsvOwUHSR", "lLxMyoUphGqgNXOEitnfdQRWksvDcrZPebaFQwYIOzHSMSCBmV"};
    string word = "qGHrXUocRiSFBEMvfLkplmOTnaxZubjVtehPIYgJsywQNzDKAd";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> grid = {"aLykISbHVPtMijzUAsvcTXhFNnJWxwflOegCGdQuKZRYoqEBmr", "MJaZuqcwUiNrEdOFejAPtyLXsgvkmIoxGfCSBHpThKbWzVYQDR", "QTBMXqHmTaVFWCYAZunoUFFRsUcLlFIMCRktCmYgQSEjnMLUcU", "QvVNuwMhSqQUBsoEmcEnNwgCbTFzDICSktGhSzGiWPWdAEzGeY", "UPYJftXbUkRhCzxSrTUgjbVcXFZTWyFVshWERkwQZfPojRSTrl", "xzmkpXwPONucoFnbDhUHlEGLCWIqRjiQKatAyeJSMTgrdYsfvB", "ncPKjNomvyEBHxrqUVJTGXLeDtlahbiZRSMIWYukpzFOQwfgAC", "xECFhbAVwpTuLnAHPZbufSJrNWnNNwiolImhMoIztsVLXazXzi", "WhkPvvMEmyqNPatZTArcQmTTwDTMrLpMYNrTqEuCArvmcQLgbe", "tFSIxkwPcMnrZEOvlGRhimfeCXzbHqsDVBUNLdYATyWaguoKJj", "fqgALbODVUNRQzIieFcnwkGYPxBEXvdWyjMhJSpurtaCTsKoHZ", "VhavSpQYGJgrkMNovXEdAgRrodjyMBYxWavqBtOdrsTyFnVgYw", "DcuYWOkVyGqntldAevwVEoJJxDBhtwrhTKnVrQqVJOniZSGmkg", "mqxKuUfLQzVDFxoVIvfvEtLlQumPlHNbxyvuVNHtcBxXhYGKtO", "HKLFmjQYtpwFcxdhsUvdQPsLVCpipPHFyDCtkhugQKOwSTujOh", "RSuLcoZHGpjbctSniFnkzdrWKToidLlBFxNDXUHfFUlBAuBdcf", "mtzCfcrNwDqlFLvGSKuRaEdUTkYnxyZBIXJAHPQMVgpsOhWbji", "jikLdgCemxuYUloZoyKXODYxwDlAypuJDDVDTlptmTwZQdUeSa", "nATgqsGNrIwlmkQjVOivMuBoZCtdUWpEXPReDxYzahbSHFfKLc", "WCgwveyzZfjQSAULPpGqVFtEdaDMhNXmBsKnIxYRHTulrkJoOi", "YWMQvlxGvZzJAeFjQZghxOOfOSlomWmTdmBpMdrhHsxPFkiBgp", "fxxbzbJeIXiKnubVGGPAqaFHERWcYopGuzsCYtvwInfYqTxPJd", "ISapaITjoGwyqOilJcRfiaKDTBsvvwpnMPoDxPsLAcsbUHFoQd", "sTbBOyrNgDwYHcpltZCzASVKPGXhEfQMFjuUxWeRadmoInLiqv", "pEzNbnARYikjeIrGBmsugwJUWqavHlhFytCTcPSZKdXVQDfOMx", "mDEGwVyNvrkUphsLPlZRXbjIqJfxKzABdCFicQMTWoSgeaOHtu", "FGXsOpwgZIcTVyAUBhJzfCuqePikEHjmNtQKoMalbrLRYDndSW", "qVxsQJKCnojNIXFgtcDZTdGbBSMwaRPhYyHzlAUuviEpOWkfmr", "bDGKEszFYkngmLvUiepVTwRNlAdIaBocyCQXrJqSWtfPjMuOHx", "ShJImQMbelwuoFDyXTRBtqiEYWzaOvnKgjPZVCAprLHxfcNsUk", "ZNqrFwOpiuGgeCXfERnJczLKkWlDHIjhtSTABsoPmUvdaYyQbV", "CQSqGJFsmebuWIdLaRAwHyYNMpBtogPxjziXDvTKEnVfcUlhOZ", "LQwHyAJexXOcbhiMslRkufIGtZCdmKraYnBWojvTpESFgDNPUz", "yJFvbwDKgAGHzYrphVEtqeMQUajcsRxZNlTWmiPXCnBfkLoSuI", "IgNoRbUjsLWgVVVJmvHjVUjkTkXrAfKVtBWUNQsivpzFWDahaN", "NCqgdLfujobExLKdiDEDklLTWEAEeIajVLXzVeTSzWKrBGuGen", "ItHYcBgvyxKXrUOeGofFanWLQDSwVukZlATbzNCqispmRPjMdE", "lyqbhcCLSoEAabfrpDthcVuJWcTisnKUdpQlojSJNtEtpgzfCT", "AuCpnarkIEgqdKtOBPZYbiMFGwmysRTQehczfSoXxHLjNlWvJD", "uZgozeChwBVsPQmdkKiRfycXMbAxHTDraqOSjlFJUnWLYtGvIE", "UkbCGBwNAVyLehBPscRageinKdmqTcvtwIGaxZeTylJrcnPkze", "jdxVNHJwgzEYKuUQLRCGfhqatnboTSliADMpOeBkFIscXvWPmy", "soEtvDwmWTAYdDdDeSbJuaYVjfqfLhVUnoPiYHHaKPEDvyPuaz", "uCwjiLKWRbzsvUnamlByhFOMdINVTJEtQDXPoAZepkcrqGSxfH", "HTRYTcqhSdXagIHzAbUkKsZXsVkLDsUaMcqlbcpPIHXQhCeXUy", "tjqRNFWzVUsybcGkKBgCiADfZaHrIOhwpeYQvTmPxuJSdlXnoM", "ZNDQhaExIceniApMVgLSBUTHmwsqPOylKdYkXFGCJvojuRzfbW", "mWRuJEjuDcgPlTmQxByriLuLVrweaLSzuJilySQJruaQbYPLxj", "uqThEdVXUkaLCptMGsAoBjFrxzWnDKbHSNyvRQOmIweifYlPcZ", "ATjxZabEKCGlouJBsWgMPStvLdwmiVnycXQFIYhNRDfrqkUHep"};
    string word = "rAORLZUCMelwJDckgfVPatdWvHQiyFBuqESNjYszpoGmnbxhTK";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> grid = {"uJPZFGfLVUejqwnERzHsbIdWyQYNABOkXlDxvpcMahoTtigmKr", "rjtseAdpKWBmaOxoTwEXkizuSLZIYgqClDPQbMVUJnRyGhHNFf", "LcBMtaqmrDTKGOYUIBfmlKlDorPuMnQGINprYlSFtpPrWWTnAb", "YbYXAmntjxPTPsGVePdtlYRSeEwfAesCdNjthMEXizSOjTSLQd", "DpAisWNeVGQqoyMJYbmlBtSrwChHZaUPIOnRxKXkEgTFvcfzuL", "htECIUlNHOOAEveiMbiaofKitORENUgGlSjFEZgMpoYOsrowIS", "JIyKrTnZOECliAUXhYtLbaDvczgsRjQoGeWNVFkxpBuqfPHdwM", "KIbMUsxAvPSDZYqRHiJBOjzgoXNdhpnftcErVwCuaeFGmkLTWl", "hxljvlXHvmcxPeUfcjmljTDiWYxukEUIVsuoBpyAeAxGkivoRj", "iuJYDrhHQfOsNqVZbpvWALxlmFwGeUkCMjSRgctTEnXdoIBKzy", "qbMvcQjkZGtdAYLnosCwipfJzVFahBNTrlgORESKmeuIDyPHUX", "GbYxXhxRLRAUEoUVgqlATeFwwwOyEToBRbYbLcIMgnpmhMHVTd", "UzagqqOXqAhgZfmkSWTiEealmFKavVvhnryGeRxMftWwQbtOkV", "GdpfBcCrORCIWXXPaPpikHQNBbXzKzUeMIgBkzVLCiGaRKPdcB", "UolVnaolBaymjszcSadOJGCsWxaiHsIvMbdcjrVWOoYJUjUtfP", "fGnylPJZAxqhimDjCQSaTBgzrOWVokdbwLvsuFHpKRNEIeXMYU", "zOMePguNQHaxrBcEVUvbGtJDnqokFLiKfAWTYwjyCZsSdlmIpR", "dgjJpEYILlNMWmBtHvPGFucoyKCRTbVqxwQrDZifXkhUnsOzeS", "iTdolfmavefForwUKMNcqLKMjmHCrwXVMyWcyLQsxXQlekVjVn", "iVFVCYliFIpSdGLjTlOngaUjqAPcKtLhfnalTLPLcRXTumJbXK", "UIxumOHnAJLvCqXWDpGYMfbPQctydFZksjTRgSohBiVrlNzEaw", "wzewIrveZeWxdgPOTyRKfTiStwRcDcyWguXEgUpJrNpuJNrlrv", "PfDtwbxiYIGZHGWzwjxQtkmxelEOgZDPEVLBINgUpFWziVFfEE", "VuJgAwvrkCnhGFSzxpHoPRQiaKmZjYXeLBfMIbstNETcOUlWdy", "mclUuRPAKDkrVccwpbjysrIZhTTYCCPcyafJorismxYxXmKpNJ", "cZulapAJYrMkXyeDLIoQwsiEKjmxOhPtCSGTvBUNdWfHFnVzRg", "MVmCjkgJZRwBWhiNxqaFHIpOYvoPnScbDsltKrdfyXuUGzeQAT", "XdNANCtUSQBqHJkxJqJhCRpOFIBWdVHhEnCMMXjjTcZMnUFNME", "qiMgsKVPLcCXJEwNkAuxRUYvDFtfQhbTZGmaWeHjdByOIpoSlr", "sMXvxFZeJjaUfWLoqmtNSRugkyAKlPiIYTnrwHpODCVzcBEQGb", "LXNVjPdUBmQhTYklFEpbynGDtagvCuAfIOrxeJKiSzqWZowMcs", "IsRDnxpNYZQFvgKfumtUoOqkyCSTwPcaALldzBMEGjHrJXeVbh", "ZqepLJNwodOMCGERQTbjiVWgzcsIBrlhDPHFaAuUyXxYtSvnkf", "xVSFQlMojkTfVyUGlEzVkyaYaVfcxzNdXYwEdLygHwqLqqDmQD", "xbDuXgTVSNHUdVycvTcowmZatfgbYruPQTwjOlBYFBBdEPTQVH", "lAuDagnAytnrIbAoHeIBYnIBvtWrKLAMKxOSrNriilbkVmXpLf", "dIcofSsPtkMnRYJDbvGxHEZFAULTuCWimlrwzXKhypNjOeBqVg", "kMsneHyoDqZnScgQuVwYuNiOukAxhcaRQCfsocPqoCbHyzLMqz", "AajuFIRXtJAtyzyxFlAwydFWxvnUbMzmlObKkKhjApdKqLXtrx", "ZbmwxeJcLiRYvdAexpIpEhfPUhyektQgpuTnhVYRXsXTGWWsEH", "VJwpaoQSnxDSEkRNWZLMDVWMUrASJueYUfmRuyeRyJNLbfHCEO", "WjIVYdQDvortOlbafzLZchFJSPGnKUBuANesXCHwTRyxqpkMgE", "EdNXzicdhxupjPPVyqcZCIPcUObVCOgQRxJrhJqOifgErcHQaq", "kXgrJGlbbigTfELjqOccochXFITFGhsvDHrUjREXlrgNSMLAGz", "JeZQAgniNmOjvUSbMrWcaXYqPVKhDwBEFxoyuszfCTIlRdHkLt", "SecycFEBRflwFfZREyvfzrKhSVtEidNCUKQUihnOacqhZmjSys", "sTvBmmVtaAsUIHZNfmtYthCjOgfBLMdLXUxKduSNTyhXyaxXXb", "YGiPHZbxLTecXOzXGeMXzCHuiIqkPgFulpzdaLZJBEJNQSnErk", "gUppuRtiWHRqowptfoUDufkNsmjBIKJnxpWROICfBsfvZeszal", "gYBMZaRIxEgzpTwGqQvfYDHeHBhwHZpGNTfAaiBfKXjHxxPxRb"};
    string word = "RgDjENCaLdAJmqTlUyBpHwQZvzXIOKsPeVrcnYbxtFihGouWfk";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> grid = {"cTjwTDwlepKPuTNKIBizEbjEEcxsoTijBJAAbuFAIsdCOFPnIP", "yJtQMBrimSHbopNGdDYvOlEnaVecEKkCWZfPxFuRqwLXTUAIwg", "ooICDsKDKpVrmbKYIFPpVrdgCELneXTzimvdUnbTAPtZXIhJYX", "onSdKEKprtQazjVuLOgJhTiLSKBjeYumrGniJnfZyIGtqIaFhF", "nQvEbFtwYDJZfyGCaWMTAhsPisoROVSpmdxlqzgKBkXNIkHULj", "jstHXLkTmszZYzyJdibRcbwemfTUsABgVkqijmLHhpDnmIrfwi", "TmnnqqucyBGyGCNCtGwipkeMTQSOtMDglgpJkGEqfolhUwIcZY", "sfBJOCgrIWcebdTxPQGuiHDqVoFRLpwjknhSvKzMlJmAUZYEXD", "kHESbuXxNJRnUKemdDPltFYKEmidDoHRYTVsbCPuzukERJdKwZ", "zGbOlQmduEWMaLZBpjgJtIVrPhiHSoAcDXFqKCnUebxNkswYVy", "jIAGcgnLUOxvSqKampTMrEnBHkPXbQfRsoVelWJzYLhiFwyZNt", "xEhYmgdTMAybnNOtUqQlwcSJeBXVrPLasIujofiCHnKDkRFGzp", "cTwfjnSVDuhxHZKUpzrkeCtJsQaNoWGvmlXPtFMBIrqbdLyOEY", "KTDVORJETNIyxQGqoDXwnWhVbqHzbtnVDTdylXwcWgtSEsquLt", "diFKMofgILtcwYFPFPUfKtKMyTkFzAIEQHGxxyDmVWrCotQMKW", "zEaYAqNkOcttUViyzdkWKGqdcJkNZWmOXJOZeSAJhfPoPNHFOM", "ZDXKHjkjLIPJnDppVcuyLqNyAyShKCfgsiEBiVzoTTOVGnUSgR", "AZiYpdLVSVBoqaWxgdFwRcJUfwYmTTSieggaeYEfEBRBrYbvbR", "IpeJBtVQhDkSoUqvaxNMXmPjGWAgEOLswyTiHPuzrKfcdYFlRC", "IZjyvlOVtsTLvtmpdJpdStyCfbAVzMPvQhprJOPavldcsppQyK", "jYaQHFqlevKECtVGMIfPUzaWrNJSAgpkxdLiocuZRXyDsBhmOw", "QWuWFJEJuQzJsedUyReIqdFIILmqYUPatzYCBtDBDAOZHRZcdO", "bkaQmEbtiimQAjleOQmOnEfKziscQtWHuhBfGMFeFZnbjXHPed", "rXkqZkCdCryvTCYsivaRIKrDxVAAIvcLAkswdoOGzSdAjDlpnm", "IytcdgCnMNBhjZJObPwzpDOYqSFAkXfrmuEeQsviWhVGKTlLUo", "FeSsAvRKUCYMmiWHzuXBQpxEdlhnaVtoPOcjZJTLrybNxgGwkI", "MHNTGAbnklkJfxgQQZKuaRkWcEfCenLIKnFmCmErhGASXggNtY", "wHQPnJMABikKDXpzgehvWIIFUTaEmducjRSyYNCoVeqsZtbxrf", "mGieFvgsXQfVzSaIdMOERjucrDJLUnCbolwtkTKxWFyANYhuZB", "fyJXaijLoncxvbIkOMwYrqCTURNWhlKDpQuzCEsSBYGtFmdgHZ", "CURqBqlAYVDxLDfwosQhTfbWBOMgurviLtrssaPgjjTJdzrJFf", "LHzVmlixuXcPDRGyJpSdUfobEgAqFsQONrWKvwkMjECYtZaoBh", "kGeBBLGEVKUoqmWdyItQWOguQCuATaZUFOdOoXoEYMPqsAxTOx", "QIvzJNscZQqOhvuWOSPRzbZisyodBcGhRFIRHwkaOHsEjjVdjj", "PesGuDAlJFBOgSUhCRQjdIHXbkawMrEVctZWymfNYtKpixzqHT", "AjDTzqOSXoBxgUuEpaNHirBVLJYMRWmwnFKytbCsfVvhckQPlZ", "YqEBGkALmNGDpkZlNZGHyCMeBRXaRUBgmoqiHjKFjacdIwRWEL", "jfYsqdtTnpWvwciuVSMgoNlmbkCQUZeLxHlyBErXIcKJPhGOFz", "byNhKkUvpxoRUQiFwIeCTqXPtwHdRIhVfIRGsCvVmOBKaEKGnR", "CnNzhTiwsvcBeFJxELPuqrWQWOXRgApVaGYbSolfymmkKZMjUt", "eGazHTtnkRUEusEPCigGeqAvXnZKrWytKWIusKXUFQhJXWsDfK", "zbJdPjpoWVDlqnLuIHCZyFLKvMXeBcrTREsfkAUigUtOwmYxhG", "PHoWygmbrDdqFlTQIiBJStUuYELKGwCvajcNpZszRNnXkfMAxO", "QVJRIFLwDOkoBlZAbgUnaGpjMPSdsmzXpKHETfchuDCiWNYexv", "uHihOpjSolaZwTMEKXgemLGqxDsyQvJfWtFBNArcVdPCUGbndI", "sqpItcQSOvjVMioBHYUAkNclmaPhnyRxXfrWuCZbdqwFGTDgKJ", "EuFTkfGNVJHUXtaDobnrKzmcSWLxyZAwslCdpRQOviegBIMjmq", "FvWzMbwAqkOuJQIPmmGxFDRtzOwPNFYIFkXzyqmBPxHBAAkvEP", "JeBDfTpkNzhAGgYcnvlNXIQDFJmompozIyQFGIvOuRnjECMLUh", "ThbaeQzyFNxdMjDXFmSFsUTYLhaIzYyqLZGhRYMxSCcNxDvnPL"};
    string word = "uyVXtKlNAFsjTdDwLZCxIhkfUPSrYaMoROncEbgJQBHiqWemGp";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> grid = {"InAVWZvSaCKkbtNEYzmDxJjsrMwHguXLBcpedROUTQdGPFlhiy", "weYAhvRrvNFkYOfpWiCYfmDhdyHTAPxwZJyWEqcIlcOQrqkUhx", "YuJOjZhGAIgnEFrqkdxopKlvUczVeQDfSLWmCbTPNBcitLwXMy", "ihqDxbBPZgcnIuRGeJltdTSUkXEwOKHFWYypvajLMrymAaQNfz", "vzhqgHDrAGsBlUMSnoZjVmpCebfPxwudJiWYcEOKQXjLyVaFIt", "aNRhlYayEsUUbFwSzHJqrAevaqchWsuvIfGBtkBMFYvufMLTcI", "BFxbcDYKHeIlsdSiEWfXToUOrJpkLRahzVyQGCPNAuQjgOmwZt", "FSEnEaookyEWUYsPrDrBcHTRkKfAWHAAxVwegvrrQGFpJyTjWC", "YVlMJbsqwpeXvPTrUtLmGchzHayjWCuxfKDBkoZdnNsIidFQAE", "ICnmwTxzhIFPJURKPdSJmAAGchMrpkwVuTPuqIOqrjGPgbGnmT", "kbEhCtcXDBQIFSGMzmUrifYovNAgyjRpnasHLqZVPJSxeAwWTO", "gKQsNrHvZmkcaFDUiwxVSGlBJPeXLROTIMqbWozdhAujuSyptC", "OspXruuBSypsJNUlMnGWtEzFrcvuzraZzSFJHTAIJTPJweYeYo", "hMkVNgNBMtztoSvUjvJhjheGigCaFMVOTLWfFdNULZqZJXOanb", "MziERhjgxVSvpNZldqweHsYcyoWCuKUOmLtfJDrInQkkBDGbFA", "gbqtJhWjMENUhXXxCvqYCpIaRqlNmzPRmdClLnXOfNgoGTxWhM", "PNAOgPbCQFevdEvMlkHvdBABVwTggtFAqagWHYTqhzTDwuGQZX", "VNXvqbRBrJzsCvMSgVnOGjOwfFlxBbkxKlfwPzTuvBnzBzJihB", "TeqRWApfucJvrVZncQkpQneBnNdczlYMUZifwqjqfJWQDhqVzo", "eFwqJgolBnHsCbAIyvsPOhXPzITLzAwuIaBtTVvsQQBcSwrgtE", "JvYCWYzjoHFDzqzrhdsNjerAwBeZUoKuuiEnFHcQuvZixmICQN", "oMscGdtCJAjNyUlLhDqpiWxImneVYvuOgTPZwbrREaEHXIfSzK", "QYKsipnkeGOyaZSCHjtLWlVrzTMgJENwAdmfIUBoDXMxqBuFRc", "LQOfVyaDNSRzwHhxmZqUjnsIutEpJcXkWGgBiMrdFYpAvkCbTe", "rdkbeDUvlqZGMTXZVjRAfuhcgiOjtCBUlWWPiUzLbMIWuvmRoI", "VoRWQsxNGaqIbdHfwJzpEDKvhBglicrLUTjASOtXyueeYKPmCM", "wIyvqLTPRAmYOpJFBZisUEWCQrMGKfVzbcndhgexNSHakRXouj", "fgrXLSRFMDytNZpOEzIAlkChuxdjHqmcYJswTevVWPVioCQUKn", "lcPzJHBmRYRfelZgNUvtZsAELIOucDioUbGLrkfQNDaPiUpzHy", "LCkNmMUPYJDhzLiXFSXJwQwBBlKZiBoQixMlaGpgNIKizZqvXG", "uKUIvnyfvBzrJNIjAhqCmJeprzROweTCqeefqMSeCsADFGkHjB", "tfIuAGHrztqlmxBucskmGLrSbvwxARToOefyiiriwPLHXlFHMM", "vxxuLccvbzSnZuQcIPTjoOMWCWOjzafoATsZMdTDesxiYpztNB", "cKFzSLWTMYrPZQNAApPgMhSXGyaeMVtGQcUcWDMMCzlrhjnCne", "twyBNPElVuGvsmOfkTWjzrDhgdqxaeLiARbYHcoIUCiKpHnQJM", "IsocBUdjSZnNLqHaYAhuzDxrTgWpRCekmFyMPGEKVlmvJWOfti", "ZJZQUdNmULLocxFyLEPdGVfIQhDwZfualoXnaOmjpZDBltdGxs", "oGFPVEMrspMSbCCzxCavCcMetVNnVrqvPUYSfdxAlIREygvPbs", "IHXOACjdFYVvrmNhnKpxkqMwabolsQfJDSEgPUyRtZYcGJiBWL", "eVipWnLXEkHgutlxoSDOCjmYsFJGhbQfqwNcvzPayKbrMNAZdB", "oMrueRYmnjzQBEXKxwcgJCvIiWZqtAOPpdGLyTshHUzDaxlFVN", "HeQqgmZIYbXtpiCyhWsPVfTjOUkMzvFdxGRcDJwENlrBAcoaru", "sVwNgZqmLtxBEnoShJcyazRlMeIGWPdjpfQCrvHXKuwAUsDYik", "SFXrmKTGiiesuYxcXJiqatohCbaoDJDDnIhXSaMzVJUwgQGEEW", "mGigdBodVqmYqGcSYLpdXHjUoyrIISkSHjZFTghEfUCjyrKKAn", "EtFmnBbNvWKpgTLVdDcySYaQIruwfPCsOqlAUMJRozXiXEZjhx", "spdvsgDPldsmICbbsCJmLTNQlcEytWwdLfKSKHhKjLhjGYArqC", "UDvXhRqxgOpWAURAZCfUyxLIThKsbgTCbJkJnKmDINtTfnGets", "jsuZclRUjCAAzGGDgDxssfDMamyUHiVCgMypbmIaVmNAXideII", "MmISwIfDCwnINJdNjbewWWcoVLyuLkrqaLkFTltJwxJuJPPELR"};
    string word = "OecABNmgyrTUsSVHliKMXvhRFWxZztEdDGYbJQwIkpqaPnuCLj";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> grid = {"QeeOpaYTLuvtCWgpJkoUcsTbuFrFPJmclCZZVyFNtUJwnwCaEN", "WKfddkGtzqEwuVepAsmDHLgaLQRqGBZzolSHBvdeLijWXnJiqw", "SsXIeYHsWYoHXgkQGreTORLUuKsyhBXjWyqeQsxCQvfMvJzACs", "aFQJmJRySCUANSLgVFULdfccFenpvmaXgqGefPztSbOIQDUXsV", "dSoXAwKYTAOLFzZInoVOEDXQAyQJCgFKjVEhZyJevoslOkaNPj", "UuSugkMSkmzCPDAkvSnvQueHyuIYfYgkmxWrhWqbdLoBstehez", "uWBWkxcfdNDBMWGdvAqBNkwAiVHnbJnozFdODZWkIJKCLlBkTt", "HUGCGqkbtXBGWVIASzfMhnybhWxnynuoIhhJYFhKfXsvLMqRno", "DunGHSsmCmcpOWPRwQZdrSIelvSfgWhcXXjzOWfMZDUcHfwTxn", "sTzCjyPNPTaijXFQbHsoLWxDHOFrWWbfVtmqdJTzDyFrMRVbdC", "FLVcDsCJKHGWrHhSvcbiFMirGwqlqYPYuQkRztGxSFlqqmsQNS", "ZjcPULhRDoraDYRiTClPRxjqBkKjiRIAiuVmHrnnVIvDXdoBAP", "KZbhWJmWykJfYXJXQjrnIOdvFGmCngsnEZoBESyOjGkOkKvKkT", "gJrHrCZixXnMcgNyXvsaXeQlRQfrESxVJiBkUDOvIlhyhVEzIu", "BCYwwBzrMQAJiBnqXLykCpQMdTTnsevVTmCRvYvVVgbFTcZubx", "XWONTvbncSgdKvTKrpQEwJQzcPgyoNpraRYXinertQjrPQWsDL", "bqEsSOJgVDyyRIuDhxixBvXdtUAUmeclpopMpdRuOwJfdPkUrc", "RuKKJZIkAeispNEfBtPVyikigOZNBvWlFpQuClbCpEjfbHuGWM", "qqRDcXyXRqQohOUUfZLAPlRzFilejSJtUwAYoTViVPBowannUp", "NdWGngBSZnNmTsOvjGYYWGYKVPdZuxtXKkwPJplOusSzCLHgfB", "zfuhBntpnTbQIxHCQiHjTWRqylcnOpArCPcWWnupscEzJxMeKO", "kRasYiqIvamNZrQGDJJIkQxeriypxVyUZWsOegNlCSBCsFSSur", "nZNaECrRBOhuzwrvYgCRZbwYBOWgdQrCxbrqPhXRctMfZgpYhK", "TahCupSyOcKPsZxpvIJlGLXOuIbgYuBgecbLNbmBKOGYLhtVpY", "JEZsKWeVYFXYtqYBvNizjanEmHPmXNDPOJtDuBSmVuFCsWjEVy", "LTMQxXWREPIlEXwYQRjmDjnwcPUPwJYjdIMlrokwtVYDUjXjtq", "IhCxXgXRsAWjURKckBmNKsieVHDiDHRntNOuqUgSDadlysxooR", "pJLUPrwEFWjexTmdCEPhueEKmrElzmQyDrNYGCKjjrdbYiYyJG", "OTdVlCxGpSlTHnprEhxgijmTwWufNxlFMUDtmhHRCTqMTbrDvQ", "WmCjZyONshptIqMRiXQaBGuPLUnfYgoVSdwlbcADzJvExeHKrk", "wJlhtJFPwCYKBYoIebMreqSrMIMfRiVSqDenRiplmWLqFCTwal", "rhUKOKDfQcwRbiCyhOtJtXyZCNiFViGBPzPhnNIoKKXBhyKplW", "AqxvLEAJfXTznDSTWTDpocUctgkQHANGrHaWImsPmedIluirOF", "hRtJaUnvUmsnJZviIDafVJZDKeYlclkgBSuptzUWlhuDuGFOMv", "cSyWCDLhGEtxSAaCSMMybMHhzczCIpSgQsIMlRLaQpabnERcyb", "xqAqoYjpeTeFdOzFYXoQmnmrdKhPTHfsfLRnSJQpsCsHiTGtXX", "EFvPfpNjNjpcgLyriaeGfjgrzTBJlVUZhBzXsOCPjmTacYImgA", "fpkliBgDHnLqltDgBudSSMIRerjGADqqRaiMXkcmORAZpqdJHm", "vKiAVZQsoHxOVEWJbeZFqOWfvmCTQIKDSjXayDDtMNLVAZgqRk", "jbjhNWuFuiuVLGbslwybvKXBTqJwMCiqGMnvKaAIOzGyzOLImD", "mupNvMdrIGSZyZBMdnUZsbInxLGGLXTmYfFCkuYZyBFmvXDlzg", "YlwnhAifjaqUAnjMbqpHUPJSGzXXtAdEkvThamjVkHrQZocPSf", "GBJRFbphrgZgQncljdlClMUcpvotrbedHdHlLRZmzYrFkebWZJ", "iZHzzeVKXMRbvvdUmWmXYBmMERNXayoocYggTwoBnjZpyzyfiE", "tyDusuvBmBMvkcqzQlWKAdJMDIOFZPjoAOvTAtauhZPLdUOdYZ", "eIPaZAOiilVEqdXeNfAwJKzlIOpTpXwywTyQghMgsdmlpNAvQI", "PjgjqPUqJkFIoJfWKUUuxJkHHuLCFOLJNElQxWPPPndWJpNHBU", "oQIHMNTVbHkDfbiUlmztaErUUgvGJdOnnKUDMXiZEMJumBfZwd", "yCsMyRoOaSdkamtHQYxspSbBTdeiKtCYLGfGbxtroxGBqIQMje", "CZFCbpaZqzfSmiVTKyXcgYhtzVafSrEqsgJmwyEfGfFfqvmFGi"};
    string word = "QaUNPSiLcuGkhKzxBXHwdIWqnCplVtJsgvberDoMOZjfAYmERy";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> grid = {"XMgpGMECfzRpkKqxyBacSudPNwTRqpkTNdUxwlVXYAeGCvRmQr", "IneMUTpgxoQyRXayTQdwblLsXTSNYjLBtzxqRfyAsBuseRtBjw", "HUXaFepfPtohNjwJZLRngZOLJpKYQAbLdGiCxDTwWMKnuDujUj", "YOCcZfmGeVXZNPFCOXUtGHddUFPuCXpIGgsJpnrFpdaMAxoevh", "tRAoNxVVzaMEFOYYxtVKMLPElKgiSlKRvneROZnChuJoRlgNsp", "EPfoVUKhLYiLliySGuwMtzvZAhRPlPwzsRNvtQXCSTLlKJfWZS", "zeMwQcYLSrJkbZWfBIldgxHUEptVoaCvFPNsOjGDhiqmTRyKXA", "ldWRrQnMhKkIPYNkhAJvqRtHRWUnfLeNJGRKhrgJvRSTVQsirm", "aoUxAoxlcXfIxgwlMNZreSXmPzcHhiotpfRVQgaqlzVAfJNTSO", "vIospMWHGgnKoOdDCpDxZYUfEjQBuBHnEMRbFXEGIGjzXYGKHq", "XapHSbYcqRNZwgWezwVXfRbqvvsmTSRghUauNLFHqQwLbYAqwE", "EgvVKrgtUzPzcbgbnvpjBEjdYLpoHfOXNZZTbhRZBSqxqpDQNW", "wQmBzzkYscOHQOptFRdehuGLCfhtRMZwMVmSqaedypWXLlwLju", "YeRyJlEjCBJgtkRztgHFVRiMgmMbcumCLEcBBCivJWTUdfiMrF", "pFIxdkUKcOuPwJugIYjYLnFIDJVWUWFjjqYfUSODPVUjGlzwpz", "UCjslKozojtubHLafxkkIqhZtZNkwbqmfxkpscCXXxnZWolnwT", "xYSEflOZAYAJfGzvoKJgymLfOHnoBIgeQYjtoSvHQqINFEYEDv", "WmdbqHdubwhfbjMVkFrQlEcWWtfUsdYdymrFSdBCGfYfkqpuEL", "HrVPEmUahQrYCJjrVsVorNiQxqzQZzSsvMddVnLAOJtujtERJQ", "YWqCCXQeNgeOOexMvHciDIVxIgBINqMFDExyPAwAUcmpEQCoUK", "iihMOWcDiipbjHfwYihuifqSHsCLtvvUXWcijwuZVjDqzlJaTB", "rpcVtkcbkaCYYcLnXPTzOQIvuaZCzttqfJaZdTzVZtgPlGBGry", "TErEQVoWIibxOdXLlcxAchLNVkLviNESLjoLKedqdDCVPdakkG", "CXEoenFxhnyGQIGEwUMddsBcLBxCohjhYGYYlLpGHLbOOYkDdV", "jZZSMhFoIWzgzyKqQCjSXvgjKnlGrOXAgdkcCvmlrZsyUiVgrC", "xlFhwHSRTncqUHPNpOUqAKtlpIruvmcbvhsgMTWEglObZNTAxt", "zwDGhpxInmjgCNkochgLsYZMyDwiFTzQCsEoGCGknHHEtZnIjH", "hhaZilkSHndWQKwZaqJDQwhCTokBaaCcOHWafCoLzFRwmcZfbg", "UDOZRtGUDtgdPQdOAJlNnBRJhVXfgFuPpEceLkYkePQKQFqrPA", "kcHTxKeiwOINrPYIdZSmTiiCjxmFdyrkFBgOajPjwXzRimLYHP", "YLPSkLBkRyYqYRMdNaWZFXYWoUOJDRUZYcCWXQsYEgMgglmZLY", "nNtkbJOmIBBrxLmXsytIKqwAiGjTMQyKvokjHDIOTkPHNhMOKD", "OjKVvhNNnbZtlPhPeMsJJpoPabGipwhuaHcEiCbNxriioQhUEo", "oAkQooZqOwKtMjuhKIuVExClqOdmjVsJiVAsyahPMnccwNXhjc", "bJzljvaFgPDsKMkmgbNymZazSybGeEaGNxqDvzkHiKEryQxSWd", "SKBAnCVvSoaPuaBURrmGRlbTmEqdPodMZSNGcWZkkCBShoHJGk", "dHTiPNIdurGLiaHBWVuRNOOvkMFyyxByYvfzDXUcasrtBLFseU", "EbJWDqoAfnEacsqQmztTuzftzPulErGEuMvnzbxFcUfkxNvFPx", "htYaLIDwNisprqwpJeUCCUGhsYePIcVfLYGIZPMLNaFITkIllM", "VfndgHDrQWUWcexALEbbzSMJbAoCKZJvLyArAeQMbYhJHNOCPi", "EGuxmIcQrvVLggSHrjfswgtaedElVHNWCJCXnjcWLEpWaybysR", "MzwSIIMyzNLPLpOfPThHWcMuwRaTxeIOPuwlecDTDyoYcpeVPN", "aubBaLrnDgxyPdgsEWzlvDLQreIHbnlHbRzhTttDAbZBvhUvze", "WqxNuFELlaHxFjIcDoEBYybbnXienYxaqwJArCAmCNXDsZKPxJ", "UTNzXHXXpETqrYEuSmPPUbDqZlvDJKPlDRQwYIlAuoAeYvjdnn", "TyQzyKXTFBFKFRhRiGkfpveSfuDbGgDoVRcmkIfqmOxaMDczob", "FBGxYVDpZumoXaNjUlMExYXlciYnmCnYmhZQJZJnKeyFDlyphI", "zVMdTOpsswlSXyhWjSaUojfVMCHsOkfDirvPgzjIjmGvINWtKl", "WxlWBirOcgvymqNGHDFWPVApdNWBkGAVQuUHItSqowNmrRQcqZ", "ssyfHnlBRFSgrclKqfGhkvhFFcJELDixBGokWYqUtIvhndPHJs"};
    string word = "xBeUJqYANfTOjGsZgcbkvIWlhiVKrozQPaMywmdXCFRDpESHLt";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> grid = {"KuYYQHhGLLlNFXaoDAKLmsfjeGepVlZWnHnRRyhBnseinboFWX", "qxTExNNukmCIAeJyzoroJHnkqJnSKEHSaLkuSMsZXdHfnotWPv", "MkNYODJdTjftZRQxbXmGIhvnSgrLioPUWAKlsHuwcayEeFBpzV", "knCqFrWjJbDUXXytyXiAUTGZEDHZZZgVIkIXsYvFYUsVYizKIR", "AOXttuxiiLctAXVQBOlaxPWNVwwRFdTjJPraKdlBqSWeiEqFCZ", "raElwyakfHxUedYguRUzvAvaDCIavXjVzkBOjyRuOsLxqadqHE", "QAJIdnsrhBNkoZbpzjvMWOEUSiKeGDmYfTwLcRCtgPHxulqyXF", "XPAEhMLwngfYcdGqeBDiQTVbrSykxIalsCHZzFRvUmOpujoNWJ", "sOHEfZRNYKMWhIVDSkpPczAbyQGUgndwBLJlrvjCxateFmuoXT", "ipRqeTtLvblQBhNEwIfdXMzcHmjUKsgoFYZPOnyJDuCxkrSAWa", "gNlHdokYrABZznjtqimRJGDycOUKfawLsubSQVePpCWhEvTMIF", "yZfoQMtEKkqVaOUSHdbgrpzFXvBjucWCJslNhiPGeADwmRxYTI", "TBRniryCbGkvQPItMVHwmNUpSFsgxfEcKuohXDqAWZzJYeLjda", "jkwerGtRCygZJPvaLpSbzFBdhsuQYHWmMEAUVqinoNcfTlxXID", "uvEddhTpNiXsoXkxvYvNREEiDkPvLOGlfjRRcvWwOopbbGqnMZ", "vaHIzRTJNpLlqmSwQNNvFHzgyaWBRGALQCWybDASbIxqESFUIp", "gtcsipqFZoqkFyUKfRkTAtzenSbrTWYbIAEyFMXySXDCaKFOAu", "FPkBQITbaCgRZUmuVMftjSdONhXiAsxrpyELKzWwoDvlnYqcHe", "CPEWnJTHpbazeQlXNuYfUDOjcgoyVIhFRkGsMtLwBiSrxAvmKZ", "zIgVdoCHMAhamUkXLGNuctrpRYvbnSEPBfQsiqwKOeZJTWjFlx", "HYSTUTYSxKdFzDwdaUzgFeoBKSnkbrHsZXkWrhMJmfFOwJTWvV", "VwJZpvaswVqIDvJpTAXgkOFSMdsjthObWNkCmjLWuCIusSVxhG", "bqxJsHPRMCviUOlLNeBItzTVmXyEAYGZjScDwkgQWopFKrufna", "aBUyzYGvAHixIqEVusLNQogRtrZweMhCDjbTSfmXkdJFKlOpcn", "HyhOAIMVdsZgLxPGuXjooiQuDLuKaVgQtysmwnDESXsGSClNFx", "kEblVTrKCPgAqBnmMOZoXupHjdRiILfaFwxtcsSYyeGJNUvQWh", "xmTMXiHPEZkQOAqBRpVyKnSGeFjlgtwNYbLUDWzahIJfsvcduC", "tWgpjFPXfhAMbJkYwrpEBVniUpmRHFopeTSDXIIwiPsOaUXncF", "mXuycrAjIOfeaQspMBwXwALsYWvOwpdhonoMSajEYkVctGjCkN", "lpdqwpGuBgTlGJdAoUssoKbnjeqWwbzydjGYLqahuWnhIRRqPj", "RslqRnCnzoGjkEllIBRCDCSvznEHCUiscbqFyzRQUywSwyLXED", "gUsmpwRnOuPDcdFEzXkCaTWQxKheyvjAJNBobHVLlirqZMtfSI", "zctewBssJHGRqSQgexISmsDkOKDjXtWZozQyVmqHdTzxSAXtHR", "TRrKkOwwBCSJVeAfWDFVWriTXzxPZEfxXNIUxVldkdjYOuBxso", "paQoPJsqClVUOYjwNDLSMkEFuzZeBGgyctfrAXdnHWxhbKmRiT", "imgTzhTtYrjMkSFzirEFxVcRhbTpiIRliRkTQqxBWYWyeKMtVa", "uDGpKjgEdqGQeulXXJhVRZcHyuTehzGRjamMEKhzbtgjpBfvSu", "haPvqcecjZsLirtDYWLIUHimQTnCredebgNaTgzqXLaFSkcbxG", "QjQGJpkZuShcEVPFzqxrsWxDBzccpXSSaogRIYbromMHkRbTRb", "KeYNDXgYRNvvbATdmvLScTObfmObXtyFYcGALFFrWoToqhcgxb", "eiNnDBIHJczRpFmVrXSMuUKoahfkxbqgjwlPytLEYsvCOZAWQd", "EuUCtfovMiakybLhHFjNZsPxnAXGwVBqcKIeWOYRzpQJlTgdDr", "lbigZHxIpnfMXKDCyrOuLvQVkGPEWjYozhBsFtwAmUNceqJSRa", "BTReVvMOUwCgXPqIYbGFAhSjKQHWukxDaNoJsdzLpltEyinmrc", "GHoxEHQuIQRybuMvWmRnrXnaDqAarPPGrPJjHEFvIoBMxrGxCT", "YsAugbfujgbEWwTfMpPxlRRcQQNtfZIYIFGsTIugfsquyrrjKf", "nEPsWOFDEjCRpVqUooBTtNNwQlcagvINPMmIAOcaLKGpMqTCSF", "nqCJsAOcMEaNQXliKowgSWbvkpyTfuYVhIDzGetdHxLjmBZrUF", "SApjOvsPXCgVGFmIrWwHLUoTNZbDnBluixRMykQdYfcJeKhqEa", "aFmNkvahdLaaXKLDIbNnvjpIpfRBeyeDPwIerTDottMxIaNliM"};
    string word = "FPUqfDgsNVeAoJdjLxTSvZbwEzuXBtMknKyYmHlOIcRGQCprWa";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
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

int test100() {
    vector<string> grid = {"sdf", "bca", "hgf"};
    string word = "abc";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> grid = {"cdf", "bca", "agf"};
    string word = "abc";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> grid = {"xSZB", "gbHk", "kbgH", "WFSg"};
    string word = "bkHg";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> grid = {"eKUNGHktLB", "EtBFDndTlG", "RRFHmjwrDs", "eKYsHlYhlu", "ljxyJSwTds", "dUQToyWHvl", "azDPWRwioE", "EARdktoDBh", "dmIqcGSvCE", "wXypNQEMxz"};
    string word = "oDmWcJHGNk";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> grid = {"ab", "bA"};
    string word = "aB";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> grid = {"eKUNGHktLB", "EtBFDndTlG", "RRFHmjwrDs", "eKYsHlYhlu", "ljxyJSwTds", "dUQToyWHvl", "azDPWRwioE", "EARdktoDBh", "dmIqcGSvCE", "wXypNQEMxz"};
    string word = "oDmWcJHGNk";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> grid = {"sdf", "bca", "hgf"};
    string word = "abc";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> grid = {"rstuvwXYZABCabcdefghijklmnopq", "stuvwXYZABCabcdefghijklmnopqr", "tuvwXYZABCabcdefghijklmnopqrs", "uvwXYZABCabcdefghijklmnopqrst", "vwXYZABCabcdefghijklmnopqrstu", "wXYZABCabcdefghijklmnopqrstuv", "XYZABCabcdefghijklmnopqrstuvw", "YZABCabcdefghijklmnopqrstuvwX", "ZABCabcdefghijklmnopqrstuvwXY", "ABCabcdefghijklmnopqrstuvwXYZ", "BCabcdefghijklmnopqrstuvwXYZA", "CabcdefghijklmnopqrstuvwXYZAB", "abcdefghijklmnopqrstuvwXYZABC", "bcdefghijklmnopqrstuvwXYZABCa", "cdefghijklmnopqrstuvwXYZABCab", "defghijklmnopqrstuvwXYZABCabc", "efghijklmnopqrstuvwXYZABCabcd", "fghijklmnopqrstuvwXYZABCabcde", "hijklmnopqrstuvwXYZABCabcdefg", "ghijklmnopqrstuvwXYZABCabcdef", "ijklmnopqrstuvwXYZABCabcdefgh", "jklmnopqrstuvwXYZABCabcdefghi", "klmnopqrstuvwXYZABCabcdefghij", "mnopqrstuvwXYZABCabcdefghijkl", "lmnopqrstuvwXYZABCabcdefghijk", "nopqrstuvwXYZABCabcdefghijklm", "opqrstuvwXYZABCabcdefghijklmn", "pqrstuvwXYZABCabcdefghijklmno", "qrstuvwXYZABCabcdefghijklmnop"};
    string word = "eXangmvudoCYlhBptfcsqkrwAjibZ";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> grid = {"ab", "bA"};
    string word = "aB";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> grid = {"aaaa", "aaaa", "aaaa", "dfas"};
    string word = "asdf";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> grid = {"RR", "RR"};
    string word = "Ru";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> grid = {"ade", "qbd", "tpc"};
    string word = "abc";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> grid = {"efghijklmnopqrstuvwxyzabcdefghijklmnopqrsvwxyzabca", "bcdefghijklmnopqrstuvwxyzabcdefghijklmnouvwkyzabdb", "efghijklmnopqrstuvwxyzabcdefghijklmnopqruvwxyzabec", "bcdefghijklmnopqrstuvwxyzabcdefghijklmnouvwxyzabfd", "defghijklmnopqrstuvwxyzabcdefghijklmnopquvwxyzabge", "bcdefghijklmnopqrstuvwxyzabcdefghijklmnouvwxyzabhf", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnuvwxyzabig", "fghijklmnopqrstuvwxyzabcdefghijklmnopqrsuvwxyzabjh", "cdefghijklmnopqrstuvwxyzabcdefghijklmnopuvwxyzabki", "cdefghijklmnopqrstuvwxyzabcdefghijklmnopuvwxyzablj", "bcdefghijklmnopqrstuvwxyzabcdefghijklmnouvwxyzabmk", "bcdefghijklmnopqrstuvwxyzabcdefghijklmnouvwxyzabnl", "ghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabom", "bcdefghijklmnopqrstuvwxyzabcdefghijklmnouvwxyzabpn", "ghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabqo", "bcdefghijklmnopqrstuvwxyzabcdefghijklmnouvwxyzabrp", "ghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabsq", "bcdefghijklmnopqrstuvwxyzabcdefghijklmnouvwxyzabtr", "bcdefghijklmnopqrstuvwxyzabcdefghijklmnouvwxyzabus", "cdefghijklmnopqrstuvwxyzabcdefghijklmnopuvwxyzabvt", "defghijklmnopqrstuvwxyzabcdefghijklmnopquvwxyzabwu", "efghijklmnopqrstuvwxyzabcdefghijklmnopqruvwxyzabxv", "fghijklmnopqrstuvwxyzabcdefghijklmnopqrsuvwxyzabyw", "ghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabxx", "ghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcy", "abcdefghijklmnopqrstuvwxyzabcdefghijklmnuvwxyzabcz", "bcdefghijklmnopqrstuvwxyzabcdefghijklmnouvwxyzabca", "cdefghijklmnopqrstuvwxyzabcdefghijklmnopuvwxyzabcb", "defghijklmnopqrstuvwxyzabcdefghijklmnopquvwxyzabcc", "efghijklmnopqrstuvwxyzabcdefghijklmnopqruvwxyzabcd", "fghijklmnopqrstuvwxyzabcdefghijklmnopqrsuvwxyzabce", "ghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcf", "ghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcg", "fghijklmnopqrstuvwxyzabcdefghijklmnopqrsuvwxyzabch", "efghijklmnopqrstuvwxyzabcdefghijklmnopqruvwxyzabci", "bcdefghijklmnopqrstuvwxyzabcdefghijklmnouvwxyzabcj", "efghijklmnopqrstuvwxyzabcdefghijklmnopqruvwxyzabck", "bcdefghijklmnopqrstuvwxyzabcdefghijklmnouvwxyzabcl", "defghijklmnopqrstuvwxyzabcdefghijklmnopquvwxyzabcm", "bcdefghijklmnopqrstuvwxyzabcdefghijklmnouvwxyzabcn", "efghijklmnopqrstuvwxyzabcdefghijklmnopqrsvwxyzabca", "bcdefghijklmnopqrstuvwxyzabcdefghijklmnouvwkyzabdb", "efghijklmnopqrstuvwxyzabcdefghijklmnopqruvwxyzabec", "bcdefghijklmnopqrstuvwxyzabcdefghijklmnouvwxyzabfd", "defghijklmnopqrstuvwxyzabcdefghijklmnopquvwxyzabge", "defghijklmnopqrstuvwxyzabcdefghijklmnopquvwxyzabge", "defghijklmnopqrstuvwxyzabcdefghijklmnopquvwxyzabge", "defghijklmnopqrstuvwxyzabcdefghijklmnopquvwxyzabge", "defghijklmnopqrstuvwxyzabcdefghijklmnopquvwxyzabge", "defghijklmnopqrstuvwxyzabcdefghijklmnopquvwxyzabge"};
    string word = "aAbBcCdDefFghEijklHmnJopKqrsLMtuvNwOxyPzQRSTUVWXYZ";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> grid = {"abcd", "dcba", "dcba", "dcba"};
    string word = "dcba";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> grid = {"Dddd", "Tttt", "Prrr", "Rrrr"};
    string word = "DTRP";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> grid = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    string word = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWX";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> grid = {"aa", "cc"};
    string word = "ab";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> grid = {"sbf", "adc", "hgf"};
    string word = "gdb";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> grid = {"mbjyaBKFDpsCGOxHAPuritwIEhglfecvoJkNzdnqML", "KyAPbsGFfBkcxENODdnajzgLhpriqvHMuClmtoIeJw", "LfcFBwJEHsbvMaCIAPKlyNnxGdeqhmDuktzrjipgOo", "abejAxuldDKrkhvPpInwCiLfqzcBsMtOyGHEFNmgJo", "rIHnBFhjtvkmyqKgsAMaoNPuwEJCLiGDfcdbzleOxp", "jhJPxwHzivElftLkepuAqDadBNcyosMCnmFGgIbKrO", "bAntOGwPCjufpdeKEMcxiNJrFIlDzhvLHaBsgmoqky", "MDjhyNfprBliLsdzIkAwFEHGePbKxmCJcugqnoOtav", "hGiDLKmfeygltqOscMHkjzdEFJxuIBbwnvCaoApPrN", "PAEOaIGBfJHjlCusbwznyrFcoNMkmxtqKihvDgeLpd", "aNnOAdGDuzochvwLIpktKbBFfxgrJmlqPsHEjiMCye", "LJeyhbtuCmzFIMkiBawsNnrOKpfGgAPcqdvjHxDloE", "AdnaDbyfCoFwPKcuHizIOLvlsgthxjmGkBqpNEMreJ", "ErMDnyCqlLIzAFbwuGxidJfgcoNsetmvpHOPkBKhaj", "CtNkwBPAyfhiEoaeqLMjOxFlJHnrGdcgumIzDKpsbv", "neItkfGcgHhxwduLqraBACiyjPpOvKNsblJoMDFEmz", "ilaBGkqmLMrgyEuCfspJtnbxwFePhNvKjHIczDOdAo", "xtlJbIpdyuFHvANkKnMBsaDGjPfcLwmEqregChOzoi", "bkdifFrnPLcgGuNOvlBeywmEMtxzhqjpAIKHJaoDCs", "eNjipmDwkqzxtyFGdBbuLaKJAsnIPlOfCMHoErhgvc", "hrxHlzvJIcGOaqbyNpACmkuEiPdjnKgewfosFBMDLt", "tDpoMBFAhiqwudkcCJaOryHGjgEeKbxIfznLvlsmPN", "HhGkagCArvxmujdtMepzliwIPLFqbKyBOonfsJcNDE", "AcPxwNaOpMLokbBClqJzfEiGrsHtnjmyegFIdKhDuv", "mxsgCBwFJqeKMNpOrlhzbjDcHuofyAvkidEPIaGtLn", "spIMPnOlryweEFxmvKhjouNzfBaDgqcAbkLHGCdtJi", "OsrFnodmhaulwPKItvcyMxLefqCBGjbpkgDANHziJE", "jwPiBaNqrCGEFomdIlzJhDtnpMxHgvuyALkfbOKcse", "MtPwJBvKHnklyxfAgoueNczbCDaLhiqOrIpsdEFmjG", "gKjoxclJewCnuBFONHIkfEDPbGAvdzyLsrmtqaMpih", "KdAwaqLpMbBrehnlEmoigxsPFOJjIfcHyuCvzGktDN", "uKBNMymcIgxvzCswbfFpiDdortPjLEeknhlGJAHqOa", "EwrinlIKuGgCpMdhzoLeBFqmsfyPvOajHJAcNbtxkD", "xNMgKkauDLIqzlsniGbHEJjFdwOhopAmrtCcPBvyef", "FOEtmNChlpuAnMyDovbLGzdBrwgeKjckPxafJiqsHI", "NCiDnfAHljamvBhErqpOoMsGbJduwIKxgFtzecLyPk", "LgiDICdjbesGMPxwEfBOhoAkFpqavrlJzKcNmuytHn", "vPjelqFMKnINcJitbkOrEwCDzgpfyshBxmodaAuHLG", "AztKBmNibroanJpqCMuyDjfshcxFEdkwIGlgLPHeOv", "ByabxoJDAjrKcHPFlvkpOhEsifgIznMwqudGmLCNet", "emuCthGyclOwvADNpJbIEPBdgaMHKjrFiLnfxsqkoz", "eIsqObzAnCfjyxwEDkmBMdgKopvNJFtclHhuiaGrLP"};
    string word = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOP";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> grid = {"abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ", "abcdefghijklmnopqrstuvwxyBCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string word = "ZYXWVUTSRQPONMLKJIHGFEDCByxwvutsrqponmlkjihgfedcba";
    WordsGame* pObj = new WordsGame();
    clock_t start = clock();
    int result = pObj->minimumSwaps(grid, word);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22767349&rd=13908&pm=10708
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <deque> 
#include <stack> 
#include <bitset> 
#include <string> 
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
#include <algorithm> 
using namespace std; 
 
class WordsGame 
{ 
public: 
  int minimumSwaps(vector <string> grid, string word) 
  { 
    vector<char>vv; 
        int m=word.length(),i,j; 
        int minn=0x7fffffff; 
    for(i=0;i<m;i++){vv.clear(); 
             for(j=0;j<m;j++) 
             vv.push_back(grid[i][j]); 
 
             int sum=0; 
             bool flag=1; 
             for(j=0;j<m;j++) 
             { 
                if(word[j]==vv[j]) 
                continue;int k; 
                for(k=j+1;k<m;k++) 
                if(vv[k]==word[j]) 
                 break; 
                 if(k==m) 
                 {flag=0;break;} 
                 else 
                 { 
                     vv[k]=vv[j]; 
                     sum++;     
                 }                
             }  
             if(flag&&sum<minn)minn=sum;                 
        } 
        for(i=0;i<m;i++){vv.clear(); 
             for(j=0;j<m;j++) 
             vv.push_back(grid[j][i]); 
 
             int sum=0; 
             bool flag=1; 
             for(j=0;j<m;j++) 
             { 
                if(word[j]==vv[j]) 
                continue;int k; 
                for(k=j+1;k<m;k++) 
                if(vv[k]==word[j]) 
                 break; 
                 if(k==m) 
                 {flag=0;break;} 
                 else 
                 { 
                     vv[k]=vv[j]; 
                     sum++;     
                 }                
             }  
             if(flag&&sum<minn)minn=sum;                 
        }if(minn==0x7fffffff)return -1; 
        return minn; 
  } 
};

********************************************************************************
*******************************************************************************/