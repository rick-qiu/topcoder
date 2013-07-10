/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1773
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

class PickTeam {
public:
    vector<string> pickPeople(int teamSize, vector<string> people);
};

vector<string> PickTeam::pickPeople(int teamSize, vector<string> people) {
    vector<string> ret;
    return ret;
}


int test0() {
    int teamSize = 3;
    vector<string> people = {"ALICE 0 1 -1 3", "BOB 1 0 2 -4", "CAROL -1 2 0 2", "DAVID 3 -4 2 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ALICE", "CAROL", "DAVID"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int teamSize = 2;
    vector<string> people = {"ALICE 0 1 -1 3", "BOB 1 0 2 -4", "CAROL -1 2 0 2", "DAVID 3 -4 2 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ALICE", "DAVID"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int teamSize = 2;
    vector<string> people = {"A 0 -2 -2", "B -2 0 -1", "C -2 -1 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "C"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int teamSize = 2;
    vector<string> people = {"ZDYSSJ 0 223 -215", "LTWJF 223 0 -588", "BLLIJSAB -215 -588 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"LTWJF", "ZDYSSJ"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int teamSize = 4;
    vector<string> people = {"YAX 0 -272 98 -974 -548", "VHT -272 0 -294 -844 783", "CGNA 98 -294 0 131 -740", "UYTPP -974 -844 131 0 -125", "GVTWWJ -548 783 -740 -125 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CGNA", "GVTWWJ", "VHT", "YAX"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int teamSize = 2;
    vector<string> people = {"UV 0 -489 -444 660", "RWJ -489 0 119 -967", "P -444 119 0 142", "YRWPWT 660 -967 142 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"UV", "YRWPWT"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int teamSize = 2;
    vector<string> people = {"GTY 0 -310 619 719 415", "EHVEV -310 0 -148 438 -858", "TXOEJJ 619 -148 0 640 -999", "AN 719 438 640 0 -222", "KPPYQ 415 -858 -999 -222 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AN", "GTY"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int teamSize = 12;
    vector<string> people = {"A 0 -2 -8 8 4 -3 -1 -1 2 -4 4 0 8 0 5 1 -7 5 0 5", "B -2 0 3 9 -5 -4 8 1 5 0 -5 0 5 -8 -3 4 3 4 1 0", "C -8 3 0 -5 2 4 3 -1 7 5 0 0 9 -7 6 4 2 7 9 1", "D 8 9 -5 0 3 -1 8 9 9 1 -3 0 -6 5 9 8 -9 -6 8 0", "E 4 -5 2 3 0 -3 -6 -1 9 1 -6 1 -1 -9 3 2 -9 -4 3 0", "F -3 -4 4 -1 -3 0 4 1 -8 3 -2 1 6 0 -9 6 -4 3 7 5", "G -1 8 3 8 -6 4 0 3 -2 0 -1 -4 2 6 0 -7 8 -1 -1 9", "H -1 1 -1 9 -1 1 3 0 -3 6 4 -5 -7 -9 -6 9 7 4 1 -2", "I 2 5 7 9 9 -8 -2 -3 0 -2 -5 7 -9 1 9 -6 1 1 -1 -5", "J -4 0 5 1 1 3 0 6 -2 0 -5 -8 7 1 1 -1 -7 -5 -4 -4", "K 4 -5 0 -3 -6 -2 -1 4 -5 -5 0 1 2 7 -3 9 0 1 2 -8", "L 0 0 0 0 1 1 -4 -5 7 -8 1 0 -4 -7 1 8 -9 -7 -9 6", "M 8 5 9 -6 -1 6 2 -7 -9 7 2 -4 0 -2 2 -1 -8 8 -1 1", "N 0 -8 -7 5 -9 0 6 -9 1 1 7 -7 -2 0 2 4 8 8 6 5", "O 5 -3 6 9 3 -9 0 -6 9 1 -3 1 2 2 0 6 8 5 0 -3", "P 1 4 4 8 2 6 -7 9 -6 -1 9 8 -1 4 6 0 -3 2 9 -8", "Q -7 3 2 -9 -9 -4 8 7 1 -7 0 -9 -8 8 8 -3 0 4 2 -1", "R 5 4 7 -6 -4 3 -1 4 1 -5 1 -7 8 8 5 2 4 0 9 -3", "S 0 1 9 8 3 7 -1 1 -1 -4 2 -9 -1 6 0 9 2 9 0 8", "T 5 0 1 0 0 5 9 -2 -5 -4 -8 6 1 5 -3 -8 -1 -3 8 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "C", "D", "G", "H", "I", "N", "O", "P", "Q", "R", "S"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int teamSize = 13;
    vector<string> people = {"A 0 2 8 7 1 -4 -3 1 8 2 8 2 1 -3 7 1 3 9 -6 -5", "A 2 0 0 7 -7 -5 8 -8 -9 -9 6 -9 -4 -8 8 1 7 0 3 3", "A 8 0 0 -5 -5 -7 1 -3 1 9 -6 6 1 5 6 -9 8 6 -8 -8", "A 7 7 -5 0 7 -5 3 9 8 3 -6 -5 -5 2 -6 2 -2 -1 -2 8", "B 1 -7 -5 7 0 7 -2 -9 3 7 0 -2 1 1 -9 -3 -2 2 1 -2", "B -4 -5 -7 -5 7 0 4 8 6 0 -1 4 1 -2 -9 4 0 -7 6 -2", "B -3 8 1 3 -2 4 0 8 -1 1 -2 -7 5 0 -6 9 0 -3 1 3", "B 1 -8 -3 9 -9 8 8 0 0 -2 5 0 5 8 3 5 2 4 5 4", "C 8 -9 1 8 3 6 -1 0 0 8 -3 8 -6 -4 7 -4 1 -5 5 4", "C 2 -9 9 3 7 0 1 -2 8 0 -9 -6 6 5 -8 -3 -8 2 2 4", "C 8 6 -6 -6 0 -1 -2 5 -3 -9 0 2 7 8 2 -6 -4 -6 4 4", "C 2 -9 6 -5 -2 4 -7 0 8 -6 2 0 0 -3 6 7 -1 2 -4 -2", "D 1 -4 1 -5 1 1 5 5 -6 6 7 0 0 -7 -4 8 -6 -3 4 -6", "D -3 -8 5 2 1 -2 0 8 -4 5 8 -3 -7 0 7 -3 5 -8 5 1", "D 7 8 6 -6 -9 -9 -6 3 7 -8 2 6 -4 7 0 9 -5 -5 -8 3", "D 1 1 -9 2 -3 4 9 5 -4 -3 -6 7 8 -3 9 0 -2 -7 8 -7", "E 3 7 8 -2 -2 0 0 2 1 -8 -4 -1 -6 5 -5 -2 0 6 0 5", "E 9 0 6 -1 2 -7 -3 4 -5 2 -6 2 -3 -8 -5 -7 6 0 4 8", "E -6 3 -8 -2 1 6 1 5 5 2 4 -4 4 5 -8 8 0 4 0 1", "E -5 3 -8 8 -2 -2 3 4 4 4 4 -2 -6 1 3 -7 5 8 1 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "A", "B", "B", "B", "B", "C", "C", "C", "D", "D", "D", "E"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int teamSize = 2;
    vector<string> people = {"D 0 99 106 952", "PU 99 0 696 -133", "HUCY 106 696 0 771", "KXBB 952 -133 771 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"D", "KXBB"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int teamSize = 3;
    vector<string> people = {"VKTPK 0 656 198 -822 -144 -224 -242", "WXHFXU 656 0 -436 -950 51 794 -729", "VGH 198 -436 0 988 204 287 266", "LUK -822 -950 988 0 -547 -11 -518", "QDQ -144 51 204 -547 0 312 804", "WKXF -224 794 287 -11 312 0 -580", "RBT -242 -729 266 -518 804 -580 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"QDQ", "RBT", "VGH"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int teamSize = 3;
    vector<string> people = {"JN 0 272 -200 971 -210 331 492", "V 272 0 -654 683 -548 -564 413", "MPJFIC -200 -654 0 538 -101 -128 -228", "RXMF 971 683 538 0 897 915 298", "FPX -210 -548 -101 897 0 -974 882", "JZ 331 -564 -128 915 -974 0 -625", "PF 492 413 -228 298 882 -625 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JN", "JZ", "RXMF"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int teamSize = 6;
    vector<string> people = {"RPV 0 -219 -908 115 694 -632 236 2 -905", "AFKZJ -219 0 399 498 995 -288 156 -57 504", "ZJYFQ -908 399 0 728 -311 753 218 327 -951", "PY 115 498 728 0 893 233 -219 -368 307", "EOSCH 694 995 -311 893 0 -424 771 311 -817", "JEOQ -632 -288 753 233 -424 0 462 -268 491", "NM 236 156 218 -219 771 462 0 945 -77", "CIFYASF 2 -57 327 -368 311 -268 945 0 -243", "NML -905 504 -951 307 -817 491 -77 -243 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AFKZJ", "CIFYASF", "EOSCH", "NM", "PY", "ZJYFQ"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int teamSize = 9;
    vector<string> people = {"QOM 0 -3 5 3 10 3 8 6 0 -7 0 4 6 -6 7 5 14 11 4 14", "OC -3 0 2 3 1 12 7 0 0 10 14 3 1 7 -2 10 10 5 -4 3", "UT 5 2 0 12 5 8 4 5 -4 4 8 6 13 12 -3 4 -1 5 0 14", "ORNV 3 3 12 0 9 11 12 2 6 -3 5 -2 0 5 9 1 2 13 0 1", "WYM 10 1 5 9 0 2 -4 8 12 6 -7 8 2 8 2 0 3 7 -4 8", "OMJVC 3 12 8 11 2 0 6 -4 2 8 3 18 1 1 6 5 9 7 -2 4", "TXQB 8 7 4 12 -4 6 0 3 3 0 4 -5 1 4 4 10 4 -4 2 13", "P 6 0 5 2 8 -4 3 0 -3 -6 -1 0 16 14 1 12 4 6 -2 -7", "BL 0 0 -4 6 12 2 3 -3 0 2 15 -2 2 8 6 14 4 9 -1 9", "LUUGR -7 10 4 -3 6 8 0 -6 2 0 2 1 11 7 2 1 7 3 2 3", "GI 0 14 8 5 -7 3 4 -1 15 2 0 5 2 8 1 9 7 9 11 4", "BH 4 3 6 -2 8 18 -5 0 -2 1 5 0 -8 6 7 0 -8 9 -7 6", "SPS 6 1 13 0 2 1 1 16 2 11 2 -8 0 7 5 8 9 12 9 6", "ZEMG -6 7 12 5 8 1 4 14 8 7 8 6 7 0 0 3 17 3 7 9", "ESU 7 -2 -3 9 2 6 4 1 6 2 1 7 5 0 0 4 5 15 13 5", "RZTW 5 10 4 1 0 5 10 12 14 1 9 0 8 3 4 0 4 0 16 1", "BMJ 14 10 -1 2 3 9 4 4 4 7 7 -8 9 17 5 4 0 -3 1 11", "JG 11 5 5 13 7 7 -4 6 9 3 9 9 12 3 15 0 -3 0 1 9", "R 4 -4 0 0 -4 -2 2 -2 -1 2 11 -7 9 7 13 16 1 1 0 8", "FQF 14 3 14 1 8 4 13 -7 9 3 4 6 6 9 5 1 11 9 8 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BMJ", "FQF", "JG", "P", "QOM", "SPS", "UT", "WYM", "ZEMG"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int teamSize = 19;
    vector<string> people = {"SC 0 2 12 0 7 4 -4 5 -2 11 1 7 4 4 4 -1 6 3 5 4", "TO 2 0 0 3 -2 6 2 10 -5 9 17 4 -1 -2 2 4 -5 -9 9 9", "GQ 12 0 0 6 -5 1 10 8 -7 7 9 9 0 2 8 -5 0 -2 6 1", "VX 0 3 6 0 0 7 -5 9 3 0 0 17 -8 2 -8 1 -7 4 1 11", "FK 7 -2 -5 0 0 -3 0 17 10 -4 -2 8 -1 8 2 9 2 0 6 7", "FIS 4 6 1 7 -3 0 2 -1 3 -3 3 11 -3 5 -7 7 6 2 4 -1", "T -4 2 10 -5 0 2 0 3 2 17 7 -1 8 5 11 11 7 4 7 12", "U 5 10 8 9 17 -1 3 0 5 6 9 2 -8 14 -2 7 9 0 4 2", "RGTH -2 -5 -7 3 10 3 2 5 0 12 14 5 6 9 4 8 4 0 2 4", "XO 11 9 7 0 -4 -3 17 6 12 0 -2 6 7 4 6 -7 5 0 6 4", "CN 1 17 9 0 -2 3 7 9 14 -2 0 1 15 4 7 2 6 3 6 12", "AYM 7 4 9 17 8 11 -1 2 5 6 1 0 9 2 2 2 7 14 10 6", "FNO 4 -1 0 -8 -1 -3 8 -8 6 7 15 9 0 5 8 7 2 -1 1 4", "VJP 4 -2 2 2 8 5 5 14 9 4 4 2 5 0 12 7 -1 -5 5 11", "VRZ 4 2 8 -8 2 -7 11 -2 4 6 7 2 8 12 0 1 0 13 6 14", "XLEVB -1 4 -5 1 9 7 11 7 8 -7 2 2 7 7 1 0 12 6 7 0", "XIYO 6 -5 0 -7 2 6 7 9 4 5 6 7 2 -1 0 12 0 5 12 6", "YK 3 -9 -2 4 0 2 4 0 0 0 3 14 -1 -5 13 6 5 0 15 4", "RCHW 5 9 6 1 6 4 7 4 2 6 6 10 1 5 6 7 12 15 0 16", "DAV 4 9 1 11 7 -1 12 2 4 4 12 6 4 11 14 0 6 4 16 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AYM", "CN", "DAV", "FIS", "FK", "FNO", "GQ", "RCHW", "RGTH", "SC", "T", "TO", "U", "VJP", "VRZ", "XIYO", "XLEVB", "XO", "YK"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int teamSize = 12;
    vector<string> people = {"ZYE 0 4 -4 5 7 3 2 4 1 -4 14 0 7 6 -1 5 -4 1 9 2", "Y 4 0 6 9 16 7 -4 12 3 -5 9 4 6 5 13 18 8 7 9 2", "JFQ -4 6 0 5 5 10 8 6 0 8 16 4 0 5 15 6 1 4 3 1", "XA 5 9 5 0 7 12 10 -4 1 0 -6 11 -3 -4 3 -3 0 8 0 6", "H 7 16 5 7 0 14 5 1 4 -1 4 9 -1 5 9 2 8 -1 1 4", "S 3 7 10 12 14 0 5 5 1 -1 7 7 10 5 -2 7 6 -1 10 -3", "J 2 -4 8 10 5 5 0 3 10 5 -7 11 5 7 -3 10 3 6 -2 0", "ON 4 12 6 -4 1 5 3 0 15 15 -1 3 7 6 2 12 10 1 2 2", "AC 1 3 0 1 4 1 10 15 0 1 5 -5 11 10 1 12 15 1 3 8", "D -4 -5 8 0 -1 -1 5 15 1 0 2 5 -6 0 2 3 -2 12 7 16", "L 14 9 16 -6 4 7 -7 -1 5 2 0 8 8 16 7 -4 0 3 8 1", "CFY 0 4 4 11 9 7 11 3 -5 5 8 0 1 15 1 4 -4 4 -5 4", "QW 7 6 0 -3 -1 10 5 7 11 -6 8 1 0 9 -2 9 9 2 8 14", "IXA 6 5 5 -4 5 5 7 6 10 0 16 15 9 0 -4 0 7 11 7 9", "RZ -1 13 15 3 9 -2 -3 2 1 2 7 1 -2 -4 0 4 6 9 10 8", "MJD 5 18 6 -3 2 7 10 12 12 3 -4 4 9 0 4 0 0 1 5 11", "JEWR -4 8 1 0 8 6 3 10 15 -2 0 -4 9 7 6 0 0 7 8 -6", "AAKCG 1 7 4 8 -1 -1 6 1 1 12 3 4 2 11 9 1 7 0 10 8", "L 9 9 3 0 1 10 -2 2 3 7 8 -5 8 7 10 5 8 10 0 4", "TSGU 2 2 1 6 4 -3 0 2 8 16 1 4 14 9 8 11 -6 8 4 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AC", "H", "IXA", "JEWR", "JFQ", "L", "L", "MJD", "ON", "QW", "S", "Y"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int teamSize = 10;
    vector<string> people = {"R 0 3 5 5 1 12 15 3 -4 10 4 0 14 12 -6 0 14 7 9 -4", "FO 3 0 4 6 0 -2 -2 11 8 7 3 4 11 11 2 17 1 -2 8 -1", "L 5 4 0 2 4 8 1 -2 -2 6 9 6 10 -2 -1 2 15 16 -2 9", "BP 5 6 2 0 6 2 12 5 -3 1 13 2 4 16 10 8 1 8 6 11", "IA 1 0 4 6 0 -1 7 14 -7 -4 1 7 8 -3 3 3 1 2 4 6", "XXR 12 -2 8 2 -1 0 8 4 8 8 -3 8 -6 1 -3 5 8 3 2 -6", "NH 15 -2 1 12 7 8 0 2 9 -1 3 0 7 12 11 -5 5 4 11 5", "Q 3 11 -2 5 14 4 2 0 0 3 1 8 10 -1 -2 14 8 4 6 9", "NG -4 8 -2 -3 -7 8 9 0 0 17 1 9 8 7 16 1 7 0 2 5", "IM 10 7 6 1 -4 8 -1 3 17 0 0 8 8 1 9 6 -3 5 14 10", "HYCIX 4 3 9 13 1 -3 3 1 1 0 0 1 -1 -4 6 -2 3 6 3 8", "BINZ 0 4 6 2 7 8 0 8 9 8 1 0 -3 16 12 6 4 1 3 6", "S 14 11 10 4 8 -6 7 10 8 8 -1 -3 0 1 1 0 7 0 -1 6", "Q 12 11 -2 16 -3 1 12 -1 7 1 -4 16 1 0 6 3 5 5 2 1", "C -6 2 -1 10 3 -3 11 -2 16 9 6 12 1 6 0 4 2 7 -1 8", "SQC 0 17 2 8 3 5 -5 14 1 6 -2 6 0 3 4 0 2 16 5 12", "SPF 14 1 15 1 1 8 5 8 7 -3 3 4 7 5 2 2 0 14 0 -2", "QAF 7 -2 16 8 2 3 4 4 0 5 6 1 0 5 7 16 14 0 -2 -6", "NRV 9 8 -2 6 4 2 11 6 2 14 3 3 -1 2 -1 5 0 -2 0 5", "Z -4 -1 9 11 6 -6 5 9 5 10 8 6 6 1 8 12 -2 -6 5 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BINZ", "BP", "C", "FO", "IM", "NG", "Q", "Q", "SQC", "Z"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int teamSize = 11;
    vector<string> people = {"TVX 0 8 8 8 13 -2 10 8 -1 0 8 1 14 3 0 -2 5 12 9 8", "MG 8 0 8 3 15 -2 1 11 2 -8 15 -3 6 6 4 10 -1 6 2 3", "MZ 8 8 0 5 16 7 1 -5 6 15 10 6 -8 9 2 16 -3 4 11 4", "ELDOZ 8 3 5 0 9 4 -5 -5 9 7 10 4 6 -3 7 5 2 2 3 -4", "UO 13 15 16 9 0 -4 7 12 6 6 -7 0 0 8 1 1 7 9 -6 5", "YGU -2 -2 7 4 -4 0 0 11 9 6 -5 8 0 -7 5 3 3 2 3 -3", "YHK 10 1 1 -5 7 0 0 6 9 10 6 -2 2 -1 5 5 7 1 15 0", "S 8 11 -5 -5 12 11 6 0 3 10 -4 5 5 9 5 2 -4 -2 2 3", "RK -1 2 6 9 6 9 9 3 0 1 10 14 1 10 -1 4 7 -6 13 17", "RZW 0 -8 15 7 6 6 10 10 1 0 0 0 1 3 12 16 6 -2 9 3", "U 8 15 10 10 -7 -5 6 -4 10 0 0 8 -4 9 -1 0 0 5 2 7", "VCD 1 -3 6 4 0 8 -2 5 14 0 8 0 6 13 1 0 10 -6 7 -6", "NK 14 6 -8 6 0 0 2 5 1 1 -4 6 0 -8 0 10 2 -3 11 -1", "PQ 3 6 9 -3 8 -7 -1 9 10 3 9 13 -8 0 -7 4 8 7 -3 3", "HXEM 0 4 2 7 1 5 5 5 -1 12 -1 1 0 -7 0 4 3 9 -4 -3", "I -2 10 16 5 1 3 5 2 4 16 0 0 10 4 4 0 -3 2 5 1", "KYW 5 -1 -3 2 7 3 7 -4 7 6 0 10 2 8 3 -3 0 -2 4 8", "YHG 12 6 4 2 9 2 1 -2 -6 -2 5 -6 -3 7 9 2 -2 0 4 6", "JI 9 2 11 3 -6 3 15 2 13 9 2 7 11 -3 -4 5 4 4 0 3", "OHIC 8 3 4 -4 5 -3 0 3 17 3 7 -6 -1 3 -3 1 8 6 3 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ELDOZ", "I", "JI", "MG", "MZ", "RK", "RZW", "TVX", "U", "UO", "YHK"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int teamSize = 19;
    vector<string> people = {"QAU 0 4 4 16 0 6 13 8 1 -5 9 8 2 3 -1 3 6 3 8 5", "EW 4 0 14 10 -3 11 9 9 0 18 7 6 1 9 1 14 10 3 -1 4", "BL 4 14 0 1 -3 1 -1 5 -6 1 6 -6 10 9 2 7 3 3 8 14", "BZQG 16 10 1 0 2 9 9 2 13 6 11 1 8 8 5 1 15 8 7 9", "KWV 0 -3 -3 2 0 12 1 9 6 4 3 9 3 1 7 15 2 11 9 -2", "HARI 6 11 1 9 12 0 9 9 7 -2 7 -7 7 4 5 7 0 1 2 -8", "I 13 9 -1 9 1 9 0 5 9 -4 -1 6 8 8 -7 -3 5 7 8 3", "JYN 8 9 5 2 9 9 5 0 10 3 10 8 -2 1 6 -2 12 -2 6 10", "B 1 0 -6 13 6 7 9 10 0 -9 9 0 -6 -1 2 -2 1 11 3 1", "EBU -5 18 1 6 4 -2 -4 3 -9 0 0 4 3 16 3 7 5 5 8 11", "SI 9 7 6 11 3 7 -1 10 9 0 0 6 8 12 5 -5 -8 2 -6 -7", "TZN 8 6 -6 1 9 -7 6 8 0 4 6 0 11 -5 8 15 1 1 4 -3", "BLW 2 1 10 8 3 7 8 -2 -6 3 8 11 0 13 6 5 -7 16 4 5", "AEKJH 3 9 9 8 1 4 8 1 -1 16 12 -5 13 0 1 9 0 9 4 7", "YUCIY -1 1 2 5 7 5 -7 6 2 3 5 8 6 1 0 11 2 12 2 6", "H 3 14 7 1 15 7 -3 -2 -2 7 -5 15 5 9 11 0 2 6 11 1", "DRZ 6 10 3 15 2 0 5 12 1 5 -8 1 -7 0 2 2 0 9 4 -1", "BTCO 3 3 3 8 11 1 7 -2 11 5 2 1 16 9 12 6 9 0 7 5", "P 8 -1 8 7 9 2 8 6 3 8 -6 4 4 4 2 11 4 7 0 -2", "K 5 4 14 9 -2 -8 3 10 1 11 -7 -3 5 7 6 1 -1 5 -2 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AEKJH", "BL", "BLW", "BTCO", "BZQG", "DRZ", "EBU", "EW", "H", "HARI", "I", "JYN", "K", "KWV", "P", "QAU", "SI", "TZN", "YUCIY"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int teamSize = 18;
    vector<string> people = {"TB 0 2 3 2 5 4 5 4 9 -3 -3 9 4 -4 10 13 13 2 4 4", "RW 2 0 -1 7 8 1 12 10 4 7 1 1 -6 3 4 -1 -1 2 16 13", "E 3 -1 0 5 5 -4 0 0 6 3 15 12 4 14 5 5 6 16 6 11", "V 2 7 5 0 -1 -1 -8 2 -4 -2 16 2 0 0 13 3 3 -3 -3 7", "NDT 5 8 5 -1 0 1 0 3 13 9 -2 13 -6 10 0 -3 7 2 0 6", "GTV 4 1 -4 -1 1 0 11 -6 1 8 11 8 0 7 1 5 3 9 8 -1", "ATW 5 12 0 -8 0 11 0 -8 0 5 12 11 2 7 0 14 9 5 3 9", "IU 4 10 0 2 3 -6 -8 0 15 1 3 9 6 10 7 12 2 -7 10 6", "GQJL 9 4 6 -4 13 1 0 15 0 0 15 8 1 8 10 3 8 -3 6 4", "AET -3 7 3 -2 9 8 5 1 0 0 2 11 1 12 9 8 2 10 4 -6", "L -3 1 15 16 -2 11 12 3 15 2 0 5 5 0 11 8 0 2 18 6", "A 9 1 12 2 13 8 11 9 8 11 5 0 4 5 4 -6 3 6 14 8", "CZEGJ 4 -6 4 0 -6 0 2 6 1 1 5 4 0 8 10 1 -5 11 5 0", "U -4 3 14 0 10 7 7 10 8 12 0 5 8 0 7 5 9 -1 4 13", "H 10 4 5 13 0 1 0 7 10 9 11 4 10 7 0 12 6 2 -2 -9", "Z 13 -1 5 3 -3 5 14 12 3 8 8 -6 1 5 12 0 18 9 5 8", "VEPG 13 -1 6 3 7 3 9 2 8 2 0 3 -5 9 6 18 0 2 8 11", "ZZ 2 2 16 -3 2 9 5 -7 -3 10 2 6 11 -1 2 9 2 0 2 5", "B 4 16 6 -3 0 8 3 10 6 4 18 14 5 4 -2 5 8 2 0 -5", "VC 4 13 11 7 6 -1 9 6 4 -6 6 8 0 13 -9 8 11 5 -5 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "AET", "ATW", "B", "E", "GQJL", "GTV", "H", "IU", "L", "NDT", "RW", "TB", "U", "VC", "VEPG", "Z", "ZZ"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int teamSize = 13;
    vector<string> people = {"ZPO 0 6 3 -7 7 -6 9 9 8 -2 1 9 0 -3 5 -6 -3 1 -5 7", "BL 6 0 -1 1 0 3 -2 1 12 7 3 11 9 -1 4 -2 3 1 11 0", "QIKW 3 -1 0 4 7 4 3 6 16 1 -5 0 -1 7 7 1 5 5 3 9", "U -7 1 4 0 16 8 9 13 -1 2 6 11 8 1 16 -6 0 -3 5 -9", "LC 7 0 7 16 0 1 -6 9 10 5 5 11 16 3 5 9 6 12 5 1", "GFD -6 3 4 8 1 0 1 7 9 6 5 -7 7 -7 12 4 2 -1 16 -1", "RR 9 -2 3 9 -6 1 0 -4 6 13 9 9 4 -5 -7 2 14 8 6 17", "BQ 9 1 6 13 9 7 -4 0 4 0 5 -4 2 12 4 1 1 -1 5 10", "OG 8 12 16 -1 10 9 6 4 0 -2 13 12 8 9 5 1 -5 1 4 3", "LK -2 7 1 2 5 6 13 0 -2 0 6 10 -4 2 13 15 9 6 1 5", "XR 1 3 -5 6 5 5 9 5 13 6 0 18 12 3 9 -3 10 0 15 12", "F 9 11 0 11 11 -7 9 -4 12 10 18 0 8 5 4 5 2 5 9 -1", "EDR 0 9 -1 8 16 7 4 2 8 -4 12 8 0 2 5 7 7 6 6 4", "NO -3 -1 7 1 3 -7 -5 12 9 2 3 5 2 0 10 0 7 10 6 1", "C 5 4 7 16 5 12 -7 4 5 13 9 4 5 10 0 1 12 8 3 9", "MPGD -6 -2 1 -6 9 4 2 1 1 15 -3 5 7 0 1 0 1 5 5 3", "NXII -3 3 5 0 6 2 14 1 -5 9 10 2 7 7 12 1 0 4 -5 0", "IKX 1 1 5 -3 12 -1 8 -1 1 6 0 5 6 10 8 5 4 0 -1 -3", "XJE -5 11 3 5 5 16 6 5 4 1 15 9 6 6 3 5 -5 -1 0 7", "BAU 7 0 9 -9 1 -1 17 10 3 5 12 -1 4 1 9 3 0 -3 7 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BL", "C", "EDR", "F", "GFD", "LC", "LK", "NXII", "OG", "RR", "U", "XJE", "XR"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int teamSize = 16;
    vector<string> people = {"SX 0 -3 10 2 -8 0 7 5 -8 7 12 0 12 4 0 11 7 15 6 5", "WDN -3 0 5 2 0 7 6 4 0 7 7 3 -5 8 7 6 -5 7 -3 3", "O 10 5 0 14 -3 -3 14 12 8 9 14 0 6 1 -8 3 8 1 3 3", "CL 2 2 14 0 6 4 7 7 16 12 0 0 15 4 15 7 9 3 -1 12", "EV -8 0 -3 6 0 -1 8 0 3 0 10 -4 -6 4 7 9 14 8 9 -6", "G 0 7 -3 4 -1 0 14 2 9 2 -6 3 6 -7 -1 8 1 -4 12 13", "HSU 7 6 14 7 8 14 0 -3 -8 10 6 1 7 1 8 6 12 1 12 5", "QYG 5 4 12 7 0 2 -3 0 12 -2 1 -2 1 2 1 -3 10 6 2 1", "DE -8 0 8 16 3 9 -8 12 0 4 9 8 1 -1 5 6 2 -1 -4 5", "ZK 7 7 9 12 0 2 10 -2 4 0 8 4 -1 4 9 3 9 0 -5 -3", "S 12 7 14 0 10 -6 6 1 9 8 0 2 13 -7 1 3 2 9 2 7", "RX 0 3 0 0 -4 3 1 -2 8 4 2 0 5 1 9 7 9 5 5 2", "M 12 -5 6 15 -6 6 7 1 1 -1 13 5 0 -3 -3 2 13 3 7 3", "R 4 8 1 4 4 -7 1 2 -1 4 -7 1 -3 0 6 -5 9 -4 4 3", "IVL 0 7 -8 15 7 -1 8 1 5 9 1 9 -3 6 0 0 7 0 -2 9", "ZKE 11 6 3 7 9 8 6 -3 6 3 3 7 2 -5 0 0 -6 -8 -5 13", "ET 7 -5 8 9 14 1 12 10 2 9 2 9 13 9 7 -6 0 13 1 11", "Q 15 7 1 3 8 -4 1 6 -1 0 9 5 3 -4 0 -8 13 0 3 3", "K 6 -3 3 -1 9 12 12 2 -4 -5 2 5 7 4 -2 -5 1 3 0 -6", "VEU 5 3 3 12 -6 13 5 1 5 -3 7 2 3 3 9 13 11 3 -6 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CL", "DE", "ET", "G", "HSU", "IVL", "M", "O", "Q", "QYG", "RX", "S", "SX", "VEU", "ZK", "ZKE"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int teamSize = 4;
    vector<string> people = {"U 0 0 1 2 -5 11 -3 2 2 8 9 -3 6 13 -2 11 2 3 -8 11", "P 0 0 -2 5 -7 -3 4 8 11 8 3 10 3 -1 13 5 -6 -6 3 9", "U 1 -2 0 10 11 4 2 12 -1 1 9 6 13 4 13 5 -1 7 2 4", "RUU 2 5 10 0 -6 6 4 6 3 3 -5 5 -5 7 10 5 -1 8 8 12", "WH -5 -7 11 -6 0 0 5 10 4 -8 2 2 3 7 -6 -7 7 4 0 3", "POS 11 -3 4 6 0 0 7 4 7 -6 7 10 5 14 9 2 14 9 8 -7", "ROCN -3 4 2 4 5 7 0 -3 2 0 0 2 16 -4 6 9 9 10 1 -3", "KGM 2 8 12 6 10 4 -3 0 6 -5 9 6 5 12 1 -4 9 10 3 6", "MPN 2 11 -1 3 4 7 2 6 0 2 -2 5 5 -6 0 -2 -4 13 2 6", "HU 8 8 1 3 -8 -6 0 -5 2 0 13 8 8 14 9 4 6 4 -1 8", "JB 9 3 9 -5 2 7 0 9 -2 13 0 -1 7 14 8 4 16 4 9 -7", "P -3 10 6 5 2 10 2 6 5 8 -1 0 2 0 14 -6 10 6 12 16", "GDX 6 3 13 -5 3 5 16 5 5 8 7 2 0 -4 8 8 3 10 12 5", "M 13 -1 4 7 7 14 -4 12 -6 14 14 0 -4 0 8 9 7 6 8 4", "RXD -2 13 13 10 -6 9 6 1 0 9 8 14 8 8 0 5 5 9 12 6", "FJR 11 5 5 5 -7 2 9 -4 -2 4 4 -6 8 9 5 0 4 -2 -1 8", "LO 2 -6 -1 -1 7 14 9 9 -4 6 16 10 3 7 5 4 0 -2 3 0", "N 3 -6 7 8 4 9 10 10 13 4 4 6 10 6 9 -2 -2 0 14 -3", "AA -8 3 2 8 0 8 1 3 2 -1 9 12 12 8 12 -1 3 14 0 0", "TTR 11 9 4 12 3 -7 -3 6 6 8 -7 16 5 4 6 8 0 -3 0 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JB", "LO", "M", "POS"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int teamSize = 16;
    vector<string> people = {"GYJ 0 6 4 -7 3 8 -1 2 -9 5 -4 12 7 6 4 10 1 -2 4 8", "OX 6 0 9 4 -3 5 0 7 1 -2 -9 -1 5 12 5 8 5 -6 10 5", "A 4 9 0 11 -1 8 4 2 11 18 0 3 1 14 15 -2 5 9 -6 1", "OI -7 4 11 0 8 8 0 5 12 11 13 9 -4 9 -7 -3 6 1 8 9", "E 3 -3 -1 8 0 2 1 -1 -2 6 -8 -7 -8 6 4 6 4 10 13 2", "EEH 8 5 8 8 2 0 8 7 1 0 -4 0 15 6 8 3 5 11 0 0", "XJK -1 0 4 0 1 8 0 -2 -2 3 1 4 7 -6 13 11 0 9 4 4", "BI 2 7 2 5 -1 7 -2 0 -6 -2 2 0 5 1 14 1 0 14 9 1", "J -9 1 11 12 -2 1 -2 -6 0 -5 9 0 8 8 4 9 2 4 5 1", "MAK 5 -2 18 11 6 0 3 -2 -5 0 -4 -4 3 4 2 7 6 2 0 5", "G -4 -9 0 13 -8 -4 1 2 9 -4 0 5 8 8 5 11 -7 15 9 3", "M 12 -1 3 9 -7 0 4 0 0 -4 5 0 -3 -4 0 -2 1 0 3 9", "DG 7 5 1 -4 -8 15 7 5 8 3 8 -3 0 1 -9 7 -2 -2 5 7", "VF 6 12 14 9 6 6 -6 1 8 4 8 -4 1 0 3 7 -7 0 11 8", "KZX 4 5 15 -7 4 8 13 14 4 2 5 0 -9 3 0 6 -2 -7 0 6", "WW 10 8 -2 -3 6 3 11 1 9 7 11 -2 7 7 6 0 9 2 -5 5", "HRD 1 5 5 6 4 5 0 0 2 6 -7 1 -2 -7 -2 9 0 9 2 8", "O -2 -6 9 1 10 11 9 14 4 2 15 0 -2 0 -7 2 9 0 -6 3", "R 4 10 -6 8 13 0 4 9 5 0 9 3 5 11 0 -5 2 -6 0 13", "HGUMJY 8 5 1 9 2 0 4 1 1 5 3 9 7 8 6 5 8 3 13 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "BI", "DG", "EEH", "G", "HGUMJY", "J", "KZX", "MAK", "O", "OI", "OX", "R", "VF", "WW", "XJK"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int teamSize = 6;
    vector<string> people = {"UIZWJ 0 -5 9 8 8 7 11 3 7 -5 3 8 2 -7 -6 6 5 5 0 7", "YRQ -5 0 0 9 -5 5 -1 -7 1 12 7 4 6 6 4 9 7 4 -4 13", "BSX 9 0 0 0 5 0 2 7 13 4 3 7 -2 8 0 -6 -6 10 9 -5", "J 8 9 0 0 12 12 3 2 -1 7 5 -1 -1 8 2 -2 1 0 3 6", "L 8 -5 5 12 0 14 6 1 15 2 6 12 10 0 0 7 4 -4 7 10", "J 7 5 0 12 14 0 14 3 6 2 -4 15 3 11 8 2 8 -1 9 -6", "BY 11 -1 2 3 6 14 0 8 -1 12 0 13 0 16 9 6 10 5 1 0", "UNM 3 -7 7 2 1 3 8 0 -2 14 -4 7 -8 1 0 18 0 9 7 5", "PGD 7 1 13 -1 15 6 -1 -2 0 4 6 5 1 6 0 2 3 9 11 14", "GP -5 12 4 7 2 2 12 14 4 0 13 3 6 -2 -2 4 9 4 4 9", "F 3 7 3 5 6 -4 0 -4 6 13 0 10 14 4 -3 -1 3 -5 9 -8", "DS 8 4 7 -1 12 15 13 7 5 3 10 0 -6 6 10 7 6 8 5 3", "ZI 2 6 -2 -1 10 3 0 -8 1 6 14 -6 0 1 0 5 -4 5 6 15", "J -7 6 8 8 0 11 16 1 6 -2 4 6 1 0 0 -7 8 2 9 -4", "SSGU -6 4 0 2 0 8 9 0 0 -2 -3 10 0 0 0 -1 5 0 0 7", "XLJM 6 9 -6 -2 7 2 6 18 2 4 -1 7 5 -7 -1 0 2 6 7 4", "I 5 7 -6 1 4 8 10 0 3 9 3 6 -4 8 5 2 0 12 9 5", "TAKMM 5 4 10 0 -4 -1 5 9 9 4 -5 8 5 2 0 6 12 0 4 5", "RMLWZM 0 -4 9 3 7 9 1 7 11 4 9 5 6 9 0 7 9 4 0 7", "V 7 13 -5 6 10 -6 0 5 14 9 -8 3 15 -4 7 4 5 5 7 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BY", "DS", "I", "J", "J", "L"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int teamSize = 12;
    vector<string> people = {"IF 0 -3 5 5 13 17 1 2 9 -3 0 6 1 7 7 11 -7 3 0 -1", "ZXL -3 0 13 15 8 3 -3 4 5 4 4 -6 0 7 -7 9 -6 2 9 7", "V 5 13 0 -1 18 11 2 3 3 6 0 0 2 -2 8 0 -4 2 2 1", "CGOS 5 15 -1 0 2 8 6 -6 5 6 -8 -4 4 3 6 8 0 5 3 7", "YIX 13 8 18 2 0 9 -5 2 6 8 -1 9 1 7 3 -5 1 13 0 12", "ZIO 17 3 11 8 9 0 6 2 6 6 -5 7 7 0 9 2 10 10 0 18", "XGF 1 -3 2 6 -5 6 0 4 15 10 5 0 16 2 5 9 0 4 -4 4", "NUUWA 2 4 3 -6 2 2 4 0 7 11 6 2 12 3 8 11 12 2 3 5", "EFEA 9 5 3 5 6 6 15 7 0 8 -1 6 8 -2 3 7 6 12 12 10", "V -3 4 6 6 8 6 10 11 8 0 1 5 17 8 -2 7 -6 0 2 0", "XV 0 4 0 -8 -1 -5 5 6 -1 1 0 3 1 15 1 1 10 6 11 9", "US 6 -6 0 -4 9 7 0 2 6 5 3 0 7 -7 10 -6 -9 1 11 1", "EPL 1 0 2 4 1 7 16 12 8 17 1 7 0 1 -5 8 5 8 0 -1", "XGH 7 7 -2 3 7 0 2 3 -2 8 15 -7 1 0 8 0 7 9 5 14", "WBJ 7 -7 8 6 3 9 5 8 3 -2 1 10 -5 8 0 7 5 10 -2 13", "BH 11 9 0 8 -5 2 9 11 7 7 1 -6 8 0 7 0 17 7 7 5", "F -7 -6 -4 0 1 10 0 12 6 -6 10 -9 5 7 5 17 0 9 5 1", "X 3 2 2 5 13 10 4 2 12 0 6 1 8 9 10 7 9 0 7 1", "O 0 9 2 3 0 0 -4 3 12 2 11 11 0 5 -2 7 5 7 0 0", "GOR -1 7 1 7 12 18 4 5 10 0 9 1 -1 14 13 5 1 1 0 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BH", "EFEA", "EPL", "F", "GOR", "NUUWA", "V", "WBJ", "X", "XGF", "XGH", "ZIO"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int teamSize = 12;
    vector<string> people = {"XX 0 0 -3 4 -2 -6 -4 3 7 0 11 -5 4 11 6 7 5 4 -2 8", "XY 0 0 8 8 6 -8 2 11 17 10 0 4 -3 1 6 12 -4 1 -2 0", "ZRZ -3 8 0 5 4 10 7 1 13 6 -1 8 3 -2 5 3 15 11 8 4", "NW 4 8 5 0 0 4 0 8 7 8 8 11 6 6 15 3 7 -2 7 -1", "DQ -2 6 4 0 0 10 3 1 -6 9 4 7 9 9 9 13 5 11 1 3", "K -6 -8 10 4 10 0 6 -5 7 3 4 13 1 6 3 -2 1 0 4 1", "DQEZ -4 2 7 0 3 6 0 1 10 9 0 1 15 0 -6 1 8 2 11 10", "IE 3 11 1 8 1 -5 1 0 13 7 -7 8 -2 3 1 -3 -2 5 1 4", "ICZ 7 17 13 7 -6 7 10 13 0 7 -2 2 8 0 6 13 9 9 6 8", "WA 0 10 6 8 9 3 9 7 7 0 13 -2 -2 2 0 -5 5 1 -3 -2", "ETC 11 0 -1 8 4 4 0 -7 -2 13 0 4 -4 -5 5 5 4 5 4 0", "FJ -5 4 8 11 7 13 1 8 2 -2 4 0 11 5 12 7 5 4 18 8", "J 4 -3 3 6 9 1 15 -2 8 -2 -4 11 0 3 3 3 4 13 1 11", "NOXZXX 11 1 -2 6 9 6 0 3 0 2 -5 5 3 0 0 0 4 5 5 7", "LC 6 6 5 15 9 3 -6 1 6 0 5 12 3 0 0 -6 1 14 14 4", "OX 7 12 3 3 13 -2 1 -3 13 -5 5 7 3 0 -6 0 7 5 -2 9", "USF 5 -4 15 7 5 1 8 -2 9 5 4 5 4 4 1 7 0 -7 5 5", "OB 4 1 11 -2 11 0 2 5 9 1 5 4 13 5 14 5 -7 0 -1 9", "JH -2 -2 8 7 1 4 11 1 6 -3 4 18 1 5 14 -2 5 -1 0 8", "ZJDSRA 8 0 4 -1 3 1 10 4 8 -2 0 8 11 7 4 9 5 9 8 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DQEZ", "FJ", "ICZ", "J", "JH", "K", "LC", "NW", "OB", "USF", "ZJDSRA", "ZRZ"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int teamSize = 4;
    vector<string> people = {"FOGKB 0 6 9 9 8 -7 10 4 -7 6 9 14 3 3 6 8 -7 5 0 5", "IS 6 0 -2 0 3 10 -7 2 7 3 -7 4 0 8 -2 10 5 -1 -5 9", "FY 9 -2 0 8 5 11 12 6 7 18 11 12 1 9 8 6 3 11 1 1", "UG 9 0 8 0 2 2 5 -6 1 5 -7 5 -2 14 3 14 -9 8 7 -8", "U 8 3 5 2 0 3 -3 10 -2 -7 8 9 6 12 7 -1 9 2 -2 4", "VT -7 10 11 2 3 0 4 16 7 6 15 2 15 13 6 1 2 13 3 7", "E 10 -7 12 5 -3 4 0 2 9 10 4 2 1 7 1 0 9 9 1 0", "XC 4 2 6 -6 10 16 2 0 12 15 8 8 5 14 3 3 4 13 14 0", "M -7 7 7 1 -2 7 9 12 0 15 -3 2 3 7 -2 9 5 1 8 1", "PDEA 6 3 18 5 -7 6 10 15 15 0 9 0 8 1 9 2 9 2 2 13", "IH 9 -7 11 -7 8 15 4 8 -3 9 0 1 6 5 5 -3 0 0 10 -3", "UG 14 4 12 5 9 2 2 8 2 0 1 0 2 3 1 0 10 5 8 18", "A 3 0 1 -2 6 15 1 5 3 8 6 2 0 15 10 3 -1 2 8 2", "OPF 3 8 9 14 12 13 7 14 7 1 5 3 15 0 -9 2 6 14 1 3", "XB 6 -2 8 3 7 6 1 3 -2 9 5 1 10 -9 0 -7 9 11 -3 14", "OG 8 10 6 14 -1 1 0 3 9 2 -3 0 3 2 -7 0 0 5 -6 -1", "DVGB -7 5 3 -9 9 2 9 4 5 9 0 10 -1 6 9 0 0 -2 0 -1", "HR 5 -1 11 8 2 13 9 13 1 2 0 5 2 14 11 5 -2 0 10 7", "Y 0 -5 1 7 -2 3 1 14 8 2 10 8 8 1 -3 -6 0 10 0 5", "KG 5 9 1 -8 4 7 0 0 1 13 -3 18 2 3 14 -1 -1 7 5 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HR", "OPF", "VT", "XC"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int teamSize = 17;
    vector<string> people = {"E 0 1 13 1 8 15 6 13 0 -1 -7 12 7 3 -2 7 9 3 -4 -3", "PC 1 0 3 8 0 12 7 -6 8 -8 -5 8 10 5 5 16 -2 9 8 7", "XT 13 3 0 0 -3 7 18 -1 7 5 0 0 -9 7 9 -5 5 10 7 8", "CF 1 8 0 0 10 1 17 5 8 3 0 12 17 14 -5 3 8 3 13 3", "ZVCYO 8 0 -3 10 0 7 7 10 1 7 9 6 0 3 8 9 -6 13 0 8", "CTRE 15 12 7 1 7 0 3 6 0 -8 4 1 1 -5 9 0 6 1 7 11", "ISS 6 7 18 17 7 3 0 4 1 8 4 -6 0 3 9 8 3 5 4 5", "B 13 -6 -1 5 10 6 4 0 5 12 11 4 0 10 13 5 0 8 2 6", "BO 0 8 7 8 1 0 1 5 0 8 0 11 11 2 2 -3 11 8 4 15", "WH -1 -8 5 3 7 -8 8 12 8 0 1 1 1 -5 3 4 16 6 9 8", "OL -7 -5 0 0 9 4 4 11 0 1 0 2 2 7 -2 0 8 10 13 12", "F 12 8 0 12 6 1 -6 4 11 1 2 0 8 -4 0 9 2 6 12 -1", "CXBG 7 10 -9 17 0 1 0 0 11 1 2 8 0 10 13 2 6 5 2 2", "O 3 5 7 14 3 -5 3 10 2 -5 7 -4 10 0 -3 1 -6 -1 2 2", "LST -2 5 9 -5 8 9 9 13 2 3 -2 0 13 -3 0 0 0 7 5 15", "N 7 16 -5 3 9 0 8 5 -3 4 0 9 2 1 0 0 7 2 1 7", "VK 9 -2 5 8 -6 6 3 0 11 16 8 2 6 -6 0 7 0 9 -5 -3", "PJEKG 3 9 10 3 13 1 5 8 8 6 10 6 5 -1 7 2 9 0 1 -7", "CY -4 8 7 13 0 7 4 2 4 9 13 12 2 2 5 1 -5 1 0 -1", "U -3 7 8 3 8 11 5 6 15 8 12 -1 2 2 15 7 -3 -7 -1 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "BO", "CF", "CTRE", "CXBG", "E", "F", "ISS", "LST", "N", "PC", "PJEKG", "U", "VK", "WH", "XT", "ZVCYO"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int teamSize = 6;
    vector<string> people = {"BQ 0 8 17 4 3 2 -3 5 13 5 10 -5 4 -6 2 12 1 5 10 5", "EOVS 8 0 10 4 -4 2 5 5 6 2 5 1 3 12 13 6 11 8 -4 4", "S 17 10 0 -6 0 8 5 4 0 5 0 -2 12 13 8 4 -5 15 11 8", "EIR 4 4 -6 0 0 -6 9 -3 0 3 0 -1 13 8 5 5 16 13 5 2", "FX 3 -4 0 0 0 7 5 8 8 12 0 -2 1 6 12 4 9 1 3 1", "VUA 2 2 8 -6 7 0 5 7 5 -2 12 2 4 14 -3 1 6 2 7 10", "ZXBT -3 5 5 9 5 5 0 0 7 7 8 -2 0 -3 -4 6 9 2 0 10", "TVDZ 5 5 4 -3 8 7 0 0 12 -4 12 -1 3 12 3 3 1 9 1 8", "ILUB 13 6 0 0 8 5 7 12 0 15 1 -1 12 8 -5 0 2 3 3 7", "YZT 5 2 5 3 12 -2 7 -4 15 0 2 4 5 2 3 8 4 3 17 17", "FDY 10 5 0 0 0 12 8 12 1 2 0 4 5 -4 9 5 -1 4 7 13", "V -5 1 -2 -1 -2 2 -2 -1 -1 4 4 0 5 7 4 0 4 3 2 1", "B 4 3 12 13 1 4 0 3 12 5 5 5 0 8 1 15 -1 -2 12 1", "Y -6 12 13 8 6 14 -3 12 8 2 -4 7 8 0 7 -2 -5 5 7 9", "P 2 13 8 5 12 -3 -4 3 -5 3 9 4 1 7 0 11 3 -1 7 11", "LNCRR 12 6 4 5 4 1 6 3 0 8 5 0 15 -2 11 0 7 5 9 5", "UJ 1 11 -5 16 9 6 9 1 2 4 -1 4 -1 -5 3 7 0 -4 9 -3", "ND 5 8 15 13 1 2 2 9 3 3 4 3 -2 5 -1 5 -4 0 0 10", "G 10 -4 11 5 3 7 0 1 3 17 7 2 12 7 7 9 9 0 0 8", "CXL 5 4 8 2 1 10 10 8 7 17 13 1 1 9 11 5 -3 10 8 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "BQ", "G", "LNCRR", "S", "YZT"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int teamSize = 10;
    vector<string> people = {"EBBN 0 0 9 2 -7 8 7 5 10 9 13 5 10 7 1 16 12 0 0 0", "O 0 0 6 7 -1 7 9 14 10 -8 5 3 6 -5 15 6 4 3 3 10", "QWGA 9 6 0 1 7 10 3 -2 2 -3 6 4 10 16 2 3 14 5 8 9", "WWXQ 2 7 1 0 14 -8 7 -3 1 0 2 4 0 15 7 6 7 -5 0 6", "R -7 -1 7 14 0 8 0 -8 -5 13 9 4 1 9 10 -4 1 -1 3 0", "AZ 8 7 10 -8 8 0 3 1 18 0 3 -1 1 15 4 -4 2 1 6 2", "OJPIMN 7 9 3 7 0 3 0 4 14 9 1 -1 2 7 9 -1 12 5 7 3", "KU 5 14 -2 -3 -8 1 4 0 6 -4 16 13 2 7 8 11 9 0 3 2", "EY 10 10 2 1 -5 18 14 6 0 9 7 8 6 0 6 -2 0 -1 -1 1", "MI 9 -8 -3 0 13 0 9 -4 9 0 7 6 7 -1 5 -8 -5 5 -6 8", "JGJX 13 5 6 2 9 3 1 16 7 7 0 6 -2 0 8 3 4 6 -1 0", "GA 5 3 4 4 4 -1 -1 13 8 6 6 0 11 2 -4 1 6 14 -9 -3", "AF 10 6 10 0 1 1 2 2 6 7 -2 11 0 10 5 1 3 6 11 11", "E 7 -5 16 15 9 15 7 7 0 -1 0 2 10 0 5 7 4 0 2 6", "YYC 1 15 2 7 10 4 9 8 6 5 8 -4 5 5 0 -6 3 3 11 7", "LN 16 6 3 6 -4 -4 -1 11 -2 -8 3 1 1 7 -6 0 2 8 0 9", "S 12 4 14 7 1 2 12 9 0 -5 4 6 3 4 3 2 0 4 7 4", "ZWFU 0 3 5 -5 -1 1 5 0 -1 5 6 14 6 0 3 8 4 0 2 0", "EJ 0 3 8 0 3 6 7 3 -1 -6 -1 -9 11 2 11 0 7 2 0 1", "RRMXVDE 0 10 9 6 0 2 3 2 1 8 0 -3 11 6 7 9 4 0 1 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AZ", "EBBN", "EY", "JGJX", "KU", "O", "OJPIMN", "QWGA", "S", "YYC"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int teamSize = 15;
    vector<string> people = {"LGL 0 3 3 4 5 1 5 6 8 9 1 8 -8 4 1 12 4 9 -3 2", "TGJ 3 0 -4 9 9 0 3 1 0 -5 2 5 3 11 6 9 2 11 1 5", "S 3 -4 0 2 1 0 4 9 -4 15 0 3 -1 4 -4 9 -2 0 -7 2", "W 4 9 2 0 14 2 11 5 10 6 6 -8 7 8 5 5 1 10 -4 12", "JU 5 9 1 14 0 1 9 -4 3 9 -5 15 2 8 5 4 6 13 6 7", "D 1 0 0 2 1 0 3 11 3 4 16 8 5 4 0 3 15 6 10 7", "GZF 5 3 4 11 9 3 0 -7 -3 1 0 4 -6 0 4 6 3 -1 4 6", "EOV 6 1 9 5 -4 11 -7 0 -9 -3 4 6 14 -1 3 2 4 3 1 6", "UB 8 0 -4 10 3 3 -3 -9 0 -2 5 -2 13 4 5 -3 8 8 1 9", "L 9 -5 15 6 9 4 1 -3 -2 0 5 -4 13 9 2 14 -6 1 -3 1", "WM 1 2 0 6 -5 16 0 4 5 5 0 16 3 15 16 -6 5 0 14 8", "T 8 5 3 -8 15 8 4 6 -2 -4 16 0 9 14 -2 11 0 5 3 7", "RU -8 3 -1 7 2 5 -6 14 13 13 3 9 0 4 1 9 6 10 9 -2", "IJ 4 11 4 8 8 4 0 -1 4 9 15 14 4 0 2 11 9 6 -1 16", "DIJ 1 6 -4 5 5 0 4 3 5 2 16 -2 1 2 0 -5 4 6 -2 5", "AU 12 9 9 5 4 3 6 2 -3 14 -6 11 9 11 -5 0 9 12 0 2", "IKV 4 2 -2 1 6 15 3 4 8 -6 5 0 6 9 4 9 0 9 2 8", "UBYZ 9 11 0 10 13 6 -1 3 8 1 0 5 10 6 6 12 9 0 2 5", "MH -3 1 -7 -4 6 10 4 1 1 -3 14 3 9 -1 -2 0 2 2 0 2", "YVI 2 5 2 12 7 7 6 6 9 1 8 7 -2 16 5 2 8 5 2 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AU", "D", "IJ", "IKV", "JU", "L", "LGL", "RU", "T", "TGJ", "UB", "UBYZ", "W", "WM", "YVI"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int teamSize = 18;
    vector<string> people = {"W 0 -3 3 6 -1 3 8 0 0 11 10 3 -5 9 7 -4 7 -9 -2 1", "O -3 0 -3 0 9 5 1 4 10 3 -4 8 11 4 -9 4 -5 -2 3 10", "HJSJ 3 -3 0 2 5 11 4 6 -8 9 15 6 1 0 6 8 -2 9 8 -5", "XB 6 0 2 0 8 11 12 9 7 14 10 9 8 -4 -2 10 2 15 3 3", "PFT -1 9 5 8 0 4 3 14 15 3 1 9 2 11 2 4 -1 2 3 5", "FRR 3 5 11 11 4 0 0 4 5 10 9 0 1 -5 14 1 3 9 -5 3", "RER 8 1 4 12 3 0 0 2 -4 -7 6 11 5 8 -4 7 13 1 -6 9", "PN 0 4 6 9 14 4 2 0 -1 -1 8 1 9 1 -2 -4 5 4 1 6", "H 0 10 -8 7 15 5 -4 -1 0 8 0 8 14 0 2 -7 4 10 7 7", "SFL 11 3 9 14 3 10 -7 -1 8 0 2 0 -2 1 8 4 6 6 -9 8", "TJF 10 -4 15 10 1 9 6 8 0 2 0 3 3 7 3 7 4 2 11 2", "UXRL 3 8 6 9 9 0 11 1 8 0 3 0 4 12 0 4 13 10 -4 3", "D -5 11 1 8 2 1 5 9 14 -2 3 4 0 11 0 2 6 8 3 10", "FYK 9 4 0 -4 11 -5 8 1 0 1 7 12 11 0 17 8 4 2 4 3", "UK 7 -9 6 -2 2 14 -4 -2 2 8 3 0 0 17 0 -2 0 7 -1 4", "SK -4 4 8 10 4 1 7 -4 -7 4 7 4 2 8 -2 0 10 3 7 11", "SN 7 -5 -2 2 -1 3 13 5 4 6 4 13 6 4 0 10 0 -9 7 8", "HU -9 -2 9 15 2 9 1 4 10 6 2 10 8 2 7 3 -9 0 -6 -2", "HQ -2 3 8 3 3 -5 -6 1 7 -9 11 -4 3 4 -1 7 7 -6 0 9", "XGYAP 1 10 -5 3 5 3 9 6 7 8 2 3 10 3 4 11 8 -2 9 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"D", "FRR", "FYK", "H", "HJSJ", "HU", "PFT", "PN", "RER", "SFL", "SK", "SN", "TJF", "UK", "UXRL", "W", "XB", "XGYAP"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int teamSize = 9;
    vector<string> people = {"KQUK 0 -1 0 9 14 1 7 2 16 9 4 5 12 6 3 0 6 8 1 17", "UB -1 0 1 9 4 3 7 -3 -6 -3 1 12 -4 5 4 12 2 2 5 2", "RXK 0 1 0 9 -4 8 3 -2 8 -1 4 10 -3 11 1 3 0 5 12 6", "P 9 9 9 0 0 0 7 2 -6 -1 -3 5 7 13 13 3 9 -3 8 -2", "DLM 14 4 -4 0 0 8 -2 10 13 7 9 8 5 13 4 6 16 4 7 6", "RV 1 3 8 0 8 0 3 9 10 -2 6 3 12 7 7 12 16 6 8 8", "C 7 7 3 7 -2 3 0 14 -1 8 5 11 9 7 -3 13 2 1 8 8", "OMY 2 -3 -2 2 10 9 14 0 8 1 17 -7 2 6 7 0 4 18 8 5", "P 16 -6 8 -6 13 10 -1 8 0 4 -5 8 6 10 -4 1 9 9 7 9", "UD 9 -3 -1 -1 7 -2 8 1 4 0 -6 -1 3 9 9 9 6 14 14 3", "MJ 4 1 4 -3 9 6 5 17 -5 -6 0 14 3 1 7 3 11 -3 12 1", "R 5 12 10 5 8 3 11 -7 8 -1 14 0 -1 4 11 3 6 9 8 1", "E 12 -4 -3 7 5 12 9 2 6 3 3 -1 0 -1 7 4 12 0 12 7", "F 6 5 11 13 13 7 7 6 10 9 1 4 -1 0 5 0 -2 -1 11 -3", "UGR 3 4 1 13 4 7 -3 7 -4 9 7 11 7 5 0 14 7 0 -2 11", "TV 0 12 3 3 6 12 13 0 1 9 3 3 4 0 14 0 5 -1 4 14", "JJB 6 2 0 9 16 16 2 4 9 6 11 6 12 -2 7 5 0 -4 10 8", "WNX 8 2 5 -3 4 6 1 18 9 14 -3 9 0 -1 0 -1 -4 0 1 7", "AK 1 5 12 8 7 8 8 8 7 14 12 8 12 11 -2 4 10 1 0 2", "VJRF 17 2 6 -2 6 8 8 5 9 3 1 1 7 -3 11 14 8 7 2 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AK", "DLM", "E", "JJB", "KQUK", "OMY", "P", "RV", "VJRF"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int teamSize = 7;
    vector<string> people = {"D 0 10 2 3 2 15 -1 7 8 7 -1 8 7 4 6 7 6 -8 3 8", "DR 10 0 2 7 3 3 1 14 11 0 8 11 -8 4 6 8 12 10 1 11", "RJR 2 2 0 3 4 13 7 10 2 1 6 0 7 15 -6 -5 16 3 9 5", "OYKE 3 7 3 0 9 0 -1 -5 8 13 3 13 6 0 1 -6 8 0 4 4", "HB 2 3 4 9 0 5 -6 0 5 -2 14 3 7 9 3 0 1 5 4 4", "QO 15 3 13 0 5 0 -4 7 7 4 5 8 11 -7 2 14 0 6 -3 -5", "HT -1 1 7 -1 -6 -4 0 9 3 2 1 4 7 -8 3 2 13 14 10 3", "VQIR 7 14 10 -5 0 7 9 0 9 -2 4 2 5 14 5 3 7 7 7 6", "AT 8 11 2 8 5 7 3 9 0 7 4 10 6 10 1 1 -2 10 7 9", "VID 7 0 1 13 -2 4 2 -2 7 0 1 -7 1 -1 5 -6 6 9 10 3", "SBATO -1 8 6 3 14 5 1 4 4 1 0 4 -5 9 5 8 17 1 10 8", "RZ 8 11 0 13 3 8 4 2 10 -7 4 0 -2 2 -3 0 -3 0 7 -3", "XX 7 -8 7 6 7 11 7 5 6 1 -5 -2 0 2 11 3 7 8 3 3", "OVG 4 4 15 0 9 -7 -8 14 10 -1 9 2 2 0 3 10 9 7 1 3", "TBWAYF 6 6 -6 1 3 2 3 5 1 5 5 -3 11 3 0 6 -8 5 8 1", "AE 7 8 -5 -6 0 14 2 3 1 -6 8 0 3 10 6 0 1 0 14 11", "FA 6 12 16 8 1 0 13 7 -2 6 17 -3 7 9 -8 1 0 5 -3 3", "N -8 10 3 0 5 6 14 7 10 9 1 0 8 7 5 0 5 0 0 11", "JRD 3 1 9 4 4 -3 10 7 7 10 10 7 3 1 8 14 -3 0 0 5", "BBHB 8 11 5 4 4 -5 3 6 9 3 8 -3 3 3 1 11 3 11 5 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBHB", "DR", "FA", "OVG", "RJR", "SBATO", "VQIR"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int teamSize = 17;
    vector<string> people = {"PPD 0 2 -8 6 -5 0 0 7 5 12 -5 0 2 5 11 4 18 4 2 4", "A 2 0 5 9 11 8 -1 11 17 5 6 8 3 1 -4 -2 5 -1 7 14", "MWWS -8 5 0 4 1 8 4 1 12 1 -1 0 11 3 15 6 6 2 18 5", "UHZ 6 9 4 0 1 -4 5 14 14 -5 10 14 6 0 2 4 9 4 9 7", "BY -5 11 1 1 0 2 3 2 8 9 10 14 7 15 10 6 11 4 2 13", "LUB 0 8 8 -4 2 0 13 10 7 11 7 2 8 0 12 -5 1 8 10 1", "PGDG 0 -1 4 5 3 13 0 0 8 9 12 4 6 1 10 0 0 0 -4 4", "TY 7 11 1 14 2 10 0 0 7 0 9 5 6 -2 7 -1 2 -2 -9 9", "WU 5 17 12 14 8 7 8 7 0 1 4 0 17 -1 -5 16 12 7 7 8", "RWRE 12 5 1 -5 9 11 9 0 1 0 2 10 -1 3 0 0 7 8 -8 3", "ZJ -5 6 -1 10 10 7 12 9 4 2 0 9 9 3 5 14 -4 9 9 -5", "KAZQ 0 8 0 14 14 2 4 5 0 10 9 0 2 5 -6 10 7 7 7 6", "AI 2 3 11 6 7 8 6 6 17 -1 9 2 0 5 8 14 -7 9 13 13", "YXK 5 1 3 0 15 0 1 -2 -1 3 3 5 5 0 6 6 8 12 13 -5", "P 11 -4 15 2 10 12 10 7 -5 0 5 -6 8 6 0 9 7 5 0 16", "KQI 4 -2 6 4 6 -5 0 -1 16 0 14 10 14 6 9 0 9 0 7 3", "RPVW 18 5 6 9 11 1 0 2 12 7 -4 7 -7 8 7 9 0 8 3 1", "I 4 -1 2 4 4 8 0 -2 7 8 9 7 9 12 5 0 8 0 1 2", "XB 2 7 18 9 2 10 -4 -9 7 -8 9 7 13 13 0 7 3 1 0 2", "AJQX 4 14 5 7 13 1 4 9 8 3 -5 6 13 -5 16 3 1 2 2 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "AI", "AJQX", "BY", "I", "KAZQ", "KQI", "LUB", "MWWS", "P", "RPVW", "TY", "UHZ", "WU", "XB", "YXK", "ZJ"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int teamSize = 4;
    vector<string> people = {"PFD 0 8 3 -1 6 4 7 7 1 11 9 0 1 11 5 0 0 8 10 13", "JI 8 0 8 13 10 7 8 4 16 8 5 1 2 5 10 0 -7 -3 -4 4", "ING 3 8 0 17 2 8 4 -2 6 -3 -4 3 6 12 14 6 3 7 3 6", "KAOF -1 13 17 0 9 0 8 -2 0 7 7 4 5 2 13 1 9 4 -2 3", "W 6 10 2 9 0 -7 4 0 -3 -3 4 3 17 -2 1 12 12 5 7 10", "R 4 7 8 0 -7 0 4 -6 -6 13 -1 1 11 2 2 -1 0 6 15 4", "LT 7 8 4 8 4 4 0 1 3 -7 8 -3 -2 -7 16 16 5 11 0 6", "PJ 7 4 -2 -2 0 -6 1 0 9 -7 -1 -5 -5 5 5 0 8 5 9 4", "A 1 16 6 0 -3 -6 3 9 0 7 11 12 -1 7 3 12 18 2 2 7", "W 11 8 -3 7 -3 13 -7 -7 7 0 0 15 2 -8 5 6 11 5 5 0", "GKJ 9 5 -4 7 4 -1 8 -1 11 0 0 6 0 11 8 5 5 15 2 -1", "DJXI 0 1 3 4 3 1 -3 -5 12 15 6 0 8 7 8 4 2 7 4 8", "DSW 1 2 6 5 17 11 -2 -5 -1 2 0 8 0 2 -4 7 9 5 0 0", "D 11 5 12 2 -2 2 -7 5 7 -8 11 7 2 0 -6 16 5 9 -6 8", "ZI 5 10 14 13 1 2 16 5 3 5 8 8 -4 -6 0 8 -6 2 0 -2", "FRJ 0 0 6 1 12 -1 16 0 12 6 5 4 7 16 8 0 4 5 9 11", "RDF 0 -7 3 9 12 0 5 8 18 11 5 2 9 5 -6 4 0 8 -1 -6", "QYEN 8 -3 7 4 5 6 11 5 2 5 15 7 5 9 2 5 8 0 0 0", "X 10 -4 3 -2 7 15 0 9 2 5 2 4 0 -6 0 9 -1 0 0 -3", "HV 13 4 6 3 10 4 6 4 7 0 -1 8 0 8 -2 11 -6 0 -3 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ING", "JI", "KAOF", "ZI"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int teamSize = 17;
    vector<string> people = {"JOTB 0 12 2 -2 8 6 -3 8 16 7 5 8 4 8 7 16 8 -2 0 1", "NO 12 0 15 0 3 -3 13 7 5 -3 7 9 8 0 1 -1 -1 3 -2 0", "VUT 2 15 0 5 9 5 11 1 8 -4 0 -2 10 1 0 11 3 6 7 6", "ZY -2 0 5 0 0 -7 16 16 2 -1 8 -2 11 5 1 7 2 9 -3 9", "IP 8 3 9 0 0 -3 4 1 3 13 3 11 13 -2 7 -5 5 7 -6 6", "X 6 -3 5 -7 -3 0 9 11 -4 -2 5 16 6 4 4 16 7 3 12 8", "JV -3 13 11 16 4 9 0 3 3 2 7 9 0 16 3 9 0 1 11 0", "KHWI 8 7 1 16 1 11 3 0 3 3 13 12 6 7 9 9 4 8 -5 11", "C 16 5 8 2 3 -4 3 3 0 15 13 7 -6 11 3 8 8 0 11 -1", "M 7 -3 -4 -1 13 -2 2 3 15 0 5 5 -1 9 -6 10 2 6 6 9", "DWVWCL 5 7 0 8 3 5 7 13 13 5 0 7 -2 14 5 7 5 2 4 8", "X 8 9 -2 -2 11 16 9 12 7 5 7 0 5 3 9 -7 -6 -6 5 1", "H 4 8 10 11 13 6 0 6 -6 -1 -2 5 0 15 -2 5 0 6 -8 9", "YID 8 0 1 5 -2 4 16 7 11 9 14 3 15 0 1 7 10 1 7 1", "DVVJI 7 1 0 1 7 4 3 9 3 -6 5 9 -2 1 0 -3 -3 12 6 1", "U 16 -1 11 7 -5 16 9 9 8 10 7 -7 5 7 -3 0 10 7 6 3", "CRI 8 -1 3 2 5 7 0 4 8 2 5 -6 0 10 -3 10 0 5 14 0", "N -2 3 6 9 7 3 1 8 0 6 2 -6 6 1 12 7 5 0 0 8", "E 0 -2 7 -3 -6 12 11 -5 11 6 4 5 -8 7 6 6 14 0 0 1", "S 1 0 6 9 6 8 0 11 -1 9 8 1 9 1 1 3 0 8 1 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C", "DWVWCL", "H", "IP", "JOTB", "JV", "KHWI", "M", "N", "NO", "S", "U", "VUT", "X", "X", "YID", "ZY"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int teamSize = 2;
    vector<string> people = {"J 0 6 10 13 5 7 5 1 0 7 10 2 9 -4 -2 13 6 5 13 2", "HWA 6 0 1 2 14 -6 8 8 6 8 5 7 11 0 8 -8 4 5 9 11", "HB 10 1 0 4 8 9 5 1 12 10 -2 -1 1 9 4 7 11 1 6 3", "RV 13 2 4 0 -7 5 -1 8 7 8 10 1 12 7 -4 4 5 3 11 -6", "HK 5 14 8 -7 0 1 4 -2 4 -7 8 0 -3 -6 -4 5 0 7 11 3", "F 7 -6 9 5 1 0 9 11 9 11 -6 0 10 7 7 8 2 -1 7 5", "TC 5 8 5 -1 4 9 0 -1 5 7 3 -2 15 4 9 3 -1 8 0 4", "YP 1 8 1 8 -2 11 -1 0 14 2 10 3 2 3 0 -2 2 2 4 12", "WJC 0 6 12 7 4 9 5 14 0 10 -1 1 4 12 8 6 3 -7 -6 9", "UJ 7 8 10 8 -7 11 7 2 10 0 -6 5 -2 5 3 6 17 10 7 5", "XE 10 5 -2 10 8 -6 3 10 -1 -6 0 3 -3 6 2 3 9 1 3 1", "LTCYV 2 7 -1 1 0 0 -2 3 1 5 3 0 -3 2 2 -3 0 3 9 7", "D 9 11 1 12 -3 10 15 2 4 -2 -3 -3 0 4 9 0 18 0 1 4", "NU -4 0 9 7 -6 7 4 3 12 5 6 2 4 0 4 -3 1 12 7 16", "LT -2 8 4 -4 -4 7 9 0 8 3 2 2 9 4 0 12 3 -4 -3 3", "GA 13 -8 7 4 5 8 3 -2 6 6 3 -3 0 -3 12 0 -3 7 -1 4", "YY 6 4 11 5 0 2 -1 2 3 17 9 0 18 1 3 -3 0 2 -1 0", "AISM 5 5 1 3 7 -1 8 2 -7 10 1 3 0 12 -4 7 2 0 7 4", "P 13 9 6 11 11 7 0 4 -6 7 3 9 1 7 -3 -1 -1 7 0 4", "P 2 11 3 -6 3 5 4 12 9 5 1 7 4 16 3 4 0 4 4 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"D", "YY"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int teamSize = 17;
    vector<string> people = {"S 0 9 -4 1 12 5 9 7 14 2 1 4 16 -1 10 4 6 16 0 3", "XFSC 9 0 -8 7 1 4 -1 2 4 5 0 4 0 6 10 6 7 11 6 -3", "WO -4 -8 0 -2 -1 9 0 1 7 4 7 4 10 10 0 1 7 2 10 10", "IY 1 7 -2 0 10 10 14 0 15 5 6 0 7 6 0 -1 2 5 -2 1", "D 12 1 -1 10 0 12 2 -3 4 4 1 -5 7 0 2 3 6 12 11 -7", "AKXV 5 4 9 10 12 0 1 4 2 8 -1 5 -8 -9 6 5 -3 3 2 7", "U 9 -1 0 14 2 1 0 2 7 8 13 13 -2 8 6 4 13 -9 9 -3", "AVH 7 2 1 0 -3 4 2 0 14 4 4 -2 0 12 13 1 6 2 7 5", "D 14 4 7 15 4 2 7 14 0 -2 6 6 10 0 2 14 15 16 7 10", "KK 2 5 4 5 4 8 8 4 -2 0 -8 4 -3 6 1 -1 11 9 7 5", "BE 1 0 7 6 1 -1 13 4 6 -8 0 -1 8 -4 4 4 8 -5 6 12", "TTK 4 4 4 0 -5 5 13 -2 6 4 -1 0 7 10 1 2 8 -5 1 4", "N 16 0 10 7 7 -8 -2 0 10 -3 8 7 0 9 -3 6 1 7 15 -7", "HQ -1 6 10 6 0 -9 8 12 0 6 -4 10 9 0 16 3 7 15 7 6", "T 10 10 0 0 2 6 6 13 2 1 4 1 -3 16 0 5 -2 -6 8 -6", "QY 4 6 1 -1 3 5 4 1 14 -1 4 2 6 3 5 0 16 7 8 8", "GB 6 7 7 2 6 -3 13 6 15 11 8 8 1 7 -2 16 0 1 -3 4", "S 16 11 2 5 12 3 -9 2 16 9 -5 -5 7 15 -6 7 1 0 2 1", "CQJW 0 6 10 -2 11 2 9 7 7 7 6 1 15 7 8 8 -3 2 0 13", "X 3 -3 10 1 -7 7 -3 5 10 5 12 4 -7 6 -6 8 4 1 13 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AKXV", "AVH", "CQJW", "D", "D", "GB", "HQ", "IY", "KK", "N", "QY", "S", "S", "T", "TTK", "U", "XFSC"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int teamSize = 14;
    vector<string> people = {"X 0 7 -4 5 -4 16 3 7 5 11 7 2 6 2 1 -1 11 -5 -4 6", "FMD 7 0 3 1 -4 11 18 9 3 4 16 8 10 9 6 5 4 10 -6 2", "RNN -4 3 0 11 2 12 3 4 2 3 4 3 10 8 -4 10 9 6 3 -1", "IZT 5 1 11 0 5 12 5 3 8 8 9 16 7 -3 12 2 6 9 -1 12", "V -4 -4 2 5 0 -4 4 3 8 2 -7 16 7 14 2 5 -3 6 8 11", "Z 16 11 12 12 -4 0 7 -8 -1 4 -5 5 6 -1 4 1 5 9 5 8", "LK 3 18 3 5 4 7 0 11 7 9 1 5 -2 2 6 -1 8 13 10 4", "XXKFC 7 9 4 3 3 -8 11 0 -6 9 5 2 7 0 5 6 -7 13 1 2", "ZV 5 3 2 8 8 -1 7 -6 0 16 4 2 13 4 -4 5 9 15 -5 6", "AZC 11 4 3 8 2 4 9 9 16 0 3 0 12 -1 6 -7 -6 0 7 4", "ITS 7 16 4 9 -7 -5 1 5 4 3 0 6 1 -2 -4 10 7 18 6 5", "JOY 2 8 3 16 16 5 5 2 2 0 6 0 3 -3 -1 11 -4 0 -3 0", "L 6 10 10 7 7 6 -2 7 13 12 1 3 0 0 -4 15 0 16 -5 7", "H 2 9 8 -3 14 -1 2 0 4 -1 -2 -3 0 0 2 0 0 3 2 5", "LI 1 6 -4 12 2 4 6 5 -4 6 -4 -1 -4 2 0 4 -2 -1 2 7", "R -1 5 10 2 5 1 -1 6 5 -7 10 11 15 0 4 0 3 9 -2 14", "NX 11 4 9 6 -3 5 8 -7 9 -6 7 -4 0 0 -2 3 0 0 0 12", "AW -5 10 6 9 6 9 13 13 15 0 18 0 16 3 -1 9 0 0 3 4", "J -4 -6 3 -1 8 5 10 1 -5 7 6 -3 -5 2 2 -2 0 3 0 17", "G 6 2 -1 12 11 8 4 2 6 4 5 0 7 5 7 14 12 4 17 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AW", "AZC", "FMD", "G", "ITS", "IZT", "L", "LK", "NX", "R", "RNN", "X", "Z", "ZV"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int teamSize = 3;
    vector<string> people = {"DN 0 7 0 6 1 3 0 13 0 -5 2 2 3 8 5 14 14 18 4 2", "O 7 0 5 1 2 6 11 0 15 7 4 6 3 14 1 12 0 0 -1 1", "J 0 5 0 7 16 8 6 -4 7 10 0 -2 11 3 1 8 9 8 13 -1", "J 6 1 7 0 -2 -9 3 2 9 15 10 6 0 2 8 3 7 5 -4 -1", "UN 1 2 16 -2 0 -1 3 7 2 8 0 11 7 1 -3 1 -7 11 4 -1", "KTV 3 6 8 -9 -1 0 -5 4 5 -2 8 9 1 -3 3 11 11 4 5 8", "LX 0 11 6 3 3 -5 0 12 -4 2 -6 8 8 10 8 14 8 12 1 1", "VAOK 13 0 -4 2 7 4 12 0 6 5 3 3 1 7 18 10 12 9 1 3", "D 0 15 7 9 2 5 -4 6 0 -2 7 -4 9 -4 3 3 9 -4 10 4", "SK -5 7 10 15 8 -2 2 5 -2 0 9 8 10 1 7 3 4 15 -3 8", "T 2 4 0 10 0 8 -6 3 7 9 0 14 11 2 15 5 -1 -4 0 -6", "E 2 6 -2 6 11 9 8 3 -4 8 14 0 -3 0 11 5 8 6 8 0", "QZEC 3 3 11 0 7 1 8 1 9 10 11 -3 0 5 9 0 -6 4 -6 8", "YB 8 14 3 2 1 -3 10 7 -4 1 2 0 5 0 9 6 7 -2 6 16", "DDE 5 1 1 8 -3 3 8 18 3 7 15 11 9 9 0 -1 12 2 9 12", "D 14 12 8 3 1 11 14 10 3 3 5 5 0 6 -1 0 -2 -7 2 -3", "FY 14 0 9 7 -7 11 8 12 9 4 -1 8 -6 7 12 -2 0 0 4 0", "X 18 0 8 5 11 4 12 9 -4 15 -4 6 4 -2 2 -7 0 0 8 0", "IGZ 4 -1 13 -4 4 5 1 1 10 -3 0 8 -6 6 9 2 4 8 0 14", "DG 2 1 -1 -1 -1 8 1 3 4 8 -6 0 8 16 12 -3 0 0 14 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DDE", "FY", "VAOK"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int teamSize = 4;
    vector<string> people = {"ED 0 3 13 3 16 8 14 0 -1 5 9 1 5 -4 1 -3 10 2 -5 5", "ZOHDK 3 0 8 3 17 6 4 16 13 6 4 3 5 7 1 2 2 11 8 7", "AEPC 13 8 0 -2 11 5 2 13 11 0 9 7 5 5 3 6 6 -2 5 0", "KFV 3 3 -2 0 8 3 12 0 5 9 -4 14 1 3 8 6 2 5 3 7", "GR 16 17 11 8 0 -2 7 -4 12 0 9 3 12 1 5 8 -8 2 0 1", "W 8 6 5 3 -2 0 5 -3 7 -1 7 4 -8 3 -6 13 10 7 12 -4", "E 14 4 2 12 7 5 0 -2 0 7 5 5 10 0 0 3 3 -2 -6 13", "VHKV 0 16 13 0 -4 -3 -2 0 0 4 8 -2 2 2 1 6 7 3 9 7", "ZL -1 13 11 5 12 7 0 0 0 8 0 3 -3 7 0 -2 2 3 -2 -4", "XSDO 5 6 0 9 0 -1 7 4 8 0 -8 7 -7 9 -1 3 12 12 0 0", "NNBZIP 9 4 9 -4 9 7 5 8 0 -8 0 13 6 0 8 4 6 0 6 6", "JQF 1 3 7 14 3 4 5 -2 3 7 13 0 0 16 2 3 5 -1 8 2", "WX 5 5 5 1 12 -8 10 2 -3 -7 6 0 0 17 0 4 5 4 6 8", "Q -4 7 5 3 1 3 0 2 7 9 0 16 17 0 -2 10 -5 -1 0 7", "VBY 1 1 3 8 5 -6 0 1 0 -1 8 2 0 -2 0 -1 12 12 4 16", "UNB -3 2 6 6 8 13 3 6 -2 3 4 3 4 10 -1 0 8 5 -1 11", "ZIK 10 2 6 2 -8 10 3 7 2 12 6 5 5 -5 12 8 0 9 3 -3", "TRJ 2 11 -2 5 2 7 -2 3 3 12 0 -1 4 -1 12 5 9 0 6 9", "TXC -5 8 5 3 0 12 -6 9 -2 0 6 8 6 0 4 -1 3 6 0 13", "RYI 5 7 0 7 1 -4 13 7 -4 0 6 2 8 7 16 11 -3 9 13 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AEPC", "GR", "ZL", "ZOHDK"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int teamSize = 5;
    vector<string> people = {"Z 0 4 8 9 -5 6 4 15 1 7 11 -4 16 3 2 2 17 2 14 -1", "EDT 4 0 4 -4 5 9 5 0 6 7 -1 0 -2 -7 6 11 9 -3 -3 1", "BGZ 8 4 0 1 3 -1 5 -1 9 2 6 -4 12 0 5 4 -4 -3 0 -3", "L 9 -4 1 0 0 7 1 7 11 7 0 -1 11 0 16 5 16 9 14 4", "ETP -5 5 3 0 0 3 9 5 -3 10 6 14 0 7 -1 4 15 2 7 -3", "AELR 6 9 -1 7 3 0 3 10 12 1 8 6 10 7 1 4 15 3 -3 8", "WPVOUX 4 5 5 1 9 3 0 9 10 14 0 3 -4 0 1 3 3 4 -5 4", "AMLAL 15 0 -1 7 5 10 9 0 7 14 12 8 8 3 8 2 9 7 5 3", "P 1 6 9 11 -3 12 10 7 0 2 6 -2 -8 4 13 5 9 12 1 9", "RTHFX 7 7 2 7 10 1 14 14 2 0 2 7 7 15 0 4 12 0 1 6", "FN 11 -1 6 0 6 8 0 12 6 2 0 -6 2 1 0 2 4 10 9 3", "XBT -4 0 -4 -1 14 6 3 8 -2 7 -6 0 9 9 9 -5 6 6 7 9", "PJ 16 -2 12 11 0 10 -4 8 -8 7 2 9 0 4 2 6 8 5 8 -3", "TNLTE 3 -7 0 0 7 7 0 3 4 15 1 9 4 0 -2 -3 0 3 4 15", "ZS 2 6 5 16 -1 1 1 8 13 0 0 9 2 -2 0 4 1 1 13 13", "Y 2 11 4 5 4 4 3 2 5 4 2 -5 6 -3 4 0 2 12 -3 5", "Q 17 9 -4 16 15 15 3 9 9 12 4 6 8 0 1 2 0 7 7 1", "IUDE 2 -3 -3 9 2 3 4 7 12 0 10 6 5 3 1 12 7 0 9 -1", "IC 14 -3 0 14 7 -3 -5 5 1 1 9 7 8 4 13 -3 7 9 0 1", "FG -1 1 -3 4 -3 8 4 3 9 6 3 9 -3 15 13 5 1 -1 1 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"IC", "L", "PJ", "Q", "Z"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int teamSize = 19;
    vector<string> people = {"H 0 1 13 11 1 3 13 1 7 12 11 2 2 1 2 1 -6 9 -3 -5", "UXYT 1 0 1 -1 17 7 2 3 6 -1 -1 2 7 -6 6 3 5 3 1 -2", "ET 13 1 0 3 4 -6 3 9 11 7 10 6 14 -4 12 4 9 9 2 -6", "BP 11 -1 3 0 3 5 3 3 8 0 13 -3 5 -5 -2 7 3 -4 7 8", "Q 1 17 4 3 0 5 9 13 4 6 8 1 2 -3 3 7 -8 10 -1 -1", "SI 3 7 -6 5 5 0 12 11 3 7 4 6 -5 8 1 -4 -3 -8 2 9", "TT 13 2 3 3 9 12 0 -2 8 9 9 15 -3 -9 2 4 7 4 -4 13", "C 1 3 9 3 13 11 -2 0 13 13 9 -5 9 2 16 2 -3 4 5 9", "E 7 6 11 8 4 3 8 13 0 1 12 1 7 -2 14 -2 11 0 12 -6", "IUT 12 -1 7 0 6 7 9 13 1 0 9 7 7 -7 -3 14 -6 4 6 5", "GP 11 -1 10 13 8 4 9 9 12 9 0 18 6 3 -3 -1 9 2 7 1", "W 2 2 6 -3 1 6 15 -5 1 7 18 0 10 0 7 8 10 7 -6 4", "IG 2 7 14 5 2 -5 -3 9 7 7 6 10 0 5 6 2 7 0 -2 8", "Y 1 -6 -4 -5 -3 8 -9 2 -2 -7 3 0 5 0 0 7 8 8 13 9", "YOJ 2 6 12 -2 3 1 2 16 14 -3 -3 7 6 0 0 2 8 10 9 8", "THHB 1 3 4 7 7 -4 4 2 -2 14 -1 8 2 7 2 0 7 5 3 2", "I -6 5 9 3 -8 -3 7 -3 11 -6 9 10 7 8 8 7 0 4 9 3", "YNPRXS 9 3 9 -4 10 -8 4 4 0 4 2 7 0 8 10 5 4 0 3 7", "CD -3 1 2 7 -1 2 -4 5 12 6 7 -6 -2 13 9 3 9 3 0 -1", "KX -5 -2 -6 8 -1 9 13 9 -6 5 1 4 8 9 8 2 3 7 -1 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BP", "C", "CD", "E", "ET", "GP", "H", "I", "IG", "IUT", "KX", "Q", "SI", "THHB", "TT", "UXYT", "W", "YNPRXS", "YOJ"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int teamSize = 13;
    vector<string> people = {"YIR 0 10 1 6 10 0 5 4 5 2 4 2 3 0 4 14 7 5 11 12", "Z 10 0 9 9 6 -1 1 9 7 12 0 5 1 11 0 8 1 -1 11 -1", "HWAAP 1 9 0 6 10 9 10 6 0 5 8 3 0 3 12 -2 2 9 -1 5", "LVY 6 9 6 0 6 1 5 0 0 3 -4 0 11 4 9 0 3 -1 13 11", "AFB 10 6 10 6 0 5 3 9 8 3 0 12 -5 11 13 3 8 -3 6 9", "CQ 0 -1 9 1 5 0 5 -8 6 10 4 -5 10 2 9 -3 -1 9 9 10", "I 5 1 10 5 3 5 0 1 0 8 -7 4 0 6 9 18 16 8 -1 3", "YM 4 9 6 0 9 -8 1 0 7 6 9 3 -4 4 10 7 11 7 -4 9", "IMFE 5 7 0 0 8 6 0 7 0 2 5 15 6 11 16 7 8 6 4 1", "EWQX 2 12 5 3 3 10 8 6 2 0 10 2 5 8 -5 -8 1 -6 9 9", "SQRX 4 0 8 -4 0 4 -7 9 5 10 0 -3 -5 3 9 6 2 7 12 6", "WTH 2 5 3 0 12 -5 4 3 15 2 -3 0 8 -4 6 7 4 -4 4 -8", "D 3 1 0 11 -5 10 0 -4 6 5 -5 8 0 12 5 11 9 1 1 1", "Y 0 11 3 4 11 2 6 4 11 8 3 -4 12 0 5 10 -5 2 3 9", "TLFNA 4 0 12 9 13 9 9 10 16 -5 9 6 5 5 0 1 3 1 8 3", "O 14 8 -2 0 3 -3 18 7 7 -8 6 7 11 10 1 0 15 3 14 1", "TVAY 7 1 2 3 8 -1 16 11 8 1 2 4 9 -5 3 15 0 2 0 6", "QNX 5 -1 9 -1 -3 9 8 7 6 -6 7 -4 1 2 1 3 2 0 3 4", "X 11 11 -1 13 6 9 -1 -4 4 9 12 4 1 3 8 14 0 3 0 2", "CBU 12 -1 5 11 9 10 3 9 1 9 6 -8 1 9 3 1 6 4 2 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AFB", "CBU", "I", "IMFE", "LVY", "O", "TLFNA", "TVAY", "X", "Y", "YIR", "YM", "Z"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int teamSize = 6;
    vector<string> people = {"B 0 2 0 13 -3 0 1 -2 14 9 14 9 9 -4 -2 4 1 6 5 -3", "EA 2 0 8 0 12 -4 -4 7 3 -4 5 1 10 7 8 11 2 -1 4 -7", "J 0 8 0 8 0 -5 2 7 1 8 10 -5 0 -4 9 -1 -1 2 5 8", "UENQ 13 0 8 0 1 13 5 6 1 5 0 5 3 3 8 6 12 8 13 2", "I -3 12 0 1 0 14 6 2 -5 10 7 -4 14 5 0 7 4 0 12 0", "ID 0 -4 -5 13 14 0 11 10 10 -6 1 0 3 8 3 6 4 9 4 8", "KICR 1 -4 2 5 6 11 0 11 0 4 2 8 2 13 2 4 -4 8 8 9", "SK -2 7 7 6 2 10 11 0 -9 3 3 3 8 2 5 0 15 5 6 15", "Z 14 3 1 1 -5 10 0 -9 0 12 -3 2 3 3 -3 -6 2 -8 3 1", "DLN 9 -4 8 5 10 -6 4 3 12 0 2 1 13 13 7 4 8 17 5 2", "AUER 14 5 10 0 7 1 2 3 -3 2 0 -8 -3 4 7 5 8 1 -3 7", "MHC 9 1 -5 5 -4 0 8 3 2 1 -8 0 -5 3 1 7 5 -4 15 2", "V 9 10 0 3 14 3 2 8 3 13 -3 -5 0 2 9 -3 -1 9 -2 16", "WB -4 7 -4 3 5 8 13 2 3 13 4 3 2 0 2 0 10 2 6 1", "GL -2 8 9 8 0 3 2 5 -3 7 7 1 9 2 0 5 1 6 10 1", "PUHD 4 11 -1 6 7 6 4 0 -6 4 5 7 -3 0 5 0 -5 3 0 0", "K 1 2 -1 12 4 4 -4 15 2 8 8 5 -1 10 1 -5 0 -4 9 4", "PTU 6 -1 2 8 0 9 8 5 -8 17 1 -4 9 2 6 3 -4 0 -4 8", "X 5 4 5 13 12 4 8 6 3 5 -3 15 -2 6 10 0 9 -4 0 6", "LOG -3 -7 8 2 0 8 9 15 1 2 7 2 16 1 1 0 4 8 6 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ID", "KICR", "LOG", "PTU", "SK", "V"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int teamSize = 2;
    vector<string> people = {"W 0 -5 1 4 4 -3 -3 4 -6 4 2 5 -8 2 1 7 8 5 4 -1", "RZ -5 0 14 -2 1 -1 15 -4 6 13 2 1 5 8 4 0 1 5 10 3", "BZE 1 14 0 8 6 -7 4 7 2 6 5 17 -2 7 -9 3 2 -7 12 1", "MMND 4 -2 8 0 0 -3 12 14 -3 7 0 3 10 7 7 5 7 2 5 6", "UTL 4 1 6 0 0 9 5 5 3 3 1 -7 10 11 7 11 3 16 8 1", "G -3 -1 -7 -3 9 0 -2 12 7 1 -4 18 5 7 0 2 7 13 8 9", "VSQ -3 15 4 12 5 -2 0 -6 11 5 0 9 8 6 6 0 3 9 5 9", "MUN 4 -4 7 14 5 12 -6 0 11 9 -8 6 4 3 0 2 0 2 7 10", "ELA -6 6 2 -3 3 7 11 11 0 2 5 5 -1 6 4 10 0 6 2 1", "PC 4 13 6 7 3 1 5 9 2 0 -3 2 1 10 8 -3 10 8 15 7", "O 2 2 5 0 1 -4 0 -8 5 -3 0 12 3 1 12 -2 -6 9 3 -7", "GLCX 5 1 17 3 -7 18 9 6 5 2 12 0 5 -4 7 7 6 3 1 -6", "EJ -8 5 -2 10 10 5 8 4 -1 1 3 5 0 5 -5 1 -5 10 3 0", "XZH 2 8 7 7 11 7 6 3 6 10 1 -4 5 0 6 8 -3 11 9 5", "J 1 4 -9 7 7 0 6 0 4 8 12 7 -5 6 0 2 4 3 -2 -2", "JEIM 7 0 3 5 11 2 0 2 10 -3 -2 7 1 8 2 0 1 5 5 8", "SKK 8 1 2 7 3 7 3 0 0 10 -6 6 -5 -3 4 1 0 -6 9 6", "O 5 5 -7 2 16 13 9 2 6 8 9 3 10 11 3 5 -6 0 8 7", "RTC 4 10 12 5 8 8 5 7 2 15 3 1 3 9 -2 5 9 8 0 -3", "N -1 3 1 6 1 9 9 10 1 7 -7 -6 0 5 -2 8 6 7 -3 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"G", "GLCX"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int teamSize = 16;
    vector<string> people = {"G 0 9 9 3 6 8 8 -7 -1 4 14 -2 8 4 13 -3 6 13 -1 3", "D 9 0 10 5 5 11 1 8 7 11 9 17 7 -7 5 8 13 10 5 3", "GJ 9 10 0 -3 5 -7 2 3 17 4 0 2 12 -7 3 9 -4 4 8 5", "OVR 3 5 -3 0 -4 1 -6 4 1 7 8 1 8 0 3 7 -3 -3 13 7", "UCFSH 6 5 5 -4 0 4 8 5 12 10 4 0 3 5 2 6 7 0 3 -1", "ZVU 8 11 -7 1 4 0 8 1 13 18 0 -2 2 8 11 16 6 2 9 4", "XIEK 8 1 2 -6 8 8 0 4 -2 3 7 9 7 -9 16 8 8 -6 9 7", "AYAH -7 8 3 4 5 1 4 0 11 9 7 2 2 9 13 1 7 3 0 13", "P -1 7 17 1 12 13 -2 11 0 0 3 8 -4 7 8 8 18 8 9 4", "DV 4 11 4 7 10 18 3 9 0 0 9 1 13 -1 11 -1 10 0 3 9", "IJUC 14 9 0 8 4 0 7 7 3 9 0 3 1 0 -1 9 8 -5 5 10", "T -2 17 2 1 0 -2 9 2 8 1 3 0 -7 7 -6 -3 12 -7 5 11", "ZZG 8 7 12 8 3 2 7 2 -4 13 1 -7 0 5 9 -5 4 4 6 4", "TT 4 -7 -7 0 5 8 -9 9 7 -1 0 7 5 0 8 13 3 12 3 7", "PI 13 5 3 3 2 11 16 13 8 11 -1 -6 9 8 0 6 4 9 14 9", "CP -3 8 9 7 6 16 8 1 8 -1 9 -3 -5 13 6 0 11 1 5 9", "Q 6 13 -4 -3 7 6 8 7 18 10 8 12 4 3 4 11 0 8 12 11", "Z 13 10 4 -3 0 2 -6 3 8 0 -5 -7 4 12 9 1 8 0 12 3", "MMZ -1 5 8 13 3 9 9 0 9 3 5 5 6 3 14 5 12 12 0 1", "TI 3 3 5 7 -1 4 7 13 4 9 10 11 4 7 9 9 11 3 1 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AYAH", "CP", "D", "DV", "G", "GJ", "IJUC", "MMZ", "P", "PI", "Q", "TI", "UCFSH", "XIEK", "ZVU", "ZZG"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int teamSize = 6;
    vector<string> people = {"GV 0 10 3 3 2 0 7 1 0 -3 10 -1 -4 -3 -7 7 7 4 0 8", "M 10 0 7 7 11 0 1 13 3 4 -6 5 13 4 10 5 1 9 8 -8", "FXA 3 7 0 14 -5 14 7 0 9 2 9 6 4 5 2 4 16 2 16 5", "MIBYL 3 7 14 0 0 2 3 11 11 12 7 1 5 0 3 9 15 0 2 8", "PAW 2 11 -5 0 0 12 7 -2 2 5 0 0 9 1 4 -5 1 -7 9 7", "RM 0 0 14 2 12 0 -3 7 3 6 4 9 8 0 -1 3 2 9 0 6", "OD 7 1 7 3 7 -3 0 -2 -2 9 9 6 -6 5 2 12 11 2 -5 4", "UZW 1 13 0 11 -2 7 -2 0 2 -3 10 5 9 0 0 3 1 7 9 6", "RK 0 3 9 11 2 3 -2 2 0 8 10 7 6 15 7 2 -4 4 -8 -2", "SSFQ -3 4 2 12 5 6 9 -3 8 0 0 0 -2 2 17 8 8 0 4 7", "ME 10 -6 9 7 0 4 9 10 10 0 0 -2 13 7 -8 7 7 8 8 1", "S -1 5 6 1 0 9 6 5 7 0 -2 0 -2 0 -8 0 11 6 12 -2", "K -4 13 4 5 9 8 -6 9 6 -2 13 -2 0 10 7 1 8 13 7 5", "N -3 4 5 0 1 0 5 0 15 2 7 0 10 0 -5 2 -8 18 -1 12", "X -7 10 2 3 4 -1 2 0 7 17 -8 -8 7 -5 0 -6 6 9 -2 5", "IEV 7 5 4 9 -5 3 12 3 2 8 7 0 1 2 -6 0 -3 5 5 12", "RXA 7 1 16 15 1 2 11 1 -4 8 7 11 8 -8 6 -3 0 2 0 8", "M 4 9 2 0 -7 9 2 7 4 0 8 6 13 18 9 5 2 0 2 15", "IZ 0 8 16 2 9 0 -5 9 -8 4 8 12 7 -1 -2 5 0 2 0 5", "MGK 8 -8 5 8 7 6 4 6 -2 7 1 -2 5 12 5 12 8 15 5 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"K", "M", "ME", "MGK", "N", "RK"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int teamSize = 3;
    vector<string> people = {"BCI 0 6 3 3 -3 7 9 4 9 0 -4 -1 4 13 3 9 9 -3 4 -2", "WG 6 0 5 13 1 5 -1 2 10 14 15 -1 2 8 7 0 7 10 -7 0", "AZ 3 5 0 10 -3 0 6 18 5 8 4 13 15 5 17 9 7 0 16 7", "V 3 13 10 0 -7 9 1 15 10 10 2 7 0 3 18 5 9 0 2 10", "SXQ -3 1 -3 -7 0 9 6 5 3 2 1 -1 1 9 3 3 -1 0 -1 -8", "YZ 7 5 0 9 9 0 -1 5 1 5 9 -6 4 -1 3 4 -6 5 3 11", "UWKQ 9 -1 6 1 6 -1 0 6 0 7 6 6 3 1 17 4 7 -6 6 -7", "JP 4 2 18 15 5 5 6 0 1 0 3 11 4 12 12 6 8 12 1 4", "ODZLT 9 10 5 10 3 1 0 1 0 7 5 8 6 0 17 7 4 -3 6 1", "OSK 0 14 8 10 2 5 7 0 7 0 11 3 -2 7 14 4 14 4 -7 1", "EB -4 15 4 2 1 9 6 3 5 11 0 12 4 8 5 12 16 4 7 0", "L -1 -1 13 7 -1 -6 6 11 8 3 12 0 -5 0 3 3 10 3 4 8", "QUJU 4 2 15 0 1 4 3 4 6 -2 4 -5 0 -1 -2 0 0 3 6 8", "DW 13 8 5 3 9 -1 1 12 0 7 8 0 -1 0 8 2 0 9 1 1", "Z 3 7 17 18 3 3 17 12 17 14 5 3 -2 8 0 9 0 0 -2 12", "SBY 9 0 9 5 3 4 4 6 7 4 12 3 0 2 9 0 4 8 15 1", "HZE 9 7 7 9 -1 -6 7 8 4 14 16 10 0 0 0 4 0 13 -7 8", "W -3 10 0 0 0 5 -6 12 -3 4 4 3 3 9 0 8 13 0 5 5", "DO 4 -7 16 2 -1 3 6 1 6 -7 7 4 6 1 -2 15 -7 5 0 -9", "PJT -2 0 7 10 -8 11 -7 4 1 1 0 8 8 1 12 1 8 5 -9 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AZ", "JP", "Z"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int teamSize = 5;
    vector<string> people = {"NW 0 -3 8 10 3 0 -1 9 3 8 -7 1 7 14 -5 8 4 5 -1 14", "OG -3 0 4 -2 9 11 9 5 7 0 10 4 14 6 4 1 -8 0 -8 9", "HQYSZ 8 4 0 9 6 12 14 7 5 -1 2 11 12 4 5 8 7 1 0 6", "Q 10 -2 9 0 8 2 -9 9 7 -1 -3 7 1 17 1 -1 13 0 1 -5", "DWD 3 9 6 8 0 11 1 9 7 5 7 -1 8 10 5 8 16 -7 0 -2", "W 0 11 12 2 11 0 0 12 14 7 4 9 7 10 14 2 17 9 2 1", "LZ -1 9 14 -9 1 0 0 12 8 10 4 5 8 -1 6 3 8 -2 1 7", "O 9 5 7 9 9 12 12 0 9 9 6 11 13 5 3 -6 3 1 -1 2", "AE 3 7 5 7 7 14 8 9 0 -5 12 3 12 -8 17 11 4 4 10 2", "W 8 0 -1 -1 5 7 10 9 -5 0 4 1 13 -3 9 16 7 5 -3 3", "ERXE -7 10 2 -3 7 4 4 6 12 4 0 4 -3 9 7 10 2 1 7 5", "MYT 1 4 11 7 -1 9 5 11 3 1 4 0 2 1 0 4 -6 11 7 4", "HL 7 14 12 1 8 7 8 13 12 13 -3 2 0 4 6 -4 9 -7 7 9", "L 14 6 4 17 10 10 -1 5 -8 -3 9 1 4 0 1 6 10 8 5 3", "JHD -5 4 5 1 5 14 6 3 17 9 7 0 6 1 0 6 2 13 1 3", "JXIN 8 1 8 -1 8 2 3 -6 11 16 10 4 -4 6 6 0 6 8 2 9", "DG 4 -8 7 13 16 17 8 3 4 7 2 -6 9 10 2 6 0 2 -2 5", "YJ 5 0 1 0 -7 9 -2 1 4 5 1 11 -7 8 13 8 2 0 -2 1", "LXW -1 -8 0 1 0 2 1 -1 10 -3 7 7 7 5 1 2 -2 -2 0 4", "HTF 14 9 6 -5 -2 1 7 2 2 3 5 4 9 3 3 9 5 1 4 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DG", "DWD", "L", "Q", "W"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int teamSize = 11;
    vector<string> people = {"N 0 8 2 13 3 1 8 4 0 -6 10 10 4 4 5 7 -1 1 0 4", "W 8 0 10 8 8 -4 11 -1 13 2 2 7 -1 11 10 6 -2 6 6 3", "Z 2 10 0 12 12 -1 4 5 6 -3 0 10 3 2 -1 11 1 11 8 3", "QB 13 8 12 0 6 6 4 5 7 4 2 9 8 1 5 5 17 9 3 -1", "ZKH 3 8 12 6 0 1 10 5 -1 3 3 12 3 2 4 3 5 10 13 1", "T 1 -4 -1 6 1 0 3 15 0 8 5 1 0 6 15 15 -6 6 5 3", "CE 8 11 4 4 10 3 0 8 16 -7 8 0 -2 1 4 -4 14 1 1 -4", "I 4 -1 5 5 5 15 8 0 12 7 -4 -3 -4 5 5 14 7 11 9 9", "MN 0 13 6 7 -1 0 16 12 0 11 13 -2 -9 2 9 1 7 8 8 8", "HF -6 2 -3 4 3 8 -7 7 11 0 7 3 10 4 9 0 8 13 -1 1", "EZ 10 2 0 2 3 5 8 -4 13 7 0 4 8 7 3 5 0 17 13 1", "GC 10 7 10 9 12 1 0 -3 -2 3 4 0 4 8 6 -6 9 -3 9 -7", "QTC 4 -1 3 8 3 0 -2 -4 -9 10 8 4 0 3 2 6 4 8 2 -6", "DNGQZ 4 11 2 1 2 6 1 5 2 4 7 8 3 0 0 1 8 6 4 17", "I 5 10 -1 5 4 15 4 5 9 9 3 6 2 0 0 16 7 0 0 8", "XK 7 6 11 5 3 15 -4 14 1 0 5 -6 6 1 16 0 4 3 -2 13", "DKD -1 -2 1 17 5 -6 14 7 7 8 0 9 4 8 7 4 0 -1 -6 0", "BY 1 6 11 9 10 6 1 11 8 13 17 -3 8 6 0 3 -1 0 -6 9", "QTCI 0 6 8 3 13 5 1 9 8 -1 13 9 2 4 0 -2 -6 -6 0 6", "BDWL 4 3 3 -1 1 3 -4 9 8 1 1 -7 -6 17 8 13 0 9 6 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BDWL", "BY", "DNGQZ", "EZ", "HF", "I", "I", "MN", "T", "W", "XK"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int teamSize = 18;
    vector<string> people = {"UKL 0 -7 4 -8 8 -1 4 -5 6 9 13 5 11 1 4 3 -9 8 5 8", "YO -7 0 7 -3 -2 13 5 8 -4 4 11 6 8 5 10 8 11 8 9 5", "VUE 4 7 0 5 8 -3 -1 7 9 11 -5 11 15 3 5 -1 2 7 0 9", "NO -8 -3 5 0 -3 2 -1 0 8 11 6 11 -1 3 0 9 4 5 0 6", "PAYK 8 -2 8 -3 0 6 8 3 0 0 5 7 10 7 -8 2 2 1 5 0", "EEZF -1 13 -3 2 6 0 2 8 8 8 2 3 8 2 4 10 4 9 2 2", "V 4 5 -1 -1 8 2 0 2 0 9 -1 12 3 4 2 1 2 7 8 2", "Z -5 8 7 0 3 8 2 0 5 5 -4 -2 10 3 -1 10 -7 5 -5 -5", "X 6 -4 9 8 0 8 0 5 0 4 3 -5 7 8 0 17 3 3 0 13", "YSUIT 9 4 11 11 0 8 9 5 4 0 7 4 5 9 5 7 5 11 -2 9", "HRL 13 11 -5 6 5 2 -1 -4 3 7 0 -4 8 9 -4 1 4 5 3 8", "N 5 6 11 11 7 3 12 -2 -5 4 -4 0 9 8 8 -1 5 6 9 5", "DK 11 8 15 -1 10 8 3 10 7 5 8 9 0 0 3 -5 3 -1 4 13", "ABUSA 1 5 3 3 7 2 4 3 8 9 9 8 0 0 3 1 -3 5 6 12", "XK 4 10 5 0 -8 4 2 -1 0 5 -4 8 3 3 0 14 10 -2 1 18", "J 3 8 -1 9 2 10 1 10 17 7 1 -1 -5 1 14 0 -7 9 0 -8", "JUG -9 11 2 4 2 4 2 -7 3 5 4 5 3 -3 10 -7 0 -2 4 4", "YQQ 8 8 7 5 1 9 7 5 3 11 5 6 -1 5 -2 9 -2 0 -4 12", "WTGSNK 5 9 0 0 5 2 8 -5 0 -2 3 9 4 6 1 0 4 -4 0 -5", "DE 8 5 9 6 0 2 2 -5 13 9 8 5 13 12 18 -8 4 12 -5 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABUSA", "DE", "DK", "EEZF", "HRL", "J", "N", "NO", "PAYK", "UKL", "V", "VUE", "X", "XK", "YO", "YQQ", "YSUIT", "Z"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int teamSize = 13;
    vector<string> people = {"GTM 0 9 10 0 1 15 5 5 5 7 11 -7 12 5 4 1 9 0 5 0", "YJ 9 0 -1 -4 -5 4 5 11 0 12 10 -3 2 7 2 9 3 -2 5 9", "XHN 10 -1 0 9 0 9 9 7 0 10 0 0 7 5 12 17 7 8 2 3", "T 0 -4 9 0 12 9 7 7 -3 13 0 10 7 9 11 14 10 9 1 4", "W 1 -5 0 12 0 9 7 15 9 -6 5 6 0 10 8 3 16 8 -4 6", "YBK 15 4 9 9 9 0 2 8 14 -1 7 4 4 -2 -2 7 8 6 4 4", "U 5 5 9 7 7 2 0 11 -4 -4 6 9 10 3 8 12 -3 -1 2 10", "VJJ 5 11 7 7 15 8 11 0 5 13 6 4 -5 6 10 1 -1 6 2 3", "PKC 5 0 0 -3 9 14 -4 5 0 -2 -3 9 8 2 16 6 13 6 1 8", "B 7 12 10 13 -6 -1 -4 13 -2 0 0 9 2 5 0 0 1 4 3 -7", "TUN 11 10 0 0 5 7 6 6 -3 0 0 8 17 8 8 1 5 -5 16 14", "S -7 -3 0 10 6 4 9 4 9 9 8 0 11 16 2 6 1 0 14 -6", "YJ 12 2 7 7 0 4 10 -5 8 2 17 11 0 -1 10 15 6 8 0 2", "DDB 5 7 5 9 10 -2 3 6 2 5 8 16 -1 0 2 18 -1 0 7 5", "FN 4 2 12 11 8 -2 8 10 16 0 8 2 10 2 0 10 2 12 7 2", "HT 1 9 17 14 3 7 12 1 6 0 1 6 15 18 10 0 6 -4 1 7", "W 9 3 7 10 16 8 -3 -1 13 1 5 1 6 -1 2 6 0 7 -5 9", "IY 0 -2 8 9 8 6 -1 6 6 4 -5 0 8 0 12 -4 7 0 8 5", "NGMRFQ 5 5 2 1 -4 4 2 2 1 3 16 14 0 7 7 1 -5 8 0 4", "YOC 0 9 3 4 6 4 10 3 8 -7 14 -6 2 5 2 7 9 5 4 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FN", "GTM", "HT", "IY", "PKC", "T", "U", "VJJ", "W", "W", "XHN", "YBK", "YJ"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int teamSize = 5;
    vector<string> people = {"EH 0 6 -2 -6 12 14 1 5 16 0 1 4 1 13 8 6 11 9 1 5", "GIP 6 0 10 -3 3 -3 5 9 14 1 8 12 0 3 14 -3 2 7 9 9", "PG -2 10 0 4 9 -7 13 2 5 6 2 0 6 1 -5 3 -2 9 -7 5", "ABV -6 -3 4 0 2 3 7 -4 1 7 0 9 1 -2 2 4 -6 2 5 9", "Y 12 3 9 2 0 1 7 1 11 -2 -2 -1 16 12 -7 4 9 8 7 9", "JZCON 14 -3 -7 3 1 0 6 7 1 -4 4 15 3 3 6 3 5 2 8 2", "V 1 5 13 7 7 6 0 9 8 9 7 10 9 8 1 5 -2 3 2 11", "VNYV 5 9 2 -4 1 7 9 0 9 9 13 11 13 6 2 15 4 9 5 7", "HV 16 14 5 1 11 1 8 9 0 3 8 6 0 11 8 -2 6 -5 1 7", "EBJQ 0 1 6 7 -2 -4 9 9 3 0 2 7 -1 -2 0 -1 8 0 2 -2", "FW 1 8 2 0 -2 4 7 13 8 2 0 8 1 -3 0 3 -2 -3 3 10", "YXPR 4 12 0 9 -1 15 10 11 6 7 8 0 11 6 6 7 8 6 9 6", "BXED 1 0 6 1 16 3 9 13 0 -1 1 11 0 8 9 4 -5 5 3 -6", "B 13 3 1 -2 12 3 8 6 11 -2 -3 6 8 0 7 0 4 3 1 12", "KLR 8 14 -5 2 -7 6 1 2 8 0 0 6 9 7 0 8 4 6 2 2", "I 6 -3 3 4 4 3 5 15 -2 -1 3 7 4 0 8 0 8 0 -2 5", "SN 11 2 -2 -6 9 5 -2 4 6 8 -2 8 -5 4 4 8 0 5 1 -2", "NSGR 9 7 9 2 8 2 3 9 -5 0 -3 6 5 3 6 0 5 0 6 -6", "FNOKL 1 9 -7 5 7 8 2 5 1 2 3 9 3 1 2 -2 1 6 0 8", "DP 5 9 5 9 9 2 11 7 7 -2 10 6 -6 12 2 5 -2 -6 8 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "DP", "EH", "HV", "Y"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int teamSize = 15;
    vector<string> people = {"V 0 0 8 6 -2 -1 9 4 8 1 -1 3 1 -5 7 16 5 2 1 6", "NQZ 0 0 16 -2 17 13 6 5 1 0 3 14 3 9 11 14 7 3 9 8", "NU 8 16 0 14 2 2 3 7 4 -2 4 3 -3 -1 -1 1 7 15 2 7", "EGI 6 -2 14 0 0 6 2 8 0 -6 -4 1 1 4 11 6 0 10 1 3", "KNT -2 17 2 0 0 8 0 -4 9 3 2 9 9 5 -7 8 -5 15 11 2", "ZN -1 13 2 6 8 0 4 1 -7 1 3 7 9 4 8 10 1 -7 4 2", "I 9 6 3 2 0 4 0 0 -3 13 0 -8 3 -2 10 9 12 11 9 11", "TTR 4 5 7 8 -4 1 0 0 16 0 8 5 -5 9 1 0 9 12 -7 -6", "I 8 1 4 0 9 -7 -3 16 0 0 8 15 7 13 -6 -4 -4 2 6 -6", "PY 1 0 -2 -6 3 1 13 0 0 0 -4 1 7 2 1 2 5 2 3 10", "QROG -1 3 4 -4 2 3 0 8 8 -4 0 1 0 11 3 -6 9 5 2 -8", "OJO 3 14 3 1 9 7 -8 5 15 1 1 0 0 5 6 16 11 2 8 5", "BY 1 3 -3 1 9 9 3 -5 7 7 0 0 0 12 4 5 3 12 15 0", "EZZ -5 9 -1 4 5 4 -2 9 13 2 11 5 12 0 5 6 8 7 8 1", "A 7 11 -1 11 -7 8 10 1 -6 1 3 6 4 5 0 10 11 9 6 1", "W 16 14 1 6 8 10 9 0 -4 2 -6 16 5 6 10 0 1 1 -2 5", "BM 5 7 7 0 -5 1 12 9 -4 5 9 11 3 8 11 1 0 13 -1 7", "J 2 3 15 10 15 -7 11 12 2 2 5 2 12 7 9 1 13 0 10 9", "Q 1 9 2 1 11 4 9 -7 6 3 2 8 15 8 6 -2 -1 10 0 9", "IUCCM 6 8 7 3 2 2 11 -6 -6 10 -8 5 0 1 1 5 7 9 9 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "BM", "BY", "EGI", "EZZ", "I", "IUCCM", "J", "KNT", "NQZ", "NU", "OJO", "Q", "W", "ZN"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int teamSize = 11;
    vector<string> people = {"GN 0 8 3 5 8 12 5 17 2 4 7 -2 -3 16 1 -1 9 10 6 -4", "EG 8 0 13 10 -7 5 2 3 0 14 0 9 0 2 8 6 -1 3 9 14", "H 3 13 0 14 6 8 17 -2 0 5 17 2 4 -1 8 1 7 2 1 8", "X 5 10 14 0 10 9 11 11 4 2 11 10 13 12 0 2 4 0 2 7", "K 8 -7 6 10 0 15 0 4 0 11 8 5 -5 6 -3 8 3 -5 11 6", "JOS 12 5 8 9 15 0 1 9 5 5 6 7 2 13 8 4 0 -3 10 7", "CVH 5 2 17 11 0 1 0 4 7 -4 5 6 9 -5 7 13 11 10 5 7", "OS 17 3 -2 11 4 9 4 0 11 8 6 12 5 3 4 3 12 8 3 9", "K 2 0 0 4 0 5 7 11 0 11 8 7 7 11 3 9 4 7 11 -2", "H 4 14 5 2 11 5 -4 8 11 0 13 5 1 5 3 3 -2 10 -6 7", "RYMA 7 0 17 11 8 6 5 6 8 13 0 7 -1 3 3 -5 -1 6 2 0", "VYG -2 9 2 10 5 7 6 12 7 5 7 0 8 0 -2 11 10 2 3 2", "ZK -3 0 4 13 -5 2 9 5 7 1 -1 8 0 0 7 13 0 -3 -6 17", "OB 16 2 -1 12 6 13 -5 3 11 5 3 0 0 0 9 8 1 -2 11 8", "E 1 8 8 0 -3 8 7 4 3 3 3 -2 7 9 0 -5 7 16 3 4", "I -1 6 1 2 8 4 13 3 9 3 -5 11 13 8 -5 0 5 10 1 -5", "WUZ 9 -1 7 4 3 0 11 12 4 -2 -1 10 0 1 7 5 0 6 5 7", "P 10 3 2 0 -5 -3 10 8 7 10 6 2 -3 -2 16 10 6 0 4 5", "OEF 6 9 1 2 11 10 5 3 11 -6 2 3 -6 11 3 1 5 4 0 7", "Q -4 14 8 7 6 7 7 9 -2 7 0 2 17 8 4 -5 7 5 7 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"EG", "GN", "H", "H", "JOS", "K", "OB", "OS", "Q", "RYMA", "X"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int teamSize = 14;
    vector<string> people = {"Y 0 3 -3 9 3 8 5 5 -5 -1 5 12 18 15 -2 2 8 11 10 7", "SCI 3 0 10 3 8 8 4 -6 4 0 1 9 10 -2 -1 2 -4 1 7 12", "DMW -3 10 0 6 6 6 7 1 0 -2 5 10 4 16 3 15 -6 5 0 5", "G 9 3 6 0 -1 3 6 3 2 -5 1 -7 10 6 5 -3 15 3 13 -1", "P 3 8 6 -1 0 0 8 -1 -1 3 7 5 -4 6 8 5 -5 6 3 6", "KDN 8 8 6 3 0 0 -2 10 9 9 16 8 1 6 6 -2 4 2 11 5", "PA 5 4 7 6 8 -2 0 6 4 12 -3 -2 4 -6 5 0 -6 13 9 6", "IQH 5 -6 1 3 -1 10 6 0 10 0 1 6 -6 8 7 -2 7 5 -5 7", "AYAJ -5 4 0 2 -1 9 4 10 0 11 3 9 8 11 6 12 8 8 4 6", "JW -1 0 -2 -5 3 9 12 0 11 0 1 3 1 4 7 2 2 3 6 10", "ED 5 1 5 1 7 16 -3 1 3 1 0 0 -8 13 8 18 8 -1 -4 9", "XI 12 9 10 -7 5 8 -2 6 9 3 0 0 10 3 4 15 5 -5 -9 4", "Z 18 10 4 10 -4 1 4 -6 8 1 -8 10 0 2 4 0 2 7 10 5", "NE 15 -2 16 6 6 6 -6 8 11 4 13 3 2 0 4 3 -2 4 -4 8", "R -2 -1 3 5 8 6 5 7 6 7 8 4 4 4 0 16 -5 1 -1 -1", "D 2 2 15 -3 5 -2 0 -2 12 2 18 15 0 3 16 0 1 -3 7 2", "N 8 -4 -6 15 -5 4 -6 7 8 2 8 5 2 -2 -5 1 0 5 2 7", "RLH 11 1 5 3 6 2 13 5 8 3 -1 -5 7 4 1 -3 5 0 5 1", "L 10 7 0 13 3 11 9 -5 4 6 -4 -9 10 -4 -1 7 2 5 0 4", "AHSRT 7 12 5 -1 6 5 6 7 6 10 9 4 5 8 -1 2 7 1 4 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AHSRT", "AYAJ", "D", "DMW", "ED", "JW", "KDN", "NE", "P", "R", "SCI", "XI", "Y", "Z"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int teamSize = 11;
    vector<string> people = {"A 0 2 8 7 1 -4 -3 1 8 2 8 2 1 -3 7 1 3 9 -6 -5", "A 2 0 0 7 -7 -5 8 -8 -9 -9 6 -9 -4 -8 8 1 7 0 3 3", "A 8 0 0 -5 -5 -7 1 -3 1 9 -6 6 1 5 6 -9 8 6 -8 -8", "A 7 7 -5 0 7 -5 3 9 8 3 -6 -5 -5 2 -6 2 -2 -1 -2 8", "B 1 -7 -5 7 0 7 -2 -9 3 7 0 -2 1 1 -9 -3 -2 2 1 -2", "B -4 -5 -7 -5 7 0 4 8 6 0 -1 4 1 -2 -9 4 0 -7 6 -2", "B -3 8 1 3 -2 4 0 8 -1 1 -2 -7 5 0 -6 9 0 -3 1 3", "B 1 -8 -3 9 -9 8 8 0 0 -2 5 0 5 8 3 5 2 4 5 4", "C 8 -9 1 8 3 6 -1 0 0 8 -3 8 -6 -4 7 -4 1 -5 5 4", "C 2 -9 9 3 7 0 1 -2 8 0 -9 -6 6 5 -8 -3 -8 2 2 4", "C 8 6 -6 -6 0 -1 -2 5 -3 -9 0 2 7 8 2 -6 -4 -6 4 4", "C 2 -9 6 -5 -2 4 -7 0 8 -6 2 0 0 -3 6 7 -1 2 -4 -2", "D 1 -4 1 -5 1 1 5 5 -6 6 7 0 0 -7 -4 8 -6 -3 4 -6", "D -3 -8 5 2 1 -2 0 8 -4 5 8 -3 -7 0 7 -3 5 -8 5 1", "D 7 8 6 -6 -9 -9 -6 3 7 -8 2 6 -4 7 0 9 -5 -5 -8 3", "D 1 1 -9 2 -3 4 9 5 -4 -3 -6 7 8 -3 9 0 -2 -7 8 -7", "E 3 7 8 -2 -2 0 0 2 1 -8 -4 -1 -6 5 -5 -2 0 6 0 5", "E 9 0 6 -1 2 -7 -3 4 -5 2 -6 2 -3 -8 -5 -7 6 0 4 8", "E -6 3 -8 -2 1 6 1 5 5 2 4 -4 4 5 -8 8 0 4 0 1", "E -5 3 -8 8 -2 -2 3 4 4 4 4 -2 -6 1 3 -7 5 8 1 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "A", "B", "B", "B", "B", "C", "C", "D", "D", "E"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int teamSize = 3;
    vector<string> people = {"A 0 1 2 998", "B 1 0 2 3", "C 2 2 0 3", "D 998 3 3 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "C", "D"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int teamSize = 3;
    vector<string> people = {"A 0 1 5 6", "B 1 0 3 4", "C 5 3 0 1", "D 6 4 1 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "C", "D"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int teamSize = 3;
    vector<string> people = {"ALICE 0 1 -1 3", "BOB 1 0 2 -4", "CAROL -1 2 0 2", "DAVID 3 -4 2 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ALICE", "CAROL", "DAVID"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int teamSize = 13;
    vector<string> people = {"A 0 2 8 7 1 -4 -3 1 8 2 8 2 1 -3 7 1 3 9 -6 -5", "A 2 0 0 7 -7 -5 8 -8 -9 -9 6 -9 -4 -8 8 1 7 0 3 3", "A 8 0 0 -5 -5 -7 1 -3 1 9 -6 6 1 5 6 -9 8 6 -8 -8", "A 7 7 -5 0 7 -5 3 9 8 3 -6 -5 -5 2 -6 2 -2 -1 -2 8", "B 1 -7 -5 7 0 7 -2 -9 3 7 0 -2 1 1 -9 -3 -2 2 1 -2", "B -4 -5 -7 -5 7 0 4 8 6 0 -1 4 1 -2 -9 4 0 -7 6 -2", "B -3 8 1 3 -2 4 0 8 -1 1 -2 -7 5 0 -6 9 0 -3 1 3", "B 1 -8 -3 9 -9 8 8 0 0 -2 5 0 5 8 3 5 2 4 5 4", "C 8 -9 1 8 3 6 -1 0 0 8 -3 8 -6 -4 7 -4 1 -5 5 4", "C 2 -9 9 3 7 0 1 -2 8 0 -9 -6 6 5 -8 -3 -8 2 2 4", "C 8 6 -6 -6 0 -1 -2 5 -3 -9 0 2 7 8 2 -6 -4 -6 4 4", "C 2 -9 6 -5 -2 4 -7 0 8 -6 2 0 0 -3 6 7 -1 2 -4 -2", "D 1 -4 1 -5 1 1 5 5 -6 6 7 0 0 -7 -4 8 -6 -3 4 -6", "D -3 -8 5 2 1 -2 0 8 -4 5 8 -3 -7 0 7 -3 5 -8 5 1", "D 7 8 6 -6 -9 -9 -6 3 7 -8 2 6 -4 7 0 9 -5 -5 -8 3", "D 1 1 -9 2 -3 4 9 5 -4 -3 -6 7 8 -3 9 0 -2 -7 8 -7", "E 3 7 8 -2 -2 0 0 2 1 -8 -4 -1 -6 5 -5 -2 0 6 0 5", "E 9 0 6 -1 2 -7 -3 4 -5 2 -6 2 -3 -8 -5 -7 6 0 4 8", "E -6 3 -8 -2 1 6 1 5 5 2 4 -4 4 5 -8 8 0 4 0 1", "E -5 3 -8 8 -2 -2 3 4 4 4 4 -2 -6 1 3 -7 5 8 1 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "A", "B", "B", "B", "B", "C", "C", "C", "D", "D", "D", "E"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int teamSize = 3;
    vector<string> people = {"BOB 0 1 -1 3", "ALICE 1 0 2 -4", "DAVID -1 2 0 2", "CAROL 3 -4 2 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BOB", "CAROL", "DAVID"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int teamSize = 10;
    vector<string> people = {"A 0 2 8 7 1 -4 -3 1 8 2 8 2 1 -3 7 1 3 9 -6 -5", "A 2 0 0 7 -7 -5 8 -8 -9 -9 6 -9 -4 -8 8 1 7 0 3 3", "A 8 0 0 -5 -5 -7 1 -3 1 9 -6 6 1 5 6 -9 8 6 -8 -8", "A 7 7 -5 0 7 -5 3 9 8 3 -6 -5 -5 2 -6 2 -2 -1 -2 8", "B 1 -7 -5 7 0 7 -2 -9 3 7 0 -2 1 1 -9 -3 -2 2 1 -2", "B -4 -5 -7 -5 7 0 4 8 6 0 -1 4 1 -2 -9 4 0 -7 6 -2", "B -3 8 1 3 -2 4 0 8 -1 1 -2 -7 5 0 -6 9 0 -3 1 3", "B 1 -8 -3 9 -9 8 8 0 0 -2 5 0 5 8 3 5 2 4 5 4", "C 8 -9 1 8 3 6 -1 0 0 8 -3 8 -6 -4 7 -4 1 -5 5 4", "C 2 -9 9 3 7 0 1 -2 8 0 -9 -6 6 5 -8 -3 -8 2 2 4", "C 8 6 -6 -6 0 -1 -2 5 -3 -9 0 2 7 8 2 -6 -4 -6 4 4", "C 2 -9 6 -5 -2 4 -7 0 8 -6 2 0 0 -3 6 7 -1 2 -4 -2", "D 1 -4 1 -5 1 1 5 5 -6 6 7 0 0 -7 -4 8 -6 -3 4 -6", "D -3 -8 5 2 1 -2 0 8 -4 5 8 -3 -7 0 7 -3 5 -8 5 1", "D 7 8 6 -6 -9 -9 -6 3 7 -8 2 6 -4 7 0 9 -5 -5 -8 3", "D 1 1 -9 2 -3 4 9 5 -4 -3 -6 7 8 -3 9 0 -2 -7 8 -7", "E 3 7 8 -2 -2 0 0 2 1 -8 -4 -1 -6 5 -5 -2 0 6 0 5", "E 9 0 6 -1 2 -7 -3 4 -5 2 -6 2 -3 -8 -5 -7 6 0 4 8", "E -6 3 -8 -2 1 6 1 5 5 2 4 -4 4 5 -8 8 0 4 0 1", "E -5 3 -8 8 -2 -2 3 4 4 4 4 -2 -6 1 3 -7 5 8 1 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "B", "B", "B", "B", "C", "C", "D", "D", "E"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int teamSize = 4;
    vector<string> people = {"BLARG 0 2 7 -3 -10 -1", "BLAVEN 2 0 5 2 -2 -8", "BLORF 7 5 0 -3 -1 -9", "BLING -3 2 -3 0 7 9", "BARNEY -10 -2 -1 7 0 5", "BLAMO -1 -8 -9 9 5 0"};
    PickTeam* pObj = new PickTeam();
    clock_t start = clock();
    vector<string> result = pObj->pickPeople(teamSize, people);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BARNEY", "BLAMO", "BLAVEN", "BLING"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=310233&rd=4570&pm=1773
********************************************************************************
// #define DEBUG
#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <sstream>
#include <algorithm>
#include <climits>
using namespace std;
 
const int MAX = 25;
int graph[MAX][MAX];
bool visited[MAX];
int result[MAX];
 
class PickTeam {
public:
    int maxVal;
    int total;
    int len;
 
    void Search(int start, int size, int team[]) {
        if (size == total) {
            int curVal = 0;
            for (int i = 0; i < total; ++i) {
                for (int j = i + 1; j < total; ++j) {
                    curVal += graph[team[i]][team[j]];
                }
            }
            if (curVal > maxVal) {
                memcpy(result, team, sizeof(result));
                maxVal = curVal;
            }
            return;
        }
 
        int remain = len - start;
        if (remain + size < total) return;
 
        for (int i = start; i < len; ++i) {
            if (!visited[i]) {
                visited[i] = true;
                team[size] = i;
                Search(i + 1, size + 1, team);
                visited[i] = false;
            }
        }
    }
 
    vector<string> pickPeople(int teamSize, vector<string> people) {
        total = teamSize;
        len = people.size();
        vector<string> names(len);
        for (int i = 0; i < len; ++i) {
            istringstream istr(people[i]);
            istr >> names[i];
            for (int j = 0; j < len; ++j) {
                istr >> graph[i][j];
            }
        }
        //
        memset(visited, 0, sizeof(visited));
        int team[MAX];
        maxVal = INT_MIN;
        Search(0, 0, team);
 
        vector<string> pp;
        for (int i = 0; i < total; ++i) {
            pp.push_back(names[result[i]]);
        }
        sort(pp.begin(), pp.end());
        return pp;
    }
};

********************************************************************************
*******************************************************************************/