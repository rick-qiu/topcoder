/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5996
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

class PaperRockScisQuals {
public:
    int whoPassed(vector<string> players);
};

int PaperRockScisQuals::whoPassed(vector<string> players) {
    int ret;
    return ret;
}


int test0() {
    vector<string> players = {"PPRRS", "PPRRP", "PPRSP", "PPSSP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
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
    vector<string> players = {"RRRRR", "PPPPP", "RRRRR", "PPPPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
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
    vector<string> players = {"RRRRR", "PPPPP", "SSSSS", "PPPPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> players = {"RRRRR", "PPPPP", "SSSSS", "SSSSS", "RRRRR", "RRRRR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
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
    vector<string> players = {"PPRPS", "RRRPR", "SSPRS", "SSPRR", "PPRSP", "SPRPS", "SPRSP", "PRSPR", "PRSPR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> players = {"RRSSR", "PPRSS", "SSRSR", "RPSSP", "SRPPS", "PRPRR", "RPPRP", "RRSPS", "PSPRS", "SRPSR", "RRPSR", "RRPRS", "SSRRP", "PPPSR", "SSSSS", "RSSRR", "SPSSP", "PRRSP", "SSSRR", "RRRSP", "RPPSP", "RRRSR", "PPSPR", "PSPRR", "PSSSP", "RPRRR", "RSPSR", "RSRSR", "PRPSS", "SPPSS", "SPPSS", "SPRSP", "SSRRP", "SSPRP", "PSPPR", "PSSPR", "RSRRR", "SRSPS", "PPSPS", "RRRPR", "SPPPR", "PPPSR", "PRPSR", "RSRSP", "RPPRS", "PSSPS", "PPSSR", "SRSPR", "RSPPR", "RSRSR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> players = {"RPSRP", "PRPRS", "RRPRP", "SSSPR", "SRPSS", "PSRRP", "RSRPS", "PPPSS", "SSRPR", "PPPSR", "RPRSS", "SRSSP", "SRSPS", "PPPPS", "PPPPP", "SSRSS", "RSSPR", "PRSRR", "PPRSP", "SPPPR", "RSRRP", "PRRPP", "SSSRR", "RRPPR", "PPSRS", "SRPSS", "RSRPR", "RPPRP", "PPSSP", "PRRPS", "SRRPR", "RPPRR", "SRRSS", "SRSSS", "PPPRS", "RPPPR", "PSPRP", "SRPPP", "SPSSP", "PSRPP", "RPRPS", "PSRSR", "PSRRP", "SSSSR", "RRRRP", "SRRPR", "RPPPP", "PSPPS", "RPRSR", "PSPPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> players = {"RPPRP", "RPPRS", "RSRSP", "SPRPR", "PSSPP", "RSSRR", "RRSRR", "SRPPR", "RPRRR", "PSSSR", "PRRRP", "SRPRS", "SRSSR", "PPPSR", "PRSRP", "PSPSR", "SPSPR", "RSSPP", "RSPPS", "RSSPS", "SRRSR", "PPSSR", "PRPSP", "RRRRP", "PRSSR", "SPSRR", "PSRPP", "PRPRP", "SRRRP", "RRSPP", "PPSPR", "SSRPR", "RRRSS", "PRPSS", "PPRSP", "PPRRP", "RPRRS", "PSPPS", "PSRPR", "PPPPS", "SSPSS", "RRRPS", "RRSPR", "PRRPS", "PRRPR", "RPSPP", "PSPPP", "RRSRS", "PRRRP", "SPPSP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> players = {"RRSRP", "RPRPS", "PPSRS", "SPRPP", "PRRRR", "PPSRS", "PPRPS", "SSSRR", "RRPRS", "RRSRR", "PRSPR", "RPSSS", "PSSPR", "PSRRS", "PPRSR", "PSSPR", "SPRSS", "RPSRR", "RRPSR", "PSSPR", "PPRPP", "SRRRR", "PRSPS", "SPPRR", "RSRSS", "PRPSR", "RPRPR", "RSSSP", "RPRRR", "SPPSP", "PSSSS", "RRSSR", "PRPSP", "PRSPR", "RPRRS", "SRPSS", "PRRRP", "SSSSP", "SRRSP", "RPSRP", "PPRPP", "PPPPS", "RPRSP", "PSRSR", "RRSPS", "RRPRS", "SSSSS", "RPSRR", "RRSRR", "SSPRP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> players = {"RPRSP", "RRPRR", "RRPPP", "SRPRR", "PRPSS", "PRRSR", "RRSPP", "RRRRR", "SPRSP", "RPRSP", "PSSSP", "RSPPR", "RPPPS", "SPRPP", "PRPPS", "RRRPP", "PRPSP", "SSPPS", "RSPRS", "SRRPR", "SRSPR", "PSRRP", "RRSPP", "RSPPP", "PRPPP", "RSRRS", "PSPRS", "SRPRP", "RPPRR", "SPPPR", "RSRPS", "SSPPP", "PPSPS", "PRPPP", "PPPPR", "RSRRP", "RSSSS", "SPPRP", "SSSRR", "PSRRS", "RSSPR", "RPPRR", "PSRPP", "PRRRS", "RRRPP", "SPSRP", "SPRPR", "PPPPS", "PSRRS", "PSPRR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> players = {"RRRSS", "PRRSS", "PRRPP", "RPSSS", "RRPPR", "SPPSP", "RSRSP", "SSRSP", "RRRPP", "RSRRS", "SPSPS", "PSPRR", "PPRPP", "RPSSS", "RRSPS", "SSRRP", "PSSSP", "SRPRP", "RRSPP", "RRRPR", "RRRRR", "RPRRP", "SSPRP", "PSPSR", "RSRSP", "RPPPP", "PRPSP", "SRRRP", "PPSPR", "PSRRR", "SPPRR", "RSPSS", "PPSRP", "PSPSS", "RPPPR", "SSRRR", "RSSPS", "PPSSS", "RPPPP", "RRRRR", "RRRRS", "PPPPR", "SSPPP", "PPPPS", "PPSRS", "SRPRS", "RRSSR", "RPSRS", "RPSPS", "RPPSS"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> players = {"PSPPP", "SRSSP", "SSSPS", "SPPRS", "SSPRS", "PSPPS", "PSRPR", "SPSPP", "SPPRR", "SRRPP", "PSSSP", "SSSSP", "RPPPR", "RPSPR", "SSPRP", "PSPPR", "RRSPR", "RPRRS", "PSRPS", "SSRSS", "RSSPS", "PPRPP", "SRRPR", "PSRRP", "SRSRR", "SSPPS", "PRRPR", "PPPPR", "SSPRR", "SPRPR", "PSSPR", "PRSRP", "PPRPP", "RRPSR", "RSRRR", "PPSPP", "PSRSR", "SSPPR", "SSRSP", "RSPPP", "SSPSP", "RPSRS", "RRSRR", "PSRRS", "PPRSS", "RSSPP", "PRPSR", "SPRPR", "SRRPP", "RSPSR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
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
    vector<string> players = {"PPSRR", "PPRSR", "PRRSR", "RPSSS", "SSPPS", "RRRPP", "RPSPP", "SPRRR", "PPSSR", "RRRRR", "RRPPR", "PSRSR", "PPRSS", "SSSPS", "SPPPS", "RSRRS", "SSPSP", "SSSPR", "RRRRP", "SSPRR", "SSPRP", "RPSPS", "RRPRR", "RRSPR", "RPRPP", "SPPSS", "RSPRS", "PRRSR", "SSRPR", "RPPPS", "SRSPP", "RRPSP", "SSPSP", "PSRPP", "PSSRR", "RPSSS", "SSRPP", "RRPPP", "SRPRR", "RPSSS", "RPPSR", "PPPRP", "SRSSP", "PSSSP", "PRSSR", "SSPRP", "RPRPR", "RPPPR", "PSPRR", "SRSSR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> players = {"SSSSP", "PPPRR", "SRSPR", "SRSSR", "PPRPR", "PPSPP", "PPRRR", "SPRSR", "RSSSR", "PSPSR", "SSPPR", "RPPPP", "RRPSP", "PPRPP", "SPSSS", "RSPPP", "RSSRS", "SSPSP", "PSRSS", "SPRRR", "SRSSP", "SSSRR", "RSRSS", "SPRSS", "SRPPR", "RRPSR", "SRPPS", "PSRSR", "PRRSR", "RRPPP", "PSSPR", "RPPRR", "PPPPR", "RPPSS", "SRPSR", "PRRSP", "PPPPS", "PSSRP", "PSSSP", "PSPRR", "SSPSS", "PSPSR", "RSSPS", "RSSRP", "PSPRS", "RRSPR", "RPPSP", "PPPRR", "RRPSP", "PPPPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> players = {"RSPPR", "PPPRS", "PRRPP", "PPSRS", "RRSSR", "SRRSR", "RPRRP", "PSPPS", "RSSRS", "SSRPR", "RSSRS", "RRPPS", "PRRRP", "SSSRS", "PRRPR", "SSSPR", "SSSSS", "RPPPS", "SSPRR", "RRRSP", "RSPRP", "RPRRR", "PSRSR", "SSSPR", "PSSPP", "PPRPP", "SRSSR", "SSSSS", "PPRRR", "PSPPP", "RPPPS", "RRPRS", "PPSSR", "RPRSP", "RPPSP", "SSSPP", "PSSSR", "RPRRR", "RRPSR", "RRRSR", "SPSPP", "RPSSR", "RSSSP", "RPSSR", "RSRPR", "RRSRR", "SRSPP", "PPPRS", "PSRRP", "SRSPR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> players = {"PPPPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
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
    vector<string> players = {"PPRSP", "SPRSP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
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
    vector<string> players = {"RPPRS", "PPRSP", "RPSRS"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
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
    vector<string> players = {"PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPS"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> players = {"PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPSPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPRS", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPP", "PPPPR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> players = {"RRRRP", "SSSSS", "PPPPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
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
    vector<string> players = {"PPRRS", "SRSRR", "PPRSP", "SPPPR", "SSRPR", "PRRPS", "RRRSP", "SRRSP", "SRSRP", "RRRSS", "SSSSP", "PSPSS", "PSPSR", "SRPPP", "PRSRR", "RSSRS", "RPPRS", "PPRPR", "RRRPS", "RRPPS", "RPSPS", "SRSRP", "SRSPR", "SSSSR", "SPSRS", "PRRSP", "PPRPP", "RRPRP", "RPSRR", "RSSPP", "SSRPR", "SRPRR", "SRPRS", "RSRRP", "RRSPP", "RRPPS", "RSPRR", "RRPRP", "SSPPP", "RPPRR", "PPRRP", "PSPRP", "SSPPR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> players = {"SRRRR", "PSPSP", "PRPRP", "RPRSR", "SRRRP", "RRSRR", "RPSSP", "RRSPS", "RRSPS", "RRRPS", "PPSPR", "PSPPR", "SRPPS"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> players = {"SSSSR", "PSSRP", "RRSRR", "SPPRS", "RPRRS", "RSRSS", "RPPPS", "PSPPP", "SPPRS", "SSSRS", "PPSRP", "SRPSR", "PRPSS", "PRPPS", "PRSSP", "SPSRR", "SRPSR", "SRRRS", "SPSSR", "RSPPR", "RSRSS", "SRSPP", "PPRRR", "RSRPS", "RSSPP", "SSPRS", "SPPPR", "PSPPS", "RPPRR", "SPSPP", "SRSSP", "PSRRP", "PPPSP", "PSPRP", "PPSPP", "SPRSR", "PRSSS", "PSPPS", "SPRSR", "SPPSP", "SRRRS", "SPRPP", "PSRRR", "RSSSS"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> players = {"PPSSS", "SPSRR", "RRSPS", "PPSSS", "SSRPR", "PRSPR", "RSRRP", "RSRPP", "SRPSP", "SPRPR", "RSRRR", "RRPPS", "PSRRR", "RPPSP", "RSPSP", "RSRPP", "PSRSR", "PPPRS", "PSSSS", "PRRPR", "PRRSR", "SRRSS", "PRRRR", "SPPPS", "RSPPS", "SRPSR", "SSPPR", "SRRPP", "PRSRS", "PPPPP", "PSPRS", "PRSPR", "RPSSR", "PRPSP", "RRPSP", "RSRPP", "PRRRS", "RPPRP", "SRRPS", "RPRSP", "PSPRS"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> players = {"PPPPP", "SSSRR", "SRRPS", "PPRSP", "PSPSR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> players = {"PRSPR", "PRRRR", "PPPSP", "RSPRP", "SSRRS", "RSSPP", "SSPPR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
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
    vector<string> players = {"SPSRR", "RSSPS", "PRRSS", "RPSPR", "SPSRR", "SSSRR", "PRPPP", "PRSRR", "PSPSS", "RPRPR", "SSSRS", "RRSPS", "SPPSR", "RSRRR", "SPRRS", "RRSSS", "SSSSP", "RSRRS", "RSPRS", "SRSRS", "PRRSP", "SRPPS", "PPRRS", "PRPRR", "RRSSS", "RRRSR", "PSRPS", "SSRSS", "SPSRS", "RRSPR", "RSRPP", "PPRSS", "RRRRS", "SSPRS", "RPPPR", "PRRRP", "RPSRR", "RPPPP", "SPPSS", "RRSPR", "PPSPS", "SSSSS", "PPRSS", "PSPRP", "SRRPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> players = {"PSPRS", "PSPRP", "RSPSR", "SPPSR", "PSPRR", "SSPSS", "RSPSP", "SPSSP", "RRRPP", "RRPPP", "SPPPS", "RRPRP", "SPSSP", "SRPPR", "RPSPR", "RRPPR", "SRPRR", "RSSPP", "RSSPP", "RPPSS", "RPSRS", "PPRSS", "PPRRS", "PSPPP", "PRPRP", "RPPRP", "RSPPR", "SRSPS", "PRPSS", "PPSSP", "PSSRR", "RSPRR", "SSRPP", "PPSRS", "PRRPS", "RPPRR", "SPSPS", "PSPPS", "PSSRP", "PPSSP", "PRSPP", "PRPRR", "SPSSS", "RPPPR", "RRPSS", "SPPRR", "RRSSS", "PSSRR", "RSPPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> players = {"PRSPR", "RSPRR", "RPSRP", "SRPPP", "SSPRS", "SRSRR", "SRSPR", "RPPPR", "SSRPR", "SPSPR", "SRRSP", "SPSPS", "PPPRP", "RRSPS", "RPSSP", "SRPPP", "RSPRS", "PPSRP", "SSRPR", "PRRSP", "RSSPR", "SSSPP", "PSSSS", "PPPPR", "SPSSR", "RPRSS", "RPPSS", "PPPPP", "SRPSP", "PRRSR", "SPSRR", "PSPPP", "PRPPR", "RSSRS", "RPRPR", "SSPPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> players = {"SPPPS", "PSSPP", "SSRPR", "PPRSP", "RSRRP", "PPPRS", "SPRPS", "SSPPR", "RSPSS", "SSRRS", "PPSSP", "PPRPP", "RPRSR", "PPPRS", "PSSRS", "SPSSP", "RRPPS", "SPSPR", "RRPPR", "RSRSP", "RRSPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> players = {"RPSPR", "SSPRR", "SRSRP", "PSPSS", "PSRRR", "PSPRS", "PSSPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
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
    vector<string> players = {"RRRPP", "PSRPP", "PSPPP", "SRSPR", "SPPSR", "RSPSR", "SRRPS", "RPRRP", "PSSSR", "RRRPP", "RRRSP", "PSSRP", "SPSSS", "SSSPP", "SRPRS", "RPPRS", "PPSSS", "PPPPS", "RPRPR", "PPRRP", "RSSRR", "PSPRS", "SSPSS", "PPRPP", "RSSSP", "RSPPS", "SPPRR", "SSRSR", "SSRPS", "PPPRS", "PSRSS", "PRPPR", "SSSPS", "SPRPS", "RPRSP", "RPPSS", "RRRRP", "SRPRR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> players = {"PPSPR", "SRPRR", "RPPSS", "RPRPR", "RSSSS", "RPPPP", "PRSRS", "PSRPS", "SPRRS", "PRSPR", "RSPPR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
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
    vector<string> players = {"RSPPS", "PSSPP", "PRRSR", "SSPPP", "RPPSR", "SSRSS", "SSRSS", "RRPRP", "PSPRP", "PSRPS", "SSPPS", "SRSRS", "RSSRR", "SRPSP", "SRPSS", "SPPRS", "RRRPR", "SSSSR", "PSRSP", "RSPRR", "SSRRP", "SPRRS", "RRPSR", "SPSRS", "PRRPS", "SRRPS"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> players = {"PPSSS", "RSSRR", "SPSSP", "RPPSP", "SPSRP", "SRPRP", "SRPPR", "SRSPP", "PPPPP", "PSSRP", "SPPSS", "PRRPS", "PRSRS", "RSPSP", "SPRRS", "SPRRP", "SSRPS", "SRRRR", "SSSPR", "PPPRR", "PPRSP", "RPPPP", "RPRPP", "RPPSS", "SSRSP", "PPSPR", "SRPRP", "PPRRS", "SRPRP", "RSRRR", "SSRSS", "PPPRR", "RRSSR", "SRRRP", "PPPSR", "SSSRR", "SSPRR", "RSPPP", "PPPSR", "PRSPS", "PRPRR", "RSPPP", "SSRSP", "RRRSR", "PRRPP", "SSPRR", "SRPRR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> players = {"RSPSP", "RSSRP", "RRSRP", "PSPSP", "RPRPR", "SSRSP", "RSSPR", "PRRRR", "SSPSS", "RPPSR", "RSRRP", "RSRRR", "PSSRS", "SRPSP", "SRPPS", "PPSSR", "PSPSP", "PSSPR", "PRPRR", "PSPRP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> players = {"RPRPS", "SSPPS", "SRSRP", "PRSSS", "SSPSR", "SPPRR", "SRPRP", "SSPSS", "SRRSS", "RSPSR", "PPSPR", "RPSSS", "SPPSS", "PPSPS", "SSPSS", "SPPPS", "RPSSS", "PRPSR", "RSPRP", "SRPPS", "PRPPP", "SRSRR", "SSRPP", "PRRPR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> players = {"SSPRS", "SSRRR", "RRPRP", "SSRPR", "PRSSR", "SRRRP", "SRRRS", "PPSPS", "PPSRS", "PPSRR", "RSSPP", "RRRPS", "PRSSS", "SRRSS", "SSPSS", "SRRSP", "SRSPP", "PSRSS", "SSRSP", "RSRRS", "PSSRR", "PSRRP", "PRRSP", "SRRPP", "PSSSR", "RRPPR", "PRRPP", "PPSPS", "RRPSP", "PSPPR", "SRRSP", "PRPSS", "PPRPS", "PSPPR", "RPRSR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> players = {"SPPPR", "SPRRR", "RSSPR", "SSPPS", "PPPPS", "SRPPP", "RPPRS", "PRRRP", "SPSRR", "RPRPR", "RPRRR", "RPSPP", "SRRSP", "PPSSR", "PPSRP", "SRRSS", "PRRRS", "SSSRS", "RPRPR", "PRPSR", "SPPSS", "RRPPR", "PSSRP", "RSRRR", "RSSSR", "RSRPP", "RPPPP", "SSPSS"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> players = {"SPSRR", "SSSRR", "PPPRS", "RRPRS", "SPSSS", "RRSSS", "PPSSS", "SRSSS", "SPPSS", "SRPRS", "RRPRR", "SRRPS", "SRSPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
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
    vector<string> players = {"SSPSP", "PPPSS", "PSRRS", "RRPRR", "PSPSP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> players = {"RSSSS", "RPPPS"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> players = {"PPSPR", "RRPSR", "PSPPP", "SPSPP", "SSSRS", "PSPSR", "PSRPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> players = {"SPPPR", "SPRSS", "SSPSP", "SSSRS", "SRSSS", "PPPRP", "PPPPP", "RSPRS", "PRSSS", "RPSPS", "SRRRS", "RRPPP", "RPRSS", "SSRSS", "SSPPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
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
    vector<string> players = {"SPPSR", "SSRSP", "SPSPP", "SPRRR", "PPRRS", "PPPRS", "SPPRP", "PRSSP", "RSSRP", "SSSSR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> players = {"SPSPS", "PPPRS", "PSRPR", "SPPRS", "SRRSR", "SPPPS", "PRPPR", "RPPRP", "SPRPP", "SSSSP", "RPSSR", "PSPPS", "PRSPS", "PSPRR", "PRRSS", "PSRRP", "PPRRS", "RSSPP", "SSSPP", "RRPPP", "RSRRR", "PPRSR", "SRRPR", "PPSRS", "PSSRR", "SPRRP", "RSPRP", "PRPPR", "RSPRR", "RSSSS", "RSSRP", "PRSPP", "PPPRR", "PPRRR", "PRRSS", "RPSRS", "PRPRR", "RSPRP", "RRRPR", "PPPRP", "PRSSS", "RRSSR", "RPPPP", "SRPPP", "SRSSR", "SPRPR", "PRRPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> players = {"PPSRR", "PSPRS", "RRSSS", "SSSRP", "RPPSR", "PRRRP", "RSSSR", "PPSPP", "RSSSP", "PRRRP", "PSRSP", "PPSSS", "RRRRP", "PRPRS", "SSRSP", "RPRPS", "SPPSS", "SRPPS", "RSPRR", "RSRSS", "PSPSR", "RSPSR", "SSRPR", "PPRSP", "PPSRR", "PPPRP", "PRSRP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> players = {"PPSSP", "RRPPP", "PRSSR", "SPSRS", "PPPRS", "RRPPS", "RRPRS", "PSRRS", "RPSSS", "RRRRS", "SRPPS", "SSSPS", "SPRSS", "SSPPP", "SPRRS", "PSPRR", "PSRSP", "PSRPR", "PSRSP", "RRSPP", "RSPPP", "PSRPS", "PPSPR", "PSRPS", "PSSSS", "RSSRP", "SRRSS"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> players = {"RPRRS", "RRRPR", "RSSRR", "RSPRR", "RRPPS", "SRSSR", "PSRSR", "PPRPR", "PRSSS", "SSSPS", "PPSPS", "PRRRS", "RPPSP", "RRSPR", "PSRSS", "RRRSR", "PPSPR", "PRSPR", "PPRPP", "SPSSR", "PPRRR", "RPSRS", "PRPSR", "PRSRP", "PSSSR", "PPSRP", "RPRRS", "RSPRR", "SSSRR", "RSSPP", "SRPRP", "PPPPP", "PRRRS", "RSPSR", "SPSRR", "SPPPP", "RSRSS", "PPPRP", "RSPSP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> players = {"RSRPS", "RPPSR", "PPRRS", "RPRPR", "RRSSS", "SRSRR", "PSRPS", "RSRPS", "PSRRR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> players = {"SSRRR", "RRSPS", "RSSPP", "PPRSP", "SRPSS", "PSSSP", "PRRPR", "RPPRP", "SSSPP", "SRRSP", "SRSSS", "RSPSS", "SRRPP", "SRRSP", "RRRPR", "PPRRR", "RSSSR", "RRRPS", "PSSSS", "SPSPR", "RRPRP", "RRPRP", "RRSSS", "SSSSR", "RSPPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> players = {"PRRSP", "PRRSP", "SPRRR", "PPRRR", "SSRPS", "PSRRR", "RPSPS", "RPSSR", "RRSRR", "PSRPP", "SSRPP", "SSRRP", "PSSRR", "SRPRS", "RSRPR", "RRRPP", "PSPRP", "RSPSR", "SPSRP", "RSSRS", "RPSSR", "RSPPR", "PRSSS", "RPSRP", "PSPRR", "PPSPP", "SSRPR", "SRPPP", "RRRRP", "PSPPS", "SSRSR", "RPRSR", "SPPRP", "SPRSS", "RRRPS", "SPRSS", "RPPRP", "RRRRR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> players = {"RSRPR", "RSSRR", "RSRSP", "PSSRR", "PSRPS", "SSRSS", "RSSSP", "SPPPP", "SPPPR", "PSSSP", "SSPSP", "SPSSP", "PPSRP", "SSPPS", "SPSSP", "RPPRS", "PRPRP", "PSPSS", "PSRSP", "PPRRR", "RRSPP", "PSRSP", "SRRPR", "SPSSP", "SSPPR", "SSSRR", "SSSRS", "PRSPP", "SSRRP", "SPPRR", "SPRPP", "SRPPR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> players = {"PPPSR", "SRRRP", "PSRSP", "PRPSR", "RSSPP", "RSSSP", "PPPPS", "RPPRP", "SRPRR", "PSPPR", "PSPPS", "SSSRS", "RPSRS", "PSSPS", "RSSRR", "RSPRP", "RRRRS", "PRSSP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> players = {"PRSRP", "SPSPP", "SSSPS", "RPPPP", "SPSSS", "RSSPR", "PPRSR", "SSSSR", "RRPPR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> players = {"SRRSR", "SPPSP", "RRSSR", "SSSPS", "PSSSS", "PPSSP", "PPRSR", "PRPSP", "PSRSP", "RPSSP", "SPSSR", "PSSPS", "SRPRR", "RRRRR", "SRPRP", "SPSPP", "RSPRS", "RSRSS", "SSRSR", "PRRPP", "RPRPP", "RRRRP", "PRRRR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> players = {"RRRRP", "SSPRP", "SRRPS", "SSPRR", "SPPSS", "RRRSP", "RSPSS", "SSSSP", "SSRSR", "SPRRP", "PSSSR", "SSSRS", "SPSPP", "RPPRR", "RRPSR", "RRSSS", "PRRRS", "RPPRR", "RRPPR", "SPSRP", "SSPRP", "SPRSR", "SRSSS", "RSSSP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
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
    vector<string> players = {"RSRRR", "SSSRS", "SSSSS", "SPSSP", "PPSRS", "RRRPR", "SPPSS", "PPSSR", "RRRSS", "SSSPP", "RPPPP", "PSPPS", "SSSRP", "SSPPR", "RSSRS", "PRSPS", "SRPPS", "RPRSP", "PRRRS", "RPRSP", "RSRSP", "RPPSR", "SRRRP", "SPRRP", "SRSRS", "PSPSR", "PRPPP", "SRRSS", "SRRPS", "RRSPR", "SPRSP", "PSRSP", "SRSPP", "PSPRR", "RRPSR", "PPSPP", "RRRRP", "SPRPR", "RSRRS", "PSPSS", "PPRPS"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
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
    vector<string> players = {"PRPPP", "SSSRS", "SRPRR", "SRRSR", "RPPPP", "PSSSP", "SPPRS", "SRSRP", "SPRPR", "SPRSP", "SPSRR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> players = {"SSRPP", "SRSRR", "SRSSP", "RSPSS", "PSSRP", "PSPPS", "SPSPP", "RSRSR", "SRRPS"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
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
    vector<string> players = {"RRRRR", "PPPPP", "RRRRR", "PPPPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> players = {"RRRRR", "PPPPP", "SSSSS", "SSSSS", "RRRRR", "RRRRR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> players = {"PPRPS", "RRRPR", "SSPRS", "SSPRR", "PPRSP", "SPRPS", "SPRSP", "PRSPR", "PRSPR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> players = {"PPPPP", "RRRRR", "SSPPP", "PPPSS", "SSPPP", "SSPPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> players = {"PPRRS", "PPRRP", "PPRSP", "PPSSP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> players = {"PPRRS", "PPRRP", "PPRSP", "PPSSP", "PPRRS"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
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
    vector<string> players = {"RRRRR", "PPPPP", "SSSSS", "RRRRR", "SRPSP", "RPSSR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> players = {"SSSSS", "RPRRR"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> players = {"PPPPP", "PPPPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> players = {"PPPPP", "SSSSS", "RRRRR", "RRRRR", "SPRPS", "PRSPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
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
    vector<string> players = {"PPPPR", "RRRRS", "PPPPP"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
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
    vector<string> players = {"PPPPP", "SSSSS"};
    PaperRockScisQuals* pObj = new PaperRockScisQuals();
    clock_t start = clock();
    int result = pObj->whoPassed(players);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21472131&rd=9816&pm=5996
********************************************************************************
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
 
using namespace std;
 
class PaperRockScisQuals {
public: int whoPassed(vector<string> p){
        vector<double> po(p.size());
        for(int i=0;i<p.size();i++){
                for(int j=i+1;j<p.size();j++){
                        double c1=0,c2=0;
                        for(int k=0;k<5;k++){
                                if((p[i][k]=='P' && p[j][k]=='R')||(p[i][k]=='R' && p[j][k]=='S')||(p[i][k]=='S' && p[j][k]=='P'))
                                                 c1+=1;
                                else if((p[j][k]=='P' && p[i][k]=='R')||(p[j][k]=='R' && p[i][k]=='S')||(p[j][k]=='S' && p[i][k]=='P'))
                                     c2+=1;
                                else {
                                     c1+=0.5;
                                     c2+=0.5;
                                }
                        }
                        if(c1>c2) po[i]+=1;
                        else if(c2>c1) po[j]+=1;
                        else {  po[i]+=0.5; po[j]+=0.5; }
                }
        }
        //for(int i=0;i<p.size();i++) cout<<po[i]<<endl;
        int c=0;
        double s=0;
        for(int i=0;i<p.size();i++)
                if(po[i]>s){
                             s=po[i];
                             c=i;
                }
        
        return c;
}
};

********************************************************************************
*******************************************************************************/