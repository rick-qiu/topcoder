/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2866
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

class RegularSeason {
public:
    vector<string> finalStandings(vector<string> teams, int rounds);
};

vector<string> RegularSeason::finalStandings(vector<string> teams, int rounds) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> teams = {"A 0 10 50", "B 100 0 100", "C 50 10 0"};
    int rounds = 5;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B 19", "A 6", "C 6"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> teams = {"SPURS 0 33 67 100", "LAKERS 67 0 33 100", "WOLVES 33 67 0 100", "KINGS 0 75 75 0"};
    int rounds = 2;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SPURS 8", "LAKERS 7", "WOLVES 7", "KINGS 3"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> teams = {"A 0 10 20 30 40 50 60 70 80 90", "AA 90 0 10 20 30 40 50 60 70 80", "AAA 80 90 0 10 20 30 40 50 60 70", "AAAA 70 80 90 0 10 20 30 40 50 60", "AAAAA 60 70 80 90 0 10 20 30 40 50", "AAAAAA 50 60 70 80 90 0 10 20 30 40", "AAAAAAA 40 50 60 70 80 90 0 10 20 30", "AAAAAAAA 30 40 50 60 70 80 90 0 10 20", "AAAAAAAAA 20 30 40 50 60 70 80 90 0 10", "AAAAAAAAAA 10 20 30 40 50 60 70 80 90 0"};
    int rounds = 10;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 90", "AA 90", "AAA 90", "AAAA 90", "AAAAA 90", "AAAAAA 90", "AAAAAAA 90", "AAAAAAAA 90", "AAAAAAAAA 90", "AAAAAAAAAA 90"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> teams = {"DAAJN 0 56 19 81 59", "PPERLJ 48 0 35 90 83", "P 75 17 0 86 71", "UNHWSYYO 51 30 1 0 9", "MG 36 14 16 99 0"};
    int rounds = 9;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"P 52", "PPERLJ 49", "DAAJN 36", "MG 31", "UNHWSYYO 12"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> teams = {"BZRDW 0 78 85 100 100 61 39 26", "PEEVMENTK 30 0 84 2 37 9 68 5", "ORT 0 92 0 27 27 59 69 84", "MDJVANRL 73 48 20 0 75 47 46 95", "YX 75 10 60 38 0 74 61 57", "IMJWIL 36 15 22 42 81 0 52 99", "ZHT 75 34 17 66 49 6 0 70", "FTVKNX 50 14 95 14 91 69 30 0"};
    int rounds = 1;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BZRDW 9", "MDJVANRL 8", "IMJWIL 7", "ORT 7", "ZHT 7", "PEEVMENTK 6", "FTVKNX 6", "YX 6"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> teams = {"VTWXXNLC 0 23 77 37 87 11 73 63 90 18", "VLEA 54 0 91 78 97 19 91 80 96 85", "UBCKRUE 89 63 0 18 62 26 25 73 79 17", "BI 72 48 8 0 81 86 12 31 57 47", "Z 76 19 73 100 0 1 65 69 17 7", "BXQLAGK 27 68 84 56 37 0 78 23 64 23", "UAVDQOZ 20 98 28 2 77 15 0 4 0 35", "FHUIM 65 34 41 42 9 55 70 0 34 66", "CZTDLSZ 88 54 57 5 47 26 43 87 0 49", "QQYRHOHO 8 57 71 78 87 85 29 87 65 0"};
    int rounds = 8;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VLEA 90", "QQYRHOHO 90", "BXQLAGK 83", "BI 74", "VTWXXNLC 70", "CZTDLSZ 68", "UBCKRUE 66", "FHUIM 64", "Z 59", "UAVDQOZ 55"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> teams = {"XQQNTTYM 0 55 49 96 67 77 62 45", "CXVL 80 0 75 99 20 63 91 59", "WT 92 51 0 49 45 89 94 18", "K 25 20 73 0 95 63 4 64", "BEFDPDQPRT 3 56 54 45 0 6 100 12", "RHVJZUFEKE 60 5 17 66 33 0 31 66", "FYEJHD 41 43 22 68 16 50 0 51", "BU 81 43 0 34 37 12 83 0"};
    int rounds = 8;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CXVL 73", "WT 68", "XQQNTTYM 62", "BU 54", "BEFDPDQPRT 53", "RHVJZUFEKE 49", "K 47", "FYEJHD 42"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> teams = {"QRUD 0 93 54 14 46 23 87 21 78 85 100 100 61 39 26", "WXP 30 0 84 2 37 9 68 5 0 92 27 27 59 69 84", "BRZI 73 48 0 20 75 47 46 95 75 10 60 38 74 61 57", "HEC 36 15 22 0 42 81 52 99 75 34 17 66 49 6 70", "WTEIC 50 14 95 14 0 91 69 30 43 7 97 69 15 88 82", "Q 58 19 17 82 48 0 15 50 73 40 28 57 68 76 72", "OLKHM 48 12 37 84 3 52 0 66 43 10 95 93 55 34 47", "DIT 37 85 32 46 27 99 30 0 74 57 19 76 84 40 50", "VY 89 2 100 57 5 53 19 85 0 63 66 19 85 12 11", "SHYDB 75 31 95 28 33 14 74 84 71 0 60 75 25 14 0", "NPYB 6 81 86 21 11 55 1 11 45 75 0 69 54 7 44", "RICNF 20 70 29 44 23 58 53 63 16 50 97 0 70 93 19", "XO 33 18 100 46 100 9 63 9 44 94 4 90 0 29 22", "CMJM 77 41 20 63 61 45 47 60 64 86 83 63 72 0 57", "NJRN 37 18 74 56 91 24 19 61 70 59 35 49 8 74 0"};
    int rounds = 7;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CMJM 112", "WTEIC 109", "QRUD 109", "HEC 104", "WXP 101", "Q 101", "OLKHM 101", "NJRN 100", "DIT 99", "BRZI 93", "SHYDB 92", "VY 91", "XO 90", "RICNF 85", "NPYB 82"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> teams = {"WF 0 0 71 10 62 87 49 75 50", "OZ 38 0 79 55 36 96 63 17 37", "C 13 75 0 96 61 2 33 5 64", "LCG 13 85 87 0 60 72 86 1 12", "GDDYC 71 62 21 6 0 17 63 34 32", "B 37 66 81 81 53 0 61 80 90", "XK 14 63 40 25 13 86 0 6 43", "YVN 57 30 55 22 31 11 81 0 13", "SKGAN 28 79 90 79 75 62 36 86 0"};
    int rounds = 10;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SKGAN 99", "WF 93", "B 92", "LCG 84", "YVN 80", "OZ 76", "GDDYC 72", "C 63", "XK 62"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> teams = {"DQ 0 24 59 25 69 95 43 89 0", "YFUQR 95 0 60 79 58 14 22 38 0", "LXRDQ 42 8 0 66 86 6 81 66 69", "KYO 81 53 69 0 14 69 73 78 3", "NGK 87 65 71 8 0 55 95 5 27", "AU 14 99 62 29 93 0 37 70 22", "B 15 24 52 91 10 91 0 44 8", "PB 78 17 98 78 87 21 46 0 0", "E 75 11 40 31 100 3 25 19 0"};
    int rounds = 7;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"E 68", "AU 61", "YFUQR 61", "KYO 58", "PB 57", "DQ 50", "B 50", "LXRDQ 50", "NGK 49"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> teams = {"ZSN 0 61 70 44 69 40 84 59 20", "SJKB 95 0 88 39 99 18 90 58 44", "EBIUF 63 71 0 5 28 26 41 90 71", "MA 73 90 39 0 40 91 31 39 57", "NPT 35 74 75 74 0 74 14 20 27", "JVY 68 92 37 52 11 0 91 20 52", "ZBOW 66 44 69 9 8 7 0 2 35", "HH 31 70 14 39 6 68 73 0 20", "P 70 62 66 54 9 55 5 98 0"};
    int rounds = 10;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MA 94", "NPT 92", "P 89", "JVY 84", "SJKB 77", "ZSN 75", "EBIUF 74", "HH 74", "ZBOW 61"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> teams = {"G 0 3 46 86 94", "GU 40 0 73 61 81", "WD 88 58 0 60 7", "QXEN 80 46 59 0 59", "UZFXU 57 82 67 34 0"};
    int rounds = 10;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"GU 47", "QXEN 40", "UZFXU 40", "WD 37", "G 36"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> teams = {"LFR 0 89 63 18 62 26 25 73 79 17 72 48 8 81", "M 86 0 12 31 57 47 76 19 73 100 1 65 69 17", "ULA 7 27 0 68 84 56 37 78 23 64 23 20 98 28", "JD 2 77 15 0 4 0 35 65 34 41 42 9 55 70", "TXQQN 34 66 88 54 0 57 5 47 26 43 87 49 8 57", "TYMJ 71 78 87 85 29 0 87 65 75 83 77 88 91 92", "X 52 44 10 35 83 43 0 17 0 66 78 6 9 38", "LCWTB 69 81 15 14 4 34 1 0 98 65 5 92 64 43", "YBE 2 24 39 66 78 2 83 13 0 64 55 99 46 21", "DP 30 78 34 48 61 10 99 76 15 0 46 71 100 78", "Q 64 62 95 69 29 57 29 55 71 24 0 55 49 96", "RTX 67 77 62 45 80 75 99 20 63 91 59 0 92 51", "HVJZ 49 45 89 94 18 25 20 73 95 63 4 64 0 3", "FEKE 56 54 45 6 100 12 60 5 17 66 33 31 66 0"};
    int rounds = 6;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"TYMJ 112", "RTX 89", "Q 88", "LFR 82", "LCWTB 77", "DP 76", "ULA 76", "TXQQN 74", "YBE 73", "HVJZ 71", "FEKE 71", "M 69", "X 68", "JD 67"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> teams = {"HKMB 0 96 19 38 30 12 20", "ATTF 4 0 77 76 88 0 45", "B 43 80 0 46 49 75 24", "AISU 56 9 93 0 90 86 6", "ZQH 49 63 75 76 0 25 91", "WCC 79 20 55 5 52 0 79", "D 71 2 73 55 92 88 0"};
    int rounds = 10;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"D 72", "AISU 64", "ATTF 62", "WCC 60", "ZQH 58", "B 53", "HKMB 51"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> teams = {"NGTXF 0 37 82 4 82 24 90 25", "U 27 0 21 23 85 88 89 85", "OU 61 4 0 17 18 35 45 18", "IOZWQ 90 62 55 0 92 52 73 100", "VJ 97 87 84 14 0 37 28 17", "AO 98 74 72 3 65 0 82 74", "DI 82 12 72 37 65 92 0 89", "FYDWX 3 78 45 0 23 42 15 0"};
    int rounds = 5;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"IOZWQ 56", "AO 40", "U 38", "DI 36", "VJ 32", "NGTXF 29", "FYDWX 25", "OU 23"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> teams = {"M 0 64 56 63 42 1 87", "KJAH 14 0 27 29 68 56 96", "WLY 61 79 0 42 82 74 13", "NA 52 2 0 0 75 33 91", "WLSIP 46 77 5 63 0 2 68", "OBJ 97 50 71 26 83 0 65", "YW 60 26 85 46 75 35 0"};
    int rounds = 10;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OBJ 79", "WLY 71", "KJAH 59", "NA 58", "M 58", "YW 51", "WLSIP 44"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> teams = {"UXB 0 58 7 41 30 50 8 88 30 78 94", "VKORL 59 0 21 28 56 88 25 30 73 87 23", "YZ 19 45 0 89 58 2 100 5 62 25 17", "PHDF 11 23 49 0 96 4 8 34 28 52 49", "MJFM 41 93 60 29 0 48 40 96 55 84 80", "YRZG 80 59 87 32 94 0 27 95 72 12 78", "GXM 47 17 2 4 45 87 0 13 1 21 82", "NO 80 78 66 30 78 93 85 0 24 50 2", "JE 7 3 35 72 41 18 30 18 0 75 13", "FX 5 53 36 81 16 90 13 2 18 0 82", "UQRH 25 57 35 54 67 87 94 95 10 15 0"};
    int rounds = 8;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NO 89", "UXB 89", "YRZG 86", "MJFM 84", "YZ 82", "UQRH 82", "VKORL 80", "JE 75", "FX 72", "PHDF 72", "GXM 71"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> teams = {"BNH 0 72 86 34 4", "G 48 0 2 84 62", "NQBJY 54 61 0 57 78", "IGHBZ 64 70 76 0 87", "B 15 42 79 2 0"};
    int rounds = 3;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"IGHBZ 16", "BNH 12", "NQBJY 12", "G 11", "B 9"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> teams = {"C 0 79 65 8 26 13 21 56", "VRVA 18 0 63 10 45 76 33 5", "PYH 28 70 0 88 57 87 8 80", "TWXV 100 64 62 0 60 59 19 98", "HUDO 23 4 24 25 0 41 80 27", "KZCK 90 38 73 20 5 0 61 35", "R 36 67 98 22 90 35 0 96", "EF 67 20 28 35 53 29 22 0"};
    int rounds = 2;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"TWXV 19", "R 18", "PYH 14", "KZCK 14", "VRVA 12", "C 12", "HUDO 12", "EF 11"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> teams = {"VGCBX 0 77 4 48 5 97 8 57 97 57 88 41 40 41", "X 66 0 83 95 28 0 62 4 66 42 96 61 20 41", "YJ 34 62 0 81 0 10 39 27 31 83 86 31 19 57", "RX 47 100 43 0 37 42 38 58 88 34 39 96 51 42", "LR 61 78 8 15 0 21 8 32 47 63 33 8 62 14", "MN 28 83 44 100 22 0 10 52 26 0 58 77 10 97", "UTMVO 37 91 52 22 30 48 0 31 41 77 85 39 43 73", "JB 74 9 8 76 85 64 36 0 47 9 41 19 34 92", "TJHFI 23 31 15 34 18 27 20 17 0 33 6 50 97 81", "W 45 92 18 48 47 70 25 94 28 0 30 83 82 63", "KD 80 0 26 29 96 86 52 71 25 93 0 49 9 83", "PUFLT 7 28 38 64 52 43 14 98 7 0 92 0 41 76", "QUE 18 10 42 68 53 83 84 27 50 87 15 98 0 54", "ZS 22 6 20 19 19 20 96 59 74 29 68 79 93 0"};
    int rounds = 2;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"UTMVO 30", "YJ 29", "VGCBX 28", "W 28", "QUE 28", "RX 26", "X 26", "MN 26", "JB 25", "KD 25", "LR 25", "PUFLT 23", "TJHFI 23", "ZS 22"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> teams = {"NW 0 4 75 3 13 8 55 57 53 22 7 30 6 41", "MAR 13 0 25 82 51 27 99 92 12 28 71 47 29 34", "JOT 53 81 0 52 6 83 55 10 51 95 73 47 45 92", "A 55 36 89 0 66 12 51 11 28 55 79 37 86 75", "THU 46 36 44 59 0 38 63 56 48 84 18 0 11 4", "SHOKC 22 25 41 71 44 0 13 54 86 81 22 93 31 14", "CR 61 1 96 54 39 1 0 23 89 59 15 1 54 92", "R 65 22 40 97 9 40 51 0 33 33 63 25 29 53", "TXTO 90 48 33 68 46 58 41 93 0 12 67 15 24 11", "CG 10 69 83 49 45 65 42 64 10 0 83 37 88 52", "ZMFU 97 39 73 63 37 82 86 6 75 36 0 23 82 79", "JMZJ 27 56 17 12 76 41 28 17 54 24 32 0 22 66", "FQODY 70 67 64 5 33 96 32 31 16 37 27 97 0 23", "QBR 26 63 76 58 27 71 34 72 2 70 63 12 72 0"};
    int rounds = 8;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ZMFU 117", "MAR 109", "CG 109", "TXTO 108", "FQODY 106", "THU 105", "QBR 105", "JMZJ 105", "A 105", "JOT 103", "SHOKC 102", "R 102", "CR 99", "NW 83"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> teams = {"FW 0 41 23 97 74 34 73 60 62", "FYT 90 0 68 23 10 53 72 57 1", "JO 51 46 0 98 89 70 24 10 26", "YTTK 47 61 4 0 39 11 100 74 4", "ZQI 0 68 96 71 0 75 14 68 61", "QSM 66 98 7 91 86 0 63 89 58", "GCBD 15 90 57 26 17 63 0 84 67", "EQW 86 45 99 66 71 5 82 0 75", "VQ 98 84 31 11 20 29 95 85 0"};
    int rounds = 10;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"QSM 102", "VQ 90", "ZQI 85", "JO 83", "FW 81", "EQW 80", "GCBD 70", "YTTK 66", "FYT 64"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> teams = {"TH 0 25 50 70 71 11", "AV 37 0 48 97 9 45", "LFCG 9 52 0 32 79 83", "TIGM 74 56 5 0 18 100", "OJSZ 43 64 72 90 0 85", "HXP 92 48 48 73 76 0"};
    int rounds = 7;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OJSZ 42", "LFCG 37", "HXP 36", "AV 34", "TH 33", "TIGM 27"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> teams = {"JCB 0 80 83 82 42 8 63 99", "AIID 69 0 50 18 57 24 87 29", "ITP 99 82 0 40 32 40 66 94", "YRS 91 28 77 0 53 96 92 64", "BHA 4 26 29 80 0 26 28 35", "ZPHM 92 82 24 32 23 0 97 24", "N 94 82 10 58 22 37 0 19", "O 79 90 31 5 75 72 56 0"};
    int rounds = 4;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YRS 35", "ITP 34", "ZPHM 31", "O 30", "JCB 25", "BHA 25", "AIID 23", "N 21"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> teams = {"MBXK 0 68 73 71 62 12 96 73 5 23", "LSO 50 0 13 98 46 79 61 78 61 84", "PFJ 29 100 0 86 34 15 10 97 98 59", "XOVU 11 6 33 0 40 43 74 81 60 88", "UFQNV 56 91 20 23 0 18 44 32 21 84", "SRQKW 79 86 40 44 95 0 4 79 30 52", "NGPRQ 22 67 29 17 88 47 0 85 92 59", "OHNFW 16 45 68 82 99 97 51 0 8 5", "D 58 87 59 60 58 28 79 39 0 89", "ROQZ 12 97 5 42 34 36 0 32 21 0"};
    int rounds = 10;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"PFJ 109", "D 106", "MBXK 105", "SRQKW 103", "NGPRQ 99", "LSO 82", "XOVU 81", "OHNFW 78", "UFQNV 73", "ROQZ 64"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> teams = {"AAAAAAA 0 0", "AAAAAAB 1 0"};
    int rounds = 1;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAB 1", "AAAAAAA 1"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> teams = {"A 0 52 50 51", "B 48 0 50 51", "C 48 52 0 51", "D 48 52 50 0"};
    int rounds = 1;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 3", "C 3", "D 3", "B 3"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> teams = {"A 0 10 50", "B 100 0 100", "C 50 10 0"};
    int rounds = 5;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B 19", "A 6", "C 6"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> teams = {"WF 0 0 71 10 62 87 49 75 50", "OZ 38 0 79 55 36 96 63 17 37", "C 13 75 0 96 61 2 33 5 64", "LCG 13 85 87 0 60 72 86 1 12", "GDDYC 71 62 21 6 0 17 63 34 32", "B 37 66 81 81 53 0 61 80 90", "XK 14 63 40 25 13 86 0 6 43", "YVN 57 30 55 22 31 11 81 0 13", "SKGAN 28 79 90 79 75 62 36 86 0"};
    int rounds = 10;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SKGAN 99", "WF 93", "B 92", "LCG 84", "YVN 80", "OZ 76", "GDDYC 72", "C 63", "XK 62"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> teams = {"ABC 0 13", "ABD 12 0"};
    int rounds = 10;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABC 10", "ABD 10"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> teams = {"A 0 100 1", "B 100 0 2", "C 100 100 0"};
    int rounds = 5;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C 20", "B 5", "A 5"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> teams = {"A 0 50 50 50", "D 50 0 50 50", "C 50 50 0 50", "B 50 50 50 0"};
    int rounds = 5;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 15", "B 15", "C 15", "D 15"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> teams = {"A 0 52 50 51", "B 54 0 50 51", "C 54 52 0 51", "D 54 52 50 0"};
    int rounds = 1;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C 3", "D 3", "B 3", "A 3"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> teams = {"A 0 50", "B 51 0"};
    int rounds = 1;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B 1", "A 1"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> teams = {"A 0 50 80", "B 50 0 90", "C 10 10 0"};
    int rounds = 1;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B 3", "A 3", "C 1"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> teams = {"A 0 10 50", "B 100 0 100", "C 50 15 0"};
    int rounds = 5;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B 19", "C 6", "A 6"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> teams = {"A 0 54 50 51", "B 52 0 50 51", "C 52 54 0 51", "D 52 54 50 0"};
    int rounds = 1;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C 3", "D 3", "A 3", "B 3"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> teams = {"C 0 10 50", "B 100 0 100", "A 50 10 0"};
    int rounds = 5;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B 19", "A 6", "C 6"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> teams = {"A 0 100 100", "B 30 0 50", "C 40 50 0"};
    int rounds = 1;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 3", "C 1", "B 1"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> teams = {"A 0 50 53", "B 51 0 55", "C 50 50 0"};
    int rounds = 1;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B 2", "A 2", "C 2"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> teams = {"A 0 100 50", "B 70 0 20", "C 70 20 0"};
    int rounds = 1;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C 2", "A 2", "B 2"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> teams = {"B 0 10 10 10 10", "D 10 0 10 10 10", "A 10 10 0 10 10", "E 10 10 10 0 10", "C 10 10 10 10 0"};
    int rounds = 10;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A 40", "B 40", "C 40", "D 40", "E 40"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> teams = {"A 0 49", "B 51 0"};
    int rounds = 1;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B 1", "A 1"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> teams = {"A 0 51", "B 52 0"};
    int rounds = 1;
    RegularSeason* pObj = new RegularSeason();
    clock_t start = clock();
    vector<string> result = pObj->finalStandings(teams, rounds);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B 1", "A 1"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=269554&rd=5853&pm=2866
