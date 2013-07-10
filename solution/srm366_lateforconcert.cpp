/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7827
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

class LateForConcert {
public:
    double bestRoute(vector<string> cityMap, int timeLeft, double speedingTicket, double redLight);
};

double LateForConcert::bestRoute(vector<string> cityMap, int timeLeft, double speedingTicket, double redLight) {
    double ret;
    return ret;
}


int test0() {
    vector<string> cityMap = {"XXXXXXXX", "XY...S.X", "XXXXXX.X", "C..S.TT."};
    int timeLeft = 14;
    double speedingTicket = 60.0;
    double redLight = 93.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 185.1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> cityMap = {"XX..XX", "Y....C"};
    int timeLeft = 9;
    double speedingTicket = 52.0;
    double redLight = 874.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> cityMap = {"SSXTTXS", "TSS..T.", "TSX..CS", "X..X.SX", "SXYST.S"};
    int timeLeft = 8;
    double speedingTicket = 902.9244188898721;
    double redLight = 657.7809919381947;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 1363.3711132466083;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> cityMap = {"YTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTC"};
    int timeLeft = 67;
    double speedingTicket = 123.4;
    double redLight = 42.192;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 886.032;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> cityMap = {"C.......", "SXXSXXX.", "TSSTY..."};
    int timeLeft = 12;
    double speedingTicket = 1.23456789;
    double redLight = 123.456789;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> cityMap = {"ST.X.SST..T..T", "STS.T...XSTSS.", "T.T.X..TXTST..", ".T...TX...SXS.", "S.S.S.TX.SXST.", "STXXXX.XT..STS", "S..X..TS.TS...", ".SS.TXS.XY.S.S", "T.X..ST.XS.SS.", "SSST...TTS..XT", ".TTXTSSTSS..T.", "SSXSS..S.TT.X.", "XS.XTTSXSXTSS.", "TX.SSX..T.X.TT", ".ST.X.XXS..TTS", "TTXTSS...X..XX", "S.T.TX..SSXS..", "XXS.TXSST..T.S", "S.X..TXXT.TST.", "TS.XSTTXSTS.TX", "S.SS..SSTTX.ST", "SX.TTXTX.TS.ST", ".S..SXX.XS.SS.", "SX..SSTXS...ST", "XTS...STXS.T..", "SSTSXS.SSXXTTS", "SSSS.TS.S.TST.", "XTSX.S.XSXX.TT", "TS.XX.STCSTXT.", "..SS.T.X.T..T.", "S..T.ST..S....", ".TXTXSS.STX.SX", ".XXT..TSSSXSTS", "ST.....T.X.T.T", ".S.....ST..STT", ".XXSSSTSX..TX.", ".XSXSTTS.XT..S", "S..STT.TXT...T", "SSSX.TSXS..TTX", "T..SS.XST.TX.X", "T.....STT.SXST", ".S.TXS..X.T.S.", "X.STS..STSTT.X", "S.T..SXXST...T", ".SSXSSS.TST.ST", "S..TSSXSSTT.TS"};
    int timeLeft = 54;
    double speedingTicket = 552.4416589166623;
    double redLight = 959.2699826918604;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 1104.8833178333246;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> cityMap = {"TT...", "TSS..", "TTC..", ".S.TS", "..Y.S", "TXSTT", "T.XTS"};
    int timeLeft = 6;
    double speedingTicket = 343.690328909251;
    double redLight = 409.1373483168513;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 286.3961438217959;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> cityMap = {".XSTSSS.S...XT.SXSXSTT.SX", "XSSTXT....TST..XST..SSTX.", "STT.SSS.T..S..S...SSX....", "S...T.TX.SSX..STXXSTTT.SX", "S..S..TTX.S..S....XX.T..S", ".SS..SXT.TXXSXXTS.TSS.SST", "..TXSSSTTS..S.XX.T.S.T...", "TTTX.TS.T.TT..XX..XS.TSTS", ".S.TXTS...TT.S.SSSTTS.XTS", "TS.TC.XT...T.X..SX..T..S.", "T..S..T.SX.T.XT.TSTXTXSTT", "SS.T.TSTXSX.TXS.XXTSSSXTT", "XXTTTT..TTTTTTTT.TS.X.STX", "..STST.S.SSS..S...TTSSS.X", "...TTXTTS.TTTST..T.TSXXTX", "TSSXX..TTTXSSST.T.S.TSST.", "SX.TXTX..SS..X..X.SXXT.TX", "XST...X.TTSXTSTT..T....ST", "..TTX.ST.XST...TTS.X.ST.S", "T.TSXXSSTSSTT.TXS.XX.....", "S....TXSTXSS.STS...TTSS.S", "SXSTXT.STSX.SXTTTTSS.SXST", "XS...XSXT.T.STTSS..XTTTT.", "XSSTTXSSTS..T.T.XTSSSST.S", "X.STSTSXT.SSTXTXXT.TX.TS.", "TSTXSXTS.XSS...S..XX.X..S", "TS..T..T.T.TT.SSSST.S..S.", "SXSSX.ST.XX..T....TTTTT..", "T.STS.XSTT.STXS.S.XXTX.SS", ".XT.TSTS.S...STTTSS.ST.TX", "SXXSTX.STT.TTSSS.XXS.TSXT", ".XXXTTSSX..TT.TTXTXS.TYTS", ".TS....TSSSTT..S.STTT.TSS", "TSTX.X..S.XS..TSX...T.SSS", "SS..STST.XX...XTTTSSSX.TT", "....TTT.ST....TT.SSTTSTSS", "XT.X..TS.TXSTTSTXSTT.T.XS", "XX.TSSTSTS...TSST.X...X.S", ".TS.SXT.T..S.TSX...T.T.S.", "TXTT..T.T...S.STTSTT.ST..", "SXSSXSSXSTT..T.S..XSTST.."};
    int timeLeft = 51;
    double speedingTicket = 891.8892263294505;
    double redLight = 982.8804685149997;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 4739.716662869851;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> cityMap = {"T.STTSSSTTTTXT", ".T.TTXSTTT.Y.S", ".CSS.S..SS..ST", "TSXTSXSSS.TT.T"};
    int timeLeft = 29;
    double speedingTicket = 866.0617819631996;
    double redLight = 129.8890662630136;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 866.0617819631996;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> cityMap = {"TSS..TX.T.S.X...TSXXSS....SXSTTX.TTX.T.SST.X..S..", ".TS.X.SS.XT.TTX.S.TT..XTTXX.XXTS..XT....XS...SSS.", "T...SS.X.STSTTT.TT.SS.X..TXT.XX.XS..TXTSSSSTTT...", ".XTXX.T.XS.TXSTST...CX.T.TSTXXXSXTT.X..SSSXSTSXSS", "T.SX.T.X..SXS.S.TTXTSXTSX.SSX.TSX..XSSS.TSSTS.T.T", ".SSST.STSTXTT...TSXTS.X.SST.TSYT..XSTSSST.TT.S..T", "...S.TS.TST..XSXTT.XTT..TTSSS.TTTTS.X...TXS.STS.S"};
    int timeLeft = 85;
    double speedingTicket = 234.01166633359452;
    double redLight = 232.97786977418613;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 702.0349990007835;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> cityMap = {"T....TSTT", "XXXT..SST", "XXT.SSX.T", "..X.STXS.", "SSSXSTTTX", ".XTS.X..T", "SS.STT.TT", "TX.TS.XT.", "T.TTT.TST", "SS..TTS.T", "XXXSY.TTT", "TTT..X...", "S...XSSSX", "SXTS.SSTX", ".T.SSXTTX", "XX.SXSCST", "..ST..X..", "S.......T", "..SSTS.T.", "T.T...X.T", "XST.S...T", "STTTSTTT.", "TT.T.TT.S", "TT.S.XTX.", "SSX.T.TSS", "XT.XST..S", "XXT.S.T.."};
    int timeLeft = 12;
    double speedingTicket = 790.728926008889;
    double redLight = 931.9848161992192;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 1443.1182973483424;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> cityMap = {"...", ".TS", ".TT", ".XS", "XTS", "TXS", "TTS", "XX.", "S.S", "S..", ".XT", "TXX", ".T.", "TTS", "..C", "...", ".S.", "Y.T", "...", ".XT", "SSX", "TTS", "T..", "S.T", ".TX", "T.S"};
    int timeLeft = 6;
    double speedingTicket = 902.1678687372121;
    double redLight = 371.05900720400047;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> cityMap = {"S.STTS.XT..SS..SXS.TXS..C.SS..", "XTTS.ST.TXT.TT.SXS.TSTTS.TTX.X", "TTS...TXT.TTXT.X...SS.SSS.T.T.", "..XS.TT.T...X.S.SXTTST.TTST.X.", "..S.TTSXTS.X.STTXTS...SSSSS...", ".TT.SXXXSS.TS.SSSST.STX.SX.X.S", ".SXTTX.S..XT..TSXX...X.SXXSS..", "T.T..T.TS..S..TXTSTT.TSSTSSTTX", ".T.SXSST...SX.TTTT.XXT.....X..", "XX.T.STTT.T.TS.TSSSS...TSXS.S.", "SSXTXXTX..X.TT.TSXSX..TXTS....", "XTT.XXS.XS..SS.X.TSSST...S.STT", "STSSTTTS.SX.S.TSS.X.XXX.T..S.T", "TT..X..TS.XSST..TST.XSXXSSXS..", "T.STXTSSSTT.T.SX.S.T.S.S.....X", "SSST...TT..T..T.T.TSS.XSTSXSSX", "STTTXXX....TTTTX...T.TTT.XX..S", "SST..TTS.SSS.XTTS..S....TX.TS.", ".SSST.XTSSXXSTST.S.TX.TTS.SSSS", "S.SSS.S..TT.Y.T.T...XS.S..X.S.", "XTST.X.TTXX..TTS.SS.XTSTS.....", "XS.TXXSSTT..TTSXX.TSS.STXTXS..", "T.S.S..TXSXTT.SS.TS.S....SSTTT", "X.S.S.TS.T...XT..TSSTTXS.S...S", "TT.TXSSX..TSTST...SSXTS....SXS", "T.TS..STXSXTSXT.STTTT..STT.SXT", "STSS.TXSSSTSTT.T.TTSS...SSTSXS", ".X..XSX..TST..S.SSTTST.STSX..T", "X..TTT.TS.X.S..XXXTTT.XX.SXS.T", "TT..XT..XTX...T...TSSS.TTST...", "ST.T.S..SXSTTXST.TTXTXST...T.T"};
    int timeLeft = 25;
    double speedingTicket = 960.3762435192774;
    double redLight = 998.5948170313249;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> cityMap = {"Y.TC"};
    int timeLeft = 3;
    double speedingTicket = 1000.0;
    double redLight = 1000.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 700.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> cityMap = {"XTSTSX..TST.SSS..TSTXX.X.ST.X.XS.SSSSSXXT.TXX", ".T...S...X..TX.X.TTSS.XTT.TT..SSTXTSSST.TTS.S", "S..S.TX..T.SXTX..X.S.XT.XX.SSTT..TSST.X...ST.", "STSTXS.....XT.XXXSS.X..XSSSS.S.T.TSSSSSSXT..S", "XSSS.SX..T...TS.XS.X.XS.XST..STXS...S....TX.T", "S.XS..T.XST.STTT.S.STTX.T..T..XTT.TTX.TTSTXT.", "T..ST.SSSS..STS.X.XS..T...TTSTTXTS.SSTSXX..S.", "T...SSSS.SSXST..SS.TXSTSSSX.TTST.X....X.S..T.", ".S.TSS.T.SXTST.XXST..SX.S...X.TTXT..TS...TXTX", ".SS..SX.TS..X.TTSSXSXX..TSS.SX..XTT.TSSSS..SS", "TTX.STXS.XXTT.SXSTTT.SSS.TS.T.TSXXSTTX.TTTS..", "X....XXS..S...SSS..TTS.X.XTX..STS.XTTTSS..SS.", ".TS.T.S..TSSTS.SST..XTXTTT....X.S.X.SXT..S.SS", "SXSTT.S.X.TTSTT.XS.TXT.ST.X..TTSST..S.TTT..TS", "S.TSTS.TTT.TTXTT.STT...XSSXSX..STSTT..TS.S.S.", ".XTX.X.....S.XT.TT.SX.X..SSS.STSSSTXT....X.T.", ".TTSTS.TTS.XS.STXS....SS.XSSSTT.TTS..T.TT.T.T", "TTSSXXSS.ST..SXX.X....TS.TXTTTTS.S.TTYXTSTTTT", "TS.TTS.TSS.STS.TS.T.T..XS..ST...SSTXXTTSS.X.T", ".S.T.XCTS.ST.TTSSSS...TTTXT...S..STXX..X.S..S", "XTT.S.S.....SSSTS.TT.X.XT.TT.TTT..TTSST...SXX", ".TTX.SXT.S.TTXT..SS....X.T.XXS..SST.SXS...TTS", ".S.XTTTS.TTS..T.SX.XS.TS.SSS.TS.TXXX.TS..TXSX", "ST.S.TSSSTTXX...T..SSXTT.XTTTS.S...XXTTX.TS.X", ".SSSTX.XT.S......TSSSX.TST.T.TTT..SXS....T..T", ".XST..ST...XX..TX.S..T..T.TSS...S.ST..STS.SXS", "XSXSSTX.XT.T.X.SSTTTTSS..TSX.SSS.S.T.X.X.TX.S", ".....SXXSSSTSTT.TT..STTX..STXS.TT..X.X.XS..T.", "T.X.S.X.TTSSS.TSS..SSTXXTTSTSTT.SST.SS..TXTTT"};
    int timeLeft = 91;
    double speedingTicket = 949.4508041144535;
    double redLight = 765.1573786915238;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> cityMap = {"....SXTTSST.XTT..S..TSST.X.S.", ".SXX.T.X.T.T.SX..TSTSSS.SXSTT", ".XTS...SSTT..ST..S.TSXSXSXSTX", "TST.T..S........SX.X..ST..SSS", "T...XS.T.S..SSS.XTS.STSXSTTSS", "TX.TX.TTSX.XT.XX...TT..T.TTS.", "S.T.XSTXSSS...STS..SXS.TTST..", ".SS.TS.T..XSTSSS.T..S.SXTTS.X", "..TT.ST.SS.TX.SS..SSTT..XTXSS", "T.T.TS..SSS.STT..TTSS....S.SS", "S.T.SSSTSXS.TTXXS..TSTT.TTSXS", "..SXS.XTTTS.XTX...S.TT.XTXT..", "..X.STX.TS.SSXTT.TT..Y.S..S.T", "XS.XT..TS.STS..XS...TSXS..X.T", "S.XST.XXTSSTS.T.XTTX....SS..T", "..TSTXT..XS.S.TXS..SXSSTS.T.T", "SXSXTTXXSSTXS..TSX..T....T.ST", ".TSTT....S.X...SST...TSST.SS.", ".SX...T..XS..T..TT.XXS.T.SS.X", "S...TTS.S..TT.XT.TS.T..S.XT.T", ".TTXTTT..SSSTT.STXXTTSSSSTT.T", ".SS..S.SSTT.SS..T..XSTX.XXT.T", "X..T..TTTTTT.STTTS.TSSTTTSTTT", ".TTST..SSTX.SSXX.TTT..T.TSS.X", "..TTTTTT.XSX.XT...TTTX.XSX.S.", ".TXSS.T...XSX..SSSSSS..TSTS..", ".SS.T.S.TSS.TT...XXT.S...SSXT", "..T.S...S.T.X..T..SSS.SS.SS.S", "STC.T...XST.X.X.S.TSXSXT.TT..", ".X..TTT.XXT..X..T.SSS...T.S.T"};
    int timeLeft = 51;
    double speedingTicket = 323.1131088572996;
    double redLight = 840.1816059068307;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 323.1131088572996;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> cityMap = {"S...XTTTT.ST..TTXTSSTTS", "XTS..TS.SX.TT.TSSSTXT.S", ".X..TXSTX..SXS...SS.STT", "..TTTSXXTTTTSTSSTX.TS..", "TTSSTX..XTXSSTTS.ST..TT", "X.SS.XT.XXS...SSS....SS", "SXSST..T...SSTT.TXXTSSS", "SS.TSXXSXS.SX.STS.TTT.X", "...XSSS.X...SXSS...STXS", ".XXX.SXSSXS..TSSX...T..", "S...XS.X.TS.SS..S.X.X.T", ".TT.ST.S.SSXSXST.SSSX..", ".SXX.....SSTXTSST..TX.X", "XSTXSXTSSXSSXT.XS..TSXX", ".TTTT.T.T..X.X.TXSST.TX", "...TT.SX.TST.TSSTS..TXX", ".SX.ST..S.T.TS..S......", "TT.TTX.TX.XXTTXTSSST.TS", ".XT.X...TS.TX.TTT.XSSS.", "..XXTSS.S..TS...TSXX..T", "TXSS...TSXTTTS.X.....S.", ".TTTSXTTS.S.S.S..S.XS.X", "TXSTT.XTT....SYSTS..X.S", ".TT..TSSTTT...T.SXS.SST", "S.S..S..TXSTSX..X...XX.", "TX.SSTS..SSXSXTT......S", ".X..TS.X..XXX.TSSTT.XX.", "X..TXST...T...S..S.SXS.", "T.XT.TS..TTSS..STS...XC", "SSX.SXTS.TS.SX.T.XTST..", ".S..SXTXTSS....S.XXTXST", "STXSX..XTSXTTTTST.T...X", "..STTXSSTS.TS..TSSX..TX", "TST.TSSTXT.STS.TT.T..TS", "TTX.S.STXTXSSTTTSXS..TS", "...TTT....T....XXXST..S", ".TX.TS.TSST..S...TTT...", "SSTSSTSTTTX.T...XT..XXT", ".T..SSXSTXSTX.X.TSSTSS.", "S.T....S.S.T.T..TTXS.TS", "XSTST..TSST.TX.....T..S"};
    int timeLeft = 11;
    double speedingTicket = 584.5131197506288;
    double redLight = 888.3469870716624;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
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
    vector<string> cityMap = {".XSXXSS.XST.TST..SXT", ".TXS..TTS.SXTXTS.X.S", ".T.T.T.XTCTTSX.TS...", "..STT.SS.XTTS.S..X.X", "XXT.TXT..XTSSTT.X..X", ".TXYS.X..SS.SS.T.TS.", "..TT.T.XSSXTT.X.TT.T", "SXTX.T.X..X.SSTST...", "TXTS.TTTXSS..TXTTT..", ".T..SS.SSSX.S.SSSTTT", "X.S...S.T..X..SST..T", "ST.X.STX.T.T.X.SXT.T", ".SS.S.S.SS.S.X..STTX", ".TS.SS.T.STTTX..SSTT", "X.SSS.ST.TTSTSXSTXXT", ".S..SX.STXXXXT.XT.ST", "T..T...T.TX.TSTT..SS", "TS.SSSS.T..SS..XT.ST", "S..SS.TS.ST..T.X.TST", ".TSTX.T....SSXXS....", "STTXSSST.TTSS.STSST.", "STXST.XS..S.TX.SSX.X", ".T.X.SST.SSS.S.SXX.T", "TS...S.S......SSS.ST"};
    int timeLeft = 75;
    double speedingTicket = 107.31449207658876;
    double redLight = 516.1396506468456;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 107.31449207658876;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> cityMap = {".X..XSTTTX.XXT.T.TST", "X..TSSX.SXTS.T.TXX.T", ".TTT..CTT.XSST.TTSSX", ".SSYT.S.T.SS..TTSTSS", "TT..T..S.......STSS.", "STT....XX.TSTXT.S.S.", ".XTTTS.SXXX.TTTT.X.X", "..T..ST..TXT....TTTS"};
    int timeLeft = 73;
    double speedingTicket = 826.1968792865138;
    double redLight = 279.56198590992767;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> cityMap = {"ST.TTSTXSS.T.T.ST.S.TXT", ".T.TTTSTTTSTTSTSS...S.X", "T.X.TXT.TS...X..TSX.STT", "T.TT.SSTST..XSTS.SSTTS.", "TSXSSXTST...T...S.X.XTS", "S..SS.XTSTSXT.T.X.SSST.", "S....T.SS..XXT.TS.SSTSX", "STSSXY.STT..S..TX.TSS.X", ".S.STTTTTT.XTXS.TTX.T.X", "T.SXXTXTTS.XSSSSTT.XST.", ".T.SXS....STSSSSSTT.XTT", "TT.SST.X.T.T.SCSTSST.ST", ".S.ST.SXS...T.X.SS.SXST", ".TSSTTSSXXST...S.XX.SST", ".ST.SS....SX.TSS.X.XX..", "X.T.X...XT...TXT..TTTTT", "S.X...SX.TX.S.T.X.T.TSS", ".T.STTTS.TTT...T.TX....", "..T.TTS.STTS.TXXST.S.TT", "XS.T.S.TT.X..S.TT.X..SS", ".TS.TT...SXSSS..TS...SS", ".STT.ST.TTTT.SXT..T.S.S", "SS..T.STTXSSTSXS.TT.X..", "...ST.STXX...T...T.STTT", "TT.X.TT.SSS..SXTXS.STSS", "T..XST.XTX...T.SX..T.XT"};
    int timeLeft = 4;
    double speedingTicket = 178.78987348073983;
    double redLight = 518.0207614931231;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> cityMap = {"XT..TS", ".S.STC", "S...ST", "TTT.TT", "SS....", "..X.XS", "X...XS", "SXTTTT", "SX...S", "SSXTS.", "SS.X..", ".S..T.", "TST.X.", "TST.SS", "..T.S.", ".T.TSS", "STTXXS", "S.TSSS", "X....T", ".SSTSX", ".XT.TX", "T.S..T", "XSST..", "XTTSXX", "T.TXTS", "XT.TX.", "TXYST."};
    int timeLeft = 46;
    double speedingTicket = 8.888291761074557;
    double redLight = 611.5452325396611;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 17.776583522149114;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> cityMap = {".X...T.S.TTTT.STTSX.TT.SX", "SXTTS.SSC.SXTSS..TS.X.TSX", "T.SXSXSSX.S.XS....STST..T", ".ST.S.STS.XT.SSXT.T.X.T.T", "T..T..TTTSSTX..TT...TXSSX", "S..S.STSTT..SS.STSSX.TY.S", "STS.ST.X.TT...X.S.XSS.TT.", "STSST.SSTTT...XS.ST.ST..X", ".STT..TT..T.XXST..TXSSTSS", "TS...TT..TTX..STS...ST.SS", "STST.S.XXSST.T.TTSS.TX.ST", "XS..SSS.SS.XX..TT.TS..S.T", ".XSSTT.XX.S..S.SSTTSTS.TX", "S..TT..SXXT..TXS.XSX.ST.S", "SS..TSSTT.TTTS.T...XX...S", "TSTS.XS.T.TX.SSXS...TT.TT", "ST.X..T.XXTT.ST.X.TSX.SSS", "SS.ST.T..ST.SST..S..TXSTX", "TTTT.S.TTSSTSXS..T.XT.X..", "XXSXT.TST.X.TXTTSTXT..STS", ".....TSX.SS..TSX.....TTTS", "..SSSX.T.XT.T.TX.TSSS...T"};
    int timeLeft = 54;
    double speedingTicket = 248.10065650305853;
    double redLight = 411.15419132586834;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 248.10065650305853;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> cityMap = {"..S..T.XXSS.SX", ".XTX..TTSY.S.T", "SSXSTTX.TX..SX", "X.T...ST.TSS.S", ".TX..XT.S..TT.", "..TX.X..T..TST", "T.T..X...TSSS.", "TSXTXTX.TSSSS.", "XS.TT.TSXS.TXS", "TX..SXSSX..TT.", "TTTSXSSST.T.SS", "SXT.TTTT.T..XX", "SX.XTXT.SSTTS.", "TTSTXT.T....TC"};
    int timeLeft = 41;
    double speedingTicket = 253.70157491202355;
    double redLight = 871.5567440541234;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 507.4031498240471;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> cityMap = {"TXTSSXTXST.XXT..X.T", "XS..X..X..T...X.S.T", "ST.XS.SSSX..T.S.SS.", "T.TTS.XS.STTYXTSS.T", "X.X..T.STXXT.TTXSST", "..SSTS..T.XXSS.S...", ".XXXTS.SSTX.T.T.SSX", ".TTT.T.T......S.STX", "TXSSX.XX.T..XX..TS.", "X...TT.XSTST..S.TT.", "S.XST.S..TSXX.T.SXX", ".TXX..SSST..T..XTXX", "XSTT.SCXSTXSX.XS.S.", "SS..T.XTTXTXX..TTXS", "XST.X.X.S...XTSXXXT", "..XTSTXXS.S...SX...", ".STX...STXTX.T.XTS.", "ST.XT..TS.TSS..TS.S", ".X.T.TSXS...TTX.T.S", "SSSST..SS.SS..TST.T", "TSSST...S.S..STS..X", "TS..T.T.SSTS..X.S.S"};
    int timeLeft = 56;
    double speedingTicket = 19.547343816547315;
    double redLight = 713.9499878226977;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 19.547343816547315;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> cityMap = {"X...SXTS..XSSSX..T.SS.S....STTTS.X..T", "..TTSXSSSTTTX..XTTTTSX.S.SX..X.S...XS", "..T.STT.XTSX.TS.T.SSX.S.T.S..S.TSTST.", "SXTSSS.X.TSSSSTXSXSTSSS..T..T..SXST..", "..TSTT.XXTX.S.TTX...S.TTSX.X.TTSS..S.", "S.X...T.ST..T.TX.XS.S.T.S.SS.T.TXXX..", "STSTTSTTTT.S.TXSX.STTTTT.XS..X.XTSS..", "SXTXT.SST.T..SXT..TSST.X....SSS.S..X.", "STXTX..SS..XSS...XSTS..SST.XT.SX.SSTS", "XSTSXSSTTTSS.ST..XTSST.SX..TTTS.SS.T.", ".SXSST.X.XX.XX...TSSS.STSXS.S.TT..X.S", ".T...STX.SSTS...SX.XST...TSXTT.STSSTT", "..T.S.SSTT.S.TSST.XSS..S.STTTSS.S.S.S", "..X.SSS.STST..S..S.S..STXXS.S...SS.TS", "T.XT.STXTTSS....X.XTS.TTSSSXS..T..ST.", ".STTXT...XXSTXS....T.T..TSST...XX.SSS", "T.ST.....TSSSS..TSSX.TST.ST.XTS.SXSX.", "TTSTSSST.X.....X...S.....T.SSTSST...S", "STX.....S..S.TS..TSST.S.T.SX.X.TST.TS", "T.XS..TX.TSTS.....SSXT..S.ST.....T.S.", "..TS..T..X.T..T..XSTSXX...X.STX..SS.T", "...STX....S.X.T.T.T.TXT.TTS.SS..TX.S.", "XXSX..ST.XS.XXSXTT.TTS.XTS..T.T.XX..T", "TSS.SXTX.TT..T...T.SSS..T..S.S.T.S..S", "T.SXX...T.TT.S..XTXST.S.X...X.T.S.TSS", "T.SSXXTSCXTSX.S.XSTS.TSTTTSXS.XXSS.S.", "T...S.TXTTXS.T.X..TSSXXT...SSX.TS...S", "..X.TTS.T.TXT.T.T.XT.TS...SXXX.SXSTTS", "S.TTTXXS.SS.TX.X.S..STSTXT.XT.SSTSTXS", "X.SX.S.STS.XXS..XTXT.S..TX.SSSS..XXXS", ".STX.TX.XTS.S.XT.S..XXXXTS..SX.S..XT.", ".X.S.T..SST...ST.SX.SXTSSXSSSS.STXSTT", "TS...XTSYTSSSTSS.S.STTS..T.TTSTTSS..S", "T.XSSS.T...XT..XTST....XTTX.T...S.X.T", "TX.TST.SS..X..X.X....XSX.SSX.SXX..SXS", "S.S....TTSXTX.T..TS..T..XXTX.ST.XTSXS", "SSTXT.TXSXSSXXSTT.TST.XTS.STXXST.X..X", ".T...SXTSXTSSTX...TTX.S.STX..STSSTS.X", "TTT..TTX.TSXS.X..XTXS..TS.SXT.XS.T.TS", ".TTSTS.SS...T.TS.X.X.TX..SSTTS.STTT.S", "XXST.TX.TS..STTSX...X..XSSXTTXTX.SSST", "STS.XT.TSTX.XX.T.XSS.XTS.SSTSXSTS.TS.", ".XT....SXTT.XTXSX.XST.S.XX.SSTSS.SX.S", ".....S.SX......XTSST.XTTTSXTTTTT.ST.S", "TTSSTT..S.S.TTTSSXSSTT.STTSST.STXS..X", ".TSXTXXSSS..XT.SS.SST..TXSTX..SX.ST.T", ".S.T...XS.STSX.T...X.T..STS.XTXXXXSS.", "S.STT..T.TTTTS..XTTTTTSXTX.XTSX.S...T", ".T...TX....X..TXSXTT.T.SS.TTSX.STTTSX"};
    int timeLeft = 28;
    double speedingTicket = 284.6033050076397;
    double redLight = 654.219611042164;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> cityMap = {"T.SS.TXSXTTTTT", "..STT..XT.XSSX", "S..XSSTTS.CSTS", "TTSTSST..S.TXT", "TTSSX..XS.T...", "TTSSX.S.TXTSS.", "..SS.ST.XS.XSS", "TTXT.X.S.TS..T", "T..XTTSS.SSX.S", "TT..T..T.X..XS", "STTSXSST...TXT", ".TSTS.S.S..TT.", "....S.TSST....", "..T.S..T.TXTXX", "TS...XTT.XSTTS", ".STTTX.X.XSSSX", ".STST.TTTTTS.S", "XS.X.ST.TTS.TT", "SXT.S.SXT.XS..", ".SXS.XX.S.X.TX", "...TSS.T..SSTS", "S.T...S..SSS..", "...T.TT.S.TT.X", "..T.STSTT..T..", "SX..XT.TT...TS", "...S..TT..SSS.", "T..XSTXX.TS.X.", ".XTSXXST.SSX..", ".SSXSS.X..S.S.", ".SX.X.TTSTSSX.", "...XXTSTX.SSSS", ".XSTS..X..TTT.", ".TS.TTS..X..SS", ".ST..SXSYTXSXS", "TTSTTT.TXSTTXT"};
    int timeLeft = 70;
    double speedingTicket = 656.3194671375339;
    double redLight = 566.4300924562542;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 656.3194671375339;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> cityMap = {"X.T...XT.TSTS..T.X.STTSX", "STS.TSS.TT..SS..SST.TT..", "..TSX.T.TX.TTX..SS.T.ST.", ".X.S.S.XSSXSS.T..XS..XT.", ".TXXT.T.SSTTTSTSTXXSXTSS", ".XTXSTSXTS.X..TT.SS.XS.S", "SS.T.TTTSXXTXX.TXTXT.T.X", "STS.X.T.TSSS.XXS.XX.X..S", ".SXT.S.TSX...TSTSTSTS.TT", ".STTTX..S.S..S.X.XTSS.TX", ".TS.X.S..TSS.T.ST..SST.T", "...TST.S.XXX.X.ST....TS.", "X.T.XTS.XSXTS.STTSXS..TX", "XX...STSS..TXX.SSSS.X.SS", "T..S.TSTSS.T.XX..ST..TTT", "S.T.X.T..STTXSSXX.XTX.X.", ".....T.T.TS.TT.S.TS.X...", "X..S.S.STST....ST.XSTSS.", "X.SSXS..C.TT.XSS.XT..XS.", "SST..XSX.T..S.SXXX.TTTTS", "SXSXT...SS...XTTT.SST.X.", "SX..T.S.T.X..ST.XTT.TTT.", "T.....SSSS.T.XTSTSSXS.TS", "SSXXST...STSTS.XTS.XST.T", "XS.YST.SSX.SSSTTSXT.T..T", "TXSTX...TTTSTTX..S.X.T..", "...X.TTSS....S..S..X..S.", "XTXXST..TS.X.T..SX.STS..", "TSTTXSTS.SXTXST..X..XSTS", "SX.T.T..S.S...T.X....TS.", "SXXSSTTTSST....T.TS.TT.T", "TST..T.....TTSXTS.XT...T", "T.XT.S...TSXTS.SSSX..XSS"};
    int timeLeft = 23;
    double speedingTicket = 432.1928926565503;
    double redLight = 413.2414935809604;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 864.3857853131007;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> cityMap = {"S..XT.STX.TX...STXS....T.TS...", "XTXTX.T.TXSS.S....TCSS.TTTXX.S", ".SSXT..S.T.S.SYX..TST.....TXTS", "T.TXSTXS.X.TXTTX.XS.SS.STX...."};
    int timeLeft = 27;
    double speedingTicket = 722.7284598523495;
    double redLight = 561.8179767069913;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> cityMap = {"XS", ".S", "S.", ".T", ".S", "ST", "ST", "T.", "TS", ".X", ".S", "TT", ".S", "S.", ".T", "S.", "SS", "T.", ".X", ".S", "S.", "SS", "TX", "TT", "X.", "XX", "ST", "ST", ".S", "ST", "SC", "SS", "TS", ".X", "S.", "..", "ST", "SS", ".S", "T.", "..", "ST", "YS", ".X", "XS", "..", "ST", "T.", "ST"};
    int timeLeft = 31;
    double speedingTicket = 112.2010764207961;
    double redLight = 544.7984728614363;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 673.2064585247766;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> cityMap = {"X...TXXSX..SXT..T..", "XTTS.TSXTTTT..ST.TT", "......SS.TSTT..X.XS", "TS...STS.SSX.XTTT.S", "S.STTTX.ST.TST..ST.", ".TX..S...XX.SX.SST.", "...S.XS.SSTSX.X.T.T", "S.STXSS.S..TSTTSTX.", "XT..XSTS.ST.S.SX.TX", "SS.TSSX.X..SS..SST.", ".SX..T..SSX.X..X.XX", "T.TXTTTSSS.X.T.TS.S", "TTT.X...X.S..S.XX.X", ".SS.TT.T.XTS.STSS.T", "XXTX.T..T.X..TSS..T", "TS.T.X.SSTS.S.TS.SX", "ST.XTS.XS...S.T..T.", "...S...XTTS.TT..T.X", "SXTTS.SSTTT.SXTSTXX", ".SS..TT..S.TTS.SXT.", "SSY....SSST..X.SXTS", "STT.S..TT.XT...X..T", "..S...TXTXXTSTSSS..", "S.TTTT.TX.ST.TTSSSX", ".X.X.TST.X.CST.S..S", "S..T..T.S..SXS.SSSS", "X.TSSXTSSSTXTSSTXTT", "..TSTSXSTST.TT.STTS", "TSSSS...STXSSTTTTTT", ".TT.X.T..SST.TXTXXT", "..SS.TX..S.TT.STT..", "S..STX..X.S.X.TXSST", ".TXXSSSSS.SX..SX..X", "TST..ST.TSSSST.XTXT", "TTTS.ST.T...SX.....", "TSXSXXSXX.XSSXSXTSS", "T.T.STTS.S...TTXSSX"};
    int timeLeft = 36;
    double speedingTicket = 594.8500729114658;
    double redLight = 880.7910008624654;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> cityMap = {"X.XX...STT.S..TXTS.TX.T.", "XTS..TX..T.X..ST.T..XS.T", ".SSSTXXTSTXST...TT...TXS", "TT.X.X.SST.S.TT.STSSS...", "TS.X..TTTSX.XYSX.TTSSX..", "T.T..S.XT.T.TSC....ST..S"};
    int timeLeft = 55;
    double speedingTicket = 786.4811024798364;
    double redLight = 19.742200884735908;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> cityMap = {"T.X..TTSSTS.XSS...X", "XSSTSXSTXXT.XTTSX..", ".XS.TX..SS...X.TSXS", "S..XSX.XXX..TTSTS.S", "SSTXXTX..S.ST.SX..S", "TT...T.TTTSTTTT..S.", ".XT.TTSTXSSS.T.SX.X", "ST..T.SXS..S..XT.S.", "TST.S...T...S.XST.T", "...STS.XTXXT.XT.T.S", "XTSX.SSTTTSS.T..STS", ".ST.SXXX..TXSSTS.S.", "TS..X.STXXY.X.SSTSX", ".T.XX..XSSX.X.SS.ST", "SS.TSST.X.TTXTTXSSS", "TT.T.S...TTX.S...SX", ".TS..T.T..S..TTSTST", ".....TSS.STX..TTT.T", "T...TSTXSTTXT.TSTTT", "TTTSXTS..XSXT..SXT.", "S.X...S.T.SSTSSTTX.", "XXX.SSS.SX.TTSXS.TT", "T.SXS.ST..T.T.....S", "TTTTXS.TTT.XXSXXTST", "STSS..TX..SSXT.TT..", "STX.X.T.SSS.XXSTTXX", "TTSX.S..T.S.TT.S..X", "STX.TSTT.T.SS.X.SS.", "TS.SS.S.SS.SSSS.S.S", ".TXS.XXSX.SSTT..TSX", ".ST..TX..TTSSTSXTSX", ".T.SXT.T.SS..TTXT.S", "..SS.SXXT.S.T..S.S.", "T.TSST.SX.STXST.STS", "TXSS.XTTTS.SSSTXSSS", "T.T.T.TS.X.SXTXSTX.", ".X.X..STXS..SSSXSTX", ".XXTT.XX.TXX.SS.X..", "ST.STCSTSSST....S.S", "ST.XS.XXT.X.S.STXTX", "..SXTSS..STXST.TSTS", "SXTS..XSTS..TS..S.T", "S.TSSXS.XTXTST.STTT", ".TSST.XXT..TTSTXT..", "TSST.XST.STS.S.T.T.", "S..SS.X...S.TTTSS.S", "TSSS.S.SX.S.SX.SSSX", "SXS.X..TS.ST.TX.X.S", "STXXXST..S..SXTSS.S"};
    int timeLeft = 91;
    double speedingTicket = 841.5314373179777;
    double redLight = 814.8014656305037;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 1683.0628746359555;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> cityMap = {"XSSTSTSTS....X.T.S.TSXSTXT.TTSST.SXST.SXS..T.XTTSS", "S.T.S.STT...S.SXTX.TTSSXTS.SXXSTX..X.S.XT.T..T..ST", "T.X.S.XTTSS.TSTX...T..X..X..TS.XT.TT.XT.SXXST.TTT.", "...XSTS.TT.TX.S.TSX.TXSST.X..TSTXXSST..TST.XTXTX..", "X.S..T.ST..TTSXTSTS.XT.SSS..ST.TTT.TS.SS.ST.SSSXC.", "TSX.T.T.S..XTT.X.TS.TXTSXX...STTTX.TSST.S.XXTXS.XS", ".T.T.TSTTT.SSXTTX....SXS.SST.SXT...TT.X.STTTT.TTXX", ".SS.STSSS.ST.SXSTS.......TT.XT...XSTTSS.T.SSXTXSXX", "TT.TTT.XXTTS.ST.XXTTXXTS..ST..X.T.XXT...S.SS..T.S.", "SX.TXX....X.TST..TSXSX..XXTS.S.STSTTS..TTX.SSTTX.S", "XT.TSXS......S...TT..XTTSXSTT..S.TTS.S.XS....T.STT", "SST.SSY.STS.TTT.TT..T.X.SS.TT..TS.X.XSX..SXSXS...S", "TSX.T.TSSSSSX.S.TS...XT...TTXXTSXT.TT.XT.TSS.TTTXS", ".XTT.XT..STST..T.STS.XSSSS...T.S.XS..SXTSS.XS.SS.X", "XTT..S.X.X.T.XTT.T.STT.XXTS.X.T...TTX.S..TTXSSXXS.", ".S.XSSTXTS.XTTT..SS..TSXTSSX.TT.T.XX.S.TTT.SSTS...", "TSXSSS...S..SXST.T..STT..SSTX..SX.TTS..X...STXXXX."};
    int timeLeft = 83;
    double speedingTicket = 601.35256995414;
    double redLight = 623.9083860226754;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 1804.0577098624199;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> cityMap = {"XSXXXSTSS..S..STXCY.", "...SX..XS..TT.STS..S", "TTXS..STSTSSS.STXSSS", "XXTSS.SSSXSS.SSTT.TT", "TT..XXSX.T.XST.SSXTS", ".TXT.STSS..STSSSXS.S"};
    int timeLeft = 47;
    double speedingTicket = 351.5081521196714;
    double redLight = 923.1238284931474;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 1406.0326084786857;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> cityMap = {"CTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTY"};
    int timeLeft = 100;
    double speedingTicket = 1000.0;
    double redLight = 1000.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 66500.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> cityMap = {"CXTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "XXTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTY"};
    int timeLeft = 100;
    double speedingTicket = 1000.0;
    double redLight = 1000.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> cityMap = {"SCYS", "S..S", "SSSS", "SSSS"};
    int timeLeft = 7;
    double speedingTicket = 1000.0;
    double redLight = 1000.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 2000.0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> cityMap = {"XXXXX", "Y..C.", "..XX.", "....."};
    int timeLeft = 8;
    double speedingTicket = 123.0;
    double redLight = 654.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> cityMap = {"XXXXX", "Y..C.", "..XX.", "....."};
    int timeLeft = 9;
    double speedingTicket = 123.0;
    double redLight = 654.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> cityMap = {"Y..", "...", "..C"};
    int timeLeft = 3;
    double speedingTicket = 1.0;
    double redLight = 1.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> cityMap = {"XXXXXXXX", "XY...S.X", "XXXXXX.X", "C..S.TT."};
    int timeLeft = 14;
    double speedingTicket = 60.0;
    double redLight = 93.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 185.1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> cityMap = {"YTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTS", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTS", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTC"};
    int timeLeft = 100;
    double speedingTicket = 10.0;
    double redLight = 100.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 6530.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> cityMap = {"YTST.TTSST.T.T.TSSTT..SS...TTT.SSS.STTTT", "SSS..T...S.TT..S..TTSS.S..TST.SSSS.S..S.", "TSS..SS..TSS.STTTSS.ST.T.S..SST.T..TS.T.", "TSSTS.S.STST.SS.T...TS..S.SST.TSS..T.ST.", ".T..T.TT.TST..SS.TSTT..T..ST.T.TST..SSSS", ".TTT...TTTSSSS.S.SS...T.TS...TS.S.TSST..", ".S.ST.TT.TSTTST.S.TSS..TS..SS.SS..ST..S.", "STT.TST..TSSTS.T...ST.SSSTSSTS..TTSS..S.", "SSTSTT.TS.TT...S..STSTT..TS.TS..TS.TT...", "..S..SSTST.T..S.STTT.TTT.T.TT.SSTTT..TSS", "STTSSSSST.STT.SSTS.S.SS..TTTS..TSS.TT.SS", "TS.SS..T..T..STT..SS...ST...T.SSS.TS.T.T", "STT..S.TS..SSTS.SS...SSSS.SSSS.S.SSTT...", "S..TTSSST.STST.TSS.TTT.TST..SS.TS....SST", "TTTT.SSTT.ST.S.ST...STTSSTSSST.T.SS.TTSS", "TTTT.TTTTTSTS..T.S..T.TTST..S...TTTTSS.T", ".TSSSSTSST.SSS.TSTSS.T.TS.SS.S..TS.STTS.", "ST.T..S.TTSS.S.S..S..S..S...TST.T.ST.STS", "..T.SS.SSSTSST.TS.S.S.T.T.TSSSTS..SSSS.T", "TS..T.STS.TT..SST.TSS.SSSTTS.S.TT.SS.TT.", "TSSSS.SST.ST.TT..SS.TSSSSTSSS.S.S..STTTS", "ST.S.TS.ST.TT...TSST.TSSSS..TS....S.TSTT", "TSSTSSTTT.STSTSTT.TSS.SSTTSSTT.TSSSTTTSS", "ST.S.S...TSSSTT..TS.S.STSSSS.TSS.SS.ST.S", "SSTTT.S.STTT.TS..SS.TT.T..TSTTST...TTTS.", ".TTTS..S...TTTST...SS.SSSS.TT....TS.S.T.", "SSTT.T..T...SSSST..SST...T..TS.T.SS..STT", "STTS..TT.STS....S..TT.TSTTST.TSS..TT..ST", "T.TS.TS.TST.S.STTSS..T..S.T...TS..TTT.TS", ".SSSS...SSTST.S.TT.TTS.STT..TT.T.T.SS..S", ".TSTSSS.SSSTTSSS.S.T.S..TS......STTT.TSS", "S.S..S..STTS.TSTT.ST.TSS.T..TST..TTSTS..", ".TT.TTS..T..SS.SS..TSST.T..S.ST.T.T.SSSS", "....S..S....TS....T.....TT..TSSTSSST.STS", "ST.TT.T..ST..T.TS.T...TS..TST.STT.SSS...", "ST..T.TTTSTT.ST.TS..T.T.ST.SS.SS..SS...T", ".SS...TST.S.TTT...SS.T.T.STT.SS..TT.SSST", ".ST.TS.TSS..TTTSTSSTTSSTT.S.SS..SS..T.TT", ".T.TSSS.SST.TTSS.S..T...TST..S...TSSTTS.", "TTSSTSSS.TSTSSTTS...TT.TST....T.TT.SSSTC"};
    int timeLeft = 90;
    double speedingTicket = 2.0;
    double redLight = 3.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 26.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> cityMap = {"YX", "C.", ".."};
    int timeLeft = 5;
    double speedingTicket = 1.0;
    double redLight = 1.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> cityMap = {"TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTXCTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTXXXTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTYTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT"};
    int timeLeft = 100;
    double speedingTicket = 100.0;
    double redLight = 100.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 3850.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> cityMap = {"YC", ".."};
    int timeLeft = 7;
    double speedingTicket = 1.0;
    double redLight = 1.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> cityMap = {"YTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTC", "..XXXXX.TTTTTTTTTTTTTTTTTTTTTTTTT......TTTTTTTTTT", "X....S...XXXTTTTT............TTTTTTTTTTTTTTXXXXXX", "XXXX..............XXXXXXXTTTTTT.....XXXXXXXXXXXXX", "...S.TT...TTTTTTTTTTTTTTT........................"};
    int timeLeft = 67;
    double speedingTicket = 123.4;
    double redLight = 42.192;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 59.068799999999996;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> cityMap = {"C...................", "SSSSSSSSSSSSSSSSSSSS", "TTTTTTTTTTTTTTTTTTTS", "TSTSTSSSTSTSTSSTSTST", "....................", ".............SS.....", "T...T..TTX.T.T...T.T", "......S...S.S......Y"};
    int timeLeft = 100;
    double speedingTicket = 666.6;
    double redLight = 666.6;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 666.6;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> cityMap = {"YC.", "X.."};
    int timeLeft = 5;
    double speedingTicket = 5.0;
    double redLight = 5.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> cityMap = {"TTSTTTTTSTTSTSSTSSSS", "SSSTTTSSTSSSSSSTTTTS", "TTTSSTTSTSTTSTTSSTSS", "TSTTSTSSSTTSSTSTTSTT", "TSTSSTSSSTTTSTSTSSTS", "TSTTTTTSSTSSSSTSTSTS", "TTSSSSTTTTSSTTTSSTTT", "TSSTTSTTSSSSTSTTSTSS", "SSTSSTTTTSSTSSSSSSTS", "TSSSSTSSSTTTSSSSSSTS", "SSTSTSTSSCYSTSTSTSTS", "TSTTTTSTSTTSTSSTTSSS", "SSSTSTSSTTSSSTSTTTST", "STSSSSSSTSSTTSSSSTST", "TTTSSTTSTTSTSTTTTTTS", "SSSSSSTSSSTTTTSSSSST", "STTSSTSTTSSTSTSSTSSS", "TSSSSSTTSTSSSSSTTTTT", "TTTTSTSTSSSSTSSTSTST", "TSSSTSTTTTTTSSSTSSTT"};
    int timeLeft = 100;
    double speedingTicket = 100.0;
    double redLight = 140.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 300.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> cityMap = {"YTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTC.", "TXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "TXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TX................................................", "TTT..............................................."};
    int timeLeft = 99;
    double speedingTicket = 1.0;
    double redLight = 1.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> cityMap = {"YXXXX", "CXXXX", "..XXX", "..XXX"};
    int timeLeft = 7;
    double speedingTicket = 123.0;
    double redLight = 23.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> cityMap = {"Y.C.", "XX.."};
    int timeLeft = 6;
    double speedingTicket = 1.0;
    double redLight = 1.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> cityMap = {"XSSXXX", "YSSC..", "XXXX.."};
    int timeLeft = 9;
    double speedingTicket = 10.0;
    double redLight = 1.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 80.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> cityMap = {"YSTSTSTSTSTSTSTSTSTSTSTSTSTST", "STSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTST", "STSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSXXXXXXXXXXTSTSTSTSTST", "STSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTST", "STSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTST", "STSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTST", "STSTSTST.........TSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTST", "STSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSXXXXXXXXXXXSTSTSTSTST", "STSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTXTSXXXXXXXXXXX", "STSTSTSTSTSTSTSXSTSTSTSTSTSTC"};
    int timeLeft = 100;
    double speedingTicket = 27.324523;
    double redLight = 33.123123;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 601.139506;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> cityMap = {"YTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTC"};
    int timeLeft = 100;
    double speedingTicket = 40.0;
    double redLight = 30.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 1995.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> cityMap = {"Y..C", "XX.."};
    int timeLeft = 9;
    double speedingTicket = 1.0;
    double redLight = 1.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> cityMap = {"XXX", "YTX", "CXX"};
    int timeLeft = 4;
    double speedingTicket = 1.0;
    double redLight = 1.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> cityMap = {"YC", ".."};
    int timeLeft = 8;
    double speedingTicket = 1.0;
    double redLight = 1.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> cityMap = {"CY.......TT", "XXXXXXXXXTT"};
    int timeLeft = 100;
    double speedingTicket = 10.0;
    double redLight = 20.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 84.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> cityMap = {"Y.................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................C"};
    int timeLeft = 100;
    double speedingTicket = 1000.0;
    double redLight = 1000.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> cityMap = {"YC.", "X.."};
    int timeLeft = 5;
    double speedingTicket = 1.0;
    double redLight = 1.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> cityMap = {"YC.", "X.."};
    int timeLeft = 5;
    double speedingTicket = 10.0;
    double redLight = 10.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> cityMap = {"TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTT.TTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTYCTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTT.TTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT"};
    int timeLeft = 100;
    double speedingTicket = 1.0;
    double redLight = 1.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> cityMap = {"YTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT", "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTC"};
    int timeLeft = 100;
    double speedingTicket = 3.0;
    double redLight = 4.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 260.40000000000043;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> cityMap = {"YTTTC"};
    int timeLeft = 9;
    double speedingTicket = 123.4;
    double redLight = 567.8;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> cityMap = {"XXXX", "X..X", "Y.CX"};
    int timeLeft = 6;
    double speedingTicket = 15.0;
    double redLight = 27.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> cityMap = {"TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTYCTSTSTSTSTSTSTSTSTSTSTSTST", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS", "TSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTSTS"};
    int timeLeft = 99;
    double speedingTicket = 1000.0;
    double redLight = 1000.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 1700.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> cityMap = {"..X", ".YC"};
    int timeLeft = 5;
    double speedingTicket = 1.0;
    double redLight = 1.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> cityMap = {"Y..C"};
    int timeLeft = 5;
    double speedingTicket = 1.0;
    double redLight = 1.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> cityMap = {"YTC"};
    int timeLeft = 2;
    double speedingTicket = 100.0;
    double redLight = 100.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 70.0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> cityMap = {"XY", "C."};
    int timeLeft = 2;
    double speedingTicket = 1.0;
    double redLight = 1.0;
    LateForConcert* pObj = new LateForConcert();
    clock_t start = clock();
    double result = pObj->bestRoute(cityMap, timeLeft, speedingTicket, redLight);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7581406&rd=10781&pm=7827
********************************************************************************
#include <string> 
#include <vector> 
#include <cstdio> 
#include <iostream> 
#include <sstream> 
#include <set> 
#include <map> 
#include <utility> 
#include <cmath> 
using namespace std; 
 
#define fo(a,b) for(int a=0;a<b;++a) 
#define pb push_back 
#define foreach(it,c) for(typeof((c).begin()) it = (c).begin();it != (c).end();++it) 
#define mp make_pair 
 
#define lint long long int 
#define VS vector<string> 
#define VI vector<int> 
#define VVI vector<VI > 
#define iss istringstream 
#define oss ostringstream 
 
double inf = 1e200; 
VS g; 
int dx[] = {-1,0,1,0}; 
int dy[] = {0,1,0,-1}; 
 
double memo[102][52][52][5]; 
int m , n; 
double S, T; 
 
double doit(int left,int x,int y, int dir) 
{ 
  if(x < 0 || x >= m || y < 0 || y >= n) return inf; 
  if(left == 0) return g[x][y] == 'C' ?  0 : inf; 
  if(g[x][y] == 'C') return inf; 
  if(g[x][y] == 'X') return inf; 
   
  double& ret = memo[left][x][y][dir]; 
  if(ret > -0.5) return ret; 
  ret = inf; 
  fo(k,4) if(k != dir){ 
    ret <?= doit(left-1,x+dx[k],y+dy[k], (k+2)%4) + (g[x][y]=='S' ? S : 0) + 0.7*(g[x][y]=='T' ? T : 0); 
  } 
  if(g[x][y] == 'T' && left > 1){ 
    fo(k,4) if(k != dir){ 
      ret <?= doit(left-2,x+dx[k],y+dy[k], (k+2)%4) ;     
    } 
  } 
  return ret; 
} 
 
class LateForConcert{ 
public: 
double bestRoute(vector <string> cityMap, int timeLeft, double speedingTicket, double redLight) { 
  g = cityMap; 
  m = g.size(); 
  n = g[0].size(); 
  S= speedingTicket; 
  T = redLight; 
 
  fo(i,timeLeft+1) fo(j,m)fo(k,n) fo(l, 5) memo[i][j][k][l] = -1; 
  int sx=-1, sy=-1; 
  fo(i,m)fo(j,n) if(g[i][j]=='Y') sx = i , sy = j; 
  double ret = doit(timeLeft , sx, sy, 4); 
  if(ret < 1e100) return ret; 
  return -1; 
} 
         
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/