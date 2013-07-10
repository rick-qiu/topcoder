/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8706
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

class TwoStringMasks {
public:
    string shortestCommon(string s1, string s2);
};

string TwoStringMasks::shortestCommon(string s1, string s2) {
    string ret;
    return ret;
}


int test0() {
    string s1 = "TOPC*DER";
    string s2 = "T*PCODER";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "TOPCODER";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string s1 = "HELLO*";
    string s2 = "HI*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string s1 = "GOOD*LUCK";
    string s2 = "*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "GOODLUCK";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string s1 = "*SAMPLETEST";
    string s2 = "THIRDSAMPLE*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "THIRDSAMPLETEST";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string s1 = "*";
    string s2 = "*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string s1 = "*";
    string s2 = "*RIGHT";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "RIGHT";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string s1 = "*";
    string s2 = "LEFT*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "LEFT";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string s1 = "*";
    string s2 = "BO*TH";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "BOTH";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string s1 = "TOBE*";
    string s2 = "*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "TOBE";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string s1 = "*ORNOTTOBE";
    string s2 = "*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ORNOTTOBE";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string s1 = "*";
    string s2 = "THATIS*THEQUESTION";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "THATISTHEQUESTION";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string s1 = "THISISATESTTHATCHECKSAVERYWEIRDSPECIFIC*SITUTATION";
    string s2 = "THISIS*ON";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "THISISATESTTHATCHECKSAVERYWEIRDSPECIFICSITUTATION";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string s1 = "DARNLEYWASHERE*HEMADETHISTESTCASEFORTHETOPCODERSRM";
    string s2 = "DARNLEYWASHERE*FORTHETOPCODERSRM";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "DARNLEYWASHEREHEMADETHISTESTCASEFORTHETOPCODERSRM";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string s1 = "ROTIJWEROITERIWEOIUCROIWRUCPOWQEIJVT*IJRSLKDHFRTIY";
    string s2 = "ROTIJWEROITERIWEOIUCROIWRUCPOW*IJRSLKDHFRTIY";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ROTIJWEROITERIWEOIUCROIWRUCPOWQEIJVTIJRSLKDHFRTIY";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string s1 = "THISISALARGEBUTAREALLYEA*SYTOPASSTESTCASEFORTHESRM";
    string s2 = "THISISALARGEBUTAREALLYEA*SYTOPASSTESTCASEFORTHESRM";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "THISISALARGEBUTAREALLYEASYTOPASSTESTCASEFORTHESRM";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string s1 = "THISISALARGEBUTAREALLYEA*SYSRM";
    string s2 = "THISISALARGEBUTAREALLYEA*SYTOPASSTESTCASEFORTHESRM";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string s1 = "*SYTOPASSTESTCASEFORTHESRM";
    string s2 = "THISISALARGEBUTAREALLYEA*SYTOPASSTESTCASEFORTHESRM";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "THISISALARGEBUTAREALLYEASYTOPASSTESTCASEFORTHESRM";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string s1 = "*ODDTESTCASE";
    string s2 = "ROBINHOOD*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ROBINHOODDTESTCASE";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string s1 = "RED*YELLOWGREENBLUEPURPLE";
    string s2 = "REDORANGEYELLOWGREEN*PURPLE";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "REDORANGEYELLOWGREENBLUEPURPLE";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string s1 = "TEST*ABACABADABACABAEND";
    string s2 = "TESTABACABAEABACABA*END";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "TESTABACABAEABACABADABACABAEND";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string s1 = "ONETWOTHREEFOURFIVESIXSEVENEIGHTNINETENELEVEN*ELVE";
    string s2 = "ON*ENELEVENTWELVE";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ONETWOTHREEFOURFIVESIXSEVENEIGHTNINETENELEVENTWELVE";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string s1 = "*EGORERYXGAWRYYUHCHANDREWZTAKRIJGERTJEVASYLBURUNDU";
    string s2 = "PETRACRUSHTOMEKBMERRYSNAPDRAGONMAREKCYGANOPENGLEG*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "PETRACRUSHTOMEKBMERRYSNAPDRAGONMAREKCYGANOPENGLEGORERYXGAWRYYUHCHANDREWZTAKRIJGERTJEVASYLBURUNDU";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string s1 = "PETRACRUSHTOMEKBMERRY*OPENGLEG";
    string s2 = "PETRACRUSH*MAREKCYGANOPENGLEG";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "PETRACRUSHTOMEKBMERRYMAREKCYGANOPENGLEG";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string s1 = "AAAABBBBAAAABBBBAAAABBBBAAAAAAACCCAAACCCAAACCCAAA*";
    string s2 = "*AAACCCAAACCCAAACCCAAAAAAAADDDDDAAAAADDDDDAAAAADAA";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAABBBBAAAABBBBAAAABBBBAAAAAAACCCAAACCCAAACCCAAAAAAAADDDDDAAAAADDDDDAAAAADAA";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string s1 = "*ZZZYYYZZZYYYZZZYYYZZZZZZZZYYYYYZZZZZYYYYYZZZZZDZZ";
    string s2 = "ZZZZYYYYZZZZYYYYZZZZYYYYZZZZZZZYYYZZZYYYZZZYYYZZZ*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ZZZZYYYYZZZZYYYYZZZZYYYYZZZZZZZYYYZZZYYYZZZYYYZZZZZZZZYYYYYZZZZZYYYYYZZZZZDZZ";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string s1 = "HOWMUCHWOODWOULDAWOODCHUCKIFAWOODCHUCKWOULDCHUCKW*";
    string s2 = "*HOWMUCHWOODWOULDAWOODCHUCKIFAWOODCHUCKWOULDCHUCKW";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "HOWMUCHWOODWOULDAWOODCHUCKIFAWOODCHUCKWOULDCHUCKW";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string s1 = "HOWMUCHWOODWOULDAWOODCHUCKIFAWOODCHUCKWOULDCHUCKW*";
    string s2 = "*NOWMUCHWOODWOULDAWOODCHUCKIFAWOODCHUCKWOULDCHUCKW";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "HOWMUCHWOODWOULDAWOODCHUCKIFAWOODCHUCKWOULDCHUCKWNOWMUCHWOODWOULDAWOODCHUCKIFAWOODCHUCKWOULDCHUCKW";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string s1 = "*LETAMANDRINKTENBARRELSOFRUMADAYHESNOTADRUNKENSKIP";
    string s2 = "LETAMANDRINKTENBARRELSOFRUMADAYHESNOTADRUNKENSKIP*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "LETAMANDRINKTENBARRELSOFRUMADAYHESNOTADRUNKENSKIP";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string s1 = "*LETAMANDRINKTENBARRELSOFRUMADAYHESNOTADRUNKENSKIP";
    string s2 = "SETAMANDRINKTENBARRELSOFRUMADAYHESNOTADRUNKENSKIP*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "SETAMANDRINKTENBARRELSOFRUMADAYHESNOTADRUNKENSKIPLETAMANDRINKTENBARRELSOFRUMADAYHESNOTADRUNKENSKIP";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string s1 = "GUITARPIANOCELLOSAXOPHONEDRUMSVIOLINFLUTE*TROMBONE";
    string s2 = "GUITAR*FLUTECELLOVIOLINPIANOSAXOPHONEDRUMSTROMBONE";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "GUITARPIANOCELLOSAXOPHONEDRUMSVIOLINFLUTECELLOVIOLINPIANOSAXOPHONEDRUMSTROMBONE";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string s1 = "HOHOOHOHOHOHOHOHOHOHOOHOHHOOHHOOHOOHOHOHOHOOH*OHOH";
    string s2 = "HOHO*OHHOHOHOOHOHOOHOOHOHOHOOOOHOOHOHOHHHOHOOHOHOH";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "HOHOOHOHOHOHOHOHOHOHOOHOHHOOHHOOHOOHOHOHOHOOHHOHOHOOHOHOOHOOHOHOHOOOOHOOHOHOHHHOHOOHOHOH";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string s1 = "DO*GOODTHINGS";
    string s2 = "DOINTERESTING*THINGS";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "DOINTERESTINGOODTHINGS";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string s1 = "FORWHOMTHEBEL*RINGS";
    string s2 = "FORWHOMTHEBE*LRINGS";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "FORWHOMTHEBELRINGS";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string s1 = "HUMAN*";
    string s2 = "*MANBEING";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "HUMANBEING";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string s1 = "WELL*";
    string s2 = "TELL*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string s1 = "STOP*IT";
    string s2 = "STOP*BEINGABRAT";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string s1 = "FEEL*LUCKY";
    string s2 = "FOOLSARELUCKY*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string s1 = "*TEST";
    string s2 = "*TESTING";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string s1 = "*TESTTEST";
    string s2 = "*TEST";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "TESTTEST";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string s1 = "THEREIS*DEMOCRACYINRUSSIA";
    string s2 = "THEREISNO*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "THEREISNODEMOCRACYINRUSSIA";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string s1 = "HEY*SUPPER";
    string s2 = "HEYWHATSUP*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "HEYWHATSUPPER";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string s1 = "*ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ";
    string s2 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string s1 = "*YES";
    string s2 = "IMFEELINGLUCKY*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "IMFEELINGLUCKYES";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string s1 = "*TOP";
    string s2 = "*CODER";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string s1 = "*";
    string s2 = "A*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string s1 = "*A";
    string s2 = "B*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "BA";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string s1 = "LASTCASE*";
    string s2 = "*LASTCASE";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "LASTCASE";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string s1 = "TOPC*DER";
    string s2 = "*COOOODER";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "TOPCOOOODER";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string s1 = "P*RTY";
    string s2 = "PKWER*Y";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "PKWERTY";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string s1 = "ABC*ABC";
    string s2 = "*BC";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCABC";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string s1 = "AA*A";
    string s2 = "A*A";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "AAA";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string s1 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*A";
    string s2 = "A*A";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string s1 = "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTAAA*";
    string s2 = "*TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTAAATTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string s1 = "MALA*KAZAM";
    string s2 = "*LAEASDFKSKAZAM";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "MALAEASDFKSKAZAM";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string s1 = "TOP*CODER";
    string s2 = "T*PCOCODER";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "TOPCOCODER";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string s1 = "A*";
    string s2 = "A*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string s1 = "*SAMPLETESTTESTTESTTESTTESTTESTTESTTESTTESTTESTTT";
    string s2 = "ABCDEFGHIJKLMNAMCDEFGEGEDKMEDFDFAEIBTHIRDSAMPLE*T";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGHIJKLMNAMCDEFGEGEDKMEDFDFAEIBTHIRDSAMPLETESTTESTTESTTESTTESTTESTTESTTESTTESTTESTTT";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string s1 = "HELLO*";
    string s2 = "H*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "HELLO";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string s1 = "A*";
    string s2 = "B*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string s1 = "*AB";
    string s2 = "*AB";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string s1 = "ADFSD*DFGDFF";
    string s2 = "ADF*DFF";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ADFSDDFGDFF";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string s1 = "ABC*BCA";
    string s2 = "*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCBCA";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string s1 = "ABCC*F";
    string s2 = "ABCC*CF";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCCCF";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string s1 = "*TESTTEST";
    string s2 = "TESTMIN*TEST";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "TESTMINTESTTEST";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string s1 = "AAA*AAA";
    string s2 = "AAA*AAA";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAA";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string s1 = "TOZOOATZOO*";
    string s2 = "TOZ*O";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "TOZOOATZOO";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string s1 = "GOT*YOU";
    string s2 = "G*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "GOTYOU";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string s1 = "A*B";
    string s2 = "AA*BB";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "AABB";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string s1 = "TOP*CODER";
    string s2 = "TOPCODECODECO*ER";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "TOPCODECODECODER";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string s1 = "*ABC";
    string s2 = "CBAB*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "CBABC";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string s1 = "ABCD*";
    string s2 = "*BCD";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCD";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string s1 = "ABCDB*XY";
    string s2 = "ABC*AXY";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDBAXY";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string s1 = "TOPOOO*OOOP";
    string s2 = "TOP*OOOP";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "TOPOOOOOOP";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string s1 = "AB*ASD";
    string s2 = "AB*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABASD";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string s1 = "A*A";
    string s2 = "AB*BA";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBA";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string s1 = "ANK*VIJAY";
    string s2 = "ANKPSQVIJP*AY";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ANKPSQVIJPVIJAY";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string s1 = "AAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAA*A";
    string s2 = "A*AAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string s1 = "A*B";
    string s2 = "AC*DB";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ACDB";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string s1 = "T*R";
    string s2 = "TOP*DER";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "TOPDER";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string s1 = "*ABAC";
    string s2 = "ACAB*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ACABAC";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string s1 = "A*A";
    string s2 = "*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "AA";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string s1 = "LOLV*";
    string s2 = "*LOL";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "LOLVLOL";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string s1 = "ABC*";
    string s2 = "A*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABC";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string s1 = "C*COCA";
    string s2 = "C*OCA";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "CCOCA";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string s1 = "LEVSKISKI*KISKIKIALEVSKIIA";
    string s2 = "LEVSKISKISKISKIALEV*A";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "LEVSKISKISKISKIALEVKISKIKIALEVSKIIA";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string s1 = "DABC*DEF";
    string s2 = "ABC*DEF";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string s1 = "ABA*BA";
    string s2 = "A*ABA";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABABA";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string s1 = "A*B";
    string s2 = "C*D";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string s1 = "*AAAAAAAAAX";
    string s2 = "AAAAAAAAAAAAAAAAAAAAAAAA*X";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAX";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string s1 = "ABCDE*FGH";
    string s2 = "ABC*XXXAFGH";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEXXXAFGH";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string s1 = "*A";
    string s2 = "*AAAAAA";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAA";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string s1 = "ASDFASDFAS*ADFASDFAS";
    string s2 = "A*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ASDFASDFASADFASDFAS";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string s1 = "TOPOP*CODER";
    string s2 = "TOP*COCODER";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "TOPOPCOCODER";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string s1 = "A*B";
    string s2 = "AB*AB";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABAB";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string s1 = "TH*SASATESTTEST";
    string s2 = "THTHIRDSASA*TEST";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "THTHIRDSASATESTTEST";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string s1 = "*AB";
    string s2 = "*A";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string s1 = "ASDFAAAAAAAAAAAAAAAA*BBBBBBBBBB";
    string s2 = "*ABBBBBBBBBBBBB";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ASDFAAAAAAAAAAAAAAAABBBBBBBBBBBBB";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string s1 = "ACBC*DE";
    string s2 = "ACBC*CDE";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ACBCCDE";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string s1 = "*ABC";
    string s2 = "*XABC";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "XABC";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string s1 = "ABCXYZ*XYZABC";
    string s2 = "ABC*ABC";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCXYZXYZABC";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string s1 = "AAAA*AAAA";
    string s2 = "A*A";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAA";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string s1 = "N*WMBQEIPF";
    string s2 = "*WMBQEIPF";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "NWMBQEIPF";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string s1 = "ABCDEFGH*";
    string s2 = "A*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGH";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string s1 = "ERYXAWASATHERE*ATODAY";
    string s2 = "ERYXAWAS*AHEREATODAY";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ERYXAWASATHEREAHEREATODAY";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string s1 = "ABC*ABCD";
    string s2 = "ABC*CD";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCABCD";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string s1 = "*TOP";
    string s2 = "*TOP";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "TOP";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string s1 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*";
    string s2 = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string s1 = "AAAAA*AAAAA";
    string s2 = "AA*AA";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string s1 = "ABCC*CC";
    string s2 = "*BCCC";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCCBCCC";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string s1 = "A*AA";
    string s2 = "A*AAAAAAAAAA";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string s1 = "*AAA";
    string s2 = "MISIOAA*A";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "MISIOAAA";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string s1 = "*A";
    string s2 = "AB*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABA";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string s1 = "ABCDEF*ABC";
    string s2 = "ABCDEFA*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFABC";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string s1 = "ABB*B";
    string s2 = "A*BB";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABBB";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string s1 = "AAAA*AAAAAAAA";
    string s2 = "AAA*AAAAAAAAA";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string s1 = "*";
    string s2 = "DDFRYUSRRBNI*I";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "DDFRYUSRRBNII";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string s1 = "*H";
    string s2 = "H*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "H";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string s1 = "A*AAA";
    string s2 = "*AAA";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAA";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string s1 = "*AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    string s2 = "A*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string s1 = "HHK*";
    string s2 = "*H";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "HHKH";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string s1 = "*ABCDEF";
    string s2 = "DEF*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "DEFABCDEF";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string s1 = "AAAA*AAAA";
    string s2 = "*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAA";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string s1 = "ABORT*";
    string s2 = "*BED";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABORTBED";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string s1 = "*APQ";
    string s2 = "PQA*";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "PQAPQ";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string s1 = "*";
    string s2 = "ABCD*EFGH";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCDEFGH";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string s1 = "TOPCO*LAMBDA";
    string s2 = "TO*BDA";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "TOPCOLAMBDA";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string s1 = "TCOCO*COCO";
    string s2 = "*CO";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "TCOCOCOCO";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string s1 = "A*X";
    string s2 = "AB*CX";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCX";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string s1 = "ABC*D";
    string s2 = "AB*DCF";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string s1 = "C*XAXC";
    string s2 = "CXXX*C";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "CXXXAXC";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string s1 = "A*A";
    string s2 = "A*A";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "AA";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string s1 = "*TOP";
    string s2 = "*TOPPP";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "impossible";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string s1 = "ABC*C";
    string s2 = "A*ABC";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABCABC";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string s1 = "AB*CD";
    string s2 = "ABAA*AACD";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "ABAAAACD";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string s1 = "EZ*DA";
    string s2 = "EZDUN*VODA";
    TwoStringMasks* pObj = new TwoStringMasks();
    clock_t start = clock();
    string result = pObj->shortestCommon(s1, s2);
    clock_t end = clock();
    delete pObj;
    string expected = "EZDUNVODA";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10113097&rd=11126&pm=8706
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
using namespace std; 
 
#define FOR(i,n) for (int i=0;i<(n);i++) 
#define FORIT(it,s) for (__typeof(s.begin()) it=s.begin(); it!=s.end(); ++it) 
#define ALL(x) (x).begin(),(x).end() 
#define P(x) cerr<<#x<<" = "<<x<<endl; 
#define pb push_back 
 
typedef long long ll; 
typedef vector <int> vi; 
 
char a[300], b[300]; 
 
class TwoStringMasks { 
public: 
  string shortestCommon(string s, string t) { 
    int m=s.size(), n=t.size(); 
 
    for (int len=max(m,n)-1; len<=230; len++) { 
      string x; 
      FOR (i,len) a[i]=b[i]=3; 
      for (int i=0,k=0;s[i]!='*';i++) a[k++]=s[i]; 
      for (int i=m-1,k=len-1;s[i]!='*';i--) a[k--]=s[i]; 
      for (int i=0,k=0;t[i]!='*';i++) b[k++]=t[i]; 
      for (int i=n-1,k=len-1;t[i]!='*';i--) b[k--]=t[i]; 
 
      FOR (i,len) { 
        if (a[i]==3 && b[i]==3) {a[i]='A';continue;} 
        if (a[i]==3) {a[i]=b[i]; continue;} 
        if (b[i]==3) {b[i]=a[i]; continue;} 
        if (a[i]!=b[i]) goto next; 
      } 
      a[len]=0; 
      return a; 
    next:; 
    } 
 
    return "impossible"; 
  } 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/