********************************************************************************
#include <iostream> 
#include <cstdio> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <map> 
#include <set> 
#include <sstream> 
#include <cmath> 
 
using namespace std; 
 
 
struct Team 
{ 
  string name; 
  int wins; 
}; 
 
bool operator<(const Team &a, const Team &b) 
{ 
  if (a.wins!=b.wins) 
    return a.wins>b.wins; 
  return a.name<b.name; 
} 
 
class RegularSeason { 
  public: 
  vector <string> finalStandings(vector <string> teams, int rounds) { 
    int n=teams.size(); 
    vector<Team> vt(n); 
    for(int i=0;i<n;i++) vt[i].wins=0; 
     
    for(int i=0;i<n;i++) { 
      istringstream ss(teams[i]); 
      ss >> vt[i].name; 
      for(int j=0;j<n;j++) { 
        int p; 
        ss >> p; 
        if (i!=j) { 
          vt[i].wins+=p*rounds; 
          vt[j].wins+=(100-p)*rounds; 
        } 
      } 
    } 
    sort(vt.begin(),vt.end()); 
    vector<string> ans; 
    for(int i=0;i<n;i++) { 
      ostringstream ss; 
      ss << vt[i].name << " " << (vt[i].wins+50)/100; 
      ans.push_back(ss.str()); 
    } 
    return ans; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/