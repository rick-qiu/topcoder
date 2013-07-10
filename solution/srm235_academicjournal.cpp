/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4020
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

class AcademicJournal {
public:
    vector<string> rankByImpact(vector<string> papers);
};

vector<string> AcademicJournal::rankByImpact(vector<string> papers) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> papers = {"A.", "B. 0", "C. 1 0 3", "C. 2"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "B", "C"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> papers = {"RESPECTED JOURNAL.", "MEDIOCRE JOURNAL. 0", "LOUSY JOURNAL. 0 1", "RESPECTED JOURNAL.", "MEDIOCRE JOURNAL. 3", "LOUSY JOURNAL. 4 3 3 4", "RESPECTED SPECIFIC JOURNAL.", "MEDIOCRE SPECIFIC JOURNAL. 6", "LOUSY SPECIFIC JOURNAL. 6 7"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"RESPECTED JOURNAL", "RESPECTED SPECIFIC JOURNAL", "MEDIOCRE JOURNAL", "MEDIOCRE SPECIFIC JOURNAL", "LOUSY JOURNAL", "LOUSY SPECIFIC JOURNAL"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> papers = {"NO CITATIONS.", "COMPLETELY ORIGINAL."};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"COMPLETELY ORIGINAL", "NO CITATIONS"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> papers = {"CONTEMPORARY PHYSICS. 5 4 6 8 7 1 9", "EUROPHYSICS LETTERS. 9", "J PHYS CHEM REF D. 5 4 6 8 7 1 9", "J PHYS SOC JAPAN. 5 4 6 8 7 1 9", "PHYSICAL REVIEW LETTERS. 5 6 8 7 1 9", "PHYSICS LETTERS B. 6 8 7 1 9", "PHYSICS REPORTS. 8 7 1 9", "PHYSICS TODAY. 1 9", "REP PROGRESS PHYSICS. 7 1 9", "REV MODERN PHYSICS."};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"REV MODERN PHYSICS", "EUROPHYSICS LETTERS", "PHYSICS TODAY", "REP PROGRESS PHYSICS", "PHYSICS REPORTS", "PHYSICS LETTERS B", "PHYSICAL REVIEW LETTERS", "CONTEMPORARY PHYSICS", "J PHYS CHEM REF D", "J PHYS SOC JAPAN"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> papers = {"WND RWBT . 10 15 10 39 31 30 15 25 5 13 14 17 3", "WND RWBT . 17 37 15 36 7 0 40 28 32 11 44 44 31", "CE A. 40 25 0 34 9 34 11 27 20 9 6 25 41 43 34", "VRBLMONKT. 41 33 17 26 23 10 39 27 4 14 23 13", "QOF AJJM K. 22 14 25 30 10 20 28 13 41 10 25 25", "CE A. 28 33 11 36 2 33 16 15 41 44 32 29 20 19", "VRBLMONKT. 33 5 8 11 38 19", "QPB . 43 2 41 40 35 31 36 22 43 25 28 2 5 42 12", " C QSQYBWG. 28 10 23 16 14 36 18 10 18 7 19 10", "CE A. 8", "FIY XANJE. 5 24 14 12 7 12 19 6 39 41 8 38 16 3", "VRBLMONKT. 8 7 24", "FIY XANJE. 17 9 2 9 15 0 37 22 27 3 2 23 42 1 1", "WND RWBT . 6 11 41 31 8 30 44 2 8 10 1 40 1 36", "VRBLMONKT. 8 26 10 15 32 18 3 35 39 26 12 23 15", "FIY XANJE. 14 43 44 3 41 23 34 12 0 10 5 42 44", "QOF AJJM K. 4 1 24 43 39 1 4 39 17 35 3 33 32 6", "WND RWBT . 18 5 30 39 36 36 33 15 14 33 10 5 38", "QPB . 33 16 14 6 43 31 3 24 28 13 44 25 40 7 8", "FCZ H. 4 29 8 28 31 5 17 10 14", "VRBLMONKT. 30 12 25 10 31 18 31 31 35 22 31 12", "U. 33 27 10 44 2", "FIY XANJE. 19 14 24 3 40 32 1 7 9 14 40 42 32 4", "U. 13 38 16 33 4 41 5 35 6 14 21 18 30 2 42 31", "QPB . 41 2 30 28 30 19 32 18 5 30 12 22 10 20 2", "CE A. 7 33", "FCZ H. 3 1 10 16 42 39 6 44", "QOF AJJM K. 0 31 31 39 6 35 38 25 8 33 3 35 13", "VRBLMONKT. 41 42 6 11 44 1 36 7 3 24 33 36 22 7", "R IB. 1 9 28 14 19 17 22 28 7 36 40 25 43 23 7", " C QSQYBWG.", "FCZ H. 6 30 19 33 1 36 19 26 22 25 33 12 15 23", "CE A. 13 19 14 5 4 29 43", "WND RWBT . 44 43 6 13 36 31 0 30 20 12 19 23 15", "U. 35 2 24 21 29 22 15 13 39 18 40 19 18 28 35", "CE A. 42 27 16 23 36 18 38 39 23 40", "CE A. 37 11 10 40 27 12 37 19 34 2 38 32 13 21", "QPB . 24 26 35 0 27 13 6 25 19 8 13 16 5 2 9 11", " C QSQYBWG. 29 36 6 14 10 20 2 30 36 24", "QPB . 43 40 8 18 36 1 27 43 5 21 25 23 24 42 18", "U. 33 6 9 34 18", "QOF AJJM K. 29 6 27 15 42 20 35 12 6 17 38 27 1", "FIY XANJE. 12 22 35 9 44 29 29 28 10 30 19 22 3", "VRBLMONKT. 11 18 19 31 7 17 6 11 11 2 20 13 12", "QPB . 2 35 23 22 22 38 39 10 1 18 4 39 24 4 39"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VRBLMONKT", " C QSQYBWG", "FIY XANJE", "CE A", "FCZ H", "WND RWBT ", "QOF AJJM K", "QPB ", "R IB", "U"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> papers = {"S . 5 23 47 47 15 17 47", "BHE. 11 5 31 13 31 31 46 4 0 26 7 8 46 15 11 41", "AN FXM. 39 21 38 37 19 40 41 18 3 43 4 38 14 25", "A M. 15 11 34 28 5 28 1 36 41 0 44 20 1", "AYP. 6 43 15 0 9", "AAQV . 7 25 23 36 38 0 20 35 38 24 37 18 10 43", "AN FXM. 7 32 10 32 42 40 47 0 29 47 28 16 22 40", "JNO NZDLBA. 37 1 4 23 29 44 20 39 8 25 6 34 45", "JNO NZDLBA. 22 7 32 31 39", "AYP. 43 3 35 37 13 26 13", "XPKX. 31 1 37 25 3 42 4 38 38 21 5 5 38 0 28 44", "N. 13 13 23 29 18 29 15 0 20 4 20 42 28 29 38", "ELAUBEVZ. 38 37 1 13 3 22 47 17 2 39 37 38 32 0", "AAQV . 29 27 47 2 18 31 6 17 38 19 14 8 5 40 7", "AAQV . 28 34 16 16 40 15 7 24 19 5 44 9 42 45 8", "WBEODTR. 37 42 27 31 9 24 22 8 22 11 8 29 2 11", "CFD HWOOLK. 2 34 26 35 12 19 22 30 9 43 14 32 5", "N. 8 3 8 34 14 27 15 47 14 9 5 20 26 12 39 47 2", "IA IKQ. 26 28 2 25 32 21 8 30 28 24 46 26 6 25", "ZWR. 10 1 38 8 35 3 37 41 4 43 12 11 24 46 13 7", "ZWR. 29 17 7 25 24 37 36 14 0 24 10 39 5 34 35", "WBEODTR. 3 11 44 31 19 33 38 34 41 34 2 9 26", "N. 0 17 2 23 38 3 17 17 16 10 45 13 18 8 29 7", "OHR P. 12 21 7 33 1 10 25 22 8 46 12 21 29 34 3", "HZ. 32 29 6", "IA IKQ. 40 18 8 1 38 10 2 7 26 44 40 8 40 47 9", " XNFXFZ.", "DJMOUBSP. 7 25 16 45 2 30 32 0 22 3 30 38 20 3", "E.", "ELAUBEVZ. 8 7 22 37 40 16 25 31 32 40 39 0 26 7", "N BRNNKD. 10 34 44 0 12 42 21 36 35 12 34 17 10", "L RT XKAI. 19 46 17 44 10 26 2 2 16 17 24 4 26", "ELAUBEVZ. 38 37 26 34 39 30 35 7 46 24 4 45 22", "SXB A. 8 8 36 37 22 17 38 46 23 0 19 19 31 34 3", "ELAUBEVZ. 7 35 46 13 12 31 5 15 41 19 36 1 4 37", "R . 0 7 46 44 15 4 46 0 24 21 15 7 21 26 45", "A M. 37 8 27 17 33 35 28 24 20 34 39 19 7 47 4", "ZKK. 47 44 19 4 10 40 43 0 20 9 16 24 14 31 5 2", "N. 23 43 33 32 1 9 35 22 42 7 47 7 10 42 13 6 6", "HZ. 33 17 21 24 27 19 44 1 6 37 18 7 45 7 32 34", "WBEODTR. 43 17 38 34", "KI. 7 42 17 23 21 26 13 28 7 36 17 26 26 7 24 8", "A VAHHPTW. 40 10 40 8 0 41 5 40 30 47 47 9 29 7", "AYP. 6 16 10 26 37 47 26 23 1 32 12 17 42 44 20", "K. 46 12 21 11 1 9 36 46 9 7 22 20 46 41 14 24", "N. 23 9 35 41 3 6 22 30 30 10 24 47 18 28 15 2", "JNO NZDLBA. 13 13 29 36 15 4 16 29 29 34 27 25", "AN FXM. 21 24 8 10 22 44 29 6 34 21 34 39 40 38"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S ", "ZKK", "JNO NZDLBA", "XPKX", " XNFXFZ", "K", "HZ", "BHE", "AN FXM", "R ", "ELAUBEVZ", "ZWR", "AYP", "WBEODTR", "A M", "L RT XKAI", "OHR P", "N", "A VAHHPTW", "CFD HWOOLK", "E", "KI", "AAQV ", "IA IKQ", "DJMOUBSP", "N BRNNKD", "SXB A"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> papers = {" L EJPB . 18 30 36 32 22 34 20 28 3 11 6 40 1 2", "BBED UX H. 6 22 10 9 40 21 9 15 17 42 11 37 14", "RMQ JRQ. 15 38 22 1 5 7 0 8 14 22 16 38 37 12", "CFN G. 38 23 33 16 11 38 29 38 17 11 4 6 30 24", "EZT. 16 35 23 25 18 38 41", "NLUJH. 24 33 36 23 30 39 27 38 29 38 16 20 31 9", "D. 41 3 23 27 37 20 29 7 1 9 14 20 5 40 4 7 15", "NW NKTEI . 14 12 14 6 20 22 29 0 21 11 29 39 36", "F MPKLMBZ. 18 1 18 35 35 3 2 6 21 5 23 26 16 1", "RMQ JRQ. 5 37 5 12 41 7", "VMZ . 7 13 23 36 31 40 27 27 9 14 30 35 29 6 2", "H. 18 31 32 1 38 4 21 6 20 36 6 3", "VDP KZ. 1 24 22 21 14 1 42 28 3 16 28 3 18 31 5", "QRGM. 9 6 31 42 31 15 28 22 24 24 37 16 25 17", "IPT . 5 39 8 3 32 11 6 10 18 25 10 30 9 2 24 41", "RFTGV F. 37 37 28 12 4 27 4 21 23 36 6 21 38 38", "ZGMUTRFYXW. 42 39 15 28 17 17 10 1 15 11 6 6 36", "K. 10 40 1 0 11 26 39 36 26 11 36 24 26 40 30 7", "ZGMUTRFYXW. 39 40 23 28 1 42 34 40 20 42 10 31", " U . 7 10 33 40", "NLUJH. 29 11 8 21 42 3 40 11 24 17 26 17 29 15", " FB. 9 35 2 10 22 7 4 8 15 20 37 41 1 32 13 10", "H. 21", "AS K. 25 16 14 14 31 10", "C LHND. 13 9 36 34 41 2 6 21 4 30 36 16 0 18 39", "LA. 16 1 4 0 7 33 0 34 36 26 39 12 6 29 14 9 30", " U . 21 23 19 37", "VSTRY . 28 34 39 6 13 32 3 15 4 20 14 25 1 42 3", "TOBPN. 21 17 35 20 8 2 9 33 18 23 42 1 11 32 40", "O. 3 27 23 33 11 13 28 16", "AYTIVIJC. 42 40 26 31 36 36 36 33 2 19 11 42 13", "TLFIQOCEC. 4 36 42 21 4 20 30 34 24 1 6 30 37", "E G. 41 15 22 30 21 26 2 38 17 1 35 1 30 26 14", "TOBPN. 26 28 21 0 0 32 20 21 26", "MOB. 30 22 5 15 27 1 28 14 3 31 26 30 35 12 18", "E G. 14 42 31 29 13 27 28 9 37 9 39 41 29 37 27", " . 38 28 20 21 17 10 11 35 41 20 22 24 2 42 21", "YU . 16 19 40 1 24 36", "Q URHJ. 34 10 24 39 34 1 9 9", "LBKUTIFAP. 8 31 12 21 38 17 23 7 7 1 38 0 23 2", "W MYW. 41 26 19 29 7 37 25 14 25 30 19 28 11 13", "ZGMUTRFYXW. 33 18 17 10 2 2 16 13 37 23 31 24", "VWVHCYC G. 38 37 39 3 11 40 4 24 10 20 27 38 11"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBED UX H", " FB", "D", " ", "AS K", "C LHND", "IPT ", "YU ", "H", "RMQ JRQ", "AYTIVIJC", "LBKUTIFAP", "TLFIQOCEC", "VMZ ", "VWVHCYC G", "W MYW", "CFN G", "ZGMUTRFYXW", "EZT", "K", "NW NKTEI ", "Q URHJ", "RFTGV F", "NLUJH", "TOBPN", "O", "QRGM", "VSTRY ", "E G", " L EJPB ", "MOB", "VDP KZ", " U ", "F MPKLMBZ", "LA"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> papers = {" GJIVRJH. 34 9 8 1 38 16 18 31 34 20 3 28 1 27", "KFAIG. 30 8 41 12 26 21 41 24 18 9", " J. 10 22 20 28 7 15 11 26 36 17 29 31 6 25 7", "AX AVREBTP. 40 41 2 16 4 30 6 34 8 8 38 17 29 5", "TMXJN. 11 40 0 12 31 7 22 8 24 41 31 2 40 0 9 6", "YZ. 33 39 29 18 32 4 6 8 39 11 30 41 0 11 40 36", " GJIVRJH. 34 10 29 21 13 26 5 17 11 40 28 39 12", "AX AVREBTP. 32 22 19 10 10 2 5 29 31 40 22 2 11", " SOPRY. 20 24 29 32", "AX AVREBTP. 15 26 23 37 22 29 21 39 33 38 15 38", " GJIVRJH. 22 41", " GJIVRJH. 17 31 25 17 34 7 3 24 39 26 3 23 21 6", "YZ. 7 13 29 41 25 1 10 29 32 7 26 18 11 23 19 9", "G. 1 30 11 32 12 2 37 30 0 34 9 40 26 19 27 11", "Z . 41 38 21 1 9 8 2 18 1 16 34 35 37 5 15", "G. 5 26 29", "VMGXTPT. 4 27 7", "AX AVREBTP. 28", " SOPRY. 20 16 31 27 25 17 10 7 23 14 21 17 41 3", "KFAIG. 20 18 13", "JIAACN QH. 14 2 11 41 21 18 12 10 16 19 8 31 36", "VMGXTPT. 31 14 17 18 29 41 36 7 27 37 24 22 17", "G. 37 37 15 3 30 21 41 3 8 7", "VMGXTPT. 3 11 7 1 9 18 5 2 27 4 8 20 32 11 7 9", "AX AVREBTP. 20 41 4 28 26 29 28 12", "JIAACN QH. 34 0 2 28 10 13 39 3 1 36 2 11 16 40", "JIAACN QH. 24 16 18 8 33 25 7 16 39 31 19 18 40", "G. 8 2 6 14 10 4 16 6 36", " J.", " SOPRY. 8 17 9 5 6 25 17 17 19 10 1 14 25 36 5", "AX AVREBTP. 6 36 29 26 3 3 38 6 11 33 16 7 34 5", " SOPRY. 6 5 7 19 20 9 25 29 40 24 39 27 23 2 21", "YZ. 31 26 34 5 3 35 33 27 36 8 13 30 4 9 12 20", "YZ. 16 21 18 13 18 35 32 39 22 8 30 8 17", "TMXJN. 16 21 17 31 0 22 25 25 37 38 16 23 11 15", " SOPRY. 1 18 31 3 25 33 41 23 28", "G. 5 31 25 35 2 28 27 34 21 6 15 0 2 5 30 35 4", "JIAACN QH. 7 29 40 21 8 38 19 31 15 22 34 16 11", "G. 30 33 13 2 5 1 19 41 33 15 12 3 35 29 8 14 7", " J. 18 15 23 30 25 3 8 31 41 40 8 28 3 4 23 20", " J. 4 6 4 38 30 32 31 35 25 15 39 21 38 28 32 5", " J. 13 12 20 19 24 19 6 38 19 6 16 2 24 29 23"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" SOPRY", "VMGXTPT", " J", "TMXJN", " J", "AX AVREBTP", "JIAACN QH", "KFAIG", " GJIVRJH", "G", "YZ", "Z "};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> papers = {"YMUO RHGY. 1 40 10 34 30 5 6 8 19 25 20 39 4 21", "TR. 11 28 30 44 7 19 40 17 5 39 23 17 5 7 44 14", "X . 1", "WTJX K. 13 13 18", "TQKVMJ . 16 34 26 43 42 10 37 38 0 29 43 10 15", "S GNL.", "R CZHEB . 20 42 22 5 14 21 19 21 22 10 44 42 16", "S GNL. 31 1 3 8 36 14 19 4 17 5", "TP BV . 43 0 30 39 20 27 44 25 36 9 10 10 20 0", "GI WQGS. 29 24 39 26 12 18 26 38 10 25 27 32 40", "TQKVMJ . 6 7 2 27 18 11 9 22 16 16 22 41 32 18", "J. 35 20 28 43 12 17 22 19 19 23 21 12 32 37 21", "DFZEL. 7 9 8 41 29 20 14 43 9 9 7 2 6 6 16 44 1", "CN. 32 0 20 25 38 18 3 40 41 43 4 2 5 8 10 34 4", "LQXDPDTB. 17 25 6 19 39 24 2 19 12 12 30 35 11", "GI WQGS. 34 5 25 20 25 10", "GI WQGS. 0 34 24 42 34 28 19 29 18 34 31 13 39", " PPPMBNXQH. 27 28 44 28 5 41 1 40 9 21 30 43 40", "LGTJOYCYS. 7 13 24 38 8 14 26 28 35 43 29 41 0", " PPPMBNXQH. 37 12 25 12 20 29 22 21 42 6 6 10 4", "R CZHEB . 31 10 38 38 36 27 19 16", "CN. 30 3 13", "S GNL. 40 32 10 18 10 34 15 42 16 40 14 13 38 5", "FDJBLJC. 11 4 1 40 35 4 10 30 10 26 41 19 2 12", "AFFUAOL. 28 28 10 25 27 13", " DPP. 34 5 2 29 18 30 26", "TQKVMJ . 16 28 14 33 21 13 35 33 28 0 31 27 43", "FDJBLJC. 10 2 40 0 10 13 25 32 40 22 17 21 39 6", "AJ. 9 34 1", "LGTJOYCYS. 19 32 23 16 23 42 28 38 14 28 7 16", "J. 23 5 12 2 16 11 42 12 9 22 11 3 14 10 21 34", "AFFUAOL. 12 8 17 11 19 20 7 8 34 7 9 26 44 1 42", "DFZEL. 34 6 6 33 11 9 8 43 44 37 37 34 41 42 11", "JUK. 4 8 17 43 21 3 41 36 27 29 7 8 20 37 7 27", "GI WQGS. 24", "X . 19 37 21 3 41 28", "JUK. 9 19 22 33 29 14 18 13 15 19 31 35 0 5 37", "S GNL. 35 24 21 22 38 12 33 33 33 13 17 2 9 19", "PIME.", "GI WQGS. 21 41 15 17 42 0 43 3 19 6 15 25", " V. 36 7 15 13 36 23 35 17 3 12 20 13 7 12 44 9", "VLMYO. 23 15 40 21 40 42 26 23 10 0 26 8 11 44", "J. 41 33 31 35 33 16 25 2 25 9 41 15 3 38 11 35", " DPP. 35 11 14 24 37 35 42 29 33 32 13 39 30 31", "R CZHEB . 29 13 10 16 38 9 31 3 21 12 20 15 2 6"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CN", " PPPMBNXQH", " DPP", "LQXDPDTB", "VLMYO", "X ", "PIME", "WTJX K", "YMUO RHGY", "J", "GI WQGS", "TQKVMJ ", "DFZEL", "LGTJOYCYS", " V", "AJ", "TP BV ", "R CZHEB ", "S GNL", "TR", "AFFUAOL", "FDJBLJC", "JUK"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> papers = {"PDGRGVIKV. 23 41 34 39 21 9 20 6 5 31 9 23 31 8", "A. 28 4 29 34 28 23 6 4 10 23", " . 36 11 11 27 0 7 39 28 9 35 19 27 41 4 4 11", "GWU. 22 24 33 6 12 38 36 24 37 1 35 29 36 16 28", "VM BCB C. 21 20 39 31 14 35 24 21 8 19 12 8 30", "QT. 14", "BQ H. 13 19 26 25", "HNZ. 16 28 31 15 27 25 11 15 16 20 41 18 25 2 5", "ZG. 10 1 33 6 32 29 39 5 13 33 16 0 20 20 27 14", "RC MKQL. 3 8 29 25 0 7 24 7 11 4 31 31 2 31 5", " XG. 22", "A. 27 10 29 22 29 30 9 3 26 23 0 26 41 25 35 34", "N. 33 32 39 33 1 33 8 27 29 7 0 18 13 20 9 11 2", "LG BX CHR. 3 23 38", "RC MKQL. 24 24 17 30 18 13 32 19 18 15 34 32 2", "HNZ. 24 12 5 10 3 32 27 17 30 34 9 3 16 14 14 1", "N. 14 24 18 21 19 29 23 2 27 32 2 11 38 13 39", "EUMYDHU BH. 27 33 41 2 24 11 37 7 35 15 33 2 30", "GWU. 25 2 28 38 31 6 30 40 1 15 2 38 14 7 32 19", "JEIS. 36 1 24 31 25 28 34 29 38 24 4 27 33 15", " D. 12 11 11 4 27 7 41 34 29 28 33 7 28 11 34 6", "XHMEJ. 41 30 12 28 5 24 25 33 37 34 34 4 6 19 6", "ZXWGEJG. 7 21 40 26 26 4 1 7 11 35 11 28 14 35", "RC MKQL. 39 8 34 29 11 31 6 1 30 21 3 25 20 9", "V MBG RB. 16 2 23 9 6 41", "HNZ. 7 4 30 32 18 33 38 26 30 12 2 32 3 9", "GHF. 4 36 20 29 29 31 30 19 37 30 0 28", "QT.", "A. 27 24 36 33 0 30 4 13 18 40 0 15 23 15 4 6", "XHMEJ. 1 18 8 20 37 7 21 41 34 6 11 13 18 9 30", "BQ H. 0 3 20 16 31 17 22 27 25 16 32 13 18 9 7", "ASRIHV . 32 5 1 15 2", "GHF. 21 37 13 28 6 37 12 35 27 37 1 40 20 5 3 5", "RC MKQL. 4 1 39 16 6 23 3 39 11 5 16 14 31 21", "J. 24 8 31 7", "BQJH. 21 4 24 26 27 12 19 19 33 16 11 40 17 7 4", "PDGRGVIKV. 8 20 3 34 27 19 33 13 2 8 33 5 13 29", "BQJH. 11 26 40 10 15 6 34 38 34 35 11 8 39 21 4", " D. 39 16 6 10 37 35 0 22 37 36 26 29 16 33 12", " XG. 13 36 19 6 23 38 26 14 20 2 21 38", "PDGRGVIKV. 1 31 5 6 32 9 23 11 21 36 23 24 0 9", "HFAGSZAH. 13 38 13 35 39 10 3 17 14 4 8 25 13 1"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BQ H", "VM BCB C", "QT", "V MBG RB", "A", "XHMEJ", " ", "ASRIHV ", "J", "LG BX CHR", "JEIS", " D", "RC MKQL", "ZG", "GWU", "HNZ", " XG", "GHF", "N", "HFAGSZAH", "BQJH", "PDGRGVIKV", "EUMYDHU BH", "ZXWGEJG"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> papers = {" YGC S U. 41 15 44 22 42 43 23 29 38 40 7 17 2", "IP. 0 23 16 21 7 47 19 0 14 28 0 10 13 6 31 34", "YZA. 1 38 26 12 1 18 22 38 11 35 37 36 9 6 5", "K. 37 9 20 39 24 40 23 13 22 11 38 42 2 10 21 0", "YZA. 19 32 2 24 6 44 41 37 41 28 21 23 9 3 46 5", "QFLRI. 6 12 36 30 23 44 24 8 47 23 2 18 1 17 33", "RX . 44 24 30 23 20 44 36 47 30 33 7 29 40 4 26", "RX . 26 19 31 41 24 12 0 10 29 19 31 39 31 43 1", "QFLRI. 29 15 46 21 19 30 2 22 16 12 17 25 16 42", "IP. 43 0 35 36 8 19 27 14 26 3 17 26 30 37 33 4", "YZA. 25 24 6 38 24 28 7 45 28 47 26 19 16 8 37", " HRQBIKCWD. 40 24 9 35 33 21 18 12 4 40 22 37 7", "Q UAPFV M. 43 28 14 21 33", " HRQBIKCWD. 2 11 47 42 28 24 30 42 28 20 10 38", "TJTY. 36 46 7 0 42 41 10 17 34 16 23 9 28 43 31", "CAGQCAUNF. 7 1 29 46 16 28 1 20 28 1 34 28 34", "BX. 2 5 33 23 34 33 8 41 24 10 29 24 33 39 27 8", "LJC. 27 33 43 4 14 26 27 18 47 22 8 46 8 2 27 5", "NGZES UP. 28 24 20 19 9 36 3 10 21 44 37 29 19", "TJTY. 35 25 5 7 41 14 0 4 34 0 45 2 10 11 31 43", "ECJ. 14 35 43 9 26 18 43 25 42 9 44 2 1 5 9 27", "CAGQCAUNF. 11 34 12", " HRQBIKCWD. 31 37 15 38 32 9 3 10 39 28 12 41 1", "FK KF. 19 18 38 17 9 33 31 33 43 25 2 15 37 6", "QFLRI. 38 6 13 36 32 31 17 16 17 6 22 13 16 23", "TJTY. 42 19 34 27", "FK KF. 19 10 24 11 34 18 41 8 34 39", " HRQBIKCWD. 31", "YZA. 15 35 20 17 15 12 47 12 43 6 15 20 37 16 8", "IP. 46 1 38 24 17 8 22 45 20 22 30 18 19 22 24", "CAGQCAUNF. 43 43 40 25 41 47 3 11 47 23 38 41 3", "M YHBC . 10 22 26 24 29", " HRQBIKCWD. 1 47 20 11 2 44 22 29 24 36 46 37 9", "CTT. 44 26 6", " YGC S U. 45 21 36 25 26 8 19 12 47 47 41 39 14", "YZA. 18 41 14 32 38 15 45 24 44 16 18 39 42 30", "RX . 29 28 22 14 27 5 44 6 25 7 42 38 18 39 4 5", "IP. 12 9", "NGZES UP. 15 27 9 14 8 1 46 17 2 35 27 21 15 43", "NGZES UP. 11 7 13 47 33", "BX. 14 19 19 45 45 12 1 20 32 15 15 15 14 20 3", "ECJ. 12 13 19 15 1 13 46 28 4 5", "ECJ. 15 14 36 13 36 5 23 23 30 4 28", "RX . 7 13 13 45 28 29 3 16 18 6 25 28 30 2 38 4", "NGZES UP. 15 46 42 12 28 2 7 37 37 7 40 17 21 8", "Q UAPFV M. 15 11 14 2 23 44 35 24 8 13 22 34 24", "ECJ. 2 36 24 19 4 44 17 14 22 36 11 2 5 0 35 28", "CAGQCAUNF. 0 45 8 36 37 33 19 2 36 36 30 42 38"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"QFLRI", "TJTY", "LJC", "YZA", "IP", "NGZES UP", "FK KF", "Q UAPFV M", "CAGQCAUNF", "RX ", "CTT", "ECJ", " YGC S U", "M YHBC ", " HRQBIKCWD", "BX", "K"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> papers = {"QQOJ MKCFW. 35 41 15 19 28 2 2 7 5 10 21 35 1 8", "DMM ZUFMX.", "EH. 24 39 33 17 16 18 7 34 7 10 17 32 18 26 23", "MRVU FBGY. 36 37 22 41 29 40 0 19 5 0 16 30 8 0", "PBNOSPU. 9 32 29 35 9 5 36 35 21 5 14 32 11 9 9", "YHLMJ. 15 33 25 14 41 27 38 15 25 1 3 39 36 23", "UEMGLSRQ. 25 37 15 30 7 4 30 13 26 26", "RARW. 21 18 23", "W. 13 38", "V J GI . 33 41 24 38 39 41 8 36 3 3 19 27 26 8", "EZ. 35 25 26 13 15 39 7 1 28 36 36 32 37 28 9 4", "P. 33 2 1 5 14 35 39 14 18 36 6 31 6 3 32 37 5", "WNP. 4 0 18 6 1 30 7 21 37 5 37 17 10 23 24 14", "N. 26 8 39 30 34 28 6 4 24 40 20 2 33 7 16 22 5", "G . 20", "RARW. 18 24 6 37 26 25 14 37 14 35 3 18", "CNE . 2 18 20 41 0 39 27 21 39 37 7 9 38 37 25", "H. 27 35 40 19 38 36 14 38 8 13 27", "NIMYLA. 33 4 21 9 2 20 35 37 32 0 39 13 24", " YNDZQ. 20 15 37 36 23 28 17 25 35 13 10 6 11 0", "MMHZAA. 34 10 4 9 31 25 12 9 26 24 7 24 7 26 1", "MZCSSK. 36 10 28 40", "VPFL. 3 0 31 18 34 37 7 18 9 24 17 13 36 20 19", "V PGX JD. 0 12 19 39 16 6 20 18 11 5 25 9 7 25", "Z. 14 40 27 27 8 1 34 12 31 23 30 29", " OP. 15 13 9 36 3 10 32 12 24 23 30 1", "RARW. 34 12 18 0 19 35 13 8 11 18 27 15 32 40 4", "VPFL. 9 0 40 19 12 26 39 0 0 3 24 6 3 22 35 30", "P EE. 31 38 5 25 13 0 3 21 24 39 3 11 6 10 31 9", "PBNOSPU. 39 12 7 35 4 18 16 2 25 37 12 26 30 14", "N. 16 11 34 31 15 4 37 16 1 32 21 26 4 29 22 38", "RYVHYMRC L. 6 16 21 14 18 40 26 23 21 30 40 12", "EZ. 3 27 36 5 36 22 3 2 40 15 26 28", "K. 3 31 21 23 0 28 34 5 11 7 9 36 35 37 19 8 10", "CNE . 9 4 31 2 3 29 5 12 2 22 2 7 3 9 5 26 37 1", "WELAMHZ. 36 26 27 6 16 40 16 13 5 16 27 1 1 11", "V PGX JD. 15 9 5 21 38 24 31 1 41 18 35 17 22 0", "NX. 38 22 11 32 0 41", "WNP. 13 7 20 9 4 32 22 31 10 25 0 7 8", "P EE. 41 33 14 28 23 0 18 23 14 25 14 0", "MRVU FBGY. 0 5 25 1 17 31 25 8", "H. 9 20 27 17 32 6 9 3 14 30 7 23 16 7 8 13 18"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"QQOJ MKCFW", "V J GI ", "NIMYLA", "NX", "YHLMJ", " OP", "DMM ZUFMX", "WELAMHZ", "V PGX JD", "RARW", "Z", "N", "G ", "MZCSSK", "RYVHYMRC L", "UEMGLSRQ", "W", "MRVU FBGY", "EZ", "P EE", "WNP", " YNDZQ", "MMHZAA", "P", "CNE ", "VPFL", "EH", "H", "PBNOSPU", "K"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> papers = {"IZ XQBAUE. 6 37 6 26 33 4 1 13 20 25 39 23 27 1", "C. 2 33 4 29 21 21 30 35 40 31 27 15 14 14 38 2", "IZ XQBAUE. 16 31 18 37 38 24 10 11 21 26 38 37", "WLSPS R. 33 12 28 21 27 38 21", "XLMDEVP. 39 33 17 37 32 22 17 16 40 20 30 17 35", "KIZPV. 39 32 3", "YR O.", "IOHC. 31 16 22 9 21 38 35 23 11 13 35 9 42 40 4", "IZ XQBAUE. 6 18 25 41 22 16 5 14 25 42 22 24 39", "I KMY. 22 33 28 38 38 6 36 3 39 33 4 23 22 43 8", "ZRSXMKU. 25 39 6 32 28 33 29 21 43 16 8 16 32 1", " L. 32 1 33 28 0 35 1 36 5 16 34 27 8 21 16 23", "YR O. 4 30 14 10 11 30 6 1 13 13 2 42 41 20 21", "BVBNTLGJKT.", "R SG XP. 32 43 11 6 39 18 30 12 43 7 37 38 35", "GPMPM. 16 3 12 30 32 31 38 42 24 17 31 2 1 30", "EOTH . 6 38 25 15 20 22 0 19 1 38 22 32 7 25 4", "BVBNTLGJKT. 32 25 13 37 9 1 3 5 33 10 37 11 11", "WLICI. 37 39 4 40 13 27 14 3 5 23 36 32 32 38 6", "FGKHGF DQ. 27 8 11 18 5 5 34 41 31 4 18 11 36", "YR O. 36 26 18 17 14 15 2 31 24 26 32 15 18 39", "KIZPV. 24 33 31 7 27 22 22 15 2 7 38 24 41 14 4", "HYMESE P. 40 2 36", "UCTHFO. 39 39 26 2 6 25 13 42 25 8 29 43 33 20", "KIZPV. 39 34 9 2 32 26 27 1 1 36 32 7 18 18 16", "U. 30 40 42 6 40 40 21 36 4 6 31 13 30 19 5 18", "WLICI. 14 43 0 27 29 17 43 33 29 12 37 23 42 10", "UCTHFO. 33 29 1 18 43 12 35 14 26 22 30 30 20 1", " L. 34 17 38 30 35 0 33 25 25 3 10 35 20 36", "YR O. 13 16 0 22 9 41 32 43 16 34 22 25 15", " DIFLZTN. 39 17 36 6 18 11 7 15 22 28 20 5 43 0", "ZRSXMKU. 6 36 41 1 29 42 37", "OFBOPGKS. 1 15 20 2 35 15 2 18 42 9 34 27 33 42", " ZA. 15 40 9 34", "TS. 4 0 29 39 21 23 2 26 0 29 35 43 43 32 37 18", "OFBOPGKS. 29 10 32 17 28 14 16 0 23 10 8 38 26", "KCH. 39 38 7 27 14 25 8 22 11 37 24 43 11 1 11", "KUS PS. 20 34 30 21 35 26 42 25 8 29 43 5 22 26", "D HE TWP. 4 1 23 43 15 5 25 20 26 29 6 23 41 18", "YR O. 2 22 5 8 8 2 7 16 21 13 16 23 31 17 19 1", "JJE HGE B . 39 37 9 35 9 3 29 29 33 25 2 20 30", "NQ QPS. 30 15 34 16 2 6 40 25 17 27 3 11 1 21 5", "IZ XQBAUE.", "QP J JHC. 33 13 6 12 20 3 33 42 36 7 15 36 40 4"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" ZA", "C", "D HE TWP", "U", "XLMDEVP", "EOTH ", "HYMESE P", "KCH", "QP J JHC", "OFBOPGKS", "YR O", "UCTHFO", "WLICI", " DIFLZTN", "GPMPM", "KUS PS", "IZ XQBAUE", "R SG XP", "KIZPV", "BVBNTLGJKT", "JJE HGE B ", "TS", "WLSPS R", "IOHC", "ZRSXMKU", " L", "I KMY", "NQ QPS", "FGKHGF DQ"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> papers = {"SP. 49 46 35 36 44 20 5 24 21 13 29 26 15 39 13", "SP. 37 12 42 35", "RCK EV . 30 30 12 10 29 31 27 8 5 22", "SP. 40 16 40 21 14 8 12 14 27 39 11 28 46 14 11", "BN QY K . 6 0 23", "LNTKHAC. 30 16 18 11 10 47 22 18 1 32 8 32 20 3", "APEQ. 10 40 25 8 18 44 31 20 7 20 20 14 35 22 3", "LNTKHAC. 39", " UQEU. 47 18 18 40 3 10 5 0 28 40 47 23 32 20 7", "YUFAT. 0 1 14 22 36", "BN QY K . 33 39 13 41 12 40 32 27 4 46 35 29 13", "APEQ. 18 23 2 23 44 39 33 23 0 23 46 34 8 41 23", "LNTKHAC. 46 18 29 19 4 38 45 11 30 14 45 28 36", "YUFAT. 38 18 2 5 32 17 32 5 23 20 44 45 19 10 7", "YUFAT. 47 1 6 8 47 39 25 44 3 20 9 3 12 8 25 10", "KNMUI. 1 47 45 44 5 20 10 47 8 44 31 18 7 9 43", "BN QY K . 8 3 48 3 26 44 18 31 29 6 48 21 9 41", "KNMUI. 28 45 18 31 14 25 20 41 23 37 47 34 5 9", "YUFAT. 45 15 25 28 17 8 39 28 44 9 24 42 29 33", "SP. 40 37 47 18 32 9 42 36 42 40 21 32", "TF SXJC. 42 44 24 45 31 27 17 26 44 17 35 1 10", "YUFAT. 18 31 3 40 39 45 45 23 26 49 29 31 31 41", "RCK EV . 12 44 26 47 12 7 49 3 18 38 35 23 47 8", "LNTKHAC. 10 33 22 12 29", "BN QY K . 48 2 10 20 33 5 29 0 19 29 28 21 45 7", "XCD. 9 1 42 34 19 31 27 13 19 7 49 16 3 37 43 9", "Q Q C. 29 41 42 12 35 14 10 25 41 3 36 15 36 33", "KNMUI. 3 37", " UQEU. 25 29 43", "Q Q C. 21 44 5 35 45 2 12 26 24 33 40 32 42 8 6", "LNTKHAC. 28 36 8", "YUFAT. 46 11 6 18 36 47 4 41 33 1 36 1 37 9 29", "RCK EV . 3 44 12 24 3 9 3 27 43 35 3 25 13 41 8", "TF SXJC. 34 2 17 41 15 29 10 16 47 9 14 32 48 1", "Q Q C. 28 22 30 9 1 14 21 20 48 10 16 42 46 3 0", "SP. 3 7 49", "KNMUI. 42 18 25 16 47 26 31 16 46 44 46 9 4 9", "Q Q C. 5 47 27 22", "SP. 37 24 37 18 25 41 39 49 5 21 37 30 43 7 3 1", "RCK EV . 34 27 32 10 19 38 2 3 20 28 22 1 48 36", "NZL CGOF. 2 27 29 39 37 8 38 26 42 33 12 3 12", "XCD. 2 34 49 7 0 13 47 45 11 34 32 39 24 22 38", "TF SXJC. 35 13 46 16 32 45 23 44 40 23 43 36 10", "BN QY K . 23 19 34 16 17 17 17 35 7 27 37 39 38", "YUFAT.", "BN QY K . 24 46 35 34 48 1 48 37 35 18 35 44", "BN QY K . 43 37 36 38 47 0 21 31 42 26 36 20 42", "APEQ. 45 16 26 20 25 17 23 37 14 5 42 5 11 36 4", "RCK EV . 41 12 34 44 44 34 22 46 35 25 7 10 35", "XCD. 43 0 38 1 5 1 44 15 29 24 41 25 7 15 17 13"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Q Q C", "TF SXJC", " UQEU", "SP", "YUFAT", "LNTKHAC", "XCD", "BN QY K ", "KNMUI", "RCK EV ", "NZL CGOF", "APEQ"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> papers = {"EBJZZGHRN . 2 11 40 11 12 19 33 16 23 10 13 34", "QL TM. 10 27 17 27 28 14 0 16 40 17 3 31 17 30", "EYCFZBN . 40 17 36 39 8 19 18 22 42 15 13 27 25", " BPV. 1 34 42 23 11 15 26", "K IJXAZY.", "EYCFZBN . 41 7 23 28 22 12 21 39 29 35 28 0 20", "LB PJ. 4 1 33 41 11 3 31 28 33 17 10 37 31 28", "KPY . 35 31 39 28 11 17", " WTQVMN SB. 40 23 34 1 1 14 23 35 23 21 42 16 4", "YPTMX. 12 12 34 12 27 2 19 28 14 3 35 43 23 41", "ERFHDRR. 13 5 37 40 34 35 19 32 19 5 2 5 13 14", "LB PJ. 10 40 18 15 5 4 36 9", "EBJZZGHRN . 14 5 27 5 15 25 0 40 2 3 38", "IMMCRH. 16 22 23 32", "H . 42 43 22 6 13 22", "PFKURFRU.", "K XVZHCX. 21 11 18 35 25 7 10 39 27 28 25 39 17", "YI. 22 23 33 40 16 14 32 2", "IMMCRH. 37 31 12 30 30 31 4 9 27 43 15 24 12 22", "V. 1 14 24 13 28 43 24 0 0 22 39 25 36 38 20 24", " EB V . 12 25 33 34 26 0 16 7 10 25 23 17 7", "IGCT UD. 16 22 39 43 0 16 42 3 1 31 26 14 7 0", " EB V . 23 2 12 12 8 27 5 20 8 23 12 2 15 14 7", "IGCT UD. 9 28 29 8 42 33 32 17 34 28 36 14 20", " KVOKSDUZ. 26 15 17 34 12 36 31 43 1 42", "UFJQWUXZ. 33 37 3 35 16 23 31 11 12 7 31 8 17 0", "PFKURFRU. 3 6 37 29 3", " EB V . 35 20 2 19 9 40 40 1 22 15 5 31 0 41 1", "ULOE. 24 9 23 16 38 11 39 11", "OULAWYYT . 3 27 2 27 39 2 23 0 42 20 36 27 35", "IIHQSTX. 12 24 33 1 14", "E XCO . 28 17 5 28", "F ASL. 41 22 3 2 19 16 2 4 41 18 15 25 4 5 20 9", "PFKURFRU. 19 35 17 23 26 6 21 41 20 20 16 42 29", "IIHQSTX. 26 18 39 36 0 31 43 18 4 42 41 6 6 9 1", "JCJUMI PC. 17 31 21 31 25", "DCW PLQKZ. 24 14 3 1 0 18 28 21 11 14 39 25 7 2", "QL TM. 5 26 11 21 15 26 2 34", "E XCO . 5 8 40 42 17 3 31 35 17 26 8 10 36 40", " QMSY. 6 30 13 11 34 20 38 30 3 40 27 41 2 24 8", "FHJLT QVK. 3 5 13 4 13 31 13 20 39 21 26 42 1", "JCJUMI PC. 15 21 26 23 6 6 7 40", " EB V . 2 14 1 21 33 34 1 35 41 1 14 16 38 20", "DCW PLQKZ. 32 0 25 29 4 16 2 7 3 42 20 30 27 25"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" BPV", "H ", "K XVZHCX", "YI", "EYCFZBN ", "IGCT UD", "FHJLT QVK", " QMSY", "JCJUMI PC", " EB V ", "ULOE", "EBJZZGHRN ", "PFKURFRU", "KPY ", "UFJQWUXZ", "QL TM", "E XCO ", "K IJXAZY", "DCW PLQKZ", "IIHQSTX", "LB PJ", "ERFHDRR", "V", "YPTMX", "IMMCRH", " KVOKSDUZ", " WTQVMN SB", "F ASL", "OULAWYYT "};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> papers = {"RP. 27 21 42 5 21 11 16 16 38 4 35 28 7 26 35", "A. 28 15 29 14 3 7 9 38 43 32 0 19 5 6 17 12 24", "T P CD M . 6 15 14 18 34 7 19 9 4 0 14 3 6 14 6", "YDBJXPGLF. 25 26 2 14 19 11 24 2 5 4 14 7 17 1", "OZC. 37 34", "DDA MLTYT. 34 37 12 34 19 18", "OZC. 17 8 30 0 38 37 40 30 34 42 12 3 10 0 22 0", "BAI. 33 39 3 4 30 22 6 3 32 21 6 11 33 19 37 3", "BAI. 36 22", "RP. 0 32 32 39 15 5 27 0 19 16 2 41 17 31 11 32", "XXYCCPQTV . 29 26 13 11 12 33 21 2 9 21 4 37 6", "B YKK. 5 12 7 5 8 26 34 32 28 10 27 36 26 6 40", "B YKK. 6 38 1 43 17 38 21 26 14 10 1 43 20 29 3", "OZC. 7 4 36 31 1 5 16 12 29 2 30 33 34 40 23 22", " B. 32 0 24 41 40 41 6 37 25 5 15 33 2 40 4 24", "HPCSKJK. 16 41 43 21 22 25 32 35 19 42 11 24 29", "OZC. 0 15 6 8 31 17 20 25 33 18 41 24 27 17 2", "B YKK. 12 25 12 24 6 2 38 36 29 16 18 6 10 43 7", "WJWJFIN. 33 27 8 23 27 21 16 12 21 6 25 40 19 3", "NT Z. 15", "XXYCCPQTV . 16 16 9 38 24 8 9 26", "T P CD M . 19 33 36 5 16 12 16 43 38 38 15 43 2", "EDJXSPCQL. 27 37 6 13 1 24 24 24 27 9 15", " BQRSTSX T. 43 40 3 0 38 43 30 34 35 5 8 1 21 3", "YDBJXPGLF. 15 27 4 39 28 25 27 6 22 26 8 33 18", " B. 34 23 27 27 10 5 14 7 12 2 1 38 18 14 38 11", "CPIIFKB R. 20 35 32 28 21 17 15 24 33 17 41 21", "DBN. 4 14 5 2 12 10 35 1 5", " ZPXEWGF . 29 35 17 32 0 26 23 18 1 19 1 16 20", "DZ IFF XD. 25 35 19 8 43 5 25 0 0 14 34 37 9 17", "XA . 18 3 42 14 26 27 34 18 17 13 14 28 21 10 7", "ECWGIA.", "EDJXSPCQL. 42 37 13 13 13 15 13 36 31 12 37 16", "T P CD M . 25 13 20 25 41 8 38 43 38 3 0 9 40", "XXYCCPQTV . 36 4 40 32 3", "T P CD M . 12 32 30", "EDJXSPCQL. 35 2 13 8 1 1 32 31 19 6 14 17 26 12", "F. 20 4 40 28 0 23 3 15 6 9 22 4 39 43 21 32 33", "WJWJFIN. 18 10 28 39 36 42 39 6 10 20 24 32 15", "DBN. 43 11 31 5 42 3 19 9", "DZ IFF XD. 5 21 42", "ECWGIA. 32 23 2 1", "WJWJFIN. 19 9 40 30 30 1 31 28 9 0 34 8 2 34 14", "YDBJXPGLF. 20 2 18 27 16 4 40 19 20 21 19 0 33"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NT Z", "DDA MLTYT", "HPCSKJK", "RP", "A", "T P CD M ", "YDBJXPGLF", "OZC", "B YKK", "BAI", "CPIIFKB R", "EDJXSPCQL", "XXYCCPQTV ", "DZ IFF XD", " ZPXEWGF ", "F", "WJWJFIN", " B", "DBN", "ECWGIA", " BQRSTSX T", "XA "};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> papers = {"JHG. 10 3 9 21 10 21 38 28 35 31 7 11 21 38 8 8", "JHG. 18 17 16 36 17 16 30 5 40 12 40 11 16 7 35", "UNMDYTWM. 14 40 12 7 28 11 33 27 35 33 9 10 36", "AJ L K HY . 10 6", "JHG. 8 39 17 36 14 21 25 15 37 20 5 21 20 3 9 3", "JHG. 2 11 11 3 7 10 2 22 8 15 18 16 26 3 2", "JHG. 31 29 30 8 33 33 17 36", "UNMDYTWM. 17", "AJ L K HY . 35 3 25 20 30 19 7 20 35 15 17 6 20", "UNMDYTWM. 21 32 22 17 26 18 1 1 19 29 23 14 4 5", "AJ L K HY . 31", "UNMDYTWM. 0 9 25", "AJ L K HY . 8 5 27 6 9 11 22 1 31 25 24 8 34 15", "JHG. 20 28 20 40 15 23", "UNMDYTWM. 12 39 19 26 28 37 35 40", "UNMDYTWM. 35 34 25 28 14 26 12 39 38 6 21 29 21", "JHG. 31 26", "JHG. 27 28 37 1 2 40 13 40 5 31 21 14 0 29 14 0", "AJ L K HY . 2 20 12 17 17 28 15 11 29 17 11 3 3", "JHG. 4 17 36 15 28 30 32 14 31 6 21 5 10 28 33", "UNMDYTWM. 16", "UNMDYTWM. 14 39 31 33", "UNMDYTWM. 31 37 27 30 39 16 25 26 25 38 5 7 29", "UNMDYTWM. 12 32 5 20 11 40 1 20 32 1 22 16 37 3", "UNMDYTWM. 3 20 1 26 30 18 12 10 37 19 18 30 9 7", "AJ L K HY . 8 26 12 7 15 13 2 8 22 6 33 10 14 4", "UNMDYTWM. 39 24 15 28 29 31 30 3 16 4", "AJ L K HY . 39 2 35 22 7 11 17 6 40 32", "JHG. 12 26 39 0 17 19 7 36 29 6 2 36 15 16 9 8", "AJ L K HY . 26 24 21 0 21 15 24", "AJ L K HY . 3 32 0 31 4 39 17 40 31 38 36 3", "JHG. 5 4 29 8 3 38 37 12 16 20 21 39 38 8 22 23", "JHG. 0 37 0 39 30 24 38 25 36 28 31 37 3 0 29 1", "JHG. 4 35 39 15 27 16 16 3 28 5 27 24 16 29 6", "JHG. 24 30 0 16 37 30 25 28 2 37 18 26 32 38 11", "AJ L K HY . 25 1 29 11 15 27 7 39 2 19 38 38 6", "UNMDYTWM. 21 7 11 5 26 26 31 33 28 20 30 29 21", "UNMDYTWM. 11 12 17 1 11 22 15 13 23 34 8 33 29", "AJ L K HY . 0 13 10 4 10 25 12 25 8 12 34 14 5", "UNMDYTWM. 22 6 12", "UNMDYTWM. 1 18 5"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AJ L K HY ", "UNMDYTWM", "JHG"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> papers = {"T. 29 38 23 23 5 23 2 16 32 18 19 7 6 9 44 21 5", "MI. 45 33 19 20 38 7 36 8 34 44 39 12 16 30 12", "T. 1 26 42 34 36 23 39 1 3 3 15 4 35 27 38 33 9", " X GYGTLEH. 7 12 30 0 2 36 23 30 21 42 5 0 36 5", " X GYGTLEH. 10 20 29 19 36 36 27 16 33 12", "T.", "RLFRFDS. 35 33 37 46 7 5 8 34 18 44 18 27 13 24", "MBBP. 30 37 4 39 18 12 14 5 14 41 33 5 42 29 20", " X GYGTLEH. 28 9 7 22 45 24 23 23 42 18 3 22 35", "T. 35 17 39 27 33 23 7 36 24", "KERL. 14 4 23 36 38 1 40 11 43 36 8 25 46 13 26", "KERL. 32 43 39 0 22 41 15 24 31 42 28 33 2 5 6", "T. 9 17 46 25", " VJ XS. 36 1 6 8 16 12 8 41 35 24 24 43 19 46", "MBBP. 1 27 20 38 45 46 32 42 1 39 43 22 16 44 6", "RLFRFDS. 9 25 43 41 21 40 46 43 42 44 28 13 40", "MI. 2 5 36", "T. 41 8 15 12 22 46 38 19 30 25 11 8 23 18 40 3", " VJ XS. 39 26 40 3 45 31 9 4 11 20 6 45 20 30", "MI. 46 38 44 38 0 31 11 38", "MI. 0 5 34 0 44 31 38 31 22 44 3 33 7 2 26 27 6", "MI. 41 28 20 12 3 27 8 4 45 14 38 8 1 10 20 3 5", "KERL. 26 5 35 1 32 1 15 11 16 27 3 20 6 45 29 6", "MI. 3 36 30 27 28 9 18 13 32 4 10 37 30 45 3 40", " X GYGTLEH. 41 14 39 21 2 26 42 19", "RLFRFDS. 34 10 32 39 24 23 23 35 15 40 8 38 22", "T. 32 43 22 16 34 3 2 28 32 0 27 44 24 24 5 22", "MI. 39 20 41 14 10 26 40 2 32 15 24 2 39 10 34", "KERL. 4 30 37 27 38 22 43 25 8 22 42 15 17 36", "KERL. 16 10 22 22 12 22 24 41 17 14 44 31 31 38", " VJ XS. 25 43 45 18 2 7 42 9 26 13 9 10 42 41", "KERL. 21 24", " X GYGTLEH. 20 16 1 43 30 8 37 0 45 28 23 26 27", " X GYGTLEH. 35 7 0 26 11 36 35 34 6 23 4 2 43 4", " X GYGTLEH. 6 12", " X GYGTLEH. 0 18 32 40 16 37 30 12 22 3 23 13 3", "T. 1 46 10 12 45 37 11 32 23 3 21 23 23 14 9 12", " VJ XS. 14 40 23", "MBBP. 27 10 24 46 22 1 4 26 14 46 18 44 18 21 4", "MBBP. 41 34 2", "T. 35 42 8 34 6", " VJ XS. 1 9 27 18 10 24 26 25 19 18 34 24 6 35", "RLFRFDS. 41 11 38 5 25 6 19 15 0 39 36 10 40 8", "RLFRFDS. 15 12 42 29", "T. 46 17 3 3 9 25 27 31 5 28 43 33 30 42 12 3 6", "MBBP. 3 44 23 38 18 29 6 44 6 19 11 35 27 24 23", " X GYGTLEH. 26 26 29 26 16 13 10 6 25 17 11 44"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"RLFRFDS", " X GYGTLEH", "MI", "MBBP", "T", " VJ XS", "KERL"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> papers = {"LO . 33 6 36 9 35", "X. 38 27 13 12 2 10 28 7 16", "TBJL KK. 21 1 5 10 15 22 0 6 37 34 19 0 22 1 19", "ALWPX. 16 28 19 39 32 38 35 11 8 4 39 19 36 12", "X. 22 35 15 32 12 3 9", "PGHA WTDC. 9 0 4 14 10 9 37 14 22", "E AR. 34 20 22 14 17 24 38 16 25 35 5 23 32 1 2", "LX. 30 13 14 19 17 18 38 12 0 26 1 28 0 19 2 3", "GZ . 5 16 35 7 14 27 35 18 37 11 17 1 31 26 34", "X. 17 20 35 31 11 12 36 7 29 14 3 28 15 31 3 2", "LX. 0 21 36 12 5 29 35 35 25 39 18 18 25 29 9 6", "HPD UGJS. 30 23 17 4 28 29 36 5 35 4 37 4 22", "MUR RMCSVA. 16 8 16 23 6 13 14 35 35 33 28 16 6", "X. 38 20 35 34 10 29 22 18 5 8 25 5 31 8 15 25", "X. 36 8 39 25 33 16 27 33 10 10 20 8 12 18 5 36", "S VX JPND. 34", "LX. 3 12 8 35 23 38 18 37 19 21 12 28 0 18 2 6", "GZ . 22 7 25 38 0 31 39 16 15 21 5 27 34 3 35 1", "VXJSS EV. 16 28 24 6 21 27 6 2 1 37 1 26 35 7", "E AR. 27 5 21 35 28 13 31 20 25 21 26 23 7 34 1", "T. 29 0 10 6 23 33 5 10 32 10 1 29 18 3 10 32 1", "DJZJCSVJR . 32 25 6 29 19 36 6", "MUR RMCSVA. 16 6 16 38 32 20 26 12 33 11 4 5 35", "TBWOJR. 18 25 19 19 22 7 17 3 20 13 16 34 3 39", "T. 4 35 35 35 22 18 1 1 18 33 7 30 36 28 6 25 1", "X. 26 26 39 1 17 7 0 2 1 1 21 11 30 33 21 26 24", "IS . 15 2 28 15 29 34 5 27 0 34 14 36 37 7 28 6", "TBJL KK. 29 5 21", "FQY I. 31 34 1 24 12 18 19 21 21 17 17 39 17", "X. 28 31 26 14 7 26 16 18 32 5 30 17 5 28 33 30", "T. 11 35 25 0 32 18 35 38 29 18 35 31 27", "NG. 23 19 5 8 9 21 37 5 34 28 39 4 11 8 32 8 15", "LX. 10 35 35 12 9 16 27 39 10 14 38 22 39 4 17", "FQY I. 20 13 35 26 5 3 26 13 23 10 5 22 31 6 20", "T. 11 33 16 37 13 13 1 23 27 36", "ALWPX. 25 6 6 33 20 18 12 37 22 5 23 24 3 14 0", "E. 17 8 22 18 1 22 27 29 16 9 32 19", "E AR. 31 3 6 9 34 35 0 12 23 9 15 20 5 36 30 14", "HPD UGJS. 7 24 20 32 29 31 24 12 23 17 11 18 3", "NG. 7 28 3 10 23 8 12 22 36 27 16 31 24 24 7 20"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"PGHA WTDC", "ALWPX", "VXJSS EV", "MUR RMCSVA", "TBWOJR", "FQY I", "E", "LO ", "LX", "E AR", "TBJL KK", "DJZJCSVJR ", "GZ ", "NG", "T", "HPD UGJS", "X", "IS ", "S VX JPND"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> papers = {"QOZPWLC. 6 1 14 16 40 32 18 3 3 36 43", " PUX.", " S. 30 26 13 42 12 12 19 39 28 5 32 22 20 7 38", " PUX. 36 27 40 34 29 30", "JF DYMCID. 23 6 0 10 15 16 16 27 8 30 31 43 28", "QOZPWLC. 17 40 33 18 1 43 1 33 36 33 35 6 36 43", "XRG YNBAN. 1 28 37 41 13 5 42 36 39 1 39 14", "JF DYMCID. 26 3 8 8 12 14 23 41 6 27 38 13 36", "QOZPWLC. 30 41 33 24 41 13 13 19 3 35", "XRG YNBAN. 25 13 26 34 32 33 18 15 3 2 18 43 1", "QOZPWLC. 18 4 14 24 43 1 13 42 6 34 25 11 40 33", "QOZPWLC. 35 3 17 19 43 0 30 13 28 19 10 43 31", " S. 11 4 29 34 25 11 26 24 26 17 26 31 38 14 30", " PUX. 6 42 2 9 30 11 7 33 34 36 24 33 15 0 20 6", " PUX. 35 12 19 16 7 10 17 38 30 18 35 15", "QOZPWLC. 27 4 20 12 34 10 29 8 37 27 20 29 42 3", " S. 36 0 20 37 10 26 13 19 37 39 39", "QOZPWLC. 29 30 41 20 0", "XRG YNBAN. 28 10 19 30 24 43 28 26 32 30 20 39", "XRG YNBAN. 1 0 37 13 38 20 13 39 34 31 8 36 16", " S. 26 32 43 3 22 22 35 15 0", "WANGRJL. 38 0 26 22 4 34 36 22", " S. 21 42 1 24 21 32 38 10", "WANGRJL. 28 13 21 19 35 1 35 17 27 21 15 31 18", "JF DYMCID. 13 25 26 28 27 7 40 7 23 18 4 28 34", " PUX. 24 27 1 33 22 8 38 32 36 20 41 33 32 34", "WANGRJL. 7 14 42 37 10 19 11 0 0 40 30 31 35 8", "WANGRJL. 36 12 16 18 9 23 40 30 36 26 1 15 3 2", " S. 42 24 24 4 32", "JF DYMCID. 8 36 27 0 15 12 6 1 11 43 18 7 22 0", " PUX. 27 19 38 17 9 19 19 18 4 10 10 27 40 42 4", " S. 36 6 0 41 12 33 20 39 8 17 33 38 39 34 1 25", "QOZPWLC. 11 3 16 18 43 22 40 14 5 5 43 26 1", "JF DYMCID. 5 0 13 24 22 34 23 20 41 0 11 9 37", " S. 20 14 39 21 36 15 3 12 1 30 1 17 16 37 32 6", " S. 37 29 8 30 31 10 14 30 8 5 8 40 36 18 27 39", " S. 33 39 38 7 20 15 16 41 29 27 12 17 35 9 21", "QOZPWLC. 31 30 2 7 31 2 8 22 36 42 30 3 8 17 40", "WANGRJL. 20 8 24 6 27 10 21 12 18 1 34 27 3 36", " S. 20 1 23", "XRG YNBAN. 2 22 15 5 8 11 17 15 31 13 29 23 12", "JF DYMCID. 38 23 24 30 23 35 34 5 40 12 21 4 5", "JF DYMCID.", " S. 17 23 38 2 0 24 42 14 12 1 39 12 6 27 6 28"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" PUX", "XRG YNBAN", "WANGRJL", "QOZPWLC", "JF DYMCID", " S"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> papers = {"JMVO. 5 31 1 16 9 18 12 8 1 20 31 6 40 18 23 40", "A X GZ UVM. 32 28 20 15 37 28 8 5 15 6 31 2 9 4", "QXQAT . 28 31 14 40 5 32 35 33 19", "JWR. 40 21 40 1 39 23 21 12 28 38 40 24 22 10 6", "JMVO. 29 17 36 30 3 13 22 37 29 20 11 7 14 5 27", "QXQAT .", "S BBATOS M. 4 35 27 25 19 16 23 11 22 31 12 26", " K. 5 3 24 38 3 23 12 14 13 17 3 35 19 31 39 16", "BCG . 27 6 36 2 5 27 16 27 1 39 1 12 0 12 25 0", "EVXG. 10 36 12 10 28 5 20", "EVXG. 36 0 4 22 8 5 15 14 16 31 30 18 12 6 4", "HDWMSE. 36 14 13 29 39 17 34 28 8 21 8 10 16 7", "GNRKRXTI. 21 29 16 17 18 18 16 22 0 35 36 15 40", "BCG . 28 21 4 35 28 23 6 11 3 21 21 20 16 0 23", "BRY F. 2 26 40 26 22 34 13 38 27 20 36 3 30 7", "ARXW MD . 9 37 9 8 12 21 16 39 36 21 36 37 28 9", "A X GZ UVM. 24 31 2 22 35 31 15 40 2 35 26 14 8", "S BBATOS M. 25 40 22 20 10 20 32 15 30 15 11 12", "BRY F. 38 4 31 1 36 4 28 36 6 11 27 31 10 7 6", "JWR. 8 40 0 10 2 34 13 16 29 3 24 33 0 26 38 39", "XF L.", "ARXW MD . 29 32 34 4 3 22 2 38 30 10 18 14 25 9", "AWWGM OT. 12 11 19 13 3 23 32 1 3 19 4 38 2 14", "H UYBASHN. 36 24 30 30 39 32 15 16 1 7 4 17 27", "QALGXPUPVA. 32 21 27 18 18 19 18 17 36 30 27", "QC . 26 4 36 14 1 33 36 1 6 13 16 8 22 24 17 29", "QALGXPUPVA. 36 37 12 27 3 29 1 27 14 36 8 30 14", "GLG. 8 26 11", "GNRKRXTI. 27 29 0 18 7 36 3 8 5 13 24 27 9 27 3", "S BBATOS M. 3 26 20 32 0 31 19 26 32 8 40 34 6", "ULMMDWMX. 40 28 10 18 15 5 8 36 35 3 9 31 25 8", " K. 27 4 26 36 37 19 9 8 28 4 40 17 8 37 39 23", "S BBATOS M. 24 24 26 25 21 33 37 11 2 2 19 14", "CA. 1 10 31 19 6 14", "CA. 11 21 40 37 38 9 35 23 24 15 12 35 11 35 38", "QXQAT . 17 19 15 27 37 25 11 36 3 2 13 8 23 28", "H UYBASHN. 8 10 29 31 21 2 32 3 25 20 11 9", " K. 21 13", "AHPCZQU. 20 29 9 29 12 40 12 16 23 23 5 14 12 5", "GLG. 10 24 40 8 22 4 34 27 35 9 30 7 32 36 14 7", "QC . 26 24 12 33 5"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BCG ", "H UYBASHN", "GNRKRXTI", "A X GZ UVM", "JWR", "QC ", "AWWGM OT", "HDWMSE", "BRY F", "EVXG", "QALGXPUPVA", "XF L", "GLG", "QXQAT ", "S BBATOS M", "ARXW MD ", "JMVO", "ULMMDWMX", " K", "AHPCZQU", "CA"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> papers = {"ZARTB. 17 49 7 4 32 43 4 11 25 8 17 11 33 47 11", "NGWOWTQRI. 48 38 3 29 41 23 29 27 38", "XGZTB.", "LAMKZKD P. 1 49 26 15 34 33 2 2 1 42 26 5 41 0", "LKQQJP V. 21 28 30 37 44 28 33 23 34 8 22 29 23", "POMNT. 22 26 28 44 44 27 31 33 48 21 36 39 6 11", " .", " J. 23 49 43 24 42 14 14 6 28 48 4 49 19 23 42", "K. 0 42 4 44 36", " O XN MNQF. 22 19 38 20 41 35 0 3 21 4 41 27 27", "ZBRJ. 32 3 8 20 31 9 17 47 19 46 38 41 23 27 46", "XZQ . 20 38 47 25 5 31 1 12 3 20 19 39 41 3 34", " SQ. 25 28 9 39 44 31 36 44 14 18", " JKWDPHQKF. 24 22 12 47 11 30 15 12 27 32 6 34", "HLX XDGEVV. 16 16 39 12 20 26 46 7 24 48 4 18 5", "XKFOKZ . 9 10 1 21 43 46 33 20 26 35 41 30 33 0", " LGM. 6 11 22 17 28 29 14 15 36 36 29 49 27 27", "I. 34 13 23 25 2 8 40 23 10 26 24", "G AS. 16 44 48 0 46 19 8 11 21 21 2 34 36 35 34", " IZW. 6 43 8 21 1 21 45 17 28 28 1 42 27 35 3 1", "K.", "X. 16 16 8 2 45 2 3 35 47 41 31 32 1 22 42 40 0", "KF. 3 35 3 49 19 30 20 21 0 39 13 27 2 38 15 31", "LKQQJP V. 28 10 20 44 17 30", " IZW. 16 44 20 43 18 44 22 21 12 29 11 20 46 8", "EY. 9 33 24 27 45 12 5 47 10 8 8 48 14 10 10", "T. 15 2 43 45 40 1 15 40 34 7 19 5 7 24 30 34 5", "X. 32 17 1 16 43 2 25 40 17 8 18 9 48 19 35 21", "X. 30 7 22 11 12 18 43 37 22 38 37 7 44 11 15 2", "LAMKZKD P. 25 21 1 39 11 4 43 9", "EY. 48 11 24 48 24 3 5 46 49 0 24 37 27 8 31 11", "X. 14 0 39 14 26 6 11 39 23 27 15 14 29 41 2", " HBDYBOSMP. 26 4 40 38 20 44 24 28 15 12 5 19 8", "JSLE JJFZL. 12 4 14 5 40 18 38 1 30 17 45 13 27", "V. 4 28 26 12 39 37 8 4 1 43 41 18 10 18 49 32", "XKFOKZ . 37 13 11 36 3 28", "V. 31 34 10 15 37", " SQ. 24 48 46 41 26 40 15 46 27 19 36 32 26 13", "HLX XDGEVV. 33 13 13 47 43 11 47 18 46 39 7 32", "TJHBBKYSPA. 33 48 37 24 2 0 9 37 5 1 29 4 6 38", "I. 35 46 35 42 38 33 32 38 23 43 16 16 43", "NGWOWTQRI. 33 17 5 42 12 46 20 46 10 22 37 21 9", "KF. 43 41 36 44 9 1 36 29 40 7 13 37 48 14 2 30", "NEN. 45 24 0 14 46 32 11 29 32 14 15 2 27 36 28", "XZQ . 17 38 47 35 48 14 10 26 36 9 8 36 48 41 1", "V. 42 28 32 40 6 7 31 39 39 0 23 37 25", " IZW. 25 34 31 5 8 11 37 14 17 27 32 15 4 25 16", "NFZF. 7 46 9 43 27 12 0 26 32 24 41 49 12 22", "TJHBBKYSPA. 37 14 34 4 0 33 32 12 10 47 26 33 8", " QCR. 14 48 15 22 21 32 14 3 40 17 41 32 10 47"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" HBDYBOSMP", "NEN", "ZARTB", "K", "NGWOWTQRI", " SQ", "XZQ ", "T", "XGZTB", "X", "HLX XDGEVV", " IZW", "TJHBBKYSPA", " O XN MNQF", "JSLE JJFZL", "POMNT", "XKFOKZ ", "I", "NFZF", "ZBRJ", "KF", "LKQQJP V", "LAMKZKD P", "EY", "V", " ", " J", " QCR", "G AS", " JKWDPHQKF", " LGM"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> papers = {"IODRE. 15 4 6 24 39 1 2 19 35 16 38 14 18 30 34", " MKHXY. 9 38 19 26 12 0 5 0 5 11 12 7 30 15 9 5", " MSLKU. 36 4 38 23 10 0 6 18 23 37 25 11 6 39 9", "H. 34 36 4 19 26 32 39 26 4 5 30", "SCDF. 39 6 26 29 0 0 35 11 25 30 12 25 36 20 24", "WTS . 17 20 4 13 0", "O. 4 28 33 27 16 37 33 34 26 25 2 27 8 15 23 9", "H. 10", "WTS . 25 36 5 39 7 9 20 7 30 23 17 31 13 39 11", "LZE. 13 1 6 28 3 6 15 3 30 25 3 35 13 10 14 31", "IODRE. 39 25 29 36 9 26 19 6 38 9 6 37 18 18 26", "HCPB. 39 1 10 9 12 14 25 32 37 6 32 4 40 39 6", "O. 29 23 18 21 29 39 33 24 11 5 28 5 23 34 11 0", "SCDF. 9 0 18 0 30 34 20 2 7 36 11 9 36 29 11 28", "SIAO FHW. 30", "JEVNC AY. 12 3 24 14 21 20 35 6 3 4 9 31 0 5 30", "OQ. 11 10 36 14 11 3 5 17 34 11 39 10 29 6", "SIAO FHW. 12 8 6 23 40 14 8 15 25", "SIAO FHW. 27", "TKRZC. 16 8 9 0 4 40 39 22 16 4 23 32 10 18 32", "VPZZOOMDEV. 28 11 29", "M FSG. 4 36 4 28 26 19 12 31 10 26 35 38 8 40 2", "WTS . 20 23", "VPZZOOMDEV. 38 39 5 4 12 17 32 29 25 0 21 30 35", "HSKXFL EP . 27 8 22 14 2 17 36", "SIAO FHW. 35 29 30 18 23 38 27 21 18 29 28 8 35", "WM RL FH. 29 4 1 23 23 28 12 4", "SCDF. 37 28 9 14 10 39 17 38 3", "LZE.", "OJYWG. 37", "IODRE. 22 21 29 12 1 33 32 33 5 24 9 17 23 22 7", "OJYWG. 37 15 0 7 0 6 7 34 30 24 39 23 7 10 15 4", "OJYWG. 21 14 1 3 24 26 25 13 5 39 5 31", " GRYJDOJ. 24 31 20 35 10 32 36 7 8 6 14 5 19 5", "SCDF. 30 15 16 17 5 26 19 5 11 18 13 36 33 29 7", "LZE. 29 37", "IODRE. 11 34 17 19 13 4 35 16 26 31 38 7 16 29", "HCPB. 22 34 26 23 6 15 31 35 1 13 24", " MKHXY. 33 36 25 9 21 33 12 12 35 23 24 39 34 0", "EJ. 24 18 2 2 32 25 24 30 27 15 40 9 0 33 16 37", "VPZZOOMDEV. 5 26 10 2 14 12 13 3 8 32 5 2 26 37"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"EJ", "IODRE", "O", "HSKXFL EP ", "WM RL FH", "LZE", "SIAO FHW", "HCPB", "OJYWG", "JEVNC AY", "SCDF", "VPZZOOMDEV", "TKRZC", "WTS ", " MKHXY", "H", " MSLKU", "M FSG", " GRYJDOJ", "OQ"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> papers = {"YETDY. 43 16 36 11 17 47 3 18 11 25 27 45 47 35", "RSM. 12 2 29 43 4 11 0 17 41 39 23 2 44 4 18 33", " M . 8 19 20 13 25 46 13 13 25 36 34 4 16 12 46", " M . 11 28 1 35 0 17 45 47 41 7 0 16 11 14 35 2", "RSM. 47 20 28 28 39 43 45 17 37 5 12 25 29 25 8", "RSM. 15 46 41 15 45 4 21 12 12 41 44 13 43", "RSM. 10 21 0 22", "JMUKWU. 47 44 2 17 14 46 8 29 36 26 42 21 14 16", "JMUKWU. 42 10 24 16 45 36 23 7 24 46 0 43 26 5", "JMUKWU. 11 20 8 29 26 45 22 11 5 16 4 11 4 26 1", "YETDY. 2 17 15 18 12 1 27 8 16 25 26 43 29 46 7", "YETDY. 38 7 21 21 42 36 24 38 35 30", "YETDY. 15 24 13 7 40 3 9 47 33 4 32 42 38 28 30", "RSM. 2 10 4 0 24 14 5 18 1 46 15 33 14 17 31 47", "YETDY. 28 15 42 39 33 42 44 39 16 33 13 40 47", "JMUKWU. 19 10 4 40 11 8 36 39 39", "RSM. 13 33 24 20 35 36 27 33 35 12 33 34 6 42 6", "JMUKWU. 44 23 32 37 30 33 23 30 38", "RSM. 9 33 16 23 28 38 34 1 38 0 26 43 31 11 15", "YETDY. 33 14 4 29 15 30 46 0 46 32 34 40 32 8 8", "JMUKWU. 10 23 21 10 41 14 8 17 2 16 15 18 43 0", " M . 35 24 29 8 6 29 43 46 29 39 40 22 26 37 40", " M . 36 40 30 14 45 42 2 33 26 26 36 14 30 41 1", " M . 3 6 20 12 1 16 18 6 37 10 45 14 34", "RSM. 12 43 0 46 23 21 17 10 21 36 3 47 34 13 43", " M . 31 41 35 19 44 41 28 41 19 19 9 33 5 40 21", "YETDY. 13 47 23 34 12 1 7 16 38 34 15 32 17 40", " M . 32 12 33 12 18 9 13 19 4 29 8 26 25 28 35", "RSM. 4 24 27 12 42 26 27 23 5 13 29 0", "YETDY. 21 36 25 17 14 25 22 43 8 0 38 17 5 32 0", "JMUKWU. 25 35 11 31 31 1 14 43 8 33 17 22 42 16", "JMUKWU. 35 29 2 23 27 7 35 25 0 16 23 43 39 9 7", "JMUKWU. 1 47 0 38 20 47 4 3 24 46 10 45 45 12 0", "JMUKWU. 22 39 42 37 37 15 6 6 38 22 21 15 28 20", "JMUKWU. 44 25 35 44 40 6 16 33 44 1 7 9 40 45 9", "RSM. 16 43 1 28 25 20 38 27 40 23 0 26 28 30 47", "JMUKWU. 33 28 18 42 38 40", "JMUKWU. 25 22 22 44 30 28 34", "RSM. 0 6 27 34 35 9 7 6 34 24 28 14 12 30 6 17", "RSM. 9 26 37 35 31 27 7 7 10 37 0 21 37 11 20 1", "JMUKWU. 22 38 41 5 11 47 29 22 37 15 33 29 23 4", "JMUKWU. 19 26 27 7 22 27 2 39 32 46 19 43 30 46", "RSM. 18 26 24 2 41 21 12 2 37 6 46 28 36 39 41", "YETDY. 27 34", " M . 26 22 47 12 38 34 43 35 17 41 21 15 10 42", "JMUKWU. 7 29 13 44 28 18 10 43 47", "RSM. 23", " M . 1 27 20 41 34 1 29 36 18 37 32 46 37 22 38"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"YETDY", " M ", "RSM", "JMUKWU"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> papers = {"BRYOL S. 1 4 9 39 5 25 22 27 11 13 29 25 32 24", "BRYOL S. 26 39 42 42 29 37 10 14 13 10 13 28 3", "BRYOL S. 31 27 37 27 32 0 8 0 5 11 1 37 24 26 4", "U J. 40 28 34 32 37 28 13 28 32 15 15 7 13 26 2", "BRYOL S. 7 39 3 33 41 9 20 20 35 34 11 29 6 10", "GTKYHZ. 42 10 4 39 2 40", "BRYOL S. 28 32 25 12 8 18 9 5 21 33 42 1 23 23", "GTKYHZ. 40 3 24 33 8 0", "BRYOL S. 4 6 11 32 20 15 7 38 36 11 16 24 0 19", "GTKYHZ. 27 40 21 39 28 35 30 0 35 32 14 6", "U J. 31 24 28 9 17 3 32 32 6 2 18 12", "U J. 30 25 5 32 6 25 13 16 6 32 14 3 33 24 31 4", "U J. 8 1 7 34 13 27 4 23 11 9 6 34 39 33 36 25", "BRYOL S. 12 39 10 27 9 27 24 23 34 41 24 25 8 5", "U J. 12 25", "BRYOL S. 1 33 21 37 12 19 38 38 23 8 41 22 16 6", "U J. 19 5 6 32 12 28 39 28 15", "GTKYHZ. 21 35 1 14 3 29 30 42 16 16 3 32", "U J. 1 0 34 20 22 32 11 32 2 5", "GTKYHZ.", "BRYOL S. 11", "U J. 7 4 39 29", "U J. 7 30 9", "GTKYHZ. 14 22 40 35 32 32 12 17 35 32 20 16 24", "GTKYHZ.", "U J. 17 23 30 32 41 16 26 17 23 2 31 10 8 0 32", "GTKYHZ. 38 22 25 7 40 23 36 40 16 12 35 17 15 0", "GTKYHZ. 0 9 30 42 23 15 33 39 38 26 15", "U J.", "BRYOL S. 38 7 0 1 16 6 30 36 21 1 40 18 16 26 7", "GTKYHZ. 12", "BRYOL S. 38 0 19 23 39 29", "GTKYHZ. 39 29 24 18 26 36 22 21 15 33 24 34 1 7", "BRYOL S. 39 1 36 0 16 13 23 5 1 6 0 25 39 26 28", "U J. 4 4 33 8 31 16 13 41 36 28 27 38 12 1 35 7", "BRYOL S. 21 38 10 34 2 32", "U J. 29 37 37 22 24 4 15 37 17 19 32 0 37 20 23", "BRYOL S. 19 40 11", "GTKYHZ. 35 3 18 24 24 9 0 37 13 17 12 16 21 13", "BRYOL S. 30 11 24 0 42 23 20 13 4 23 3 42 19 9", "GTKYHZ. 32 1 7 23 2 26 16 14 11 21 34 20", "GTKYHZ. 10 29 9 32 14 4 25 3 22 42 15 15 40 20", "U J. 23 19 16 17 5 31 27 39 4 17 34 34 29 33 26"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"GTKYHZ", "U J", "BRYOL S"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> papers = {"KIEPZXQ. 42 37 6 19 42 39 15 26 7 20 24 18 17 5", "YUAT. 22 39 11 8 32 22 28 3 7 10 13 11 20 30", "PDPE OLSNT. 20 18 12 24 8 40 35 20 40 32 37 25", "QBLK. 35 25 32 23 7 39 40 19 25 19 22 28 15 17", "CQ N. 31 5 32 21 32 38 16 13 41 24 37", "YJV. 13 40 17 38 4 6 29 41 34 9 16 2 26 17 26 2", "H YGS. 41 14 11 21 37 10 10 43 35 5 21 18 25 4", "H YGS. 36 0 28 3 13 22 6 24 19 36 25 14 2 27 29", "OYN. 43 0 39 13 38 31 12 20 27 5 16 6 7 14 35 3", "CQ N. 38 14 14 11 15 5 11 30 32 30 14 36 39 38", "H YGS. 24 1 30 3 34 19 21 36 19 39 43 6 11 0 1", "YUAT. 27 29 5 18 30", "H YGS. 11 36 36 11 32 5 35 16 34 16 27 14 17 9", "HPYBXF. 30 43 0 38 38 42 3 7 41 25 0 31 4 21 38", "HN. 3 23 16 43 41 29 11 40 19 12 5 9 39 30 28 8", "IEGDLOWN. 5 26 27", "K COOPYTUJ. 42 39 9 38 9 41 9 27 20 4 36 22", "QBLK. 9 25 13 27 13 11 39 1 43 10 19 31 37 6 37", " AEW. 7 7", " AEW. 8 6 21 14 32 32 8 42 34 17 15 8 34 3 9 21", "WPCV. 2 27 10 31 12 40 17 18 15 33 16 22 5 21 3", "IEGDLOWN. 34 30 38 39 8 5 2 36 17 9 8 41 28 39", "H YGS. 36 18 28 15 6 43 28 26 13 28 38", "EFBUX . 31 38 3 31 10 0 27 12 35 20 15 11 43 7", "IEGDLOWN. 14 36 26 31 7 3 13 8 10 33 35", "YJV. 3 15 20", "OYN. 8 15 15 32 0 37 15 6 24 6 18 30 34", "PDPE OLSNT. 18 8 36 28 25 24 7 39 6 2 33 43 21", "K COOPYTUJ. 31 25 27 29 9 42 36 3 2 21", "IEGDLOWN. 38 10 5 9 20 24 28 19", "K COOPYTUJ. 32 40 8 5 7 22 24 20 16 16 27 36 11", "K COOPYTUJ. 8 34 7 12 27 22 8 38 28 34 6 2 0 36", "QBLK. 20 24 30 38 30 10 26 16 1 24 34 21 35 30", "WPCV. 10 35 1 15 18 22 26 41 9 43 42 30 6 9 17", "H YGS. 29 26 30 37 6 14 33 11 21 41 8 16 4 26 8", "WPCV. 19 38 3 37 38 5 18 2 40 36 19 20 30 20 42", "E. 14 34 19 8 12 33 34 39 4 18 17 17 6 2", "O QESKI. 7 38 0 14 6 8 29 17 12 7 23 43 13 4 13", "IEGDLOWN. 20 6 36 7 41 26 25 14 23 3 41 4 15 4", "OYV ZJTLX. 42 10 40 13 26 7 26 36 42 10 34", "O QESKI. 29 9 25 23 15 36 42 20 42 11 26 15 42", "PDPE OLSNT. 10 16 16 40 37 26 5 34 28 7 37 28", "K COOPYTUJ. 38 40 16 15 20 9 25 18 35 31 31 1 3", "HN. 8 3 21 13"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"E", "YJV", "OYN", "OYV ZJTLX", "QBLK", "HPYBXF", "IEGDLOWN", " AEW", "HN", "H YGS", "PDPE OLSNT", "CQ N", "O QESKI", "K COOPYTUJ", "WPCV", "KIEPZXQ", "YUAT", "EFBUX "};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> papers = {"IIA SVZ R. 24 33 1 3 11 1 26 26", "KAVIL. 22 17 36 21 9 8 30 12 40 4 5 39 11 10 6", " TH . 19 9 27 26 27 4 3 20 17 10 0 10 3 7 21 3", "J XKM. 26 43 34 18 5 33 9 23 7 36 1 6 39 16 40", "Q. 25 21 6 7 11 20 21 21 5 22 37 26 13 26 37 34", "JRRW R. 34 37 22 16 20 27 23 17 26 29 34 3 11", "DX. 3 41 27 35 31 7 18 23 10 9 2 33 18 24 22 35", "TZIPD. 4 5 4 15 14 5 3 19 39 25 17 2 32 36 6 4", "J XKM. 24 15 38 13 0 6 20 22 3 1 18 6 1 1", " TH .", " AXXI K. 17 26 11 14 6 11 33 30 2 34 27 5 37 6", "Q. 16 28 25", "E. 19 14 22 38 8 16 33 25 6 41 1", "QAV. 31 25 26 22 7 39 35 9 31 0 7 34 6 26 39 26", "Q. 30 27 8 0 9 26 0 5 27 33 18 30 28 29 41 40 1", "REV. 16 29 35 9 38 31 37 2 13 27", "DX. 19 9 13 42 18 26 25 2 26 24 12 35 4 17 3 1", " AXXI K. 10 22 1 37 30 8 32 34 34 32 42 36 29 9", "VUUCWE. 2 23 12 20 5 19 21 43 27 15 37 35 14 26", "VUUCWE. 15 7 31 9 29 1", "QAV. 34 25 1 13 10 42 13 18 39 40 5 16 26 8 15", "REV. 24 17 24 39 26 32 1 16 37 40 13 6 43 33 10", "E. 32 3 34 0 20 19 26 9 42 40 5 38 32 6 4 21 14", "VUUCWE. 36 17 33 14 6 20 9 4 20 2 20 34 24 14 6", " TH . 32 1 2 5 23 11 4 30 15 16 13 25 22 7 7 11", "E. 33 28 1 36 3 9 23 40 35 14 33 21 0 16 6 42 2", "Q. 8 20 12 33 42 7 38 2 31 41 9 42 35 35 36 15", "KNRPKPH. 14 17", "QAV. 9 11 20 6 13 38 18 7 7 1 42 12 24 37 20 35", "KAVIL. 39 20 21 13 26 35 15 7 41 17 25 22 35 4", "E. 19 24 38 41 25 16 14 23 10 28 27 16 24 10 33", " AXXI K. 1 26 20 37 0 10 43 28 28 2 24 3 13 6 4", "KAVIL. 20 22 14 39 30 10 21 5 8 12 10 8 4 5 15", "DX. 3 5 12 43 40 1 22 15 22 24 28", "QAV. 39 40 27 43 39 10 38 36 28 25 41 35 24 7 5", "IIA SVZ R. 8", "TZIPD. 15 42 25 13 17 19 18 12 8 33 42 17 16 29", "KNRPKPH. 43 9 13 19 18 33 40 10 35 31 33 20 10", "IIA SVZ R. 31 0 10 40 28 30 10 5 7 37 24 28 23", "GKZDHDRDJY. 37 37 28 26 31 18 6 26 28 14 21 41", "GKZDHDRDJY. 41 10 2 1 25 38 16 33 12 17 35 11 9", "RWPBXO. 10 20 17 14 33 39 36 4 19 22 43 34 6 20", "F JNY . 2 0 22 5 33 38 17 14 18 31 26 21 9 28 0", "F JNY . 9 13 38 7 5 24 1 20 35 17 38 8 30 39 40"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JRRW R", " TH ", "DX", " AXXI K", "Q", "GKZDHDRDJY", "IIA SVZ R", "QAV", "REV", "TZIPD", "E", "J XKM", "KNRPKPH", "KAVIL", "VUUCWE", "RWPBXO", "F JNY "};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> papers = {"V. 38 29 34 40", "W IKSC . 31 2 16 19 39 8 18 9 5 23 0 12 9 30 22", "OWLCE . 45 26 26 14 45 12 25 19 27 25 40 33 44", "BWN. 41 14 29 36 32 37 18 32 40 38 12 23 1 29 6", "V. 16 43 35 13 39 7 23 33 26 18 34 44 33 31 31", "RVJKLAL. 11 18 45 37 24 37 21 14 19 27 37 11 20", "V. 35 13 37 45 36 9 34 10 39 28 41 10 11 35 46", "V. 17 3 30 14 15 9 26 11 31 45 41 17 22 46 3 35", "AWJ. 0 44 32 29 11 45 41", " DN . 8 14 31 22 25 42 27 17 40 32 33 15 19 32", "BZC. 17 38 8 3 2 0 16 23 14 6 22 46 22 21 12 12", "V. 7 15 31 26 28 4 43 8 1 47 9 41 4 45 35 41", "WOCYVQ. 42 30 37 19 16 20 36 44 25 8 45 26 7 3", "OWLCE . 38 35 44 41 22 26 7 8 7 9 18 37 34 27 0", "LLUPRM P. 32 31 36", "AWJ. 28 27 14 14 13 19 23 5 16 35 21 0 31 35 37", "RVJKLAL. 36 3 47 8 2 45 41 27 24 8 33 17 17 8 4", "GJRC. 46 6 28 22 23", "LLUPRM P. 20 10 43 11 25 32 42 2 0 40 7 26 12 9", "OWLCE . 38 45 40 32 40 35 26 34 22 5 14 33 29", "OWLCE . 19 21 33 29 23 10 19 10 4 3 34 12 19 3", "LLUPRM P. 36 19 30 30 35 35 22 40 39 44 42 19 8", "BZC. 41 30 1 31 4 24 34 9 31 47 21 33 7 26 34", "W IKSC . 26 1 4 34 41 5 43 47 32 9", "WOCYVQ. 27 30 9 14 6 6 4 7 37 26 47 28 38 38 46", "W IKSC . 35 8 13 19 20 13 31 10 20 7 15 32 8 15", "W IKSC . 19 7 29 5 42 32 1 42 22 41 40 41 22 8", "W IKSC . 42 39 16 20 44 15 7 43 41 7 17 1 3 44", "AWJ. 2 7 40 27 42 44 3 41 3 43 19 17 30 31 19", "BZC. 28 34 4 15 28 20 42 34 0 21 28 15 41 41", "BZC. 18 4 38 27 38 23 2 36 36 29 28 5 6 7 18 10", " COVK G. 25 15 16 22 38 21 47 6 13 12 42 42 1 7", " COVK G. 17 10 29 22 16 45 47 25 33 36 26 12 19", "BWN. 3 8 29 13 23 26 47 5 25 35 6 3 3 19 27 45", " COVK G. 20 17 36", " COVK G. 39 19 30 44 9 14 38 44 32 3 40 45 6 20", "WDQNPWCBKQ. 16 34 39 2 0 37 37 19 40 2 38 20", " COVK G. 28 31 32 20 36 2 10 2 25 38 4 4 6 46 5", "AWJ. 23 22 41 21 30 39 44 22 11 17 3 22 47 6 28", "GJRC. 7 8 36 2 0 46 16 11 37 45 23 2 40 17 15 6", "BZC. 11 8 31 25 36 6 2 47 19 38 32 37 42 25 23", "V. 10 47 24 12 14 13 11 47 38", "OWLCE . 27 16 45 7 40 21 44 29 27 23 22 47 23 4", " COVK G. 3 0 21 42 13 16 16 47 10 12 6 30 13 46", "LLUPRM P. 8 13 11 47 0 3 12 42 6 1 7 14 38 22 8", " COVK G. 40 23", "WDQNPWCBKQ. 21 19 27 31 20 10", "LLUPRM P. 23 46 46 4 1 27 23 20 19 33 23 2 25 1"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OWLCE ", "V", "W IKSC ", "BZC", "AWJ", "WDQNPWCBKQ", "LLUPRM P", " COVK G", "BWN", "RVJKLAL", " DN ", "GJRC", "WOCYVQ"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> papers = {"NC. 1 2 32 16 7 15 12 27 35 3 37 10 9 33 12 37", "YJU UXQGU. 24", "DTBMA HH O. 32 23 39 11 8 39 3 37 27 13 23 20 5", "ZRJ. 36 33 8 1 36 24", "IOUIOBB. 33", "AYJXER. 24 30 0 3 20 29 41 18 27 9 24 29 2 31 4", "AYJXER. 32 31 19 18 1 41 19 23 13 4 19 23 3 28", "FQZZS H. 35 10 13", "G. 13 15 9 17 41 23 34 40 22 18 17 32 2 15 33 6", " DI.", " SFDVO KUE. 27 37 25 25 24 16 16 19 37 22 25 11", "YUF. 25 31", "TYBD.", "VFH FGV. 32 12 34 23 28 29 6 29 3 21 36 14 22 1", "TSU . 7 31 32 27 24 18", "KOWIM ZOG. 34 16 23 38 25 14 36 7 37 1 17 11 32", "E WCD. 3 15 14 18 37 27 5 35 36 9 11 37 31 37", " SFDVO KUE. 35 23 11 16 8 22 19 24 23 1 2 30", "ID. 26 32", "FHQMF. 15 41 4 40 20 35 18 10 17 4 32 39 39 30", "YUF. 28 14 32 24 32 14 4 13 0 12 35 15 0 2 4 11", "KW. 33 24 37 19 11 36 10 6 5 8 12 14 36 0 39 16", "L. 33 18 14 34 12 40 11 36 40 32 17 15 38 36 19", "DTBMA HH O. 9 30 29 39 29 4 5 39 37", "NC. 25 6 11 27 4 38 35 33 14 28 38 18", " KC BQ L. 34 0 24 21 7 7 23 20 13 35 1 35 9", "G. 28 16 1 29 39 36 17 10 39 30 9 4 40 33 35", "KYETQNGE. 36 37 36 33 7 16 1 17 9 5", "YJU UXQGU. 11 20 6 37 9 22 6 25 29 26 26 6 27 2", "YUF. 19 30 22 37 24 21 34 1 14 11 10 41 2 11 6", " LRR. 32 26 37 33 31 10 5 18 38 1 20 21 5 2 35", "YCJAKGQ. 6 27 17 16 10 18 36 10 36 20 5 32 25 3", "YJU UXQGU. 0 10 13 29 27 11 19 30 24 3 3", "NC. 12 13 4 29 17 40 32 21 32 6 12 12 15 1 16", "KYETQNGE. 38 6 19 3 24 40 2 8 23 30 37 18 32 35", "TERRZ E . 32 2 17 27 6 4 36 31 4 18 18 14 1 22", "M. 7 9 20 2 34 24 23 11 33 28", "FFEO. 19 18 33 18 22 4 31 21 14 11 36 6 34 18 4", "FHQMF. 26 22 19 41 39 7 3 5 39 29 4 15 11 41 11", "G. 30 1", "HYNCDK. 23", "TFTUM EJJC. 14 17 30 27 16 3 29 25 14 31 19 22"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ID", "YJU UXQGU", "FFEO", "IOUIOBB", "M", "TERRZ E ", "TSU ", "ZRJ", "YUF", "DTBMA HH O", "KYETQNGE", " DI", " LRR", "E WCD", "L", " SFDVO KUE", "AYJXER", "NC", "YCJAKGQ", "KOWIM ZOG", "VFH FGV", "FHQMF", " KC BQ L", "FQZZS H", "HYNCDK", "KW", "TFTUM EJJC", "TYBD", "G"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> papers = {"WV JWN GW. 9 11 7 2 38 11 17 11 35 40 36 40 17", "CSS. 2 18 11 19 27 28 5 29 36 13 30 37 7 3 34 9", "O RYQUK. 30 32 21 38 13 35 27 36 30 24 26 12 15", "O RYQUK.", "YAXGQCC KN. 26 28 17 16 28 15 9 38 15 9 30 33 6", "WV JWN GW. 32 8", "YQ OFB S . 13 16 1 18 22 21 34 36 12 13 14 36 3", "OHYPL. 11 1", "YYTO VKLUG. 12 32 13 24 10 23 5 26 21 18 6 1 37", "O RYQUK. 38 35 8 25 28 20 4 15", "WV JWN GW. 35 37 26 36 24 19 13 36 22 34 1 29 7", "YAXGQCC KN. 31 34 9 5 18 14 1 15 33 17 35 4 23", "OHYPL. 22 9 19 23 40 14 16 36 2 32 7 31", "SD. 19 39 34 29 4 31 36 1 33 0 8 14 30", "O RYQUK. 28 0 5", "C. 34 2 24 1 3 6 0 26 34 25 39 26 14 19 19 7 16", "V. 30 3 27 15 18 36 10 3 27", "YAXGQCC KN. 25 13 20", "SD. 23 9 38 27 24 23 32 5 35 5 12 1 36 25 0 27", "O RYQUK. 29 32 3 17 28 28 29 39 34", "O RYQUK. 26 36 2 23 27", "OHYPL. 16 4 3 23 29 20", "O RYQUK. 21 39 12 18 19 39 38 24 19 34 1 23 9 7", "ZK. 18 5 39 29 29", "YYTO VKLUG. 27 13 8 27 12 17 23 9 8 15 34 18 21", "CSS. 14 18 11 3 13 19 29 15 10 0 11 38 40", "OHYPL. 30 13 25 4 11 18 4 27 36 2 23 38 17 25 0", "DILQSI. 20 15 10 23 3 35 4 1 31 21 6 1 36 35 17", "O RYQUK. 18 9 25 40 36 6 20 15 10 0 23 21 34 2", "SD. 23 22 25 15 19 8 21 31 2 25 39 28 27 36 11", "OHYPL. 1 16 36 14 0 21 31 38 37 27 4 3 22 26 2", "YYTO VKLUG. 29 33 28 27 13 30 7 8 27 15 12 5 29", "O RYQUK. 12 7 29 33 17 29 27 2 40 21 15 38 9 17", "O RYQUK. 9 2 11 0 11", "WV JWN GW. 40 13 1 1 32 4 10 10 20 21 25", "OHYPL. 5 17", "ZK. 11 1 3 9 33 38 32 15 22 19 2 23 25 9 21 8 8", "YQ OFB S . 27 32 20 32 33 21", "C. 11 30 17 20 7 4 28 19 36 4 15 34 23 40 40 28", "YYTO VKLUG. 18 40 9 7 36 7 14 18 35 7 3 30 5 11", "V. 11 34 33 29 22 2 9 23 8 24"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ZK", "C", "DILQSI", "CSS", "SD", "YAXGQCC KN", "OHYPL", "WV JWN GW", "O RYQUK", "V", "YYTO VKLUG", "YQ OFB S "};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> papers = {"Z. 22 15 12 49 34 32 44 23 22 19 47 47 30 38 44", "Y TQPLPDDY. 15 42 0 26 3 29 3 33 22 27 20 42 26", "O LR. 12 49 7 35 48 25 12 41 29 23 45 40 23 13", "Z. 20 22 10 29 1 12 5 40 15 36 14 40 7 13 16 44", "MTOSVFP. 17 38 33 24 21 0 33 42 35 15 43 17 24", "V I CH. 20 38 9 14 20 31 2 2 20 30 47 22 31", "Z. 23 2 35 44 16 31 24 5 37 47 27 15 43 18 19 8", "XEN OS. 41 2 40 12 15 26 8 40 8 21 38 49 32 14", "JHGP . 20 35 22 34 37 11 48 24 39 40 28 4 4 9", "KZZH EADAC. 16 43 39 5 11 3 18 27 10 19 10 7 34", "Z K X QY. 36 36 20 19 6 5 42 7 9 21 30 42 28 13", "OBPC. 29 29 46 28 18 24 24 15 28 46 16 6 2 9 9", "Z K X QY. 29 31 13 29 25 39 31 20 19 36 38 2 47", "ZQEDR C . 41 18 49 7 15 0 1 40 14 37 38 37 2 1", "AV MY . 30 20 27 20 9 42 8 8 8 42 37 33 32 21 9", "O LR. 33 9 44 10 11 35 31 19 17", "NRG TIWMC. 22 0 32 4 28 36 33 28 30 12 32 46 4", "JHGP . 9 3 18 24 25 49 28 8 21 39 34 38 22 20", " WP. 46 13 24 4 34 0", "XV. 44 0 31 7 20 28 0 40 15 0 11 46 12 41 4 31", "N B. 4 41 7 4 24 5 5 33 43 10 1 28 13 32 5 3 11", "G. 25 16 43 30 34 5 34 44 33 20 20 23 5 30 34", "Z K X QY. 23 35 4 36", "QZO. 36 30 12 7 38 16 5 36 20 12 46 38 22 9 37", "M G. 28 47 43 30 30 13 35 47 5 33 44 15 48 43 9", "MTOSVFP.", "XEN OS. 31 45 3 35 48 7 44 37 45 27 39 20 9 20", "G. 33 5", "AUI. 29 24 39 48 3 17 23 21 38 19 26 31 18 43 3", "XEN OS. 45 40 49 40 42 39 13 35 24", "KZZH EADAC. 32 35 22 11 35 20 36 27 8 29 31 8 9", "NRG TIWMC. 6 39 2 15 27 33 21 10 45 0 14 12 9 3", "NRG TIWMC. 42 34 2 29 46 26 18 23 10 38 43 19 5", "N B. 27 8 18 19 18 12 15 27 1 15 24 34 41 48 36", "QZO. 1 49 3 40 21 4 8 44 33 38 39 38 9 26 20 31", "XV. 11 41 32 4 22 37 1 15 0 1 26 21 6 25 13 7 5", "R. 37 11 37 48 12 13 6 38 2 7 32 33 14", "M G. 30 22 42 14 26 13 20 21 5 30 47 7 11 31 19", "M G. 43 42 27 30 17 29 36 21 16 26 12 44 13 20", "MTOSVFP. 26 18 10 40 32 44 16 19 23 13 12 46 34", "YCTD. 25 45 18 38 19 2 8 0 11 4 39 15 38 4 24 8", "XV. 32 48 26 48 24 12 15 48 24 18 12 1 24 38 47", "N B. 24 46 22 4 48 16 8 29 40 11 44 26 9 18 9 0", "Y TQPLPDDY. 6 8 29 6 29 13 44 17 13 12 37 34 23", " . 20 31 0 37 29 1 5 46 30 34 42 14 21 1 40 9 2", "R. 32 25 34 18 23 41 29 25 12 32 24 34 16 24 19", "R. 3 41 17 21 30 0 24 49 4 7 39 8 27 5 21", "Z. 35 30 6 32 19 40 28 36 15 38 23 36 15 1 46 4", "ZQEDR C . 11 30 8 14 1 33 29 24 37 14 11 37 36", "R. 12 48 29 15 48 8 46 35 28 31 13 26 46 6 19 0"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"M G", "KZZH EADAC", "O LR", "V I CH", " ", " WP", "N B", "XEN OS", "ZQEDR C ", "OBPC", "YCTD", "Z K X QY", "G", "QZO", "XV", "NRG TIWMC", "MTOSVFP", "AUI", "Y TQPLPDDY", "JHGP ", "AV MY ", "Z", "R"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> papers = {"PQUHHKAVLN. 33 5 29 3 22 33 27 12 15 28 7 1 37", "P. 41 18 43 16 19 27 32 38 5 3 30 34", "P.", "EQ B LTF. 35", " ZU. 16 10 11 14 33 35 39 25 39 15 13 32 6 27 5", "HR . 0 1 13 15 18 16 31 28", "WXV FHX. 34 5 30 1 43 14 40 2 37 20 12 14 14 1", "J. 1 14 19 20 23 33 41 15 39 32 34 10 27 28 20", "J C. 28 1 15 27 32 32 4", "X LXN AD. 12 40 4 17 19 8 11 0 39 3 16 24 15 28", "MQDWNI. 9 6 18 22 35 35 42 35 38 23 28 40 22 7", "IXCGF GFBT. 34 40 3 23 41 26 33 7 28 28 39 41 4", "JW O. 43 39 10 42 34 39 41 27 37 41 42 32 6 2 4", "ECNGOPEW. 12 14 38 14 20 3 1 17 23 23 30 4 34 1", "E. 30 28 30 10 41 27 38 35 8 16 42 36", "J. 21 40 34 34 17 39 19 21 33 9 42 21 23 42 27", "JW O. 13 40 12 29 18 21 0 9 21 32 27 15 38 35 8", "HQ. 25 14 24 5 18 22 28 16 10 13 27 24 14 18 7", "CGMLUAL O. 26 15 15 29 33 28 35 25 40 27 37 2 8", " ZU. 40 6 0", "G . 24 17 40 35", "CXGKC. 34 24 12 16 19 23 11 20 39 12 30 26 33 5", "HR . 33 3 35 4 26 2 40 5 26 11 28 32 1 23 14 29", "RMYVEPFO. 21 10 22 20 41 15 17 31 0 18 30 31 19", "OB. 39 34 42 23 35 1 29 7 21 14 25 37 33 20 36", "GCPLBJ M V. 16 31 37 36 8 22 28 18 7 29 31 16", "HKA ODQB J. 41 35 21 22 2 30 29 16 0 16 14 34 2", "PQUHHKAVLN. 10 19 37 41 38 42 17 38", "ZLMMFSX. 35 34 3 9 36 9 36 30 24 3 30 30 23 17", "UNYZTBPSLH. 25 36 11 33 28 1 36 10 25 39", "HR . 4 16 4 17 17 2 33 36 40 18 40 11 21 3 7 2", "PQUHHKAVLN. 32 33 40 4 5 40 14 32 11 34 12 1 3", "EXS. 8 41 37 42 29 41 23 40 26 30 9 2 17 33 3", " B. 18 22 16 1 0 2 11 5 15 1 16 5 31 12 40 10 0", "WHF . 17 23 19 30 9 10 8 33 30 14 12 23 39 41 7", "ETBWMPCQ K. 36 37 17 12 7 17 33 6 32 32 29 39 6", "VAOGW. 21 28 42 43 6 37 30 1 25 5 12 4 39 12", "RMYVEPFO. 20 40 25 27 5 22 5 11 3 25 35 23 2 4", "EXS. 33 7 34 19 34 27 5 12 32 20 0", "ETBWMPCQ K. 27 28 1 25 29 4 37 43 20 23 9", "IXCGF GFBT. 17 37 41 38 30 33 5 13 30 34 33 41", "J. 13 38 27 42", "BNQWXA WG. 37 33 13 15 36 18 28 24 8 2 6 39 18", "NRP. 7 15 20 1 10 35 8 33 13 26 39 37 40 11 20"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" B", "ZLMMFSX", "WHF ", "ETBWMPCQ K", "RMYVEPFO", "IXCGF GFBT", "P", "HQ", "JW O", "EQ B LTF", "MQDWNI", "HR ", "J", " ZU", "CGMLUAL O", "E", "G ", "UNYZTBPSLH", "BNQWXA WG", "J C", "PQUHHKAVLN", "EXS", "ECNGOPEW", "GCPLBJ M V", "VAOGW", "CXGKC", "WXV FHX", "X LXN AD", "HKA ODQB J", "OB", "NRP"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> papers = {" T. 32 15 19 1 17 23 3 35 17 27 23 13 12 13 5 1", " FM. 5 2 27 27 4 34 34 11 41 14 9 40 39 28 6 27", "QUI QBA. 33 29 23 20 0 28 38 25 32 8 6 26 35 26", "YQ. 15 24 20 39 4 14 40 15 33 1 40", "KZ . 39 13 31 27 38 40 37 37 35 12 29 18 13 40", "OISFNSK. 35 30 2 41 9 16 21 8 1 38 25 30 28 17", "P. 15 17 29 8 37 41 12 24 24 24 40 24 34 32 4 7", "Z N. 41 11 32 14 15 1 16 12 23 1 27 23 5 1 35 5", "G.", "OISFNSK. 6 13 28 13 33 33 34 28 33 40 21 29 25", "LMJ . 3 32 41 12 8 5 29", "G. 39 15 33 3 30 41 1 6 36 34 40 21 34 23 7 7", "C. 22 23 37 17 3 4 38 4 20 7 4 15 16 22 16 23 4", "UXP TH. 8 36 21 19 36 6 10 34 37 19 36 26 34 35", "Z. 1 25 36 29 32 23", "C.", "OC. 33 24 27 35 21 9 15 21 4 36 40 35 24 31 6 5", " QYQFNLA. 4 33 36 0 32 37 35 10 20 12 37 32 40", "OISFNSK. 36 12 5 0 11 15 12 26 12 31 16 3 21 34", "OISFNSK. 7 33 15 3 17 21 6 16 34 2 5 7 25 3 25", "WKIN . 16 4 34 15 10 31 40 22 31 10 24 0 22 17", "HD DBK M. 13 41 17 20 26 15", "QUI QBA. 20 11 23 40 23 10 39 7 6 18 0 8 1 37 9", "HD DBK M. 19 11 34 37 38 2 39 13 33 26 36 38", "LMJ . 32 34 8 35 22 21 26 29 21 5 19 13 33 19", "OC. 33 41 13 3 12 22 29 29 10 40 21 33 12 9 15", "WQSIGMLFED. 22 25", "UXP TH. 17 22 29 40 29 17 4 30 31 4 19 39 7 4 2", "KZ . 19 1 16 37 26", "LW. 17 20 2 37 37 17 24 22 31 10 41 4 25 2", "KZ . 34 2 9 3 24 13 38 4 18 24 34 37 5 25 1 22", "YQ. 39 36 3 21 18 10 25 23 33 12 40 28 12 37 10", "P. 9 13 22 10 31 8 31 19 20 0 33", "WKIN . 35 6 19 7 40 36 7", " QYQFNLA. 36 18 9 40 35 37 33 31 30 19 17 7 32", "HCWU. 12 25 18 11 37 34 16 7 23 9 2 41 7 12 0 6", "KZ . 5 14 30 5 37 31 24 27 12 19 37 6 28 1 41 5", "HD DBK M. 23 0 12 3 5 20 13 16 36 27 14 10 25", "G. 2 6 37 39 33 1 7 41 15 25 18 7 24 15 2 2 2 1", "WUVRSZD E. 0 36 3 38 22 14 21 15 5 21 1 3 28 30", "VGU VF A. 5 29 38 25 27 9 8 36 34 35 37 15 17", "ZGTC AL. 18 4 7 36 36 21 6"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VGU VF A", "C", "HD DBK M", " FM", "HCWU", "ZGTC AL", " QYQFNLA", "WKIN ", "OC", "Z N", "P", "LW", "OISFNSK", "QUI QBA", "YQ", "UXP TH", " T", "WUVRSZD E", "KZ ", "LMJ ", "G", "WQSIGMLFED", "Z"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> papers = {" ATJCDG. 33 35 24 6 33 36 18 8 3 37 16 35 27 5", " Z S. 5 12 9 16 12 31 27 34 17 32 19 30 12 38 9", "Z. 38 29 15 11 10 33 17 25 24 37 4 1 26 26 28 8", "TNN JX. 14 30 26 25 6 25 25 16 33 4 12 29 16 32", "H BVJ . 38 8 34 34 8 2 11 11 12 20 1 35 23 8 1", " EMGN . 8 23 34 11 17 16 9 26 30 39 31 37 24 25", "B. 1 31 26 31 5 33", "NXINU NFQ. 8 36 31 8 21 22 26 3 29 19 20 12 16", "PL P. 9 39 34 5 11 35 30 20 36 25 10 23 32 6 26", "I NG. 31 15 7 1 29 23 6 25 36 6 6 8 3 4 4 6 32", "Z . 6 33 27 9 1 33 19 11 28 18 37 18 31 0 38 36", " JS. 1 1 6 22 27 28 26 36 15 20 20 27 37 10 32", "PL P. 10 14 20 32 31 8 37 38 18 29 34 36 25 17", "H BVJ . 27 15 31 8 17 32 28 32 38 35 39 8 1 21", " HU. 4 5 38 24 5 29 27 33 9 21 22 24 15 34 35 7", " JS. 13 22 36 30 29 0 29 27 7 5 6 32 21 39 22 8", "I NG. 28 36 24 24 8 9 12 18 1 15 36 17 12 39 38", "Q. 32 19 1 32 0 5 26 39", "PXKBNOFS . 13 12 0 6 8 0 22 3 39 5 29 29 28 37", "TNN JX. 0 29", "DEZY. 1 28 7 34 14 35 17 17 32 25 35 18 34 4 2", " EFP.", "WAYIITTA. 29 39 15 23 16 1 25 25 6 14 20 25 23", " EFV TK. 3 29 13 2 38 37 30 11 3 12 36 1 1 10 3", "DV. 16 10 28 17 6 29 4 18 29 0 34 35 21 28 36 3", "R MYCIH H.", "H BVJ . 37 38 15 3 39 34 18 10 5 30 23 39 13 1", "GQ. 4 16 16 9 7 0 36 12 15 7 15 20", "SO. 21 39 23 9 6 39 18 14 23 3 30 37 39 22 22 8", " EMGN . 28 28 6 30 5 3 15 11 9 12 12 5 31 31 1", "RY. 34 36 32 32 11", "I NG. 7 25", "B. 37 10 11 4 16", "RY. 16 0 28 25 15 15 29 37 28 9 21 9 29 4 14 22", "RY. 32 27 24 37 18 7", "BZNUBR. 18 21 36 8 13 39 11 28 4 3 1 23 34 8 11", "UHAUEPZRV. 11 22 2 16 12 38 30 19 15 2 25 17 27", "VMO. 6", "DV. 15 39 32 25 22 25 9 9 22 6 20 6 24 20 17 9", "DF. 24 24 28 8 29 34 9 25 35 37 4 22 25 26 4 0"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" Z S", "UHAUEPZRV", "VMO", "B", "R MYCIH H", "DF", "SO", " EMGN ", " JS", "PL P", "I NG", "PXKBNOFS ", "Q", "WAYIITTA", "RY", "DV", " ATJCDG", "GQ", "H BVJ ", " EFP", " EFV TK", "BZNUBR", "DEZY", "Z ", "TNN JX", "NXINU NFQ", " HU", "Z"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> papers = {"UC.", "IR. 28 23 20 36 38 7 37 28 41 10 21 12", "JX FW SY. 39 35 9 40 13 38 43 18 24 13 1 15 7", " . 33 11 39 24 15 35 37 40 27 23 13 41 9 27 35", "WQMN. 2 27 19 2 13 24 14 39 18 17 14 24 31 12 8", "EL. 4 15 25 2 9 7 20 30 31 28 36 24 43 9 1 16 7", "D HXIV. 38 2 5 30 1 16 13 8 7 16 10 22 11 18 3", " ZBIQU. 36 27 23 43 41 41 10 40 28 17 24 43 35", "WPEPGRH. 20 31 17 9 2 39 5 24 33 40 35 42 32 40", "ZCHKYO . 3 28 39 5 26 36 43 4 21", "TMDUGSGAU. 14 1 36 12 8 43 11 0 35 40 37 7 1 24", "OGIA. 37 41 38 7 40 16 34 35 23 41 14 24 24 29", " . 9 8 40 11 3 29 30 20 30 8 39 8 9 28 11 29 24", "WPEPGRH. 24 1 33 31 23 1 0 3 16 42", "JX FW SY. 5 34 21 3 7 5 29 33 15 6 29 32 36 7", "RUPSUAT. 30 30 3 21 42 0 10 27 35 27 27 10 40 5", "UEM B. 41 21 13 0 25 6 0 12 11 33 18 1 27 30 24", "TLHZLD Z. 21 5 41 32 1 26", "JX FW SY. 7 31 14 32 12 17 32 35 15 15 15 33", "IR. 31 12 2 20 38 7 8 0 22 36 34 18 12", "D . 26 2 18 8 38 42 18 34 17 26 10 3", "IR I. 30 14 7 35 18 25 39 11 17 14 42 40 41 37", "J LM. 41 3 30 23 20 30 19 16 27 20 3 30 33 19 3", " FGXC. 1 11 25 28 16 34 19 11 7 1 4 8 15 29 5 8", " ZBIQU. 22 21 10 35 10 31 3 37 14 30 1 40 31 1", "MNZXJOCWD. 15 27 6 10 28 30 30 41 38 39 29 1 37", "XLIR KL. 31 3 29 8 39 12 24 9 19 0 13 21 42 5 8", "JX FW SY. 43", "JX FW SY. 5 24 20 21 35 31 0 22 36 33 34 18 36", "AWUFBJTHY. 33 15 40 6 22 12 11 15 43 37 24 39 6", "WPEPGRH. 8 28 9 43 32 21 21 28", "V UNGU . 6 38 29 4 19 7 1 27 10", " KGNO. 0 27 15 40 35 9 12 6 31 12 31 19 24 13", "JX FW SY. 5 41 4 9 27 40 42 18 40 36 16 14 2 3", "WQAAW. 14 17 23 30 0 8 35 32 43 11 24 36 41 37", "O CCQSHYX. 42 43 40 12 26 24 13 2 9 2 29 29 38", "XLIR KL. 22 14", " ZBIQU. 19 0 38 43", "JVTMADLE . 35 12 43 27 30 32 22 8 39 40 24 15 7", "IR. 9 41 24 12 25 36 25 28 0 18 27 30 43 43 1 2", "TMDUGSGAU. 41 18 26 5 24 36 20 12 16 41 3 20 27", "JLXVUSW. 18 35 21 27 9 16 2 16 25 8 43 30 17 35", "WPEPGRH. 13 40 14 5 0 25 17 4 29 11 25 0 21 37", "IR. 11 35 5 38 28 38 24 30 20 32 30 9 1 13 21 5"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"O CCQSHYX", " ZBIQU", "EL", "IR I", "JLXVUSW", "ZCHKYO ", " ", "UC", "TMDUGSGAU", "JVTMADLE ", "OGIA", "IR", "WPEPGRH", "RUPSUAT", "V UNGU ", "JX FW SY", "AWUFBJTHY", "D ", "TLHZLD Z", "UEM B", "XLIR KL", " KGNO", " FGXC", "J LM", "MNZXJOCWD", "D HXIV", "WQAAW", "WQMN"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> papers = {"GTXJ. 39 33 6 14 13 14 4 31 27 32 12 7 34 5 4 3", "AH. 19 29 27 49 36 22", "CHVVW . 13 30 44 25 18 48 30 5 6 0 42 33 13 32", "BSSRMHW . 32 5 27 28 39 1 23 5 49 45 7 34 10 2", "R. 18 28 33 6 31 2 1 3 13 48 0 14 1 6 46 10 15", "KB. 30 12 37", "A. 48 26 45 33 5 18 33 44 31 28 41 17 29 41 34", "IQ. 22 13 36 40", "BNEHRFP. 40", "AH. 6 23 42 36 42 49 27 31 21 44 0 19 49 30 38", "VWT. 8 30 28 3 46 18 19 43 41 29 42 43 18 29 40", "GTXJ. 1 24 1 4 12 36 34 0 47 3 25 13 32 38 47 8", "EZWKIH VX. 32 26 36 38 45 27 10 41 19 19 45 34", "O. 22 14", "R TITFJUJB. 28 27 49 36 44 44 46 6 8 41 48 49 1", "NODCFE V H. 34 25 21 11 18 21 37 49 43 30 49 13", "M. 39 31 28 29 7 30 19 37 12 11 0 33 48 6 35 2", "PVFPWMUI. 8 2 34 24 15 33 19 37", "WM. 10 24 8 7 29 35 38 33 30 43 29 33 19 17 27", "MJOC . 29 2 42 15 9 34 4 34 4 13 46", "GG. 42 0 16 48 28 45 15 24 21 29 32 43 31 48 13", "NHF. 2 8 38 26 12 22 3 7 29 7 27 10 29", " CRWQOUNR . 4 33 18 20 40 44 46", "BSSRMHW . 43 33 0 49 19 6 49 41 37 47 11 28 16", "KB. 25 1 23 42 9 34 33 37 14 4 10 44 47 21 25", "M. 0 20 19 44 10 22 29 6 10 14 16 28 45 44 40 1", "GG. 35 45 7 36 9 28 45 22 2 43 28 41 3 23 43 11", " T LWQNOKQ. 38 11 12 13 3 46 4 12 41 3 14 46 4", "UCFWEGUXHK.", "AH. 44 19 37 31 41 35 30 23 10 17 32 30 34 48 4", "JJKC. 45 36 4 11 36 29 22 27 0 14 14 38", "J AITSYMB.", "XTPRC X. 17 31 40 10 21 43 45 46 14 44 7 21 19", "NHF. 13 23 30 14 27 14 10 5 25 6 14 35 36 34 32", "UECJCGXBF. 37 33 36 6 10 48 33", "GPR. 3 29 44 41 8 45 32 12 43 22 46 23 28 15 2", "J AITSYMB. 5 4 43 37 5 0 33", "D . 24 31 1 26 33 17 38 44 21 15 17 33 47 35 8", "PVFPWMUI. 18 9 27 5 14 49", "O. 5 47 22 46 9 3 41 0 45 19 8 9 41 33 7 28 18", "GTXJ. 31 18 33 0 46 29 26 31 14 9 6 30 17 5 46", "VWT. 47 25 44 42 23 35 44 35 10 49 35 48 38 26", "NGWUTMWD . 4 43 2 9 7 27 4 8", "GG. 41 18 11 38 34 4 25 16 10 14 2 23 0 30 36 7", "MJOC . 17", "GPR. 7 31", " XO. 43 27 45 8 37 37 40 40 43 37 15 17 23 37 7", "R TITFJUJB. 31 24 35 28 31 19 36 0 40 36 24 26", "KB. 33 13 2 17 40 42 32 17 15 45 47 28 26 27 30", "O. 43 40 15 13 27 30 5 48 1 3 11 9 2 32 4 20 48"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" T LWQNOKQ", "UCFWEGUXHK", "JJKC", "MJOC ", "J AITSYMB", "CHVVW ", "IQ", "R", "UECJCGXBF", "NHF", "VWT", "A", "BNEHRFP", "XTPRC X", "GTXJ", " XO", "D ", "WM", "BSSRMHW ", "GPR", "PVFPWMUI", "R TITFJUJB", "AH", " CRWQOUNR ", "NODCFE V H", "KB", "NGWUTMWD ", "O", "GG", "EZWKIH VX", "M"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> papers = {"KBGVYUGP. 11 33 22", "FOGVRABJK. 4 35", "S. 19 29 37 8 20 29 3 8 28 15 31 9 38 14 36 34", "KBGVYUGP. 15 28 8 23 22 34 30 28 10 5 29 33 29", "R. 2 38 12 3 3 39 5 6 35 21 39 31 23 33 31 37", "SEQBWD W . 34 19 37 24 36 17 25 21 27 12 34 31", "KBGVYUGP. 23 25 0 38 0 5 33 18 27 40 34 12", " RE. 24 38 1 11 8 10 33 4", "I GU. 39 5 24 1 26 35 38 5 21 1 6 29 29 23 26", "S. 38 30 37 2 36 4 14 18 19 5 28 30 39 3 39 22", " RE. 30 12 26 14 15 32 23 33 27 23 0 23 6 31 40", "SEQBWD W . 19 23 31 0", "JVHWAHRXN. 9 31 34 14 39 2 18 40 31 30 20 13 22", "Z K. 0 28 14 32 21", "SSO R SUMV. 32 7 17 25 39 40 5 6 7 29 15 35 23", "GC. 7 10 17 18 6 20 32 18 22 25 25", "A. 39 35 9 20 29 0 9 3 17", "XRFZY SG. 11 0 23", "JVHWAHRXN. 10 25 34 24 3", " RE. 10 1 38 14 15 12 9 38 12 28", "I GU. 12 24 32 16 31 8 24 17 11 36 13 19 37 2 6", "STVP. 3 9 18 22 32 10 20 3 1 39 13 13 18 2 3 28", "KBGVYUGP. 17", "FOGVRABJK. 20 7 29 38 12 31 30 38 4 38 20 30 13", "R. 12 23 37 16 35 3 8 21 34 6 16 2 32 2 15 34", "XRFZY SG. 17 2 18 4 32 15 32 0 18 3 31 15 6 2", "FOGVRABJK. 36 17 15 30 33 12 14 12 23 21 30 36", "MDTGK. 2 17 37 6 16 17 17 39 35 17 7 6 28 31 32", "FOGVRABJK. 5 31 26 15 11 20 21 39 18 34 2 24 20", "CJBYHOP. 15 27 9 3 19 14 9 2 8 16 6 20 21 12 18", "MDTGK. 31 20 12 37 32 17 35 28 26 31 33 31 11", " RE. 38 8 36 23 40 9 10 4 5 33 19 27 10 11 15 8", " HDY. 20 29 17 28 12 9 35 27 11 20 31 39 5 27 0", "S. 28 7 11 36 10 15 11 13 3 32 3 4 28 31 0 30 2", "DOLEJ . 38 18 35 20 32 15 23 37 20", "DOLEJ . 8 15 0 21 17 34 32 28 15 15 18 21 21 15", "WYHNCNE. 1 9 5 3 16 16 4 17 16 38 24 13 7 30 13", "XRFZY SG. 1 23 0 32 23 40", "XRFZY SG. 17 24 5 7 29 15 16 34 4 39 5 17 26 18", "R. 2 13 12 30 37 4 25 12 28 9 7 26 6 40 37 32 3", " RE. 38 29 24 22 11 9 31 12 3 14 29 19 33 18 25"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" HDY", "GC", "JVHWAHRXN", "SEQBWD W ", "XRFZY SG", "S", "KBGVYUGP", "R", "DOLEJ ", "I GU", "CJBYHOP", "SSO R SUMV", "STVP", "FOGVRABJK", "MDTGK", " RE", "WYHNCNE", "Z K", "A"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> papers = {"LJS G. 10 16 45 44 10 35 26 9 22 7 15 35 13 5", "R. 24", "RVRGLU. 20 25 43 46 9 5 4 26 28 24 45 34 9 32 4", "DR . 28 36 24 40 20 42 9 4 16 39 15 23 33 36 39", "LJS G. 29 22 0 20 37 0 38 7 15 33 22 46 6 11 39", "LJS G. 7 1 27 33 40 37 21 24 39 34 43 43 7 45 4", "RVRGLU. 35 40 46 12", "R. 38 35 10 38 29 29 6 46 8 27 23 40 25 26 10 5", "VE.", "R XCO I. 2 18 32 27 15 16 0 11 46 36 45 39 32 6", " . 11 2 35 42", "RVRGLU. 2 15 5 35 13 7 16 29 23 46 27 23 40 7 1", "RVRGLU. 45 25 43 42 24 7 22 4 40 10 3 27 27 36", "XEG M . 19 37 8 29 25 0 21 40 9 10 1 4 30 44 5", " . 9 9", "R. 45 11 14 5 4 35 12 23 37 16 37 26 2 25 20 37", " . 43 22 18 10 41 13 29 21 34 26 8 34 7 32 2 43", "R XCO I. 11 32 34 4 14 7 10 15 15 5 43 19 27 6", "HGMEJMXHYS. 25 8 30 2 1 32 5 14 40 30 9 43 4 12", "XEG M . 35 17 5 40 26 26 4 39 11 44 17 35 21 36", " . 24 17 0 22 46 14 15 32 10 17 3 41 42 30 8 16", "DR . 26 27 5 33 43 26 34 28 15 45 2 46 4 19 25", "LJS G. 15 23 30 25 17 10 0 4 43 35 27 0", "R XCO I. 46 9 31 38 43 14 7 4 38 16 27 16 43 36", "ISUPSXI . 35 12 46 5 43 40 11 39 36 8 27 10 25", "R. 21 2 21 28 17 5 3 10 23 2 33 16 9 15 35 44 0", " . 30 0 19 24 32 40 7 18 18 14 35 20 18 41 40 4", "ISUPSXI . 0 15 11 37 8 31 42 26 20 43 18 42 11", "RVRGLU. 38 35 42 11 36", "R XCO I. 25 11 42 24 15 37 10 45 34 27 1 43 45", "RVRGLU. 24 41 9 29 32 23 24 22 43 33 2 7 31 39", "ISUPSXI . 38 28 23 22 6 26", "R.", "VE. 29 2 17 27 1 28 37 27 9 2 32 21 15 45 39 28", "LJS G. 31 18 36", " . 30 29 30 2 22 41 9 20 5", "R XCO I. 32 17 10 46", "R XCO I. 6 32 2 45 9 19 5 14 21 12 29 36 29 9 6", "ISUPSXI . 37 41 0 3 44 21 8", "VE. 32 27 43 14 23 32 11 5", "DR . 43 12 9 34 16 38 29 43 4 23 17 2 39 8 6 24", " . 4 13 46 1 26 32 30 38 4 11 45 14 24 11 42 6", "R XCO I. 16 26 6 19 22 37 41 4 45 33 7 26 3 4 6", "HGMEJMXHYS. 40 44 39 45 19 30 45 16 10 29 14 37", "VE. 42 37 29 36 38 43 34 26 14 37 25 22 28 46 2", "ISUPSXI . 34 44 24 43 29 1 27 26 6 14 2 4 0 41", "R. 14 4 15 41 37 36 12 6 5"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"LJS G", "R", "HGMEJMXHYS", "R XCO I", "ISUPSXI ", "RVRGLU", " ", "VE", "DR ", "XEG M "};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> papers = {"ZQYF SA N. 25 23 19 27 5 1 5 29 18 21 9 23 40 1", " . 40 16 44 28 45", "XWP. 7 44 26 1 29 9 3 18 45 35 6 15 29 29 0 14", "K FGGSDOON. 8 20 20 42 35 14 45 40 21 7 0 6 10", "EQYH M . 38 2 25 14 30 46 10 17 16 27 45 23 9", "J. 7 7 40 25 6 16 37 44 4 17 3 22 29 15 14 44 2", "BR . 41 31 39 40 31 40 19", "EP. 27 17 10 10 22 18 31 43 25 32 24 22 26 14", "PO . 5 2 10 42 0 11 10 28 31 19 46 37 23 36 30", "T MCTAOR. 24 15 22 15 36 40 19 11 12 15 36 1 28", "U. 1 30 4 44 46 21 22 24 42 1 38 30 15 6 22 26", "K FGGSDOON. 37 1 21 36 28", "HLN. 31 11 17 28 34 15 22 26 16 0 21 13 40 14", "XWP. 42 27 4 15 17 7 12 32 39 6 0 9 46 21 19 24", "ZQYF SA N. 42 26 37 36 37 41 40 18", "B. 40 37 5 44 32 44 12 4 29 33 12 32 26 21 23", " . 26 33 21 19 25 11 20 11 8 0 12 9 12 40 14 1", " . 6 16 33 42 15 29 13 37 20 24 34 22 33 33 36", "XWP. 34 14 10 6 5 3", "EQYH M . 38 40 22 39 16 46 32 16 41 35 22 39", "MHBPB. 35 39 16 41 34 8 9 17 45 37 30 12 40 21", " ZHJ R . 19 14 12 40 37 44 6 22 41 0 5 19 17 1", "K FGGSDOON. 27 23 24 27 21 34 38 43 34 17 35 24", "T MCTAOR. 29 4 34 15 40 1 15 5 43 28 27 43 18", "XWP. 43 2 19 42 35 41 3 46", "PO . 45 27 18 41 38", "XWP. 17 6 40 45 37 17 18 18 20 7 29 2 35 7 19 9", " ZHJ R . 28 15 25 4 6 15 5 0 21 37 13 6 41 28", "PO . 44 14 24 5 7 5 23 35 0 13 4 3 14 13 38 3 4", " ZHJ R . 8 43 26 42 8 15 46 28 27 1 33 21 37", "EP. 24 13 20 13 9 23 7 23 2 21 28 22 13 39 5 45", "ML N GL. 11 35 3 1 12 18 33 28 25 8 13 14 8 4 3", "B. 11", "U. 15 18 3 44 20 38 29 29", " . 4 0 35 18 24", "T MCTAOR. 42 13 37 13 30 39 29 3", "ML N GL. 3 8 3 46 38 25 17 17 7 32 30 43 29 30", "ZQYF SA N. 31", "EP. 36 31 0 15 46 14 18 17 41 24 40 42 43 22 5", "PO . 15 5 26 33 36 13 41 26 27 33", "U. 46 27 38 20 24 39 35 25 29 21 42 41 24 15 8", "T MCTAOR. 26 2 38 40 34 42 26 45 40 11 31 0 32", "ML N GL. 13 15 37 19 30 1 28 36 46 7 33 26 43 2", "PO . 22 0 24 14", "EP. 1 32 42 29 3 31 46 46 24 20", "PO . 11 23 19 4 12 5", "PO . 28 42 17 16 3 26 28 23 28 44 43 29"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ZQYF SA N", "J", " ZHJ R ", "B", "EQYH M ", "K FGGSDOON", "BR ", "T MCTAOR", "ML N GL", "U", "XWP", " ", "PO ", "EP", "HLN", "MHBPB"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> papers = {" WF. 15 4 45 37 4 41 13 8 41 24 44 32 26 43 4 1", "X. 3 26 14 34 19 4 24 33 2 32 42 2 33 39 10 27", " WF. 10 23 45 10 27 15 22 26 42 6 42 13 33 12 9", " QZX . 4 0 25 5 38 44", " QR SCHX.", "N. 31 46 46 27 43 31 32 44 24 19 15 30 25 33 24", " QR SCHX. 31 22 2 39 40 34 24 1 13 34 38 42 18", "BJI. 22 17 2 35 16 14 18 25 17 8 13 25 4 35", "WGBLNWS. 43 9 5 11 24 43 21 2 14 34 7 37 40 21", "N. 3 33 22 17 0", "QNP V. 27 2 13 43 1 4 7 30 20 4 34 4 38 31 29", "FOU. 36 41 30 31 37 34 1 33 41 4 16 6 27 29 23", "BJI. 43 3 1 15 3 17 13 40 18 3 39 0 15 43 27 3", "BJI. 21 35 31 46 4 27 45 36 40 43 10 26 21 36", "X. 12 3 39 29 33 12 6 43 19 32 3 20 23 3 30 9", " QZX . 30 36 5 39 16 46 41 6 9 23 45 33 31 26 7", "N. 10 26 35 34 15 11 33 46 33 36 28 8 40 3 20 7", " QR SCHX. 35 23 37 21 27 36 46 32 1 40 31 43 5", " QR SCHX. 44 15 10 36 46 39", "S. 31", "EFMSP. 12 7 17 40 24 39 26 46 8", "H JA. 24 25 14 10 3 46 34 17 32 6 2 19 37 4 34", "BX . 4 4 2 1 20 27 8 46 23 21 15 10 40 4 42 0 4", "S. 12 5 45 42 4 3 4 13 30 11 14 19 18 31 43 31", "H. 1 28 15 26 43 18 36 35 20 31 23 8 16 26 11 1", "GWUMOIBWU. 0 33 44 11 18 15 37 28 9 39 23 44 17", "S. 9 28 2 3 41 35", "UVYW F. 37 19 43 20 29 29 1 12 34 32 18 30 36", "T LNBDJXLN. 15 11 30 41 12 44 21 46", "CXGHKKCKQ. 27 22 14 35 46 43 0 35 27 4 24 39 24", "QKG. 23 43 38 16 3 32 26 5 25 45 18 10 13 11 21", "QKG. 35 36 13 22 23 13 41 18 0 39 16 25 11", "T LNBDJXLN. 22 26 19 23 1 26 44 34 1 27 40 20 6", "MNJB WLV. 11 43 35 24 40 46 37 5 13 37 13 8 7", "H JA. 25 38 17 46 14 36 29 22 27 24 29 46 43 30", "CXGHKKCKQ. 41 29 0 20 39 18 29 18 33 1 44 2 38", "R. 26 43 8 1 44 4 8 28 8 2 2 46 45 45 3 17 22 5", "H. 32 10 33 8 25 30 20 27 6 16 9 14 18 8 11 39", "TNJVFNBBLD. 15 23 29 13 13 34 20 27 29 33 2 36", "GUEOH. 0 10 1 0 24 1 7 0 26 18 12 10 42 43 37 1", " QR SCHX. 15 27 33 32 16 35 13 23 20", "EFMSP. 5 27 38 16 28 32 27 40 8 8 46 20 12 7 35", "NLNFYJTFEM. 33 22 21 32 23 2 30 35 16 13 5 17 8", "H JA. 28 3 38 40 15 32 27 37 14 34 9 26 26 7 30", "S. 19", "S. 7 34 39 42 41 29 32 46 42 26 3 39 7 12 14 41", "H JA. 13 35 14 38 38 3 7 18 3 32 27 13 25 43 12"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"UVYW F", "MNJB WLV", " QZX ", "GUEOH", "H JA", "X", "BJI", "QKG", "T LNBDJXLN", "R", "WGBLNWS", " WF", "H", " QR SCHX", "BX ", "FOU", "QNP V", "S", "CXGHKKCKQ", "EFMSP", "N", "GWUMOIBWU", "TNJVFNBBLD", "NLNFYJTFEM"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> papers = {"PBD. 15 34 36 24 2 34 35 45 6 27 40 26 30 38 7", " OVECXCHYW. 29 20 27 35 27 22 37 41 19 34 42 24", "DZMLFL. 1 0 0 42 12 41 21 32 38 14 33 33 17 34", "ZBU. 16 9 44 9", " XR J. 5 3 41 11 26 37 9 38 12 40 41 23 29 33", " OVECXCHYW. 7 12 17 40 6 39 38 3 35 32 24 31 31", "F PI. 29 22 28 33 26 33 34 44 14 2 42 1 40 26 0", "PBD. 10 26 21 42 2 26 3 9 44 44 35 4 5 43 23", "ZBU. 14 32 14 12 15 36 6 18 21 30 26 30 4 41 27", " XR J. 6 0 42 34 10 0 15 22 37 43 23 29 23 2 26", " XR J. 22 31 28 37 8 30 44 12 4 11 5 6 23 15 20", " OVECXCHYW. 9 27 39 30 25 7 34 26 34", " OVECXCHYW. 8 45 19 36 42 27 44 27 18 42 23", " OVECXCHYW. 7 33 20 35 18 39 30 29 38 0 0 0 37", "ZBU. 17 45 43 44 1 35 19 8 16 33 0 25 29 44 36", "F PI. 28 31 0 14 20 0 12 45 20 6 13 42 25 42 8", "F PI. 32 13 0 32 38 22 43 3 41 42 3 43 15 40", "W VITV. 30 15 26 9 22 35 0 34 23 37 44 38 1 45", "ZBU. 35 5 22 9 0 26 17 12 7 6 19 33 33", " XR J. 31 15 2 23 7 21 35 13 37 43 33 0 32 34 2", "PBD. 33 27 21 41 38 1 26 1 32 44 39 23 21 42 33", "DZMLFL. 17 0 5 31 9 11 32 4 44 29 41 15 38 11 3", " XR J. 15 37 24 27 39 12 42 1 15 10 45 9 11 18", " OVECXCHYW. 9 14 30 39 39 38 5 26 41 11 34 41", " XR J. 8 13 33 33 44 1 27 44 45 44 39 14 16 31", "W VITV. 32 41 24 18 26 22 13 13 43 3 16 35 37", " OVECXCHYW. 1 34", "PBD. 23 25 11 5 22 21 10 31 38 34 14 33 26 34 5", "W VITV. 30 29 10 29 45", "DZMLFL. 14 44 14 21 3 14 42 8 2 27 36 41 39 24", "PBD. 20 45 5 11 36 16 5 39 27 11 21 13 40 31 41", "PBD. 26 21 17 23 33 25 11 32 8 6 32 40 21 27 45", "DZMLFL. 39 37 27 5 43 10 30 13 36 34 6 15 12 35", "PBD. 18 25 15 28 2 15 14 1 44 20 39 12 31 37 35", " XR J. 1 12 1 7 4 32 11 16 1 8 38 21 29 6 13 25", "W VITV. 43 36 15 45 37 25 42 5 15 34 5 28 2 5", "DZMLFL. 6 16 7 27 32 8 14 40 15 21 37 32 2 31 8", "ZBU. 36 21 16 12 35 19 38 19 45 26 16 41 11 31", "F PI. 40 5 45 30 39 32 31 40 44 0 16 41 36 6 22", "F PI. 22 42 33 38 15 19 18 42 14 11 6 45 31 37", " OVECXCHYW. 39 1 30 3 25 27 31 30 9 44 10 22 23", " XR J. 5 45 22 39 10 23 44 28 17 13 4 28", "PBD. 19 11 28 30 6 36 32 17 3 23 24 14 45 14 22", "DZMLFL. 3 14 15 45 29 38 44 24 17 32 25 28 38 0", " XR J. 20 19 4 43 20 45 23 39 34 37 23 43 38 24", " OVECXCHYW. 10 6 43 11 16 4 40 12 4"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"F PI", " OVECXCHYW", "ZBU", "PBD", "W VITV", " XR J", "DZMLFL"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> papers = {"Y. 42 30 38 24 9 48 35 10 35 26 8 48 35 27 38", "CVASU A . 16 43 12 18 38 45 41 41 41 42 47 4 45", "CG C FZ. 15 26 35 12 1 8 11 32 37 24 26 35 37 9", "ANA LL. 38 45 27 40 42 27 39 42 43 48 9 11 12", "PKLBQ. 43 26 21 17 17 37 23 39 16 31 28 28 15 0", "HWKDQQVOI. 14 30 1 39 22 8 45 10 18 27 27 37 6", "PKLBQ. 7 47 25 11 10 43 46 48 4 0 9 45 11 9 21", "SPPTNIH. 9 28 26 43 34 6 39 3 2 47 28 2 44 26 3", "HWKDQQVOI. 25", " IH. 1 44 23 31 30 44", "Q. 38 24 46 12 20 31 32 8 31 36 22 34 18 45 17", "ANA LL. 0 16 0 2 18 35 41 19 15 2 3 1 6 45 35 5", "SPPTNIH. 5 47 6", " IH. 24 29 29 25 48 37 44 19", "E. 3 47 17 3 41 6 11 20 45 47 30 19 35 21 16 28", "E. 32 5 20 6 18 12 31 34 46", "CE Z. 4 15 8 24 23 20 3 10 1 28 21 39 35 14 44", "CE Z. 40 22 43 9 29 33 7 20 43 9 43 20 28 6 10", "UX AQ. 44 16 7 30 17 6 43 16 35 4 46 0 4 22 4 0", "CG C FZ. 21 28 40 29 21 48 48 39 24 7 30 28 40", "CG C FZ. 28 43 42 45 30 48 46 32", "ZCFLI. 6 47 45 48 34 42 36 40 45 42 10 30 17 1", "E. 28 11 39 42 14 8 43 10 34 48 18 14 26 0 44 9", "SPPTNIH. 22 40 20 24 46 32 26 10 37 5 7 15 20", "CE Z. 16 28 23 19 41 8 46 19 28 39 6 48 28 28 3", "BXOMU. 16 2 6 27 46 2 7 28 8 40 6 3 33 31 45 10", " EJ. 27 0 33 16 44 41 31 33 29 5 9 45 5 40 22 4", "HWKDQQVOI. 6 11 25 45 44 0 44 12 11 12 48 38 41", "CVASU A . 20 24 38 15 6 43 34 3 26 19 8 41", "FABMZQRD. 3 26 46 30 23 25 23 9 43 42 46 10 37", " IH. 7 42 46 4 0 0 36 8", "ANA LL. 23 25 0 7 20 33 20 27 37 36 32 48 44 14", "CVASU A . 20 20 24 39 41 39", "X. 4 6 15 30 16 16 25 43 40 27 13 27 9 44 3 14", "E. 18 41 4 18 40 27 27 4 6 33 31 47 31 21 2 37", "UX AQ. 40 45 30 39 39 21 46 16 7 8 14 22 15 32", " EJ. 37 40 18 28 34 20 24 24 22 38 45 17 17 44", "FABMZQRD. 26 35 2 15 36 36 35 41 16 39 4 48 44", " IH. 5", "CG C FZ.", "Y. 45 48 11 29 21 37 17 7 36 32 48 17 8 35 25 8", " EJ. 0 24 29 36 45 48 5 24 11 0 9 42 23 26 40 6", " EJ. 18 22 16 16 11 45 34 17 35 26 31 43 10 21", " IH. 16 21 47 33 39 46 31 6 8 24 14 14 23 3 10", "Y. 35 5 41 16 23 15 37 30 18 17 38 7 10 13", "EH HZXN. 47 44 23 11 46 24 0 34 13 8 3 10 6 40", "X. 8 20 1 5 41 11 24 16 17", "CE Z. 22 17 19 40 19 42 15 44 27 14 41 39 44 18", " IH. 36 47 34 25 30 22 43 40 33 4 37 10"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"EH HZXN", "Q", "PKLBQ", "Y", "CE Z", "HWKDQQVOI", "UX AQ", "X", "ZCFLI", " IH", "ANA LL", " EJ", "E", "BXOMU", "CVASU A ", "SPPTNIH", "CG C FZ", "FABMZQRD"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> papers = {"WJJ. 29 43 21 1 30 33 24 14", "AB. 16 31 3 30 37 7 43 41 22 14 31 3 28 5 15 29", "GOXU. 45 38 4 35 1 19 23 0 16 46 9 21 32 41 7 3", "F. 13 38 45 30", "OREHCZX. 42 30 19 12 8 29 44 38 35 38 21 32 29", "WQTGD J. 8 11 26", "X. 3 7", " . 32 33 9 3 28 24 18 22 16 38 28 21 46 33 4 18", "K XY YHQF. 42 15 43 1 12 43 35 47 13 10 18 12 3", " DPJQK. 34 12 8 30 11 45 15 39 11 19 42 26 17 7", "OREHCZX. 0 41 35 42 11 27 6 30 38 11 16 25 36 3", "DKVZQTYZMG. 42 15 3 5 6 27 5 47 31 1 12 10 8 42", "KAVO. 22 28 10 34 25 36 10 17 28 19 20 37 19 27", "FLZP. 45 16 3 0 5 27 17 11 28 17 4 39 40", "RKJZRJVM . 34 11 9 10 37 35 8 10 17 4 0 39 45 8", "EF. 5 7 12 42 46 14 5 44 22 17 23 23 42 33 38 5", "K XY YHQF. 39 36 37 6 36 12 6 41 5 24 43 32 42", " DPJQK. 1 44 9 0 15 13 36 0 7 30 7 19 6 37 39 7", "FLZP. 21 28 30 21 37 47 10 33 46 6", "X. 33 27 23 45 36 7 39 17 44 26 18 40 43 33 47", "SR. 44 2 27 37 41 32 44 18 47 28 14 1 28 36 42", "UBT C. 37 30 33 35 15 0 11 39 47 18 6 37 37 13", "CK QHN KI. 8 15 32 26 21 17 1 2 9 28 38 41 25", " E. 24 17 46 35 5 14 41 17 35 33 13 6 25 29 11", "AB. 35 46 2 21 26 33 28 20 28 5 25 30 31", " DPJQK. 12 34 36 7 23 35 41 28 43 38 20 23 26 6", "TKOAUYO. 20 36 35 28 35 3 27 9 39 39 27 32 47 1", "GCSEX. 22 13 9 9 45 20 21 46 4 20 38 13 5 45 39", "PAB. 47 41 38 14 12 12 31 37 24 46 15 20 16 42", "V. 22 11 0 39 7 20 4 45 37 8 6 47 25 38 17 9 18", "G. 7 41 18 24 17 18 16 38 12 38 13 40 12 5 42 8", "PPJFBQM. 29 35 41 0 28 8 32 33 18 13 1 3 41 5 7", "WJJ. 22 44 18 33 40 6 28 0 16 7 40 3 8 45 39 44", "S. 24 37 45 14 28 4 44 27 39 30 21 46 13 42 3 0", "GOXU. 42 43 2 24 15 30 6 11 6 3 45 27 25 42 18", "UBT C. 4 33 10 6 0 22 26 24 42 17 15 2 37 39 34", "S. 16 9 44 33 15 23 21", " EGBPS. 41 4 29 43 22 5 15 42 44 46 43 24 14 13", "VSWHEEI. 37 0 25 46 27 36 21 18 17 25 1 21 24 2", "EF. 17 28 0 28 18 11 18 46 22 27 11 33 44 25 28", "GOXU. 11 0 15 37 47 42 37 44 2 32 4 37 15 4 21", "DKVZQTYZMG. 34 37 40 23 25 25 24 12 13 39 34 32", " . 28 29 27 29 19 43 37 31 2 46 15 29 3 7 20 24", "TKOAUYO. 45 8 37 15 37 45 28 5 12 33 34 4 46", " VLJLJHMW. 11 5 11 6 20 35 18 41 7 14 5 32 26 5", "X. 25 32 44 34 37 32 41 30 42 44 28 36 25 17 30", "SR. 16 29 14 41 15 44 39 8 3 20 11", "F. 13 42 30 18 30 20 26 28 21 30 27 6 1 1 6 15"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {" EGBPS", "PAB", "EF", " ", "DKVZQTYZMG", "G", "FLZP", " VLJLJHMW", "GCSEX", "WQTGD J", "F", "WJJ", "AB", "SR", "UBT C", "VSWHEEI", "S", "K XY YHQF", "KAVO", " DPJQK", "X", "CK QHN KI", "RKJZRJVM ", "TKOAUYO", "OREHCZX", "V", "GOXU", " E", "PPJFBQM"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> papers = {"MYMZ. 14 28 40 46 38 23 15 8 37 2 26 1 28 4", "OMJZ. 35 14 45 21 10 5", "E. 23 40 40 5 7 27 11 8 23 43 6 29 29 46 48 26", "WWDN. 10 5 1 10 33 9 42 48 5 44 6 31 1 26 46 5", "F SFJR. 38 24 3 9 27 46 44 11 30 30 15 6 23 47", "KLNYBNYHSV. 30 31 23 39 38 37 48 19 29 39 9 7 4", "MO SS. 23 31 44 38 13 27 41 29 48 1 24 21 19 13", "VQCZL. 36 31 4 34 16 33 25 37 15 40 31 6 4 3 44", "MO SS. 11 29 9 23 41 11 15 43 3 18 41", "E. 19 41 6 0 28 12 34 0 40 28 31 32 26 33 11 31", "FLLPUHMTFL. 44 48 36 29 36 38 12", "HOAWA. 8 3 23 27 38 17 38 21 18 41 39 41 26 17", "NIJSFCSA. 46 47 28 29 14 7 45 29 44", "F SFJR. 12 38 2 12 7 26 2 47 43 19 31 9 46 14 2", "VQCZL. 27 16 17 23 15 1 26 2 23 36 13 10 3 10", "MO SS. 6 27 17 22 34 13 2 48 35 29 29 41 21 45", "JNJL. 43 3 35 18 4 4 25 32 0 1 24 7 44 2 34 9 6", "KLNYBNYHSV. 11 0 3 40 35 2 18 35 47", "I. 5 28 14 9 39 32 17 7 21 48 38 2 44 9 33 19 4", "MYMZ. 17 25 26 25 20 13 24 44 14 30 31 10 10 38", "IQGH . 2 48 48 29 44 43 44 38 25 22 26 18 37 11", "FLLPUHMTFL. 24", "Z. 21 9", "IQGH . 5 20 12 36 36 34 29 44 17 19 31 38 40", "HOAWA. 2 16 43 46 43 21 23 23 43 10 33 4 21 35", " . 26 13 8 11 26 34 45 47 10 21 21", "Z. 19 48 23 24 24 27 32 48 32 31 13 19 18 41 39", "VQCZL. 24 43 42 20 41 29 11 45 42 12 47 4 11 14", "OMJZ. 38 48 25 37 18 4 34 34 44 2 15 10 8 8 16", "OMJZ. 16 42 39 19 26 33 47 5 14 26 35 48 23 10", "MO SS. 6 43 20 44 34 33 16 17 45 1 23 14 28 48", "F SFJR. 43 40 44", "Y QGF. 2 7 35 0 33 1 48 39 39 34 41 8 37 36 23", " . 17 34 6 43 20 2 25 9 20 32 23 10 25 6 19 34", "WWDN. 43 48 21 36 44 0 48 13 46 0 22 37 39 12 4", "Z. 33 46 2 29 27 23 9 40 12 48 34 47 41 0 22 42", "TMEH. 47 8 14 17 7 16 38 32 8 41 34 42 5 4 10 6", "JNJL. 45 12 4 9 31 23", "I. 9 0 16 26 19 29 11 17 8", "HOAWA. 30 29 44 48 45 8", "YGWYYMH D. 48", "E. 48 45 28 6 27 2 15 6 22 26 5 22 38 30 14 43", "F SFJR. 27 37 28 33 22 26 2 12 35 31 44 18 0 26", "VQCZL. 32 10 14 9 34 28 35 36 17 18 33 27 37 45", " . 7 16 1 26 24 22 43 8 37 29 26 31 11 15", "PIOOVKYV. 3 16 7 24 34 5 31 11 11 1 43 33 34 13", " . 12 39 36 24 13 39 44 13 37 37 17 16 9 8 2 26", "Y QGF.", "TMEH. 5 4 14 5 26 17 28 31 5 37 20 14 25 3 19 7"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"TMEH", "E", "JNJL", "KLNYBNYHSV", "WWDN", " ", "VQCZL", "I", "OMJZ", "Z", "IQGH ", "FLLPUHMTFL", "NIJSFCSA", "PIOOVKYV", "F SFJR", "MYMZ", "HOAWA", "MO SS", "Y QGF", "YGWYYMH D"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> papers = {"AKVPDND . 14 12 16 14 7 3 17 5 4 16 25 15 27 1", "AKVPDND . 21 20 2 30 8 13 33 36 29 11 24 15 42", "OEG HEMOD. 25", "Y R. 17 28 23 15 4 22 27 19 30 29 4 41 27 29 9", "MVGXPRQTZ. 36 39 20 29 13 18 8 5 27 29 34 24 1", "WWMRNSE S. 30 19 41 9 11 28 8 42 18 6 34 38 32", "JJREPUNU. 2 31 1 10 4 43 41 40 9 42 7 38 43 29", "MVGXPRQTZ. 40 23 26 23 0 0 4 18 23 27 33 42 21", "ITWY FW. 1 14 18 23 31 20 28 11 9 16 1 42 34 12", "MVGXPRQTZ. 15 27 13 11 21 42 14 23 10 25 41 11", "FM . 37 43 26 11 39 19 41 4 23 32 33 4 24 14 25", "EDYP IKE. 28 10 32 24 7 35 19 7 12 31 44 10 1 6", "TTCT. 3 32 36 15 18 27 35 27 32 21 4", "AL. 7 5 12 30 14 1 34 16 36 25 43 41 38 41 27 4", "IYZ CKX YE. 6 32 30 20 0 40 15 22 10 40 4 18 11", "J . 31 20 24 16 21 31 5 36", "IYZ CKX YE.", "TTCT. 21 39 42 3 11 7 4 30 36 31 42 21 14 29 39", "IYZ CKX YE. 32 44 3 42 10 39 34 11 36 27 13 26", "AKVPDND . 44 39 12 27 27 26 6 11 7 17 14 43 25", "OEG HEMOD. 16 5 26", "YNI . 29 25 41 9 34 15 4 20 4 42 22 14 11 17 25", "AKVPDND . 21 30 8 30 33 25 35 19 23 24 11 15 9", "B. 15 25 29 37 16 35 17 42 22 9 7 38 41 17 34 1", "YNI . 32 11 11 16 6 36 32 18 9 21 17 4 38 18 8", "JJREPUNU. 15 22 44 29 43 22 13 41", "NBLGIJ. 16 21 32 25 8 42 13 25 35 4 36 14 1 25", " JFYYWVK. 34 18 35 43 6 2 40 7 35 13 3 38 37 38", "ELN GGLA. 3 4 2 15 18 29 27 8 30", "UX WTAW. 23 15 10 16 13 4 25 1 28 44 28 5 9 38", "JJREPUNU. 1 20 6 27 24", "ELN GGLA. 15 38 42 18 37 0 27 5 35 22 18 14 14", "YNI . 22 23 40 27 5 6 35 29 9 20 36 40 20 39 0", "ME. 19 35 26 43 18 42 24 38 7 11 21 29 17 17 15", "Y R. 33 0 43 43 29 27 32 5 35 40 0 7 27 0 6 36", "EDYP IKE. 39 26 33 19 14 0 17 1 30 8 24 13 1 30", "UX WTAW. 25 38 2 17 30 33 9 10 30 27 41 31 19 9", "Y R. 41 10 35 43 42 1 19 23 30 26 20 44 41 6 35", "NBLGIJ. 25 13 32 13 28 8 37 23 9 15 13 39 10 12", "JJREPUNU. 42 11 43 18 6 36 32 44 7 10 23 29 25", "IYZ CKX YE. 6 7 20 11 14 0 3 21 6 26 26 13 8 30", "ME. 2 17 26 28 3 9 17 12 40 18 29 3 9 18 22", "JJREPUNU. 33 4 21 38 0 0 10 33 4", "MVGXPRQTZ. 1 40 12 35 31 22 8 37 37 19 24 3 42", "ME. 1 28 6 15 10 28 16 1 34 6 37 31 23 11 10 38"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"J ", " JFYYWVK", "EDYP IKE", "UX WTAW", "MVGXPRQTZ", "B", "FM ", "JJREPUNU", "NBLGIJ", "AL", "ITWY FW", "YNI ", "IYZ CKX YE", "AKVPDND ", "TTCT", "WWMRNSE S", "ME", "Y R", "ELN GGLA", "OEG HEMOD"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> papers = {"FRNETHUYSR. 15 12 23 26 2 1 20 3 11 32 1 22 22", "JLOE. 34 33 0 25 12 16 24 23 12 28 11 25 8 11", "HPAXI VOH. 35 10 25 22 32 6 5 4 37 20 28 20 0 7", "U RLAQ. 24 29 37 6 7 5 31 5 27 11 26 21 2 24 11", "FRNETHUYSR. 24 38 35 8 35 28 18 34 1 21 21 26 3", "GXJMJ. 6 7 2 14 20 38 11 7 33 39", "Q NME. 29 26 26 22 7 35 21 19 27 25 31 34 22 4", "LBQIVPY. 16 27 25 29 31", "HPAXI VOH. 38 7 9 33 39 27 29 19 31 15 12 7 15", "FM PLJIU. 0 28 21 31 21 3 5 10 21 30 16 26 26", "FRNETHUYSR. 26 31 9 7 39 38 37 39 0 19 19 20 28", "HPAXI VOH. 37 8 13 3 3 22 37 12 30 21 18 5 39", "Q NME. 5 11 19 18 3 37 10 13 3 29 13 23 1 23 13", "LBQIVPY. 26 17 36 32 25 5 21 17 34 30 3 5 16 2", "U RLAQ. 32 10 38 22 11 5 13 0 34 34 5 3 5 9 31", "FM PLJIU. 23 27 9 19 25 20 27 17 6 26 24 37 2", "HPAXI VOH. 30 10 31 37 24 2 23 24 21 24 1 9 4 7", "Q NME. 36 18 24 20 29 5 39 16 32 39 14 39 8 27", "LBQIVPY. 16 27 11 9 2 15 14 17 15 14 9 19 1 30", "FRNETHUYSR. 25 13 9 5 16 13 18 21 18 36 10", " QDTL. 34 14 22 31 28 12 28 36 8 28 6 4 21 4 17", "FM PLJIU. 16 1 36 2 14 34 29 31 7 25 6 20 18 0", "JLOE. 18 19 30 31 5 26 33 32 29 11 28 37 37 35", "HPAXI VOH. 29 13 34 34 3 1 32 22 3 37 27 9 34 9", "U RLAQ. 2 4 18 18 23 36 32 11 37 5 8 26", "Q NME. 20 7 15 24 34 26 5 14 31 16 37 3 6 7 36", "HPAXI VOH. 3 33 5 20 38 25 17 4 10 28 4 9 12 31", "HPAXI VOH. 23 13 34 34 23 12 19 16 10 36 4 17 5", "GXJMJ. 3 12", "GXJMJ. 8 1 35 33 6 24 37 36 11 17 4 8 22 35 10", "FM PLJIU. 9 33", "HPAXI VOH. 32 11 2 15 34 38 26 23 38 29 20 32 7", "HPAXI VOH. 29 7 39 23 2 12 36 24 33 22 2 3 30 1", "HPAXI VOH. 31 11 36 36 39 3 6 0 11", "HPAXI VOH. 6 15 30 28 22 15 14 6 17 29 37 24 37", "Q NME. 4 32 34 25 15 36 27 10 10 30 13", "HPAXI VOH. 23 12 13 20 27 35 24 38 13 34 26 1 2", "U RLAQ. 3 9 26 18 35 39 16 16 16 27 1 22 27 9 0", "U RLAQ. 10 13 13 37 23 27 8 1 22 7 18 27 0 16 9", "GXJMJ. 36 18 34 1 12 20 18 33 18 21 23 10 26 19"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JLOE", " QDTL", "LBQIVPY", "GXJMJ", "U RLAQ", "HPAXI VOH", "FRNETHUYSR", "FM PLJIU", "Q NME"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> papers = {"ATE . 5 20 20 39 35 21 32 34 36 2 28 28 7 2 7 9", "P L C QMD. 26 38 14 36 16 13 11 33 9 5 14 3 19", " ZR . 9 19 19 21 9 9 11 39 37 15 11 0 7 12 40 6", "SOVZJGP K. 38 7 4 12 33 6 18 19 32 26 21 17 4", "ATE . 11 9 2 14 34 29 33 10 39 16 38 17 5 21 9", "WDFFWMQTBS. 15 30 15 21 36 21 7 30 20 17 9 39 0", "FR. 33 32 39 40 26 37 16 36", "P L C QMD. 16 14 27 30 18 23 5 1 28 23 34 39 31", "K YJ. 32 19 9 3", "PR. 4 15 32 2 39 5 25 29 15 20 3 38 29 39 11 15", "RQJYCK N. 37 29 9 35", "XGLJMUKLJL. 28 14 33 4 36 25 22 21 3 37 30 5 28", "Z.", "USEMVEH. 0 15 21 32 7 31 35 40 11 9 21 7 25 40", "HQ HTVPQO. 10 3 11 19 39 18", "PR.", "WDFFWMQTBS. 17 9 25 23 1 34 13 14 24 12 12 38 3", "SOVZJGP K. 4 29 37 29 31 13 28 0 23 23 27 7 22", "PR. 37 12 16 35", "MGFR. 39 30 40 17 22 38 37", "HS. 25", " . 10 20 31 16 23 19", " ZVMSY. 37 3 19 14 32 2 32 33 16 5 28 35 35 33", "WDFFWMQTBS. 26 13 39 9", " . 10 38 19 26 4 17 3 34 40 19 3 28 4 27 27 13", "GCNOQT. 7 3 21 30 29 6 14 7 15 6 5 7", "P L C QMD. 21 7 39 16 15 28 1 36 36 4 23 35 25", "L UNMC. 7 36", "HS. 15 26 8 36 21 15 23 15 40 24 30 31", "VYU. 7 7 27 8 8 4 34 33 14 26 38 2 6 14 3 16 9", "ZQBZI. 36 33 28 0 17 9 11 21 37 8 14 25 33 31 2", "U. 14 2 5", "RQJYCK N. 19 36 35 12 40 24 9 33 37 31 13 2 23", "HS. 11 35 10 24 16 40 28 1 16", "MDDA. 20 8 24 27 39 36", "MGFR. 27 21 1 13 2 9 37 30 28 38 21", "GCNOQT. 14 26 18 9 12 14 12 14 6 8 33 8 9 30 29", "HQ HTVPQO. 30 13 1 17 39 0 21 4 16 28 12 12 7 1", "USEMVEH. 15 30 11 34 23 7 25 30 20 6 22 20 35 1", "PR.", "K YJ. 19 8 0 9 22 17 0 15 33 1 17 33 20 14 0 30"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HQ HTVPQO", "ZQBZI", "PR", "GCNOQT", "MGFR", "HS", "WDFFWMQTBS", " ", "SOVZJGP K", " ZR ", "XGLJMUKLJL", "USEMVEH", "P L C QMD", "ATE ", "MDDA", "U", "Z", "K YJ", "RQJYCK N", "FR", "L UNMC", "VYU", " ZVMSY"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> papers = {"DYUW. 3 36 12 2 32 20 18 35 4 15 2 19 33 26 30", "FRT A . 21 39 8 11 35 28 14 16 7 3 11 9 18 33 7", "FOP AVH . 34 22 36 0 37 30 14 29 26 8 6 27 23", "M. 32 17 34 16 20 22 1 17 20 4 29 35 21 38 22 2", "NLM. 23 16 8 3 36 15 19 0 16 18 31 31 18 20 0", "FRT A . 9 14 39 11 10 23 4 16 18 31 6 12 13 13", "ZUI. 30 35 5 24 19", "WP. 18 3 33 25 22 36 8 22 27 33", "NLM. 37 20 34 16 29 35 18 34 24 10 35 25 18", "RZHN. 33 12 10 17 37 11 24 24 17", " VKAQZ. 39 22 20 28 2 12 1 23 38 2 34 35", "XL KU.", "EFBBKXTVAE. 22 18 26 15 16 29 31 19 32 9 30 6", "WP. 6 19 7 6 34 37 23 30 18 24 24 34 19 2 19 27", "M. 28 20 8 34 2 5 13 39 2 39 23 38 9 29 15 37 2", "AVRXADOZRS. 28 7 20 21 24 26 34 30 4 21 2 8 21", "M CNEC. 7 14 7 31 12 39 23 2 38 19 17 19 20 36", "AVRXADOZRS. 9 5 23 35 32 9 21 25 26 2 21 25 21", "FJN. 7 11 35 5 37 3 4 15 10 8 5 25 11 26 13 23", "FOP AVH . 16 10 16 25 29 23 11 36 9 24 15 6 31", "QPVOZ. 17 32 39 13 2 4 0 5 3 38 21 5 17 1 30 25", "WSVRFCPH . 7 38 23 30 30 29 11 32 10 37 26 32", "MLWX. 35 25 11 3 25 12 0 20 38 27 11 15 14 14 2", "IUBCUKJTNX. 19 34 28 13 18 3 18 27", " U EV. 22 28 5 29 32 19 36 29 6 25 17 12 18 18", " CPHX. 12 39 14 27 8 29 14 23 26 32 12 21 2", "RZHN. 15 29 33 33 9 24 36 17 16 23 30 32 25 8 9", "FJN. 22 22 28 11 11 26 30 38 15 16 1 37 11 29 5", " VKAQZ. 1 38 9 35 23 11 3 33 29 34 20 27 1 21", "FOP AVH . 37 13 31 34 35 7 2 12 27 33 10 0 10", "M. 20 31 32 7 35 34 1 33 6 18 36 15 11 33 17 16", "WP. 8 19 37 18 16 26 0 6 28 26 18", "QPVOZ. 17 0 35 3 14 20 14 11 2 17 39 6 25 8 21", "ZUI. 32 3 5 17 7 39 31 3 2 11 22 26 19 14 37 24", "M. 39 22 17 16 6 35 23 18 4 36 37 15 28 20 6 26", "WP. 3 24 23 14 37 6 3 16 33 14 36 30 38 8 14 39", "XTOY . 14 21 18 23 25 19 35 16 0 22 33 35 10 12", "FJN. 35 15 22 17", "FJN. 27", "M. 8 2 24 6 1 32 15 17 0 38 37 15 38 28 18"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"IUBCUKJTNX", "M CNEC", "AVRXADOZRS", "XL KU", "FOP AVH ", "QPVOZ", "FJN", "ZUI", " CPHX", "MLWX", "XTOY ", "M", " U EV", "EFBBKXTVAE", "WP", "NLM", "RZHN", "DYUW", "WSVRFCPH ", " VKAQZ", "FRT A "};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> papers = {"OAMMEY. 32 1 11 34 9 7 17 45 34 45 32 19 8 15", "UYVDDH. 46 5 38 3 13 3 7 25 41 20 28 24 5 32 13", " HD P V. 19 17 37 17 25 9 5 46 33 10 33 27 6 7", "ST. 5 1 8 21 47 42 5 8 6 8 17 7 34 6 23 9 33 36", "KTV . 41 1 14 26 20 45 33 41 22 23 48 35 14 23", "DIN. 23 13", "AX. 37", "UYVDDH. 21 32 13 47 6 17 41 38 35 26 30 33 46 1", "DZTTKBV. 4", "YAZBFWQ. 12 35 0 32 44 34 30 12 27 25 35 13 40", "PUEDLFK. 26 8 19 30 34 9 48 44 0 22 5 31 25 44", "HAD. 5 21 14 37 0 41 22 3 15 28 16 38 6 8 7 27", "THZLGX. 9 20 13 13 39 27 28 29 35 25 13 10 22 2", "HAD. 10 42 31 17 32 10 36 18 17 16 5 15 26 9 19", " A BNJD. 47 22 45 22 32 24 13 15 5 17 32 46 21", "ST. 3 0 17 21 33 41 38 24 12 11 16 46 40 39 43", " HD P V. 15 38 1 32 41", "THZLGX. 20 0 25 26 9 20 25 6 16 32 18 46 6 13 3", "LQR ZCDL . 20 33 11 28 31 12 12 43 4 1 37 33 16", "O KDFHAJ. 12 5 20 31 5 6 15 7 12 38 38 43 15 1", "ST. 5 9 26 32 10 15 24 35 40 9 43 9 37 24 38 32", "YAZBFWQ. 9 6 20 36 1 24 27 2 20 40 31 9 18 44 8", "MRU . 44 45 33 29 6 3 3 1 21 16 46 42 47 45 27", "UYVDDH. 37 8", "PUEDLFK. 47 26 44 19 23 22 27 14 36 39 43 4 23", " MW. 3 10 34 33 40 2 39 39 44 23 22", "OAMMEY. 47 48 8 28 38 33 29 44 48 14 32 30 28 1", "KXT. 9 5 43 23", "YAZBFWQ. 10 11 13 5 23 24 27 46 27 5 43 4 38 7", " A BNJD. 35 8 18 31 39 13 27 16 38 6 20 7 14 40", "LQR ZCDL . 42 36 2 17 31 44 44 37 47 40 14 6 46", "DZTTKBV. 41 43 37 36 9 23 10 32 4 9 48 6 21 8", "KXT. 38 28 16 20 4 19 31 28 14 21 47 27", "KTV . 11 5 16 19 30 18 31 0 26 36 45 22 20 3 0", "HAD. 32 0 18 5", "CYQODVWWN . 38 37 7 11 37 7 21 43 44 38 46 45 3", "PUEDLFK. 21 45 34 39 3 9 35 0 33 37 19 7 46 29", " A BNJD. 27 15 20 18 13 27 1 2 5 28 30 47 43", "ARNPEC. 7 16 37 25 46 30 4 19 15 33 21 33 2 37", "CYQODVWWN .", "ARNPEC. 26 0 0 35 2 36 42 2 38 25 20 47 30 9 23", "PUEDLFK. 14 29 6 3 39 14 43 46 27 46 18 14 24 8", "O KDFHAJ. 30 13 0 6 48 29 3 15 28 36 21 13 5 35", "O. 27 14 4 5 17 5 11 38 7 32 20 37 42 40 48 11", "KTV . 35 6 19 24 29 9 40 9 46 5 40 3 24 37 16 7", "KXT. 23 33", "JZOPIQ. 0 4 32 32 17 41 16 47 18 16 10 16 10 18", "O. 23 15 1 38 28 44 20 10 22", "ARNPEC. 14 12 7 9 14 3 25 33 17 16 17 37 7 46 3"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DIN", "JZOPIQ", "AX", "ST", "UYVDDH", "YAZBFWQ", "KXT", "O", "KTV ", " A BNJD", " HD P V", "OAMMEY", "ARNPEC", "DZTTKBV", "LQR ZCDL ", " MW", "MRU ", "CYQODVWWN ", "PUEDLFK", "HAD", "O KDFHAJ", "THZLGX"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> papers = {"VNAG. 40 43 41 43 11 11 39 39 44 25 11 21", "VNAG. 44 17 0 3 30 42 18 36 20 14 29 29 5 31 14", " MXW. 6 14 38 14 24", "I. 21 14 5 16 23 7 24 36 20 38 36 11 11 18 4 33", "LF B. 41 18 28 0 21 42 6 29 25 39 16 23 30 27 6", "I. 37 23", "VNAG. 19 16 26 7 31 38 29 4 11 43 31 22 27 4 16", " OEIPMLB. 17 15 8 15 14 5 0 8 34 2 39 43 3 15 2", "LF B. 30 43 39 0 0 7 0 11 24 40 38 23 35 32 6 1", " RVKEX VM. 32 40 25 29 44 7 2 29 15 6 3 16 42 5", " GXS. 5 41 2 22 34 9 29 44 25 43 1 9 41 43 16 5", "LF B. 35 7 16 12 24 38", " JWPGQYM. 16 6 35 17 10 33 22 38", "I. 15 35 39 10 4 18 1", "E YC. 43 24 36 37 13 39 18 6", "JMA. 9 14 22 42 29 29 29 13 44 0 3 16 16 19 13", "LF B. 25 37 20 14 8 22 39 2 41 0 9 43 6 18 24 5", "UAY. 29 31 5 19 6", "I. 19 20 6 31 19 13 6 29 43 36 34 43 5 40 14 2", "LF B. 23 44 38 13 14 32 24 7 18 31 33 6 44 1 28", " MXW. 34 42 12 3 23 3 7 2 1 17 34 24 18 19 27 6", "WE N U. 34 22 25 9 42 35 8 10 41 40 17 36 40 32", "MXMVT . 5 23 6 25 30 3 7 20 12 26 3 30 14 1 20", " MXW. 13 16 10 34 16 3 18", "I. 11 30 20 29 3 20 32 20 28 40 15 32 21 41 31", "I. 5 16 41 0 43 31 38 35 8 29 4 13 31 42 13 38", "I. 21 10 17", "LCFHGV. 44 16 39 31 37 39", " RVKEX VM. 32 16 12 17 11 2 35 10 32 31 22 20 2", "RZEFA. 2 8 28 16 28 22 25 13 15 31 40 7 38 24 7", "UAY. 29 15 22 0 17 3 37 19 7 36 7 8 5 9 37", "E YC. 24 8 19 29 25 4 10 24 30 32 25 38 43 38", "X. 19 43 30 34 11 18 35", "X. 11 43 3 0 20 26 13 35 40 37 22 4 15 39 32 43", "UAY. 36 9 22 15 9 29 44", "DIBYSSR . 0 32 9 21 20 40 12 20 26 41 5 36 38", "YWH. 14 13 21 35 42 33 23 32 40 35 22 31 24 17", " SAEGOX. 33 10 6 33 13 34 28 40 18 34 8 24 44 2", "JDRNH. 6 8 13 7 24 44 14 24 2 24 35 18 32 10 0", "TBBHVY. 5 17", "W. 44 5 31 10 18 24 33", "E YC. 16 16 38 15 33 6 13 35 43 33 23 0 15 42 9", "BNDIC. 1 25 15 0 14 2 7 0 21 2 3 1 15 0 38 30 0", "WE N U. 23 16 37 8 25 2 15 29 37 4 41 40 36 31", "XJOREDETP. 10 4 3 14 21 22 8 2 4 22 36"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"RZEFA", "JDRNH", "MXMVT ", " OEIPMLB", "DIBYSSR ", "W", "E YC", "VNAG", "WE N U", " GXS", "JMA", "XJOREDETP", "I", " MXW", "YWH", "LF B", "BNDIC", "TBBHVY", "X", "UAY", " SAEGOX", " RVKEX VM", " JWPGQYM", "LCFHGV"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> papers = {"CONTEMPORARY PHYSICS. 5 4 6 8 7 1 9", "EUROPHYSICS LETTERS. 9", "J PHYS CHEM REF D. 5 4 6 8 7 1 9", "J PHYS SOC JAPAN. 5 4 6 8 7 1 9", "PHYSICAL REVIEW LETTERS. 5 6 8 7 1 9", "PHYSICS LETTERS B. 6 8 7 1 9", "PHYSICS REPORTS. 8 7 1 9", "PHYSICS TODAY. 1 9", "REP PROGRESS PHYSICS. 7 1 9", "REV MODERN PHYSICS."};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"REV MODERN PHYSICS", "EUROPHYSICS LETTERS", "PHYSICS TODAY", "REP PROGRESS PHYSICS", "PHYSICS REPORTS", "PHYSICS LETTERS B", "PHYSICAL REVIEW LETTERS", "CONTEMPORARY PHYSICS", "J PHYS CHEM REF D", "J PHYS SOC JAPAN"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> papers = {"A.", "B. 0", "C. 1 0 3", "C. 2"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "B", "C"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> papers = {"RESPECTED JOURNAL.", "MEDIOCRE JOURNAL. 0", "LOUSY JOURNAL. 0 1", "RESPECTED JOURNAL.", "MEDIOCRE JOURNAL. 3", "LOUSY JOURNAL. 4 3 3 4", "RESPECTED SPECIFIC JOURNAL.", "MEDIOCRE SPECIFIC JOURNAL. 6", "LOUSY SPECIFIC JOURNAL. 6 7"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"RESPECTED JOURNAL", "RESPECTED SPECIFIC JOURNAL", "MEDIOCRE JOURNAL", "MEDIOCRE SPECIFIC JOURNAL", "LOUSY JOURNAL", "LOUSY SPECIFIC JOURNAL"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> papers = {"A.", "B. 0", "C. 1 0 3", "C. 2", "D. 0 3 5 11", "E. 11", "F. 10 9 10 2", "G. 12", "Z. 10", "J. 12 12 2", "M. 12 1 0", "L. 12 12 9 1", "TX. 8 10 11"};
    AcademicJournal* pObj = new AcademicJournal();
    clock_t start = clock();
    vector<string> result = pObj->rankByImpact(papers);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "TX", "B", "L", "M", "J", "C", "E", "Z", "D", "F", "G"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10413344&rd=6534&pm=4020
********************************************************************************
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <memory.h>
#include <stdio.h>
#include <limits.h>
 
using namespace std;
 
class AcademicJournal {
public:
  #define MAX 100
  int len,n;
  vector <string> jname;
  vector <int>  jp[MAX];
 
  int sjp[MAX];
  int  f[MAX];
  
  int v[MAX];
  bool a[MAX][MAX];
 
  int addJname(string name)
  {
    int i;
 
    for (i=0; i<len; ++i)
    if (jname[i].compare(name)==0) 
      return i;
 
    jname.push_back(name);
    ++len;
    return len-1;
  }
 
 
  void step1(vector <string> papers)
  {
    int i,vt,x;
    string name;
    string str;
 
    memset(a,false,sizeof(a));
    for (i=0; i<papers.size(); ++i)
    {
      name = papers[i].substr(0,papers[i].find_first_of("."));
      str  = papers[i].substr(papers[i].find_first_of(".")+1);
    
      vt = addJname(name);
      jp[vt].push_back(i);
 
      istringstream iss(str);
      while (iss >> x)
      {
        a[i][x] = true;
      }
    }
  }
 
  int findj(int x)
  {
    int i,j;
 
    for (i=0; i<len; ++i)
    for (j=0; j<jp[i].size(); ++j)
    if (jp[i][j] == x) return i;
 
    return -1;
  }
 
  void step2()
  {
    int i,j;
 
    for (i=0; i<n; ++i)
      v[i] = findj(i);
 
    memset(f,0,sizeof(f));
 
    for (i=0; i<n; ++i)
    for (j=0; j<n; ++j)
    if (a[i][j])
    {
      if (v[i] != v[j])
        ++ f[v[j]];
    }
  }
 
  void step3()
  {
    int i,j,u,v;
    int z;
 
    for (i=0; i<len; ++i)
      sjp[i] = jp[i].size();
 
    for (i=0; i<len; ++i)
    for (j=i+1;j<len;++j)
    {
      u = f[i]*sjp[j];
      v = f[j]*sjp[i];
 
      if (u<v || (u==v && ( sjp[i]<sjp[j] || (sjp[i]==sjp[j] && jname[i].compare(jname[j])>0))))
      {
        z = f[i];   f[i] = f[j];      f[j] = z;
        z = sjp[i]; sjp[i] = sjp[j];  sjp[j] = z;
 
        jname[i].swap(jname[j]);
      }
    }
    
  }
 
  vector <string> rankByImpact(vector <string> papers)
  {
    len = 0;
    n = papers.size();
 
    step1(papers);
    step2();
 
    // sort
    step3();
 
    return jname;
  }
};

********************************************************************************
*******************************************************************************/