/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10355
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

class EndlessStringMachine {
public:
    string getFragment(string input, string program, int s, int min, int max);
};

string EndlessStringMachine::getFragment(string input, string program, int s, int min, int max) {
    string ret;
    return ret;
}


int test0() {
    string input = "a";
    string program = "$meric$";
    int s = 6;
    int min = 1;
    int max = 35;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "americamericamericamericamericameri";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string input = "top";
    string program = "$coder";
    int s = 1;
    int min = 1;
    int max = 20;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "topcoder------------";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string input = "abc";
    string program = "$x$y$z$";
    int s = 10;
    int min = 30;
    int max = 50;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "bcyabcxabcyabczabczab";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string input = "a";
    string program = "$t";
    int s = 1000000000;
    int min = 999999950;
    int max = 1000000049;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "tttttttttttttttttttttttttttttttttttttttttttttttttttt------------------------------------------------";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string input = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string program = "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
    int s = 1000000000;
    int min = 1000000000;
    int max = 1000000099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string input = "abcdebcdfghjklmpqstuwyzabcdefghijklmnopqrstuvwxvex";
    string program = "$$$$$$$$$$$$$$$$$$$$$$orian$$$$$$$$$$$$$$$$$$$$$$$";
    int s = 1000000000;
    int min = 1098;
    int max = 1105;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "vexorian";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string input = "a";
    string program = "$ts";
    int s = 1000000000;
    int min = 999999950;
    int max = 1000000049;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "tstststststststststststststststststststststststststststststststststststststststststststststststststs";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string input = "xy";
    string program = "$a$bb";
    int s = 12;
    int min = 5000;
    int max = 5099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "xybbbbaxyaxybbaxyaxybbbbbbbbaxyaxybbaxyaxybbbbaxyaxybbaxyaxybbbbbbaxyaxybbaxyaxybbbbaxyaxybbaxyaxybb";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string input = "quatbdjyhctrucozwpfegpwittbfdvyjaujscqu";
    string program = "$tgvm$jib$$e$gssbs$l$";
    int s = 512924604;
    int min = 641137502;
    int max = 641137567;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "squatbdjyhctrucozwpfegpwittbfdvyjaujscqutgvmquatbdjyhctrucozwpfegp";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string input = "buybqcrpkuxnvlzpzpdpchccglngla";
    string program = "$uyizbddfaqzfew";
    int s = 2004;
    int min = 8001;
    int max = 8100;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "bddfaqzfewuyizbddfaqzfewuyizbddfaqzfewuyizbddfaqzfewuyizbddfaqzfewuyizbddfaqzfewuyizbddfaqzfewuyizbd";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string input = "vowjhhwptisbderuqvcfb";
    string program = "$ehwnhh";
    int s = 314726292;
    int min = 274893044;
    int max = 274893048;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "hhehw";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string input = "fnuyqqsojyqdwspuvtruvgdisxtpvdxqoeoexxizhs";
    string program = "$ppppvtzfpelwcbvxccjltphahzzd$va$a$opp$hloqracma$q";
    int s = 27462792;
    int min = 448214932;
    int max = 448214977;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "xxizhsvafnuyqqsojyqdwspuvtruvgdisxtpvdxqoeoexx";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string input = "vmganhwpaavspdohdzwjxgwhfzhjamforjtnnijnvsapmztoli";
    string program = "$n$k$p$k$$r$$jv$";
    int s = 118393530;
    int min = 57852605;
    int max = 57852614;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "olikvmganh";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string input = "vefinillcjmzehcpajrwpaphcdjfrxkpjbpzwslkmkkj";
    string program = "$xwlzxojt$jn$$d$$$qxy$$$x$g$$qan$fb$$l$zpn$a$k";
    int s = 43206163;
    int min = 335735911;
    int max = 335736000;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "nillcjmzehcpajrwpaphcdjfrxkpjbpzwslkmkkjxvefinillcjmzehcpajrwpaphcdjfrxkpjbpzwslkmkkjgvefi";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string input = "tttttttt";
    string program = "$abcdz$";
    int s = 19574969;
    int min = 97874803;
    int max = 97874902;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "zttttttttabcdzttttttttabcdzttttttttabcdzttttttttabcdzttttttttabcdzttttttttabcdzttttttttabcdztttttttt";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string input = "afkxpjghkyzeullbqwgfbxkij";
    string program = "$$w$$wi$$";
    int s = 111144377;
    int min = 331790229;
    int max = 331790230;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "ki";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string input = "nodgglpzunlovgejcdqjfcajeanmqerjfp";
    string program = "$daumue$qlmwfmhf$gn$eyuaf$du$ng";
    int s = 337997483;
    int min = 249729207;
    int max = 249729299;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "fpdunodgglpzunlovgejcdqjfcajeanmqerjfpngdunodgglpzunlovgejcdqjfcajeanmqerjfpdaumuenodgglpzunl";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string input = "jxozvgpgljwqclzvcrzrkpjyrcfyclepnllafq";
    string program = "$k$zohhk$d$$$";
    int s = 346277697;
    int min = 685046137;
    int max = 685046192;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "rcfyclepnllafqzohhkjxozvgpgljwqclzvcrzrkpjyrcfyclepnllaf";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string input = "akuftfna";
    string program = "$r$";
    int s = 642399694;
    int min = 929437285;
    int max = 929437315;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "ftfnarakuftfnarakuftfnarakuftfn";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string input = "datpjtbtmmpfuvt";
    string program = "$wrqe$b$fhg";
    int s = 396576202;
    int min = 636820434;
    int max = 636820477;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "jtbtmmpfuvtbdatpjtbtmmpfuvtfhgwrqedatpjtbtmm";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string input = "dbsjccehwqizinmgibrfnd";
    string program = "$lxl$";
    int s = 45164931;
    int min = 955474361;
    int max = 955474363;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "izi";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string input = "zrfbtydjjfsorzqtaouaz";
    string program = "$u$rbhs$qiqevbc$cmykn$$bztjypmyzna$";
    int s = 72101555;
    int min = 362397496;
    int max = 362397518;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "ztjypmyznazrfbtydjjfsor";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string input = "su";
    string program = "$zblreofztn";
    int s = 146936686;
    int min = 233335696;
    int max = 233335764;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "reofztnzblreofztnzblreofztnzblreofztnzblreofztnzblreofztnzblreofztnzb";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string input = "cwhqmgvaflqaclrebudlpmidohqitcxfbnbuuciwiqyhlqxt";
    string program = "$s$";
    int s = 41126053;
    int min = 41126003;
    int max = 41126102;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "flqaclrebudlpmidohqitcxfbnbuuciwiqyhlqxtscwhqmgvaflqaclrebudlpmidohqitcxfbnbuuciwiqyhlqxtscwhqmgvafl";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string input = "chgbgkrxcf";
    string program = "$rla$";
    int s = 405910860;
    int min = 2001407;
    int max = 2001423;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "gkrxcfrlachgbgkrx";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string input = "vvtjubqazxnhrcfqgrrdwamv";
    string program = "$$$$h$$p$p$v$$u$s$$a$v$$$iur$$ng$$a$$";
    int s = 428070;
    int min = 248906175;
    int max = 248906225;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "vvvtjubqazxnhrcfqgrrdwamviurvvtjubqazxnhrcfqgrrdwam";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string input = "fbjptbie";
    string program = "$eq$icxvien$pvyubpnw$vlqyayx";
    int s = 146766540;
    int min = 762257159;
    int max = 762257244;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "bieicxvienfbjptbiepvyubpnwfbjptbievlqyayxicxvienfbjptbieeqfbjptbieicxvienfbjptbiepvyub";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string input = "hbhpzyfryucj";
    string program = "$yh$bzx$oqgnsktukrsm$du$$fehpvjpru";
    int s = 198877039;
    int min = 119754170;
    int max = 119754224;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "rufehpvjpruyhhbhpzyfryucjyhhbhpzyfryucjbzxhbhpzyfryucjo";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string input = "xxx";
    string program = "$f$bu";
    int s = 371601051;
    int min = 263745671;
    int max = 263745748;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxbufxxxfxxxbubufxxxfxxxbufxxxfxxxbububufxxxfxxxbufxxxfxxxbubufxxxfxxxbufxxxf";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string input = "grzdkowjqqnlfhowkhnvuzfueapsswabtjyszqlybgltbzoq";
    string program = "$ivf$$sagvobx$$";
    int s = 487719354;
    int min = 479561207;
    int max = 479561266;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "psswabtjyszqlybgltbzoqgrzdkowjqqnlfhowkhnvuzfueapsswabtjyszq";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string input = "xrvmwrnrenrivu";
    string program = "$dlcqqgmijmzmrgediew$zatltmtjhgvbbkyjudzwl$ksonbdl";
    int s = 91275704;
    int min = 9875138;
    int max = 9875140;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "mwr";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string input = "wuipegnnsrtpyolkcssqo";
    string program = "$wfgmuixftszccfrhhegol$vfmjqng";
    int s = 208282240;
    int min = 573052301;
    int max = 573052345;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "szccfrhhegolwuipegnnsrtpyolkcssqovfmjqngvfmjq";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string input = "xjjnxfqdipbspcktothqsffcyba";
    string program = "$xnnb$$$$h$yhd$$$e$jg$wq$";
    int s = 619124835;
    int min = 131133929;
    int max = 131133981;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "pcktothqsffcybaxjjnxfqdipbspcktothqsffcybaexjjnxfqdip";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string input = "dbvteesrkqaezgdvylvhwpetgdciqcooqqgfocyrrq";
    string program = "$$k$tk$$";
    int s = 133160218;
    int min = 268157829;
    int max = 268157832;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "focy";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string input = "mmztcngqmilksrlmb";
    string program = "$$$xspb$$pl$aq$";
    int s = 469263779;
    int min = 740829873;
    int max = 740829920;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "lksrlmbxspbmmztcngqmilksrlmbmmztcngqmilksrlmbplm";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string input = "ngzilwgymcvpxncriivdmwauewrctisoaoenecrufunoax";
    string program = "$x";
    int s = 661136806;
    int min = 694866288;
    int max = 694866300;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "-------------";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string input = "yvamcbp";
    string program = "$hhsd$sebz$ra$g";
    int s = 12453513;
    int min = 61763882;
    int max = 61763938;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "bpgrayvamcbphhsdyvamcbpsebzyvamcbprayvamcbpggsebzyvamcbph";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string input = "sjunsvjyymmskzahnya";
    string program = "$t$szaqj$$$sw$soejztay$as$zq$$t$$";
    int s = 442252855;
    int min = 956421180;
    int max = 956421212;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "junsvjyymmskzahnyaassjunsvjyymmsk";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string input = "zqjkvozlxshqkirclrsmrsasuuxnca";
    string program = "$exef$su$$$f$fi$xhi$l$g$wo$$etpmsvmg$g$q$ica$$j$a";
    int s = 554493711;
    int min = 722444847;
    int max = 722444929;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "ozlxshqkirclrsmrsasuuxncagzqjkvozlxshqkirclrsmrsasuuxncaqzqjkvozlxshqkirclrsmrsasuu";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string input = "shnmbyithnihiviixabnaighsqjetbevkfsokoyb";
    string program = "$$$wd$tijx$$y$jmxr$p$k$$$z$ejve$$$$hal$q$";
    int s = 2719802;
    int min = 57883827;
    int max = 57883868;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "etbevkfsokoybshnmbyithnihiviixabnaighsqjet";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string input = "fuqwgcejlyp";
    string program = "$npxowgku$zaztzbnabdtyrb$$poo$jo";
    int s = 274205225;
    int min = 264235996;
    int max = 264236019;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "ypfuqwgcejlyppoofuqwgcej";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string input = "hxkofhytkeofrwzlfofqpumhxqxxnksdjlrytsvtdzgukibuo";
    string program = "$toqxndkyunspzjtss$$m$$e$z$dje$$d$gqnl";
    int s = 440810858;
    int min = 161464725;
    int max = 161464777;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "hxkofhytkeofrwzlfofqpumhxqxxnksdjlrytsvtdzgukibuotoqx";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string input = "wfzrfkrvqmrbzrqruneutqstpmzhzpdnhysbyatmwbrqm";
    string program = "$j$$x$$x$$$b$o$my$$$r$m$$i$a$p$xs$$$$$$$rl$uip$$";
    int s = 7183025;
    int min = 260224684;
    int max = 260224749;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "hysbyatmwbrqmxswfzrfkrvqmrbzrqruneutqstpmzhzpdnhysbyatmwbrqmwfzrfk";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string input = "vgursdktbqqzv";
    string program = "$vadf$lmuztn";
    int s = 36282481;
    int min = 718267821;
    int max = 718267833;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "tbqqzvlmuztnl";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string input = "vrzkaspmcyhbtqjildwzwbaytfopsywtoibfigykn";
    string program = "$kdbcrhf$izngo$$eckrpncrrmhedolpptvgzogyfnloc";
    int s = 114077885;
    int min = 723761144;
    int max = 723761216;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "fnloceckrpncrrmhedolpptvgzogyfnlocvrzkaspmcyhbtqjildwzwbaytfopsywtoibfigy";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string input = "effqqwztzctbsmepaskjhxvuipzizlihgqdntbpklphkbiyaf";
    string program = "$ebbomiytm$$";
    int s = 59218958;
    int min = 92711613;
    int max = 92711671;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "biyafebbomiytmeffqqwztzctbsmepaskjhxvuipzizlihgqdntbpklphkb";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string input = "iwvyjhxvshqlfugjzflcbrobuddedarbwmv";
    string program = "$wv$c$kxh$jqchrnjvrucscrfjinn$mm";
    int s = 52687514;
    int min = 937775560;
    int max = 937775597;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "wvyjhxvshqlfugjzflcbrobuddedarbwmvjqch";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string input = "rnykcmkxt";
    string program = "$e";
    int s = 41812842;
    int min = 608754893;
    int max = 608754912;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "--------------------";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string input = "nqxtdkxvkmyvmuakzagsytx";
    string program = "$rxk$$";
    int s = 164910141;
    int min = 84608858;
    int max = 84608915;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "xvkmyvmuakzagsytxnqxtdkxvkmyvmuakzagsytxrxknqxtdkxvkmyvmua";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string input = "gupxmes";
    string program = "$xljmjzzivnkxit$lomnovihvvxktnb$ngxslkjenn";
    int s = 19874308;
    int min = 853172305;
    int max = 853172397;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "gupxmesxljmjzzivnkxitgupxmeslomnovihvvxktnbgupxmesngxslkjennngxslkjennxljmjzzivnkxitgupxmesxl";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string input = "emqkcmv";
    string program = "$nn$cr$gzw$yz$xm$$q$ez$k$dg$dx$$q$$$$e$";
    int s = 124161353;
    int min = 119544195;
    int max = 119544206;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "kcmvemqkcmve";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string input = "casxxzauvfrprieaahhfgrlelcquvuwvpauwkjpnqjkjxxur";
    string program = "$hexftknthylysopc$pjcl$cou$a$f$$";
    int s = 324056108;
    int min = 246440087;
    int max = 246440182;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "uvuwvpauwkjpnqjkjxxurhexftknthylysopccasxxzauvfrprieaahhfgrlelcquvuwvpauwkjpnqjkjxxurpjclcasxxza";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string input = "slhlquofwzambx";
    string program = "$oji$szpygshseusj$fflsf";
    int s = 232286688;
    int min = 612688400;
    int max = 612688465;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "zpygshseusjslhlquofwzambxojislhlquofwzambxszpygshseusjslhlquofwzam";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string input = "upcdixidgdurakrtegpbqhcvykxcwznwxou";
    string program = "$qw$j$$anu$zj$$g$";
    int s = 118685515;
    int min = 412291131;
    int max = 412291162;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "oujupcdixidgdurakrtegpbqhcvykxcw";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string input = "sjvzfvorqmjkvzgivqbpos";
    string program = "$vql$w$z$iadywcxk";
    int s = 7004727;
    int min = 291435907;
    int max = 291435985;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "fvorqmjkvzgivqbposvqlsjvzfvorqmjkvzgivqbposwsjvzfvorqmjkvzgivqbposzsjvzfvorqmjk";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string input = "gsyyjgouypvfngitvcaru";
    string program = "$y$jzwc";
    int s = 100683210;
    int min = 689394246;
    int max = 689394332;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "fngitvcarujzwcygsyyjgouypvfngitvcaruygsyyjgouypvfngitvcarujzwcjzwcjzwcjzwcjzwcygsyyjgou";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string input = "iegeaemeolzmblxuqokxifwdpavkeimlcbjljhildaz";
    string program = "$h$h$j$i$meh$$$d$twx$$$qllgs$$$j$vl$mf$";
    int s = 114237498;
    int min = 49455933;
    int max = 49455978;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "ljhildaziiegeaemeolzmblxuqokxifwdpavkeimlcbjlj";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string input = "ngjkbgaaisnsvvzfrdgqkalwodncgsansyvhydsfgfpzv";
    string program = "$uyivkv$iqsmblocajhumn$d$y$n$$";
    int s = 26907483;
    int min = 508534562;
    int max = 508534642;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "vvzfrdgqkalwodncgsansyvhydsfgfpzvuyivkvngjkbgaaisnsvvzfrdgqkalwodncgsansyvhydsfgf";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string input = "hzeg";
    string program = "$iasqzkcwc$bf$qzbveqzyzfmzrugm$rv$rjoaqvlpe";
    int s = 6;
    int min = 56010;
    int max = 56100;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "vlpeiasqzkcwchzegiasqzkcwchzegbfhzegqzbveqzyzfmzrugmhzegrvhzegrjoaqvlpeiasqzkcwchzegiasqzkc";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string input = "sxqcagqjcvcvjkifuhzxdrupvchpkhkmabcfbhpg";
    string program = "$acscb$b$xwd$pw$roxzjbqlacjy$smaij$cydxaicq";
    int s = 4;
    int min = 950460532;
    int max = 950460545;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "--------------";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string input = "irdekefwjuwskdgsz";
    string program = "$xrklt$r$syexslhz";
    int s = 10;
    int min = 818937081;
    int max = 818937113;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "---------------------------------";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string input = "behsmmliepwqpzjdyfkndlcjpemzbdrjsweiifqa";
    string program = "$$$azle$ncilqfm$nvbxledf$$ll";
    int s = 7;
    int min = 443049036;
    int max = 443049130;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "-----------------------------------------------------------------------------------------------";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string input = "cbjurminvctpdvvt";
    string program = "$$u$w$s$$r$$q$ere$$";
    int s = 8;
    int min = 856181291;
    int max = 856181311;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "minvctpdvvtqcbjurminv";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string input = "tcdxiakvobuavkuuhehdwdvbltjtpod";
    string program = "$epxvtfn$jo";
    int s = 1;
    int min = 239873201;
    int max = 239873278;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "------------------------------------------------------------------------------";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string input = "xmljlgvgzzilvvkowiohnwogkjdrv";
    string program = "$vafx";
    int s = 3;
    int min = 933247544;
    int max = 933247602;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "-----------------------------------------------------------";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string input = "sasg";
    string program = "$y$";
    int s = 2;
    int min = 595795817;
    int max = 595795818;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "--";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string input = "uegiwewijmrtccqfgthioysyoswvgcsivvrcsmvmr";
    string program = "$jbbcjfexzj$gqlnyfqbxk";
    int s = 6;
    int min = 278248690;
    int max = 278248699;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "----------";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string input = "cnwu";
    string program = "$op$$$ajriv$$$w$$$tix$m$q$$chunp$$z$h$$irs$$$";
    int s = 9;
    int min = 668203837;
    int max = 668203853;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "cnwuhcnwucnwuirsc";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string input = "x";
    string program = "$y$yy$yyy";
    int s = 1000;
    int min = 1;
    int max = 100;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "xyxyyxyyyyxyxyyxyyyyyxyxyyxyyyyyyyxyxyyxyyyyxyxyyxyyyyyxyxyyxyyyyyyyyxyxyyxyyyyxyxyyxyyyyyxyxyyxyyyy";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string input = "x";
    string program = "$y$yy$yyy";
    int s = 1000;
    int min = 1000000000;
    int max = 1000000099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "yyxyyyyyyyyxyxyyxyyyyxyxyyxyyyyyxyxyyxyyyyyyyyyyyyyyxyxyyxyyyyxyxyyxyyyyyxyxyyxyyyyyyyxyxyyxyyyyxyxy";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string input = "x";
    string program = "$$r";
    int s = 2;
    int min = 1;
    int max = 20;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "xxrxxrr-------------";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string input = "x";
    string program = "$$r";
    int s = 1000000000;
    int min = 999999950;
    int max = 1000000049;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "rrrxxrxxrrxxrxxrrrxxrxxrrxxrxxrrrrrrrrxxrxxrrxxrxxrrrxxrxxrrxxrxxrrrrxxrxxrrxxrxxrrrxxrxxrrxxrxxrrrr";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string input = "a";
    string program = "$b$$c$$$d$$$$e$$$$$f";
    int s = 1000000000;
    int min = 1;
    int max = 100;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "abaacaaadaaaaeaaaaafbabaacaaadaaaaeaaaaafabaacaaadaaaaeaaaaafcabaacaaadaaaaeaaaaafabaacaaadaaaaeaaaa";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string input = "x";
    string program = "$$s";
    int s = 28;
    int min = 536870815;
    int max = 536870914;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "sxxsxxsssssxxsxxssxxsxxsssxxsxxssxxsxxssssxxsxxssxxsxxsssxxsxxssxxsxxssssssssssssssssssssssssssss---";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string input = "abc";
    string program = "$x$y$z$";
    int s = 999999999;
    int min = 999999900;
    int max = 999999999;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "zabcyabcxabcyabczabczabcxabcyabczabczabcxabcyabczabcxabcxabcyabczabcyabcxabcyabczabczabcxabcyabczabc";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string input = "asdf";
    string program = "$dagg$";
    int s = 1000000000;
    int min = 1000000000;
    int max = 1000000099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "gasdfdaggasdfdaggasdfdaggasdfdaggasdfdaggasdfdaggasdfdaggasdfdaggasdfdaggasdfdaggasdfdaggasdfdaggasd";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string input = "xy";
    string program = "$a$bb";
    int s = 999999999;
    int min = 500000;
    int max = 500099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "xybbbbaxyaxybbaxyaxybbbbbbaxyaxybbaxyaxybbbbaxyaxybbaxyaxybbbbbbbbaxyaxybbaxyaxybbbbaxyaxybbaxyaxybb";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string input = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string program = "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
    int s = 1000000000;
    int min = 1000000000;
    int max = 1000000099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string input = "a";
    string program = "$a";
    int s = 1000000000;
    int min = 1000000000;
    int max = 1000000099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "aa--------------------------------------------------------------------------------------------------";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string input = "x";
    string program = "$a";
    int s = 1000000000;
    int min = 1000000000;
    int max = 1000000099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "aa--------------------------------------------------------------------------------------------------";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string input = "xy";
    string program = "$a$bb";
    int s = 10000000;
    int min = 5000;
    int max = 5099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "xybbbbaxyaxybbaxyaxybbbbbbbbaxyaxybbaxyaxybbbbaxyaxybbaxyaxybbbbbbaxyaxybbaxyaxybbbbaxyaxybbaxyaxybb";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string input = "a";
    string program = "$a";
    int s = 1000000000;
    int min = 1000000000;
    int max = 1000000001;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "aa";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string input = "abcdefghijklmnopabcdefghijklmnop";
    string program = "$ffd$s$f$ss$$$ds$d$a$a$d$d$ad$a$$$";
    int s = 1000000000;
    int min = 500000000;
    int max = 500000099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "dabcdefghijklmnopabcdefghijklmnopaabcdefghijklmnopabcdefghijklmnopabcdefghijklmnopabcdefghijklmnopab";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string input = "a";
    string program = "$meric$";
    int s = 100000000;
    int min = 1;
    int max = 35;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "americamericamericamericamericameri";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string input = "aasmdndytawetasndasdbjhazmhfbyfzeyurgfyzgfjygjyzeg";
    string program = "$mbas$dbashbamwyegdasmb$$llll$llsdkajdasjh$wqtrqwt";
    int s = 1000000000;
    int min = 777877777;
    int max = 777877875;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "gfyzgfjygjyzegmbasaasmdndytawetasndasdbjhazmhfbyfzeyurgfyzgfjygjyzegdbashbamwyegdasmbaasmdndytaweta";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string input = "acjdkfdjksgfmnfdsfhdsfdhsfdhs";
    string program = "$$$$$$$$f$$";
    int s = 100000000;
    int min = 1;
    int max = 100;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "acjdkfdjksgfmnfdsfhdsfdhsfdhsacjdkfdjksgfmnfdsfhdsfdhsfdhsacjdkfdjksgfmnfdsfhdsfdhsfdhsacjdkfdjksgfm";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string input = "xy";
    string program = "$a$bb";
    int s = 1000000000;
    int min = 500000000;
    int max = 500000099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "bbaxyaxybbbbbbaxyaxybbaxyaxybbbbaxyaxybbaxyaxybbbbbbbbaxyaxybbaxyaxybbbbaxyaxybbaxyaxybbbbbbaxyaxybb";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string input = "x";
    string program = "$w";
    int s = 1000000000;
    int min = 999999900;
    int max = 999999999;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string input = "a";
    string program = "$xyzxyz";
    int s = 10000000;
    int min = 999999999;
    int max = 1000000000;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "--";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string input = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstwxyz";
    string program = "$abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstw$";
    int s = 1000000000;
    int min = 500000000;
    int max = 500000099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "qrstuvwxyzabcdefghijklmnopqrstwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstwabcdefghijklmnopqrs";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string input = "aaa";
    string program = "$a";
    int s = 1000000000;
    int min = 1000000000;
    int max = 1000000099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaa------------------------------------------------------------------------------------------------";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string input = "aaa";
    string program = "$$$$$$$$$aaaaaaaa";
    int s = 1000000000;
    int min = 1;
    int max = 100;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string input = "abcdefghghsdfsdadfghfdasdjhdsthiouiuiuydfsdfsdfsd";
    string program = "$a$bb$ab$abcd$sdsf";
    int s = 1000000000;
    int min = 5000;
    int max = 5099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "sdfsdaabcdefghghsdfsdadfghfdasdjhdsthiouiuiuydfsdfsdfsdbbabcdefghghsdfsdadfghfdasdjhdsthiouiuiuydfsd";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string input = "ana";
    string program = "$u$x$lad$e";
    int s = 23446;
    int min = 45;
    int max = 67;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "axanaladanaeladanauanax";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string input = "n";
    string program = "$ac";
    int s = 888888888;
    int min = 777777777;
    int max = 777777789;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "cacacacacacac";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string input = "a";
    string program = "$ab";
    int s = 1000000000;
    int min = 100000000;
    int max = 100000098;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "abababababababababababababababababababababababababababababababababababababababababababababababababa";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string input = "xy";
    string program = "$a$bb";
    int s = 9999999;
    int min = 5000;
    int max = 5099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "xybbbbaxyaxybbaxyaxybbbbbbbbaxyaxybbaxyaxybbbbaxyaxybbaxyaxybbbbbbaxyaxybbaxyaxybbbbaxyaxybbaxyaxybb";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string input = "x";
    string program = "$a";
    int s = 1000000000;
    int min = 999999990;
    int max = 999999999;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string input = "a";
    string program = "$bcd";
    int s = 1000000000;
    int min = 1000000000;
    int max = 1000000099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "dbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcdbcd";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string input = "top";
    string program = "$coder";
    int s = 1000000000;
    int min = 1000000000;
    int max = 1000000099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "odercodercodercodercodercodercodercodercodercodercodercodercodercodercodercodercodercodercodercoderc";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string input = "a";
    string program = "$qwe";
    int s = 333333363;
    int min = 1000000000;
    int max = 1000000099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "eqweqweqweqweqweqweqweqweqweqweqweqweqweqweqweqweqweqweqweqweqweqweqweqweqweqweqweqweqweqwe---------";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string input = "a";
    string program = "$alexfetisov";
    int s = 1000000000;
    int min = 1000000000;
    int max = 1000000099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "sovalexfetisovalexfetisovalexfetisovalexfetisovalexfetisovalexfetisovalexfetisovalexfetisovalexfetis";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string input = "a";
    string program = "$a";
    int s = 1000000000;
    int min = 999999900;
    int max = 999999999;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string input = "aaaaasassaaaasssssaaaaavvv";
    string program = "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
    int s = 99999999;
    int min = 50;
    int max = 100;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "vvvaaaaasassaaaasssssaaaaavvvaaaaasassaaaasssssaaaa";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string input = "kurerckurkurerckurkurerckurkurerckurkurerckurkur";
    string program = "$s$s$s$ss$s$s$$s$s$s$ss$s$s$$s$s$s$ss$s$s$ssssss";
    int s = 99898458;
    int min = 90000000;
    int max = 90000099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "kurkurerckurkurerckurkurskurerckurkurerckurkurerckurkurerckurkurerckurkurkurerckurkurerckurkurerckur";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string input = "asdf";
    string program = "$a";
    int s = 1000000000;
    int min = 999999900;
    int max = 999999999;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string input = "xy";
    string program = "$a";
    int s = 10000000;
    int min = 1;
    int max = 99;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "xyaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string input = "a";
    string program = "$a";
    int s = 1000000000;
    int min = 1;
    int max = 1;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string input = "lkdsajfksdjfalsdkfj";
    string program = "$$$$$$$$";
    int s = 1000000000;
    int min = 999999900;
    int max = 999999999;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "alsdkfjlkdsajfksdjfalsdkfjlkdsajfksdjfalsdkfjlkdsajfksdjfalsdkfjlkdsajfksdjfalsdkfjlkdsajfksdjfalsdk";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string input = "ljaslkdukashdfijhalksjdfhlkaushldfkadskjfhalskjgdl";
    string program = "$$ja$sklj$bk$a$djf$lbn$kl$jdfl$jash$l$kjha$dlkfjh$";
    int s = 987238978;
    int min = 897893749;
    int max = 897893848;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "fkadskjfhalskjgdldjfljaslkdukashdfijhalksjdfhlkaushldfkadskjfhalskjgdllbnljaslkdukashdfijhalksjdfhlk";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string input = "aghjksldghjksadgb";
    string program = "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
    int s = 500000000;
    int min = 400000000;
    int max = 400000080;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "sadgbaghjksldghjksadgbaghjksldghjksadgbaghjksldghjksadgbaghjksldghjksadgbaghjksld";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string input = "abcdef";
    string program = "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$";
    int s = 1000000000;
    int min = 1000000000;
    int max = 1000000099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "defabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefabcdefa";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string input = "top";
    string program = "$coder";
    int s = 2;
    int min = 1;
    int max = 20;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "topcodercoder-------";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string input = "a";
    string program = "$a";
    int s = 1000000000;
    int min = 999000000;
    int max = 999000099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string input = "a";
    string program = "$b";
    int s = 1000000000;
    int min = 900000001;
    int max = 900000100;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string input = "b";
    string program = "$c";
    int s = 10000000;
    int min = 9999999;
    int max = 10000098;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "ccc-------------------------------------------------------------------------------------------------";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string input = "b";
    string program = "$a";
    int s = 200;
    int min = 1;
    int max = 100;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string input = "a";
    string program = "$b";
    int s = 1000000000;
    int min = 1000000000;
    int max = 1000000000;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "b";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string input = "abcffddgg";
    string program = "$bcdefghijklmnopqrstuvwxyz";
    int s = 39999999;
    int min = 999999910;
    int max = 1000000000;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "bcdefghijklmnopqrstuvwxyzbcdefghijklmnopqrstuvwxyzbcdefghijklmnopqrstuvwxyz----------------";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string input = "asdasdasdas";
    string program = "$$a$$$$$$$$$$$$$$$$$$$$$$$$$$$b";
    int s = 1000000000;
    int min = 1;
    int max = 100;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "asdasdasdasasdasdasdasaasdasdasdasasdasdasdasasdasdasdasasdasdasdasasdasdasdasasdasdasdasasdasdasdas";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string input = "x";
    string program = "$a";
    int s = 1000000000;
    int min = 999999900;
    int max = 999999999;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string input = "a";
    string program = "$meric$";
    int s = 1000000000;
    int min = 250000000;
    int max = 250000050;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "ricamericamericamericamericamericamericamericameric";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string input = "aa";
    string program = "$bb";
    int s = 1000000000;
    int min = 999999910;
    int max = 1000000000;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string input = "a";
    string program = "$b";
    int s = 1000000000;
    int min = 999999900;
    int max = 999999999;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string input = "a";
    string program = "$b";
    int s = 1000000000;
    int min = 990080000;
    int max = 990080099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string input = "a";
    string program = "$b";
    int s = 1000000000;
    int min = 1;
    int max = 100;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "abbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string input = "a";
    string program = "$$";
    int s = 7;
    int min = 512;
    int max = 543;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "--------------------------------";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string input = "top";
    string program = "$$coder";
    int s = 1000000000;
    int min = 1000000000;
    int max = 1000000020;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "pcodertoptopcodercode";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string input = "a";
    string program = "$$";
    int s = 1000000000;
    int min = 1;
    int max = 1;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string input = "c";
    string program = "$a";
    int s = 1000000000;
    int min = 999999901;
    int max = 1000000000;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string input = "aasdfasdfdfhfdghjdtrrlkdsajfksdjfalsdkfj";
    string program = "$$$$$$$$$$$$$$$$$$$$$$$$$$";
    int s = 1000000000;
    int min = 1;
    int max = 100;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "aasdfasdfdfhfdghjdtrrlkdsajfksdjfalsdkfjaasdfasdfdfhfdghjdtrrlkdsajfksdjfalsdkfjaasdfasdfdfhfdghjdtr";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string input = "a";
    string program = "$b";
    int s = 1000000000;
    int min = 1000000000;
    int max = 1000000099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "bb--------------------------------------------------------------------------------------------------";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string input = "aaaaaa";
    string program = "$bbbbb";
    int s = 1000000000;
    int min = 1000000000;
    int max = 1000000099;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string input = "xy";
    string program = "$abbc";
    int s = 1000000000;
    int min = 1;
    int max = 100;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "xyabbcabbcabbcabbcabbcabbcabbcabbcabbcabbcabbcabbcabbcabbcabbcabbcabbcabbcabbcabbcabbcabbcabbcabbcab";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string input = "ad";
    string program = "$b$";
    int s = 80;
    int min = 1000;
    int max = 1090;
    EndlessStringMachine* pObj = new EndlessStringMachine();
    clock_t start = clock();
    string result = pObj->getFragment(input, program, s, min, max);
    clock_t end = clock();
    delete pObj;
    string expected = "adbadbadbadbadbadbadbadbadbadbadbadbadbadbadbadbadbadbadbadbadbadbadbadbadbadbadbadbadbadba";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=22074135&rd=13803&pm=10355
********************************************************************************
#include <algorithm> 
#include <string> 
#include <set> 
#include <map> 
#include <vector> 
#include <queue> 
#include <iostream> 
#include <iterator> 
#include <cmath> 
#include <cstdio> 
#include <cstdlib> 
#include <sstream> 
 
using namespace std; 
 
#define SZ(c) (int)(c).size() 
#define REP(i,n) for (int i=0,_n=(n); i < _n; i++) 
typedef long long LL; 
typedef vector<int> VI; 
typedef vector<VI> VVI; 
 
class EndlessStringMachine { 
public: 
  VI ins; 
  LL c1,c2; 
  LL lens[128]; 
  string inp,pr; 
  char get(int s, LL pos) 
  { 
    if (c1==1) 
    { 
      if (pos < SZ(inp)) 
        return inp[pos]; 
      return pr[((pos-SZ(inp))%c2)+1]; 
    } 
    if (s==0) 
      return inp[pos]; 
    REP(i,SZ(pr)) 
    { 
      if (pr[i]=='$') 
      { 
        if (pos < lens[s-1]) 
          return get(s-1,pos); 
        pos-=lens[s-1]; 
      } 
      else 
      { 
        if (pos==0) 
          return pr[i]; 
        pos--; 
      } 
    } 
    return '-'; 
  } 
  string getFragment(string input, string program, int s, int mn, int mx) { 
    inp = input; 
    pr=program; 
    string res; 
    ins.clear(); 
    REP(i,SZ(pr)) 
      if (pr[i]=='$') 
        ins.push_back(i); 
    c1 = SZ(ins); 
    c2 = SZ(pr)-c1; 
    int ss=s; 
    LL len; 
    if (c1>1) 
    { 
      lens[0] = len = SZ(input); 
      ss=0; 
      while (len<mx && ss<s) 
      { 
        ss++; 
        lens[ss] = len = len*c1+c2; 
      } 
    } 
    else 
      len = SZ(input)+c2*s; 
    res.clear(); 
    for (int i = mn; i <= mx; i++) 
      if (i>len) 
        res.push_back('-'); 
      else 
      { 
        res.push_back(get(ss,i-1)); 
      } 
    return res; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/